#include "ICON/Includes.h"
#include "ICON/obfuscate.h"
#include "ICON/Tools.h"
#include "ICON/fake_dlfcn.h"
#include "ICON/Vector3.hpp"
#include "imgui/imgui.h"
#include "imgui/backends/imgui_impl_android.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include "ICON/StrEnc.h"
#include "ICON/plthook.h"
#include "ICON/Arabic.h"
#include "ICON/KittyMemory/MemoryPatch.h"
#include "ICON/MemoryTools.h"
#include "ICON/base64/base64.h"
#include "ICON/Iconcpp.h"
#include "ICON/ImguiPP.cpp"
#include "ICON/Menu.h"
#include "ICON/Font.h"
#include "ICON/Icon.h"
#include "ICON/Includes/Toast.hpp"
#include "ICON/Includes/Logger.h"
#include "ICON/Includes/Utils.h"
#include "ICON/Includes/Macros.h"
#include "ICON/Rect.h"
#include "ICON/json.hpp"
#include "ICON/Items.h"
#include "ICON/XorStr.h"
#define targetLibName OBFUSCATE("libUE4.so")  
#define targetLibName OBFUSCATE("libanort.so")
#define targetLibName OBFUSCATE("libanogs.so")
#define targetLibName OBFUSCATE("libgcloud.so")
using json = nlohmann::json;
#define SLEEP_TIME 1000LL / 60LL
#include "SDK.hpp"
#include "image.h"
#include "ICON/Oxorany/oxorany.h"
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>
float N1, N2, N3, N4;
float B1, B2, B3, B4, B5, B6, B7, B8;
bool Bypass = true;
bool vips = true;
using namespace SDK;
bool het;
bool a32;
float a33;
float a99;
enum language12 {language2 = 0,
language3 = 1};

language12 language1;
#include <curl/curl.h>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>

static int selected_lang;

//========================================================================//
#define GNames_Offset 0x4ae0120
#define GetActorArray_Offset 0x6ad2478
#define GUObject_Offset 0xa1c35d8
#define GNativeAndroidApp_Offset 0x9FF16D0
#define Actors_Offset 0x70
//========================================================================//
uintptr_t MtrEvent_Offset;
#define MtrSkinEvent_Offset 0x4d49144
#define Broadcast_Offset 0x31fb8e4
//========================================================================//
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;
android_app *g_App = 0;
//========================================================================//
static std::string EXP = " ";
json items_data;
std::string g_Token, g_Auth;
bool bValid = false;

bool FpsVip;
bool SmallCross;
float Bullet_Prediction = 1.9;
float Aim_Prediction = 1.2;
float Speed_Aim = 1;
float Aim_Vehicle = 1.2;
float Aim_PosZ = 1.1f;
static char s[64];
char extras[64];
uintptr_t address;
long lastUpdate = 0;
long updateInterval = 10;
uintptr_t UE4;
uintptr_t anogs;
time_t rng = 0;
bool initImGui = false;
int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
static float A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14;
float density = -1;
static int AimTarget = 1;
static int Smoothness = 1;
float Recoil = 0.f;
float AimSpeed = 15.0f;
std::map<int, bool> Items;
std::map<int, float *> ItemColors;
enum EAimTarget {
HEAD,
CHEST,
AUTO};
enum EAimTrigger {
Shooting = 0,
None = 5,
Both =6,
Scoping = 1,
Any = 2};
EAimTrigger Trigger{EAimTrigger::Shooting};
EAimTarget type_target{EAimTarget::AUTO};
bool AIMBUTTON;
bool isBpSpawn = false;
bool isSpawnON= false;
bool isBengpasss = false;
bool isHit;
bool Ipad= false;
float isIpad = 1.3;
struct sConfig {
float Thickness;
float Length;
float SkeletonSize;
float Linesize;
float Pred;
int Line;
struct sPlayerESP {
bool Line;
bool AWM;
bool AIRDROPE;
bool GAMEINFO;
bool RADAR;
bool warning;
bool Resources;
bool Box;
bool Health;
bool Skeleton;
bool Name;
bool Distance;
bool TeamID;
bool Vehicle;
bool NoBot;
bool Grenade;
bool LootBox;
bool Weapon;};
sPlayerESP PlayerESP{0};
struct sAimMenu {
bool Enable;
float Cross;
float FOV;
EAimTarget Target;
bool IgnoreKnocked;
bool IgnoreBot;
bool VisCheck;
bool AimLine;
bool Shake;
bool DistanceTouch;
bool RecoilComparison;
bool Prediction;
float Pred;
float AimSpeed;
float Dist2;
float Recc;
float Meter;
int Smoothness = 1;
int AimTarget = 1;
bool TouchCircle;
float TouchX;
float TouchY;};
sAimMenu AimBot{0};
sAimMenu SilentAim{0};
struct sOther {
bool IpadViewOn = false;
float IpadView;};
sOther Other{0};
struct sColorsESP {
float *Line;
float *Skeleton;
ImVec4 BackgroundColor;
float *SkeletonVisible;};
sColorsESP ColorsESP{0};};
sConfig Config{0};
#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};
//========================================================================//
static UEngine *GEngine = 0;
UWorld *GetWorld() {
while (!GEngine) {GEngine = UObject::FindObject<UEngine>("UAEGameEngine Transient.UAEGameEngine_1"); 
sleep(1); }
if (GEngine){auto ViewPort = GEngine->GameViewport;
if (ViewPort) {return ViewPort->World;
}}return 0;}
//========================================================================//
TNameEntryArray *GetGNames() {return ((TNameEntryArray *(*)()) (UE4 + GNames_Offset))(); }
std::vector<AActor *> getActors() {
auto World = GetWorld();
if (!World)
return std::vector<AActor *>();
auto PersistentLevel = World->PersistentLevel;
if (!PersistentLevel)
return std::vector<AActor *>();
auto Actors = *(TArray<AActor *> *)((uintptr_t) PersistentLevel + Actors_Offset);
std::vector<AActor *> actors;
for (int i = 0; i < Actors.Num(); i++) {auto Actor = Actors[i];
if (Actor) {actors.push_back(Actor); }} return actors; }
struct sRegion {uintptr_t start, end;};
std::vector<sRegion> trapRegions;
bool isObjectInvalid(UObject *obj) {
if (!Tools::IsPtrValid(obj)) {return true;}
if (!Tools::IsPtrValid(obj->ClassPrivate)) {return true;}
if (obj->InternalIndex <= 0) {return true;}
if (obj->NamePrivate.ComparisonIndex <= 0) {return true;}
if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {return true;}
if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end; }) || std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj->ClassPrivate) >= region.start && ((uintptr_t) obj->ClassPrivate) <= region.end; })) {return true;}
return false;}
//========================================================================//
const char *getObjectPath(UObject *Object) {
std::string s;
for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
if (!s.empty())
s += ".";
s += super->GetName();
}return s.c_str();}

