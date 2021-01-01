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
		WARP_NODE(0xF1, LEVEL_DDD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CLOUD_PLATFORM, -5236, 10, 8011, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOUD_PLATFORM, -4245, 329, 8297, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOUD_PLATFORM, -3112, 717, 8297, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOUD_PLATFORM, -1489, 717, 7716, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOUD_PLATFORM, -4059, -1360, 10514, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOUD_PLATFORM, -4833, -916, 10514, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOUD_PLATFORM, -5506, -405, 10514, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_NONE, -16179, 10, 15432, 0, 0, 0, 0x00000000, bhvOpenableGrill),
		OBJECT(MODEL_BOUNCE_SPRING, 16572, 3208, 7118, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_DRAW_SPRING, 5656, -1705, 7437, 0, 0, 0, 0x00090000, bhvClamShell),
		OBJECT(MODEL_BOUNCE_SPRING, 8572, -1549, 8942, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 8572, -624, 8645, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 16116, 716, 7321, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 16347, 1731, 7684, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 16347, 2647, 7423, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 16841, 4199, 7450, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 8572, 154, 8197, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 16841, 4968, 7961, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 16841, 5493, 8675, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_CLOUD_PLATFORM, 16498, 3715, 6558, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOUD_PLATFORM, 16498, 2230, 8357, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_CLOUD_PLATFORM, 16498, 5281, 7335, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_BOUNCE_SPRING, 8100, -2034, -22667, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 8100, -925, -23107, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 8449, -356, -23642, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 8673, 485, -24190, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 9107, 1140, -24497, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, 9123, 1913, -24165, 0, 0, 0, 0x00000000, bhvLllDrawbridge),
		OBJECT(MODEL_DRAW_HOVERBOARD, -16895, -3898, -24209, 0, 0, 0, 0x000A0000, bhvClamShell),
		OBJECT(MODEL_WOODEN_SIGNPOST, 6251, -1705, 7891, 0, -90, 0, 0x00000000, bhvMessagePanel),
		OBJECT(MODEL_STAR, -16015, 4647, 27479, 0, -90, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_WOODEN_SIGNPOST, -16269, -3894, -24259, 0, 90, 0, 0x00080000, bhvMessagePanel),
		OBJECT(MODEL_NONE, -15923, 10, 16210, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -180, -15941, 4490, 27455),
		OBJECT(MODEL_NONE, -15141, 4490, 27799, 0, -180, 0, 0x000B0000, bhvSpinAirborneWarp),
		TERRAIN(ddd_area_1_collision),
		MACRO_OBJECTS(ddd_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_SNOWY_WORLD_2),
		TERRAIN_TYPE(TERRAIN_SNOW),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, -15941, 4490, 27455),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
