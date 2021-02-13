/**
 * Behavior for bhvDecorativePendulum.
 * This controls the pendulum that lies underneath the Tick Tock Clock painting.
 */
int curBParamLevel = 0;
int movingSpace = 0;
void bhv_decorative_pendulum_init(void) {
    movingSpace = 0;
    curBParamLevel = 0;
    set_mario_action(gMarioStates, ACT_WAITING_FOR_DIALOG, 0);
    
}

/**
 * Smoothly swing the decorative pendulum back and forth using constant angular
 * acceleration.
 */
void bhv_decorative_pendulum_loop(void) {
    


    if (o->oBehParams2ndByte == curBParamLevel) {
        gCamera->cutscene = 1;
        if (gPlayer1Controller->buttonPressed & A_BUTTON && movingSpace == 0) {
            switch (o->oBehParams2ndByte) {
                case 0: initiate_warp(LEVEL_WF, 1, 0x0A, 0);
                break;
                case 1: initiate_warp(LEVEL_DDD, 1, 0x0A, 0);
                break;
                case 2: initiate_warp(LEVEL_TTC, 1, 0x0A, 0);
                break;
            }
        }
s16 rawStickX = gPlayer1Controller->rawStickX;

    if (rawStickX > 80.0f && movingSpace == 0) {
        if (o->oBehParams2ndByte < 3) {
            curBParamLevel += 1;
            movingSpace = 1;
            return;
        }
    }

    if (rawStickX < -80.0f && movingSpace == 0) {
        if (o->oBehParams2ndByte > 0) {
            curBParamLevel -= 1;
            movingSpace = -1;
            return;
        }
    }


if (movingSpace == 1) {
    switch (curBParamLevel) {
        case 1: warp_camera(50, 0, 2);
        break;
        case 2: warp_camera(50, -2, -3);
        break;
        case 3: warp_camera(50, 35, 65);
        break; 
    }
    gMarioState->pos[0]+= 50;
    
    set_mario_anim_with_accel(gMarioStates, MARIO_ANIM_RUNNING, 300000.0f);
    
    gMarioState->faceAngle[1] = 16384.0f;

    if (gMarioState->pos[0] > o->oPosX) {
        gMarioState->pos[0] = o->oPosX;
        movingSpace = 0;
    }
    
}
if (movingSpace == -1) {
    switch (curBParamLevel) {
        case 0: warp_camera(-50, 0, -2);
        break;
        case 1: warp_camera(-50, 2, 3);
        break;
        case 2: warp_camera(-50, -35, -65);
        break; 
    }
    gMarioState->pos[0]-= 50;
    
    set_mario_anim_with_accel(gMarioStates, MARIO_ANIM_RUNNING, 300000.0f);
    
    
    gMarioState->faceAngle[1] = -16384.0f;
    if (gMarioState->pos[0] < o->oPosX) {
        gMarioState->pos[0] = o->oPosX;
        movingSpace = 0;
    }
    
}
if (movingSpace == 0) {
    set_mario_animation(gMarioStates, MARIO_ANIM_IDLE_HEAD_CENTER);
    gMarioState->faceAngle[1] = 0.0f;
}

    }
}