template<class T>
void GetAllActors(std::vector<T *> &Actors) {
UGameplayStatics *gGameplayStatics = (UGameplayStatics *) gGameplayStatics->StaticClass();
auto GWorld = GetWorld();
if (GWorld) {
TArray<AActor *> Actors2;
gGameplayStatics->GetAllActorsOfClass((UObject *) GWorld, T::StaticClass(), &Actors2);
for (int i = 0; i < Actors2.Num(); i++) {
Actors.push_back((T *) Actors2[i]);
}}}
//========================================================================//
struct FMath {
static float FRandRange(float Min, float Max) {
float Random = ((float)rand()) / (float)RAND_MAX;
return Min + Random * (Max - Min);}};
int32_t ToColor(float *col) {return ImGui::ColorConvertFloat4ToU32(*(ImVec4 *) (col));}
FRotator ToRotator(FVector local, FVector target) {
FVector rotation = UKismetMathLibrary::Subtract_VectorVector(local, target);
float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);
FRotator newViewAngle = {0};
newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) 3.14159265358979323846);
newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) 3.14159265358979323846);
newViewAngle.Roll = (float) 0.f;
if (rotation.X >= 0.f)
newViewAngle.Yaw += 180.0f;
return newViewAngle;}
//========================================================================//
void NAROUTOHook(FRotator &angles) {
if (angles.Pitch > 180)angles.Pitch -= 360;
if (angles.Pitch < -180) angles.Pitch += 360;
if (angles.Pitch < -75.f) angles.Pitch = -75.f;
else if (angles.Pitch > 75.f) angles.Pitch = 75.f;
while (angles.Yaw < -180.0f) angles.Yaw += 360.0f;
while (angles.Yaw > 180.0f) angles.Yaw -= 360.0f;}
void NAROUTOHook(float *angles) {
if (angles[0] > 180) angles[0] -= 360;
if (angles[0] < -180) angles[0] += 360;
if (angles[0] < -75.f) angles[0] = -75.f;
else if (angles[0] > 75.f) angles[0] = 75.f;
while (angles[1] < -180.0f) angles[1] += 360.0f;
while (angles[1] > 180.0f) angles[1] -= 360.0f;}
void NAROUTOHook(Vector3 angles) {
if (angles.X > 180) angles.X -= 360;
if (angles.X < -180) angles.X += 360;
if (angles.X < -75.f) angles.X = -75.f;
else if (angles.X > 75.f) angles.X = 75.f;
while (angles.Y < -180.0f) angles.Y += 360.0f;
while (angles.Y > 180.0f) angles.Y -= 360.0f;}
//========================================================================//
long GetEpochTime() {
auto duration = std::chrono::system_clock::now().time_since_epoch();
return std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();}
#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)
bool isInsideAimbotFOV(int x, int y) {
if (!Config.AimBot.Cross)
return true;
int circle_x = glWidth / 2;
int circle_y = glHeight / 2;
int rad = Config.AimBot.Cross*0.5f;
return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;}
//========================================================================//
auto EnableAimBotFOV() {
ASTExtraPlayerCharacter *result = 0;
float max = std::numeric_limits<float>::infinity();
auto Actors = getActors();
auto localPlayer = g_LocalPlayer;
auto localController = g_LocalController;
if (localPlayer) {
for (auto Actor : Actors) {
if (isObjectInvalid(Actor))
continue;
if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
auto Player = (ASTExtraPlayerCharacter *) Actor;
auto Target = (ASTExtraPlayerCharacter *) Actor;
float dist = localPlayer->GetDistanceTo(Target) / 100.0f;
if (dist > Config.AimBot.Meter)
continue;
if (Player->PlayerKey == localPlayer->PlayerKey)
continue;
if (Player->TeamID == localPlayer->TeamID)
continue;
if (Player->bDead)
continue;
if (Config.AimBot.IgnoreKnocked) {
if (Player->Health == 0.0f)continue;}
if (Config.AimBot.VisCheck) {
if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) continue;}
if (Config.AimBot.IgnoreBot) {
if (Player->bEnsure) continue;}
auto Root = Player->GetBonePos("Root", {});
auto Head = Player->GetBonePos("Head", {});
FVector2D RootSc, HeadSc;
if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
float height = abs(HeadSc.Y - RootSc.Y);
float width = height * 0.65f;
FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
float dist = FVector2D::Distance(v2Middle, v2Loc);
if (isInsideAimbotFOV((int)middlePoint.X, (int)middlePoint.Y)) {
if (dist < max) {max = dist; result = Player; }}}}}}} return result;}
//========================================================================//
const char *GetVehicleName(ASTExtraVehicleBase *Vehicle) {
switch (Vehicle->VehicleShapeType) {
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
return "Motorbike";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
return "Dacia";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
return "Mini Bus";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
return "Pick Up";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
return "Buggy";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
return "UAZ";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
return "PG117";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
return "Aquarail";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
return "Mirado";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
return "Rony";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
return "Scooter";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
return "Snow Mobile";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
return "Tuk Tuk";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
return "Snow Bike";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
return "Surf Board";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
return "Snow Board";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
return "Amphibious";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
return "Lada Niva";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
return "UAV";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
return "Mega Drop";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
return "Lamborghini";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
return "Gold Mirado";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
return "Big Foot";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
return "UH60"; break; default: return "Vehicle"; break;} return "Vehicle";}
//========================================================================//
class FPSCounter {
protected:
unsigned int m_fps;
unsigned int m_fpscount;
long m_fpsinterval;
public:
FPSCounter() : m_fps(0), m_fpscount(0), m_fpsinterval(0) {}
void update() {
m_fpscount++;
if (m_fpsinterval < time(0)) {
m_fps = m_fpscount;
m_fpscount = 0;
m_fpsinterval = time(0);}}
unsigned int get() const {
return m_fps;}};
FPSCounter fps;
//========================================================================//
void DrawESP(ImDrawList *draw) {
if (AIMBUTTON) {
ImGui::SetNextWindowPos(ImVec2(790, -80), ImGuiCond_FirstUseEver);
ImGui::SetNextWindowSize(ImVec2(210, 210), ImGuiCond_FirstUseEver);
static int clicked = 0;
if (ImGui::Begin("##AIM_ICON", &AIMBUTTON, ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoSavedSettings)){
const ImVec2 pos = ImGui::GetWindowPos();
ImDrawList* draw = ImGui::GetWindowDrawList();
if (Config.AimBot.Enable) {
ImGui::SetCursorPos(ImVec2(110,110));
float sizeReduction = 0.72;
float newSize = 100.0f * sizeReduction;
draw->AddRectFilled(ImVec2(pos.x + 150 - newSize / 2, pos.y + 150 - newSize / 2), ImVec2(pos.x + 150 + newSize / 2, pos.y + 150 + newSize / 2), ImColor(0, 0, 0, 70), 100.0f);
float circleRadius = 8.0f;
draw->AddCircle(ImVec2(pos.x + 150, pos.y + 150), circleRadius, ImColor(0, 0, 0, 0));
draw->AddCircleFilled(ImVec2(pos.x + 150, pos.y + 150), 6.0f, ImColor(0, 255, 0, 120));
float crosshairLength = 21.0f;
float lineThickness = 4.0f;
draw->AddLine(ImVec2(pos.x + 150 - crosshairLength, pos.y + 150 - crosshairLength), ImVec2(pos.x + 150 - circleRadius, pos.y + 150 - circleRadius), ImColor(0, 255, 0, 180), lineThickness);
draw->AddLine(ImVec2(pos.x + 150 + circleRadius, pos.y + 150 - circleRadius), ImVec2(pos.x + 150 + crosshairLength, pos.y + 150 - crosshairLength), ImColor(0, 255, 0, 180), lineThickness);
draw->AddLine(ImVec2(pos.x + 150 - crosshairLength, pos.y + 150 + crosshairLength), ImVec2(pos.x + 150 - circleRadius, pos.y + 150 + circleRadius), ImColor(0, 255, 0, 180), lineThickness);
draw->AddLine(ImVec2(pos.x + 150 + circleRadius, pos.y + 150 + circleRadius), ImVec2(pos.x + 150 + crosshairLength, pos.y + 150 + crosshairLength), ImColor(0, 255, 0, 180), lineThickness);
static bool clickInProgress = false;
static float clickStartTime = 0;
if (ImGui::IsMouseHoveringRect(ImVec2(pos.x + 150 - newSize / 2, pos.y + 150 - newSize / 2), ImVec2(pos.x + 150 + newSize / 2, pos.y + 150 + newSize / 2))) {
if (ImGui::IsMouseClicked(ImGuiMouseButton_Left)) {clickInProgress = true; clickStartTime = ImGui::GetTime();}}
if (clickInProgress && ImGui::IsMouseReleased(ImGuiMouseButton_Left)) {clickInProgress = false; float currentTime = ImGui::GetTime(); float clickDuration = currentTime - clickStartTime;
if (clickDuration < 0.2f) {Config.AimBot.Enable = !Config.AimBot.Enable;}}
}else{
ImGui::SetCursorPos(ImVec2(110,110));
float sizeReduction = 0.72;
float newSize = 100.0f * sizeReduction;
draw->AddRectFilled(ImVec2(pos.x + 150 - newSize / 2, pos.y + 150 - newSize / 2), ImVec2(pos.x + 150 + newSize / 2, pos.y + 150 + newSize / 2), ImColor(0, 0, 0, 70), 100.0f);
float circleRadius = 12.0f;
draw->AddCircle(ImVec2(pos.x + 150, pos.y + 150), circleRadius, ImColor(0, 0, 0, 0));
draw->AddCircleFilled(ImVec2(pos.x + 150, pos.y + 150), 6.0f, ImColor(255, 255, 255, 120));
float crosshairLength = 29.0f;
float lineThickness = 4.0f;
draw->AddLine(ImVec2(pos.x + 150 - crosshairLength, pos.y + 150), ImVec2(pos.x + 150 - circleRadius, pos.y + 150), ImColor(255, 255, 255, 180), lineThickness);
draw->AddLine(ImVec2(pos.x + 150 + circleRadius, pos.y + 150), ImVec2(pos.x + 150 + crosshairLength, pos.y + 150), ImColor(255, 255, 255, 180), lineThickness);
draw->AddLine(ImVec2(pos.x + 150, pos.y + 150 - crosshairLength), ImVec2(pos.x + 150, pos.y + 150 - circleRadius), ImColor(255, 255, 255, 180), lineThickness);
draw->AddLine(ImVec2(pos.x + 150, pos.y + 150 + circleRadius), ImVec2(pos.x + 150, pos.y + 150 + crosshairLength), ImColor(255, 255, 255, 180), lineThickness);
static bool clickInProgress = false;
static float clickStartTime = 0;
if (ImGui::IsMouseHoveringRect(ImVec2(pos.x + 150 - newSize / 2, pos.y + 150 - newSize / 2), ImVec2(pos.x + 150 + newSize / 2, pos.y + 150 + newSize / 2))) {
if (ImGui::IsMouseClicked(ImGuiMouseButton_Left)) {clickInProgress = true; clickStartTime = ImGui::GetTime();}}
if (clickInProgress && ImGui::IsMouseReleased(ImGuiMouseButton_Left)) {clickInProgress = false; float currentTime = ImGui::GetTime(); float clickDuration = currentTime - clickStartTime;
if (clickDuration < 0.2f) {Config.AimBot.Enable = !Config.AimBot.Enable;}}}}}
//========================================================================//
auto Actors = getActors();
int totalEnemies = 0, totalBots = 0;
ASTExtraPlayerCharacter *localPlayer = 0;
ASTExtraPlayerController *localController = 0;
ASTExtraPlayerController *asw = 0;
bool foundasw = false;
if (vips) {} 
//========================================================================//
for (int i = 0; i < Actors.size() && !foundasw; i++) {
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;
if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
asw = (ASTExtraPlayerController *) Actor;
foundasw = true;
break;}}
if (asw) {
if(!isSpawnON){isSpawnON = true;}
}else{
if(isSpawnON){isSpawnON = false;}} 
//========================================================================//
for (int i = 0; i < Actors.size(); i++) {
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;
if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
localController = (ASTExtraPlayerController *) Actor;
break;}}
if (localController) {
for (int i = 0; i < Actors.size(); i++) {
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;
if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey ==
localController->PlayerKey) {
localPlayer = (ASTExtraPlayerCharacter *) Actor;
break;}}}
if (localPlayer) {
if (localPlayer->PartHitComponent) {
auto ConfigCollisionDistSqAngles = localPlayer->PartHitComponent->ConfigCollisionDistSqAngles;
for (int j = 0; j < ConfigCollisionDistSqAngles.Num(); j++) {ConfigCollisionDistSqAngles[j].Angle = 90.0f;}
localPlayer->PartHitComponent->ConfigCollisionDistSqAngles = ConfigCollisionDistSqAngles;}
if (Config.Other.IpadViewOn) {localPlayer->ThirdPersonCameraComponent->SetFieldOfView(Config.Other.IpadView);}
//========================================================================//
auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
if (WeaponManagerComponent) {
auto Slot = WeaponManagerComponent->GetCurrentUsingPropSlot();
if ((int)Slot.GetValue() >= 1 && (int)Slot.GetValue() <= 3) {
auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
if (CurrentWeaponReplicated) {
auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
if (ShootWeaponEntityComp && ShootWeaponEffectComp) {if (SmallCross) {ShootWeaponEntityComp->GameDeviationFactor = 0.0f;}}}}}
//========================================================================//
if (Config.AimBot.Enable) {  
ASTExtraPlayerCharacter *Target = EnableAimBotFOV();
if (Target) {
bool triggerOk = false;
if (Trigger != EAimTrigger::None) {
if (Trigger == EAimTrigger::Shooting) {triggerOk = localPlayer->bIsWeaponFiring;
} else if (Trigger == EAimTrigger::Scoping) {triggerOk = localPlayer->bIsGunADS;
} else if (Trigger == EAimTrigger::Both) {triggerOk = localPlayer->bIsWeaponFiring && localPlayer->bIsGunADS;
} else if (Trigger == EAimTrigger::Any) {triggerOk = localPlayer->bIsWeaponFiring || localPlayer->bIsGunADS;}
} else triggerOk = true;
if (triggerOk) {FVector targetAimPos = Target->GetBonePos("Head", {});
if (type_target == EAimTarget::CHEST) { targetAimPos.Z -= 50.0f; }
auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
if (WeaponManagerComponent) {
auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
if (CurrentWeaponReplicated) {
auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
if (ShootWeaponComponent) {
UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
if (ShootWeaponEntityComponent) {
ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
if (CurrentVehicle) {
FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
float dist = localPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
} else {FVector Velocity = Target->GetVelocity();
float dist = localPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));}
localController->SetControlRotation(ToRotator(localController->PlayerCameraManager->CameraCache.POV.Location, targetAimPos), "");}                                                                                                        
if (Config.AimBot.RecoilComparison) {
if (g_LocalPlayer->bIsGunADS) {
if (g_LocalPlayer->bIsWeaponFiring) {
float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f;                                                                                 
targetAimPos.Z -= dist * Config.AimBot.Recc;}}}
localController->SetControlRotation(ToRotator(localController->PlayerCameraManager->CameraCache.POV.Location, targetAimPos), "");
}}}}}}}                    
//========================================================================//
for (int i = 0; i < Actors.size(); i++) {
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;
if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
auto Player = (ASTExtraPlayerCharacter *) Actor;
long PlayerBoxClrCf, PlayerBoxClrCf2;
float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
if (Distance > 500.0f)
continue;
if (Player->PlayerKey == localController->PlayerKey)
continue;
if (Player->TeamID == localController->TeamID)
continue;
if (Player->bDead)
continue;
if (Player->bEnsure) {
totalBots++;
PlayerBoxClrCf = IM_COL32(255, 255, 255, 255);
PlayerBoxClrCf2 = IM_COL32(255, 255, 255, 25);
if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
PlayerBoxClrCf = IM_COL32(255, 255, 255, 255);
PlayerBoxClrCf2 = IM_COL32(255, 255, 255, 25);
}} else {
totalEnemies++;
PlayerBoxClrCf = IM_COL32(254, 0, 0, 255);
PlayerBoxClrCf2 = IM_COL32(254, 0, 0, 25);
if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
PlayerBoxClrCf = IM_COL32(255, 140, 0, 255);
PlayerBoxClrCf2 = IM_COL32(255, 140, 0, 25);}}
if (Config.PlayerESP.NoBot)
if (Player->bEnsure)
continue;
else
totalEnemies++;
auto HeadPos = Player->GetBonePos("Head", {});
ImVec2 HeadPosSC;
auto RootPos = Player->GetBonePos("Root", {});
ImVec2 RootPosSC;
auto upper_r = Player->GetBonePos("upperarm_r", {});
ImVec2 upper_rPoSC;
auto lowerarm_r = Player->GetBonePos("lowerarm_r", {});
ImVec2 lowerarm_rPoSC;
auto hand_r = Player->GetBonePos("hand_r", {});
ImVec2 hand_rPoSC;
auto upper_l = Player->GetBonePos("upperarm_l", {});
ImVec2 upper_lPoSC;
auto lowerarm_l = Player->GetBonePos("lowerarm_l", {});
ImVec2 lowerarm_lSC;
auto hand_l = Player->GetBonePos("hand_l", {});
ImVec2 hand_lPoSC;
auto thigh_l = Player->GetBonePos("thigh_l", {});
ImVec2 thigh_lPoSC;
auto calf_l = Player->GetBonePos("calf_l", {});
ImVec2 calf_lPoSC;
auto foot_l = Player->GetBonePos("foot_l", {});
ImVec2 foot_lPoSC;
auto thigh_r = Player->GetBonePos("thigh_r", {});
ImVec2 thigh_rPoSC;
auto calf_r = Player->GetBonePos("calf_r", {});
ImVec2 calf_rPoSC;
auto foot_r = Player->GetBonePos("foot_r", {});
ImVec2 foot_rPoSC;
auto neck_01 = Player->GetBonePos("neck_01", {});
ImVec2 neck_01PoSC;
auto pelvis = Player->GetBonePos("pelvis", {});
ImVec2 pelvisPoSC;
if (W2S(HeadPos, (FVector2D *)&HeadPosSC) && W2S(upper_r, (FVector2D *)&upper_rPoSC) && W2S(upper_l, (FVector2D *)&upper_lPoSC) && W2S(lowerarm_r, (FVector2D *)&lowerarm_rPoSC) && W2S(hand_r, (FVector2D *)&hand_rPoSC) && W2S(lowerarm_l, (FVector2D *)&lowerarm_lSC) && W2S(hand_l, (FVector2D *)&hand_lPoSC) && W2S(thigh_l, (FVector2D *)&thigh_lPoSC) && W2S(calf_l, (FVector2D *)&calf_lPoSC) && W2S(foot_l, (FVector2D *)&foot_lPoSC) && W2S(thigh_r, (FVector2D *)&thigh_rPoSC) && W2S(calf_r, (FVector2D *)&calf_rPoSC) && W2S(foot_r, (FVector2D *)&foot_rPoSC) && W2S(neck_01, (FVector2D *)&neck_01PoSC) && W2S(pelvis, (FVector2D *)&pelvisPoSC) && W2S(RootPos, (FVector2D *)&RootPosSC)) {
int segment;
if (Config.PlayerESP.Line) {draw->AddLine({(float)glWidth / 2, 90.0f}, HeadPosSC, PlayerBoxClrCf, Config.Linesize);}
if (Config.AimBot.Enable) {draw->AddCircle(ImVec2(glWidth / 2, glHeight / 2), Config.AimBot.Cross*0.5f, IM_COL32(255, 255, 255, 255), segment, (float) 1.0);} 
//========================================================================//
if (Config.PlayerESP.Skeleton) {
float boxWidth = 7.f - Distance * 0.03;
draw->AddLine({upper_rPoSC.x, upper_rPoSC.y}, neck_01PoSC, PlayerBoxClrCf, Config.SkeletonSize);
draw->AddLine({upper_lPoSC.x, upper_lPoSC.y}, neck_01PoSC, PlayerBoxClrCf, Config.SkeletonSize);
draw->AddLine({upper_rPoSC.x, upper_rPoSC.y}, lowerarm_rPoSC, PlayerBoxClrCf, Config.SkeletonSize);
draw->AddLine({lowerarm_rPoSC.x, lowerarm_rPoSC.y}, hand_rPoSC, PlayerBoxClrCf, Config.SkeletonSize);
draw->AddLine({upper_lPoSC.x, upper_lPoSC.y}, lowerarm_lSC, PlayerBoxClrCf, Config.SkeletonSize);
draw->AddLine({lowerarm_lSC.x, lowerarm_lSC.y}, hand_lPoSC, PlayerBoxClrCf, Config.SkeletonSize);
draw->AddLine({thigh_rPoSC.x, thigh_rPoSC.y}, thigh_lPoSC, PlayerBoxClrCf, Config.SkeletonSize);
draw->AddLine({thigh_lPoSC.x, thigh_lPoSC.y}, calf_lPoSC, PlayerBoxClrCf, Config.SkeletonSize);
draw->AddLine({calf_lPoSC.x, calf_lPoSC.y}, foot_lPoSC, PlayerBoxClrCf, Config.SkeletonSize);
draw->AddLine({thigh_rPoSC.x, thigh_rPoSC.y}, calf_rPoSC, PlayerBoxClrCf, Config.SkeletonSize);
draw->AddLine({calf_rPoSC.x, calf_rPoSC.y}, foot_rPoSC, PlayerBoxClrCf, Config.SkeletonSize);
draw->AddLine({neck_01PoSC.x, neck_01PoSC.y}, pelvisPoSC, PlayerBoxClrCf, Config.SkeletonSize);
draw->AddLine({neck_01PoSC.x, neck_01PoSC.y}, HeadPosSC, PlayerBoxClrCf, Config.SkeletonSize);}}
//========================================================================//
if (Config.PlayerESP.Box) {
float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
float boxWidth = boxHeight * 0.65f;
ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2), HeadPosSC.y};
ImVec2 vEnd = {vStart.x + boxWidth, vStart.y + boxHeight};
draw->AddRect(vStart, vEnd, PlayerBoxClrCf, 1.5f, 240, 1.5f);
draw->AddRectFilled(vStart, vEnd, PlayerBoxClrCf2, 1.5f, 240);}
//========================================================================//
if (Config.PlayerESP.Health) {
int CurHP = (int) std::max(0, std::min((int) Player->Health,
 (int) Player->HealthMax));
int MaxHP = (int) Player->HealthMax;
long HPColor = IM_COL32(std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255),std::min((510 * CurHP) / MaxHP, 190), 0, 110);
if (Player->Health == 0.0f && !Player->bDead) {
HPColor = IM_COL32(0, 0, 255, 110);
CurHP = Player->NearDeathBreath;
if (Player->NearDeatchComponent) {
MaxHP = Player->NearDeatchComponent->BreathMax;}}
float boxWidth = density / 2.3f;
boxWidth -= std::min(((boxWidth / 2) / 0.001f) * Distance,boxWidth / 2);
float boxHeight = boxWidth * 0.16f;
ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2),HeadPosSC.y - (boxHeight * 1.73f)};
ImVec2 vEndFilled = {vStart.x + (CurHP * boxWidth / MaxHP),vStart.y + boxHeight};
ImVec2 vEndRect = {vStart.x + boxWidth, vStart.y + boxHeight};
draw->AddRectFilled(vStart, vEndFilled, HPColor, 3.0f);
draw->AddRect(vStart, vEndRect, IM_COL32(0, 0, 0, 155), 3.0f);}
//========================================================================//
if (Config.PlayerESP.Name || Config.PlayerESP.TeamID || Config.PlayerESP.Weapon) {
float boxWidth = density / 2.3f;
boxWidth -= std::min(((boxWidth / 2) / 0.001f) * Distance, boxWidth / 2);
float boxHeight = boxWidth * 0.16f;
std::string s;
if (Config.PlayerESP.TeamID) {
if (Player->bEnsure) {
s += "";
}else{
s += " ";
s += std::to_string(Player->TeamID);
s += " |  ";}}

if (Config.PlayerESP.Name) {
if (Player->bEnsure) {
s += "[ BOT ]";
}else{
s += Player->PlayerName.ToString();}}
//========================================================================//
if (Config.PlayerESP.Weapon) {
auto WeaponManagerComponent = Player->WeaponManagerComponent;
if (WeaponManagerComponent) {
auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
if (CurrentWeaponReplicated) {
auto WeaponId = (int)CurrentWeaponReplicated->GetWeaponID();
auto Sbullet= CurrentWeaponReplicated->CurBulletNumInClip;
auto Mbullet = CurrentWeaponReplicated->CurMaxBulletNumInOneClip;
if (WeaponId) {
std::string s;
s += CurrentWeaponReplicated->GetWeaponName().ToString();
s += " : ";
s += std::to_string((int)Sbullet);
s += "";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 33.0f));
draw->AddText(NULL, ((float) density / 33.0f), {HeadPosSC.x - (textSize.x / 2), HeadPosSC.y - (boxHeight * 2.6f)}, IM_COL32(255, 255, 255, 255), s.c_str());}}}}

auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 34.0f));
draw->AddText(NULL, ((float) density / 34.0f),{HeadPosSC.x - (textSize.x / 2),HeadPosSC.y - (boxHeight * 1.66f)},IM_COL32(255, 255, 255, 255), s.c_str());}
//========================================================================//
if (Config.PlayerESP.Distance) {
std::string s;
s += std::to_string((int) Distance);
s += "M";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 30.0f));
draw->AddText(NULL, ((float) density / 30.0f),{RootPosSC.x - (textSize.x / 2),RootPosSC.y},
IM_COL32(255, 255, 255, 255), s.c_str());}}
 //========================================================================//
if (Config.PlayerESP.Resources) {}
if (Config.PlayerESP.AWM) {}
if (Config.PlayerESP.RADAR) {}
if (Config.PlayerESP.AIRDROPE) {}
if (Config.PlayerESP.warning) {} 
//========================================================================//
if (Config.PlayerESP.Grenade) {
if (Actors[i]->IsA(ASTExtraGrenadeBase::StaticClass())) {
auto Genn = (ASTExtraGrenadeBase *) Actors[i]; 
auto resa = getObjectPath(Genn);
if (strstr(resa, "BP_Grenade_Shoulei_C")){
if (!Genn->RootComponent)
continue;
float Distance = Genn->GetDistanceTo(localPlayer) / 100.f;
if (Distance <= 150.f) { 
FVector2D GrenadePos;
if (W2S(Genn->K2_GetActorLocation(), &GrenadePos)) {
std::string s;
s +=" Grenade (";
s += std::to_string((int) Distance);
s += "m)";
std::string t;
t += "WARNING, Grenade Near You!";
auto textSize = ImGui::CalcTextSize2(t.c_str(), 0, ((float) density / 17.0f));
draw->AddText(NULL, ((float) density / 17.0f), ImVec2(glWidth / 2 - (textSize.x / 2), 110), IM_COL32(255, 0, 0, 220), t.c_str());
draw->AddText(NULL, ((float) density / 25.0f), {GrenadePos.X, GrenadePos.Y}, IM_COL32(255, 0, 0, 255), s.c_str());}}}}}
//========================================================================//
if (Config.PlayerESP.Grenade) {
if (Actors[i]->IsA(ASTExtraGrenadeBase::StaticClass())) {
auto Genn = (ASTExtraGrenadeBase *) Actors[i]; 
auto resa = getObjectPath(Genn);
if (strstr(resa, "BP_Grenade_Burn_C")){
if (!Genn->RootComponent)
continue;
float Distance = Genn->GetDistanceTo(localPlayer) / 100.f;
if (Distance <= 150.f) {
FVector2D GrenadePos;
if (W2S(Genn->K2_GetActorLocation(), &GrenadePos)) {
std::string s;
s +=" Molotov (";
s += std::to_string((int) Distance); 
s += "m)";
std::string t;
t += "WARNING, Molotov Near You!";
auto textSize = ImGui::CalcTextSize2(t.c_str(), 0, ((float) density / 17.0f));
draw->AddText(NULL, ((float) density / 17.0f), ImVec2(glWidth / 2 - (textSize.x / 2), 130), IM_COL32(255, 0, 0, 220), t.c_str());
draw->AddText(NULL, ((float) density / 25.0f), {GrenadePos.X, GrenadePos.Y}, IM_COL32(255, 0, 0, 255), s.c_str());}}}}}
 //========================================================================//
