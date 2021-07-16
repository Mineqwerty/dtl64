// tower_door.c.inc
int deathTimer;
u8 stayHeight;

void bhv_wilfre_bullet_init(void) {
    o->oPosX = gMarioState->pos[0];
    o->oPosY = gMarioState->pos[1] - 300.0f;
    o->oPosZ = gMarioState->pos[2];
    stayHeight = gMarioState->pos[1] - 150.0f;
}

void bhv_tower_door_loop(void) {
    if (obj_check_if_collided_with_object(o, gMarioObject) == 1 && gMarioState->action != ACT_HARD_BACKWARD_GROUND_KB) {
        gMarioState->action = ACT_HARD_BACKWARD_GROUND_KB;
        gMarioState->health -= 0x0300;
        
    }
    if (o->oBehParams2ndByte == 0) { 
    o->oPosY += 15.0f;
    if (deathTimer < 1) {
        deathTimer = 600;
    }
    if (deathTimer < 5) {
        deathTimer = 0;
        obj_mark_for_deletion(o);
        return;
    }
    deathTimer-=1;
    }
    if (o->oBehParams2ndByte == 1) { 
        if (o->oPosY < stayHeight) {
            o->oPosY += 15.0f;
        }
        if (obj_check_if_collided_with_object(o, gMarioObject) == 1) {
        obj_mark_for_deletion(o);
        
    }

    }

}
