#include "vars.h"
#include "game/segment2.h"
#include "game/ingame_menu.h"
#include "src/buffers/framebuffers.h"
f32 sCursorPos[] = {0, 0};
f32 sCursorAccel[] = {0, 0};
extern int maxDistX = 212;
extern int maxDistY = 212;
extern s16 cellX, cellZ;
extern int drawColor[] = {0, 0, 0, 255};
int drawColorNumber = 0;
int eraseAlpha = 255;
extern int brushSize = 1;
extern int curBParam;
extern int cursorspawn;
extern int cursorDelete;
int colorMode = 0;
int modifyColor = 0;


void bhv_coffin_spawner_loop(void) {
   
}


void coffin_act_idle(void) {
   
}

/**
 * Main behavior for each coffin. Unloads the coffin if the spawner enters
 * that action.
 */
void bhv_coffin_loop(void) {
    if (colorMode==0) {
select_color_simple();
print_text(230, 110, "SIMPLE");
    }
    else if (colorMode == 1) {
select_color_advanced();
print_text(230, 110, "RGB");
    }
    else if (colorMode == 2) {
color_picker();
print_text(100, 210, "SELECT COLOR");

    }
if (gPlayer1Controller->buttonPressed & L_TRIG) {
    if (colorMode == 0){
        colorMode = 1;
    }
    else if (colorMode == 1){
        colorMode = 2;
    }
    else {
        colorMode = 0;
    }
}
if (gPlayer1Controller->buttonPressed & U_JPAD) {
    brushSize += 1;
    if (brushSize > 3) {
        brushSize = 1;
    }
}
if (gPlayer1Controller->buttonPressed & B_BUTTON) {
    eraseAlpha += 255;
    if (eraseAlpha > 255) {
        eraseAlpha = 0;
    }
}

if (cursorDelete == 1) {
    cursorDelete = 0;
    cursorspawn = 0;
    sCursorPos[0] = 0.0f;
     sCursorPos[1] = 0.0f;
     gMarioState->triPos = 0.0f;
     mark_obj_for_deletion(o);
     return;

}

if (gPlayer1Controller->buttonPressed & R_TRIG) {
    if (gCurrLevelNum == LEVEL_BOB) {
    curBParam+=1;
    if (curBParam == 6) {
        curBParam = 0;
        
    }
    cursorspawn=0;
    sCursorPos[0] = 0.0f;
     sCursorPos[1] = 0.0f;
     mark_obj_for_deletion(o);
     return;
     }
}


switch (curBParam) {
    case 0: maxDistX = 212; maxDistY = 212;
    break;
    case 1: maxDistX = 212; maxDistY = 318;
    break;
    case 2: maxDistX = 106; maxDistY = 318;
    break;
    case 3: maxDistX = 106; maxDistY = 318;
    break;
    case 4: maxDistX = 106; maxDistY = 318;
    break;
    case 5: maxDistX = 106; maxDistY = 318;
    break;
    case 7: maxDistX = 212; maxDistY = 212;
    break;
    case 8: maxDistX = 212; maxDistY = 212;
    break;
    case 9: maxDistX = 212; maxDistY = 212;
    break;
    case 10: maxDistX = 212; maxDistY = 212;
    break;
    case 11: maxDistX = 212; maxDistY = 212;
    break;
    case 12: maxDistX = 212; maxDistY = 212;
    break;
}


   
    s16 rawStickX = gPlayer1Controller->rawStickX;
    s16 rawStickY = gPlayer1Controller->rawStickY;
    s16 mouseRawStickX = gPlayer2Controller->rawStickX;
    s16 mouseRawStickY = gPlayer2Controller->rawStickY;
    
    //camera
        gLakituState.goalPos[2] = gMarioState->pos[2] + 900.0f;
        gLakituState.goalPos[1] = gMarioState->pos[1] + maxDistY;
         gLakituState.goalPos[0] = gMarioState->pos[0];
         
         gLakituState.goalFocus[0] = gMarioState->pos[0];
         gLakituState.goalFocus[1] = gMarioState->pos[1] + maxDistY;
         gLakituState.goalFocus[2] = gMarioState->pos[2]; 


    // Handle deadzone
    if (rawStickY+mouseRawStickY > -2 && rawStickY+mouseRawStickY < 2) {
        rawStickY = 0;
    }
    if (rawStickX+mouseRawStickX > -2 && rawStickX+mouseRawStickX < 2) {
        rawStickX = 0;
    }
    
switch (curBParam) {
    case 0:
    cellX = (16*((int)sCursorPos[0] + maxDistX-1) / (maxDistX)) & 0x1F;
    cellZ = (16*((int)sCursorPos[1] + maxDistY-1) / (maxDistY)) & 0x1F;
    break;
    case 1:
    cellX = (16*((int)sCursorPos[0] + maxDistX-1) / (maxDistX)) & 0x1F;
    cellZ = (24*((int)sCursorPos[1] + maxDistY-1) / (maxDistY)) & 0x3F;
    break;
    case 2:
    cellX = (8*((int)sCursorPos[0] + maxDistX-1) / (maxDistX)) & 0x1F;
    cellZ = (24*((int)sCursorPos[1] + maxDistY-1) / (maxDistY)) & 0x3F;
    break;
    case 3:
    cellX = (8*((int)sCursorPos[0] + maxDistX-1) / (maxDistX)) & 0x1F;
    cellZ = (24*((int)sCursorPos[1] + maxDistY-1) / (maxDistY)) & 0x3F;
    break;
    case 4:
    cellX = (8*((int)sCursorPos[0] + maxDistX-1) / (maxDistX)) & 0x1F;
    cellZ = (24*((int)sCursorPos[1] + maxDistY-1) / (maxDistY)) & 0x3F;
    break;
    case 5:
    cellX = (8*((int)sCursorPos[0] + maxDistX-1) / (maxDistX)) & 0x1F;
    cellZ = (24*((int)sCursorPos[1] + maxDistY-1) / (maxDistY)) & 0x3F;
    break;
    case 7:
    cellX = (16*((int)sCursorPos[0] + maxDistX-1) / (maxDistX)) & 0x1F;
    cellZ = (16*((int)sCursorPos[1] + maxDistY-1) / (maxDistY)) & 0x1F;
    break;
    case 8:
    cellX = (16*((int)sCursorPos[0] + maxDistX-1) / (maxDistX)) & 0x1F;
    cellZ = (16*((int)sCursorPos[1] + maxDistY-1) / (maxDistY)) & 0x1F;
    break;
    case 9:
    cellX = (16*((int)sCursorPos[0] + maxDistX-1) / (maxDistX)) & 0x1F;
    cellZ = (16*((int)sCursorPos[1] + maxDistY-1) / (maxDistY)) & 0x1F;
    break;
    case 10:
    cellX = (16*((int)sCursorPos[0] + maxDistX-1) / (maxDistX)) & 0x1F;
    cellZ = (16*((int)sCursorPos[1] + maxDistY-1) / (maxDistY)) & 0x1F;
    break;
    case 11:
    cellX = (16*((int)sCursorPos[0] + maxDistX-1) / (maxDistX)) & 0x1F;
    cellZ = (16*((int)sCursorPos[1] + maxDistY-1) / (maxDistY)) & 0x1F;
    break;
    case 12:
    cellX = (16*((int)sCursorPos[0] + maxDistX-1) / (maxDistX)) & 0x1F;
    cellZ = (16*((int)sCursorPos[1] + maxDistY-1) / (maxDistY)) & 0x1F;
    break;
}
if (colorMode < 2){
    print_text_fmt_int(50, 50, "Brush %d", brushSize);
    if (eraseAlpha == 255) {
        print_text(50, 70, "Draw");
    }
    else if (eraseAlpha == 0) {
        print_text(50, 70, "Erase");
    }

    // Move cursor
    sCursorAccel[0] = (rawStickX + mouseRawStickX)/ 12;
    sCursorAccel[1] = (rawStickY + mouseRawStickY) / 12;
    sCursorPos[0] += (rawStickX + mouseRawStickX) / 12;
    sCursorPos[1] += (rawStickY + mouseRawStickY) / 12;

if (sCursorPos[0] > maxDistX) {
        sCursorPos[0] = maxDistX;
        sCursorAccel[0] = 0.0f;
    }
    if (sCursorPos[0] < -maxDistX) {
        sCursorPos[0] = -maxDistX;
        sCursorAccel[0] = 0.0f;
    }

    if (sCursorPos[1] > maxDistY) {
        sCursorPos[1] = maxDistY;
        sCursorAccel[1] = 0.0f;
    }
    if (sCursorPos[1] < -maxDistY) {
        sCursorPos[1] = -maxDistY;
        sCursorAccel[1] = 0.0f;
    }


    o->oPosX += sCursorAccel[0];
    o->oPosY += sCursorAccel[1];
}
    gMarioState->triColor[0] = drawColor[0];
    gMarioState->triColor[1] = drawColor[1];
    gMarioState->triColor[2] = drawColor[2];

}

