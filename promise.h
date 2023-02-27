#include <future>
#include <thread>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// The thread function
void thread_function(std::promise<int> * p, vector<int> array) {
    p->set_value(std::accumulate(array.begin(), array.end(), 0));
}
