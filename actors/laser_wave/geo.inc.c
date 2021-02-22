#include "src/game/envfx_snow.h"

const GeoLayout laser_wave_geo[] = {
	GEO_CULLING_RADIUS(5000),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, laser_wave_Circle_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, laser_wave_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
