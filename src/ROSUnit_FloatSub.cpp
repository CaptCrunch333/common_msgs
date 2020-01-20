#include "ROSUnit_FloatSub.hpp"

ROSUnit_FloatSub* ROSUnit_FloatSub::m_ptr;

ROSUnit_FloatSub::ROSUnit_FloatSub(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_sub = t_main_handler.subscribe(t_name, 1, callback);
    m_ptr = this;
}

ROSUnit_FloatSub::~ROSUnit_FloatSub()
{

}

void ROSUnit_FloatSub::callback(const std_msgs::Float32::ConstPtr& t_rec)
{
    //Change the below code to match the message you want to emit
    FloatMsg t_msg;
    t_msg.data = t_rec->data;
    m_ptr->emit_message((DataMessage*) &t_msg);
}