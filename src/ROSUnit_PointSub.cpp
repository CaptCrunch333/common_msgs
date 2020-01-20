#include "ROSUnit_PointSub.hpp"

ROSUnit_PointSub* ROSUnit_PointSub::m_ptr;

ROSUnit_PointSub::ROSUnit_PointSub(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_sub = t_main_handler.subscribe(t_name, 1, callback);
    m_ptr = this;
}

ROSUnit_PointSub::~ROSUnit_PointSub()
{

}

void ROSUnit_PointSub::callback(const geometry_msgs::Point::ConstPtr& t_rec)
{
    //Change the below code to match the message you want to emit
    Vector3DMessage t_msg;
    Vector3D<float> t_vec;
    t_vec.x = t_rec->x;
    t_vec.y = t_rec->y;
    t_vec.z = t_rec->z;
    t_msg.setVector3DMessage(t_vec);
    m_ptr->emit_message((DataMessage*) &t_msg);
}