
#ifndef SRUP_LIB_SRUP_HUMAN_JOIN_RESP_H
#define SRUP_LIB_SRUP_HUMAN_JOIN_RESP_H

#include "SRUP_Observed_Base.h"

namespace SRUP
{
    static const uint8_t SRUP_MESSAGE_TYPE_HM_JOIN_RESP = 0x0C;
}

// The only thing that we need to do is define the constructor...

class SRUP_MSG_HUMAN_JOIN_RESP : public SRUP_MSG_OBS_BASE
{
    using SRUP_MSG_OBS_BASE::SRUP_MSG_OBS_BASE;

public:
    SRUP_MSG_HUMAN_JOIN_RESP();
};

#endif //SRUP_LIB_SRUP_HUMAN_JOIN_RESP_H
