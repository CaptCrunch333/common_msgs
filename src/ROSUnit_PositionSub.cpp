#include "ROSUnit_PositionSub.hpp"

ROSUnit_PositionSub* ROSUnit_PositionSub::m_ptr;

ROSUnit_PositionSub::ROSUnit_PositionSub(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_sub = t_main_handler.subscribe(t_name, 1, callback);
    m_ptr = this;
}

ROSUnit_PositionSub::~ROSUnit_PositionSub()
{

}

void ROSUnit_PositionSub::callback(const geometry_msgs::Point::ConstPtr& t_rec)
{
    PositionMsg t_pos;
    t_pos.x = t_rec->x;
    t_pos.y = t_rec->y;
    t_pos.z = t_rec->z;
    m_ptr->emit_message((DataMessage*) &t_pos);
}