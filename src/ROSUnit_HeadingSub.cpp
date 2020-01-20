#include "ROSUnit_HeadingSub.hpp"

ROSUnit_HeadingSub* ROSUnit_HeadingSub::m_ptr;

ROSUnit_HeadingSub::ROSUnit_HeadingSub(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_sub = t_main_handler.subscribe(t_name, 1, callback);
    m_ptr = this;
}

ROSUnit_HeadingSub::~ROSUnit_HeadingSub()
{

}

void ROSUnit_HeadingSub::callback(const std_msgs::Float32::ConstPtr& t_rec)
{
    HeadingMsg t_pos;
    t_pos.yaw = t_rec->data;
    m_ptr->emit_message((DataMessage*) &t_pos);
}