if (Config.PlayerESP.Grenade) {
if (Actors[i]->IsA(ASTExtraGrenadeBase::StaticClass())) {
auto Genn = (ASTExtraGrenadeBase *) Actors[i]; 
auto resa = getObjectPath(Genn);
if (strstr(resa, "BP_Grenade_Smoke_C")){
if (!Genn->RootComponent)
continue;
float Distance = Genn->GetDistanceTo(localPlayer) / 100.f;
if (Distance <= 150.f) {
FVector2D GrenadePos;
if (W2S(Genn->K2_GetActorLocation(), &GrenadePos)) {
std::string s;
s +=" Smoke (";
s += std::to_string((int) Distance); 
s += "m)";
std::string t;
t += "WARNING, Smoke Near You!";
auto textSize = ImGui::CalcTextSize2(t.c_str(), 0, ((float) density / 17.0f));
draw->AddText(NULL, ((float) density / 17.0f), ImVec2(glWidth / 2 - (textSize.x / 2), 150), IM_COL32(255, 0, 0, 220), t.c_str());
draw->AddText(NULL, ((float) density / 25.0f), {GrenadePos.X, GrenadePos.Y}, IM_COL32(255, 0, 0, 255), s.c_str());}}}}}
//========================================================================//
if (Config.PlayerESP.LootBox) {
if (Actors[i]->IsA(APickUpListWrapperActor::StaticClass())) {
auto DeadBox = (APickUpListWrapperActor *) Actors[i];
auto RootComponent = DeadBox->RootComponent;
if (!RootComponent)
continue;
float Distance = DeadBox->GetDistanceTo(localPlayer) / 100.f;
if (Distance <= 150.f) {
FVector2D DeadBoxPos;
if (W2S(DeadBox->K2_GetActorLocation(), &DeadBoxPos)) {
std::string s = "Box";
s += " (";
s += std::to_string((int) Distance);
s += "m)";
draw->AddText(NULL, ((float) density / 25.0f), {DeadBoxPos.X, DeadBoxPos.Y}, IM_COL32(255, 255, 255, 200), s.c_str());}}}}
//========================================================================//
if (Config.PlayerESP.Vehicle) {
if (Actors[i]->IsA(ASTExtraVehicleBase::StaticClass())) {
auto Vehicle = (ASTExtraVehicleBase *) Actors[i];
if (!Vehicle->Mesh)
continue;
float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;
FVector2D vehiclePos;
if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos)) {
std::string s = GetVehicleName(Vehicle);
s += " [";
s += std::to_string((int) Distance);
s += "m]";
draw->AddText(NULL, ((float) density / 30.0f),{vehiclePos.X-10, vehiclePos.Y-10},IM_COL32(255, 255, 000, 255), s.c_str());}}}
//========================================================================//
if (Actors[i]->IsA(APickUpWrapperActor::StaticClass())) {
auto PickUp = (APickUpWrapperActor *) Actors[i];
if (Items[PickUp->DefineID.TypeSpecificID]) {
auto RootComponent = PickUp->RootComponent;
if (!RootComponent)
continue;
float Distance = PickUp->GetDistanceTo(localPlayer) / 100.f;
FVector2D itemPos;
if (W2S(PickUp->K2_GetActorLocation(), &itemPos)) {
std::string s;
uint32_t tc = 0xFF000000;
for (auto &category: items_data) {
for (auto &item: category["Items"]) {
if (item["itemId"] == PickUp->DefineID.TypeSpecificID) {
s = item["itemName"].get<std::string>();
tc = strtoul(item["itemTextColor"].get<std::string>().c_str(),0, 16);
break;}}}
s += " - ";
s += std::to_string((int) Distance);
s += "m";
draw->AddText(NULL, ((float) density / 25.0f),{itemPos.X, itemPos.Y}, tc, s.c_str());}}}
}//close actors
}//close localplayer
}//close localcontroller
//========================================================================//
#define ICON_FA_USER "\xef\x80\x87"
#define ICON_FA_ROBOT "\xef\x84\x96"
#define ICON_FA_SHIELD "\xef\x84\xb9"
#define ICON_FA_EXCLAMATION_TRIANGLE "\xef\x81\xb1"
#define ICON_FA_CHECK "\xef\x81\x99"
//========================================================================//
g_LocalController = localController;
g_LocalPlayer = localPlayer;
int TotalCount = totalEnemies;

ImU32 CountCol;
const char* stTxt;
ImU32 stCol;
DrawImage(glWidth / 2 + -33.708, -11.236, 132.041, 75.150, NAROUTOxCOUNT.textureId);
if (totalEnemies >= 12) {
CountCol = IM_COL32(255, 0, 0, 255);
stTxt = ICON_FA_EXCLAMATION_TRIANGLE " Danger number of players";
stCol = IM_COL32(255, 0, 0, 255);
} else if (totalEnemies >= 6) {
CountCol = IM_COL32(255, 165, 0, 255);
stTxt = ICON_FA_SHIELD " Their number is large";
stCol = IM_COL32(255, 165, 0, 255);
} else {CountCol = IM_COL32(0, 255, 0, 255);
stTxt = ICON_FA_CHECK " Safe Now";
stCol = IM_COL32(0, 255, 0, 255);}
    
static int FullTotalEnemies = 0;
static float Anim = 0.0f;

if (totalEnemies > FullTotalEnemies) {Anim = 3.0f;}
FullTotalEnemies = totalEnemies;

Anim *= 0.9f;
sprintf(extras, ICON_FA_USER " Players | %d  ", totalEnemies);
ImGui::GetForegroundDrawList()->AddText(ImVec2(glWidth / 2 - 52.5f + Anim, 58.5f),CountCol, extras);

