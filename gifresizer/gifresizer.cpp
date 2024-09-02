#include "pch.h"
#include "gifresizer.h"

D2D1_RECT_F Resizer(ID2D1Bitmap* InputBitmap, float first_x, float first_y)
{
	D2D1_RECT_F ret = { 0 };
	D2D1_SIZE_U PixelSize(InputBitmap->GetPixelSize());

	ret.left = first_x;
	ret.top = first_y;
	ret.right = static_cast<float>(first_x + PixelSize.width);
	ret.bottom = static_cast<float>(first_y + PixelSize.height);

	return ret;
}