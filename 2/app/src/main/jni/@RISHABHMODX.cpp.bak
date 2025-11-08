#include <android/log.h>
#include <unistd.h>
#include <thread>
#include <limits>

#ifndef LOGI
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, "DEXXTER", __VA_ARGS__)
#endif
#ifndef LOGE
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, "DEXXTER", __VA_ARGS__)
#endif
#include <KittyMemory/KittyMemory.h>
#include <KittyMemory/MemoryPatch.h>
#include <KittyMemory/KittyScanner.h>
#include <KittyMemory/KittyUtils.h>
#include "oxorany/oxorany.h"
#include <xdl.h>
#include <KittyUtils.h>
#include <KittyMemory.h>
#include <Il2Cpp.h>
#include <SubstrateHook.h>
#include <CydiaSubstrate.h>
#include "RISHABH-PAPA/gui.hpp"
#include "il2cpp.h"
#include "RISHABH-TOOLS/Land.hpp"
#include "imgui/imgui.h"
#include "imgui/stb_image.h"
#include "imgui/backends/imgui_impl_android.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include <Themes.h>
#include "RISHABH-TOOLS/Firewall.h"
#include "RISHABH-TOOLS/exptime.h"
#include "RISHABH-TOOLS/Chams.h"
#include "RISHABH-TOOLS/Land.h"
#include "RISHABH-TOOLS/CN.h"
#include "RISHABH-TOOLS/lundbda.h"
#include "RISHABH-TOOLS/fontch.h"
#include "Icon/OPPOSans-H.h"
#include "RISHABH-NIKU/Icon.h"
#include "RISHABHPAPA.h"
#include "FontTest.h"
#include "RISHABH-NIKU/Iconcpp.h"
#include <fstream>
#include "dexxter_logo.h"
void (*OpenURL)(String *url);
#include "GHr_Ryuuka/Tools/Call_Tools.h"
using json = nlohmann::json;
time_t rng = 0;
std::string g_Token, g_Auth;
#include "LOGIN.h"

static int tab = 1;

struct My_Patches {
    MemoryPatch Bypass1;
    MemoryPatch Bypass2;
    MemoryPatch Bypass3;
    MemoryPatch Bypass4;
    MemoryPatch Bypass5;
    MemoryPatch Bypass6;
    MemoryPatch Bypass7;
    MemoryPatch Bypass8;
    MemoryPatch Bypass9;
    MemoryPatch Bypass10;
    MemoryPatch Bypass11;
    MemoryPatch Bypass12;
    MemoryPatch Bypass13;
    MemoryPatch Bypass14;
    MemoryPatch Bypass15;
    
    MemoryPatch Guest;
} hexPatches;
using zygisk::Api;
using zygisk::AppSpecializeArgs;
using zygisk::ServerSpecializeArgs;

#define ALPHA    ( ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_AlphaBar | ImGuiColorEditFlags_InputRGB | ImGuiColorEditFlags_Float | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoBorder )
#define NO_ALPHA ( ImGuiColorEditFlags_NoTooltip    | ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_InputRGB | ImGuiColorEditFlags_Float | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoBorder )

void HueText(const char* text, ImVec4 color)
{
    static auto start_time = std::chrono::high_resolution_clock::now();
    auto elapsed_seconds = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - start_time).count() / 1000.0f; 
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 1.0f, 0.0f)); 
    for (int i = 0; i < strlen(text); i++)
    {
      ImGui::SameLine();
        float t = fmodf(elapsed_seconds + (float)i / (float)strlen(text), 0.65f); 
        ImVec4 currentColor = ImVec4(color.x * t, color.y * t, color.z * t, color.w); 
        ImGui::PushStyleColor(ImGuiCol_Text, currentColor); 
        ImGui::Text("%c", text[i]); 
        ImGui::PopStyleColor(); 
    }
    ImGui::PopStyleColor(); 
}
/*
*/
void hack();
void writeLog(const std::string& logMessage, const std::string& filename = "/storage/emulated/0/Android/data/com.dualspace.multispace.androidx/files/log.txt");


 


class MyModule : public zygisk::ModuleBase {
 public:
  void onLoad(Api *api, JNIEnv *env) override {
    this->api_ = api;
    this->env_ = env;
    genv = env;
   // gEnv = env;

  }

