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
#include "levels/bob/header.h"

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	AREA(1, bob_area_1),
		MARIO_POS(0x01, 0, 0, 547, 0),
		OBJECT(MODEL_DRAWTIME, -783, 1738, 550, 0, 0, 0, 0x00000000, bhvClamShell),
		OBJECT(MODEL_DRAWTIME64, -779, 997, 550, 0, 0, 0, 0x00010000, bhvClamShell),
		OBJECT(MODEL_DRAWRIGHTARM, -373, 997, 550, 0, 0, 0, 0x00020000, bhvClamShell),
		OBJECT(MODEL_DRAWLEFTARM, -968, 331, 550, 0, 0, 0, 0x00030000, bhvClamShell),
		OBJECT(MODEL_DRAWRIGHTLEG, -621, 331, 550, 0, 0, 0, 0x00040000, bhvClamShell),
		OBJECT(MODEL_DRAWLEFTLEG, -1225, 997, 550, 0, 0, 0, 0x00050000, bhvClamShell),
		OBJECT(MODEL_JOWEE, 1999, 127, 1709, 0, 0, 0, 0x00000000, bhvEndToad),
		OBJECT(MODEL_MARI, 2521, 127, 1709, 0, 0, 0, 0x00000000, bhvSpindrift),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 547, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
