#include "src/game/envfx_snow.h"

const GeoLayout drawleftleg_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, drawleftleg_Cube_004_mesh),
		GEO_DISPLAY_LIST(LAYER_ALPHA, drawleftleg_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
