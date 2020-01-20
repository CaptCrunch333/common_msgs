#pragma once

#include "ROSUnit.hpp"
#include "std_msgs/Float32.h"
#include "HeadingMsg.hpp"

class ROSUnit_HeadingSub : public ROSUnit
{
    public:

        ROSUnit_HeadingSub(std::string, ros::NodeHandle&);
        ~ROSUnit_HeadingSub();
        void receive_msg_data(DataMessage* t_msg) {};

    private:

        ros::Subscriber m_sub;

        static ROSUnit_HeadingSub* m_ptr;

        static void callback(const std_msgs::Float32::ConstPtr&);
};