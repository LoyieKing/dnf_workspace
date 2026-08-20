# execute

`_ZN11game_master9CDropItem7executeEv`

`game_master::CDropItem::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CDropItem` | `0x084aca8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aca8c  _ZN11game_master9CDropItem7executeEv
#           game_master::CDropItem::execute()
# range [0x084aca8c, 0x084acbe3]
084aca8c +0x000:  push   %ebp
084aca8d +0x001:  mov    %esp,%ebp
084aca8f +0x003:  push   %esi
084aca90 +0x004:  push   %ebx
084aca91 +0x005:  sub    $0x20,%esp
084aca94 +0x008:  movl   $0x32,(%esp)
084aca9b +0x00f:  call   084a8a9a <_ZN11game_master14CGameMasterMgr13GetDispatcherEi>  ; game_master::CGameMasterMgr::GetDispatcher(int)
084acaa0 +0x014:  mov    %eax,-0xc(%ebp)
084acaa3 +0x017:  cmpl   $0x0,-0xc(%ebp)
084acaa7 +0x01b:  je     084acbdc <+0x150>
084acaad +0x021:  lea    -0x18(%ebp),%eax
084acab0 +0x024:  mov    %eax,(%esp)
084acab3 +0x027:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084acab8 +0x02c:  movl   $0x32,0x8(%esp)
084acac0 +0x034:  movl   $0x1,0x4(%esp)
084acac8 +0x03c:  lea    -0x18(%ebp),%eax
084acacb +0x03f:  mov    %eax,(%esp)
084acace +0x042:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084acad3 +0x047:  movl   $0x1,0x4(%esp)
084acadb +0x04f:  lea    -0x18(%ebp),%eax
084acade +0x052:  mov    %eax,(%esp)
084acae1 +0x055:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084acae6 +0x05a:  movl   $0x1,0x4(%esp)
084acaee +0x062:  lea    -0x18(%ebp),%eax
084acaf1 +0x065:  mov    %eax,(%esp)
084acaf4 +0x068:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084acaf9 +0x06d:  movl   $0x0,0x4(%esp)
084acb01 +0x075:  lea    -0x18(%ebp),%eax
084acb04 +0x078:  mov    %eax,(%esp)
084acb07 +0x07b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084acb0c +0x080:  movl   $0x8,0x4(%esp)
084acb14 +0x088:  lea    -0x18(%ebp),%eax
084acb17 +0x08b:  mov    %eax,(%esp)
084acb1a +0x08e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084acb1f +0x093:  movl   $0x1,0x4(%esp)
084acb27 +0x09b:  lea    -0x18(%ebp),%eax
084acb2a +0x09e:  mov    %eax,(%esp)
084acb2d +0x0a1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084acb32 +0x0a6:  movl   $0x0,0x4(%esp)
084acb3a +0x0ae:  lea    -0x18(%ebp),%eax
084acb3d +0x0b1:  mov    %eax,(%esp)
084acb40 +0x0b4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084acb45 +0x0b9:  movl   $0x0,0x4(%esp)
084acb4d +0x0c1:  lea    -0x18(%ebp),%eax
084acb50 +0x0c4:  mov    %eax,(%esp)
084acb53 +0x0c7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084acb58 +0x0cc:  movl   $0x0,0x4(%esp)
084acb60 +0x0d4:  lea    -0x18(%ebp),%eax
084acb63 +0x0d7:  mov    %eax,(%esp)
084acb66 +0x0da:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084acb6b +0x0df:  movl   $0xf,0x4(%esp)
084acb73 +0x0e7:  lea    -0x18(%ebp),%eax
084acb76 +0x0ea:  mov    %eax,(%esp)
084acb79 +0x0ed:  call   0822b7b0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe5a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe5a
084acb7e +0x0f2:  mov    -0xc(%ebp),%eax
084acb81 +0x0f5:  mov    (%eax),%eax
084acb83 +0x0f7:  mov    (%eax),%esi
084acb85 +0x0f9:  lea    -0x18(%ebp),%eax
084acb88 +0x0fc:  mov    %eax,(%esp)
084acb8b +0x0ff:  call   0822b766 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe10>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe10
084acb90 +0x104:  mov    %eax,%ebx
084acb92 +0x106:  mov    0x8(%ebp),%eax
084acb95 +0x109:  mov    %eax,(%esp)
084acb98 +0x10c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084acb9d +0x111:  mov    %ebx,0x8(%esp)
084acba1 +0x115:  mov    %eax,0x4(%esp)
084acba5 +0x119:  mov    -0xc(%ebp),%eax
084acba8 +0x11c:  mov    %eax,(%esp)
084acbab +0x11f:  call   *%esi
084acbad +0x121:  test   %eax,%eax
084acbaf +0x123:  setne  %al
084acbb2 +0x126:  test   %al,%al
084acbb4 +0x128:  lea    -0x18(%ebp),%eax
084acbb7 +0x12b:  mov    %eax,(%esp)
084acbba +0x12e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084acbbf +0x133:  jmp    084acbdd <+0x151>
084acbc1 +0x135:  mov    %edx,%ebx
084acbc3 +0x137:  mov    %eax,%esi
084acbc5 +0x139:  lea    -0x18(%ebp),%eax
084acbc8 +0x13c:  mov    %eax,(%esp)
084acbcb +0x13f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084acbd0 +0x144:  mov    %esi,%eax
084acbd2 +0x146:  mov    %ebx,%edx
084acbd4 +0x148:  mov    %eax,(%esp)
084acbd7 +0x14b:  call   08ae3750 <_Unwind_Resume>
084acbdc +0x150:  nop
084acbdd +0x151:  add    $0x20,%esp
084acbe0 +0x154:  pop    %ebx
084acbe1 +0x155:  pop    %esi
084acbe2 +0x156:  pop    %ebp
084acbe3 +0x157:  ret
```

## 反编译 C

```c
// game_master::CDropItem::execute @ 0x84aca8c

/* game_master::CDropItem::execute() */

void __thiscall game_master::CDropItem::execute(CDropItem *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  undefined4 *local_10;
  
  local_10 = (undefined4 *)CGameMasterMgr::GetDispatcher(0x32);
  if (local_10 != (undefined4 *)0x0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084acace to 084acbac has its CatchHandler @ 084acbc1 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x32);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,8);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,false);
    InterfacePacketBuf::set_index((InterfacePacketBuf *)local_1c,0xf);
    pcVar1 = *(code **)*local_10;
    uVar2 = InterfacePacketBuf::get((InterfacePacketBuf *)local_1c);
    uVar3 = CCommand::GetUser((CCommand *)this);
    (*pcVar1)(local_10,uVar3,uVar2);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}
```
