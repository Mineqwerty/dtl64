#include "src/game/envfx_snow.h"

const GeoLayout moving_platform_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(1, 255, 100),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, moving_platform_Cube_008_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, moving_platform_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};