  void preAppSpecialize(AppSpecializeArgs *args) override {
    static constexpr const char *packages[] = {
        "com.dts.freefireth"
    };
    const char *process = env_->GetStringUTFChars(args->nice_name, nullptr);
    for (const auto *package: packages) {
      is_game_ = (strcmp(process, package) == 0);
      if (is_game_) {
        break;
      }
    }
    env_->ReleaseStringUTFChars(args->nice_name, process);
  }

  void postAppSpecialize(const AppSpecializeArgs *args) override {
    if (is_game_) {
       genv->GetJavaVM(&jvm);
     //  genv->GetJavaVM(&gJvm);
      std::thread{hack}.detach();
    }
  }

 private:
  Api *api_ = nullptr;
  JNIEnv *env_ = nullptr;
  bool is_game_ = false;
};


uintptr_t il2cpp_base = 0;
void *getRealAddr(ulong offset) {
    return reinterpret_cast<void*>(il2cpp_base + offset);
};


namespace Settings
{
static int Tab = 1;
}

#define ICON_FA_WINDOW_MINIMIZE "\xef\x8a\x96"

void SetupImgui() {
IMGUI_CHECKVERSION();
//InitTexture();
ImGui::CreateContext();
ImGui_ImplOpenGL3_Init("#version 300 es");

ImGuiIO &io = ImGui::GetIO();
ImGui::GetStyle().WindowPadding = ImVec2(6, 6);
ImGui::GetStyle().FramePadding = ImVec2(8, 12);
ImGui::GetStyle().ItemSpacing = ImVec2(10, 10); 
ImGui::GetStyle().FrameBorderSize = 0.0f;
ImGui::GetStyle().WindowBorderSize = 0.0f;
ImGui::GetStyle().ChildBorderSize = 1.0f;
ImGui::GetStyle().TabBorderSize = 1.0f;
ImGui::GetStyle().ScrollbarSize = 0.0f;
ImGuiStyle& style = ImGui::GetStyle();
ImVec4* colors = style.Colors;
style.WindowRounding = 12.0f;
style.ChildRounding = 3.0f;
style.FrameRounding = 50.0f;
style.GrabRounding = 0.0f;
style.PopupRounding = 0.0f;
style.TabRounding = 0.0f;
style.ScrollbarRounding = 0.0f;
style.WindowTitleAlign = ImVec2(0.5f, 0.5f);   


colors[ImGuiCol_Text]                   = ImColor(255, 255, 255, 255);
colors[ImGuiCol_TextDisabled]           = ImColor(255, 255, 255, 255);
colors[ImGuiCol_WindowBg]               = ImColor(24, 24, 26, 255);
colors[ImGuiCol_ChildBg]                = ImColor(11, 23, 46, 255);
colors[ImGuiCol_PopupBg]                = ImColor(0, 0, 0, 255);
colors[ImGuiCol_Border]                 = ImColor(0, 255, 0, 255);
colors[ImGuiCol_BorderShadow]           = ImColor(0, 0, 0, 0);
colors[ImGuiCol_FrameBg]                = ImColor(36, 36, 36, 255);
colors[ImGuiCol_FrameBgHovered]         = ImColor(36, 36, 36, 255);
colors[ImGuiCol_FrameBgActive]          = ImColor(36, 36, 36, 255);
colors[ImGuiCol_TitleBg]                = ImColor(147, 112, 219, 255);
colors[ImGuiCol_TitleBgActive]          = ImColor(147, 112, 219, 255);
colors[ImGuiCol_TitleBgCollapsed]       = ImColor(147, 112, 219, 255);
colors[ImGuiCol_MenuBarBg]              = ImColor(20, 20, 20, 255);
colors[ImGuiCol_ScrollbarBg]            = ImColor(20, 20, 20, 255);
colors[ImGuiCol_ScrollbarGrab]          = ImColor(80, 80, 80, 255);
colors[ImGuiCol_ScrollbarGrabHovered]   = ImColor(100, 100, 100, 255);
colors[ImGuiCol_ScrollbarGrabActive]    = ImColor(120, 120, 120, 255);
colors[ImGuiCol_Button]                 = ImColor(36, 36, 36, 255); 
colors[ImGuiCol_ButtonHovered]          = ImColor(36, 36, 36, 255); 
colors[ImGuiCol_ButtonActive]           = ImColor(36, 36, 36, 255); 
colors[ImGuiCol_CheckMark]              = ImColor(128, 48, 194, 255);
colors[ImGuiCol_SliderGrab]             = ImColor(128, 48, 194, 255);
colors[ImGuiCol_SliderGrabActive]       = ImColor(128, 48, 194, 255);
colors[ImGuiCol_Header]                 = ImColor(40, 40, 40, 255);
colors[ImGuiCol_HeaderHovered]          = ImColor(60, 60, 60, 255);
colors[ImGuiCol_HeaderActive]           = ImColor(80, 80, 80, 255);
colors[ImGuiCol_Tab]                    = ImColor(30, 30, 30, 255);
colors[ImGuiCol_TabHovered]             = ImColor(50, 50, 50, 255);
colors[ImGuiCol_TabActive]              = ImColor(70, 70, 70, 255);
colors[ImGuiCol_TabUnfocused]           = ImColor(25, 25, 25, 255);
colors[ImGuiCol_TabUnfocusedActive]     = ImColor(50, 50, 50, 255);
colors[ImGuiCol_Separator]              = ImColor(70, 70, 70, 255);
colors[ImGuiCol_SeparatorHovered]       = ImColor(255, 0, 0, 180);
colors[ImGuiCol_SeparatorActive]        = ImColor(255, 0, 0, 255);
colors[ImGuiCol_ResizeGrip]             = ImColor(80, 80, 80, 0);
colors[ImGuiCol_ResizeGripHovered]      = ImColor(100, 100, 100, 0);
colors[ImGuiCol_ResizeGripActive]       = ImColor(120, 120, 120, 0);
colors[ImGuiCol_TableHeaderBg]          = ImColor(30, 30, 30, 255);
colors[ImGuiCol_TableBorderStrong]      = ImColor(80, 80, 80, 255);
colors[ImGuiCol_TableBorderLight]       = ImColor(50, 50, 50, 255);
colors[ImGuiCol_TableRowBg]             = ImColor(15, 15, 15, 255);
colors[ImGuiCol_TableRowBgAlt]          = ImColor(20, 20, 20, 255);
colors[ImGuiCol_TextSelectedBg]         = ImColor(255, 0, 0, 100);
colors[ImGuiCol_DragDropTarget]         = ImColor(255, 0, 0, 200);
colors[ImGuiCol_NavHighlight]           = ImColor(255, 0, 0, 200);
colors[ImGuiCol_NavWindowingHighlight]  = ImColor(255, 0, 0, 180);
colors[ImGuiCol_NavWindowingDimBg]      = ImColor(0, 0, 0, 120);
colors[ImGuiCol_ModalWindowDimBg]       = ImColor(0, 0, 0, 150);

            io.ConfigWindowsMoveFromTitleBarOnly = true;
            io.IniFilename = NULL;

            static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
            ImFontConfig icons_config;

            ImFontConfig CustomFont;
            CustomFont.FontDataOwnedByAtlas = false;

            icons_config.MergeMode = true;
            icons_config.PixelSnapH = true;
            icons_config.OversampleH = 2.5;
            icons_config.OversampleV = 2.5;
            
                  io.Fonts->AddFontFromMemoryTTF((void *)RISHABHPAPA_data, RISHABHPAPA_size, 30.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
                  io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 50.0f, &icons_config, icons_ranges);
                  io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(Custom), sizeof(Custom), 24.f, &CustomFont);
         // memset(&Config, 0, sizeof(sConfig));
