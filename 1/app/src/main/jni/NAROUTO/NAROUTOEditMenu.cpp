/*ImGui::Columns(2);
ImGui::SetColumnOffset(1, 125); {
static ImVec4 active = ImguiPP::to_vec4(80, 91, 97, 255);
static ImVec4 inactive = ImguiPP::to_vec4(0, 0, 220, 255);
float imageSizeScale = 0.7f;
float buttonSize = 95.0f * imageSizeScale;    
/*ImGui::PushStyleColor(ImGuiCol_Button, NAROUTO::Tab == 1 ? active : inactive);
if (ImGui::ImageButton((ImTextureID)menus1.textureId, ImVec2(buttonSize,buttonSize))) NAROUTO::Tab = 1;
ImGui::Spacing();
ImGui::PushStyleColor(ImGuiCol_Button, NAROUTO::Tab == 2 ? active : inactive);
if (ImGui::ImageButton((ImTextureID)menus2.textureId, ImVec2(buttonSize,buttonSize))) NAROUTO::Tab = 2;
ImGui::Spacing();
ImGui::PushStyleColor(ImGuiCol_Button, NAROUTO::Tab == 3 ? active : inactive);
if (ImGui::ImageButton((ImTextureID)menus3.textureId, ImVec2(buttonSize,buttonSize))) NAROUTO::Tab = 3;
ImGui::Spacing();
ImGui::PushStyleColor(ImGuiCol_Button, NAROUTO::Tab == 4 ? active : inactive);
if (ImGui::ImageButton((ImTextureID)menus4.textureId, ImVec2(buttonSize,buttonSize))) NAROUTO::Tab = 4;
ImGui::Spacing();
ImGui::PushStyleColor(ImGuiCol_Button, NAROUTO::Tab == 5 ? active : inactive);
if (ImGui::ImageButton((ImTextureID)menus5.textureId, ImVec2(buttonSize,buttonSize))) NAROUTO::Tab = 5;
ImGui::PopStyleColor(5);}
*/
/*
ImGui::NextColumn();
ImGui::PushStyleColor(ImGuiCol_ChildBg, Config.ColorsESP.BackgroundColor);
ImGui::BeginChildFrame(ImGui::GetID("Hello"),ImVec2(0,0));
if (NAROUTO::Tab == 1) {
    ImGui::Spacing();
    ImGui::Spacing();
    ImGui::Text(" Bypass Running...");
    ImGui::SameLine();
    ImGui::Text(" (%.1f FPS)", ImGui::GetIO().Framerate);
    
    if (ImGui::BeginChild("##NAROUTO7ESP1", ImVec2(0, 0), true, ImGuiWindowFlags_NoScrollbar)) {
        if (ImGui::BeginTable("NAROUTO ESP LYOUT", 2, ImGuiTableFlags_SizingStretchSame | ImGuiTableFlags_BordersInnerV)) {
            ImGui::TableNextColumn();
            ImGui::Text("ESP Settings");
            ImGui::Separator();

            ImGui::Checkbox("Line", &Config.PlayerESP.Line);
            ImGui::Separator();
            ImGui::Checkbox("Skeleton", &Config.PlayerESP.Skeleton);
            ImGui::Separator();
            ImGui::Checkbox("Name", &Config.PlayerESP.Name);
            ImGui::Separator();
            ImGui::Checkbox("Team ID", &Config.PlayerESP.TeamID);
            ImGui::Separator();
            ImGui::Checkbox("Enemy Wpn", &Config.PlayerESP.Weapon);
            ImGui::Separator();
            ImGui::Checkbox("Vehicle", &Config.PlayerESP.Vehicle);
            ImGui::Separator();

            ImGui::TableNextColumn();
            ImGui::Text("NAROUTO");
            ImGui::Separator();

            ImGui::Checkbox("Box", &Config.PlayerESP.Box);
            ImGui::Separator();
            ImGui::Checkbox("Health", &Config.PlayerESP.Health);
            ImGui::Separator();
            ImGui::Checkbox("Distance", &Config.PlayerESP.Distance);
            ImGui::Separator();
            ImGui::Checkbox("Loot Box", &Config.PlayerESP.LootBox);
            ImGui::Separator();
            ImGui::Checkbox("Grenade", &Config.PlayerESP.Grenade);
            ImGui::Separator();
            ImGui::Checkbox("Hide Bot", &Config.PlayerESP.NoBot);
            ImGui::Separator();

            ImGui::EndTable();
        }
        ImGui::EndChild();
    }
}


else if (NAROUTO::Tab == 2) {
ImGui::Spacing();
for (auto &i : items_data) {
if (ImGui::TreeNode(i["Category"].get<std::string>().c_str())) {
for (auto &item : i["Items"]) {
ImGui::Checkbox(item["itemName"].get<std::string>().c_str(),(bool *) &Items[item["itemId"].get<int>()]);}
ImGui::TreePop();}}}

else if (NAROUTO::Tab == 3) {
ImGui::Spacing();
ImGui::Checkbox("Enable AimBot", &AIMBUTTON);
ImGui::Checkbox("Enable BulletTrack", &Config.SilentAim.Enable);
ImGui::Spacing();
ImGui::Spacing();
ImGui::Spacing();
static const char *targets[] = {"Head", "Chest"};
ImGui::Combo("##Target", (int *) &type_target, targets, 2, -1);
ImGui::SameLine();
ImGui::Text("Aim Target");
static const char *triggerr[] = {"Shooting", "Scoping","Any"};
ImGui::Combo("##Trigger", (int *) &Trigger, triggerr, 3, -1);
ImGui::SameLine();
ImGui::Text("Aim Trigger");
ImGui::PushItemWidth(313);
ImGui::Text("Fov Size: ");
ImGui::SliderFloat("##Fov", &Config.AimBot.Cross, 2, 400.0f);
ImGui::Text("Aim Meter: ");
ImGui::SliderFloat("##Meter", &Config.AimBot.Meter, 0, 300.0f);
ImGui::Spacing();
ImGui::Checkbox(" Ignore Bot (More Safe) ", &Config.AimBot.IgnoreBot);
ImGui::Spacing();}

else if (NAROUTO::Tab == 4) {
ImGui::Spacing();
ImGui::Checkbox(" SKIN weapon ", &het);
const char* xsuity[] = { "skin xsuit", "Blood Raven X-Suit", "Golden Pharaoh X-Suit", "Avalanche X-suit", "Irresidence X-suit", "Poseidon X-suit", "Arcane Jester X-suit", "Silvanus X-Suit"};
ImGui::Combo("##xs", &skinxsuit, xsuity, IM_ARRAYSIZE(xsuity));
const char* setsskin[] = { "skin set", "Giannis Jersey ", "Black Shark Diving Suit ", "Baby Shark", "Fireman Suit", "mummy","Vimber set","masked psychic robe","Glacier Set","Dystopian Survivor Set","Invader Set","Red Bowtie Set","Vigilant City Set","Devil Wings Set","Bling Set","Rhythm Rider Set","Ghidorah's Carapace","Auspicious Rat Set"};
ImGui::Combo("##setsskin", &skinset, setsskin, IM_ARRAYSIZE(setsskin));
const char* Bag[] = { "bag skin", "Godzilla Backpack", "Pharaoh's Regalia Backpack","Blood Raven Backpack"};
ImGui::Combo("##BAG", &skinbg, Bag, IM_ARRAYSIZE(Bag));
const char* helmet[] = { "helmet skin", "inferno rider", "Glacier Helmet"};
ImGui::Combo("##helmet", &skinhelmet, helmet, IM_ARRAYSIZE(helmet));
ImGui::Text("M416 SKIN");
ImGui::TableNextColumn();
const char* m416[] = { "NO SKIN", " Glacier - M416", "The Fool - M416","Lizard Roar - M416","Shinobi Kami - M416","Call of the Wild - M416", "Imperial Splendor - M416", "Silver Guru - M416", "TechnoCore - M416" "Tidal Embrace - M416","sealed nether m416" };
ImGui::Combo("##m4", &skinm4, m416, IM_ARRAYSIZE(m416));
ImGui::TableNextColumn();
ImGui::Text("AKM SKIN");
ImGui::TableNextColumn();
const char* AKM[] = { "NO SKIN", "Glacier - AKM", "The Seven Seas - AKM","Roaring Tiger - AKM","Sculpture - AKM","Desert Fossil - AKM","Jack-o'-lantern - AKM","Ghillie Dragon - AKM", "Gold Pirate - AKM","Wandering Tyrant - AKM","Star Admiral - AKM","Hellfire - AKM"};
ImGui::Combo("##AKM", &skinakm, AKM, IM_ARRAYSIZE(AKM));
ImGui::TableNextColumn();
ImGui::Text("SCAR-L SKIN");
ImGui::TableNextColumn();
const char* SCAR[] = { "NO SKIN", "Water Blaster - SCAR-L", "Enchanted Pumpkin - SCAR-L","Operation Tomorrow - SCAR-L","Drop the Bass - SCAR-L ","Hextech Crystal - SCAR-L","THORN OF MALICE - SCAR-L"," Folly's Clasp - SCAR-L"};
ImGui::Combo("##SCAR-L", &skinscar, SCAR, IM_ARRAYSIZE(SCAR));
ImGui::TableNextColumn();
ImGui::Text("M762 SKIN");
ImGui::TableNextColumn();;
const char* M7[] ={"NO SKIN", "8-bit Unicorn - M762", "GACKT MOONSAGA-M762","Lotus Fury - M762","Messi Football Icon M762","Concerto of Love - M762","StarCore-M762","Stray Rebellion - M762"};
ImGui::Combo("##M762", &skinm7, M7, IM_ARRAYSIZE(M7));
ImGui::TableNextColumn();
ImGui::Text("AWM SKIN");
ImGui::TableNextColumn();
const char* AWMM[] ={"NO SKIN", "Mauve Avenger - AWM", "Field Commander - AWM","Godzilla - AWM","Flame Wave - AWM"};
ImGui::Combo("##AWM", &skinawm, AWMM, IM_ARRAYSIZE(AWMM));
ImGui::TableNextColumn();
ImGui::Text("M24 SKIN");
ImGui::TableNextColumn();
const char* m244[] ={"NO SKIN", "The Seven Seas - M24", "Pharaoh's Might - M24","Lady Butterfly - M24","Killer Tune - M24","Circle of Life - M24","Cadence Maestro - M24"};
ImGui::Combo("##M24", &skinm24, m244, IM_ARRAYSIZE(m244));
ImGui::TableNextColumn();
ImGui::Text("UZI SKIN");
ImGui::TableNextColumn();
const char* UZII[] = { "NO SKIN", "Savagery - UZI", "Ethereal Emblem - UZI","Romantic Moments - UZI","Shimmer Power - UZI"};
ImGui::Combo("##UZI", &skinuzi, UZII, IM_ARRAYSIZE(UZII));
ImGui::TableNextColumn();
ImGui::Text("UMP SKIN");
ImGui::TableNextColumn();
const char* UMPP[] = { "NO SKIN", "Dragonfire - UMP45", "EMP - UMP45","Outlawed Fantasy - UMP45","Platinum Ripper - UMP45","Anniversary - UMP45","8 Bit Blast - UMP45"};
ImGui::Combo("##UMP", &skinump45, UMPP, IM_ARRAYSIZE(UMPP));
ImGui::TableNextColumn(); 
ImGui::TableNextColumn();
ImGui::Text("GROZA SKIN");
ImGui::TableNextColumn();
const char* GROZZA[] ={"NO SKIN", "Forest Raider - GROZA", "Styx - Groza","Eventide Aria - GROZA","Ryomen Sukuna - GROZA"};
ImGui::Combo("##GROZA", &skingroza, GROZZA, IM_ARRAYSIZE(GROZZA));
ImGui::TableNextColumn(); 
ImGui::TableNextColumn();
ImGui::Text("M16A4 SKIN");
ImGui::TableNextColumn();
const char* M16A44[] ={"NO SKIN", "Blood & Bones - M16A4", "Aurora Pulse - M16A4","Radiant Edge - M16A4","Skeletal Core - M16A4"};
ImGui::Combo("##M16A4", &skinm16a4, M16A44, IM_ARRAYSIZE(M16A44));
ImGui::Separator();
ImGui::Text("P90 SKIN");
ImGui::TableNextColumn();
const char* P900[] ={"NO SKIN", "Devious Cybercat - P90"};
ImGui::Combo("##GROZA", &P90, P900, IM_ARRAYSIZE(P900));
ImGui::Text("MG3 SKIN");
ImGui::TableNextColumn();
const char* MG30[] ={"NO SKIN", "Sky Huntress - MG3"};
ImGui::Combo("##GROZA", &MG3, MG30, IM_ARRAYSIZE(MG30));
ImGui::Text("FAMAS SKIN");
ImGui::TableNextColumn();
const char* FAMAS0[] ={"NO SKIN", "Origin Lumen - FAMAS"};
ImGui::Combo("##GROZA", &FAMAS, FAMAS0, IM_ARRAYSIZE(FAMAS0));
ImGui::Separator();
ImGui::Text(" UAZ ");
const char* Uazz[] = { "off UAZ","Robust Universe ","Bentley","Lamborghini Urus ","Godzilla ","Hitman ",};
ImGui::Combo("##UAZABOD", &Uaz, Uazz, IM_ARRAYSIZE(Uazz));
ImGui::Text(" Dacia ");
const char* Daciaa[] = { "off Dacia","Dodge Charger","2 Bentley","Lamborghini Estoque","Lamborghini black",};
ImGui::Combo("##DaciaABOD", &Dacia, Daciaa, IM_ARRAYSIZE(Daciaa));
ImGui::Text(" McLaren ");
const char* coupee[] = { "off McLaren","Dodge Hellcat","Bentley Batur","Bugatti Nebula","Lamborghini Aventador","Melodic Midnight",};
ImGui::Combo("##McLaren", &coupe, coupee, IM_ARRAYSIZE(coupee));
ImGui::Text(" Mirado ");
const char* Miradoe[] = { "off Mirado","Bentley Mirado","Anniversary",};
ImGui::Combo("##Mirado", &Mirado, Miradoe, IM_ARRAYSIZE(Miradoe));
ImGui::Text(" Buggy ");
const char* Buggye[] = { "off Buggy","Ceratops LvL 4","Bloodthirsty",};
ImGui::Combo("##Buggy", &Buggy, Buggye, IM_ARRAYSIZE(Buggye));
ImGui::Spacing();}

else if (NAROUTO::Tab == 5) {
ImGui::Spacing();
ImGui::Text("ESP SETTINGS :");
ImGui::Spacing();
ImGui::SliderFloat("Line Size", &Config.Linesize, 0, 5.0f);
ImGui::SliderFloat("Skeleton Size", &Config.SkeletonSize, 0, 5.0f);

ImGui::Separator();
/*ImGui::Text("BACKGROUND SETTINGS :");
ImGui::Spacing();
ImGui::ColorEdit4("Background Color", (float*)&Config.ColorsESP.BackgroundColor);
ImGui::SliderFloat("Background Alpha", &Config.ColorsESP.BackgroundColor.w, 0.0f, 1.0f, "Alpha = %.2f");
*//*
ImGui::Text("SAVE SETTINGS :");
ImGui::Spacing();
if (ImGui::Button("Save setting",{170,50})){saveCFG();}
ImGui::SameLine();
if (ImGui::Button("Remove setting",{170,50})){removeCFG(); }}


}
ImGui::EndChildFrame();
ImGui::PopStyleColor();
*/