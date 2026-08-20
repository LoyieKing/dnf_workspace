#include "Packet_Server_Match_data.h"

Packet_Server_Match_data::Packet_Server_Match_data()
    : PacketHeader(0x1b67, 0xd),
      m_serverGroup(0),
      m_win(0),
      m_lose(0)
{
}

TEST_CLASS_SIZE(Packet_Server_Match_data, 13)
