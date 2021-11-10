// PhysicsEngine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PhysicsWorld.h"


using namespace std;
using namespace world;
using namespace vec;
using namespace obj;

PhysicsWorld physics;



int main()
{
    Object ball = Object(vec::Vector3::zero(), vec::Vector3(10, 100, 0), vec::Vector3::zero(), 1, "bob");
    physics.AddObject(&ball);

    while (true) {
        physics.Step(.002f);
    }
}

void Test() {
    //cout << ball->position << ", ";
    //cout << ball->velocity << ", ";
    //cout << ball->force << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file