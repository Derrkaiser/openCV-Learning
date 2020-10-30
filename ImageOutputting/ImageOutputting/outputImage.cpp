//

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <string>

using namespace cv;
using namespace std;


int main()
{
	Mat image;
	string path;
	image = imread("x64\\Debug\\Lena.png", IMREAD_ANYCOLOR); //HAVE TO ESCAPE THE BACKSLASHES
	namedWindow("Display Window", WINDOW_AUTOSIZE); //created window with name "Display Window" and its auto-sized
	imshow("Display Window", image); //display the image to the window



	Mat image2(200, 200, CV_8UC3, Scalar(0, 0, 255));
	imshow("image2", image2);
	waitKey(0);

	return 0;
	
}