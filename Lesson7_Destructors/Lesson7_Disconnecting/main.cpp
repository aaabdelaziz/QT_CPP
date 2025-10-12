#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QTextStream>
// #include <iostream>
#include "radio.h"
#include "station.h"

// using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Radio boombox;
    Station* channels[3];

    // Create some stations
    channels[0] = new Station(&boombox,94,"Rock and Roll");
    channels[1] = new Station(&boombox,87,"Sing");
    channels[2] = new Station(&boombox,104,"News");

    // Connect the Radio to quit signal, if it's received, it will close the whole application
    // Here we need to add thread to close using Qt::QueuedConnection, otherwise it'll be flaw
    boombox.connect(&boombox, &Radio::quit, &a, &QCoreApplication::quit,Qt::QueuedConnection);


    do {

        qInfo() << " Enter on, off, test or quit";
        QTextStream qtin(stdin);
        QString line = qtin.readLine().trimmed().toUpper();


        if (line  == "ON")
        {
            qInfo() << "Turning the Radion ON";

            for( int i=0; i<3; i++)
            {
                Station* channel = channels[i];
                boombox.connect(channel, &Station::send, &boombox, &Radio::listen);
            }
            qInfo() << "The Radio is on";

        }


        if (line  == "OFF")
        {
            qInfo() << "Turning the Radion OFF";

            for( int i=0; i<3; i++)
            {
                Station* channel = channels[i];
                boombox.disconnect(channel, &Station::send, &boombox, &Radio::listen);
            }

            qInfo() << "The Radio is off";

        }


        if (line  == "TEST")
        {
            qInfo() << "Testing the Radion ..";

            for( int i=0; i<3; i++)
            {
                Station* channel = channels[i];
                channel->broadcast("BroadCasting Live now ! ");
            }

            qInfo() << "Testing completed";

        }

        if (line  == "QUIT")
        {
            qInfo() << "Quitting !";

            // Emitting quit signal, and any one connected or triggered by quit signal, it will execute
            emit boombox.quit();
            break;
        }


    }
    while(true);

    return a.exec();
}

