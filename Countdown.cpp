#include <iostream>
#include <thread>
#include <chrono>

class Timing {
private:
    int a;
public:
    Timing(int d) : a(d) {}
    void start() {
        while (a > 0) {
            std::cout << "Time remaining: " << a << " seconds" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
            --a;
        }
        std::cout << "Time's up!" << std::endl;
    }
};

int main() {
    int seconds;
    std::cout << "Enter countdown duration in seconds: ";
    std::cin >> seconds;
    Timing timer(seconds);
    timer.start();
    return 0;
}
