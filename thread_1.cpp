#include "thread_1.h"

Thread_1::Thread_1(QObject *parent):
QThread(parent)
{
}

void Thread_1::run()
{
   static int count2=0;

    while(count2!=1000)
    {
        count2++;
        sleep(1);

        emit finish_count(count2);
    }

}