//

//ImFontConfig CustomFont;
CustomFont.FontDataOwnedByAtlas = false;
//font_cfg.SizePixels = 22.0f;
static const ImWchar vietnamese_chars[] = {
0x0020, 0x00FF, // Basic Latin + Latin Supplement
0x0102, 0x0103, // Â, â
0x0110, 0x0111, // Đ, đ
0x0128, 0x0129, // Ĩ, ĩ
0x0168, 0x0169, // Ũ, ũ
0x01A0, 0x01A1, // Ơ, ơ
0x01AF, 0x01B0, // Ư, ư
0x1EA0, 0x1EF9, // Vietnamese specific characters
0 // null-terminated list
};
}


bool clearMousePos = true;
bool ImGuiOK = false;
bool initImGui = false;

GLuint logoTexture = 0;
int logoWidth = 0, logoHeight = 0;

void LoadLogoTexture() {
    if (logoTexture != 0) return;
    
    int channels;
    unsigned char* image_data = stbi_load_from_memory(dexxter_data, dexxter_size, &logoWidth, &logoHeight, &channels, 4);
    
    if (image_data == nullptr) {
        LOGE("Failed to load logo texture from memory!");
        return;
    }
    
    LOGI("Logo loaded successfully: %dx%d, channels: %d", logoWidth, logoHeight, channels);
    
    glGenTextures(1, &logoTexture);
    glBindTexture(GL_TEXTURE_2D, logoTexture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, logoWidth, logoHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, image_data);
    
    stbi_image_free(image_data);
    
    LOGI("Logo texture created with ID: %u", logoTexture);
}


