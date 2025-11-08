bool SliderFloat1(const char* label, float* v, float v_min, float v_max) {
    ImGuiWindow* window = ImGui::GetCurrentWindow();
    if (window->SkipItems)
        return false;

    ImGuiContext& g = *GImGui;
    const ImGuiStyle& style = g.Style;
    const ImGuiID id = window->GetID(label);

    float radius = 70.0f; 
    ImVec2 pos = window->DC.CursorPos;
    float diameter = radius * 2.0f;
    ImVec2 size = ImVec2(diameter, diameter);

    const ImRect bb(pos, ImVec2(pos.x + diameter, pos.y + diameter));
    ImGui::ItemSize(bb, style.FramePadding.y);
    if (!ImGui::ItemAdd(bb, id))
        return false;

    bool hovered, held;
    bool pressed = ImGui::ButtonBehavior(bb, id, &hovered, &held);

    ImDrawList* draw_list = ImGui::GetWindowDrawList();
    ImVec2 center = ImVec2(pos.x + radius, pos.y + radius);

    ImU32 color_bg_track = ImGui::GetColorU32(ImVec4(0.3f, 0.3f, 0.3f, 1.0f));
    ImU32 color_fill_track = ImGui::GetColorU32(ImVec4(0.6f, 0.2f, 0.8f, 1.0f));
    ImU32 color_handle = ImGui::GetColorU32(ImVec4(0.9f, 0.9f, 0.9f, 1.0f));
    ImU32 color_text = ImGui::GetColorU32(ImVec4(1.0f, 1.0f, 1.0f, 1.0f));

    float track_thickness = radius * 0.2f;
    float handle_radius = radius * 0.3f;

    float value_normalized = ImClamp((*v - v_min) / (v_max - v_min), 0.0f, 1.0f);
    float angle = value_normalized * 2.0f * M_PI;

    draw_list->AddCircle(center, radius - track_thickness / 2, color_bg_track, 0, track_thickness);

    draw_list->PathClear();
    int num_segments = 60;
    for (int i = 0; i <= num_segments; ++i) {
        float current_angle = (float)i / (float)num_segments * angle - M_PI / 2.0f;
        draw_list->PathLineTo(ImVec2(center.x + (radius - track_thickness / 2) * cos(current_angle),
                                      center.y + (radius - track_thickness / 2) * sin(current_angle)));
    }
    draw_list->PathStroke(color_fill_track, false, track_thickness);

    float handle_angle = angle - M_PI / 2.0f;
    ImVec2 handle_pos = ImVec2(center.x + radius * cos(handle_angle),
                               center.y + radius * sin(handle_angle));

    draw_list->AddCircleFilled(handle_pos, handle_radius, color_handle);
    draw_list->AddCircle(handle_pos, handle_radius, ImGui::GetColorU32(ImVec4(0.5f, 0.5f, 0.5f, 1.0f)), 0, 2.0f);

    if (held) {
        ImVec2 mouse_pos = ImGui::GetMousePos();
        ImVec2 delta = ImVec2(mouse_pos.x - center.x, mouse_pos.y - center.y);
        float mouse_angle = atan2(delta.y, delta.x);

        mouse_angle += M_PI / 2.0f;
        if (mouse_angle < 0) mouse_angle += 2.0f * M_PI;
        mouse_angle = fmod(mouse_angle, 2.0f * M_PI);

        float new_normalized_value = mouse_angle / (2.0f * M_PI);
        *v = v_min + new_normalized_value * (v_max - v_min);
        *v = ImClamp(*v, v_min, v_max);
    }

    ImVec2 text_size = ImGui::CalcTextSize(label);
    draw_list->AddText(ImVec2(center.x - text_size.x * 0.5f, center.y - text_size.y * 0.5f), color_text, label);

    return pressed || held;
}
//========================================================================//
#define COLOR_TEXT_WHITE ImVec4(1.0f, 1.0f, 1.0f, 1.0f)
#define COLOR_GLOW_PURPLE ImVec4(0.8f, 0.2f, 0.9f, 1.0f)
#define COLOR_CHECK_BOX_BG ImVec4(0.0f, 0.0f, 0.0f, 1.0f)
#define COLOR_CHECKMARK_ORANGE ImVec4(1.0f, 0.5f, 0.0f, 1.0f)

