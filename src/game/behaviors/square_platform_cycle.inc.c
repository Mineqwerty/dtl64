// square_platform_cycle.c.inc

//ALL CUTSCENE RAPOSA MOVEMENTS AND ANIMATIONS ARE HANDLED HERE
/*
CUTSCENES:
0: Game start
1: After drawing the hero
2: After level 1
3: Rescued Heather

*/
#include "actors/common0.h"
#include "object_fields.h"
#include "cutscene_vars.h"
int cutscene_Step;

void cutscene_raposa_init(void) {
    
}

void bhv_squarish_path_moving_loop(void) {
if (gMarioState->gameInitialized == 1) {
    
   if (gMarioState->cutscenePlayerID[0] == 0) {
       
       cutscene_game_start();
       return;
   }
    if (gMarioState->cutscenePlayerID[0] == 1 && gMarioState->cutscenePlayerID[1] == 0) {
        cutscene_hero_drawn();
        return;
    }
    
    //level 1, with or without heather
    if (gMarioState->cutscenePlayerID[2] == 0 && gMarioState->levelsCompleted[0] == 1) {
        cutscene_post_level_1();
    }
    //heather rescue after completing level 1
    if (gMarioState->cutscenePlayerID[2] == 1 && gMarioState->cutscenePlayerID[3] == 0 && gMarioState->raposaRescued[0] == 1) {
        cutscene_heather_rescued();
    }
    if (gMarioState->cutscenePlayerID[4] == 0 && gMarioState->levelsCompleted[1] == 1) {
        cutscene_post_level_2();
    }
    //heather rescue after completing level 1
    if (gMarioState->cutscenePlayerID[4] == 1 && gMarioState->cutscenePlayerID[5] == 0 && gMarioState->raposaRescued[1] == 1) {
        cutscene_heather_rescued();
    }
}
}

struct Object *jowee_obj;
struct Object *mari_obj;
struct Object *heather_obj;

void cutscene_game_start() {
    
    
Vec3f joweeGoalPos;

    if (cutscene_Step == 0) {
    jowee_obj = spawn_object_relative(5, 364.0f, 100.0f, 2063.0f, o, MODEL_JOWEE, bhvSpindel);
    mari_obj = spawn_object_relative(6, 463.0f, 100.0f, 759.0f, o, MODEL_MARI, bhvSpindel);
   
    jowee_obj->oFaceAngleYaw = 0x7000;
    jowee_obj->oMoveAngleYaw = 0x7000;
    mari_obj->oFaceAngleYaw = 0x1600;
    mari_obj->oMoveAngleYaw = 0x1600;
    joweeGoalPos[0] = 364;
    joweeGoalPos[1] = 100;
    joweeGoalPos[2] = 1363;
    play_secondary_music(SEQ_STREAMED_OUTSIDE_HOUSE, 0, 255, 100);
    

    gMarioState->cutsceneActive = 9;
    gMarioState->dialogueLines = 10;

    cutscene_Step = 1;
    
    }
    gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];
    set_mario_action(gMarioStates, ACT_WAITING_FOR_DIALOG, 0);

    gCamera->cutscene = 1;
    gLakituState.goalPos[0] = 1600;
    gLakituState.goalPos[1] = 200;
    gLakituState.goalPos[2] = 950;
    gLakituState.goalFocus[1] = gMarioState->pos[1] - 100.0f;
    
    if (jowee_obj->oPosZ > joweeGoalPos[2]) {
        joweeWalking = 1;
        jowee_obj->oPosZ -= 10.0f;
    }
    else {
        joweeWalking = 0;
    }

    if (gMarioState->cutsceneActive == 0) {
        gMarioState->cutscenePlayerID[0] = 1;
        initiate_warp(LEVEL_BOB, 1, 0x0A, 0);
        cutscene_Step = 0;
        save_cutscene_id();
    }
    

    }