void select_color_simple() {

if (gPlayer1Controller->buttonPressed & R_JPAD) {
    drawColorNumber += 1;
    if (drawColorNumber > 13) {
        drawColorNumber = 0;
    }
}
if (gPlayer1Controller->buttonPressed & L_JPAD) {
    drawColorNumber -= 1;
    if (drawColorNumber < 0) {
        drawColorNumber = 13;
    }
}

switch (drawColorNumber) {
    //black
    case 0: drawColor[0] = 0; drawColor[1] = 0; drawColor[2] = 0; drawColor[3] = eraseAlpha;
    print_text(230, 50, "Black");
    break;
    //white
    case 1: drawColor[0] = 255; drawColor[1] = 255; drawColor[2] = 255; drawColor[3] = eraseAlpha;
    print_text(230, 50, "White");
    break;
    //red
    case 2: drawColor[0] = 255; drawColor[1] = 0; drawColor[2] = 0; drawColor[3] = eraseAlpha;
    print_text(230, 50, "Red");
    break;
    //orange
    case 3: drawColor[0] = 255; drawColor[1] = 128; drawColor[2] = 0; drawColor[3] = eraseAlpha;
    print_text(230, 50, "Orange");
    break;
    //yellow
    case 4: drawColor[0] = 255; drawColor[1] = 255; drawColor[2] = 0; drawColor[3] = eraseAlpha;
    print_text(230, 50, "Yellow");
    break;
    //green
    case 5: drawColor[0] = 0; drawColor[1] = 255; drawColor[2] = 0; drawColor[3] = eraseAlpha;
    print_text(230, 50, "Green");
    break;
    //cyan
    case 6: drawColor[0] = 0; drawColor[1] = 255; drawColor[2] = 170; drawColor[3] = eraseAlpha;
    print_text(230, 50, "Cyan");
    break;
    //light blue
    case 7: drawColor[0] = 0; drawColor[1] = 255; drawColor[2] = 255; drawColor[3] = eraseAlpha;
    print_text(230, 50, "L Blue");
    break;
    //blue
    case 8: drawColor[0] = 0; drawColor[1] = 0; drawColor[2] = 255; drawColor[3] = eraseAlpha;
    print_text(230, 50, "Blue");
    break;
    //purple
    case 9: drawColor[0] = 128; drawColor[1] = 0; drawColor[2] = 255; drawColor[3] = eraseAlpha;
    print_text(230, 50, "Purple");
    break;
    //pink
    case 10: drawColor[0] = 255; drawColor[1] = 0; drawColor[2] = 255; drawColor[3] = eraseAlpha;
    print_text(230, 50, "Pink");
    break;
    //brown
    case 11: drawColor[0] = 66; drawColor[1] = 38; drawColor[2] = 18; drawColor[3] = eraseAlpha;
    print_text(230, 50, "Brown");
    break;
    //light grey
    case 12: drawColor[0] = 170; drawColor[1] = 170; drawColor[2] = 170; drawColor[3] = eraseAlpha;
    print_text(230, 50, "L Grey");
    break;
    //grey
    case 13: drawColor[0] = 80; drawColor[1] = 80; drawColor[2] = 80; drawColor[3] = eraseAlpha;
    print_text(230, 50, "Grey");
    break;

}

    gMarioState->triPos = 50.0f;
}

