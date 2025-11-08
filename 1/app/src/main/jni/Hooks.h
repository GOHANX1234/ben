#include "stdio.h"
#include <stdio.h>
#include <dlfcn.h>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <dlfcn.h>
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
// ============================ CONSTANTS ============================
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
//uintptr_t NewBase = 0, libanogsBase = 0, libUE4Base = 0, libanogsAlloc = 0, libUE4Alloc = 0;
#define _BYTE uint8_t
#define _WORD uint16_t
#define _QWORD uint64_t
#define _DWORD uint32_t
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
// ============================ Define constants ============================
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
#define libanogs "libanogs.so"
#define LibUE4 "libUE4.so"
#define PKG_GL "com.tencent.ig"
#define PKG_VNG "com.vng.pubgmobile"
#define PKG_KR "com.pubg.krmobile"
#define PKG_TW "com.rekoo.pubgm"
#define PKG_IN "com.pubg.imobile"
// ============================ MACROS ============================
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
#define NAROUTOOpenHook(RET, NAME, ARGS) \
  RET(*o##NAME) ARGS; \
  RET h##NAME ARGS
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
#define NAROUTOOpenHookRet0(RET, NAME, ARGS) \
  RET(*o##NAME) ARGS; \
  RET h##NAME ARGS
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
#define UYTP_ZERO(RET, NAME, ARGS) \
    RET(*o##NAME)               \
    ARGS;                       \
    RET h##NAME ARGS            \
    {                           \
    asm volatile( \
    "mov r0, #0\n"  \
    ); \
}
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
#define HOOK_LIB_THUMBOXORANY(lib, offset, ptr, orig) \
    hook((void *)getAbsoluteAddress(oxorany(lib), string2Offset(oxorany(offset)+1)), (void *)ptr, (void **)&orig)
#define HOOK_LIB_THUMB(lib, offset, ptr, orig) hook((void *)getAbsoluteAddress(lib, string2Offset(offset)+1), (void *)ptr, (void **)&orig)
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
#define HOOK_LIB_OXORANY(lib, offset, ptr, orig) \
    hook((void *)getAbsoluteAddress(oxorany(lib), string2Offset(oxorany(offset))), (void *)ptr, (void **)&orig)
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
#define PATCH_OXORANY(lib, offset, hex) \
    patchOffset(oxorany(lib), string2Offset(oxorany(offset)), oxorany(hex), true)*/
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
uintptr_t NewBase = 0, libanogsBase = 0, libUE4Base = 0, libanogsAlloc = 0, libUE4Alloc = 0;
// ============================ Helper Functions ============================
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
bool isAPKRunning(const char* packageName) {
DIR* dir = opendir("/proc/");
if (!dir) return false;
struct dirent* ptr;
char filepath[50], filetext[128];
while ((ptr = readdir(dir)) != nullptr) {
if (ptr->d_type != DT_DIR) continue;
snprintf(filepath, sizeof(filepath), "/proc/%s/cmdline", ptr->d_name);
FILE* fp = fopen(filepath, "r");
if (fp) {
fgets(filetext, sizeof(filetext), fp);
fclose(fp);
if (strcmp(filetext, packageName) == 0) {
closedir(dir);
return true;}}}
closedir(dir);
return false;}
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
bool checkFileForPlugin() {
std::ifstream file("/proc/self/cmdline");
std::string line;
while (file.is_open() && std::getline(file, line)) {
if (line.find(":plugin") != std::string::npos) {
file.close();
kill(getpid(), SIGSTOP);
pthread_exit(NULL);
return true;}}
return false;}
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
void * UYTPAnogs(void *) {
	while (!isLibraryLoaded("libanogs.so")) sleep(1);
	if (!libanogsBase)
	{
		libanogsBase = KittyMemory::getAbsoluteAddress(libanogs, string2Offset("0x0"));
	}
	return nullptr;
	}
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
void * UE4THREAD(void *) {
	while (!isLibraryLoaded("libUE4.so")) sleep(1);
	if (!libUE4Base)
	{
		libUE4Base = KittyMemory::getAbsoluteAddress(LibUE4, string2Offset("0x0"));
	}
return nullptr;
}
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //
extern "C" __attribute__((constructor)) void lib_mmain() {
if (!checkFileForPlugin()) {
pthread_t thread;
pthread_create(&thread, nullptr, UE4THREAD, nullptr);
pthread_create(&thread, nullptr, UYTPAnogs, nullptr);
LOGI("Main thread created successfully.\n");}}

