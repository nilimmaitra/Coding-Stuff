#include <iostream>
#include <chrono>
#include <thread>
using namespace std;


int main() {
    int minutes, seconds;
    cout << "Enter the countdown time in minutes: ";
    cin >> minutes;
    cout << "Enter the countdown time in seconds: ";
    cin >> seconds;
    int time = (minutes * 60) + seconds; // convert minutes to seconds
    cout << "Countdown starting...\n";
    for (int i = time; i > 0; i--) {
        cout << i / 60 << " minutes " << i % 60 << " seconds remaining\n";
        std::this_thread::sleep_for(std::chrono::seconds(1)); // delay for 1 second
    }
    cout << "Time's up!\n";
    return 0;
}
