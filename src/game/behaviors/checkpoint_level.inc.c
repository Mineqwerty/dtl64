#include "s2dex/init.h"
#include "s2dex/s2d_draw.h"
#include "s2dex/s2d_print.h"
#include "gfx_dimensions.h"
#include "text_data.h"
int pos = 0;
int curLine = 0;
extern char *textString[];
extern char *textName[];
void bhv_checkpoint_level_init(void) {
    

}

void bhv_checkpoint_level_loop(void) {
 if (gMarioState->cutsceneActive > 0) {
         s2d_init();
if (gMarioState->cutsceneActive == 66) {
        play_secondary_music(SEQ_STREAMED_OOH_WILFRE, 0, 255, 100);
}
        set_mario_action(gMarioStates, ACT_WAITING_FOR_DIALOG, 0);
    gMarioState->pos[1] = gMarioState->floorHeight;
	uObjMtx *buffer;
	// substitute with a different alloc function as neccesary
	buffer = alloc_display_list(0x200 * sizeof(uObjMtx));
    draw_text_box(80, 150, buffer, 0);
	s2d_type_print(80, 150, textString[gMarioState->cutsceneActive], buffer, &pos);
    int len = s2d_strlen(textString[gMarioState->cutsceneActive]);
    print_text(30, 110, textName[gMarioState->cutsceneActive]);
    if (pos < len-13) {
    pos++;
    play_sound(SOUND_OBJ_UKIKI_CHATTER_IDLE, gDefaultSoundArgs);
    }
    if (pos >= len-13 && gPlayer1Controller->buttonPressed & A_BUTTON) {
        pos = 0;
        curLine += 1;
        gMarioState->cutsceneActive += 1;
        if (curLine+1 > gMarioState->dialogueLines) {
            gMarioState->cutsceneActive = 0;
            curLine = 0;
            gMarioState->action = ACT_IDLE;
        }
    }
	// reloads the original microcode; only needed once after all prints
	s2d_stop();
        
        
 }
}