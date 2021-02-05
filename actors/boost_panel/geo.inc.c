#include "src/game/envfx_snow.h"

const GeoLayout boost_panel_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, boost_panel_Plane_mesh),
		GEO_DISPLAY_LIST(LAYER_ALPHA, boost_panel_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
