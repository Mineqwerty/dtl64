// clam.inc.c
#include "vars.h"
struct Object *cursor;
extern const u16 drawtime_sprite_rgba16[];
extern const u16 drawtime64_sprite64_rgba16[];
extern const u16 drawrightarm_spritelimb_rgba16[];
extern const u16 drawleftarm_spritelimb_rgba16[];
extern const u16 drawrightleg_spritelimb_rgba16[];
extern const u16 drawleftleg_spritelimb_rgba16[];
extern const u16 drawcloud_sprite_rgba16[];
extern const u16 draw_moving_platform_sprite_rgba16[];
extern const u16 draw_spring_sprite_rgba16[];
extern const u16 draw_hoverboard_sprite_rgba16[];

extern int freeze = 0;
extern int cursorDelete = 0;
int directions = 15;

extern int cursorspawn = 0;
extern int drawColor[];
extern int maxDistX;
extern int maxDistY;
extern int curBParam = 0;
int rowNum = 32;
int vertLimit = 32;

void clam_act_0(void) {
   
}

void clam_act_1(void) {
    
}

void bhv_clam_loop(void) {
if (gCurrLevelNum == LEVEL_WF || gCurrLevelNum == LEVEL_DDD) {
    if (o->oDistanceToMario < 160.0f) {
        curBParam = o->oBehParams2ndByte;
        if (gPlayer1Controller->buttonPressed & START_BUTTON) {
            create_dialog_box_with_response(DIALOG_019);
        }


        if (gDialogResponse == 1) {
            freeze = 2;
            cursorspawn = 0;
            curBParam = 0;
            func_80321080(500);
            cursorDelete = 1;
            mark_obj_for_deletion(o);
            switch (o->oBehParams2ndByte) {
                case 7: gMarioState->drawState = 1;
                break;
                case 8: gMarioState->drawState = 2;
                break;
                case 9: gMarioState->drawState = 3;
                break;
                case 10: gMarioState->drawState = 4; spawn_object(o, MODEL_NONE, bhvOpenableGrill);
                break;
            }
            return;
        }
    }
}



    if (o->oBehParams2ndByte == curBParam) {
    if (cursorspawn == 0) {
        switch (curBParam) {
    case 0: maxDistX = 212; maxDistY = 212; rowNum = 32; vertLimit = 31;
    break;
    case 1: maxDistX = 212; maxDistY = 318; rowNum = 32; vertLimit = 47;
    break;
    case 2: maxDistX = 106; maxDistY = 318; rowNum = 16; vertLimit = 47;
    break;
    case 3: maxDistX = 106; maxDistY = 318; rowNum = 16; vertLimit = 47;
    break;
    case 4: maxDistX = 106; maxDistY = 318; rowNum = 16; vertLimit = 47;
    break;
    case 5: maxDistX = 106; maxDistY = 318; rowNum = 16; vertLimit = 47;
    break;
    case 7: maxDistX = 212; maxDistY = 212; rowNum = 32; vertLimit = 31;
    break;
    case 8: maxDistX = 212; maxDistY = 212; rowNum = 32; vertLimit = 31;
    break;
    case 9: maxDistX = 212; maxDistY = 212; rowNum = 32; vertLimit = 31;
    break;
    case 10: maxDistX = 212; maxDistY = 212; rowNum = 32; vertLimit = 31;
    break;
}
   cursor = spawn_object_relative(0, 0, maxDistY, -60, o, MODEL_DRAWCURSOR, bhvCoffin);
  
       


    freeze = 1;
    gMarioState->pos[0] = o->oPosX;
    gMarioState->pos[1] = o->oPosY;
    gMarioState->pos[2] = o->oPosZ;
   gCamera->mode = CAMERA_MODE_BEHIND_MARIO;

   play_secondary_music(SEQ_STREAMED_STREAMED_DRAWING_THEME, 0, 255, 100);
   cursorspawn = 1;
    }

if (gCurrLevelNum == LEVEL_BOB) {

if (directions > 0) {
           directions -= 1;
           if (directions == 0) {
               create_dialog_box(DIALOG_033);
           }
   }
if (directions == 0) {
               if (gDialogResponse == 1) {
                   gDialogResponse = 0;
                   directions = -1;
               }
           }


if (gPlayer1Controller->buttonPressed & START_BUTTON) {
            create_dialog_box_with_response(DIALOG_019);
        }


        if (gDialogResponse == 1) {
            freeze = 2;
            cursorspawn=0;
    sCursorPos[0] = 0.0f;
     sCursorPos[1] = 0.0f;
     gMarioState->cutsceneStep = 3;
initiate_warp(LEVEL_TTM, 1, 0x0A, 0);
gDialogResponse = 0;
return;
        }
        }


    extern s16 cellX, cellZ;
u16 *SwitchTexture = segmented_to_virtual(drawtime_sprite_rgba16);
switch (curBParam) {
    case 0: SwitchTexture = segmented_to_virtual(drawtime_sprite_rgba16);
    break;
    case 1: SwitchTexture = segmented_to_virtual(drawtime64_sprite64_rgba16);
    break;
    case 2: SwitchTexture = segmented_to_virtual(drawrightarm_spritelimb_rgba16);
    break;
    case 3: SwitchTexture = segmented_to_virtual(drawleftarm_spritelimb_rgba16);
    break;
    case 4: SwitchTexture = segmented_to_virtual(drawrightleg_spritelimb_rgba16);
    break;
    case 5: SwitchTexture = segmented_to_virtual(drawleftleg_spritelimb_rgba16);
    break;
    case 7: SwitchTexture = segmented_to_virtual(drawcloud_sprite_rgba16);
    break;
    case 8: SwitchTexture = segmented_to_virtual(draw_moving_platform_sprite_rgba16);
    break;
    case 9: SwitchTexture = segmented_to_virtual(draw_spring_sprite_rgba16);
    break;
    case 10: SwitchTexture = segmented_to_virtual(draw_hoverboard_sprite_rgba16);
    break;
    
}
    
    if (gPlayer1Controller->buttonDown & A_BUTTON || gPlayer2Controller->buttonDown & A_BUTTON) {
        //cancel for open textbox
        if (gCurrLevelNum == LEVEL_BOB) {
if (directions > -1) {
return;
}}
//drawing
       if (brushSize == 1) {
        SwitchTexture[ -cellX + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
       }
       if (brushSize == 2) {
           
           static int cellLimit = 1;
           if (cellX == rowNum-1) {
               cellLimit=0;
           }
           else if (cellX == 0) {
               cellLimit=0;
           }
           else {
               cellLimit=1;
           }

    
       
        SwitchTexture[ -cellX+cellLimit + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX-cellLimit + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        if (cellZ + 2 <= vertLimit) {
            //up one
        SwitchTexture[ -cellX+(rowNum-cellLimit) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX+(rowNum) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX+(rowNum+cellLimit) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        }
        if (cellZ - 2 >= 0) {
            //down one
        SwitchTexture[ -cellX-(rowNum-cellLimit) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX-(rowNum) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX-(rowNum+cellLimit) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        }
           
       }
       if (brushSize == 3) {
           static int RcellLimit = 2;
           static int LcellLimit = 2;
           if (cellX == rowNum-2) {
               RcellLimit=1;
           }
           else if (cellX == rowNum-1) {
               RcellLimit=0;
           }
           else {
               RcellLimit=2;
           }
            if (cellX == 1) {
                LcellLimit=1;
            }
           else if (cellX == 0) {
               LcellLimit=0;
           }
           else {
               LcellLimit=2;
           }

           
        SwitchTexture[-cellX+(RcellLimit/2) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX-(LcellLimit/2) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX+(RcellLimit) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX-(LcellLimit) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        //up one
        if (cellZ + 2 <= vertLimit) {
        SwitchTexture[ -cellX+(rowNum-(LcellLimit)) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX+(rowNum-(LcellLimit/2)) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX+(rowNum) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX+(rowNum+(RcellLimit/2)) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX+(rowNum+(RcellLimit)) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        }
        //down one
        if (cellZ - 2 >= 0) {
        SwitchTexture[ -cellX-(rowNum-(LcellLimit/2)) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX-(rowNum-(LcellLimit)) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX-(rowNum) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX-(rowNum+(RcellLimit)) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX-(rowNum+(RcellLimit/2)) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        }
        //up two
        if (cellZ + 3 <= vertLimit) {
        SwitchTexture[ -cellX+(2*rowNum-(LcellLimit/2)) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX+(2*rowNum-(LcellLimit)) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX+(2*rowNum) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX+(2*rowNum+(RcellLimit)) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX+(2*rowNum+(RcellLimit/2)) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        }
        //down two
        if (cellZ - 2 >= 0) {
        SwitchTexture[ -cellX-(2*rowNum-(LcellLimit/2)) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX-(2*rowNum-(LcellLimit)) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX-(2*rowNum) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX-(2*rowNum+(RcellLimit)) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        SwitchTexture[ -cellX-(2*rowNum+(RcellLimit/2)) + rowNum *(cellZ+1)] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);
        }
       }
    }
    if (gPlayer1Controller->buttonPressed & Z_TRIG) {
        if (gCurrLevelNum == LEVEL_BOB) {
            //cancel for open textbox
            if (directions > -1) {
                return;
                }}
        flood_fill(cellX, cellZ, drawColor[0,1,2,3], SwitchTexture[ -cellX + rowNum *cellZ], SwitchTexture);
  
    }
    
    }

   
}



void flood_fill(s16 pos_x, s16 pos_z, int target_color[], u32 color, u16 *SwitchTexture) {
    if (SwitchTexture[ -pos_x + rowNum *pos_z] == GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3])) {
        return;
    }

if(SwitchTexture[ -pos_x + rowNum *pos_z] == color) {
    SwitchTexture[ -pos_x + rowNum *pos_z] = GPACK_RGBA5551(drawColor[0], drawColor[1], drawColor[2], drawColor[3]);

    if (pos_x > cellX+5.0f) {
        return;
    }
    if (pos_x < cellX-5.0f) {
        return;
    }
    if (pos_z > cellZ+5.0f) {
        return;
    }
    if (pos_z < cellZ-5.0f) {
        return;
    }

    
    if (pos_x > rowNum-1) {
        return;
    }
    if (pos_x < 0.0f) {
        return;
    }
    if (pos_z > vertLimit) {
        return;
    }
    if (pos_z < 0.0f) {
        return;
    }
    flood_fill(pos_x + 1.0f, pos_z, target_color, color, SwitchTexture);
    flood_fill(pos_x - 1.0f, pos_z, target_color, color, SwitchTexture);
  flood_fill(pos_x, pos_z + 1.0f, target_color, color, SwitchTexture);
    flood_fill(pos_x, pos_z - 1.0f, target_color, color, SwitchTexture);
    
}
   return;
}
