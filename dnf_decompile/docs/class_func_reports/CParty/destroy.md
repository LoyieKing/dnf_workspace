# destroy

`_ZN6CParty7destroyEv`

`CParty::destroy()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859ad4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859ad4c  _ZN6CParty7destroyEv
#           CParty::destroy()
# range [0x0859ad4c, 0x0859ae75]
0859ad4c +0x000:  push   %ebp
0859ad4d +0x001:  mov    %esp,%ebp
0859ad4f +0x003:  push   %esi
0859ad50 +0x004:  push   %ebx
0859ad51 +0x005:  sub    $0x20,%esp
0859ad54 +0x008:  mov    0x8(%ebp),%eax
0859ad57 +0x00b:  movzbl 0x13c(%eax),%eax
0859ad5e +0x012:  test   %al,%al
0859ad60 +0x014:  je     0859ae26 <+0xda>
0859ad66 +0x01a:  lea    -0x14(%ebp),%eax
0859ad69 +0x01d:  mov    %eax,(%esp)
0859ad6c +0x020:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0859ad71 +0x025:  movl   $0x9,0x8(%esp)
0859ad79 +0x02d:  movl   $0x0,0x4(%esp)
0859ad81 +0x035:  lea    -0x14(%ebp),%eax
0859ad84 +0x038:  mov    %eax,(%esp)
0859ad87 +0x03b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0859ad8c +0x040:  movl   $0x1,0x4(%esp)
0859ad94 +0x048:  lea    -0x14(%ebp),%eax
0859ad97 +0x04b:  mov    %eax,(%esp)
0859ad9a +0x04e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859ad9f +0x053:  mov    0x8(%ebp),%eax
0859ada2 +0x056:  mov    %eax,(%esp)
0859ada5 +0x059:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
0859adaa +0x05e:  mov    %eax,0x4(%esp)
0859adae +0x062:  lea    -0x14(%ebp),%eax
0859adb1 +0x065:  mov    %eax,(%esp)
0859adb4 +0x068:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859adb9 +0x06d:  movl   $0x3,0x4(%esp)
0859adc1 +0x075:  lea    -0x14(%ebp),%eax
0859adc4 +0x078:  mov    %eax,(%esp)
0859adc7 +0x07b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859adcc +0x080:  movl   $0x1,0x4(%esp)
0859add4 +0x088:  lea    -0x14(%ebp),%eax
0859add7 +0x08b:  mov    %eax,(%esp)
0859adda +0x08e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0859addf +0x093:  mov    0x8(%ebp),%eax
0859ade2 +0x096:  mov    0x74(%eax),%eax
0859ade5 +0x099:  lea    -0x14(%ebp),%edx
0859ade8 +0x09c:  mov    %edx,0x8(%esp)
0859adec +0x0a0:  movl   $0x1,0x4(%esp)
0859adf4 +0x0a8:  mov    %eax,(%esp)
0859adf7 +0x0ab:  call   0867b8fe <_ZN5CUser10SendPacketENS_11eSendTargetER11PacketGuard>  ; CUser::SendPacket(CUser::eSendTarget, PacketGuard&)
0859adfc +0x0b0:  jmp    0859ae19 <+0xcd>
0859adfe +0x0b2:  mov    %edx,%ebx
0859ae00 +0x0b4:  mov    %eax,%esi
0859ae02 +0x0b6:  lea    -0x14(%ebp),%eax
0859ae05 +0x0b9:  mov    %eax,(%esp)
0859ae08 +0x0bc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859ae0d +0x0c1:  mov    %esi,%eax
0859ae0f +0x0c3:  mov    %ebx,%edx
0859ae11 +0x0c5:  mov    %eax,(%esp)
0859ae14 +0x0c8:  call   08ae3750 <_Unwind_Resume>
0859ae19 +0x0cd:  lea    -0x14(%ebp),%eax
0859ae1c +0x0d0:  mov    %eax,(%esp)
0859ae1f +0x0d3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859ae24 +0x0d8:  jmp    0859ae42 <+0xf6>
0859ae26 +0x0da:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0859ae2b +0x0df:  movl   $0x3,0x8(%esp)
0859ae33 +0x0e7:  mov    0x8(%ebp),%edx
0859ae36 +0x0ea:  mov    %edx,0x4(%esp)
0859ae3a +0x0ee:  mov    %eax,(%esp)
0859ae3d +0x0f1:  call   086c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>  ; GameWorld::send_party_info_to_all(CParty*, int)
0859ae42 +0x0f6:  mov    0x8(%ebp),%eax
0859ae45 +0x0f9:  mov    %eax,(%esp)
0859ae48 +0x0fc:  call   0859a974 <_ZN6CParty4initEv>  ; CParty::init()
0859ae4d +0x101:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0859ae52 +0x106:  mov    0x8(%ebp),%edx
0859ae55 +0x109:  mov    %edx,0x4(%esp)
0859ae59 +0x10d:  mov    %eax,(%esp)
0859ae5c +0x110:  call   08294fc8 <_ZN12CGameManager8PutPartyEP6CParty>  ; CGameManager::PutParty(CParty*)
0859ae61 +0x115:  mov    0x8(%ebp),%eax
0859ae64 +0x118:  movl   $0x0,0x1860(%eax)
0859ae6e +0x122:  add    $0x20,%esp
0859ae71 +0x125:  pop    %ebx
0859ae72 +0x126:  pop    %esi
0859ae73 +0x127:  pop    %ebp
0859ae74 +0x128:  ret
0859ae75 +0x129:  nop
```

## 反编译 C

```c
// CParty::destroy @ 0x859ad4c

/* CParty::destroy() */

void __thiscall CParty::destroy(CParty *this)

{
  int iVar1;
  GameWorld *this_00;
  CGameManager *this_01;
  PacketGuard local_18 [12];
  
  if (this[0x13c] == (CParty)0x0) {
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_party_info_to_all(this_00,this,3);
  }
  else {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0859ad87 to 0859adfb has its CatchHandler @ 0859adfe */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,9);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
    iVar1 = GetPartyIndex(this);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,iVar1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,3);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CUser::SendPacket(*(CUser **)(this + 0x74),1,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  init(this);
  this_01 = (CGameManager *)G_CGameManager();
  CGameManager::PutParty(this_01,this);
  *(undefined4 *)(this + 0x1860) = 0;
  return;
}
```