void VerticalTab(const char* label, int tab_index, int* p_selected_tab) {
ImGuiStyle& style = ImGui::GetStyle();
ImVec4* colors = style.Colors;

// Push custom colors for the selected and unselected states
ImVec4 color = ImColor(0, 150, 255, 5);
ImVec4 colorActive = ImColor(0, 150, 255, 5);
ImVec4 colorHovered = ImColor(0, 150, 255, 5);

if (tab_index == *p_selected_tab) {
// This is the selected tab, make it blue like in the image
ImGui::PushStyleColor(ImGuiCol_Button, colorActive);
ImGui::PushStyleColor(ImGuiCol_ButtonHovered, colorActive);
ImGui::PushStyleColor(ImGuiCol_ButtonActive, colorActive);
} else {
// Unselected tabs are dark
ImGui::PushStyleColor(ImGuiCol_Button, color);
ImGui::PushStyleColor(ImGuiCol_ButtonHovered, colorHovered);
ImGui::PushStyleColor(ImGuiCol_ButtonActive, colorActive);
}

if (ImGui::Button(label, ImVec2(200, 50))) { // Button size (width, height)
*p_selected_tab = tab_index;
}

if (tab_index == *p_selected_tab) {
ImDrawList* draw_list = ImGui::GetWindowDrawList();
const ImVec2 p_min = ImGui::GetItemRectMin();
const ImVec2 p_max = ImGui::GetItemRectMax();

ImU32 line_color = IM_COL32(50, 150, 255, 255);
float line_thickness = 8.0f;

draw_list->AddLine(
ImVec2(p_min.x, p_min.y), 
ImVec2(p_min.x, p_max.y), 
line_color, 
line_thickness
);
}

ImGui::PopStyleColor(3);
}

