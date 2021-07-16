#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/ddd/header.h"

const LevelScript level_ddd_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ddd_segment_7SegmentRomStart, _ddd_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _water_yay0SegmentRomStart, _water_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bits_skybox_yay0SegmentRomStart, _bits_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group4_yay0SegmentRomStart, _group4_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_5), 
	JUMP_LINK(script_func_global_14), 
	LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB_DOOR, ddd_geo_000478), 
	LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB, ddd_geo_0004A0), 
	LOAD_MODEL_FROM_GEO(MODEL_DDD_POLE, ddd_geo_000450), 

	AREA(1, ddd_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_TTM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_DDD, 0x01, 0x50, WARP_NO_CHECKPOINT),
		WARP_NODE(0x50, LEVEL_DDD, 0x01, 0x50, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CLOUD_PLATFORM, -5236, 10, 8011, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOUD_PLATFORM, -4245, 329, 8297, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOUD_PLATFORM, -3112, 717, 8297, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOUD_PLATFORM, -1489, 717, 7716, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOUD_PLATFORM, -4059, -1360, 10514, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOUD_PLATFORM, -4833, -916, 10514, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOUD_PLATFORM, -5506, -405, 10514, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_NONE, -16786, 10, 16898, 0, 0, 0, 0x00000000, bhvOpenableGrill),
		OBJECT(MODEL_BOUNCE_SPRING, 16411, 3208, 7118, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_DRAW_SPRING, 5656, -1705, 7437, 0, 0, 0, 0x00090000, bhvClamShell),
		OBJECT(MODEL_BOUNCE_SPRING, 8572, -1549, 8942, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 8587, -624, 8645, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 16235, 716, 7321, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 16347, 1731, 7684, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 16347, 2647, 7423, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 16443, 4199, 7450, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 8607, 154, 8197, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 16481, 4968, 7961, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 16514, 5493, 8675, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_CLOUD_PLATFORM, 16498, 3715, 6558, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOUD_PLATFORM, 16391, 2230, 8357, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOUD_PLATFORM, 17135, 5470, 8698, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_BOUNCE_SPRING, 8100, -2034, -22667, 0, 0, 0, 0x00010000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 8100, -925, -23107, 0, 0, 0, 0x00010000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 8449, -356, -23642, 0, 0, 0, 0x00010000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 8673, 485, -24190, 0, 0, 0, 0x00010000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 9107, 1140, -24497, 0, 0, 0, 0x00010000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 9123, 1913, -24165, 0, 0, 0, 0x00010000, bhvLllDrawbridge),
		OBJECT(MODEL_DRAW_HOVERBOARD, -16895, -3898, -24209, 0, 0, 0, 0x000A0000, bhvClamShell),
		OBJECT(MODEL_STAR, -16015, 4647, 27479, 0, -90, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, -16096, 10, 14008, 0, 0, 0, 0x00F10000, bhvPaintingDeathWarp),
		OBJECT(MODEL_NONE, -17103, -3987, -22870, 0, 0, 0, 0x00500000, bhvCheckpointLevel),
		OBJECT(MODEL_RAPOSA_CAGE, 7663, -679, -5605, 0, 90, 0, 0x00010000, bhvOctagonalPlatformRotating),
		OBJECT(MODEL_GOOMBA, -4035, -1491, -24378, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, -16071, 13, 13778, 0, 0, 0, 0x00500000, bhvDeathWarp),
		OBJECT(MODEL_GOOMBA, 3251, 2060, -23856, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 14735, -2073, -19189, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 16173, -2076, -17011, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 17940, -1692, -14435, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 23703, 144, -7033, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 24621, 896, -5398, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 25593, 1994, -2741, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 18441, 5843, 8389, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 9978, 545, 7995, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 5325, -1027, 5279, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 3407, -103, 5325, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -4052, -1148, 5320, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -5527, -385, 5244, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -11472, -759, 8842, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -2064, -741, -19755, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 3832, 803, -14215, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 10113, 2825, -4668, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 11531, 2819, 2795, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, -16087, 10, 14239, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -180, -15159, 2575, 15802),
		OBJECT(MODEL_NONE, -15141, 4490, 27799, 0, -180, 0, 0x000B0000, bhvSpinAirborneWarp),
		TERRAIN(ddd_area_1_collision),
		MACRO_OBJECTS(ddd_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_SNOWY_WORLD_2),
		TERRAIN_TYPE(TERRAIN_SNOW),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, -15159, 2575, 15802),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
