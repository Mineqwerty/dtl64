// raposa cage
struct Object *cage;
void bhv_rotating_octagonal_plat_init(void) {
    switch (o->oBehParams2ndByte) {
        case 0: if (gMarioState->raposaRescued[0] == 1) {
            obj_mark_for_deletion(o);
            return;
        }
        cage = spawn_object_relative(0, 0, 40, 0, o, MODEL_HEATHER, bhvSslMovingPyramidWall);
        break;
        case 1: if (gMarioState->raposaRescued[1] == 1) {
            obj_mark_for_deletion(o);
            return;
        }
        cage = spawn_object_relative(1, 0, 5, 0, o, MODEL_SAMUEL, bhvSslMovingPyramidWall);
        break;
        case 2: if (gMarioState->raposaRescued[2] == 1) {
            obj_mark_for_deletion(o);
            return;
        }
        cage = spawn_object_relative(2, 0, 5, 0, o, MODEL_COUNT_CHOCO, bhvSslMovingPyramidWall);
        break;
    }
}

void bhv_rotating_octagonal_plat_loop(void) {
    if (cur_obj_was_attacked_or_ground_pounded() != 0) {
        obj_explode_and_spawn_coins(46.0f, 1);
        create_sound_spawner(SOUND_GENERAL_BREAK_BOX);
        cage->respawnInfo = RESPAWN_INFO_DONT_RESPAWN;
        play_secondary_music(SEQ_STREAMED_RAPOSA_RESCUED, 0, 255, 100);
    }
}
