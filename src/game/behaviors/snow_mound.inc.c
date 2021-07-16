// snow_mound.c.inc
#include "actors/common0.h"
int bossAction;
int actCooldown;
int actPicker;
int dmgCool;
int wilfreHealth;
int cutsceneSteps;
int mercy;
int noDamageTimer;
void wilfre_init(void) {
    gCurrentObject->oAnimations = wilfre_anims;
    actCooldown = 20;
    wilfreHealth = 5;
    bossAction = 5;
    cutsceneSteps = 0;
    mercy = 0;
}


void bhv_sliding_snow_mound_loop(void) {
    
    if (obj_check_if_collided_with_object(o, gMarioObject) == 1 && bossAction != 3 && bossAction != 4  && gMarioState->action != ACT_HARD_BACKWARD_GROUND_KB && noDamageTimer == 0) {
        if (dmgCool == 0) {
            gMarioState->action = ACT_HARD_BACKWARD_GROUND_KB;
        gMarioState->health -= 0x0200;
        dmgCool = 30;
        }
    }

    if (actCooldown > 0) {
    actCooldown -=1;
    }
    if (dmgCool > 0) {
    dmgCool -=1;
    }

    if (noDamageTimer > 0) {
        noDamageTimer -= 1;
    }

    switch (bossAction) {
        case 0: wilfre_act_idle();
        break;
        case 1: wilfre_act_casting();
        break;
        case 2: wilfre_act_charge();
        break;
        case 3: wilfre_act_stunned();
        break;
        case 4: wilfre_act_hurt();
        break;
        case 5: wilfre_cutscene_beginning();
        break;
        case 6: wilfre_cutscene_defeated();
        break;
    }

}


void wilfre_act_idle(void) {
    cur_obj_init_animation(3);
    wilfre_approach_position(gMarioState->pos[0], gMarioState->pos[1]+ 400.0f, gMarioState->pos[2], 25);
    cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x400);

    if (actCooldown == 0) {
        if (mercy == 5) {
            bossAction = 2;
            mercy = 0;
            actPicker = 1;
            return;
        }
        actPicker = random_sign();
        switch (actPicker) {
            case -1: bossAction = 1; actPicker = 0;
            break;
            case 1: bossAction = 2; actPicker = 0; actCooldown = 160;
            break;
        }


    }


}

void wilfre_act_casting(void) {
    cur_obj_init_animation(0);
    if (actPicker == 0) {
        actPicker = random_sign();
        switch (actPicker) {
            case 1: actCooldown = 240;
            mercy += 1;
            break;
            case -1: actCooldown = 160;
            mercy += 1;
            break;
    }
    }
    if (actPicker == 1) {
        switch (actCooldown) {
            case 210: spawn_object_relative(0, 0.0f, 100.0f, 0.0f, o, MODEL_WILFRE_BULLET, bhvHidden1upInPole);
            break;
            case 180: spawn_object_relative(0, 0.0f, 100.0f, 0.0f, o, MODEL_WILFRE_BULLET, bhvHidden1upInPole);
            break;
            case 140: spawn_object_relative(0, 0.0f, 100.0f, 0.0f, o, MODEL_WILFRE_BULLET, bhvHidden1upInPole);
            break;
            case 100: spawn_object_relative(0, 0.0f, 100.0f, 0.0f, o, MODEL_WILFRE_BULLET, bhvHidden1upInPole);
            break;
            case 60: spawn_object_relative(0, 0.0f, 100.0f, 0.0f, o, MODEL_WILFRE_BULLET, bhvHidden1upInPole);
            break;
            case 0: bossAction = 0; actPicker = 0; actCooldown = 50;
            break;
        }
    }

    if (actPicker == -1) {
        if (gMarioState->action == ACT_HARD_BACKWARD_GROUND_KB) {
            bossAction = 0; actPicker = 0; actCooldown = 50;
        }
        switch (actCooldown) {
            case 130: spawn_object_relative(0, 0.0f, 100.0f, 0.0f, o, MODEL_WILFRE_SPIKE, bhvTowerDoor); play_sound(SOUND_OBJ_BOWSER_WALK, gDefaultSoundArgs);
            break;
            case 100: spawn_object_relative(0, 0.0f, 100.0f, 0.0f, o, MODEL_WILFRE_SPIKE, bhvTowerDoor); play_sound(SOUND_OBJ_BOWSER_WALK, gDefaultSoundArgs);
            break;
            case 70: spawn_object_relative(0, 0.0f, 100.0f, 0.0f, o, MODEL_WILFRE_SPIKE, bhvTowerDoor); play_sound(SOUND_OBJ_BOWSER_WALK, gDefaultSoundArgs);
            break;
            case 30: spawn_object_relative(1, 0.0f, 100.0f, 0.0f, o, MODEL_WILFRE_SPIKE, bhvTowerDoor); play_sound(SOUND_OBJ_BOWSER_WALK, gDefaultSoundArgs);
            break;
            case 0: bossAction = 0; actPicker = 0; actCooldown = 50;
            break;
        }
    }



}
f32 floorHeight;
void wilfre_act_charge(void) {
    
    if (actPicker == 0) {
        actPicker = random_sign();
        switch (actPicker) {
            case -1: bossAction = 0; actCooldown = 0;
            
            return;
            break;
    }
    }
    cur_obj_init_animation(1);

if (actCooldown > 110.0f) {
    wilfre_approach_position(o->oPosX, gMarioState->pos[1], o->oPosZ, 6);
    cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x400);
}
else {
    wilfre_approach_position(o->oPosX, gMarioState->pos[1], o->oPosZ, 6);
    o->oForwardVel = 90.0f;
    floorHeight = find_floor_height(o->oPosX, o->oPosY, o->oPosZ);
if (floorHeight < -1000.0f) {
    actCooldown = 90;
    bossAction = 3;
    o->oForwardVel = -0.0f;
    spawn_mist_particles_variable(0, 0, 46.0f);
    spawn_triangle_break_particles(30, 138, 3.0f, 4);
    play_sound(SOUND_OBJ_MAD_PIANO_CHOMPING, gDefaultSoundArgs);
}


    switch (actCooldown) {
            
            case 0: bossAction = 0; actPicker = 0; actCooldown = 50; o->oForwardVel = 0.0f;
            break;
        }


}
}

