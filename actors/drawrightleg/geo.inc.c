#include "src/game/envfx_snow.h"

const GeoLayout drawrightleg_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, drawrightleg_Cube_004_mesh),
		GEO_DISPLAY_LIST(LAYER_ALPHA, drawrightleg_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};