#pragma once

#include "ROSUnit.hpp"
#include "geometry_msgs/Point.h"
#include "PositionMsg.hpp"

class ROSUnit_PositionSub : public ROSUnit
{
    public:

        ROSUnit_PositionSub(std::string, ros::NodeHandle&);
        ~ROSUnit_PositionSub();
        void receive_msg_data(DataMessage* t_msg) {};

    private:

        ros::Subscriber m_sub;

        static ROSUnit_PositionSub* m_ptr;

        static void callback(const geometry_msgs::Point::ConstPtr&);
};