static int selected_tab = 0;
inline EGLBoolean (*old_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
inline EGLBoolean hook_eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
    
        eglQuerySurface(dpy, surface, EGL_WIDTH, &g_GlWidth);
    eglQuerySurface(dpy, surface, EGL_HEIGHT, &g_GlHeight);
    
    


    if (!g_IsSetup) {
        prevWidth = g_GlWidth;
        prevHeight = g_GlHeight;
        SetupImgui();
        
        g_IsSetup = true;
    }

    ImGuiIO &io = ImGui::GetIO();

    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplAndroid_NewFrame(g_GlWidth, g_GlHeight);
    ImGui::NewFrame();
        if (ImGuiOK) {
            int touchCount = (((int (*)())(Class_Input__get_touchCount))());
    if (touchCount > 0) {
        UnityEngine_Touch_Fields touch = ((UnityEngine_Touch_Fields(*)(int))(Class_Input__GetTouch))(0);
        float reverseY = io.DisplaySize.y - touch.m_Position.fields.y;
        switch (touch.m_Phase) {
            case TouchPhase::Began:
            case TouchPhase::Stationary:
                io.MousePos = ImVec2(touch.m_Position.fields.x, reverseY);
                io.MouseDown[0] = true;
                break;
            case TouchPhase::Ended:
            case TouchPhase::Canceled:
                io.MouseDown[0] = false;
                clearMousePos = true;
                break;
            case TouchPhase::Moved:
                io.MousePos = ImVec2(touch.m_Position.fields.x, reverseY);
                break;
            default:
                break;
        }
    }
        }
        
DrawESP(g_GlWidth, g_GlHeight);
ImDrawList*draw = ImGui::GetBackgroundDrawList();
    
    LoadLogoTexture();
    
    static bool menuCollapsed = false;
    static ImVec2 titleBarClickPos = ImVec2(0, 0);
    static bool titleBarPressed = false;
    static float animTime = 0.0f;
    animTime += io.DeltaTime;
    
    ImU32 purpleCream = IM_COL32(147, 112, 219, 255);
    
    bool pushedWindowBgColor = false;
    if (!menuCollapsed) {
        ImGui::SetNextWindowSize(ImVec2(520, 550), ImGuiCond_Always);
    } else {
        ImGui::SetNextWindowSize(ImVec2(520, 0), ImGuiCond_Always);
        ImGui::SetNextWindowContentSize(ImVec2(0, 0));
        ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(147.0f/255.0f, 112.0f/255.0f, 219.0f/255.0f, 1.0f));
        pushedWindowBgColor = true;
    }
    
    if (ImGui::Begin("DEXXTER | MOBILE ", 0, ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_NoCollapse | (menuCollapsed ? ImGuiWindowFlags_NoScrollbar : 0))) {
    
    ImGuiWindow* window = ImGui::GetCurrentWindow();
    
    if (menuCollapsed) {
        float collapsedHeight = window->TitleBarHeight();
        ImGui::SetWindowSize(ImVec2(520, collapsedHeight));
    }
    ImVec2 titleBarMin = window->Pos;
    ImVec2 titleBarMax = ImVec2(window->Pos.x + window->Size.x, window->Pos.y + window->TitleBarHeight());
    
    ImVec2 mousePos = ImGui::GetMousePos();
    bool mouseInTitleBar = (mousePos.x >= titleBarMin.x && mousePos.x <= titleBarMax.x && 
                            mousePos.y >= titleBarMin.y && mousePos.y <= titleBarMax.y);
    
    if (mouseInTitleBar && ImGui::IsMouseClicked(0)) {
        titleBarClickPos = mousePos;
        titleBarPressed = true;
    }
    
    if (titleBarPressed && ImGui::IsMouseReleased(0)) {
        ImVec2 releasePos = ImGui::GetMousePos();
        float dragDistance = sqrtf(
            (releasePos.x - titleBarClickPos.x) * (releasePos.x - titleBarClickPos.x) +
            (releasePos.y - titleBarClickPos.y) * (releasePos.y - titleBarClickPos.y)
        );
        if (dragDistance < 10.0f) {
            menuCollapsed = !menuCollapsed;
        }
        titleBarPressed = false;
    }
    
    ImDrawList* foregroundDraw = ImGui::GetForegroundDrawList();
    ImVec2 windowMin = window->Pos;
    ImVec2 windowMax = ImVec2(window->Pos.x + window->Size.x, window->Pos.y + window->Size.y);
       
    if (menuCollapsed) {
        foregroundDraw->AddRectFilled(
            windowMin,
            windowMax,
            purpleCream,
            window->WindowRounding,
            ImDrawFlags_RoundCornersAll
        );
    } else {
        foregroundDraw->AddRectFilled(
            titleBarMin,
            titleBarMax,
            purpleCream,
            window->WindowRounding,
            ImDrawFlags_RoundCornersTop
        );
    }
    
    ImVec2 textSize = ImGui::CalcTextSize("DEXXTER | MOBILE ");
    float titleBarCenterX = window->Pos.x + (window->Size.x * 0.5f);
    float textPosX = titleBarCenterX - (textSize.x * 0.5f);
    float textPosY = window->Pos.y + (window->TitleBarHeight() - textSize.y) * 0.5f;
    
    foregroundDraw->AddText(
        ImVec2(textPosX, textPosY),
        IM_COL32(255, 255, 255, 255),
        "DEXXTER | MOBILE "
    );
    
    float borderThickness = 1.5f;
    
    foregroundDraw->AddRect(
        windowMin,
        windowMax,
        purpleCream,
        window->WindowRounding,
        0,
        borderThickness
    );
    
    if (logoTexture != 0) {
        float logoSize = window->TitleBarHeight() - 8.0f;
        float logoSpacing = 12.0f;
        ImVec2 logoPos = ImVec2(textPosX - logoSize - logoSpacing, window->Pos.y + 6.0f);
        ImVec2 logoEnd = ImVec2(logoPos.x + logoSize, logoPos.y + logoSize);
        
        foregroundDraw->AddImageRounded(
            (void*)(intptr_t)logoTexture,
            logoPos,
            logoEnd,
            ImVec2(0, 0),
            ImVec2(1, 1),
            IM_COL32(255, 255, 255, 255),
            logoSize * 0.5f,
            ImDrawFlags_RoundCornersAll
        );
    } else {
        LOGE("Logo texture not loaded! logoTexture = %u", logoTexture);
    }
    
    if (!menuCollapsed) {
    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 8);
    ImGui::Spacing();
    static int tab = 0;
    ImGui::Spacing();
    if (ImGui::Button("Aimbot", ImVec2(130, 50))) tab = 0;
    ImGui::SameLine();
    if (ImGui::Button("Player", ImVec2(130, 50))) tab = 1;
    ImGui::SameLine();
    if (ImGui::Button("Info", ImVec2(130, 50))) tab = 2;
    ImGui::Spacing();
    if (tab == 0)
    {
    ImGui::Checkbox(" Enable Function", &Enable);
    ImGui::Separator();
        ImGui::Checkbox(" Aimbot Legit", &Aimbot);
    ImGui::Separator();
    ImGui::Checkbox(" Aim Kill", &AimKill1);
    ImGui::Separator();
        ImGui::SliderFloat((""), &Fov_Aim, 0.0f, 9000.0f, "%.0f°", ImGuiSliderFlags_AlwaysClamp | ImGuiSliderFlags_NoInput);
    }
    else if (tab == 1)
    {
        ImGui::Checkbox(" Enable Esp", &PlayEsp);
        ImGui::Separator();
    ImGui::Checkbox(" Enable Line", &Config.ESP.Line);
        ImGui::Separator();
    ImGui::Checkbox(" Enable Box", &Config.ESP.Box);
        ImGui::Separator();
        ImGui::Checkbox(" Enable Player", &EnaPlayer);
        ImGui::Separator();
    }
    else if (tab == 2)
    {
    ImGui::Text("Info Settings");
    }
    }
    }
    ImGui::End();
    
    if (pushedWindowBgColor) {
        ImGui::PopStyleColor();
    }
    
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        return old_eglSwapBuffers(dpy, surface);
}
//}
typedef unsigned long DWORD;
static uintptr_t libBase;

