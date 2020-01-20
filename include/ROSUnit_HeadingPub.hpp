#pragma once

#include "ROSUnit.hpp"
#include "std_msgs/Float32.h"
#include "HeadingMsg.hpp"

class ROSUnit_HeadingPub : public ROSUnit
{
    public:

        ROSUnit_HeadingPub(std::string, ros::NodeHandle&);
        ~ROSUnit_HeadingPub();
        void receive_msg_data(DataMessage* t_msg);

    private:

        ros::Publisher m_pub;
};