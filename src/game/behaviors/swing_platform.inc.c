int timer = 15;
void bhv_swing_platform_init(void) {
    
}

void bhv_swing_platform_update(void) {
    //CHANGE FOR RELEASE
    //ease of development stuff
if (gMarioState && gMarioObject) {
   if (gMarioState->gameInitialized == 0) {
       for (int i = 0; i<16; i++) {
       load_drawing(i);
       }
       /*
       gMarioState->cutsceneStep = 1;
       create_dialog_box(DIALOG_034);
       play_secondary_music(SEQ_STREAMED_OUTSIDE_HOUSE, 0, 255, 100);
   }


   if (gMarioState->cutsceneStep == 1) {
       warp_camera(0, 0, 300);
    if (gDialogResponse == 1) {
       gMarioState->cutsceneStep = 2;
   }
    }

    if (gMarioState->cutsceneStep == 2) {
        gDialogResponse = 0;
        */
       // initiate_warp(LEVEL_BOB, 1, 0x0A, 0);
       // return;
       gMarioState->gameInitialized = 1;
  }
}
if (gMarioState->cutsceneStep == 3) {
   /*  if (timer > -1) {
    timer -= 1;
     }
    if (timer == 0) {
    create_dialog_box(DIALOG_035);
    set_mario_action(gMarioStates, ACT_WAITING_FOR_DIALOG, 0);
    }
    if (gDialogResponse == 1) {
*/
    gMarioState->cutsceneStep = 4;
    set_mario_action(gMarioStates, ACT_IDLE, 0);
    //}
    
}

}
