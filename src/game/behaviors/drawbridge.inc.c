// drawbridge.c.inc

int spring_jumping = 0;
s16 jump_height = 100.0f;
int camera_manip = 0;
int spring_id = 0;

void bhv_lll_drawbridge_spawner_loop(void) {
    
}

void bhv_lll_drawbridge_loop(void) {
    if (gMarioState->copyDrawings[2] == 0) {
    extern const u16 draw_spring_sprite_rgba16[];
    extern const u16 bounce_spring_sprite_rgba16[];
    u16 *SwitchTexture = segmented_to_virtual(draw_spring_sprite_rgba16);
    u16 *SpringTexture = segmented_to_virtual(bounce_spring_sprite_rgba16);


    bcopy(SwitchTexture, SpringTexture, 2*32*32);
    gMarioState->copyDrawings[2] = 1;
    }


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
    camera_manip = 1;
}
if (camera_manip == 1) {
    
    switch (spring_id) {
        case 0: gLakituState.goalPos[2] = gMarioState->pos[2];
        gLakituState.goalPos[1] = gMarioState->pos[1] + 900.0f;
         gLakituState.goalPos[0] = gMarioState->pos[0] - 3000.0f;
         
         gLakituState.goalFocus[0] = gMarioState->pos[0];
         gLakituState.goalFocus[1] = gMarioState->pos[1];
         gLakituState.goalFocus[2] = gMarioState->pos[2]; 

         gLakituState.yaw = -16384.0f;
         gCamera->yaw = -16384.0f;
        break;
    case 1: gLakituState.goalPos[2] = gMarioState->pos[2] + 1500.0f;
        gLakituState.goalPos[1] = gMarioState->pos[1] + 900.0f;
         gLakituState.goalPos[0] = gMarioState->pos[0] + 3000.0f;
         
         gLakituState.goalFocus[0] = gMarioState->pos[0];
         gLakituState.goalFocus[1] = gMarioState->pos[1];
         gLakituState.goalFocus[2] = gMarioState->pos[2]; 

         gLakituState.yaw = 12288.0f;
         gCamera->yaw = 12288.0f;
        break;
 case 2: gLakituState.goalPos[2] = gMarioState->pos[2] - 3000.0f;
        gLakituState.goalPos[1] = gMarioState->pos[1] + 900.0f;
         gLakituState.goalPos[0] = gMarioState->pos[0] + 0.0f;
         
         gLakituState.goalFocus[0] = gMarioState->pos[0];
         gLakituState.goalFocus[1] = gMarioState->pos[1];
         gLakituState.goalFocus[2] = gMarioState->pos[2]; 

         gLakituState.yaw = 32768.0f;
         gCamera->yaw = 32768.0f;
        break;


    }
    gCamera->cutscene = 1;

if (gMarioState->action == ACT_IDLE || gMarioState->action == ACT_WALKING) {
    gCamera->cutscene = 0;
    camera_manip = 0;
    set_camera_mode(gCamera, CAMERA_MODE_8_DIRECTIONS, 1);
}
}

if (gMarioObject->platform == o) {
    set_mario_action(gMarioStates, ACT_DOUBLE_JUMP, 0);
    spring_jumping = 1;
    switch (o->oBehParams2ndByte) {
    case 0: spring_id = 0;
    break;
    case 1: spring_id = 1;
    break;
    case 2: spring_id = 2;
    break;
    }
}



}
