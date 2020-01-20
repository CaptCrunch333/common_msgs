#pragma once

#include "ROSUnit.hpp"
#include "geometry_msgs/Point.h"
//Change the msg type to match your received msg
#include "Vector3DMessage.hpp"

class ROSUnit_PointSub : public ROSUnit
{
    public:

        ROSUnit_PointSub(std::string, ros::NodeHandle&);
        ~ROSUnit_PointSub();
        void receive_msg_data(DataMessage* t_msg) {};

    private:

        ros::Subscriber m_sub;
        static ROSUnit_PointSub* m_ptr;
        //Change the callback code to reflect your system
        static void callback(const geometry_msgs::Point::ConstPtr&);
};