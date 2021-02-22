#include "src/game/envfx_snow.h"

const GeoLayout samuel_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, -2, 36, 5, samuel_body_mesh),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, samuel_arm_left_skinned),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -36, 41, -2, 33, 16, 117),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, samuel_arm_left_mesh),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, samuel_arm_left_middle_skinned),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 21, 0, 5, -1, -4),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, samuel_arm_left_middle_mesh),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, samuel_arm_left_end_skinned),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 13, 0, -12, 1, -7),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, samuel_arm_left_end_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, samuel_arm_right_skinned),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 35, 41, 2, -33, 16, -117),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, samuel_arm_right_mesh),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, samuel_arm_right_middle_skinned),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 21, 0, -5, -1, 4),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, samuel_arm_right_middle_mesh),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, samuel_arm_right_end_skinned),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 13, 0, 12, 1, 7),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, samuel_arm_right_end_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, samuel_foot_left_skinned),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -29, -22, -2, 9, 35, 167),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, samuel_foot_left_mesh),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, samuel_foot_right_skinned),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 28, -22, 2, -9, 35, -167),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, samuel_foot_right_mesh),
			GEO_CLOSE_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 63, 0, samuel_head_mesh),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, samuel_ear_left_skinned),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -26, 102, 0, 0, 0, 25),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, samuel_ear_left_mesh),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, samuel_ear_right_skinned),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 24, 102, 1, 0, 0, -25),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, samuel_ear_right_mesh),
				GEO_CLOSE_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 34, 0, 2, 0, 5),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, samuel_head_001_mesh),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, samuel_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, samuel_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};