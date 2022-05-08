#include "libs.h"
#include "promise.h"

using namespace std;

vector<int> a {1, 2, 3, 4, 5};

int main(int, char**) {
    rotate_example(a);
    std::promise<int> p;
    std::future<int> f = p.get_future();
    std::thread t(&thread_function, &p, a);
    t.join();
    std::cout << f.get() << std::endl;
}
