LOCAL_PATH := $(call my-dir)
MAIN_LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := libdobby
LOCAL_SRC_FILES := ICON/Dobby/libraries/$(TARGET_ARCH_ABI)/libdobby.a
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/Dobby/
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libcurl
LOCAL_SRC_FILES := curl/curl-android-$(TARGET_ARCH_ABI)/lib/libcurl.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libssl
LOCAL_SRC_FILES := curl/openssl-android-$(TARGET_ARCH_ABI)/lib/libssl.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libcrypto
LOCAL_SRC_FILES := curl/openssl-android-$(TARGET_ARCH_ABI)/lib/libcrypto.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE    := NAROUTODev

LOCAL_CFLAGS := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w
LOCAL_CFLAGS += -fno-rtti -fno-exceptions -fpermissive
LOCAL_CPPFLAGS := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w -Werror -s -std=c++17
LOCAL_CPPFLAGS += -Wno-error=c++11-narrowing -fms-extensions -fno-rtti -fno-exceptions -fpermissive
LOCAL_LDFLAGS += -Wl,--gc-sections,--strip-all, -llog
LOCAL_ARM_MODE := arm

LOCAL_C_INCLUDES += $(MAIN_LOCAL_PATH)

LOCAL_SRC_FILES 		:=  NAROUTO.cpp \
        ICON/tools.cpp \
        ICON/ElfImg.cpp \
        ICON/fake_dlfcn.cpp \
        ICON/plthook_elf.cpp  \
        ICON/android_native_app_glue.c \
        imgui/imgui.cpp    \
        imgui/stb_image.cpp \
        imgui/imgui_draw.cpp\
        imgui/imgui_demo.cpp \
        imgui/imgui_tables.cpp \
        imgui/imgui_widgets.cpp \
        imgui/backends/imgui_impl_android.cpp \
        imgui/backends/imgui_impl_opengl3.cpp \
        ICON/Substrate/hde64.c \
        ICON/Oxorany/oxorany.cpp \
        ICON/Substrate/SubstrateDebug.cpp \
        ICON/Substrate/SubstrateHook.cpp \
        ICON/Substrate/SubstratePosixMemory.cpp \
        ICON/Substrate/And64InlineHook.cpp \
        SDK/PUBGM_Basic.cpp \
        SDK/PUBGM_Basic_functions.cpp \
        SDK/PUBGM_CoreUObject_functions.cpp \
        SDK/PUBGM_Engine_functions.cpp \
        SDK/PUBGM_ShadowTrackerExtra_functions.cpp \
        SDK/PUBGM_Client_functions.cpp \
        ICON/KittyMemory/KittyMemory.cpp \
        ICON/KittyMemory/MemoryPatch.cpp \
        ICON/KittyMemory/MemoryBackup.cpp \
        ICON/KittyMemory/KittyUtils.cpp \
        ICON/base64/base64.cpp \
        
LOCAL_C_INCLUDES := $(LOCAL_PATH)/curl/curl-android-$(TARGET_ARCH_ABI)/include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/curl/openssl-android-$(TARGET_ARCH_ABI)/include

LOCAL_CPP_FEATURES                      := exceptions
LOCAL_LDLIBS                            := -llog -landroid -lEGL -lGLESv2 -lGLESv3 -lGLESv1_CM -lz
LOCAL_STATIC_LIBRARIES := libdobby libcurl libssl libcrypto
include $(BUILD_SHARED_LIBRARY)