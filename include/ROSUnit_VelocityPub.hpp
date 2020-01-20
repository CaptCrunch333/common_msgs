#pragma once

#include "ROSUnit.hpp"
#include "geometry_msgs/Point.h"
#include "VelocityMsg.hpp"

class ROSUnit_VelocityPub : public ROSUnit
{
    public:

        ROSUnit_VelocityPub(std::string, ros::NodeHandle&);
        ~ROSUnit_VelocityPub();
        void receive_msg_data(DataMessage* t_msg);

    private:

        ros::Publisher m_pub;
};