#include "src/game/envfx_snow.h"

const GeoLayout draw_moving_platform_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, draw_moving_platform_Cube_001_mesh),
		GEO_DISPLAY_LIST(LAYER_ALPHA, draw_moving_platform_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
