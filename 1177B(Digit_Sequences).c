// Codeforces 1177B - Digit Sequences (Hard Editon).

#include <stdio.h>
#include <math.h>

int main() {
    long long int k;
    scanf("%lld", &k);
    if(k <= 9)
    {
        printf("%lld", k);
    }
    else
    {
        long long length;
        long long places_occupied = 0;
        long long numbers_passed = 0;
        int i;
        long long temp;
        long long digits_string = 0;
        long  long numbers_required = 0;
        long long answer;
        // A mathematical approach to find the length of a integer number below.
        length = floor(log10(abs(k))) + 1; // Number of digits in k is calculated as length firstly.

        // Start a loop below to calculate how many places can be occupied by whole numbers.
        for(i = 0 ; i < length; i ++)
        {
            digits_string += pow(10, i); // to produce a number of nth "1" digits. Example: 111,1111 etc.
            places_occupied += (9 * pow(10, i))*(i + 1);
            temp = places_occupied + (9 * pow(10, i + 1))*(i + 2); // Predict the result of next iteration.
            if(temp > k)
            {
                length = i + 2; // Change the value of length.
                break;
            }
        }
        // Numbers which are already used to occupy the certain number of places got previously.
        numbers_passed = 9 * digits_string;
        long long places_left = k - places_occupied;

        // Final calculation part to determine what is the last number required to satisfy "k" number of places in a string.
        if ((places_left % length) == 0)
        {
            numbers_required = floor(places_left / length);
            answer = numbers_required + numbers_passed;
            printf("%lld", (answer % 10));
        }
        else
        {
            numbers_required = floor(places_left / length) + 1;
            answer = numbers_required + numbers_passed;
            int answer_len = floor(log10(abs(answer))) + 1;
            int postion = answer_len - ((int)(numbers_required * length) - places_left);
            int counter = answer_len;
            while(answer != 0)
            {
                if (counter == postion)
                {
                    printf("%lld", (answer % 10));
                    break;
                }
                answer = floor(answer / 10);
                counter --;
            }
        }
    }
    return 0;
}
