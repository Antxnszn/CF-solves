#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int halfPerimeter = N / 2;
    int maxArea = 0;
    
    for (int width = 1; width <= halfPerimeter / 2; ++width) {
        int length = halfPerimeter - width;
        maxArea = max(maxArea, length * width);
    }
    
    cout << maxArea << endl;
    return 0;
}
