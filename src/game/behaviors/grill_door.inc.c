// grill_door.c.inc



void bhv_openable_cage_door_loop(void) {
    
}
struct Object *shell;
int shellspawn;

void bhv_openable_grill_loop(void) {
    if (gMarioState->drawState < 4) {
        mark_obj_for_deletion(o);
        return;
    }
    
    extern const u16 draw_hoverboard_sprite_rgba16[];
    extern const u16 hoverboard_sprite_rgba16[];
    u16 *SwitchTexture = segmented_to_virtual(draw_hoverboard_sprite_rgba16);
    u16 *SpringTexture = segmented_to_virtual(hoverboard_sprite_rgba16);


    bcopy(SwitchTexture, SpringTexture, 2*32*32);
    if (shellspawn == 1) {
        shell = spawn_object(o, MODEL_KOOPA_SHELL, bhvKoopaShell);
        shellspawn = 0;
    }


    if (gMarioState->action == ACT_IDLE || gMarioState->action == ACT_PANTING) {
        if (gPlayer1Controller->buttonPressed & L_TRIG) {
            if (shell) {
            mark_obj_for_deletion(shell);
            }
            shellspawn = 1;
    }
    }
    o->oPosX = gMarioState->pos[0];
    o->oPosY = gMarioState->pos[1];
    o->oPosZ = gMarioState->pos[2];

}