uintptr_t string2Offset(const char *c) {
    int base = 16;
    // See if this function catches all possibilities.
    // If it doesn't, the function would have to be amended
    // whenever you add a combination of architecture and
    // compiler that is not yet addressed.
    static_assert(sizeof(uintptr_t) == sizeof(unsigned long)
                  || sizeof(uintptr_t) == sizeof(unsigned long long),
                  "Please add string to handle conversion for this architecture.");

    // Now choose the correct function ...
    if (sizeof(uintptr_t) == sizeof(unsigned long)) {
        return strtoul(c, nullptr, base);
    }

    // All other options exhausted, sizeof(uintptr_t) == sizeof(unsigned long long))
    return strtoull(c, nullptr, base);
}


inline void hack_injec();
inline void StartGUI() {
    void *ptr_eglSwapBuffer = DobbySymbolResolver("/system/lib/libEGL.so", "eglSwapBuffers");
    if (NULL != ptr_eglSwapBuffer) {
        DobbyHook((void *)ptr_eglSwapBuffer, (void*)hook_eglSwapBuffers, (void**)&old_eglSwapBuffers);
            LOGD("Gui Started");
                        hack_injec();
        }
    }

bool libLoaded = false;

DWORD findLibrary(const char *library) {
    char filename[0xFF] = {0},
            buffer[1024] = {0};
    FILE *fp = NULL;
    DWORD address = 0;

    sprintf(filename, OBFUSCATE("/proc/self/maps"));

    fp = fopen(filename, OBFUSCATE("rt"));
    if (fp == NULL) {
        perror(OBFUSCATE("fopen"));
        goto done;
    }

    while (fgets(buffer, sizeof(buffer), fp)) {
        if (strstr(buffer, library)) {
            address = (DWORD) strtoul(buffer, NULL, 16);
            goto done;
        }
    }

    done:

    if (fp) {
        fclose(fp);
    }

    return address;
}

