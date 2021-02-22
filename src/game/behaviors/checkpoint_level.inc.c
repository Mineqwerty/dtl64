int oldDrawState = 0;

void bhv_checkpoint_level_init(void) {
    /*
    oldDrawState = gMarioStates->drawState;
        if (gMarioStates->drawState > 3) {
        spawn_object_relative(0, -4035, -1491, -24378, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, 3251, 2060, -23856, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, 14735, -2073, -19189, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, 16173, -2076, -17011, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, 17940, -1692, -14435, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, 23703, 144, -7033, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, 24621, 896, -5398, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, 25593, 1994, -2741, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, 18441, 5843, 8389, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, 9978, 545, 7995, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, 5325, -1027, 5279, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, 3407, -103, 5325, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, -4052, -1148, 5320, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, -5527, -385, 5244, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, -11472, -759, 8842, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, -2064, -741, -19755, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, 3832, 803, -14215, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, 10113, 2825, -4668, o, MODEL_GOOMBA, bhvGoomba);
        spawn_object_relative(0, 11531, 2819, 2795, o, MODEL_GOOMBA, bhvGoomba);
        }

*/
}

void bhv_checkpoint_level_loop(void) {
 
    if (gMarioState->drawState > 3) {
        if (oldDrawState != gMarioStates->drawState) {
            bhv_checkpoint_level_init();
        }
    }

}