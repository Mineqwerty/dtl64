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
#include "levels/ttm/header.h"

const LevelScript level_ttm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ttm_segment_7SegmentRomStart, _ttm_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group6_yay0SegmentRomStart, _group6_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_7), 

	AREA(1, ttm_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x08, LEVEL_PSS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_ETERNAL_FLAME, -793, 174, -29, 0, 0, 0, 0x00000000, bhvUnusedParticleSpawn),
		OBJECT(MODEL_MIKE, 3021, 100, 3765, 0, -64, 0, 0x00030000, bhvSpindel),
		OBJECT(MODEL_NONE, 659, 100, 1063, 0, -135, 0, 0x00000000, bhvSwingPlatform),
		OBJECT(MODEL_SNOW_GATE, 5396, 100, -3473, 0, -90, 0, 0x00080000, bhvDoorWarp),
		OBJECT(MODEL_SNOW_GATE, 5396, 100, -3219, 0, 90, 0, 0x00080000, bhvDoorWarp),
		OBJECT(MODEL_HEATHER, 3059, 100, -3902, 0, -32, 0, 0x00000000, bhvSpindel),
		OBJECT(MODEL_SAMUEL, -5504, 131, -2506, 0, 37, 0, 0x00010000, bhvSpindel),
		OBJECT(MODEL_COUNT_CHOCO, -2786, 220, 3822, 0, -141, 0, 0x00020000, bhvSpindel),
		OBJECT(MODEL_ISAAC, -4722, 100, 1431, 0, 95, 0, 0x00040000, bhvSpindel),
		OBJECT(MODEL_NONE, 0, 0, 0, 0, 0, 0, 0x00000000, bhvSquarishPathMoving),
		OBJECT(MODEL_NONE, 251, 100, 1040, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 251, 100, 1040),
		TERRAIN(ttm_area_1_collision),
		MACRO_OBJECTS(ttm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_VILLAGE_THEME),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 251, 100, 1040),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
