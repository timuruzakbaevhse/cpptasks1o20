#define _USE_MATH_DEFINES//для pi

#include <cmath>//для pi и взятия корня
#include <iostream>
#include <string>// для первода int в string
#include <ctime>// для рандомизации
#include <cstdlib>// для рандомизации

using namespace std;

float task_one(float b1,float b2, float h)
{
    float answer;
    answer = h * ((b1 + b2) / 2);//формула трапеции
    return answer;
}

float task_two_space(float r)
{
    float answer;
    answer = M_PI * r * r;//формула площади
    return answer;
}
float task_two_len(float r)
{
    float answer;
    answer = M_PI * r * 2;//формула длины
    return answer;
}

float task_three_space(float a, float b)
{
    float answer;
    answer = a*b/2;//площадь треугольника
    return answer;
}
float task_three_g(float a, float b)
{
    float answer;
    answer = sqrt(a*a + b*b);//корень sqrt() из суммы кв. катетов
    return answer;
}

int task_four()
{
    int num;
    while (true)
    {
        cout << "Enter number >>" << endl;
        cin >> num;
        if (num > 999 && num < 10000)//проверка на 4значность
        {
            break;
        }
        else
        {
            cout << "Wrong number value" << endl;
            continue;
        }
    }
    int sum = 0;
    while (num >= 10)
    {
        sum += num % 10;//прибавить остаток от деления
        num /= 10;//деление нацело
    }
    sum += num;
    return sum;
}
void task_nine(){
    int time;
    cout << "Enter seconds >>" << endl;
    cin >> time;
    int hours = time / 3600;
    int mins = (time % 3600) / 60;//подсчет минут без учета часов
    cout << hours << " hours " << mins << " min's passed" << endl;
}
bool task_ten(int a,int b, int c)
{
    bool answer = false;
    if((a==b)||(a==c)||(b==c))//проверка равнобедренность
    {
        answer = true;
    }
    return answer;
}

void task_eleven(){
    float num;
    cout << "Enter sum of purchase >>" << endl;
    cin >> num;
    if (num > 1000) {
        float dPrice = num * 0.9;//цена с 10% скидкой
        cout << "Price with discount is >> " << dPrice << endl;
    }
    else cout << "No discount!!! Price is >>" << num <<endl;
}

void task_twelve()
{
    cout << "Enter weight >>" << endl;
    int w, h;
    cin >> w;
    cout << "Enter height >>" << endl;
    cin >> h;
    int perfect_w = (h - 100);//нахождение идеального веса по формуле
    if(w > perfect_w)
    {
        cout << "Lose weight!!!" << endl;
    }
    if(w < perfect_w)
    {
        cout << "Get some weight!!!" << endl;
    }
    if (w == perfect_w)
    {
        cout << "Perfection." << endl;
    }
}

void task_thirteen(){
    srand(time(0));
    int a,b;
    a = (rand() % 10) ;//рандомизация
    b = (rand() % 10) ;//рандомизация
    cout << "Random numbers generated between 1 and 9:" << a << " and "<< b << endl;
    cout << "Please input multiplication >>" << endl;
    int mult;
    cin >> mult;
    if (mult == a * b) cout << "Correct." << endl;
    else cout << "Incorrect."<< endl;

}

void task_sixteen()
{
    int num;
    while (true)
    {
        cout << "Enter number >>" << endl;
        cin >> num;
        if (num > 99999 && num < 1000000)//проверка на 6тизначность
        {
            break;
        }
        else
        {
            cout << "Wrong number value" << endl;
            continue;
        }
    }
    int sum1 = 0;
    int i = 0;
    while (num >= 10)//первые 3 цифры
    {
        if (i == 3)break;
        sum1 += num % 10;
        num /= 10;
        i++;
    }
    int sum2 = 0;
    while (num >= 10)// остальные 3 цифры
    {
        sum2 += num % 10;
        num /= 10;
        i++;
    }
    sum2 += num;
    if (sum1 == sum2)cout << "Num is happy :)" << endl;
    else cout << "Num is not happy :(" << endl;
}

void task_seventeen (){
    int num;
    cout << "Enter number from 1 to 99 >>" << endl;
    cin >> num;
    if (num > 0 && num < 100) {
        string kop;
        kop = to_string(num) + " kopeika.";// перевод int в строку
        cout << kop << endl;
    }
    else cout << num << endl;
}

void task_twenty(){
    int a, b, c, d;
    cout << "Enter a >>" << endl;
    cin >> a;

    cout << "Enter b >>" << endl;
    cin >> b;

    cout << "Enter c >>" << endl;
    cin >> c;

    cout << "Enter d >>" << endl;
    cin >> d;

    int space1 = a * b;
    int space2 = c * d;
    if(space1 <= space2) cout << "Rectangle_1 can be placed into Rectangle_2" << endl;
    else cout << "Rectangle_1 cannot be placed into Rectangle_2" << endl;
}

int main()
{
    float b1 = 3;
    float b2 = 5;
    float h = 10;
    float answer1 = task_one(b1,b2,h);
    cout << "Trapezoid space is >>" << answer1 << endl;

    float r = 4;
    float answer2_1 = task_two_space(r);
    float answer2_2 = task_two_len(r);
    cout << "Circle space is >>" << answer2_1 << endl;
    cout << "Circle length is >>" << answer2_2 << endl;

    float kat1 = 2;
    float kat2 = 2;
    float answer3_1 = task_three_space(kat1, kat2);
    float answer3_2 = task_three_g(kat1, kat2);
    cout << "Triangle space is >>" << answer3_1 << endl;
    cout << "Gip is >>" << answer3_2 << endl;

    int sum = task_four();
    cout << "The sum is >>" << sum << endl;

    task_nine();

    int side1 = 10;
    int side2 = 6;
    int side3 = 6;
    if(task_ten(side1,side2,side3)==true)
    {
        cout << "Triangle is isosceles" << endl;
    }
    else {
        cout << "Triangle is not isosceles" << endl;
    }
    task_eleven();

    task_thirteen();

    task_twelve();

    task_sixteen();

    task_seventeen();

    task_twenty();

    return 0;
}