bool IosToggle(const char* label, bool* v) {
    ImGuiWindow* window = ImGui::GetCurrentWindow();
    if (window->SkipItems)
        return false;

    ImGuiContext& g = *GImGui;
    const ImGuiStyle& style = g.Style;
    ImDrawList* draw_list = ImGui::GetWindowDrawList();

    const ImVec2 label_size = ImGui::CalcTextSize(label, NULL, true);

    float checkbox_size = ImGui::GetFrameHeight();
    float desired_height = label_size.y > checkbox_size ? label_size.y : checkbox_size;
    desired_height += style.FramePadding.y * 2.0f;

    float total_width = label_size.x + style.ItemInnerSpacing.x + checkbox_size + style.FramePadding.x * 2.0f;

    ImVec2 cursor_pos = window->DC.CursorPos;
    ImRect total_bb(cursor_pos, ImVec2(cursor_pos.x + total_width, cursor_pos.y + desired_height));
    ImGui::ItemSize(total_bb, style.FramePadding.y);
    if (!ImGui::ItemAdd(total_bb, window->GetID(label))) {
        return false;
    }

    bool hovered, held;
    bool pressed = ImGui::ButtonBehavior(total_bb, window->GetID(label), &hovered, &held);

    ImVec2 text_pos = ImVec2(cursor_pos.x, cursor_pos.y + (desired_height - label_size.y) * 0.5f);
    draw_list->AddText(text_pos, ImGui::GetColorU32(COLOR_TEXT_WHITE), label);

    ImVec2 checkbox_pos = ImVec2(cursor_pos.x + total_width - checkbox_size - style.FramePadding.x, cursor_pos.y + (desired_height - checkbox_size) * 0.5f);
    ImRect checkbox_bb(checkbox_pos, ImVec2(checkbox_pos.x + checkbox_size, checkbox_pos.y + checkbox_size));
    
    float checkbox_rounding = checkbox_size * 0.2f;

    float border_thickness = 1.0f; 
    draw_list->AddRect(ImVec2(checkbox_bb.Min.x - border_thickness, checkbox_bb.Min.y - border_thickness), 
                       ImVec2(checkbox_bb.Max.x + border_thickness, checkbox_bb.Max.y + border_thickness), 
                       ImGui::GetColorU32(COLOR_TEXT_WHITE), checkbox_rounding + border_thickness, 0, border_thickness);

    if (*v) {
        float glow_thickness = 3.0f;
        ImVec2 glow_min = ImVec2(checkbox_bb.Min.x - glow_thickness, checkbox_bb.Min.y - glow_thickness);
        ImVec2 glow_max = ImVec2(checkbox_bb.Max.x + glow_thickness, checkbox_bb.Max.y + glow_thickness);
        draw_list->AddRectFilled(glow_min, glow_max, ImGui::GetColorU32(COLOR_GLOW_PURPLE), checkbox_rounding + glow_thickness);
    }

    draw_list->AddRectFilled(checkbox_bb.Min, checkbox_bb.Max, ImGui::GetColorU32(COLOR_CHECK_BOX_BG), checkbox_rounding);
    
    if (*v) {
        ImU32 checkmark_color = ImGui::GetColorU32(COLOR_CHECKMARK_ORANGE);
        float checkmark_thickness = 3.0f; 
        
        float check_inner_size = checkbox_size * 0.8f; 
        ImVec2 check_center = ImVec2(checkbox_bb.Min.x + checkbox_size * 0.5f, checkbox_bb.Min.y + checkbox_size * 0.5f);

        ImVec2 p1 = ImVec2(check_center.x - check_inner_size * 0.35f, check_center.y + check_inner_size * 0.1f);
        ImVec2 p2 = ImVec2(check_center.x - check_inner_size * 0.05f, check_center.y + check_inner_size * 0.4f);
        ImVec2 p3 = ImVec2(check_center.x + check_inner_size * 0.45f, check_center.y - check_inner_size * 0.2f);

        draw_list->AddLine(p1, p2, checkmark_color, checkmark_thickness);
        draw_list->AddLine(p2, p3, checkmark_color, checkmark_thickness);
    }

    if (pressed)
        *v = !*v;

    return pressed;
}
