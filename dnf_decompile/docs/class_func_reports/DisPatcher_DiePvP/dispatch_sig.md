# dispatch_sig

`_ZN17DisPatcher_DiePvP12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_DiePvP::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DiePvP` | `0x081ece64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ece64  _ZN17DisPatcher_DiePvP12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_DiePvP::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ece64, 0x081ed099]
081ece64 +0x000:  push   %ebp
081ece65 +0x001:  mov    %esp,%ebp
081ece67 +0x003:  push   %edi
081ece68 +0x004:  push   %esi
081ece69 +0x005:  push   %ebx
081ece6a +0x006:  sub    $0x6c,%esp
081ece6d +0x009:  mov    0xc(%ebp),%eax
081ece70 +0x00c:  mov    %eax,(%esp)
081ece73 +0x00f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ece78 +0x014:  cmp    $0x7,%eax
081ece7b +0x017:  setne  %al
081ece7e +0x01a:  test   %al,%al
081ece80 +0x01c:  je     081ece8c <+0x28>
081ece82 +0x01e:  mov    $0x0,%ebx
081ece87 +0x023:  jmp    081ed090 <+0x22c>
081ece8c +0x028:  movw   $0xffff,-0x36(%ebp)
081ece92 +0x02e:  lea    -0x36(%ebp),%eax
081ece95 +0x031:  mov    %eax,0x4(%esp)
081ece99 +0x035:  mov    0x10(%ebp),%eax
081ece9c +0x038:  mov    %eax,(%esp)
081ece9f +0x03b:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081ecea4 +0x040:  xor    $0x1,%eax
081ecea7 +0x043:  test   %al,%al
081ecea9 +0x045:  je     081eced6 <+0x72>
081eceab +0x047:  movl   $0x0,0xc(%esp)
081eceb3 +0x04f:  movl   $0x0,0x8(%esp)
081ecebb +0x057:  movl   $&_ZZN17DisPatcher_DiePvP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ecec3 +0x05f:  movl   $0x6f12,(%esp)
081ececa +0x066:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ececf +0x06b:  mov    %eax,%ebx
081eced1 +0x06d:  jmp    081ed090 <+0x22c>
081eced6 +0x072:  movzwl -0x36(%ebp),%eax
081eceda +0x076:  movzwl %ax,%ebx
081ecedd +0x079:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081ecee2 +0x07e:  mov    %ebx,0x4(%esp)
081ecee6 +0x082:  mov    %eax,(%esp)
081ecee9 +0x085:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081eceee +0x08a:  mov    %eax,-0x24(%ebp)
081ecef1 +0x08d:  cmpl   $0x0,-0x24(%ebp)
081ecef5 +0x091:  jne    081ecefd <+0x99>
081ecef7 +0x093:  movw   $0xffff,-0x36(%ebp)
081ecefd +0x099:  mov    0xc(%ebp),%eax
081ecf00 +0x09c:  mov    %eax,(%esp)
081ecf03 +0x09f:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
081ecf08 +0x0a4:  mov    %eax,-0x20(%ebp)
081ecf0b +0x0a7:  cmpl   $0x0,-0x20(%ebp)
081ecf0f +0x0ab:  jne    081ecf3c <+0xd8>
081ecf11 +0x0ad:  movl   $0x0,0xc(%esp)
081ecf19 +0x0b5:  movl   $0x0,0x8(%esp)
081ecf21 +0x0bd:  movl   $&_ZZN17DisPatcher_DiePvP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ecf29 +0x0c5:  movl   $0x6f1c,(%esp)
081ecf30 +0x0cc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ecf35 +0x0d1:  mov    %eax,%ebx
081ecf37 +0x0d3:  jmp    081ed090 <+0x22c>
081ecf3c +0x0d8:  lea    -0x44(%ebp),%eax
081ecf3f +0x0db:  mov    %eax,(%esp)
081ecf42 +0x0de:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081ecf47 +0x0e3:  mov    -0x24(%ebp),%eax
081ecf4a +0x0e6:  mov    %eax,0x8(%esp)
081ecf4e +0x0ea:  mov    0xc(%ebp),%eax
081ecf51 +0x0ed:  mov    %eax,0x4(%esp)
081ecf55 +0x0f1:  mov    -0x20(%ebp),%eax
081ecf58 +0x0f4:  mov    %eax,(%esp)
081ecf5b +0x0f7:  call   085d9386 <_ZN8PvP_Room10die_characEP5CUserS1_>  ; PvP_Room::die_charac(CUser*, CUser*)
081ecf60 +0x0fc:  mov    %eax,-0x1c(%ebp)
081ecf63 +0x0ff:  mov    -0x20(%ebp),%eax
081ecf66 +0x102:  mov    %eax,(%esp)
081ecf69 +0x105:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
081ecf6e +0x10a:  mov    %eax,-0x4c(%ebp)
081ecf71 +0x10d:  mov    -0x20(%ebp),%eax
081ecf74 +0x110:  mov    %eax,(%esp)
081ecf77 +0x113:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
081ecf7c +0x118:  mov    %eax,%edi
081ecf7e +0x11a:  mov    0xc(%ebp),%eax
081ecf81 +0x11d:  mov    %eax,(%esp)
081ecf84 +0x120:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081ecf89 +0x125:  mov    %eax,%esi
081ecf8b +0x127:  mov    0xc(%ebp),%eax
081ecf8e +0x12a:  mov    %eax,(%esp)
081ecf91 +0x12d:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
081ecf96 +0x132:  mov    %eax,%ebx
081ecf98 +0x134:  movl   $0x0,0x10(%esp)
081ecfa0 +0x13c:  movl   $0x0,0xc(%esp)
081ecfa8 +0x144:  movl   $0x6f22,0x8(%esp)
081ecfb0 +0x14c:  movl   $&_ZZN17DisPatcher_DiePvP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ecfb8 +0x154:  lea    -0x34(%ebp),%eax
081ecfbb +0x157:  mov    %eax,(%esp)
081ecfbe +0x15a:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
081ecfc3 +0x15f:  movl   $0x3a,0x1c(%esp)
081ecfcb +0x167:  mov    -0x1c(%ebp),%eax
081ecfce +0x16a:  mov    %eax,0x18(%esp)
081ecfd2 +0x16e:  mov    -0x4c(%ebp),%eax
081ecfd5 +0x171:  mov    %eax,0x14(%esp)
081ecfd9 +0x175:  mov    %edi,0x10(%esp)
081ecfdd +0x179:  mov    %esi,0xc(%esp)
081ecfe1 +0x17d:  mov    %ebx,0x8(%esp)
081ecfe5 +0x181:  movl   $"pvp@log %s,%s,room(%d),%d,%d,%d",0x4(%esp)
081ecfed +0x189:  lea    -0x34(%ebp),%eax
081ecff0 +0x18c:  mov    %eax,(%esp)
081ecff3 +0x18f:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
081ecff8 +0x194:  cmpl   $0x0,-0x1c(%ebp)
081ecffc +0x198:  jle    081ed063 <+0x1ff>
081ecffe +0x19a:  movl   $0x3a,0x8(%esp)
081ed006 +0x1a2:  movl   $0x1,0x4(%esp)
081ed00e +0x1aa:  lea    -0x44(%ebp),%eax
081ed011 +0x1ad:  mov    %eax,(%esp)
081ed014 +0x1b0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081ed019 +0x1b5:  movl   $0x0,0x4(%esp)
081ed021 +0x1bd:  lea    -0x44(%ebp),%eax
081ed024 +0x1c0:  mov    %eax,(%esp)
081ed027 +0x1c3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ed02c +0x1c8:  mov    -0x1c(%ebp),%eax
081ed02f +0x1cb:  mov    %eax,0x4(%esp)
081ed033 +0x1cf:  lea    -0x44(%ebp),%eax
081ed036 +0x1d2:  mov    %eax,(%esp)
081ed039 +0x1d5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ed03e +0x1da:  movl   $0x1,0x4(%esp)
081ed046 +0x1e2:  lea    -0x44(%ebp),%eax
081ed049 +0x1e5:  mov    %eax,(%esp)
081ed04c +0x1e8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081ed051 +0x1ed:  lea    -0x44(%ebp),%eax
081ed054 +0x1f0:  mov    %eax,0x4(%esp)
081ed058 +0x1f4:  mov    0xc(%ebp),%eax
081ed05b +0x1f7:  mov    %eax,(%esp)
081ed05e +0x1fa:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081ed063 +0x1ff:  mov    $0x0,%ebx
081ed068 +0x204:  lea    -0x44(%ebp),%eax
081ed06b +0x207:  mov    %eax,(%esp)
081ed06e +0x20a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ed073 +0x20f:  jmp    081ed090 <+0x22c>
081ed075 +0x211:  mov    %edx,%ebx
081ed077 +0x213:  mov    %eax,%esi
081ed079 +0x215:  lea    -0x44(%ebp),%eax
081ed07c +0x218:  mov    %eax,(%esp)
081ed07f +0x21b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ed084 +0x220:  mov    %esi,%eax
081ed086 +0x222:  mov    %ebx,%edx
081ed088 +0x224:  mov    %eax,(%esp)
081ed08b +0x227:  call   08ae3750 <_Unwind_Resume>
081ed090 +0x22c:  mov    %ebx,%eax
081ed092 +0x22e:  add    $0x6c,%esp
081ed095 +0x231:  pop    %ebx
081ed096 +0x232:  pop    %esi
081ed097 +0x233:  pop    %edi
081ed098 +0x234:  pop    %ebp
081ed099 +0x235:  ret
```

