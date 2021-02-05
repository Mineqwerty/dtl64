#include "src/game/envfx_snow.h"

const GeoLayout level_circle_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, level_circle_Circle_004_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, level_circle_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
