#include "Packet_Cube_Statistic.h"
#include "Packet_Value_Statistic.h"
#include "Packet_Fatigue_Battery_Money_Statistic.h"
#include "Packet_Circulation_Statistic.h"
#include "Packet_Secret_Shop_Statistic.h"
#include "Packet_Client_Spec_Statistic.h"
#include "Packet_File_Statistic.h"
#include "Packet_Fair_Pvp_Ping_Statistic.h"
#include "Packet_Reason_Crash_Down_Info.h"
#include "Packet_Randombox_statistic.h"

int main()
{
    Packet_Cube_Statistic pCube;
    pCube.m_channel = 1;
    pCube.m_level = 2;
    pCube.m_itemIndex = 3;
    pCube.m_itemCount = 4;
    pCube.m_type = 5;

    Packet_Value_Statistic pValue;
    pValue.m_level = 6;
    pValue.m_data[0] = 7;
    pValue.m_data[0x1e - 1] = 8;

    Packet_Fatigue_Battery_Money_Statistic pFatigue;
    pFatigue.m_serverGroup = 9;
    pFatigue.m_money = 10;
    pFatigue.m_buff = 11;

    Packet_Circulation_Statistic pCirc;
    pCirc.m_level = 12;
    pCirc.m_data[0] = 13;
    pCirc.m_data[0x30 - 1] = 14;
    pCirc.m_channel = 15;

    Packet_Secret_Shop_Statistic pShop;
    pShop.m_count = 16;
    pShop.m_shopIdx = 17;
    pShop.m_items[0] = 18;
    pShop.m_items[0xfa0 - 1] = 19;

    Packet_Client_Spec_Statistic pSpec;
    pSpec.m_type = 20;
    pSpec.m_count = 21;
    pSpec.m_errorCode = 22;
    pSpec.m_errorLine = 23;
    pSpec.m_spec[0] = 24;
    pSpec.m_spec[0xbf4 - 1] = 25;

    Packet_File_Statistic pFile;
    pFile.m_fileName[0] = 'a';
    pFile.m_fileName[0x100 - 1] = 0;
    pFile.m_fileData[0] = 'b';
    pFile.m_fileData[0x800 - 1] = 0;

    Packet_Fair_Pvp_Ping_Statistic pPing;
    pPing.m_badPing = 26;
    pPing.m_total = 27;

    Packet_Reason_Crash_Down_Info pCrash;
    pCrash.m_occTime = 28;
    pCrash.m_channel = 29;
    pCrash.m_reason = 30;
    pCrash.m_cnt = 31;

    Packet_Randombox_statistic pBox;
    pBox.m_boxKind = 32;
    pBox.m_actionKind = 33;

    (void)pCube; (void)pValue; (void)pFatigue; (void)pCirc; (void)pShop;
    (void)pSpec; (void)pFile; (void)pPing; (void)pCrash; (void)pBox;
    return 0;
}
