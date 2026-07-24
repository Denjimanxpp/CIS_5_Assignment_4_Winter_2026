#include <iostream>
#include <iomanip>

using namespace std;

int calculateSum(const int scores[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += scores[i];
    }

    return sum;
}

double calculateAverage(int sum, int size)
{
    return static_cast<double>(sum) / size;
}

void addBonus(int scores[], int size, int bonus)
{
    for (int i = 0; i < size; i++)
    {
        scores[i] += bonus;
    }
}

int findMinimum(const int* scores, int size)
{
    int minimum = scores[0];

    for (int i = 1; i < size; i++)
    {
        if (scores[i] < minimum)
        {
            minimum = scores[i];
        }
    }

    return minimum;
}

int countHighPerformers(const int scores[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (scores[i] >= 80)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    const int SIZE = 10;
    int ary[SIZE] = {75, 88, 62, 95, 50, 82, 70, 91, 45, 78};

    cout << "Original scores: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << ary[i] << " ";
    }
    cout << endl;

    int sum = calculateSum(ary, SIZE);
    double average = calculateAverage(sum, SIZE);

    cout << "Sum: " << sum << endl;
    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;

    addBonus(ary, SIZE, 10);

    cout << "Scores after +10 bonus: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << ary[i] << " ";
    }
    cout << endl;

    cout << "Minimum score: " << findMinimum(ary, SIZE) << endl;
    cout << "High performers (>=80): "
         << countHighPerformers(ary, SIZE) << endl;

    return 0;
}
