Lights1 level_circle_sm64_material_010_lights = gdSPDefLights1(
	0x7F, 0x40, 0x31,
	0xFE, 0x80, 0x62, 0x28, 0x28, 0x28);

Lights1 level_circle_sm64_material_009_lights = gdSPDefLights1(
	0x7F, 0x0, 0xF,
	0xFE, 0x0, 0x1F, 0x28, 0x28, 0x28);

Vtx level_circle_Circle_004_mesh_vtx_0[10] = {
	{{{0, 0, -68},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-40, 0, -55},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-65, 0, -21},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-40, 0, 55},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-65, 0, 21},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{65, 0, -21},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{40, 0, 55},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 0, 68},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{65, 0, 21},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{40, 0, -55},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx level_circle_Circle_004_mesh_tri_0[] = {
	gsSPVertex(level_circle_Circle_004_mesh_vtx_0 + 0, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 5, 0, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(3, 7, 6, 0),
	gsSP1Triangle(6, 8, 5, 0),
	gsSP1Triangle(5, 9, 0, 0),
	gsSPEndDisplayList(),
};Vtx level_circle_Circle_004_mesh_vtx_1[24] = {
	{{{-40, 0, -55},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 0, -68},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 0, -110},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{65, 0, -89},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{40, 0, -55},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{105, 0, -34},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{65, 0, -21},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{105, 0, 34},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{65, 0, 21},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{65, 0, 89},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{40, 0, 55},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 0, 110},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 0, 68},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-65, 0, 89},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-40, 0, 55},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-105, 0, 34},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-40, 0, 55},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-65, 0, 21},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-105, 0, 34},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-105, 0, -34},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-65, 0, -21},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-65, 0, -89},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-40, 0, -55},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 0, -110},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx level_circle_Circle_004_mesh_tri_1[] = {
	gsSPVertex(level_circle_Circle_004_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(level_circle_Circle_004_mesh_vtx_1 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_level_circle_sm64_material_010[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(level_circle_sm64_material_010_lights),
	gsSPEndDisplayList(),
};


Gfx mat_level_circle_sm64_material_009[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(level_circle_sm64_material_009_lights),
	gsSPEndDisplayList(),
};


Gfx level_circle_Circle_004_mesh[] = {
	gsSPDisplayList(mat_level_circle_sm64_material_010),
	gsSPDisplayList(level_circle_Circle_004_mesh_tri_0),
	gsSPDisplayList(mat_level_circle_sm64_material_009),
	gsSPDisplayList(level_circle_Circle_004_mesh_tri_1),
	gsSPEndDisplayList(),
};



Gfx level_circle_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
