// spindel.c.inc
#include "actors/common0.h"
extern int joweeWalking;
extern int mariWalking;
extern int heatherWalking;

void bhv_spindel_init(void) {
    
    switch (o->oBehParams2ndByte) {
        case 0: 
        gCurrentObject->oAnimations = heather_anims;
        cur_obj_init_animation(0);
        if (gMarioState->raposaRescued[0] == 0) {
            obj_mark_for_deletion(o);
        }
        break;
        case 1: gCurrentObject->oAnimations = samuel_anims;
        cur_obj_init_animation(0);
        if (gMarioState->raposaRescued[1] == 0) {
            obj_mark_for_deletion(o);
        }
        break;
        case 2: gCurrentObject->oAnimations = count_choco_anims;
        cur_obj_init_animation(0);
        if (gMarioState->raposaRescued[2] == 0) {
            obj_mark_for_deletion(o);
        }
        break;
        case 3:
        break;
        case 4: gCurrentObject->oAnimations = isaac_anims;
        cur_obj_init_animation(0);
        break;
        case 5: gCurrentObject->oAnimations = jowee_anims;
        cur_obj_init_animation(0);
        break;
        case 6: gCurrentObject->oAnimations = mari_anims;
        cur_obj_init_animation(0);
        break;
    }
}

void bhv_spindel_loop(void) {
    
//dialogue
    if (o->oDistanceToMario < 300.0f && gPlayer1Controller->buttonPressed & A_BUTTON && gMarioState->action != ACT_WAITING_FOR_DIALOG) {
        switch (o->oBehParams2ndByte) {
            case 0:
                gMarioState->cutsceneActive = 3;
                gMarioState->dialogueLines = 1;
            break;
            case 1:
                if (gMarioState->raposaRescued[0] == 1 && gMarioState->raposaRescued[2] == 1 && gMarioState->raposaRescued[3] == 1) {
                    gMarioState->cutsceneActive = 6;
                gMarioState->dialogueLines = 1;
                }
                else {
                    gMarioState->cutsceneActive = 5;
                gMarioState->dialogueLines = 1;
                }
            break;
            case 2:
            gMarioState->cutsceneActive = 8;
                gMarioState->dialogueLines = 1;
            break;
            case 4:
                if (gMarioState->raposaRescued[2] == 0) {
                gMarioState->cutsceneActive = 1;
                gMarioState->dialogueLines = 1;
                
             }
             else if (gMarioState->raposaRescued[2] == 1) {
                 gMarioState->cutsceneActive = 2;
                gMarioState->dialogueLines = 1;

             }

    break;
}

    }





//animation switching

    switch (o->oBehParams2ndByte) {
        case 0:
        if (heatherWalking == 1) {
            cur_obj_init_animation(2);
        }
        else {
            cur_obj_init_animation(0);
        }
    break;
    case 1:
        if (heatherWalking == 1) {
            cur_obj_init_animation(2);
        }
        else {
            cur_obj_init_animation(0);
        }
    break;
    case 5:
    
        if (gMarioState->cutsceneActive == 17 || gMarioState->cutsceneActive == 23 || gMarioState->cutsceneActive == 43 || gMarioState->cutsceneActive == 47) {
            cur_obj_init_animation(2);
        }
        else if (joweeWalking == 1) {
            cur_obj_init_animation(1);
        }
        else {
            cur_obj_init_animation(0);
        }
        break;
    case 6:
    
        if (gMarioState->cutsceneActive > 8 && gMarioState->cutsceneActive < 16) {
            cur_obj_init_animation(3);
        }
        else if (mariWalking == 1) {
            cur_obj_init_animation(2);
        }
        else {
            cur_obj_init_animation(1);
        }
        break;
    }
}



//jowee and mari's faces
Gfx *geo_switch_jowee_eyes(s32 run, struct GraphNode *node, UNUSED Mat4 *mtx) {
    struct Object *obj;
    struct GraphNodeSwitchCase *switchCase;
        obj = (struct Object *) gCurGraphNodeObject;
        switchCase = (struct GraphNodeSwitchCase *) node;
        
        if (gMarioState->cutsceneActive == 15 || gMarioState->cutsceneActive == 17 || gMarioState->cutsceneActive == 43 || gMarioState->cutsceneActive == 47) {
            
            switchCase->selectedCase = 2;
            
        }
        else {
            switchCase->selectedCase = 1;
        }
        
    
}
Gfx *geo_switch_mari_face(s32 run, struct GraphNode *node, UNUSED Mat4 *mtx) {
    struct Object *obj;
    struct GraphNodeSwitchCase *switchCase;
        obj = (struct Object *) gCurGraphNodeObject;
        switchCase = (struct GraphNodeSwitchCase *) node;
    if (gMarioState->cutsceneActive > 8 && gMarioState->cutsceneActive < 16) {
            switchCase->selectedCase = 3;
        }
        else if (gMarioState->cutsceneActive == 32 || gMarioState->cutsceneActive == 33) {
            switchCase->selectedCase = 3;
        }
        else {
            switchCase->selectedCase = 1;
        }
}

