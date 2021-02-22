// square_platform_cycle.c.inc

//ALL CUTSCENE RAPOSA MOVEMENTS AND ANIMATIONS ARE HANDLED HERE

#include "actors/common0.h"

void cutscene_raposa_init(void) {
    switch (o->oBehParams2ndByte) {
        case 0: 
        gCurrentObject->oAnimations = heather_anims;
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

void bhv_squarish_path_moving_loop(void) {
   switch (o->oBehParams2ndByte) {
        case 0: heather_cutscene();
        break;
}


}
void heather_cutscene() {

}