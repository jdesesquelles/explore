#include <QString>
#include <QtTest>

class TestTest : public QObject
{
    Q_OBJECT

public:
    TestTest();

private Q_SLOTS:
    void testCase1_data();
    void testCase1();
};

TestTest::TestTest()
{
}

void TestTest::testCase1_data()
{
    QTest::addColumn<QString>("data");
    QTest::newRow("0") << QString();
}

void TestTest::testCase1()
{
    QFETCH(QString, data);
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"
