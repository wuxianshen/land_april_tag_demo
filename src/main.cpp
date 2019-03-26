#include "AprilTag_TX2.h"

int main(int argc, char* argv[])
{
	AprilTag demo;
	cv::Mat image;
	// process command line options
	demo.parseOptions("/home/nvidia/jav_config/landmark.cfg", argc, argv);
	demo.setup();
	cout << "Processing image" << endl;
	cv::VideoCapture m_cap("../../res/test.mp4");
	//cv::VideoCapture m_cap(1);
	int frame = 0;
	while (true) { 
		// capture frame
		m_cap >> image;
		demo.loadImages(image);
		if (cv::waitKey(1) >= 0) break;
		frame++;
		cout << demo.pos_vec.size() << " tags detected:" << endl;
		for (vector<landing_vision_defs::land_mark_pos>::size_type i = 0; i != demo.pos_vec.size(); i ++)
		{
			cout << "Id=" << demo.pos_vec[i].mark_id
				<< " distance=" << demo.pos_vec[i].distance
				<< "m,x=" << demo.pos_vec[i].x
				<< ", y=" << demo.pos_vec[i].y
				<< ", z=" << demo.pos_vec[i].z
				<< ", yaw=" << demo.pos_vec[i].yaw
				<< ", pitch=" << demo.pos_vec[i].pitch
				<< ", roll=" << demo.pos_vec[i].roll
				<< endl;
		}
	}

	return 0;
}