sprintf(extras, ICON_FA_ROBOT " Bot | %d  ", totalBots);
ImGui::GetForegroundDrawList()->AddText(ImVec2(glWidth / 2 + 23.0f, 58.5f),IM_COL32(255, 255, 255, 255), extras);
ImGui::GetForegroundDrawList()->AddText(ImVec2(glWidth / 2 - 40.0f, 80.0f),stCol, stTxt);
//========================================================================//
fps.update();
}//close_drawesp
//========================================================================//
void loadConfig() {
int fd1 = open("/data/data/com.tencent.ig/vip1.bin", O_RDONLY);
int fd2 = open("/data/data/com.pubg.krmobile/vip2.bin", O_RDONLY);
int fd3 = open("/data/data/com.vng.pubgm/vip3.bin", O_RDONLY);
int fd4 = open("/data/data/com.rekoo.pubgm/vip4.bin", O_RDONLY);
read(fd1, &Config.PlayerESP, sizeof(Config.PlayerESP));
read(fd2, &Config.PlayerESP, sizeof(Config.PlayerESP));
read(fd3, &Config.PlayerESP, sizeof(Config.PlayerESP));
read(fd4, &Config.PlayerESP, sizeof(Config.PlayerESP));
read(fd1, &Config.Other, sizeof(Config.Other));
read(fd2, &Config.Other, sizeof(Config.Other));
read(fd3, &Config.Other, sizeof(Config.Other));
read(fd4, &Config.Other, sizeof(Config.Other));
read(fd1, &AIMBUTTON, sizeof(AIMBUTTON));
read(fd2, &AIMBUTTON, sizeof(AIMBUTTON));
read(fd3, &AIMBUTTON, sizeof(AIMBUTTON));
read(fd4, &AIMBUTTON, sizeof(AIMBUTTON));
read(fd1, &s, sizeof(s));
read(fd2, &s, sizeof(s));
read(fd3, &s, sizeof(s));
read(fd4, &s, sizeof(s)); 
close(fd1);
close(fd2);
close(fd3);
close(fd4);}
//========================================================================//
void DeleteConfig() {
int fd1 = remove("/data/data/com.tencent.ig/vip1.bin");
int fd2 = remove("/data/data/com.pubg.krmobile/vip2.bin");
int fd3 = remove("/data/data/com.vng.pubgmobile/vip3.bin");
int fd4 = remove("/data/data/com.rekoo.pubgm/vip4.bin");
close(fd1);
close(fd2);
close(fd3);
close(fd4);}
//========================================================================//
void saveConfig() {
int fd1 = open("/data/data/com.tencent.ig/vip1.bin", O_WRONLY | O_CREAT);
int fd2 = open("/data/data/com.pubg.krmobile/vip2.bin", O_WRONLY | O_CREAT);
int fd3 = open("/data/data/com.vng.pubgmobile/vip3.bin", O_WRONLY | O_CREAT);
int fd4 = open("/data/data/com.rekoo.pubgm/vip4.bin", O_WRONLY | O_CREAT);
system("chmod 777 /data/data/com.tencent.ig/vip1.bin");
system("chmod 777 /data/data/com.pubg.krmobile/vip2.bin");
system("chmod 777 /data/data/com.vng.pubgmobile/vip3.bin");
system("chmod 777 /data/data/com.rekoo.pubgm/vip4.bin");
write(fd1, &Config.PlayerESP, sizeof(Config.PlayerESP));
write(fd2, &Config.PlayerESP, sizeof(Config.PlayerESP));
write(fd3, &Config.PlayerESP, sizeof(Config.PlayerESP));
write(fd4, &Config.PlayerESP, sizeof(Config.PlayerESP));
write(fd1, &Config.Other, sizeof(Config.Other));
write(fd2, &Config.Other, sizeof(Config.Other));
write(fd3, &Config.Other, sizeof(Config.Other));
write(fd4, &Config.Other, sizeof(Config.Other));
write(fd1, &AIMBUTTON, sizeof(AIMBUTTON));
write(fd2, &AIMBUTTON, sizeof(AIMBUTTON));
write(fd3, &AIMBUTTON, sizeof(AIMBUTTON));
write(fd4, &AIMBUTTON, sizeof(AIMBUTTON));
write(fd1, &s, sizeof(s));
write(fd2, &s, sizeof(s));
write(fd3, &s, sizeof(s));
write(fd4, &s, sizeof(s));
close(fd1);
close(fd2);
close(fd3);
close(fd4);}
//========================================================================//
void loadCFG(){loadConfig();}
void removeCFG(){DeleteConfig();}
void saveCFG(){saveConfig();}
//========================================================================//
const char *GetPackageName() {
FILE *f = fopen("/proc/self/cmdline", "rb");
if (f) {
char *buf = new char[64];
fread(buf, sizeof(char), 64, f);
fclose(f);
return buf;}
return 0;}
//========================================================================//
std::string getClipboardText() {
if (!g_App)
return "";
auto activity = g_App->activity;
if (!activity)
return "";
auto vm = activity->vm;
if (!vm)
return "";
auto object = activity->clazz;
if (!object)
return "";
std::string result;
JNIEnv *env;
vm->AttachCurrentThread(&env, 0); {
auto ContextClass = env->FindClass("android/content/Context");
auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");
auto str = env->NewStringUTF("clipboard");
auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);
env->DeleteLocalRef(str);
auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
auto getText = env->GetMethodID(ClipboardManagerClass, "getText", "()Ljava/lang/CharSequence;");
auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString", "()Ljava/lang/String;");
auto text = env->CallObjectMethod(clipboardManager, getText);
if (text) {
str = (jstring) env->CallObjectMethod(text, toStringMethod);
result = env->GetStringUTFChars(str, 0);
env->DeleteLocalRef(str);
env->DeleteLocalRef(text);}
env->DeleteLocalRef(CharSequenceClass);
env->DeleteLocalRef(ClipboardManagerClass);
env->DeleteLocalRef(clipboardManager);
env->DeleteLocalRef(ContextClass);}
vm->DetachCurrentThread();
return result;}
//========================================================================//
const char *GetAndroidID(JNIEnv *env, jobject context) {
jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
jmethodID getContentResolverMethod = env->GetMethodID(contextClass, /*getContentResolver*/ StrEnc("E8X\\7r7ys_Q%JS+L+~", "\x22\x5D\x2C\x1F\x58\x1C\x43\x1C\x1D\x2B\x03\x40\x39\x3C\x47\x3A\x4E\x0C", 18).c_str(), /*()Landroid/content/ContentResolver;*/ StrEnc("8^QKmj< }5D:9q7f.BXkef]A*GYLNg}B!/L", "\x10\x77\x1D\x2A\x03\x0E\x4E\x4F\x14\x51\x6B\x59\x56\x1F\x43\x03\x40\x36\x77\x28\x0A\x08\x29\x24\x44\x33\x0B\x29\x3D\x08\x11\x34\x44\x5D\x77", 35).c_str());
jclass settingSecureClass = env->FindClass(/*android/provider/Settings$Secure*/ StrEnc("T1yw^BCF^af&dB_@Raf}\\FS,zT~L(3Z\"", "\x35\x5F\x1D\x05\x31\x2B\x27\x69\x2E\x13\x09\x50\x0D\x26\x3A\x32\x7D\x32\x03\x09\x28\x2F\x3D\x4B\x09\x70\x2D\x29\x4B\x46\x28\x47", 32).c_str());
jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, /*getString*/ StrEnc("e<F*J5c0Y", "\x02\x59\x32\x79\x3E\x47\x0A\x5E\x3E", 9).c_str(), /*(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;*/ StrEnc("$6*%R*!XO\"m18o,0S!*`uI$IW)l_/_knSdlRiO1T`2sH|Ouy__^}%Y)JsQ:-\"(2_^-$i{?H", "\x0C\x7A\x4B\x4B\x36\x58\x4E\x31\x2B\x0D\x0E\x5E\x56\x1B\x49\x5E\x27\x0E\x69\x0F\x1B\x3D\x41\x27\x23\x7B\x09\x2C\x40\x33\x1D\x0B\x21\x5F\x20\x38\x08\x39\x50\x7B\x0C\x53\x1D\x2F\x53\x1C\x01\x0B\x36\x31\x39\x46\x0C\x15\x43\x2B\x05\x30\x15\x41\x43\x46\x55\x70\x0D\x59\x56\x00\x15\x58\x73", 71).c_str());
auto obj = env->CallObjectMethod(context, getContentResolverMethod);
auto str = (jstring) env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF(/*android_id*/ StrEnc("ujHO)8OfOE", "\x14\x04\x2C\x3D\x46\x51\x2B\x39\x26\x21", 10).c_str()));
return env->GetStringUTFChars(str, 0);}
const char *GetDeviceModel(JNIEnv *env) {
jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("m5I{GKGWBP-VOxkA", "\x0C\x5B\x2D\x09\x28\x22\x23\x78\x2D\x23\x02\x14\x3A\x11\x07\x25", 16).c_str());
jfieldID modelId = env->GetStaticFieldID(buildClass, /*MODEL*/ StrEnc("|}[q:", "\x31\x32\x1F\x34\x76", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());
auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
return env->GetStringUTFChars(str, 0);}
const char *GetDeviceBrand(JNIEnv *env) {
jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("0iW=2^>0zTRB!B90", "\x51\x07\x33\x4F\x5D\x37\x5A\x1F\x15\x27\x7D\x00\x54\x2B\x55\x54", 16).c_str());
jfieldID modelId = env->GetStaticFieldID(buildClass, /*BRAND*/ StrEnc("@{[FP", "\x02\x29\x1A\x08\x14", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());
auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
return env->GetStringUTFChars(str, 0);}
const char *GetPackageName(JNIEnv *env, jobject context) {
jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
jmethodID getPackageNameId = env->GetMethodID(contextClass, /*getPackageName*/ StrEnc("YN4DaP)!{wRGN}", "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18", 14).c_str(), /*()Ljava/lang/String;*/ StrEnc("VnpibEspM(b]<s#[9cQD", "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F", 20).c_str());
auto str = (jstring) env->CallObjectMethod(context, getPackageNameId);
return env->GetStringUTFChars(str, 0);}
const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid) {
jclass uuidClass = env->FindClass(/*java/util/UUID*/ StrEnc("B/TxJ=3BZ_]SFx", "\x28\x4E\x22\x19\x65\x48\x47\x2B\x36\x70\x08\x06\x0F\x3C", 14).c_str());
auto len = strlen(uuid);
jbyteArray myJByteArray = env->NewByteArray(len);
env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *) uuid);
jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, /*nameUUIDFromBytes*/ StrEnc("P6LV|'0#A+zQmoat,", "\x3E\x57\x21\x33\x29\x72\x79\x67\x07\x59\x15\x3C\x2F\x16\x15\x11\x5F", 17).c_str(), /*([B)Ljava/util/UUID;*/ StrEnc("sW[\"Q[W3,7@H.vT0) xB", "\x5B\x0C\x19\x0B\x1D\x31\x36\x45\x4D\x18\x35\x3C\x47\x1A\x7B\x65\x7C\x69\x3C\x79", 20).c_str());
jmethodID toStringMethod = env->GetMethodID(uuidClass, /*toString*/ StrEnc("2~5292eW", "\x46\x11\x66\x46\x4B\x5B\x0B\x30", 8).c_str(), /*()Ljava/lang/String;*/ StrEnc("P$BMc' #j?<:myTh_*h0", "\x78\x0D\x0E\x27\x02\x51\x41\x0C\x06\x5E\x52\x5D\x42\x2A\x20\x1A\x36\x44\x0F\x0B", 20).c_str());
auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
auto str = (jstring) env->CallObjectMethod(obj, toStringMethod);
return env->GetStringUTFChars(str, 0);}
//========================================================================//
struct MemoryStruct {char *memory; size_t size;};
static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
size_t realsize = size * nmemb;
struct MemoryStruct *mem = (struct MemoryStruct *) userp;
mem->memory = (char *) realloc(mem->memory, mem->size + realsize + 1);
if (mem->memory == NULL) {return 0;}
memcpy(&(mem->memory[mem->size]), contents, realsize);
mem->size += realsize;
mem->memory[mem->size] = 0;
return realsize;}
//========================================================================//
std::string Login(const char *user_key) {
if (!g_App)
return "Internal Error";
auto activity = g_App->activity;
if (!activity)
return "Internal Error";
auto vm = activity->vm;
if (!vm)
return "Internal Error";
auto object = activity->clazz;
if (!object)
return "Internal Error";
JNIEnv *env;
vm->AttachCurrentThread(&env, 0);
std::string hwid = user_key;
hwid += GetAndroidID(env, object);
hwid += GetDeviceModel(env);
hwid += GetDeviceBrand(env);
std::string UUID = GetDeviceUniqueIdentifier(env, hwid.c_str());
vm->DetachCurrentThread();
std::string errMsg;
struct MemoryStruct chunk{};
chunk.memory = (char *) malloc(1);
chunk.size = 0;
CURL *curl;
CURLcode res;
curl = curl_easy_init();
if (curl) {
curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, /*POST*/ StrEnc(",IL=", "\x7C\x06\x1F\x69", 4).c_str());
std::string api_key = ("https://indkey.xyz/connect");
curl_easy_setopt(curl, CURLOPT_URL, (api_key.c_str()));
curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, /*https*/ StrEnc("!mLBO", "\x49\x19\x38\x32\x3C", 5).c_str());
struct curl_slist *headers = NULL;
headers = curl_slist_append(headers, /*Content-Type: application/x-www-form-urlencoded*/ StrEnc("@;Ls\\(KP4Qrop`b#d3094/r1cf<c<=H)AiiBG6i|Ta66s2[", "\x03\x54\x22\x07\x39\x46\x3F\x7D\x60\x28\x02\x0A\x4A\x40\x03\x53\x14\x5F\x59\x5A\x55\x5B\x1B\x5E\x0D\x49\x44\x4E\x4B\x4A\x3F\x04\x27\x06\x1B\x2F\x6A\x43\x1B\x10\x31\x0F\x55\x59\x17\x57\x3F", 47).c_str());
curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
char data[4096];
sprintf(data, /*game=PUBG&user_key=%s&serial=%s*/ StrEnc("qu2yXK,YkJyGD@ut0.u~Nb'5(:.:chK", "\x16\x14\x5F\x1C\x65\x1B\x79\x1B\x2C\x6C\x0C\x34\x21\x32\x2A\x1F\x55\x57\x48\x5B\x3D\x44\x54\x50\x5A\x53\x4F\x56\x5E\x4D\x38", 31).c_str(), user_key, UUID.c_str());
curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);
curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *) &chunk);
curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);
res = curl_easy_perform(curl);
if (res == CURLE_OK) {
try {
json result = json::parse(chunk.memory);
if (result[/*status*/ StrEnc("(>_LBm", "\x5B\x4A\x3E\x38\x37\x1E", 6).c_str()] == true) {
std::string token = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*token*/ StrEnc("{>3Lr", "\x0F\x51\x58\x29\x1C", 5).c_str()].get<std::string>();								
time_t rng = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*rng*/ StrEnc("+n,", "\x59\x00\x4B", 3).c_str()].get<time_t>();
if (rng + 30 > time(0)) {
std::string auth = /*PUBG*/ StrEnc("Q*) ", "\x01\x7F\x6B\x67", 4).c_str();;
auth += "-";
auth += user_key;
auth += "-";
auth += UUID;
auth += "-";
auth += /*Vm8Lk7Uj2JmsjCPVPVjrLa7zgfx3uz9E*/ StrEnc("ZD$_K NtaM8Fu=n0fFyO;!Ae<H)*Gy4%", "\x0C\x29\x1C\x13\x20\x17\x1B\x1E\x53\x07\x55\x35\x1F\x7E\x3E\x66\x36\x10\x13\x3D\x77\x40\x76\x1F\x5B\x2E\x51\x19\x32\x03\x0D\x60", 32).c_str();
std::string outputAuth = Tools::CalcMD5(auth);
g_Token = token;
g_Auth = outputAuth;
bValid = g_Token == g_Auth;}
} else {errMsg = result[/*reason*/ StrEnc("LW(3(c", "\x3E\x32\x49\x40\x47\x0D", 6).c_str()].get<std::string>();}
} catch (json::exception &e) {
errMsg = "{";
errMsg += e.what();
errMsg += "}\n{";
errMsg += chunk.memory;
errMsg += "}";}
} else {
errMsg = curl_easy_strerror(res);}}
curl_easy_cleanup(curl);
vm->DetachCurrentThread();
return bValid ? "OK" : errMsg;}
// ======================================================================== //
namespace NAROUTO {static int Tab = 1;}
namespace Skin {static int Skin = 1;}

