/**
 * Behavior for bhvUnusedParticleSpawn.
 *
 * This unused behavior spawns 10 purple particles if Mario collides with its
 * associated object.
 */
int triggertext;

void bhv_unused_particle_spawn_loop(void) {
    load_object_collision_model();
    if (gMarioObject->platform == o) {
        if (triggertext == 0) {
            triggertext = 1;
            create_dialog_box_with_response(DIALOG_002);
            gMarioState->action = ACT_WAITING_FOR_DIALOG;
        }
        if (gDialogResponse == 1) {
            initiate_warp(LEVEL_BOB, 1, 0x0A, 0);
            gDialogResponse = 0;
        }
        if (gDialogResponse == 2) {
            gMarioState->action = ACT_IDLE;
        }
    }
    else {
        triggertext = 0;
    }

}
