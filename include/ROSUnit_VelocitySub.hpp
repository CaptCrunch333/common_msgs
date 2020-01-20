#pragma once

#include "ROSUnit.hpp"
#include "geometry_msgs/Point.h"
#include "VelocityMsg.hpp"

class ROSUnit_VelocitySub : public ROSUnit
{
    public:

        ROSUnit_VelocitySub(std::string, ros::NodeHandle&);
        ~ROSUnit_VelocitySub();
        void receive_msg_data(DataMessage* t_msg) {};

    private:

        ros::Subscriber m_sub;

        static ROSUnit_VelocitySub* m_ptr;

        static void callback(const geometry_msgs::Point::ConstPtr&);
};