#include <QString>
#include <QtTest>

class templatetest : public QObject
{
    Q_OBJECT

public:
    templatetest();

private Q_SLOTS:
    void testCase1();
};

templatetest::templatetest()
{
}

void templatetest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(templatetest)

#include "tst_templatetest.moc"
