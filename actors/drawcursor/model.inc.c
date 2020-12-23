Lights1 drawcursor_sm64_material_002_lights = gdSPDefLights1(
	0x0, 0x7F, 0x7F,
	0x0, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Vtx drawcursor_Cube_002_mesh_vtx_0[24] = {
	{{{-12, -12, 0},0, {-25, 3101},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-12, 12, 0},0, {1017, 3101},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-12, 12, 0},0, {1017, 2058},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-12, -12, 0},0, {-25, 2058},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-12, -12, 0},0, {-25, 2058},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-12, 12, 0},0, {1017, 2058},{0x0, 0x0, 0x81, 0xFF}}},
	{{{12, 12, 0},0, {1017, 1016},{0x0, 0x0, 0x81, 0xFF}}},
	{{{12, -12, 0},0, {-25, 1016},{0x0, 0x0, 0x81, 0xFF}}},
	{{{12, -12, 0},0, {-25, 1016},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{12, 12, 0},0, {1017, 1016},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{12, 12, 0},0, {1017, -26},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{12, -12, 0},0, {-25, -26},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{12, -12, 0},0, {-25, -26},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{12, 12, 0},0, {1017, -26},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-12, 12, 0},0, {1017, -1069},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-12, -12, 0},0, {-25, -1069},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-12, -12, 0},0, {-1068, 1016},{0x0, 0x81, 0x0, 0xFF}}},
	{{{12, -12, 0},0, {-25, 1016},{0x0, 0x81, 0x0, 0xFF}}},
	{{{12, -12, 0},0, {-25, -26},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-12, -12, 0},0, {-1068, -26},{0x0, 0x81, 0x0, 0xFF}}},
	{{{12, 12, 0},0, {1017, 1016},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-12, 12, 0},0, {2060, 1016},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-12, 12, 0},0, {2060, -26},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{12, 12, 0},0, {1017, -26},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx drawcursor_Cube_002_mesh_tri_0[] = {
	gsSPVertex(drawcursor_Cube_002_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(drawcursor_Cube_002_mesh_vtx_0 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_drawcursor_sm64_material_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(drawcursor_sm64_material_002_lights),
	gsSPEndDisplayList(),
};


Gfx drawcursor_Cube_002_mesh[] = {
	gsSPDisplayList(mat_drawcursor_sm64_material_002),
	gsSPDisplayList(drawcursor_Cube_002_mesh_tri_0),
	gsSPEndDisplayList(),
};



Gfx drawcursor_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
