// grill_door.c.inc



void bhv_openable_cage_door_loop(void) {
    
}

void bhv_openable_grill_loop(void) {
    if (gMarioState->drawState < 4) {
        mark_obj_for_deletion(o);
        return;
    }

    if (gMarioState->action == ACT_IDLE) {
        if (gPlayer1Controller->buttonPressed & L_TRIG) {
            spawn_object(o, MODEL_KOOPA_SHELL, bhvKoopaShell);
    }
    }
    o->oPosX = gMarioState->pos[0];
    o->oPosY = gMarioState->pos[1];
    o->oPosZ = gMarioState->pos[2];

}
