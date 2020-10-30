//

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat image;
	image = imread("C:\\Users\\mpkai\\Desktop\\Lena.png", IMREAD_ANYCOLOR); //HAVE TO ESCAPE THE BACKSLASHES
	namedWindow("Display Window", WINDOW_AUTOSIZE); //created window with name "Display Window" and its auto-sized
	imshow("Display Window", image); //display the image to the window
	waitKey(0); //wait for keystroke before closing
	return 0;
}