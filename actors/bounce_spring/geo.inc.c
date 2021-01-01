#include "src/game/envfx_snow.h"

const GeoLayout bounce_spring_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(1, 255, 100),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bounce_spring_Cube_009_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, bounce_spring_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
