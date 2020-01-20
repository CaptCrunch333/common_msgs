#include "ROSUnit_HeadingPub.hpp"

ROSUnit_HeadingPub::ROSUnit_HeadingPub(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_pub = t_main_handler.advertise<std_msgs::Float32>(t_name, 1, true);
}

ROSUnit_HeadingPub::~ROSUnit_HeadingPub()
{

}

void ROSUnit_HeadingPub::receive_msg_data(DataMessage* t_msg)
{
    if(t_msg->getType() == msg_type::HEADING)
    {
        std_msgs::Float32 t_point;
        t_point.data = ((HeadingMsg*) t_msg)->yaw;
        m_pub.publish(t_point);
    }
}