#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>

{
    auto now = std::chrono::system_clock::now();
    std::time_t current_time = std::chrono::system_clock::to_time_t(now);
    std::tm local_tm;
    localtime_r(&current_time, &local_tm); 

    std::ostringstream ss_time;
    ss_time << std::put_time(&local_tm, "%H:%M:%S");
    std::string time_str = ss_time.str();

    ImGui::SetCursorPos(ImVec2(350,116));
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

    ImGui::SetCursorPos(ImVec2(159,116));
    ImGui::Text("%s", date_str.c_str());
}
ImGui::SetCursorPos(ImVec2(252,167));
ImGui::BeginChild("General", ImVec2(478, 330), false,ImGuiWindowFlags_NoScrollbar );
{
if (NAROUTO::Tab == 1) {
    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.5f, 0.0f, 0.5f, 1.0f));
            
    ImGui::Checkbox("Line", &Config.PlayerESP.Line);
    ImGui::SameLine(136);
    ImGui::Checkbox("Skeleton", &Config.PlayerESP.Skeleton);
    ImGui::SameLine(299);            
    ImGui::Checkbox("Name", &Config.PlayerESP.Name);
    ImGui::PopStyleColor();
    ImGui::PopStyleVar();

    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.5f, 0.0f, 0.5f, 1.0f));
    ImGui::Checkbox("Box", &Config.PlayerESP.Box);
    ImGui::SameLine(136);
    ImGui::Checkbox("Health", &Config.PlayerESP.Health);
    ImGui::SameLine(299);            
    ImGui::Checkbox("Distance", &Config.PlayerESP.Distance);
    ImGui::PopStyleColor();
    ImGui::PopStyleVar();
    
    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.5f, 0.0f, 0.5f, 1.0f));
    ImGui::Checkbox("Grenade", &Config.PlayerESP.Grenade);
    ImGui::SameLine(136);
    ImGui::Checkbox("Hide Bot", &Config.PlayerESP.NoBot);
    ImGui::SameLine(299);            
    ImGui::Checkbox("Loot Box", &Config.PlayerESP.LootBox);
    ImGui::Separator();
    static int selected_lang1 = 0;