#include "NAROUTO/NAROUTOEngine.h"
EGLBoolean (*orig_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
EGLBoolean _eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
if (glWidth <= 0 || glHeight <= 0)
return eglSwapBuffers(dpy, surface);
if (!g_App)
return eglSwapBuffers(dpy, surface);
screenWidth = ANativeWindow_getWidth(g_App->window);
screenHeight = ANativeWindow_getHeight(g_App->window);
density = AConfiguration_getDensity(g_App->config);
if (!initImGui) {
    InitTexture();
    ImGui::CreateContext();
    ImGuiStyle *style = &ImGui::GetStyle();
    style->FrameRounding = 4.0f;
    style->WindowRounding = 4.0f;
    style->GrabRounding = 4.0f;
    style->FrameBorderSize = 4.0f;
    style->WindowBorderSize = 2.0f;
    style->WindowMinSize = ImVec2(0,0);
    style->WindowPadding = ImVec2(5,5);
    style->WindowTitleAlign = ImVec2(0.5, 0.5);
    ImVec4 *colors = style->Colors;
    style->Colors[ImGuiCol_Text]= ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
    style->Colors[ImGuiCol_TextDisabled]= ImVec4(0.60f, 0.60f, 0.60f, 1.00f);
    style->Colors[ImGuiCol_WindowBg] = ImVec4(0.04f, 0.30f, 0.55f, 0.0f); 
    style->Colors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f); 
    style->Colors[ImGuiCol_PopupBg] = ImVec4(0.05f, 0.05f, 0.10f, 0.00f);
    style->Colors[ImGuiCol_Border]= ImVec4(0.6f, 0.2f, 0.8f, 0.00f); 
    style->Colors[ImGuiCol_BorderShadow]= ImVec4(0.6f, 0.2f, 0.8f, 0.00f);
    style->Colors[ImGuiCol_FrameBg] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f); 
    style->Colors[ImGuiCol_FrameBgActive] = ImVec4(0.00f, 0.00f, 0.00f, 0.70f); 
    style->Colors[ImGuiCol_FrameBgHovered]= ImVec4(0.00f, 0.00f, 0.00f, 0.60f); 
    style->Colors[ImGuiCol_TitleBg] = ImVec4(0.07f, 0.53f, 0.89f, 1.0f); 
    style->Colors[ImGuiCol_TitleBgActive] = ImVec4(0.07f, 0.53f, 0.89f, 1.0f); 
    style->Colors[ImGuiCol_TitleBgCollapsed]= ImVec4(0.07f, 0.53f, 0.89f, 0.5f); 
    style->Colors[ImGuiCol_MenuBarBg] = ImVec4(0.01f, 0.01f, 0.02f, 0.80f);
    style->Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.20f, 0.25f, 0.30f, 0.60f);
    style->Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.55f, 0.53f, 0.55f, 0.51f);
    style->Colors[ImGuiCol_ScrollbarGrabHovered]= ImVec4(0.56f, 0.56f, 0.56f, 1.00f);
    style->Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.56f, 0.56f, 0.56f, 0.91f);
    style->Colors[ImGuiCol_CheckMark] = ImVec4(1.0f, 0.8f, 0.0f, 1.0f);
    style->Colors[ImGuiCol_SliderGrab]= ImVec4(0.70f, 0.70f, 0.70f, 0.62f);
    style->Colors[ImGuiCol_SliderGrabActive]= ImVec4(0.30f, 0.30f, 0.30f, 0.84f);
    style->Colors[ImGuiCol_Separator] = ImColor(0, 255, 0, 255); 
    style->Colors[ImGuiCol_SeparatorActive] = ImColor(180, 0, 255, 255); 
    style->Colors[ImGuiCol_SeparatorHovered]= ImColor(180, 0, 255, 255); 
    style->Colors[ImGuiCol_Button]= ImColor(0, 255, 0, 255); 
    style->Colors[ImGuiCol_ButtonActive]= ImColor(180, 0, 255, 255); 
    style->Colors[ImGuiCol_ButtonHovered] = ImColor(180, 0, 255, 255); 
    style->Colors[ImGuiCol_Header]= ImVec4(0.07f, 0.53f, 0.89f, 0.0f); 
    style->Colors[ImGuiCol_HeaderActive]= ImVec4(0.07f, 0.53f, 0.89f, 0.5f); 
    style->Colors[ImGuiCol_HeaderHovered] = ImVec4(0.07f, 0.53f, 0.89f, 0.3f); 
    style->Colors[ImGuiCol_ResizeGrip]= ImVec4(1.00f, 1.00f, 1.00f, 0.00f);
    style->Colors[ImGuiCol_ResizeGripHovered] = ImVec4(1.00f, 1.00f, 1.00f, 0.0f);
    style->Colors[ImGuiCol_ResizeGripActive]= ImVec4(1.00f, 1.00f, 1.00f, 0.0f);
    style->Colors[ImGuiCol_PlotLines] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
    style->Colors[ImGuiCol_PlotLinesHovered]= ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
    style->Colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
    style->Colors[ImGuiCol_PlotHistogramHovered]= ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
    style->Colors[ImGuiCol_TextSelectedBg]= ImVec4(0.00f, 0.00f, 1.00f, 0.35f);


