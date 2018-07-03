#include "database.h"

Database::Database()
{
    HMIPosition = MainGetDefaultPara::getInt("/Position/HMI");
}
