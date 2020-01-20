#include "ROSUnit_VelocityPub.hpp"

ROSUnit_VelocityPub::ROSUnit_VelocityPub(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_pub = t_main_handler.advertise<geometry_msgs::Point>(t_name, 1, true);
}

ROSUnit_VelocityPub::~ROSUnit_VelocityPub()
{

}

void ROSUnit_VelocityPub::receive_msg_data(DataMessage* t_msg)
{
    if(t_msg->getType() == msg_type::VELOCITY)
    {
        VelocityMsg* t_pos = (VelocityMsg*) t_msg;
        geometry_msgs::Point t_point;
        t_point.x = t_pos->x;
        t_point.y = t_pos->y;
        t_point.z = t_pos->z;
        m_pub.publish(t_point);
    }
}