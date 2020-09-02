#ifndef THREAD_1_H
#define THREAD_1_H
#include <QThread>

class Thread_1 : public QThread
{
    Q_OBJECT
public:
    explicit Thread_1(QObject *parent=0);
private:
    void run() override;
signals:
    void finish_count(const int value);

};
#endif // THREAD_1_H
