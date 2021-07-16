#include "src/game/envfx_snow.h"

const GeoLayout wilfre_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, -1, 44, 5, wilfre_body_mesh),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_arm_left_skinned),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -36, 41, -2, 33, 16, 117),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wilfre_arm_left_mesh),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_arm_left_middle_skinned),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 21, 0, 5, -1, -4),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wilfre_arm_left_middle_mesh),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_arm_left_end_skinned),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 13, 0, -12, 1, -7),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wilfre_arm_left_end_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_arm_right_skinned),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 35, 41, 2, -33, 16, -117),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wilfre_arm_right_mesh),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_arm_right_middle_skinned),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 21, 0, -5, -1, 4),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wilfre_arm_right_middle_mesh),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_arm_right_end_skinned),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 13, 0, 12, 1, 7),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wilfre_arm_right_end_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_foot_left_skinned),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -29, -22, -2, 9, 35, 167),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wilfre_foot_left_mesh),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_foot_right_skinned),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 28, -22, 2, -9, 35, -167),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wilfre_foot_right_mesh),
			GEO_CLOSE_NODE(),
			GEO_ANIMATED_PART(LAYER_ALPHA, 0, 63, 0, wilfre_head_mesh),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_ear_left_skinned),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -26, 102, 0, 0, 0, 25),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wilfre_ear_left_mesh),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_ear_left_end_skinned),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 35, 0, 4, -5, 24),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wilfre_ear_left_end_mesh),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_shadow_ear_1_skinned),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 30, 0, -28, 7, -26),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wilfre_shadow_ear_1_mesh),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_ear_right_skinned),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 24, 102, 1, 0, 0, -25),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wilfre_ear_right_mesh),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_ear_right_end_skinned),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 35, 0, -4, -5, -24),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wilfre_ear_right_end_mesh),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_shadow_ear_2_skinned),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 30, 0, -19, -4, 22),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, wilfre_shadow_ear_2_mesh),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_goggles_skinned),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 92, 31, wilfre_goggles_mesh),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 34, 0, -2, 0, -2),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, wilfre_head_001_mesh),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_shadow_head_1_skinned),
				GEO_ANIMATED_PART(LAYER_OPAQUE, -8, 92, 31, wilfre_shadow_head_1_mesh),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_shadow_head_2_skinned),
				GEO_ANIMATED_PART(LAYER_OPAQUE, -16, 92, -58, wilfre_shadow_head_2_mesh),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_shadow_head_3_skinned),
				GEO_ANIMATED_PART(LAYER_OPAQUE, -2, 33, 64, wilfre_shadow_head_3_mesh),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_shadow_head_4_skinned),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 3, 39, 71, wilfre_shadow_head_4_mesh),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wilfre_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, wilfre_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wilfre_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
