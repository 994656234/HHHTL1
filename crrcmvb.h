#ifndef CRRCMVB_H
#define CRRCMVB_H

#include <QList>
#include <QMap>
#include "PixyMvbLib.h"
#include "PixyTypes.h"


#define _CRRC_MVB_SUPERVISION_TIME 1

enum crrc_port_size
{
    uFCode1 = 1,
    uFCode2,
    uFCode3,
    uFCode4
};

enum crrc_port_type
{
    uSinkPort,
    uSourcePort,
    uVirtualPort
};

struct crrc_port
{
    unsigned short int port;
    enum crrc_port_size size;
    enum crrc_port_type type;
    unsigned short int cycle;

    crrc_port(unsigned short int port, enum crrc_port_size size, enum crrc_port_type type, unsigned short int cycle)
    {
        this->port = port;
        this->size = size;
        this->type = type;
        this->cycle = cycle;
    }
};

struct crrc_port_data
{
    PIXYMVB_Data data;
    unsigned short int cycle;

    crrc_port_data(unsigned short int cycle)
    {
        this->cycle = cycle;

        memset(data, 0, sizeof data);
    }
};

class CrrcMvb
{
private:
    CrrcMvb();
    static CrrcMvb *crrcMvb;
public:
    static CrrcMvb *getCrrcMvb();
    bool initializeMvb(int deviceId);
    bool setMvbOperation();
    bool setMvbStop();
    bool addPort(unsigned short int port, enum crrc_port_size size, enum crrc_port_type type, unsigned short int cycle);
    bool getBool(unsigned short int port, unsigned short int byteOffset, unsigned short int bitOffset);
    unsigned char getUnsignedChar(unsigned short int port, unsigned short int byteOffset);
    unsigned short int getUnsignedInt(unsigned short int port, unsigned short int byteOffset);
    signed short int getSignedInt(unsigned short int port, unsigned short int byteOffset);
    qint32 getSignedInt32(unsigned short int port, unsigned short int byteOffset);
    quint32 getUnsignedInt32(unsigned short int port, unsigned short int byteOffset);
    void setBool(unsigned short int port, unsigned short int byteOffset, unsigned short int bitOffset, bool signal);
    void setUnsignedChar(unsigned short int port, unsigned short int byteOffset, unsigned char signal);
    void setSignedChar(unsigned short int port, unsigned short int byteOffset, signed char signal);
    void setUnsignedInt(unsigned short int port, unsigned short int byteOffset, unsigned short int signal);
    void setSignedInt(unsigned short int port, unsigned short int byteOffset, signed short int signal);
    void setUnsignedInt32(unsigned short int port, unsigned short int byteOffset, quint32 signal);
    void setSignedInt32(unsigned short int port, unsigned short int byteOffset, qint32 signal);
    void synchronizeMvbData();
    unsigned short int getPortSum();
    unsigned short int getPortCycle(unsigned short int port);
    bool addSourcePort(unsigned short int port, enum crrc_port_size size, unsigned short int cycle);
    bool addSinkPort(unsigned short int port, enum crrc_port_size size, unsigned short int cycle);
    bool addVirtualPort(unsigned short int port, enum crrc_port_size size);

    bool isPortTimeout(unsigned short int port);
    QString getVersion();
    bool getportexist(unsigned short int port);

private:
    QList<struct crrc_port *> portConfigure;
    QMap<int, struct crrc_port_data *> portData;
};

#endif // CRRCMVB_H
