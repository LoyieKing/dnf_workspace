#include "BlueMarblePOD.h"

BuffInfo::BuffInfo()
    : m_exp(0), m_gold(0), m_drop(0)
{
}

void BuffInfo::reset()
{
    m_exp = 0;
    m_gold = 0;
    m_drop = 0;
}