style->ScaleAllSizes(std::max(1.0f, density / 150.0f));
style->ScrollbarSize /= 1;
ImGui_ImplAndroid_Init();
ImGui_ImplOpenGL3_Init("#version 300 es");
ImGuiIO &io = ImGui::GetIO();
io.ConfigWindowsMoveFromTitleBarOnly = true;
io.IniFilename = NULL;
static const ImWchar icons_ranges[] = {0xf000, 0xf3ff, 0};
ImFontConfig icons_config;
icons_config.MergeMode = true;
icons_config.PixelSnapH = true;
icons_config.OversampleH = 2.5;
icons_config.OversampleV = 2.5;
ImFontConfig CustomFont;
CustomFont.FontDataOwnedByAtlas = false;
ImFontConfig cfg;
cfg.SizePixels = ((float)density / 100.0f);
io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(Custom), sizeof(Custom), 22.0f, &CustomFont);
io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 20.0f, &icons_config, icons_ranges);
memset(&Config, 0, sizeof(sConfig));
Config.ColorsESP.Skeleton = CREATE_COLOR(0, 255, 0, 255);
Config.ColorsESP.SkeletonVisible = CREATE_COLOR(0, 0, 139, 255);
Config.ColorsESP.Line = CREATE_COLOR(255, 0, 0, 255);
Config.AimBot.IgnoreKnocked = true;
Config.AimBot.VisCheck = true;
Config.Other.IpadView = 87.0f;
static const ImWchar ranges[] =
{
    0x0020, 0x00FF,
    0x2010, 0x205E,
    0x0600, 0x06FF,
    0xFE00, 0xFEFF,   
    0,
};  

ImGui::GetIO().Fonts->AddFontFromMemoryCompressedTTF(Tahomabd_data, Tahomabd_size, 31.0f, NULL, &ranges[0]); 
initImGui = true;}

ImGuiIO &io = ImGui::GetIO();
ImGui_ImplOpenGL3_NewFrame();
ImGui_ImplAndroid_NewFrame(glWidth, glHeight);
ImGui::NewFrame();
DrawESP(ImGui::GetBackgroundDrawList());

ImGui::SetNextWindowSize(ImVec2(210,210));
if (ImGui::Begin(OBFUSCATE("LOGIN-MENU"), nullptr, ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoSavedSettings)) {
static bool isLogin = true;
if (!isLogin) {
ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.1f, 0.1f, 0.1f, 1.0f));
ImGui::PushStyleColor(ImGuiCol_TitleBg, ImVec4(0.2f, 0.2f, 0.2f, 1.0f));
ImGui::PushStyleColor(ImGuiCol_TitleBgActive, ImVec4(0.3f, 0.3f, 0.3f, 1.0f));
ImGui::PushStyleColor(ImGuiCol_TitleBgCollapsed, ImVec4(0.15f, 0.15f, 0.15f, 1.0f));
ImGui::PushItemWidth(-1);
static char s[64];
ImGui::InputText("##key", s, sizeof s);
ImGui::PopItemWidth();
if (ImGui::Button("paist Key ", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
auto key = getClipboardText();
strncpy(s, key.c_str(), sizeof s);}
static std::string err;
if (ImGui::Button(" Login ", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
err = Login(s);
if (err == "OK") {isLogin = bValid && g_Auth == g_Token;}}
if (!err.empty() && err != "OK") {ImGui::Text("Error: %s", err.c_str());}
ImGui::PopItemWidth();
ImGui::PopStyleColor(4);
} else { 

static bool NAROUTO99 = true;
static bool clickInProgress = false;
static float clickStartTime = 0;
if (NAROUTO99 == false) {
if (ImGui::Begin(OBFUSCATE(" NAROUTO MAKE THIS SRC" ), 0,ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoBackground)) {
const auto& pWindowDrawList = ImGui::GetWindowDrawList();    
const auto& p = ImGui::GetWindowPos();      
ImGui::SetCursorPos(ImVec2(5, 5));
ImVec2 imageSize(80,80);
ImGui::Image(LOGO.textureId, imageSize);        
if (ImGui::IsItemHovered()) {
if (ImGui::IsMouseClicked(ImGuiMouseButton_Left)) {clickInProgress = true;
clickStartTime = ImGui::GetTime();}}
if (clickInProgress && ImGui::IsMouseReleased(ImGuiMouseButton_Left)) {clickInProgress = false;
float currentTime = ImGui::GetTime();
float clickDuration = currentTime - clickStartTime;
if (clickDuration < 0.2f) {NAROUTO99 = true;
}}}}ImGui::End();            

if (NAROUTO99){
ImGui::SetNextWindowPos(ImVec2(530,100), ImGuiCond_FirstUseEver);
ImGui::SetNextWindowSize(ImVec2(1000,750), ImGuiCond_Once);//1000 650
ImGui::Begin(OBFUSCATE("MENU-2"),&NAROUTO99,ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoSavedSettings);
ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0, 0, 0, 0));
ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0, 0, 0, 0));
ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0, 0, 0, 0));

ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 0.0f);
ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0, 0));
ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0, 0));

if (ImGui::ImageButton((ImTextureID)logo1.textureId, ImVec2(829.6,627.3)));

ImGui::PopStyleVar(3);
ImGui::PopStyleColor(3);

ImGui::SetCursorPos(ImVec2(730,140));
if (ImGui::BeginChild("##XXX77", ImVec2(0, 0), true, ImGuiWindowFlags_NoScrollbar)) {
if (ImGui::Button(" X ", ImVec2(45,38))) {NAROUTO99 = false;}}
ImGui::EndChild();

