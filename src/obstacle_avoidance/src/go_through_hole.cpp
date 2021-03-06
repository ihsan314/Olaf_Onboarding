/*
 * Created By: Ihsan Olawale
 * Created On: February 16th, 2019
 * Description: Uses LaserScan data of a setup of cones to move Olaf the robot
 *              through the gap in the cones
 */

#include <GoThroughHole.h>


int main(int argc, char **argv){
    // Setup your ROS node
    std::string node_name = "go_through_hole";

    // Create an instance of your class
    GoThroughHole go_through_hole(argc, argv, node_name);

    // Start up ros. This will continue to run until the node is killed
    ros::spin();

    // Once the node stops, return 0
    return 0;
}
