#include "src/game/envfx_snow.h"

const GeoLayout ddd_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -16282, 291, 8434, ddd_dl_Cube_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -16913, 4719, 27377, ddd_dl_Cube_001_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -14930, 275, 13028, ddd_dl_Cube_002_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -14930, 389, 13142, ddd_dl_Cube_003_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -12322, 168, 9347, ddd_dl_Cube_004_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -12377, 292, 9147, ddd_dl_Cube_005_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -12523, 57, 9147, ddd_dl_Cube_006_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -15638, 77, 10837, ddd_dl_Cube_007_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -16999, 427, 12163, ddd_dl_Cube_008_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -17066, 337, 11843, ddd_dl_Cube_009_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -13827, 227, 7618, ddd_dl_Cube_010_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -8384, 193, 5386, ddd_dl_Cube_011_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -8582, 360, 5580, ddd_dl_Cube_012_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -8488, 45, 5751, ddd_dl_Cube_013_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -6690, 337, 9703, ddd_dl_Cube_014_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -7133, 214, 9760, ddd_dl_Cube_015_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1606, 731, 10630, ddd_dl_Cube_016_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -104, 895, 5567, ddd_dl_Cube_017_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 118, 834, 5582, ddd_dl_Cube_018_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -827, 731, 5371, ddd_dl_Cube_019_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 13311, 1016, 10780, ddd_dl_Cube_020_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 11490, 537, 4605, ddd_dl_Cube_021_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 11613, 745, 4283, ddd_dl_Cube_022_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 11417, 353, 4139, ddd_dl_Cube_023_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 21181, 6010, 10668, ddd_dl_Cube_024_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 18120, 6030, 4317, ddd_dl_Cube_025_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 16653, 6113, 12760, ddd_dl_Cube_026_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 16519, 6274, 12851, ddd_dl_Cube_027_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 12737, -2020, -22801, ddd_dl_Cube_028_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 10005, -2173, -19837, ddd_dl_Cube_029_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -15521, -3882, -21344, ddd_dl_Cube_030_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -15521, -3768, -21230, ddd_dl_Cube_031_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -18039, -3522, -26259, ddd_dl_Cube_032_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -18106, -3613, -26580, ddd_dl_Cube_033_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5455, 2668, -23704, ddd_dl_Cube_034_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5455, 2781, -23590, ddd_dl_Cube_035_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 4807, 2549, -21613, ddd_dl_Cube_036_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 6582, 2950, -25395, ddd_dl_Cube_037_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -15059, 4719, 27272, ddd_dl_Cube_038_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 28, 10, -37, ddd_dl_Plane_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ddd_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_PURPLE_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 12000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_FREE_ROAM, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, ddd_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_SNOW_BLIZZARD, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ddd_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
