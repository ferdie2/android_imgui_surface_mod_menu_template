//
// Created by Laughing Muffin on 18.09.2023
//
//======================================================================================================================
#pragma once
//======================================================================================================================
#include <Globals.h>
//======================================================================================================================
HOOK_DEF(void, Input, void *thiz, void *ex_ab, void *ex_ac) {
    orig_Input(thiz, ex_ab, ex_ac);
    if (g_Initialized)
        ImGui_ImplAndroid_HandleInputEvent((AInputEvent *)thiz);
    return;
}
//======================================================================================================================