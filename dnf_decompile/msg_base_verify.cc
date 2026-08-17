// MSG_BASE 13 字节基体还原验证（第 2 轮深化）。
// 结论：+0x00..+0x0c 无字段级证据（穷举 574 read / 126 check_error / 542
// process + Ghidra 语料 1496 处 MSG_BASE 引用），保留 m_data[13] 占位。
// 本文件验证：sizeof 链（13/13/4/4）与派生负载偏移（请求 +0x0d、响应 +0x04）。
//
// 编译：
//   TC=/home/loyieking/dnf_workspace/dnf_decompile/toolchains/c6root/usr/bin/g++
//   export GCC_EXEC_PREFIX=/home/loyieking/dnf_workspace/dnf_decompile/toolchains/c6root/usr/libexec/gcc/
//   export LD_LIBRARY_PATH=/home/loyieking/dnf_workspace/dnf_decompile/toolchains/c6root/usr/lib64:/home/loyieking/dnf_workspace/dnf_decompile/toolchains/c6root/usr/lib
//   $TC -m32 -O0 -I.../source/shared/packet/include -I.../source/shared/common/include \
//       -Wno-invalid-offsetof -c msg_base_verify.cc -o msg_base_verify.o
//   （-Wno-invalid-offsetof：c6root g++ 4.4 对"带构造函数的 pack(1) 类"用
//    offsetof 的已知无害告警；断言仍为编译期求值，任一失败即编译报错。）

#include <stddef.h>

#include "CMDPacketStruct.h"

using namespace CMDPacketStruct;

// sizeof 断言（等价于头内 TEST_CLASS_SIZE，这里再显式做一遍）
typedef char chk_msg_base_size[(sizeof(MSG_BASE) == 13) ? 1 : -1];
typedef char chk_stbasereq_size[(sizeof(STBaseRequest) == 13) ? 1 : -1];
typedef char chk_parambase_size[(sizeof(ParamBase) == 4) ? 1 : -1];
typedef char chk_stbaseresp_size[(sizeof(STBaseResponse) == 4) ? 1 : -1];

// 派生请求负载从 +0x0d 开始
typedef char chk_req_payload0d[((int)offsetof(_STReqEventDungeonDestoryObject, m_field0D) == 0x0d) ? 1 : -1];
typedef char chk_req_payload0e[((int)offsetof(_STReqEventDungeonDestoryObject, m_field0E) == 0x0e) ? 1 : -1];
typedef char chk_req_advancealtar10[((int)offsetof(_ReqAdvanceAltarBuyItem, m_nBuyIndex) == 0x10) ? 1 : -1];

// 派生响应负载从 +0x04 开始（vptr 之后）
typedef char chk_res_payload04[((int)offsetof(_STResEventDungeonDestoryObject, m_field04) == 0x04) ? 1 : -1];
typedef char chk_res_advancealtar04[((int)offsetof(_ResAdvanceAltarBuyItem, m_nErrorCode) == 0x04) ? 1 : -1];

int main()
{
    MSG_BASE msg;
    STBaseRequest req;
    ParamBase parambase;
    STBaseResponse resp;

    // MSG_BASE 整体按 13 字节原样使用（等价二进制 get_binary(pkt,&msg,0xd)）
    msg.m_data[0] = 0;
    msg.m_data[12] = 0xff;
    req.m_data[0] = msg.m_data[12];

    _STReqEventDungeonDestoryObject reqDungeon;
    reqDungeon.m_field0D = 1;
    reqDungeon.m_field0E = 2;
    reqDungeon.m_field10[0] = 3;

    _STResEventDungeonDestoryObject resDungeon;
    resDungeon.m_field04 = reqDungeon.m_field0E;

    _SetSlotData slot;
    slot.m_nSlotType = 1;
    slot.m_bySlotIndex = 2;
    slot.m_nItemId = 3;

    _ReqAdvanceAltarBuyItem reqBuy;
    reqBuy.m_nBuyIndex = 4;
    reqBuy.m_nShopType = 5;
    reqBuy.m_nLevel = 6;
    reqBuy.m_wLevelFrom = 7;
    reqBuy.m_wLevelTo = 8;

    _ResAdvanceAltarBuyItem resBuy;
    resBuy.m_nErrorCode = 0;
    resBuy.m_nTotalCost = reqBuy.m_wLevelTo - reqBuy.m_wLevelFrom;

    // ParamBase/STBaseResponse 仅 vptr（sizeof 4，无 m_data 成员）
    (void)parambase;
    (void)resp;

    return (int)msg.m_data[12] + (int)req.m_data[0] + reqDungeon.m_field0D +
           resDungeon.m_field04 + slot.m_nSlotType + reqBuy.m_nBuyIndex +
           resBuy.m_nErrorCode;
}
