#include "vars.h"
#include "game/segment2.h"
#include "game/ingame_menu.h"

f32 sCursorPos[] = {0, 0};
f32 sCursorAccel[] = {0, 0};
extern int maxDistX = 212;
extern int maxDistY = 212;
extern s16 cellX, cellZ;
extern int drawColor[] = {0, 0, 0, 1};
int drawColorNumber = 0;
int eraseAlpha = 255;
extern int brushSize = 1;
extern int curBParam;
extern int cursorspawn;
extern int cursorDelete;

void bhv_coffin_spawner_loop(void) {
   
}


void coffin_act_idle(void) {
   
}

/**
 * Main behavior for each coffin. Unloads the coffin if the spawner enters
 * that action.
 */
void bhv_coffin_loop(void) {

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
if (gPlayer1Controller->buttonPressed & U_JPAD) {
    brushSize += 1;
    if (brushSize > 3) {
        brushSize = 1;
    }
}
if (gPlayer1Controller->buttonPressed & D_JPAD) {
    eraseAlpha += 255;
    if (eraseAlpha > 255) {
        eraseAlpha = 0;
    }
}

if (cursorDelete == 1) {
    cursorDelete == 0;
    cursorspawn = 0;
    sCursorPos[0] = 0.0f;
     sCursorPos[1] = 0.0f;
     mark_obj_for_deletion(o);
     return;

}

if (gPlayer1Controller->buttonPressed & B_BUTTON) {
    if (gCurrLevelNum == LEVEL_BOB) {
    curBParam+=1;
    if (curBParam == 6) {
        initiate_warp(LEVEL_WF, 1, 0x0A, 0);
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
    print_text(230, 50, "Light Blue");
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
    print_text(230, 50, "Light Grey");
    break;
    //grey
    case 13: drawColor[0] = 80; drawColor[1] = 80; drawColor[2] = 80; drawColor[3] = eraseAlpha;
    print_text(230, 50, "Grey");
    break;

}

create_dl_translation_matrix(MENU_MTX_PUSH, 222.0f, 50.0f, 0);
gDPSetEnvColor(gDisplayListHead++, drawColor[0], drawColor[1], drawColor[2], eraseAlpha);
    gSPDisplayList(gDisplayListHead++, dl_draw_triangle);
    gSPPopMatrix(gDisplayListHead++, G_MTX_MODELVIEW);

   
    s16 rawStickX = gPlayer3Controller->rawStickX;
    s16 rawStickY = gPlayer3Controller->rawStickY;
    
warp_camera(0, 0, 300);
    // Handle deadzone
    if (rawStickY > -2 && rawStickY < 2) {
        rawStickY = 0;
    }
    if (rawStickX > -2 && rawStickX < 2) {
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
}
    print_text_fmt_int(100, 50, "Brush %d", brushSize);
    if (eraseAlpha == 255) {
        print_text(100, 70, "Draw");
    }
    else if (eraseAlpha == 0) {
        print_text(100, 70, "Erase");
    }

    // Move cursor
    sCursorAccel[0] = rawStickX / 12;
    sCursorAccel[1] = rawStickY / 12;
    sCursorPos[0] += rawStickX / 12;
    sCursorPos[1] += rawStickY / 12;

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
    


    // Stop cursor from going offscreen
    




}
