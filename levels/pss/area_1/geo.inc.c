#include "src/game/envfx_snow.h"

const GeoLayout pss_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_Cube_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 172, 338, -945, pss_dl_Cube_001_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 408, 259, -967, pss_dl_Cube_002_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 684, 200, -1841, pss_dl_Cube_003_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -383, 470, -1138, pss_dl_Cube_004_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 970, 0, 627, pss_dl_Cube_005_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -698, 333, 516, pss_dl_Cube_006_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -544, 259, 516, pss_dl_Cube_007_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 7743, 1342, -2482, pss_dl_Cube_008_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1149, 414, -945, pss_dl_Cube_025_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout pss_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, pss_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
