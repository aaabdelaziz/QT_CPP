#include <QCoreApplication>
#include <QDebug>
#include <iostream>

// #include <array>


void test(QString name){
    qInfo() << "the string name is " << name;
}


void test(int age){
    std::cout<< "the age is " << age;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    bool isOn = true;

    // Enum
    enum colors
    {
        red =100,
        green = 55,
        blue = 256
    };

    //Struct
    struct product
    {
        int weight;
        double cost;
        colors color;
    };

    // Create a color
    colors mycolor = colors::red;

    qInfo() << isOn;
    qInfo() << "My color is "
            << mycolor;

    // Create a product
    product laptop;

    laptop.weight = 100;
    laptop.cost = 552.53;
    laptop.color = colors::blue;


    qInfo() << "Laptop Weight" << laptop.weight;
    qInfo() << "Laptop cost" << laptop.cost;
    qInfo() << "Laptop color" << laptop.color;

    // Create an Array
    int ages[] = {23,15,24,62,44};
    ages[3] = 76;

    qInfo() << ages[0];
    qInfo() << ages[1];
    qInfo() << ages[2];
    qInfo() << ages[4];

    // Array in C++
    qInfo() << "Creating Car Array" ;

    std::array<int,5> cars;
    cars[2] = 4;
    cars[4] = 41;

    qInfo() << cars.at(0);
    qInfo() << cars.at(1);  // you can access array like this
    qInfo() << cars[2];
    qInfo() << cars[4];
    qInfo() << "has size of" << cars.size();
    qInfo() << "has size of" << sizeof(cars);    // 4Byte int * 5 elements = 20
    qInfo() << "The last element" << cars[cars.size()-1];

    //Revisit arithmatic operators
    //Revisit Assignement operators
    //Revisit Comparison operators
    //Revisit Loggical operators

    // Cout
    int age = 34;
    std::cout << age;
    std::cout << std::endl;
    std::cout << std::flush; // it tells the output stream hey, I'm done push it to the down stream.

    //Cin
    int input_age;

    qInfo() << "Please enter your age" ;
    std::cin >> input_age;
    std::cout << "You entereds "  << input_age ;

    //Cerr
    std::cerr << "Error Occured !";

    //QDebug
    qDebug() << "Debugging Message"; // Used by devepoplers to debug lines of code
    qCritical() << "Critical";
    //qFatal() << "Fatal Error";  // this will stop the code here
    qWarning() << "Take care age may be not valid !";

    // Flow Control
    if(age == 0 || age< 21 && age >= 100)
    {
        qFatal() << "Wrong Age entered";
    }
    else
        qInfo() << "Right Input age";

    qInfo() << "Done!";

    // Ternary operator
    //Switch
    //For loop
    //While
    //Do while

    // String Data type
    test(12);
    test(QString("Name"));


    return a.exec();
}
