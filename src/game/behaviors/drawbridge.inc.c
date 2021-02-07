// drawbridge.c.inc

int spring_jumping = 0;
s16 jump_height = 100.0f;

void bhv_lll_drawbridge_spawner_loop(void) {
    
}

void bhv_lll_drawbridge_loop(void) {
    extern const u16 draw_spring_sprite_rgba16[];
    extern const u16 bounce_spring_sprite_rgba16[];
    u16 *SwitchTexture = segmented_to_virtual(draw_spring_sprite_rgba16);
    u16 *SpringTexture = segmented_to_virtual(bounce_spring_sprite_rgba16);


    bcopy(SwitchTexture, SpringTexture, 2*32*32);
    if (gMarioState->drawState > 2) {
        load_object_collision_model();
    }
if (gCurrLevelNum == LEVEL_TTC) {
    jump_height = 150.0f;
}
else {
    jump_height = 100.0f;
}


if (spring_jumping == 1) {
    gMarioState->vel[1] = jump_height;
    spring_jumping = 0;
    set_camera_mode(gCamera, CAMERA_MODE_SLIDE_HOOT, 1);
}
if (gMarioState->action == ACT_IDLE) {
    set_camera_mode(gCamera, CAMERA_MODE_FREE_ROAM, 1);
}

if (gMarioObject->platform == o) {
    set_mario_action(gMarioStates, ACT_DOUBLE_JUMP, 0);
    spring_jumping = 1;
}



}
