#include <QCoreApplication>
#include <QDebug>
#include "test.h"



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Create pointer to class Test using unique pointer for automatic memory management
    std::unique_ptr<Test> t(new Test());
    t->doSomething();

    //Pointer will automaticcally delete at the end

    // return a.exec();
    /*  Note for this line return a.exec();   So, we need to comment it
        the program enters Qt's event loop and waits for events.
        The std::unique_ptr<Test> goes out of scope and the destructor is called,
        but the debug output gets buffered and may not be flushed to the console
        before the application exits.
    */

    /*
        Another solution to force the end of scope can be like:
        {
            std::unique_ptr<Test> t(new Test());
            t->doSomething();
            // Force scope end here - destructor will be called
        }

        // Process any pending events and flush output
        QCoreApplication::processEvents();
        std::cout.flush();
        std::cerr.flush();


    */
    return 0;
}
