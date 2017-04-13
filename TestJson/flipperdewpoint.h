#ifndef FLIPPERDEWPOINT_H
#define FLIPPERDEWPOINT_H
#include <QCoreApplication>


class FlipperDewpoint
{
    // Private properties
    static QString WarehouseLocaltion;
    qint16 TemperatureCH1;
    qint16 TemperatureCH2;
    qint16 TemperatureCH3;

public:
    FlipperDewpoint();
};

#endif // FLIPPERDEWPOINT_H