void wilfre_act_stunned(void) {
    cur_obj_init_animation(4);
    o->oForwardVel = -4.0f;
if (obj_check_if_collided_with_object(o, gMarioObject) == 1) {
    if (gMarioState->action == ACT_JUMP_KICK || gMarioState->action == ACT_DIVE || gMarioState->action == ACT_PUNCHING || gMarioState->action == ACT_GROUND_POUND) {
       bossAction = 4;
       actCooldown = 90; 
       o->oForwardVel = 0.0f;
       play_sound(SOUND_OBJ_MAD_PIANO_CHOMPING, gDefaultSoundArgs);
       wilfreHealth -= 1;
       
    }
}

switch (actCooldown) {
            
            case 0: bossAction = 0; actPicker = 0; actCooldown = 50; o->oForwardVel = 0.0f; noDamageTimer = 75;
            break;
        }
}

void wilfre_act_hurt(void) {
    cur_obj_init_animation(2);
    dmgCool = 10;
o->oPosY += 30.0f;
if (wilfreHealth == 0) {
   bossAction = 6;
}
switch (actCooldown) {
            case 0: bossAction = 0; actPicker = 0; actCooldown = 70; o->oForwardVel = 0.0f;
            break;
        }

}


void wilfre_approach_position(f32 targetX, f32 targetY, f32 targetZ, int delay) {

    o->oPosX += (targetX - o->oPosX)/delay; 
    o->oPosY += (targetY - o->oPosY)/delay; 
    o->oPosZ += (targetZ - o->oPosZ)/delay; 

}

void wilfre_cutscene_beginning(void) {
    if (cutsceneSteps == 0) {
        if (gMarioState->cutscenePlayerID[8] == 1) {
            bossAction = 0;
            return;
        }
    gMarioState->cutsceneActive = 66;
    gMarioState->dialogueLines = 12;
    cutsceneSteps = 1;
    o->oFaceAngleYaw = 16600.0f;
    
    }
    gCamera->cutscene = 1;
    cur_obj_init_animation(3);
    if (gMarioState->cutsceneActive < 68) {
        gLakituState.goalFocus[0] = gMarioState->pos[0];
        gLakituState.goalFocus[1] = gMarioState->pos[1];
        gLakituState.goalFocus[2] = gMarioState->pos[2];
    }

    else {
        gLakituState.goalFocus[0] = o->oPosX;
        gLakituState.goalFocus[1] = o->oPosY;
        gLakituState.goalFocus[2] = o->oPosZ;
    }

    
    if (gMarioState->cutsceneActive == 0) {
        gMarioState->cutscenePlayerID[8] = 1;
        bossAction = 0;
        gCamera->cutscene = 0;
        func_80321080(500);
        cutsceneSteps = 0;
        save_cutscene_id();
    }
}

void wilfre_cutscene_defeated(void) {
    if (cutsceneSteps == 0) {
        if (gMarioState->raposaRescued[3] == 1) {
            
            cutsceneSteps = 2;
            initiate_warp(LEVEL_TTM, 1, 0x0A, 0);
            return;
        }
    gMarioState->health = 0x880;
    gMarioState->cutsceneActive = 78;
    gMarioState->dialogueLines = 2;
    cutsceneSteps = 1;
    
    
    }
    dmgCool = 1;
    if (cutsceneSteps == 1) {
    gCamera->cutscene = 1;
    cur_obj_init_animation(3);
    
    if (gMarioState->cutsceneActive == 0) {
        spawn_object_relative(3, 0, 5, 0, o, MODEL_RAPOSA_CAGE, bhvOctagonalPlatformRotating);
        gCamera->cutscene = 0;
        o->oPosY = 900;
        o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];
        cutsceneSteps = 2;
    }
    }
}

void bhv_snow_mound_spawn_loop(void) {
    
}
