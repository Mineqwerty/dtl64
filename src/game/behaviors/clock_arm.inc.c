/**
 * Main loop of the hour and minute hands of the Tick Tock Clock painting.
 */


void bhv_rotating_clock_arm_loop(void) {
    
    extern const u16 drawcloud_sprite_rgba16[];
    extern const u16 cloud_platform_sprite_rgba16[];
    u16 *SwitchTexture = segmented_to_virtual(drawcloud_sprite_rgba16);
    u16 *CloudTexture = segmented_to_virtual(cloud_platform_sprite_rgba16);


    bcopy(SwitchTexture, CloudTexture, 2*32*32);
    if (gMarioState->drawState > 0) {
        load_object_collision_model();
    }
}
