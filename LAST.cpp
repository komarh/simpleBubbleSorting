/*
LAST Homework Program! : Sweet Dreams Confectionery
Hubert Komar
11-30-2020
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    const int SIZE = 10; 
    string cake[SIZE] = { "Red Velvet Supreme", "Death by Chocolate", "Molten Lava Chocolate", "Unicorn Rainbow Cake", "Warm Pumpkin Spice",   "Blueberry Cheesecake", "English Pudding Cake", "Salted Turtle Cake", "Hot Fudge Sundae", "Funfetti Sprinkles" }; 
    float price[SIZE] = { 29.95, 44.95, 49.95, 24.95, 29.95, 34.95, 29.95, 39.95, 24.95, 19.95 };
    int orderTime[SIZE] = { 1, 2, 2, 1, 1, 2, 2, 2, 1, 1 };
    
    //calculate the average price
    float sum = 0;
    float avg = 0.0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += price[i];
    }
    avg = sum / SIZE;
   

    //variables for bubble sort algorithm
    bool made_a_swap;
    string tempCake;
    float tempPrice;
    int tempOrderTime;

    do 
    {
        made_a_swap = false;
        for (int j = 0; j < SIZE - 1; j++) 
        {
            //if out of order, swap them
            if (price[j] > price[j + 1]) 
            {
                tempPrice = price[j]; 
                price[j] = price[j + 1]; 
                price[j + 1] = tempPrice;

                //swap city names
                tempCake = cake[j];
                cake[j] = cake[j + 1];
                cake[j + 1] = tempCake;

                //swap order times
                tempOrderTime = orderTime[j];
                orderTime[j] = orderTime[j + 1];
                orderTime[j + 1] = tempOrderTime;

                made_a_swap = true;
            }
           
        }

    } while (made_a_swap == true);

    cout << left << setw(30) << "CAKE" << setw(8) << "PRICE" << "ORDER TIME (DAYS)" << endl 
        << setw(30) << "----" << setw(8) << "-----" << "-----------------" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(30) << cake[i] << "$" << setw(7) << price[i] << orderTime[i] << endl;
               
    }

    cout << "\n\nAverage cost of cake at Sweet Dreams: $" << avg << endl
        << "Thank you for your order. Enjoy!";


}