DWORD getAbsoluteAddress(const char *libraryName, DWORD relativeAddr) {
    libBase = findLibrary(libraryName);
    if (libBase == 0)
        return 0;
    return (reinterpret_cast<DWORD>(libBase + relativeAddr));
}
ProcMap unityMap, anogsMap, il2cppMap;
using KittyScanner::RegisterNativeFn;



    
    
void hack() {
     LOGD("Inject Ok");
    //std::thread thread_hack(hack_thread, getpid());
    //thread_hack.detach();
    
}
uintptr_t get_symbol_addr_in_pid(pid_t pid, const char* libname, uintptr_t offset_in_lib) {
    char maps_path[64];
    snprintf(maps_path, sizeof(maps_path), "/proc/%d/maps", pid);

    FILE* fp = fopen(maps_path, "r");
    if (!fp) return 0;

    char line[512];
    uintptr_t base = 0;

    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, libname)) {
            sscanf(line, "%lx-%*lx", &base);
            break;
        }
    }
    fclose(fp);

    if (base == 0) return 0;
    return base + offset_in_lib;
}

pid_t get_pid_by_name(const char* process_name) {
    DIR* proc_dir = opendir("/proc");
    if (!proc_dir) return -1;

    struct dirent* entry;
    while ((entry = readdir(proc_dir)) != NULL) {
        if (entry->d_type != DT_DIR) continue;

        pid_t pid = atoi(entry->d_name);
        if (pid <= 0) continue;

        char cmdline_path[256];
        snprintf(cmdline_path, sizeof(cmdline_path), "/proc/%d/cmdline", pid);

        FILE* fp = fopen(cmdline_path, "r");
        if (!fp) continue;

        char cmdline[256];
        fgets(cmdline, sizeof(cmdline), fp);
        fclose(fp);

        if (strstr(cmdline, process_name)) {
            closedir(proc_dir);
            return pid;
        }
    }

    closedir(proc_dir);
    return -1;
}

void writeLog(const std::string& logMessage, const std::string& filename) {
    std::ofstream outFile(filename, std::ios::app); // Mở file ở chế độ append (thêm)
    if (outFile.is_open()) {
        outFile << logMessage << std::endl;
        outFile.close();
    } else {
        std::cerr << "Không thể mở file log: " << filename << std::endl;
    }
}

bool is_current_process(const char* target_name) {
    char cmdline_path[64];
    snprintf(cmdline_path, sizeof(cmdline_path), "/proc/%d/cmdline", getpid());

    FILE* fp = fopen(cmdline_path, "r");
    if (!fp) return false;

    char cmdline[256] = {0};
    fgets(cmdline, sizeof(cmdline), fp);
    fclose(fp);

    return strcmp(cmdline, target_name) == 0;
}




void hack_injec() {
        while (!unityMap.isValid()) {
        unityMap = KittyMemory::getLibraryBaseMap("libunity.so");
                anogsMap = KittyMemory::getLibraryBaseMap("libanogs.so");
                il2cppMap = KittyMemory::getLibraryBaseMap("libil2cpp.so");
                
        sleep(6);
        }
    
 sleep(5);
    Il2CppAttach();
    
    if (mlovinit()) {
        setShader("_AlphaMask"); //Varies according to game
        LogShaders();
        Wallhack();
    }
    A64HookFunction(Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("COW.GamePlay"), OBFUSCATE("Player"), OBFUSCATE("UpdateBehavior"), 2), (void *) _LateUpdate, (void **) &LateUpdate);
        OpenURL = (void (*)(String *))Il2CppGetMethodOffset("UnityEngine.CoreModule.dll","UnityEngine","Application","OpenURL",1);
    ImGuiOK = true;
}


void hack_thread(pid_t pid) {
        
        StartGUI();
        while(pid == -1){pid = get_pid_by_name("com.dts.freefireth");} 
        remote_inject(pid);
        writeLog(to_string(pid));
    
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void * reserved) {
jvm = vm;
JNIEnv *env;
vm->GetEnv((void **) &env, JNI_VERSION_1_6); 
return JNI_VERSION_1_6;
}

__attribute__((constructor))
void lib_main()
{
    std::thread thread_hack(hack_thread, get_pid_by_name("com.dts.freefireth"));
    thread_hack.detach();
}
//REGISTER_ZYGISK_MODULE(MyModule)

