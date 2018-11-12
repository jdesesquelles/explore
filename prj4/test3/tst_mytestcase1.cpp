#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class mytestcase1 : public QObject
{
    Q_OBJECT

public:
    mytestcase1();
    ~mytestcase1();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

mytestcase1::mytestcase1()
{

}

mytestcase1::~mytestcase1()
{

}

void mytestcase1::initTestCase()
{

}

void mytestcase1::cleanupTestCase()
{

}

void mytestcase1::test_case1()
{

}

QTEST_MAIN(mytestcase1)

#include "tst_mytestcase1.moc"
