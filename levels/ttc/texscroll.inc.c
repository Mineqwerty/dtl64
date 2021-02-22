void scroll_ttc_dl_Plane_mesh_vtx_0() {
	int i = 0;
	int count = 456;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(ttc_dl_Plane_mesh_vtx_0);

	deltaX = (int)(0.25 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_ttc_dl_Plane_002_mesh_vtx_0() {
	int i = 0;
	int count = 137;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int timeX;
	float amplitudeX = 1.0;
	float frequencyX = 0.7300000190734863;
	float offsetX = 0.0;
	Vtx *vertices = segmented_to_virtual(ttc_dl_Plane_002_mesh_vtx_0);

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
void scroll_ttc() {
	scroll_ttc_dl_Plane_mesh_vtx_0();
	scroll_ttc_dl_Plane_002_mesh_vtx_0();

}
