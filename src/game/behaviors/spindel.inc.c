// spindel.c.inc

void bhv_spindel_init(void) {
    switch (o->oBehParams2ndByte) {
        case 0: 
        if (gMarioState->raposaRescued[0] == 0) {
            obj_mark_for_deletion(o);
        }
        break;
    }
}

void bhv_spindel_loop(void) {
    
}
