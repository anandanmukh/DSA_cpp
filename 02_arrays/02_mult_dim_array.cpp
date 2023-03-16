#include <iostream>
using namespace std;

int main(){
    // One dimensional array
    int x_axis[5] = {1, 2, 3, 4, 5};

    // Two dimensional array
    int x_y_plane[5][5];
    x_y_plane[1][1] = 1;
    x_y_plane[2][2] = 2;
    x_y_plane[3][3] = 3;
    x_y_plane[4][4] = 4;
    x_y_plane[5][5] = 5;

    // Multi dimensional array
    int x_y_z_plane[5][5][5];
    x_y_z_plane[1][1][1] = 1;
    x_y_z_plane[2][2][2] = 2;
    x_y_z_plane[3][3][3] = 3;
    x_y_z_plane[4][4][4] = 4;
    x_y_z_plane[5][5][5] = 5;

    return 0;
}