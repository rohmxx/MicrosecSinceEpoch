#include <iostream>
#include <chrono>

using namespace std;

double timeSinceEpochMicrosec()
{
    using namespace chrono;
    return static_cast<double>(duration_cast<microseconds>(system_clock::now().time_since_epoch()).count()) / 1000000;
}

int main()
{
    while (1)
    {
        double us_epoch = (timeSinceEpochMicrosec());
        cout << fixed << us_epoch << endl;
    }

    return 0;
}
