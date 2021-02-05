// cruiser.c.inc
int limit = 0;
void bhv_rr_cruiser_wing_init(void) {
    
}

void bhv_rr_cruiser_wing_loop(void) {
    extern const u16 draw_boost_panel_sprite_rgba16[];
    extern const u16 boost_panel_sprite_rgba16[];
    u16 *SwitchTexture = segmented_to_virtual(draw_boost_panel_sprite_rgba16);
    u16 *PanelTexture = segmented_to_virtual(boost_panel_sprite_rgba16);
    

    bcopy(SwitchTexture, PanelTexture, 2*32*32);
    if (gMarioState->drawState > 5) {
        load_object_collision_model();
    }

    if (limit > 0) {
        limit -=1;
        if (gMarioState->vel[1] > 30.0f) {
        gMarioState->vel[1] = 30.0f;
    }
    }

    if (gMarioObject->platform == o) {
        set_mario_action(gMarioStates, ACT_DOUBLE_JUMP, 0);
        gMarioState->faceAngle[1] = o->oFaceAngleYaw;
        gMarioState->vel[1] = 100.0f;
        gMarioState->forwardVel = 100.0f;
        limit = 5;
    }





}
