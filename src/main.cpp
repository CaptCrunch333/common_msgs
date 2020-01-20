#include "ros/ros.h"
#include "iostream"

#include "ROSUnit_FloatPub.hpp"
#include "ROSUnit_FloatSub.hpp"
#include "ROSUnit_Point2DPub.hpp"
#include "ROSUnit_Point2DSub.hpp"
#include "ROSUnit_PointPub.hpp"
#include "ROSUnit_PointSub.hpp"

int main(int argc, char **argv)
{
	ros::init(argc, argv, "common_srv");

	ros::NodeHandle nh;

	ROSUnit_FloatPub tmp1("tmp1", nh);
	ROSUnit_FloatSub tmp2("tmp1", nh);
	ROSUnit_Point2DPub tmp3("tmp3", nh);
	ROSUnit_Point2DSub tmp4("tmp3", nh);
	ROSUnit_PointPub tmp5("tmp5", nh);
	ROSUnit_PointSub tmp6("tmp5", nh);

	std::cout << "HI (:" << std::endl;

	while (ros::ok())
	{
		ros::spinOnce();
	}
	
}
