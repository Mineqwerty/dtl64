void scroll_eternal_flame_Cube_001_mesh_vtx_0() {
	int i = 0;
	int count = 38;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int timeX;
	float amplitudeX = 0.2800000309944153;
	float frequencyX = 1.0;
	float offsetX = 0.0;
	Vtx *vertices = segmented_to_virtual(eternal_flame_Cube_001_mesh_vtx_0);

	deltaX = (int)(amplitudeX * frequencyX * coss((frequencyX * timeX + offsetX) * (1024 * 16 - 1) / 6.28318530718) * 0x20);

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
	timeX += 1;

}
void scroll_actor_geo_eternal_flame() {
	scroll_eternal_flame_Cube_001_mesh_vtx_0();

}
