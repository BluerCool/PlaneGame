#include <graphics.h>		// 引用图形库头文件
bool isGameOver = false;
IMAGE Plane;
int planex = 270;
int planey = 200;
int main()
{
	ExMessage ex;
	initgraph(640, 480);	// 创建绘图窗口，大小为 640x480 像素


	BeginBatchDraw();

	loadimage(&Plane, _T("C:\\Users\\Qiunkeinn\\Desktop\\droneihasihabayraktar.gif"));
	//getimage(&Plane, planex, planey, 64, 64);
	putimage(planex, planey, &Plane);
	FlushBatchDraw();
	while (!isGameOver)

	{


		while (peekmessage(&ex))
		{

			if (ex.message == WM_KEYDOWN)
			{
				switch (ex.vkcode)
				{

				case(0x41):
					cleardevice();
					planex -= 10;
					putimage(planex, planey, &Plane);
					FlushBatchDraw();
					break;
				case(0x44):
					cleardevice();
					planex += 10;
					putimage(planex, planey, &Plane);
					FlushBatchDraw();
					break;
				case(0x57):
					cleardevice();
					planey -= 10;
					putimage(planex, planey, &Plane);
					FlushBatchDraw();
					break;
				case(0x53):
					cleardevice();
					planey += 10;
					putimage(planex, planey, &Plane);
					FlushBatchDraw();
					break;
				}


			}
		}
	}

	EndBatchDraw();
	closegraph();			// 关闭绘图窗口
	return 0;
}