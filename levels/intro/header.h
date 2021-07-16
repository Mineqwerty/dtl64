#ifndef INTRO_HEADER_H
#define INTRO_HEADER_H

#include "types.h"

// geo
extern const GeoLayout intro_geo_0002D0[];
extern const GeoLayout intro_geo_00035C[];
extern const GeoLayout intro_geo_0003B8[];
extern const GeoLayout intro_geo_000414[];

// leveldata
extern Vtx titleScreen_Plane_mesh_vtx_0[4];
extern Gfx titleScreen_Plane_mesh_tri_0[];
extern Vtx titleScreen_Plane_mesh_vtx_1[4];
extern Gfx titleScreen_Plane_mesh_tri_1[];
extern Vtx titleScreen_Plane_mesh_vtx_2[4];
extern Gfx titleScreen_Plane_mesh_tri_2[];
extern Vtx titleScreen_Plane_mesh_vtx_3[4];
extern Gfx titleScreen_Plane_mesh_tri_3[];
extern Vtx titleScreen_Plane_mesh_vtx_4[8];
extern Gfx titleScreen_Plane_mesh_tri_4[];
extern Vtx titleScreen_Plane_mesh_vtx_5[8];
extern Gfx titleScreen_Plane_mesh_tri_5[];
extern Vtx titleScreen_Plane_mesh_vtx_6[8];
extern Gfx titleScreen_Plane_mesh_tri_6[];
extern Vtx titleScreen_Plane_mesh_vtx_7[8];
extern Gfx titleScreen_Plane_mesh_tri_7[];
extern Vtx titleScreen_Plane_mesh_vtx_8[135];
extern Gfx titleScreen_Plane_mesh_tri_8[];
extern Vtx titleScreen_Plane_mesh_vtx_9[74];
extern Gfx titleScreen_Plane_mesh_tri_9[];
extern Vtx titleScreen_Plane_mesh_vtx_10[32];
extern Gfx titleScreen_Plane_mesh_tri_10[];
extern Vtx titleScreen_Plane_mesh_vtx_11[40];
extern Gfx titleScreen_Plane_mesh_tri_11[];
extern Vtx titleScreen_Plane_mesh_vtx_12[32];
extern Gfx titleScreen_Plane_mesh_tri_12[];
extern Vtx titleScreen_Plane_mesh_vtx_13[32];
extern Gfx titleScreen_Plane_mesh_tri_13[];
extern Vtx titleScreen_Plane_mesh_vtx_14[40];
extern Gfx titleScreen_Plane_mesh_tri_14[];
extern Vtx titleScreen_Plane_mesh_vtx_15[32];
extern Gfx titleScreen_Plane_mesh_tri_15[];

extern Gfx titleScreen_Plane_mesh[];






extern const Gfx intro_seg7_dl_0700C6A0[];
extern const f32 intro_seg7_table_0700C790[];
extern const f32 intro_seg7_table_0700C880[];

// script
extern const LevelScript level_intro_entry_1[];
extern const LevelScript level_intro_entry_2[];
extern const LevelScript level_intro_entry_3[];
extern const LevelScript level_intro_entry_4[];
extern const LevelScript script_intro_L1[];
extern const LevelScript script_intro_L2[];
extern const LevelScript script_intro_L3[];
extern const LevelScript script_intro_L4[];
extern const LevelScript script_intro_L5[];

extern const GeoLayout intro_geo_error_screen[];
extern const LevelScript level_intro_entry_error_screen[];
extern Gfx *geo18_display_error_message(u32 run, UNUSED struct GraphNode *sp44, UNUSED u32 sp48);

#endif
