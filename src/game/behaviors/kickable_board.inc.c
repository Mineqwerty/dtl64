// kickable_board.c.inc




int despawnTimer = 300;
int YdespawnTimer = 300;
int XdespawnTimer = 300;
s32 check_mario_attacking(UNUSED s32 sp18) {
    
}

void init_kickable_board_rock(void) {
   
}

void bhv_kickable_board_loop(void) {

  if (o->oinitMoving == 0.0f) {
      switch (o->oBehParams2ndByte) {
        case 0: o->omaxDispX = 3300.0f; o->omaxDispY = 0.0f; o->omaxDispZ = 0.0f; o->omovX = 2.0; o->omovY = 0.0; o->omovZ = 0.0;
        break;
        case 1: o->omaxDispX = 0.0f; o->omaxDispY = 1000.0f; o->omaxDispZ = 0.0f; o->omovX = 0.0; o->omovY = 3.0; o->omovZ = 0.0;
        break;
        case 2: o->omaxDispX = 0.0f; o->omaxDispY = 0.0f; o->omaxDispZ = 500.0f; o->omovX = 0.0; o->omovY = 0.0; o->omovZ = 1.0;
        break;
        case 3: o->omaxDispX = 0.0f; o->omaxDispY = 0.0f; o->omaxDispZ = 9000.0f; o->omovX = 0.0; o->omovY = 0.0; o->omovZ = 0.0;
        break;
        case 4: o->omaxDispX = 0.0f; o->omaxDispY = 9000.0f; o->omaxDispZ = 0.0f; o->omovX = 0.0; o->omovY = 0.0; o->omovZ = 0.0;
        break;
        case 5: o->omaxDispX = 8000.0f; o->omaxDispY = 0.0f; o->omaxDispZ = 0.0f; o->omovX = 0.0; o->omovY = 0.0; o->omovZ = 0.0;
        break;
    }
    o->oinitPosX = o->oPosX;
    o->oinitPosY = o->oPosY;
    o->oinitPosZ = o->oPosZ;
    o->oinitMoving = 1.0f;
  }


    extern const u16 draw_moving_platform_sprite_rgba16[];
    extern const u16 moving_platform_sprite_rgba16[];
    u16 *SwitchTexture = segmented_to_virtual(draw_moving_platform_sprite_rgba16);
    u16 *PlatformTexture = segmented_to_virtual(moving_platform_sprite_rgba16);
    

    bcopy(SwitchTexture, PlatformTexture, 2*32*32);
    if (gMarioState->drawState > 1) {
        load_object_collision_model();
    }
    
    if (o->oBehParams2ndByte == 3) {
        if (gMarioObject->platform == o) {
            o->omovZ = -3.0f;
            despawnTimer = 300;
        }
        else {
            despawnTimer-=1;
            if (despawnTimer == 0) {
                o->oPosX =o->oinitPosX;
                o->oPosY =o->oinitPosY;
                o->oPosZ =o->oinitPosZ;
                despawnTimer = 300;
                o->omovZ = 0.0f;
            }
        }
    }

    if (o->oBehParams2ndByte == 4) {
        if (gMarioObject->platform == o) {
            o->omovY = 2.0f;
            YdespawnTimer = 300;
        }
        else {
            YdespawnTimer-=1;
            if (YdespawnTimer == 0) {
                o->oPosX =o->oinitPosX;
                o->oPosY =o->oinitPosY;
                o->oPosZ =o->oinitPosZ;
                YdespawnTimer = 300;
                o->omovY = 0.0f;
            }
        }
    }
    if (o->oBehParams2ndByte == 5) {
        if (gMarioObject->platform == o) {
            o->omovX = -2.0f;
            XdespawnTimer = 300;
        }
        else {
            XdespawnTimer-=1;
            if (XdespawnTimer == 0) {
                o->oPosX =o->oinitPosX;
                o->oPosY =o->oinitPosY;
                o->oPosZ =o->oinitPosZ;
                XdespawnTimer = 300;
                o->omovX = 0.0f;
            }
        }
    }

    o->oPosX += o->omovX*12.0f;
    o->oPosY += o->omovY*8.0f;
    o->oPosZ += o->omovZ*12.0f;

    

if (absf(o->oPosX - o->oinitPosX) > o->omaxDispX) {
    o->omovX *= -1;
}
if (absf(o->oPosY - o->oinitPosY) > o->omaxDispY) {
    o->omovY *= -1;
}
if (absf(o->oPosZ - o->oinitPosZ) > o->omaxDispZ) {
    o->omovZ *= -1;
}



}
