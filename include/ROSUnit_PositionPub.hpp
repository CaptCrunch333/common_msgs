#pragma once

#include "ROSUnit.hpp"
#include "geometry_msgs/Point.h"
#include "PositionMsg.hpp"

class ROSUnit_PositionPub : public ROSUnit
{
    public:

        ROSUnit_PositionPub(std::string, ros::NodeHandle&);
        ~ROSUnit_PositionPub();
        void receive_msg_data(DataMessage* t_msg);

    private:

        ros::Publisher m_pub;
};