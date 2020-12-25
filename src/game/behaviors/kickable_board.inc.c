// kickable_board.c.inc





s32 check_mario_attacking(UNUSED s32 sp18) {
    
}

void init_kickable_board_rock(void) {
   
}

void bhv_kickable_board_loop(void) {

  if (o->oinitMoving == 0.0f) {
      switch (o->oBehParams2ndByte) {
        case 0: o->omaxDispX = 3000.0f; o->omaxDispY = 0.0f; o->omaxDispZ = 0.0f; o->omovX = -1.0; o->omovY = 0.0; o->omovZ = 0.0;
        break;
        case 1: o->omaxDispX = 0.0f; o->omaxDispY = 1000.0f; o->omaxDispZ = 0.0f; o->omovX = 0.0; o->omovY = -1.0; o->omovZ = 0.0;
        break;
        case 2: o->omaxDispX = 0.0f; o->omaxDispY = 0.0f; o->omaxDispZ = 500.0f; o->omovX = 0.0; o->omovY = 0.0; o->omovZ = 1.0;
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

    print_text_fmt_int(100, 30, "Cellz %d", (s32)o->oinitPosX);
    
    o->oPosX += o->omovX*12.0f;
    o->oPosY += o->omovY*8.0f;
    o->oPosZ += o->omovZ*12.0f;

    if (gMarioObject->platform == o) {
        apply_platform_displacement(TRUE, o);
    }

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