const char* languages1[] = { "Health", "Health 2" };
ImGui::PushStyleColor(ImGuiCol_FrameBg, ImVec4(0.705f, 0.0f, 1.0f, 1.0f));     
ImGui::PushStyleColor(ImGuiCol_FrameBgHovered, ImVec4(0.705f, 0.0f, 1.0f, 1.0f));     
ImGui::PushStyleColor(ImGuiCol_FrameBgActive, ImVec4(0.705f, 0.0f, 1.0f, 1.0f));      
ImGui::PushItemWidth(140.0f); 
ImGui::Combo("##LanguageCombo", &selected_lang1, languages1, IM_ARRAYSIZE(languages1));
ImGui::PopItemWidth();
ImGui::PopStyleColor(3);
    ImGui::PopStyleColor();
    ImGui::PopStyleVar();
    
} else if (NAROUTO::Tab == 2) {
    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.5f, 0.0f, 0.5f, 1.0f));
    ImGui::Checkbox("Team ID", &Config.PlayerESP.TeamID);
    ImGui::SameLine(136);
    ImGui::Checkbox("Enemy Wpn", &Config.PlayerESP.Weapon);
    ImGui::SameLine(299);            
    ImGui::Checkbox("Vehicle", &Config.PlayerESP.Vehicle);
    ImGui::PopStyleColor();
    ImGui::PopStyleVar();

    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.5f, 0.0f, 0.5f, 1.0f));
    ImGui::Checkbox("AIRDROPE", &Config.PlayerESP.AIRDROPE);
    ImGui::SameLine(136);
    ImGui::Checkbox("warning", &Config.PlayerESP.warning);
    ImGui::SameLine(299);            
    ImGui::Checkbox("AWM", &Config.PlayerESP.AWM);
    ImGui::PopStyleColor();
    ImGui::PopStyleVar();

    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.5f, 0.0f, 0.5f, 1.0f));
    ImGui::Checkbox("RADAR", &Config.PlayerESP.RADAR);
    ImGui::SameLine(136);
    ImGui::Checkbox("Resources", &Config.PlayerESP.Resources);
    ImGui::SameLine(299);            
    ImGui::Checkbox("GAMEINFO", &Config.PlayerESP.GAMEINFO);
    ImGui::Separator();
    ImGui::PopStyleColor();
    ImGui::PopStyleVar();


} else if (NAROUTO::Tab == 3) {
    ImGui::Spacing();
    ImGui::Spacing();
    SliderFloat1("Fov", &Config.AimBot.Cross, 2, 400.0f);
    ImGui::SameLine();
    SliderFloat1("Meter", &Config.AimBot.Meter, 0, 300.0f);
    ImGui::SameLine();
    SliderFloat1("Speed", &a99, 0, 300.0f);
    ImGui::Separator();
    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.5f, 0.0f, 0.5f, 1.0f));
    ImGui::Checkbox(" AimBot", &AIMBUTTON);
    ImGui::SameLine();
    ImGui::Checkbox(" BulletTrack", &Config.SilentAim.Enable);
    ImGui::PopStyleColor();
    ImGui::PopStyleVar();
    
    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.5f, 0.0f, 0.5f, 1.0f));
    ImGui::SameLine();
    ImGui::Checkbox(" Ignore Bot", &Config.AimBot.IgnoreBot);
    ImGui::PopStyleColor();
    ImGui::PopStyleVar();
    
    static int type_aim_mode = 0;
    static const char* aimModes[] = { "Both", "Scope" };

    ImGui::Text("Aim Mode");
    ImGui::PushID("AimModeButtons");
    ImGui::PushStyleColor(ImGuiCol_Button, type_aim_mode == 0 ? ImVec4(0.40f, 0.00f, 0.40f, 1.00f) : ImVec4(0.15f, 0.00f, 0.15f, 1.00f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, type_aim_mode == 0 ? ImVec4(0.50f, 0.00f, 0.50f, 1.00f) : ImVec4(0.20f, 0.00f, 0.20f, 1.00f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, type_aim_mode == 0 ? ImVec4(0.60f, 0.00f, 0.60f, 1.00f) : ImVec4(0.25f, 0.00f, 0.25f, 1.00f));
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.00f, 1.00f, 1.00f, 1.00f));
    if (ImGui::Button(aimModes[0], ImVec2(ImGui::GetContentRegionAvail().x * 0.5f - ImGui::GetStyle().ItemSpacing.x * 0.5f, 30))) {
        type_aim_mode = 0;
    }
    ImGui::PopStyleColor(4);

    ImGui::SameLine();

    ImGui::PushStyleColor(ImGuiCol_Button, type_aim_mode == 1 ? ImVec4(0.40f, 0.00f, 0.40f, 1.00f) : ImVec4(0.15f, 0.00f, 0.15f, 1.00f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, type_aim_mode == 1 ? ImVec4(0.50f, 0.00f, 0.50f, 1.00f) : ImVec4(0.20f, 0.00f, 0.20f, 1.00f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, type_aim_mode == 1 ? ImVec4(0.60f, 0.00f, 0.60f, 1.00f) : ImVec4(0.25f, 0.00f, 0.25f, 1.00f));
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.00f, 1.00f, 1.00f, 1.00f));
    if (ImGui::Button(aimModes[1], ImVec2(ImGui::GetContentRegionAvail().x, 30))) {
        type_aim_mode = 1;
    }
    ImGui::PopStyleColor(4);
    ImGui::PopID();

    ImGui::Spacing();
    ImGui::Spacing();

    static int type_target = 0;
    static const char* targets[] = { "Nick", "Haed" };

    ImGui::Text("Target");
    ImGui::PushID("TargetButtons");
    ImGui::PushStyleColor(ImGuiCol_Button, type_target == 0 ? ImVec4(0.40f, 0.00f, 0.40f, 1.00f) : ImVec4(0.15f, 0.00f, 0.15f, 1.00f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, type_target == 0 ? ImVec4(0.50f, 0.00f, 0.50f, 1.00f) : ImVec4(0.20f, 0.00f, 0.20f, 1.00f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, type_target == 0 ? ImVec4(0.60f, 0.00f, 0.60f, 1.00f) : ImVec4(0.25f, 0.00f, 0.25f, 1.00f));
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.00f, 1.00f, 1.00f, 1.00f));
    if (ImGui::Button(targets[0], ImVec2(ImGui::GetContentRegionAvail().x * 0.5f - ImGui::GetStyle().ItemSpacing.x * 0.5f, 30))) {
        type_target = 0;
    }
    ImGui::PopStyleColor(4);

    ImGui::SameLine();

    ImGui::PushStyleColor(ImGuiCol_Button, type_target == 1 ? ImVec4(0.40f, 0.00f, 0.40f, 1.00f) : ImVec4(0.15f, 0.00f, 0.15f, 1.00f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, type_target == 1 ? ImVec4(0.50f, 0.00f, 0.50f, 1.00f) : ImVec4(0.20f, 0.00f, 0.20f, 1.00f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, type_target == 1 ? ImVec4(0.60f, 0.00f, 0.60f, 1.00f) : ImVec4(0.25f, 0.00f, 0.25f, 1.00f));
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.00f, 1.00f, 1.00f, 1.00f));
    if (ImGui::Button(targets[1], ImVec2(ImGui::GetContentRegionAvail().x, 30))) {
        type_target = 1;
    }
    ImGui::PopStyleColor(4);
    ImGui::PopID();
    
} else if (NAROUTO::Tab == 4) {
    ImGui::Spacing();
    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.5f, 0.0f, 0.5f, 1.0f));
    ImGui::Checkbox(" SKIN weapon ", &het);
    ImGui::PopStyleColor();
    ImGui::PopStyleVar();
    const char* xsuity[] = { "skin xsuit", "Blood Raven X-Suit", "Golden Pharaoh X-Suit", "Avalanche X-suit", "Irresidence X-suit", "Poseidon X-suit", "Arcane Jester X-suit", "Silvanus X-Suit" };
    ImGui::Combo("##xs", &skinxsuit, xsuity, IM_ARRAYSIZE(xsuity));
    const char* setsskin[] = { "skin set", "Giannis Jersey ", "Black Shark Diving Suit ", "Baby Shark", "Fireman Suit", "mummy","Vimber set","masked psychic robe","Glacier Set","Dystopian Survivor Set","Invader Set","Red Bowtie Set","Vigilant City Set","Devil Wings Set","Bling Set","Rhythm Rider Set","Ghidorah's Carapace","Auspicious Rat Set" };
    ImGui::Combo("##setsskin", &skinset, setsskin, IM_ARRAYSIZE(setsskin));
    const char* Bag[] = { "bag skin", "Godzilla Backpack", "Pharaoh's Regalia Backpack","Blood Raven Backpack" };
    ImGui::Combo("##BAG", &skinbg, Bag, IM_ARRAYSIZE(Bag));
    const char* helmet[] = { "helmet skin", "inferno rider", "Glacier Helmet" };
    ImGui::Combo("##helmet", &skinhelmet, helmet, IM_ARRAYSIZE(helmet));

    if (ImGui::BeginTable("Skins and Vehicles", 2, ImGuiTableFlags_SizingStretchSame | ImGuiTableFlags_BordersInnerV)) {
        ImGui::TableNextColumn();
        ImGui::Text("M416 SKIN");
        const char* m416[] = { "NO SKIN", " Glacier - M416", "The Fool - M416","Lizard Roar - M416","Shinobi Kami - M416","Call of the Wild - M416", "Imperial Splendor - M416", "Silver Guru - M416", "TechnoCore - M416", "Tidal Embrace - M416","sealed nether m416" };
        ImGui::Combo("##m4", &skinm4, m416, IM_ARRAYSIZE(m416));

        ImGui::Text("AKM SKIN");
        const char* AKM[] = { "NO SKIN", "Glacier - AKM", "The Seven Seas - AKM","Roaring Tiger - AKM","Sculpture - AKM","Desert Fossil - AKM","Jack-o'-lantern - AKM","Ghillie Dragon - AKM", "Gold Pirate - AKM","Wandering Tyrant - AKM","Star Admiral - AKM","Hellfire - AKM" };
        ImGui::Combo("##AKM", &skinakm, AKM, IM_ARRAYSIZE(AKM));

        ImGui::Text("SCAR-L SKIN");
        const char* SCAR[] = { "NO SKIN", "Water Blaster - SCAR-L", "Enchanted Pumpkin - SCAR-L","Operation Tomorrow - SCAR-L","Drop the Bass - SCAR-L ","Hextech Crystal - SCAR-L","THORN OF MALICE - SCAR-L"," Folly's Clasp - SCAR-L" };
        ImGui::Combo("##SCAR-L", &skinscar, SCAR, IM_ARRAYSIZE(SCAR));

        ImGui::Text("M762 SKIN");
        const char* M7[] = { "NO SKIN", "8-bit Unicorn - M762", "GACKT MOONSAGA-M762","Lotus Fury - M762","Messi Football Icon M762","Concerto of Love - M762","StarCore-M762","Stray Rebellion - M762" };
        ImGui::Combo("##M762", &skinm7, M7, IM_ARRAYSIZE(M7));

        ImGui::Text("AWM SKIN");
        const char* AWMM[] = { "NO SKIN", "Mauve Avenger - AWM", "Field Commander - AWM","Godzilla - AWM","Flame Wave - AWM" };
        ImGui::Combo("##AWM", &skinawm, AWMM, IM_ARRAYSIZE(AWMM));

        ImGui::TableNextColumn();
        ImGui::Text("M24 SKIN");
        const char* m244[] = { "NO SKIN", "The Seven Seas - M24", "Pharaoh's Might - M24","Lady Butterfly - M24","Killer Tune - M24","Circle of Life - M24","Cadence Maestro - M24" };
        ImGui::Combo("##M24", &skinm24, m244, IM_ARRAYSIZE(m244));

        ImGui::Text("UZI SKIN");
        const char* UZII[] = { "NO SKIN", "Savagery - UZI", "Ethereal Emblem - UZI","Romantic Moments - UZI","Shimmer Power - UZI" };
        ImGui::Combo("##UZI", &skinuzi, UZII, IM_ARRAYSIZE(UZII));

        ImGui::Text("UMP SKIN");
        const char* UMPP[] = { "NO SKIN", "Dragonfire - UMP45", "EMP - UMP45","Outlawed Fantasy - UMP45","Platinum Ripper - UMP45","Anniversary - UMP45","8 Bit Blast - UMP45" };
        ImGui::Combo("##UMP", &skinump45, UMPP, IM_ARRAYSIZE(UMPP));

        ImGui::Text("GROZA SKIN");
        const char* GROZZA[] = { "NO SKIN", "Forest Raider - GROZA", "Styx - Groza","Eventide Aria - GROZA","Ryomen Sukuna - GROZA" };
        ImGui::Combo("##GROZA_Skin", &skingroza, GROZZA, IM_ARRAYSIZE(GROZZA));

        ImGui::Text("M16A4 SKIN");
        const char* M16A44[] = { "NO SKIN", "Blood & Bones - M16A4", "Aurora Pulse - M16A4","Radiant Edge - M16A4","Skeletal Core - M16A4" };
        ImGui::Combo("##M16A4_Skin", &skinm16a4, M16A44, IM_ARRAYSIZE(M16A44));

        ImGui::Separator();

        ImGui::Text("P90 SKIN");
        const char* P900[] = { "NO SKIN", "Devious Cybercat - P90" };
        ImGui::Combo("##P90_Skin", &P90, P900, IM_ARRAYSIZE(P900));

        ImGui::Text("MG3 SKIN");
        const char* MG30[] = { "NO SKIN", "Sky Huntress - MG3" };
        ImGui::Combo("##MG3_Skin", &MG3, MG30, IM_ARRAYSIZE(MG30));

        ImGui::Text("FAMAS SKIN");
        const char* FAMAS0[] = { "NO SKIN", "Origin Lumen - FAMAS" };
        ImGui::Combo("##FAMAS_Skin", &FAMAS, FAMAS0, IM_ARRAYSIZE(FAMAS0));

        ImGui::Separator();

        ImGui::Text(" UAZ ");
        const char* Uazz[] = { "off UAZ","Robust Universe ","Bentley","Lamborghini Urus ","Godzilla ","Hitman ", };
        ImGui::Combo("##UAZABOD", &Uaz, Uazz, IM_ARRAYSIZE(Uazz));
        ImGui::Text(" Dacia ");
        const char* Daciaa[] = { "off Dacia","Dodge Charger","2 Bentley","Lamborghini Estoque","Lamborghini black", };
        ImGui::Combo("##DaciaABOD", &Dacia, Daciaa, IM_ARRAYSIZE(Daciaa));
        ImGui::Text(" McLaren ");
        const char* coupee[] = { "off McLaren","Dodge Hellcat","Bentley Batur","Bugatti Nebula","Lamborghini Aventador","Melodic Midnight", };
        ImGui::Combo("##McLaren", &coupe, coupee, IM_ARRAYSIZE(coupee));
        ImGui::Text(" Mirado ");
        const char* Miradoe[] = { "off Mirado","Bentley Mirado","Anniversary", };
        ImGui::Combo("##Mirado", &Mirado, Miradoe, IM_ARRAYSIZE(Miradoe));
        ImGui::Text(" Buggy ");
        const char* Buggye[] = { "off Buggy","Ceratops LvL 4","Bloodthirsty", };
        ImGui::Combo("##Buggy", &Buggy, Buggye, IM_ARRAYSIZE(Buggye));
        ImGui::Spacing();

        ImGui::EndTable();
    }
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
ImGui::PushStyleColor(ImGuiCol_FrameBg, ImVec4(0.705f, 0.0f, 1.0f, 1.0f));     
ImGui::PushStyleColor(ImGuiCol_FrameBgHovered, ImVec4(0.705f, 0.0f, 1.0f, 1.0f));     
ImGui::PushStyleColor(ImGuiCol_FrameBgActive, ImVec4(0.705f, 0.0f, 1.0f, 1.0f));      
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
    }
}
ImGui::SetCursorScreenPos(ImVec2(original_pos.x, original_pos.y + height + 10));
ImGui::Dummy(ImVec2(0, height + 10));

}
}
ImGui::EndChild();