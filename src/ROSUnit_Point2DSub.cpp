#include "ROSUnit_Point2DSub.hpp"

ROSUnit_Point2DSub* ROSUnit_Point2DSub::m_ptr;

ROSUnit_Point2DSub::ROSUnit_Point2DSub(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_sub = t_main_handler.subscribe(t_name, 1, callback);
    m_ptr = this;
}

ROSUnit_Point2DSub::~ROSUnit_Point2DSub()
{

}

void ROSUnit_Point2DSub::callback(const common_msgs::Point2D::ConstPtr& t_rec)
{
    //Change the below code to match the message you want to emit
    Vector2DMsg t_msg;
    t_msg.data.x = t_rec->x;
    t_msg.data.y = t_rec->y;
    m_ptr->emit_message((DataMessage*) &t_msg);
}