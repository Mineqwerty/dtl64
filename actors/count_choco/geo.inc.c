#include "src/game/envfx_snow.h"

const GeoLayout count_choco_Bone_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 63, 0, count_choco_head_mesh_mat_override_sm64_material_012_0),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_ear_left_skinned_mat_override_sm64_material_012_0),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -25, 103, 0, 2, 1, 42),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_ear_left_mesh_mat_override_sm64_material_012_0),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_ear_right_skinned_mat_override_sm64_material_012_0),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 25, 102, 1, 3, -2, -44),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_ear_right_mesh_mat_override_sm64_material_012_0),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout count_choco_Bone_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 63, 0, count_choco_head_mesh_mat_override_sm64_material_005_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_ear_left_skinned_mat_override_sm64_material_005_1),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -25, 103, 0, 2, 1, 42),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_ear_left_mesh_mat_override_sm64_material_005_1),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_ear_right_skinned_mat_override_sm64_material_005_1),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 25, 102, 1, 3, -2, -44),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_ear_right_mesh_mat_override_sm64_material_005_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout count_choco_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, -1, 44, 5, count_choco_body_mesh),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(0, geo_switch_choco_mouth),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 63, 0, count_choco_head_mesh),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_ear_left_skinned),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -25, 103, 0, 2, 1, 42),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_ear_left_mesh),
						GEO_CLOSE_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_ear_right_skinned),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 25, 102, 1, 3, -2, -44),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_ear_right_mesh),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, count_choco_Bone_opt1),
				GEO_BRANCH(1, count_choco_Bone_opt2),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_arm_left_skinned),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -36, 41, -2, 33, 16, 117),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_arm_left_mesh),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_arm_left_middle_skinned),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 21, 0, 5, -1, -4),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_arm_left_middle_mesh),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_arm_left_end_skinned),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 13, 0, -12, 1, -7),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_arm_left_end_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_arm_right_skinned),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 35, 41, 2, -33, 16, -117),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_arm_right_mesh),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_arm_right_middle_skinned),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 21, 0, -5, -1, 4),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_arm_right_middle_mesh),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_arm_right_end_skinned),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 13, 0, 12, 1, 7),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_arm_right_end_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_cape_main_skinned),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 2, 40, -35, 0, -90, 152),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_cape_main_mesh),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_cape_left_skinned),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -9, -2, 25, 37, -10, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_cape_left_mesh),
					GEO_CLOSE_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_cape_right_skinned),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -12, -4, -27, -27, -10, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_cape_right_mesh),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_foot_left_skinned),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -29, -22, -2, 9, 35, 167),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_foot_left_mesh),
			GEO_CLOSE_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_foot_right_skinned),
			GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 28, -22, 2, -9, 35, -167),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, count_choco_foot_right_mesh),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, count_choco_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
