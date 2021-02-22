void scroll_ttm_dl_Plane_mesh_vtx_10() {
	int i = 0;
	int count = 9;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(ttm_dl_Plane_mesh_vtx_10);

	deltaX = (int)(0.3700000047683716 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_ttm() {
	scroll_ttm_dl_Plane_mesh_vtx_10();

}
