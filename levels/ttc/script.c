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
#include "levels/ttc/header.h"

const LevelScript level_ttc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xa, _bbh_skybox_yay0SegmentRomStart, _bbh_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x7, _ttc_segment_7SegmentRomStart, _ttc_segment_7SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_CUBE, ttc_geo_000240), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_PRISM, ttc_geo_000258), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_PENDULUM, ttc_geo_000270), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_LARGE_TREADMILL, ttc_geo_000288), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_SMALL_TREADMILL, ttc_geo_0002A8), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_PUSH_BLOCK, ttc_geo_0002C8), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_HEXAGON, ttc_geo_0002E0), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_TRIANGLE, ttc_geo_0002F8), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_PIT_BLOCK, ttc_geo_000310), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_PIT_BLOCK_UNUSED, ttc_geo_000328), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ELEVATOR_PLATFORM, ttc_geo_000340), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_CLOCK_HAND, ttc_geo_000358), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_SPINNER, ttc_geo_000370), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_SMALL_GEAR, ttc_geo_000388), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_LARGE_GEAR, ttc_geo_0003A0), 

	AREA(1, ttc_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_DRAW_MOON, -5459, 1315, -6783, 0, 0, 0, 0x000B0000, bhvClamShell),
		OBJECT(MODEL_BOUNCE_SPRING, -20721, 1397, -9564, 0, 0, 0, 0x00010000, bhvLllDrawbridge),
		OBJECT(MODEL_MOVING_PLATFORM, -18451, 3038, -9564, 0, 0, 0, 0x00000000, bhvKickableBoard),
		OBJECT(MODEL_MOVING_PLATFORM, -24050, 1442, 18, 0, 0, 0, 0x00010000, bhvKickableBoard),
		OBJECT(MODEL_BOUNCE_SPRING, -5493, 659, 3027, 0, 0, 0, 0x00010000, bhvLllDrawbridge),
		OBJECT(MODEL_DRAW_BOOST_PANEL, -4695, 1296, -6040, 0, 0, 0, 0x000C0000, bhvClamShell),
		OBJECT(MODEL_BOOST_PANEL, -5449, 1069, -2040, 0, 0, 0, 0x00000000, bhvRrCruiserWing),
		OBJECT(MODEL_BOOST_PANEL, -5449, 1069, 1179, 0, 0, 0, 0x00000000, bhvRrCruiserWing),
		OBJECT(MODEL_BOOST_PANEL, -7895, 1143, 9734, 0, -90, 0, 0x00000000, bhvRrCruiserWing),
		OBJECT(MODEL_BOOST_PANEL, -7337, 1940, 9742, 0, 0, 0, 0x00000000, bhvRrCruiserWing),
		OBJECT(MODEL_BOOST_PANEL, -7296, 1979, 11335, 0, 90, 0, 0x00000000, bhvRrCruiserWing),
		OBJECT(MODEL_BOOST_PANEL, -5833, 1979, 11338, 0, 0, 0, 0x00000000, bhvRrCruiserWing),
		OBJECT(MODEL_BOOST_PANEL, -5831, 1979, 12679, 0, 0, 0, 0x00000000, bhvRrCruiserWing),
		OBJECT(MODEL_BOOST_PANEL, -5830, 1979, 13972, 0, 0, 0, 0x00000000, bhvRrCruiserWing),
		OBJECT(MODEL_BOUNCE_SPRING, -5824, 1257, 15278, 0, 0, 0, 0x00010000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, -5788, 2848, 15220, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_BOUNCE_SPRING, -5824, 1257, 15554, 0, 0, 0, 0x00010000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, -5788, 2848, 15496, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_BOUNCE_SPRING, -5824, 1257, 14985, 0, 0, 0, 0x00010000, bhvLllDrawbridge),
		OBJECT(MODEL_BOUNCE_SPRING, -5788, 2848, 14927, 0, 0, 0, 0x00000000, bhvClockHourHand),
		OBJECT(MODEL_NONE, -7012, 1249, -6807, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -5459, 537, -6783),
		TERRAIN(ttc_area_1_collision),
		MACRO_OBJECTS(ttc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_DARK_CAVE),
		TERRAIN_TYPE(TERRAIN_SNOW),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -5459, 537, -6783),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
