#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

int main(int argc, char** argv) {
    cv::VideoCapture cap;
    cv::Mat frame;
    cv::namedWindow("Video", cv::WINDOW_AUTOSIZE);

    cap.open(argv[1]);

    for(;;) {
        cap >> frame;
        if(frame.empty()) {
            std::cout << "End of video" << std::endl;
            break;
        }
        cv::imshow("Video", frame);
        if(cv::waitKey(33) >= 0)
            break;
    }
    return 0;
}
    
