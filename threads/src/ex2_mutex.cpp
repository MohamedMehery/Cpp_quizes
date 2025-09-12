#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

using namespace std;

mutex mtx; // Global mutex for shared resource protection

void sensor_task(int sensor_id, string* data_buffer) {
    for (int i = 0; i < 3; ++i) {
        // Simulate sensor reading
        this_thread::sleep_for(chrono::milliseconds(300));
        
        // Critical section - protect shared buffer
        lock_guard<mutex> lock(mtx);
        *data_buffer = "Sensor " + to_string(sensor_id) + " reading: " + to_string(rand() % 100);
        cout << "Sensor " << sensor_id << " wrote: " << *data_buffer << endl;
    }
}

int main() {
    string shared_buffer;
    thread t1(sensor_task, 1, &shared_buffer);
    thread t2(sensor_task, 2, &shared_buffer);
    
    t1.join();
    t2.join();
    
    return 0;
}