void cutscene_hero_drawn() {
    if (cutscene_Step == 0) {
jowee_obj = spawn_object_relative(5, 364.0f, 100.0f, 1363.0f, o, MODEL_JOWEE, bhvSpindel);
    mari_obj = spawn_object_relative(6, 463.0f, 100.0f, 759.0f, o, MODEL_MARI, bhvSpindel);
   
    jowee_obj->oFaceAngleYaw = -0x7000;
    jowee_obj->oMoveAngleYaw = -0x7000;
    mari_obj->oFaceAngleYaw = -0x1600;
    mari_obj->oMoveAngleYaw = -0x1600;


    gMarioState->cutsceneActive = 19;
    gMarioState->dialogueLines = 10;

    cutscene_Step = 1;
    }

    gCamera->cutscene = 1;
    gLakituState.goalPos[0] = -800;
    gLakituState.goalPos[1] = 300;
    gLakituState.goalPos[2] = 950;
    gLakituState.goalFocus[1] = gMarioState->pos[1] - 100.0f;
    gMarioState->faceAngle[1] = 16384.0f;

    if (gMarioState->cutsceneActive == 0) {
    gMarioState->cutscenePlayerID[1] = 1;
    cutscene_Step = 0;
    gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_MARIO];
    set_mario_action(gMarioStates, ACT_IDLE, 0);
    gCamera->cutscene = 0;
    save_cutscene_id();
    }
}





void cutscene_post_level_1() {
Vec3f joweeGoalPos;
Vec3f mariGoalPos;



    if (gMarioState->cutscenePlayerID[3] == 0 && gMarioState->raposaRescued[0] == 1){
        cutscene_heather_rescued();
        print_text_fmt_int(100, 200, "bruh %d", gMarioState->cutscenePlayerID[3]);
    }
    else {

        if (cutscene_Step == 0) {
            if (joweeMariSpawned == 0) {
jowee_obj = spawn_object_relative(5, 3396.0f, 100.0f, -3100.0f, o, MODEL_JOWEE, bhvSpindel);
    mari_obj = spawn_object_relative(6, 3396.0f, 100.0f, -3500.0f, o, MODEL_MARI, bhvSpindel);
            }
   
    jowee_obj->oFaceAngleYaw = 0x2500;
    jowee_obj->oMoveAngleYaw = 0x2500;
    mari_obj->oFaceAngleYaw = 0x2500;
    mari_obj->oMoveAngleYaw = 0x2500;

    joweeGoalPos[0] = 4196.0f;
    mariGoalPos[0] = 4396.0f;

    gMarioState->pos[0] = 5000.0f;
    gMarioState->pos[1] = 100.0f;
    gMarioState->pos[2] = -3219.0f;

    gMarioState->cutsceneActive = 29;
    gMarioState->dialogueLines = 8;

    cutscene_Step = 1;
    }

gCamera->cutscene = 1;
    gLakituState.goalPos[0] = 4500;
    gLakituState.goalPos[1] = 300;
    gLakituState.goalPos[2] = -1800;
    gLakituState.goalFocus[0] = gMarioState->pos[0];
    gLakituState.goalFocus[2] = gMarioState->pos[2];
    gLakituState.goalFocus[1] = gMarioState->pos[1] - 100.0f;

    gMarioState->faceAngle[1] = -16384.0f;



if (jowee_obj->oPosX < joweeGoalPos[0]) {
        joweeWalking = 1;
        jowee_obj->oPosX += 10.0f;
    }
    else {
        joweeWalking = 0;
    }
    
if (mari_obj->oPosX < mariGoalPos[0]) {
        mariWalking = 1;
        mari_obj->oPosX += 10.0f;
    }
    else {
        mariWalking = 0;
    }



if (gMarioState->cutsceneActive == 0) {
    gMarioState->cutscenePlayerID[2] = 1;
    cutscene_Step = 0;
    gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_MARIO];
    set_mario_action(gMarioStates, ACT_IDLE, 0);
    gCamera->cutscene = 0;
    save_cutscene_id();
    }
}
}



