#include <iostream>

using namespace std;
void getScores(double* arr, int size);
void sortScores(double* arr, int size);
double calculateAverage(const double* arr, int size);

int main(){
    int numScores;
    cout << "How many test scores would you like to process: ";
    cin >> numScores;

    double *testScores = new double[numScores];

    getScores(testScores, numScores);
    sortScores(testScores, numScores);
    
    cout << "The sorted scores are: ";
    for (int i = 0; i < numScores; i++){
        cout << testScores[i] << " ";
    }
    cout << endl;
    cout << "The average score is: " << calculateAverage(testScores, numScores) << endl;

    delete [] testScores;
    
    testScores = nullptr;

}

void getScores(double* arr, int size){
    for (int i = 0; i < size; i++){
        cout << "Enter the score for Student #" << i + 1 << ": ";
        cin >> arr[i];
        if (arr[i] < 0){
            cout << "Invalid test score" << endl;
            cout << "Enter the score for Student #" << i + 1 << ": ";
            cin >> arr[i];
        }
    }
};

void sortScores(double* arr, int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (arr[j+1] < arr[j]){
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
        }
    }
}
};

double calculateAverage(const double* arr, int size){
    double sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }

    return (sum/size);
};