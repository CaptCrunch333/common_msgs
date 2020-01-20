#pragma once

#include "ROSUnit.hpp"
#include "common_msgs/Point2D.h"
//Change the msg type to match your received msg
#include "Vector2DMsg.hpp"

class ROSUnit_Point2DSub : public ROSUnit
{
    public:

        ROSUnit_Point2DSub(std::string, ros::NodeHandle&);
        ~ROSUnit_Point2DSub();
        void receive_msg_data(DataMessage* t_msg) {};

    private:

        ros::Subscriber m_sub;
        static ROSUnit_Point2DSub* m_ptr;
        //Change the callback code to reflect your system
        static void callback(const common_msgs::Point2D::ConstPtr&);
};