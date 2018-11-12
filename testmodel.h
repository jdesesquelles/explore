#ifndef TESTMODEL_H
#define TESTMODEL_H

#include <QObject>

class testModel : public QObject
{
    Q_OBJECT
public:
    explicit testModel(QObject *parent = 0);

signals:

public slots:
};

#endif // TESTMODEL_H
