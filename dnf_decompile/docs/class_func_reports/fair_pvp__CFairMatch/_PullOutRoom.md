# _PullOutRoom

`_ZN8fair_pvp10CFairMatch12_PullOutRoomEP5CUserP8PvP_Roomi`

`fair_pvp::CFairMatch::_PullOutRoom(CUser*, PvP_Room*, int)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x085633ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085633ce  _ZN8fair_pvp10CFairMatch12_PullOutRoomEP5CUserP8PvP_Roomi
#           fair_pvp::CFairMatch::_PullOutRoom(CUser*, PvP_Room*, int)
# range [0x085633ce, 0x085634bb]
085633ce +0x00:  push   %ebp
085633cf +0x01:  mov    %esp,%ebp
085633d1 +0x03:  push   %edi
085633d2 +0x04:  push   %esi
085633d3 +0x05:  push   %ebx
085633d4 +0x06:  sub    $0x4c,%esp
085633d7 +0x09:  mov    0x10(%ebp),%eax
085633da +0x0c:  mov    %eax,(%esp)
085633dd +0x0f:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
085633e2 +0x14:  mov    %eax,-0x2c(%ebp)
085633e5 +0x17:  mov    0x10(%ebp),%eax
085633e8 +0x1a:  mov    %eax,(%esp)
085633eb +0x1d:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085633f0 +0x22:  mov    %eax,%edi
085633f2 +0x24:  mov    0xc(%ebp),%eax
085633f5 +0x27:  mov    %eax,(%esp)
085633f8 +0x2a:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085633fd +0x2f:  mov    %eax,%esi
085633ff +0x31:  mov    0xc(%ebp),%eax
08563402 +0x34:  mov    %eax,(%esp)
08563405 +0x37:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
0856340a +0x3c:  mov    %eax,%ebx
0856340c +0x3e:  movl   $0x0,0x10(%esp)
08563414 +0x46:  movl   $0x0,0xc(%esp)
0856341c +0x4e:  movl   $0xb5a,0x8(%esp)
08563424 +0x56:  movl   $&_ZZN8fair_pvp10CFairMatch12_PullOutRoomEP5CUserP8PvP_RoomiE19__PRETTY_FUNCTION__,0x4(%esp)
0856342c +0x5e:  lea    -0x28(%ebp),%eax
0856342f +0x61:  mov    %eax,(%esp)
08563432 +0x64:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
08563437 +0x69:  mov    0x14(%ebp),%eax
0856343a +0x6c:  mov    %eax,0x18(%esp)
0856343e +0x70:  mov    -0x2c(%ebp),%eax
08563441 +0x73:  mov    %eax,0x14(%esp)
08563445 +0x77:  mov    %edi,0x10(%esp)
08563449 +0x7b:  mov    %esi,0xc(%esp)
0856344d +0x7f:  mov    %ebx,0x8(%esp)
08563451 +0x83:  movl   $"pvp@log %s,%s,room(%d),%d,%d",0x4(%esp)
08563459 +0x8b:  lea    -0x28(%ebp),%eax
0856345c +0x8e:  mov    %eax,(%esp)
0856345f +0x91:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
08563464 +0x96:  movl   $0x2,0x10(%esp)
0856346c +0x9e:  movl   $0xfe,0xc(%esp)
08563474 +0xa6:  mov    0x14(%ebp),%eax
08563477 +0xa9:  mov    %eax,0x8(%esp)
0856347b +0xad:  mov    0xc(%ebp),%eax
0856347e +0xb0:  mov    %eax,0x4(%esp)
08563482 +0xb4:  mov    0x10(%ebp),%eax
08563485 +0xb7:  mov    %eax,(%esp)
08563488 +0xba:  call   085dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>  ; PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)
0856348d +0xbf:  xor    $0x1,%eax
08563490 +0xc2:  test   %al,%al
08563492 +0xc4:  je     085634b3 <+0xe5>
08563494 +0xc6:  mov    0x10(%ebp),%eax
08563497 +0xc9:  mov    %eax,(%esp)
0856349a +0xcc:  call   085d62c8 <_ZN8PvP_Room5resetEv>  ; PvP_Room::reset()
0856349f +0xd1:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
085634a4 +0xd6:  mov    0x10(%ebp),%edx
085634a7 +0xd9:  mov    %edx,0x4(%esp)
085634ab +0xdd:  mov    %eax,(%esp)
085634ae +0xe0:  call   08295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>  ; CGameManager::PutPvp(PvP_Room*)
085634b3 +0xe5:  add    $0x4c,%esp
085634b6 +0xe8:  pop    %ebx
085634b7 +0xe9:  pop    %esi
085634b8 +0xea:  pop    %edi
085634b9 +0xeb:  pop    %ebp
085634ba +0xec:  ret
085634bb +0xed:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_PullOutRoom @ 0x85633ce

/* fair_pvp::CFairMatch::_PullOutRoom(CUser*, PvP_Room*, int) */

void __thiscall
fair_pvp::CFairMatch::_PullOutRoom(CFairMatch *this,CUser *param_1,PvP_Room *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CGameManager *this_00;
  CSwitchLog local_2c [28];
  
  uVar2 = PvP_Room::get_pvp_battle_mode(param_2);
  uVar3 = PvP_Room::get_index(param_2);
  uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  uVar5 = CUser::get_acc_name(param_1);
  CSwitchLog::CSwitchLog
            (local_2c,"void fair_pvp::CFairMatch::_PullOutRoom(CUser*, PvP_Room*, int)",0xb5a,0,0);
  CSwitchLog::operator()(local_2c,"pvp@log %s,%s,room(%d),%d,%d",uVar5,uVar4,uVar3,uVar2,param_3);
  cVar1 = PvP_Room::OnSetPVPSeatState(param_2,param_1,param_3,0xfe,2);
  if (cVar1 != '\x01') {
    PvP_Room::reset(param_2);
    this_00 = (CGameManager *)G_CGameManager();
    CGameManager::PutPvp(this_00,param_2);
  }
  return;
}
```