void select_color_advanced() {
    print_text_fmt_int(230, 80, "R %d", drawColor[0]);
    print_text_fmt_int(230, 50, "G %d", drawColor[1]);
    print_text_fmt_int(230, 30, "B %d", drawColor[2]);

    switch (modifyColor) {
        case 0: gMarioState->triPos = 80.0f;
    break;
    case 1: gMarioState->triPos = 50.0f;
    break;
    case 2: gMarioState->triPos = 30.0f;
    break;
    }

if (gPlayer1Controller->buttonDown & R_JPAD) {
    drawColor[modifyColor] += 2;
    if (drawColor[modifyColor] > 255) {
        drawColor[modifyColor] = 255;
    }
}
if (gPlayer1Controller->buttonDown & L_JPAD) {
    drawColor[modifyColor] -= 2;
    if (drawColor[modifyColor] < 0) {
        drawColor[modifyColor] = 0;
    }
}
if (gPlayer1Controller->buttonPressed & D_JPAD) {
    modifyColor+=1;
    if (modifyColor > 2) {
        modifyColor = 0;
    }
}

}

void color_picker() {
s16 rawStickX = gPlayer1Controller->rawStickX;
    s16 rawStickY = gPlayer1Controller->rawStickY;
    s16 mouseRawStickX = gPlayer2Controller->rawStickX;
    s16 mouseRawStickY = gPlayer2Controller->rawStickY;
    
gMarioState->triPos = -20.0f;
    // Handle deadzone
    if (rawStickY+mouseRawStickY > -2 && rawStickY+mouseRawStickY < 2) {
        rawStickY = 0;
    }
    if (rawStickX+mouseRawStickX > -2 && rawStickX+mouseRawStickX < 2) {
        rawStickX = 0;
    }

gMarioState->colorPickerPos[0] += (rawStickX + mouseRawStickX) / 12;
    gMarioState->colorPickerPos[1] += (rawStickY + mouseRawStickY) / 12;

if (gMarioState->colorPickerPos[0] > SCREEN_WIDTH) {
        gMarioState->colorPickerPos[0] = SCREEN_WIDTH;
    }
    if (gMarioState->colorPickerPos[0] < 0) {
        gMarioState->colorPickerPos[0] = 0;
    }

    if (gMarioState->colorPickerPos[1] > 240) {
        gMarioState->colorPickerPos[1] = 240;
    }
    if (gMarioState->colorPickerPos[1] < 0) {
        gMarioState->colorPickerPos[1] = 0;
    }






int screenX = gMarioState->colorPickerPos[0];
int screenY = gMarioState->colorPickerPos[1];
extern u16 frameBufferIndex;




if (gPlayer1Controller->buttonPressed & A_BUTTON || gPlayer2Controller->buttonPressed & A_BUTTON) {
    drawColor[0] = (gFrameBuffers[(frameBufferIndex + 1) % 3][screenX + SCREEN_WIDTH * (240-screenY)] & 0xf800) >>8;
    drawColor[1] = (gFrameBuffers[(frameBufferIndex + 1) % 3][screenX + SCREEN_WIDTH * (240-screenY)] & 0x7c0) >>3;
    drawColor[2] = (gFrameBuffers[(frameBufferIndex + 1) % 3][screenX + SCREEN_WIDTH * (240-screenY)] & 0x3e) <<2;
    
colorMode = 1;
}

}