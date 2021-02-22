#include "src/game/envfx_snow.h"

const GeoLayout laser_pusher_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, laser_pusher_Cube_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, laser_pusher_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
