// shock_wave.c.inc

int timer = 15;

void bhv_bowser_shock_wave_loop(void) {
    //CHANGE FOR RELEASE
    //ease of development stuff

   if (gMarioState->cutsceneStep == 0) {
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
        initiate_warp(LEVEL_BOB, 1, 0x0A, 0);
       // return;
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
if (gMarioState->cutsceneStep == 5) {
    create_dialog_box(DIALOG_036);
    if (gDialogResponse == 1) {
        play_secondary_music(SEQ_STREAMED_CREATION_HALL, 0, 255, 100);
        initiate_warp(LEVEL_ENDING, 1, 0x0A, 0);
    }
}

}
