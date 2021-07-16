//raposa in cage

#include "actors/common0.h"

int rescueState;

void bhv_ssl_moving_pyramid_wall_init(void) {

    gCurrentObject->respawnInfo = RESPAWN_INFO_TYPE_NULL;

    switch (o->oBehParams2ndByte) {
        case 0: gCurrentObject->oAnimations = heather_anims;
        cur_obj_init_animation(0);
        break;
        case 1: gCurrentObject->oAnimations = samuel_anims;
        cur_obj_init_animation(0);
        break;
        case 2: gCurrentObject->oAnimations = count_choco_anims;
        cur_obj_init_animation(0);
        break;

    }
}


void bhv_ssl_moving_pyramid_wall_loop(void) {
    if (gCurrentObject->respawnInfo == RESPAWN_INFO_DONT_RESPAWN) {
        cur_obj_init_animation(1);
        if (rescueState == 0) {
            rescueState = 1;
            set_mario_action(gMarioStates, ACT_WAITING_FOR_DIALOG, 0);
            gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];
            switch (o->oBehParams2ndByte) {
                case 0: create_dialog_box(DIALOG_037);
                gMarioState->raposaRescued[0] = 1;
                break;
                case 1: create_dialog_box(DIALOG_038);
                gMarioState->raposaRescued[1] = 1;
                break;
                case 2: create_dialog_box(DIALOG_039);
                gMarioState->raposaRescued[2] = 1;
                break;
            }
        }
        if (rescueState == 3) {
            set_mario_action(gMarioStates, ACT_IDLE, 0);
            gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_MARIO];
            func_80321080(500);
            if (gDialogResponse == 0) {
                rescueState = 0;
            obj_mark_for_deletion(o);
            }
        }
        if (gDialogResponse == 1) {
                   if (rescueState == 1) {
                       switch (o->oBehParams2ndByte) {
                           case 0:
                           gMarioState->cutsceneActive = 3;
                gMarioState->dialogueLines = 1;
                           break;
                           case 1:
                           gMarioState->cutsceneActive = 4;
                gMarioState->dialogueLines = 1;
                           break;
                           case 2:
                           gMarioState->cutsceneActive = 7;
                gMarioState->dialogueLines = 1;
                           break;
                       }
                       rescueState = 2;
                   }
               }
        if (rescueState == 2) {
            if (gMarioState->cutsceneActive == 0) {
                rescueState = 3;
            }
        }
    }
    else {
        cur_obj_init_animation(0);
    }


    
}
Gfx *geo_switch_heather_eyes(s32 run, struct GraphNode *node, UNUSED Mat4 *mtx) {
    struct Object *obj;
    struct GraphNodeSwitchCase *switchCase;
        obj = (struct Object *) gCurGraphNodeObject;
        switchCase = (struct GraphNodeSwitchCase *) node;
    if (gCurrentObject->respawnInfo == RESPAWN_INFO_DONT_RESPAWN) {
       switchCase->selectedCase = 2;
    }
    else {
        switchCase->selectedCase = 1;
    }
    
}
Gfx *geo_switch_choco_mouth(s32 run, struct GraphNode *node, UNUSED Mat4 *mtx) {
    struct Object *obj;
    struct GraphNodeSwitchCase *switchCase;
        obj = (struct Object *) gCurGraphNodeObject;
        switchCase = (struct GraphNodeSwitchCase *) node;
    if (gCurrentObject->respawnInfo == RESPAWN_INFO_DONT_RESPAWN) {
       switchCase->selectedCase = 2;
    }
    else {
        switchCase->selectedCase = 1;
    }
    
}