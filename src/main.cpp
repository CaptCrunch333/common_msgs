#include "ros/ros.h"
#include "iostream"

#include "ROSUnit_UpdateFloatClnt.hpp"
#include "ROSUnit_UpdateFloatSrv.hpp"
#include "ROSUnit_UpdatePosesClnt.hpp"
#include "ROSUnit_UpdatePosesSrv.hpp"
#include "ROSUnit_UpdateTaggedPosesClnt.hpp"
#include "ROSUnit_UpdateTaggedPosesSrv.hpp"
#include "ROSUnit_SetFloatClnt.hpp"
#include "ROSUnit_SetFloatSrv.hpp"
#include "ROSUnit_SetIntClnt.hpp"
#include "ROSUnit_SetIntSrv.hpp"
#include "ROSUnit_SetPointClnt.hpp"
#include "ROSUnit_SetPointSrv.hpp"
#include "ROSUnit_SetPosesClnt.hpp"
#include "ROSUnit_SetPosesSrv.hpp"
#include "ROSUnit_SetVectorClnt.hpp"
#include "ROSUnit_SetVectorSrv.hpp"


int main(int argc, char **argv)
{
	ros::init(argc, argv, "common_srv");

	ros::NodeHandle nh;

	ROSUnit_UpdateFloatClnt tmp("/tmp", nh);
	ROSUnit_UpdateFloatSrv tmp1("/tmp1", nh);
	ROSUnit_UpdatePosesClnt tmp2("/tmp2", nh);
	ROSUnit_UpdatePosesSrv tmp3("/tmp3", nh);
	ROSUnit_UpdateTaggedPosesClnt tmp10("/tmp10", nh);
	ROSUnit_UpdateTaggedPosesSrv tmp11("/tmp11", nh);
	ROSUnit_SetFloatClnt tmp12("/tmp12", nh);
	ROSUnit_SetFloatSrv tmp13("/tmp13", nh);
	ROSUnit_SetIntClnt tmp4("/tmp4", nh);
	ROSUnit_SetIntSrv tmp5("/tmp5", nh);
	ROSUnit_SetPointClnt tmp6("/tmp6", nh);
	ROSUnit_SetPointSrv tmp7("/tmp7", nh);
	ROSUnit_SetPosesClnt tmp14("/tmp14", nh);
	ROSUnit_SetPosesSrv tmp15("/tmp15", nh);
	ROSUnit_SetVectorClnt tmp8("/tmp8", nh);
	ROSUnit_SetVectorSrv tmp9("/tmp9", nh);

	std::cout << "HI (:" << std::endl;

	while (ros::ok())
	{
		ros::spinOnce();
	}
	
}