## 反编译 C

```c
// DisPatcher_DiePvP::dispatch_sig @ 0x81ece64

/* DisPatcher_DiePvP::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_DiePvP::dispatch_sig(DisPatcher_DiePvP *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  GameWorld *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  PacketGuard local_48 [14];
  ushort local_3a;
  CSwitchLog local_38 [16];
  CUser *local_28;
  PvP_Room *local_24;
  int local_20;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 == 7) {
    local_3a = 0xffff;
    cVar2 = PacketBuf::get_short(param_2,&local_3a);
    uVar1 = local_3a;
    if (cVar2 == '\x01') {
      this_00 = (GameWorld *)G_GameWorld();
      local_28 = (CUser *)GameWorld::find_from_world(this_00,uVar1);
      if (local_28 == (CUser *)0x0) {
        local_3a = 0xffff;
      }
      local_24 = (PvP_Room *)CUser::GetPVPRoom(param_1);
      if (local_24 == (PvP_Room *)0x0) {
        uVar7 = LineFunc(0x6f1c,"virtual int DisPatcher_DiePvP::dispatch_sig(CUser*, PacketBuf&)",0,
                         0);
      }
      else {
        PacketGuard::PacketGuard(local_48);
                    /* try { // try from 081ecf5b to 081ed062 has its CatchHandler @ 081ed075 */
        local_20 = PvP_Room::die_charac(local_24,param_1,local_28);
        uVar7 = PvP_Room::get_pvp_battle_mode(local_24);
        uVar4 = PvP_Room::get_index(local_24);
        uVar5 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        uVar6 = CUser::get_acc_name(param_1);
        CSwitchLog::CSwitchLog
                  (local_38,"virtual int DisPatcher_DiePvP::dispatch_sig(CUser*, PacketBuf&)",0x6f22
                   ,0,0);
        CSwitchLog::operator()
                  (local_38,"pvp@log %s,%s,room(%d),%d,%d,%d",uVar6,uVar5,uVar4,uVar7,local_20,0x3a)
        ;
        if (0 < local_20) {
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,0x3a);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,local_20);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
          CUser::Send(param_1,local_48);
        }
        uVar7 = 0;
        PacketGuard::~PacketGuard(local_48);
      }
    }
    else {
      uVar7 = LineFunc(0x6f12,"virtual int DisPatcher_DiePvP::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}
```
