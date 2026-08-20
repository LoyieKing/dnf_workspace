# _SendVictoryInfo

`_ZN11pvp_assault11CAssaultMgr16_SendVictoryInfoEP5CUserS2_`

`pvp_assault::CAssaultMgr::_SendVictoryInfo(CUser*, CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082efcb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082efcb2  _ZN11pvp_assault11CAssaultMgr16_SendVictoryInfoEP5CUserS2_
#           pvp_assault::CAssaultMgr::_SendVictoryInfo(CUser*, CUser*)
# range [0x082efcb2, 0x082efe13]
082efcb2 +0x000:  push   %ebp
082efcb3 +0x001:  mov    %esp,%ebp
082efcb5 +0x003:  push   %esi
082efcb6 +0x004:  push   %ebx
082efcb7 +0x005:  sub    $0x20,%esp
082efcba +0x008:  lea    -0x18(%ebp),%eax
082efcbd +0x00b:  mov    %eax,(%esp)
082efcc0 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082efcc5 +0x013:  movl   $0x10a,0x8(%esp)
082efccd +0x01b:  movl   $0x0,0x4(%esp)
082efcd5 +0x023:  lea    -0x18(%ebp),%eax
082efcd8 +0x026:  mov    %eax,(%esp)
082efcdb +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082efce0 +0x02e:  mov    0xc(%ebp),%eax
082efce3 +0x031:  mov    %eax,(%esp)
082efce6 +0x034:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082efceb +0x039:  cmp    $0x1,%al
082efced +0x03b:  sete   %al
082efcf0 +0x03e:  test   %al,%al
082efcf2 +0x040:  je     082efd2a <+0x78>
082efcf4 +0x042:  mov    0xc(%ebp),%eax
082efcf7 +0x045:  mov    %eax,(%esp)
082efcfa +0x048:  call   0868856c <_ZN5CUser23GetPowerWarPartyVictoryEv>  ; CUser::GetPowerWarPartyVictory()
082efcff +0x04d:  mov    %eax,0x4(%esp)
082efd03 +0x051:  lea    -0x18(%ebp),%eax
082efd06 +0x054:  mov    %eax,(%esp)
082efd09 +0x057:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082efd0e +0x05c:  mov    0x10(%ebp),%eax
082efd11 +0x05f:  mov    %eax,(%esp)
082efd14 +0x062:  call   0868856c <_ZN5CUser23GetPowerWarPartyVictoryEv>  ; CUser::GetPowerWarPartyVictory()
082efd19 +0x067:  mov    %eax,0x4(%esp)
082efd1d +0x06b:  lea    -0x18(%ebp),%eax
082efd20 +0x06e:  mov    %eax,(%esp)
082efd23 +0x071:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082efd28 +0x076:  jmp    082efd5e <+0xac>
082efd2a +0x078:  mov    0x10(%ebp),%eax
082efd2d +0x07b:  mov    %eax,(%esp)
082efd30 +0x07e:  call   0868856c <_ZN5CUser23GetPowerWarPartyVictoryEv>  ; CUser::GetPowerWarPartyVictory()
082efd35 +0x083:  mov    %eax,0x4(%esp)
082efd39 +0x087:  lea    -0x18(%ebp),%eax
082efd3c +0x08a:  mov    %eax,(%esp)
082efd3f +0x08d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082efd44 +0x092:  mov    0xc(%ebp),%eax
082efd47 +0x095:  mov    %eax,(%esp)
082efd4a +0x098:  call   0868856c <_ZN5CUser23GetPowerWarPartyVictoryEv>  ; CUser::GetPowerWarPartyVictory()
082efd4f +0x09d:  mov    %eax,0x4(%esp)
082efd53 +0x0a1:  lea    -0x18(%ebp),%eax
082efd56 +0x0a4:  mov    %eax,(%esp)
082efd59 +0x0a7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082efd5e +0x0ac:  movl   $0x1,0x4(%esp)
082efd66 +0x0b4:  lea    -0x18(%ebp),%eax
082efd69 +0x0b7:  mov    %eax,(%esp)
082efd6c +0x0ba:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082efd71 +0x0bf:  mov    0xc(%ebp),%eax
082efd74 +0x0c2:  mov    %eax,(%esp)
082efd77 +0x0c5:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082efd7c +0x0ca:  mov    %eax,-0xc(%ebp)
082efd7f +0x0cd:  cmpl   $0x0,-0xc(%ebp)
082efd83 +0x0d1:  je     082efd99 <+0xe7>
082efd85 +0x0d3:  lea    -0x18(%ebp),%eax
082efd88 +0x0d6:  mov    %eax,0x4(%esp)
082efd8c +0x0da:  mov    -0xc(%ebp),%eax
082efd8f +0x0dd:  mov    %eax,(%esp)
082efd92 +0x0e0:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
082efd97 +0x0e5:  jmp    082efdab <+0xf9>
082efd99 +0x0e7:  lea    -0x18(%ebp),%eax
082efd9c +0x0ea:  mov    %eax,0x4(%esp)
082efda0 +0x0ee:  mov    0xc(%ebp),%eax
082efda3 +0x0f1:  mov    %eax,(%esp)
082efda6 +0x0f4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082efdab +0x0f9:  mov    0x10(%ebp),%eax
082efdae +0x0fc:  mov    %eax,(%esp)
082efdb1 +0x0ff:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082efdb6 +0x104:  mov    %eax,-0xc(%ebp)
082efdb9 +0x107:  cmpl   $0x0,-0xc(%ebp)
082efdbd +0x10b:  je     082efdd3 <+0x121>
082efdbf +0x10d:  lea    -0x18(%ebp),%eax
082efdc2 +0x110:  mov    %eax,0x4(%esp)
082efdc6 +0x114:  mov    -0xc(%ebp),%eax
082efdc9 +0x117:  mov    %eax,(%esp)
082efdcc +0x11a:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
082efdd1 +0x11f:  jmp    082efe02 <+0x150>
082efdd3 +0x121:  lea    -0x18(%ebp),%eax
082efdd6 +0x124:  mov    %eax,0x4(%esp)
082efdda +0x128:  mov    0x10(%ebp),%eax
082efddd +0x12b:  mov    %eax,(%esp)
082efde0 +0x12e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082efde5 +0x133:  jmp    082efe02 <+0x150>
082efde7 +0x135:  mov    %edx,%ebx
082efde9 +0x137:  mov    %eax,%esi
082efdeb +0x139:  lea    -0x18(%ebp),%eax
082efdee +0x13c:  mov    %eax,(%esp)
082efdf1 +0x13f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082efdf6 +0x144:  mov    %esi,%eax
082efdf8 +0x146:  mov    %ebx,%edx
082efdfa +0x148:  mov    %eax,(%esp)
082efdfd +0x14b:  call   08ae3750 <_Unwind_Resume>
082efe02 +0x150:  lea    -0x18(%ebp),%eax
082efe05 +0x153:  mov    %eax,(%esp)
082efe08 +0x156:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082efe0d +0x15b:  add    $0x20,%esp
082efe10 +0x15e:  pop    %ebx
082efe11 +0x15f:  pop    %esi
082efe12 +0x160:  pop    %ebp
082efe13 +0x161:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::_SendVictoryInfo @ 0x82efcb2

/* pvp_assault::CAssaultMgr::_SendVictoryInfo(CUser*, CUser*) */

void __thiscall
pvp_assault::CAssaultMgr::_SendVictoryInfo(CAssaultMgr *this,CUser *param_1,CUser *param_2)

{
  char cVar1;
  int iVar2;
  PacketGuard local_1c [12];
  CParty *local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 082efcdb to 082efde4 has its CatchHandler @ 082efde7 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x10a);
  cVar1 = CUser::getPowerSide(param_1);
  if (cVar1 == '\x01') {
    iVar2 = CUser::GetPowerWarPartyVictory(param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
    iVar2 = CUser::GetPowerWarPartyVictory(param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
  }
  else {
    iVar2 = CUser::GetPowerWarPartyVictory(param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
    iVar2 = CUser::GetPowerWarPartyVictory(param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  local_10 = (CParty *)CUser::GetParty(param_1);
  if (local_10 == (CParty *)0x0) {
    CUser::Send(param_1,local_1c);
  }
  else {
    CParty::send_to_party(local_10,local_1c);
  }
  local_10 = (CParty *)CUser::GetParty(param_2);
  if (local_10 == (CParty *)0x0) {
    CUser::Send(param_2,local_1c);
  }
  else {
    CParty::send_to_party(local_10,local_1c);
  }
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
