#include <graphics.h>		// ����ͼ�ο�ͷ�ļ�
bool isGameOver = false;
IMAGE Plane;
int planex = 270;
int planey = 200;
int main()
{
	ExMessage ex;
	initgraph(640, 480);	// ������ͼ���ڣ���СΪ 640x480 ����


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
	closegraph();			// �رջ�ͼ����
	return 0;
}