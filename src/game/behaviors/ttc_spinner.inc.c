
/**
 * Behavior for TTC spinner.
 */

/**
 * Spinner speeds on each setting.
 */
 int boTimer = 0;

/**
 * Update function for bhvTTCSpinner.
 */
void bhv_ttc_spinner_update(void) {
   
        boTimer += 1;
        if (boTimer == 150) {
            boTimer = 0;
            
             struct Object *wave;
    
        wave = spawn_object(o, MODEL_LASER_WAVE, bhvBowserShockWave);
        wave->oPosY = o->oFloorHeight + 1100.0f;
    
        }



}
