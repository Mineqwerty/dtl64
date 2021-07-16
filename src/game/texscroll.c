#include "types.h"
#include "include/segment_symbols.h"
#include "memory.h"
#include "engine/math_util.h"
#include "src/engine/behavior_script.h"
#include "texscroll.h"

#ifdef TARGET_N64
#define SCROLL_CONDITION(condition) condition
#else
#define SCROLL_CONDITION(condition) 1
#endif


#include "src/game/texscroll/ddd_texscroll.inc.c"
#include "src/game/texscroll/common0_texscroll.inc.c"
#include "src/game/texscroll/pss_texscroll.inc.c"
#include "src/game/texscroll/ttc_texscroll.inc.c"
#include "src/game/texscroll/ttm_texscroll.inc.c"
#include "src/game/texscroll/lll_texscroll.inc.c"
#include "src/game/texscroll/group12_texscroll.inc.c"
#include "src/game/texscroll/bowser_1_texscroll.inc.c"
void scroll_textures() {
	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_ddd_segment_7SegmentRomStart)) {
		scroll_textures_ddd();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x8] == (uintptr_t)_common0_yay0SegmentRomStart)) {
		scroll_textures_common0();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_pss_segment_7SegmentRomStart)) {
		scroll_textures_pss();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_ttc_segment_7SegmentRomStart)) {
		scroll_textures_ttc();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_ttm_segment_7SegmentRomStart)) {
		scroll_textures_ttm();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_lll_segment_7SegmentRomStart)) {
		scroll_textures_lll();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x6] == (uintptr_t)_group12_yay0SegmentRomStart)) {
		scroll_textures_group12();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_bowser_1_segment_7SegmentRomStart)) {
		scroll_textures_bowser_1();
	}

}
