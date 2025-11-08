#define STBI_NOTUSED(v)  (void)sizeof(v)
#define STB_IMAGE_IMPLEMENTATION
#include "imgui/stb_image.h"

#include "imgui/Image/LOGO.h"
#include "imgui/Image/menus1.h"
#include "imgui/Image/menus2.h"
#include "imgui/Image/menus3.h"
#include "imgui/Image/menus4.h"
#include "imgui/Image/menus5.h"
#include "imgui/image/logo1.h"
#include "imgui/Image/NAROUTOxMENU.h" 
#include "imgui/Image/NAROUTOxCOUNT.h" 

struct TextureInfo {ImTextureID textureId; int x; int y; int w; int h;};
static TextureInfo textureInfo;
TextureInfo CreateTexture(const unsigned char *buffer,int len) {int w, h, n;
stbi_uc *data = stbi_load_from_memory(buffer,len, &w, &h, &n, 0);
GLuint texture;
glGenTextures(1, &texture);
glEnable(GL_TEXTURE_2D);
glBindTexture(GL_TEXTURE_2D, texture);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
if (n == 3) {
glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGB, GL_UNSIGNED_BYTE, data);    }else{
glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, data); }
stbi_image_free(data);
textureInfo.textureId = reinterpret_cast<ImTextureID>((GLuint *) texture);
textureInfo.w = w;
textureInfo.h = h;
return textureInfo;
}

extern TextureInfo menus1;
extern TextureInfo menus2;
extern TextureInfo menus3;
extern TextureInfo menus4;
extern TextureInfo menus5;
extern TextureInfo LOGO;
extern TextureInfo logo1;
extern TextureInfo NAROUTOxMENU; 
extern TextureInfo NAROUTOxCOUNT; 
TextureInfo logo1;
TextureInfo menus1;
TextureInfo menus2;
TextureInfo menus3;
TextureInfo menus4;
TextureInfo menus5;
TextureInfo LOGO;
TextureInfo NAROUTOxMENU;
TextureInfo NAROUTOxCOUNT;

void DrawImage(int x, int y, int w, int h, ImTextureID Texture);
void DrawImage(int x, int y, int w, int h, ImTextureID Texture) {ImGui::GetForegroundDrawList()->AddImage(Texture, ImVec2(x, y), ImVec2(x + w, y + h));}

void InitTexture() {
LOGO = CreateTexture(LOGO_data, sizeof(LOGO_data));
menus1 = CreateTexture(menus1_data, sizeof(menus1_data));
menus2 = CreateTexture(menus2_data, sizeof(menus2_data));
menus3 = CreateTexture(menus3_data, sizeof(menus3_data));
menus4 = CreateTexture(menus4_data, sizeof(menus4_data));
menus5 = CreateTexture(menus5_data, sizeof(menus5_data));
logo1 = CreateTexture(logo1_data, sizeof(logo1_data));
NAROUTOxMENU = CreateTexture(NAROUTOxMENU_data, sizeof(NAROUTOxMENU_data)); 
NAROUTOxCOUNT = CreateTexture(NAROUTOxCOUNT_data, sizeof(NAROUTOxCOUNT_data)); 
}

void InitTexture();
bool GetHandInfo(char* resa,char** name,TextureInfo* textureInfo);
