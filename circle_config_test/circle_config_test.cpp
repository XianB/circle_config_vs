// circle_config_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "circle1.h"

int main()
{
	std::string filename("D:\\QQPCmgr\\Desktop\\tongyou\\rawPicture\\circle.yuv");
	std::vector<std::vector<Result_Circle>> circles;
	UINT8 *buf = nullptr;
	if (filename.substr(filename.size() - 3, 3) == "yuv") {
		FILE *yuv_file = fopen(filename.c_str(), "rb+");
		buf = new UINT8[WIDTH * HEIGHT];
		fread(buf, WIDTH * HEIGHT, 1, yuv_file);
	}
	circle_detection_config(buf, circles);
    return 0;
}