void cutscene_heather_rescued() {
    Vec3f joweeGoalPos;
Vec3f mariGoalPos;
Vec3f heatherGoalPos;

        if (cutscene_Step == 0) {
            
jowee_obj = spawn_object_relative(5, 3396.0f, 100.0f, -3100.0f, o, MODEL_JOWEE, bhvSpindel);
    mari_obj = spawn_object_relative(6, 3396.0f, 100.0f, -3500.0f, o, MODEL_MARI, bhvSpindel);
    heather_obj = spawn_object_relative(0, 5000.0f, 100.0f, -3000.0f, o, MODEL_HEATHER, bhvSpindel);
            joweeMariSpawned = 1;
   
    jowee_obj->oFaceAngleYaw = 0x2500;
    jowee_obj->oMoveAngleYaw = 0x2500;
    mari_obj->oFaceAngleYaw = 0x2500;
    mari_obj->oMoveAngleYaw = 0x2500;
    heather_obj->oFaceAngleYaw = -0x2500;
    heather_obj->oMoveAngleYaw = -0x2500;

    joweeGoalPos[0] = 4196.0f;
    mariGoalPos[0] = 4396.0f;
    heatherGoalPos[0] = 3700.0f;

    gMarioState->pos[0] = 5000.0f;
    gMarioState->pos[1] = 100.0f;
    gMarioState->pos[2] = -3219.0f;

    gMarioState->cutsceneActive = 38;
    gMarioState->dialogueLines = 4;

    cutscene_Step = 1;
    }

gCamera->cutscene = 1;
    gLakituState.goalPos[0] = 4500;
    gLakituState.goalPos[1] = 300;
    gLakituState.goalPos[2] = -1800;
    gLakituState.goalFocus[0] = gMarioState->pos[0];
    gLakituState.goalFocus[2] = gMarioState->pos[2];
    gLakituState.goalFocus[1] = gMarioState->pos[1] - 100.0f;

    gMarioState->faceAngle[1] = -16384.0f;



if (jowee_obj->oPosX < joweeGoalPos[0]) {
        joweeWalking = 1;
        jowee_obj->oPosX += 10.0f;
    }
    else {
        joweeWalking = 0;
    }
    
if (mari_obj->oPosX < mariGoalPos[0]) {
        mariWalking = 1;
        mari_obj->oPosX += 10.0f;
    }
    else {
        mariWalking = 0;
    }


if (heatherWalking == 1) {
    if (heather_obj->oPosX > heatherGoalPos[0]) {
        
        heather_obj->oPosX -= 10.0f;
    }
    else {
        heatherWalking = 0;
        obj_mark_for_deletion(heather_obj);
    }
}

if (gMarioState->cutsceneActive == 41) {
    heatherWalking = 1;
}

if (gMarioState->cutsceneActive == 0 && heatherWalking == 0) {
    
    gMarioState->cutscenePlayerID[3] = 1;
    cutscene_Step = 0;
    gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_MARIO];
    set_mario_action(gMarioStates, ACT_IDLE, 0);
    gCamera->cutscene = 0;
    save_cutscene_id();
    }
}

