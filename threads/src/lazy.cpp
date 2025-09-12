#include <iostream>
#include <thread>

using namespace std;

void nap_and_say()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(500)); //nap for 500ms
    cout<<"Yawm I wakeup"<< endl;
}

int main(void)
{
    cout << "starting new thread!" << endl;

    std::thread t(nap_and_say); //create thread
    t.join(); //wait for thread to finish
    std::cout << "Main: Both of us are done. Nap again?" << endl;
    return 0;
}