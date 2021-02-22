// spindel.c.inc
#include "actors/common0.h"

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
    }
}

void bhv_spindel_loop(void) {
    
}