void cutscene_post_level_2() {
Vec3f joweeGoalPos;




    if (gMarioState->cutscenePlayerID[5] == 0 && gMarioState->raposaRescued[1] == 1){
        cutscene_samuel_rescued();
        
    }
    else {

        if (cutscene_Step == 0) {
            if (joweeMariSpawned == 0) {
jowee_obj = spawn_object_relative(5, 3396.0f, 100.0f, -3100.0f, o, MODEL_JOWEE, bhvSpindel);
    
            }
   
    jowee_obj->oFaceAngleYaw = 0x2500;
    jowee_obj->oMoveAngleYaw = 0x2500;
    

    joweeGoalPos[0] = 4196.0f;
    

    gMarioState->pos[0] = 5000.0f;
    gMarioState->pos[1] = 100.0f;
    gMarioState->pos[2] = -3219.0f;

    gMarioState->cutsceneActive = 42;
    gMarioState->dialogueLines = 6;

    cutscene_Step = 1;
    }

gCamera->cutscene = 1;
    gLakituState.goalPos[0] = 4500;
    gLakituState.goalPos[1] = 300;
    gLakituState.goalPos[2] = -1800;
    gLakituState.goalFocus[0] = gMarioState->pos[0];
    gLakituState.goalFocus[2] = gMarioState->pos[2];
    gLakituState.goalFocus[1] = gMarioState->pos[1] - 100.0f;

    gMarioState->faceAngle[1] = -16384.0f;



if (jowee_obj->oPosX < joweeGoalPos[0]) {
        joweeWalking = 1;
        jowee_obj->oPosX += 10.0f;
    }
    else {
        joweeWalking = 0;
    }



if (gMarioState->cutsceneActive == 0) {
    gMarioState->cutscenePlayerID[4] = 1;
    cutscene_Step = 0;
    gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_MARIO];
    set_mario_action(gMarioStates, ACT_IDLE, 0);
    gCamera->cutscene = 0;
    save_cutscene_id();
    }
}
}

void cutscene_samuel_rescued() {
    Vec3f joweeGoalPos;
Vec3f heatherGoalPos;

        if (cutscene_Step == 0) {
            
jowee_obj = spawn_object_relative(5, 3396.0f, 100.0f, -3100.0f, o, MODEL_JOWEE, bhvSpindel);
    heather_obj = spawn_object_relative(1, 5000.0f, 100.0f, -3000.0f, o, MODEL_SAMUEL, bhvSpindel);
            joweeMariSpawned = 1;
   
    jowee_obj->oFaceAngleYaw = 0x2500;
    jowee_obj->oMoveAngleYaw = 0x2500;
    heather_obj->oFaceAngleYaw = -0x2500;
    heather_obj->oMoveAngleYaw = -0x2500;

    joweeGoalPos[0] = 4196.0f;
    heatherGoalPos[0] = 3700.0f;

    gMarioState->pos[0] = 5000.0f;
    gMarioState->pos[1] = 100.0f;
    gMarioState->pos[2] = -3219.0f;

    gMarioState->cutsceneActive = 48;
    gMarioState->dialogueLines = 4;

    cutscene_Step = 1;
    }

gCamera->cutscene = 1;
    gLakituState.goalPos[0] = 4500;
    gLakituState.goalPos[1] = 300;
    gLakituState.goalPos[2] = -1800;
    gLakituState.goalFocus[0] = gMarioState->pos[0];
    gLakituState.goalFocus[2] = gMarioState->pos[2];
    gLakituState.goalFocus[1] = gMarioState->pos[1] - 100.0f;

    gMarioState->faceAngle[1] = -16384.0f;



if (jowee_obj->oPosX < joweeGoalPos[0]) {
        joweeWalking = 1;
        jowee_obj->oPosX += 10.0f;
    }
    else {
        joweeWalking = 0;
    }


if (heatherWalking == 1) {
    if (heather_obj->oPosX > heatherGoalPos[0]) {
        
        heather_obj->oPosX -= 10.0f;
    }
    else {
        heatherWalking = 0;
        obj_mark_for_deletion(heather_obj);
    }
}

if (gMarioState->cutsceneActive == 51) {
    heatherWalking = 1;
}

if (gMarioState->cutsceneActive == 0 && heatherWalking == 0) {
    
    gMarioState->cutscenePlayerID[5] = 1;
    cutscene_Step = 0;
    gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_MARIO];
    set_mario_action(gMarioStates, ACT_IDLE, 0);
    gCamera->cutscene = 0;
    save_cutscene_id();
    }
}