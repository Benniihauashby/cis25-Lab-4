#include <iostream>



void findMinAndMax(const int arr[], int size, int* min, int* max) { 
    int i = 1;
    while (i < size) {
        if (arr[i] < *min) {*min = arr[i];}
        else if (arr[i] > * max) {*max = arr[i];}
        i = i + 1;
    }

}


// Example Output:
// The minimum value is: -10
// The maximum value is: 99
int main() {
    int numbers[] = {23, 5, 67, -2, 45, 87, 1, 99, 34, -10};
    int min = numbers[0];
    int max = numbers[0];
    findMinAndMax(numbers, 10, &min, &max);
    std::cout << "The minimum value is: " << min << std::endl;
    std::cout << "The maximum value is: " << max << std::endl;
}


            
    

// std::cout << "The minimum value is: " << min << std::endl;
// std::cout << "The maximum value is: " << max << std::endl;
    

