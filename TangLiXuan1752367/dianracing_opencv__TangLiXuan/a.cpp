#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
using namespace cv;
using namespace std;

int main()
{
  Mat image=imread("dianracing.jpg");
  
  namedWindow("原图");
  namedWindow("效果图");
  
  imshow("原图",image);

  Mat out;
  GaussianBlur(image,out,Size(21,21),0,0);
  imwrite("dianracing.jpg", out);


  imshow("效果图",out);
  waitKey(0);
}