ImGui::SetCursorPos(ImVec2(39.3,174.2));
if (ImGui::BeginChild("##XX67", ImVec2(0,0), true, ImGuiWindowFlags_NoScrollbar)) {
ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0, 0, 0, 0));
ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0, 0, 0, 0));
ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0, 0, 0, 0));

ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 0.0f);
ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0, 0));
ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0, 0));
if (ImGui::ImageButton((ImTextureID)NAROUTOxMENU.textureId, ImVec2(198,249)));
ImGui::PopStyleVar(3);
ImGui::PopStyleColor(3);
}
ImGui::BeginGroup(); 
ImGui::SetCursorPos(ImVec2(0,0));
ImGui::BeginChild("##XX67", ImVec2(0, 0), true,ImGuiWindowFlags_NoScrollbar);
{
     ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 0.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0.0f, 0.0f));
    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0.0f, 0.0f)); 
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.0f, 0.0f, 0.0f, 0.0f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0.0f, 0.0f, 0.0f, 0.0f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0.0f, 0.0f, 0.0f, 0.0f));

    ImVec4 active_color = ImVec4(0.0f, 1.0f, 0.0f, 1.0f);
    ImVec4 inactive_color = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);

    if(selected_lang == 0){
    ImGui::PushStyleColor(ImGuiCol_Text, NAROUTO::Tab == 1 ? active_color : inactive_color);
    ImGui::SetCursorPos(ImVec2(35.6,24.3));
    if (ImGui::Button("ESP", ImVec2(125, 40))) {NAROUTO::Tab = 1;}
    ImGui::PopStyleColor();

    ImGui::SetCursorPos(ImVec2(76.8,88.0));
    ImGui::PushStyleColor(ImGuiCol_Text, NAROUTO::Tab == 2 ? active_color : inactive_color);
    if (ImGui::Button("Items", ImVec2(A5, A6))) {NAROUTO::Tab = 2;}
    ImGui::PopStyleColor();

    ImGui::SetCursorPos(ImVec2(35.6,140.4));
    ImGui::PushStyleColor(ImGuiCol_Text, NAROUTO::Tab == 3 ? active_color : inactive_color);
    if (ImGui::Button("Aim", ImVec2(125, 40))) {NAROUTO::Tab = 3;}
    ImGui::PopStyleColor();

    ImGui::SetCursorPos(ImVec2(43.1,196.6));
    ImGui::PushStyleColor(ImGuiCol_Text, NAROUTO::Tab == 5 ? active_color : inactive_color);
    if (ImGui::Button("HOME", ImVec2(125, 40))) {NAROUTO::Tab = 5;}
    ImGui::PopStyleColor();
    ImGui::EndChild();
    
    ImGui::EndGroup(); 
    ImGui::PopStyleColor(3); 
    ImGui::PopStyleVar(3);
    ImGui::EndChild();
{
    auto now = std::chrono::system_clock::now();
    std::time_t current_time = std::chrono::system_clock::to_time_t(now);
    std::tm local_tm;
    localtime_r(&current_time, &local_tm); 

    std::ostringstream ss_time;
    ss_time << std::put_time(&local_tm, "%H:%M:%S");
    std::string time_str = ss_time.str();

    ImGui::SetCursorPos(ImVec2(374.532,157.303));
    ImGui::Text("%s", time_str.c_str());
}
{
    auto now = std::chrono::system_clock::now();
    std::time_t current_time = std::chrono::system_clock::to_time_t(now);
    std::tm local_tm;
    localtime_r(&current_time, &local_tm); 

    std::ostringstream ss_date;
    ss_date << std::put_time(&local_tm, "%Y-%m-%d");
    std::string date_str = ss_date.str();

    ImGui::SetCursorPos(ImVec2(141.217,157.734));
    ImGui::Text("%s", date_str.c_str());
}

ImGui::SetCursorPos(ImVec2(252,167));
ImGui::BeginChild("General", ImVec2(478, 330), false,ImGuiWindowFlags_NoScrollbar );
{
if (NAROUTO::Tab == 1) {
    ImGui::Text("");
    ImGui::Spacing();
    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));
           
    ImGui::Checkbox("Line", &Config.PlayerESP.Line);
    ImGui::SameLine(136);
    ImGui::Checkbox("Skeleton", &Config.PlayerESP.Skeleton);
    ImGui::SameLine(299);            
    ImGui::Checkbox("Name", &Config.PlayerESP.Name);
    ImGui::PopStyleColor();
    ImGui::PopStyleVar();

    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));
    ImGui::Checkbox("Box", &Config.PlayerESP.Box);
    ImGui::SameLine(136);
    ImGui::Checkbox("Health", &Config.PlayerESP.Health);
    ImGui::SameLine(299);            
    ImGui::Checkbox("Distance", &Config.PlayerESP.Distance);
    ImGui::PopStyleColor();
    ImGui::PopStyleVar();
    
    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));
    ImGui::Checkbox("Grenade", &Config.PlayerESP.Grenade);
    ImGui::SameLine(136);
    ImGui::Checkbox("Hide Bot", &Config.PlayerESP.NoBot);
    ImGui::SameLine(299);            
    ImGui::Checkbox("Loot Box", &Config.PlayerESP.LootBox);
    ImGui::Separator();
    static int selected_lang1 = 0;
    const char* languages1[] = { "Health", "Health 2" };
    ImGui::PushStyleColor(ImGuiCol_FrameBg, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));     
    ImGui::PushStyleColor(ImGuiCol_FrameBgHovered, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));     
    ImGui::PushStyleColor(ImGuiCol_FrameBgActive, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));      
    ImGui::PushItemWidth(140.0f); 
    ImGui::Combo("##LanguageCombo", &selected_lang1, languages1, IM_ARRAYSIZE(languages1));
    ImGui::PopItemWidth();
    ImGui::PopStyleColor(3);
    ImGui::PopStyleColor();
    ImGui::PopStyleVar();
        
} else if (NAROUTO::Tab == 2) {
    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));
    ImGui::Checkbox("Team ID", &Config.PlayerESP.TeamID);
    ImGui::SameLine(136);
    ImGui::Checkbox("Enemy Wpn", &Config.PlayerESP.Weapon);
    ImGui::SameLine(299);            
    ImGui::Checkbox("Vehicle", &Config.PlayerESP.Vehicle);
    ImGui::PopStyleColor();
    ImGui::PopStyleVar();

    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));
    ImGui::Checkbox("AIRDROPE", &Config.PlayerESP.AIRDROPE);
    ImGui::SameLine(136);
    ImGui::Checkbox("warning", &Config.PlayerESP.warning);
    ImGui::SameLine(299);            
    ImGui::Checkbox("AWM", &Config.PlayerESP.AWM);
    ImGui::PopStyleColor();
    ImGui::PopStyleVar();

    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));
    ImGui::Checkbox("RADAR", &Config.PlayerESP.RADAR);
    ImGui::SameLine(136);
    ImGui::Checkbox("Resources", &Config.PlayerESP.Resources);
    ImGui::SameLine(299);            
    ImGui::Checkbox("GAMEINFO", &Config.PlayerESP.GAMEINFO);
    ImGui::Separator();

} else if (NAROUTO::Tab == 5) {
ImGui::Spacing();
ImDrawList* draw_list = ImGui::GetWindowDrawList();
ImVec2 original_pos = ImGui::GetCursorScreenPos();
float width = ImGui::GetContentRegionAvail().x;
float height = 200;
ImU32 purple_start = IM_COL32(120, 0, 200, 255);
ImU32 purple_end   = IM_COL32(200, 100, 255, 255);
float vertical_offset = -55.0f;
ImVec2 center = ImVec2(original_pos.x + width * 0.5f, original_pos.y + height * 0.5f + vertical_offset);
float horizontal_length = width * 0.6f;
float line_thickness = 2.5f;
ImVec2 h_start = ImVec2(original_pos.x + width, center.y - line_thickness * 0.5f);
ImVec2 h_end   = ImVec2(original_pos.x + width - horizontal_length, center.y + line_thickness * 0.5f);
draw_list->AddRectFilledMultiColor(h_start, h_end, purple_end, purple_start, purple_start, purple_end);
float vertical_extension_above = 150.0f;
float vertical_extension_below = 180.0f;
ImVec2 vertical_center = ImVec2(h_end.x, center.y);
ImVec2 v_start = ImVec2(vertical_center.x - line_thickness * 0.5f, vertical_center.y - vertical_extension_above);
ImVec2 v_end   = ImVec2(vertical_center.x + line_thickness * 0.5f, vertical_center.y + vertical_extension_below);
draw_list->AddRectFilledMultiColor(v_start, v_end, purple_start, purple_start, purple_end, purple_end);
float button_offset_x = 20.0f;
ImVec2 button_pos = ImVec2(vertical_center.x + button_offset_x, center.y - 50.0f);
ImGui::SetCursorScreenPos(button_pos);
if (ImGui::Button("Save", ImVec2(100, 30))) { saveCFG(); }
ImGui::SameLine();
if (ImGui::Button("Remove", ImVec2(100, 30))) { removeCFG(); }
float combo_offset_x = -160.0f;
float combo_offset_y = -50.0f;
ImVec2 combo_pos = ImVec2(vertical_center.x + combo_offset_x, center.y + combo_offset_y);
ImGui::SetCursorScreenPos(combo_pos);

const char* languages[] = { "Language", "Language 2" };
ImGui::PushStyleColor(ImGuiCol_FrameBg, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));     
ImGui::PushStyleColor(ImGuiCol_FrameBgHovered, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));     
ImGui::PushStyleColor(ImGuiCol_FrameBgActive, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));      
ImGui::PushItemWidth(140.0f); 
ImGui::Combo("##LanguageCombo", &selected_lang, languages, IM_ARRAYSIZE(languages));
ImGui::PopItemWidth();
ImGui::PopStyleColor(3);
ImGui::Spacing();
ImGui::Text(""); 
ImGui::Checkbox("iPadView",&a32); 
ImGui::Spacing();
SliderFloat1("iPadView", &a33, 2, 400.0f);
float text_spacing = 20.0f;
float start_y = center.y + 10.0f; 
for (int i = 0; i < 4; i++) {
ImVec2 text_pos = ImVec2(vertical_center.x + 12.0f, start_y + i * text_spacing);
ImGui::SetCursorScreenPos(text_pos);
switch (i) {
case 0: ImGui::Text("%s Version: 18.5", ICON_FA_APPLE); break;
case 1: ImGui::Text("%s Model: iPhone17,2", ICON_FA_APPLE); break;
case 2: ImGui::Text("%s Expired Date: 2025-06-11 19:44:43", ICON_FA_APPLE); break;
case 3: ImGui::Text("%s Code: ZOON4HSJI8********", ICON_FA_APPLE); break;
}}
ImGui::SetCursorScreenPos(ImVec2(original_pos.x, original_pos.y + height + 10));
ImGui::Dummy(ImVec2(0, height + 10));
}}
ImGui::EndChild();
}}}}}
//========================================================================//
ImGui::End();
ImGui::Render();
ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
return orig_eglSwapBuffers(dpy, surface);}     

void (*orig_onInputEvent)(void *inputEvent, void *ex_ab, void *ex_ac);
void onInputEvent(void *inputEvent, void *ex_ab, void *ex_ac) {
orig_onInputEvent(inputEvent, ex_ab, ex_ac);if (initImGui) {
ImGui_ImplAndroid_HandleInputEvent((AInputEvent*)inputEvent, {(float) screenWidth / (float) glWidth, (float) screenHeight / (float) glHeight});}}

#define SLEEP_TIME 1000LL / 60LL
[[noreturn]] void *maps_thread(void *) {
while (true) {auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
std::vector<sRegion> tmp;
char line[512];
FILE *f = fopen("/proc/self/maps", "r");
if (f) {
while (fgets(line, sizeof line, f)) {
uintptr_t start, end;
char tmpProt[16];
if (sscanf(line, "%" PRIXPTR "-%" PRIXPTR " %16s %*s %*s %*s %*s", &start, &end, tmpProt) > 0) {
if (tmpProt[0] != 'r') {
tmp.push_back({start, end});
if (FpsVip) {
auto objs = UObject::GetGlobalObjects();
for (int i = 0; i < objs.Num(); i++) {
auto Object = objs.GetByIndex(i);
if (isObjectInvalid(Object))
continue;
if (Object->IsA(USTExtraGameInstance::StaticClass())) {
auto playerChar = (USTExtraGameInstance *) Object;  
playerChar->UserDetailSetting.PUBGDeviceFPSDef = 90;   
playerChar->UserDetailSetting.PUBGDeviceFPSLow = 90;
playerChar->UserDetailSetting.PUBGDeviceFPSMid = 90;
playerChar->UserDetailSetting.PUBGDeviceFPSHigh = 90;
playerChar->UserDetailSetting.PUBGDeviceFPSHDR = 90;
playerChar->UserDetailSetting.PUBGDeviceFPSUltralHigh = 90;}}}   
}}}fclose(f);}
auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td), SLEEP_TIME)));}}
#include "Problem.cpp"
#include "Hooks.h"
//==============================
void *main_thread(void* parms) {
UE4 = Tools::GetBaseAddress("libUE4.so");
while (!UE4) {
UE4 = Tools::GetBaseAddress("libUE4.so");
sleep(1); }
anogs = Tools::GetBaseAddress("libanogs.so");
while (!anogs) {
anogs = Tools::GetBaseAddress("libanogs.so");
sleep(1); }
while (!g_App){
g_App = *(android_app **) (UE4 + GNativeAndroidApp_Offset);
sleep(1); }
FName::GNames = GetGNames();
while (!FName::GNames) {FName::GNames = GetGNames();
sleep(1); }
UObject::GUObjectArray = (FUObjectArray *) (UE4 + GUObject_Offset);
Tools::Hook((void *) DobbySymbolResolver(OBFUSCATE("libinput.so"), OBFUSCATE("_ZN7android13InputConsumer21initializeMotionEventEPNS_11MotionEventEPKNS_12InputMessageE")), (void *) onInputEvent, (void **) &orig_onInputEvent);
auto addr = (uintptr_t)dlsym(RTLD_NEXT,"eglSwapBuffers");
LOGD("eglSwapBuffers address: 0x%X",addr);
Tools::Hook((void *)addr,(void *)_eglSwapBuffers,(void **)&orig_eglSwapBuffers);
items_data = json::parse(JSON_ITEMS);
return 0;
}

__attribute__((constructor)) void _init() {
pthread_t t;
pthread_create(&t,0,main_thread,0);}
