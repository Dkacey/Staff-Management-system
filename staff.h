#ifndef STAFF_H
#define STAFF_H

#include <QString>
#include <QDate>

class Staff
{
public:
    enum StaffType {Permanent, PartTime, Contract};

    Staff();
    Staff(QString n, QDate d, StaffType t);

    void setName(QString n);
    void setDate(QDate d);
    void setType(StaffType t);

    QString getName() const;
    QDate getDate() const;
    StaffType getType() const;
    QString getTypeAsString() const;

private:
    //static const QStringList categories;

    QString name;
    QDate birthDate;
    StaffType type;
};

#endif // STAFF_H
