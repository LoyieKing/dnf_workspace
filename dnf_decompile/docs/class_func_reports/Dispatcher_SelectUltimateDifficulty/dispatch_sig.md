# dispatch_sig

`_ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_SelectUltimateDifficulty::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SelectUltimateDifficulty` | `0x08226f30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08226f30  _ZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_SelectUltimateDifficulty::dispatch_sig(CUser*, PacketBuf&)
# range [0x08226f30, 0x082271b5]
08226f30 +0x000:  push   %ebp
08226f31 +0x001:  mov    %esp,%ebp
08226f33 +0x003:  push   %esi
08226f34 +0x004:  push   %ebx
08226f35 +0x005:  sub    $0x40,%esp
08226f38 +0x008:  mov    0xc(%ebp),%eax
08226f3b +0x00b:  mov    %eax,(%esp)
08226f3e +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08226f43 +0x013:  cmp    $0x5,%eax
08226f46 +0x016:  setne  %al
08226f49 +0x019:  test   %al,%al
08226f4b +0x01b:  je     08226f57 <+0x27>
08226f4d +0x01d:  mov    $0x0,%ebx
08226f52 +0x022:  jmp    082271ad <+0x27d>
08226f57 +0x027:  mov    0xc(%ebp),%eax
08226f5a +0x02a:  mov    %eax,(%esp)
08226f5d +0x02d:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08226f62 +0x032:  mov    %eax,-0xc(%ebp)
08226f65 +0x035:  cmpl   $0x0,-0xc(%ebp)
08226f69 +0x039:  je     08226f7b <+0x4b>
08226f6b +0x03b:  mov    -0xc(%ebp),%eax
08226f6e +0x03e:  mov    %eax,(%esp)
08226f71 +0x041:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
08226f76 +0x046:  cmp    0xc(%ebp),%eax
08226f79 +0x049:  je     08226f82 <+0x52>
08226f7b +0x04b:  mov    $0x1,%eax
08226f80 +0x050:  jmp    08226f87 <+0x57>
08226f82 +0x052:  mov    $0x0,%eax
08226f87 +0x057:  test   %al,%al
08226f89 +0x059:  je     08226f95 <+0x65>
08226f8b +0x05b:  mov    $0x0,%ebx
08226f90 +0x060:  jmp    082271ad <+0x27d>
08226f95 +0x065:  mov    -0xc(%ebp),%eax
08226f98 +0x068:  add    $0xb24,%eax
08226f9d +0x06d:  mov    %eax,(%esp)
08226fa0 +0x070:  call   0822cf18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x25c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x25c2
08226fa5 +0x075:  cmp    $0x2,%eax
08226fa8 +0x078:  setg   %al
08226fab +0x07b:  test   %al,%al
08226fad +0x07d:  je     08226fb9 <+0x89>
08226faf +0x07f:  mov    $0x0,%ebx
08226fb4 +0x084:  jmp    082271ad <+0x27d>
08226fb9 +0x089:  movb   $0x0,-0xd(%ebp)
08226fbd +0x08d:  lea    -0xd(%ebp),%eax
08226fc0 +0x090:  mov    %eax,0x4(%esp)
08226fc4 +0x094:  mov    0x10(%ebp),%eax
08226fc7 +0x097:  mov    %eax,(%esp)
08226fca +0x09a:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08226fcf +0x09f:  xor    $0x1,%eax
08226fd2 +0x0a2:  test   %al,%al
08226fd4 +0x0a4:  je     08227001 <+0xd1>
08226fd6 +0x0a6:  movl   $0x0,0xc(%esp)
08226fde +0x0ae:  movl   $0x0,0x8(%esp)
08226fe6 +0x0b6:  movl   $&_ZZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08226fee +0x0be:  movl   $0xe2d9,(%esp)
08226ff5 +0x0c5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08226ffa +0x0ca:  mov    %eax,%ebx
08226ffc +0x0cc:  jmp    082271ad <+0x27d>
08227001 +0x0d1:  movzbl -0xd(%ebp),%eax
08227005 +0x0d5:  cmp    $0x1,%al
08227007 +0x0d7:  je     08227052 <+0x122>
08227009 +0x0d9:  movzbl -0xd(%ebp),%eax
0822700d +0x0dd:  cmp    $0x2,%al
0822700f +0x0df:  je     08227052 <+0x122>
08227011 +0x0e1:  movzbl -0xd(%ebp),%eax
08227015 +0x0e5:  movsbl %al,%eax
08227018 +0x0e8:  mov    %eax,0x14(%esp)
0822701c +0x0ec:  movl   $"ULTIMATE_LOG : Difficulty ERROR!! difficulty (%d)\n",0x10(%esp)
08227024 +0x0f4:  movl   $0xe2dd,0xc(%esp)
0822702c +0x0fc:  movl   $&_ZZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08227034 +0x104:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
0822703c +0x10c:  movl   $0x1,(%esp)
08227043 +0x113:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08227048 +0x118:  mov    $0x0,%ebx
0822704d +0x11d:  jmp    082271ad <+0x27d>
08227052 +0x122:  mov    -0xc(%ebp),%eax
08227055 +0x125:  mov    0xcac(%eax),%eax
0822705b +0x12b:  test   %eax,%eax
0822705d +0x12d:  je     08227077 <+0x147>
0822705f +0x12f:  mov    -0xc(%ebp),%eax
08227062 +0x132:  mov    0xcac(%eax),%eax
08227068 +0x138:  mov    %eax,(%esp)
0822706b +0x13b:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08227070 +0x140:  cmp    $0x2aff,%eax
08227075 +0x145:  je     0822707e <+0x14e>
08227077 +0x147:  mov    $0x1,%eax
0822707c +0x14c:  jmp    08227083 <+0x153>
0822707e +0x14e:  mov    $0x0,%eax
08227083 +0x153:  test   %al,%al
08227085 +0x155:  je     082270bd <+0x18d>
08227087 +0x157:  movl   $"ULTIMATE_LOG : Dispatcher_SelectUltimateDifficulty ERROR!!\n",0x10(%esp)
0822708f +0x15f:  movl   $0xe2e3,0xc(%esp)
08227097 +0x167:  movl   $&_ZZN35Dispatcher_SelectUltimateDifficulty12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
0822709f +0x16f:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
082270a7 +0x177:  movl   $0x1,(%esp)
082270ae +0x17e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082270b3 +0x183:  mov    $0x0,%ebx
082270b8 +0x188:  jmp    082271ad <+0x27d>
082270bd +0x18d:  mov    -0xc(%ebp),%eax
082270c0 +0x190:  add    $0xb24,%eax
082270c5 +0x195:  mov    %eax,(%esp)
082270c8 +0x198:  call   0822d02e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x26d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x26d8
082270cd +0x19d:  test   %al,%al
082270cf +0x19f:  setne  %al
082270d2 +0x1a2:  test   %al,%al
082270d4 +0x1a4:  je     082270e0 <+0x1b0>
082270d6 +0x1a6:  mov    $0x0,%ebx
082270db +0x1ab:  jmp    082271ad <+0x27d>
082270e0 +0x1b0:  movzbl -0xd(%ebp),%eax
082270e4 +0x1b4:  movsbl %al,%eax
082270e7 +0x1b7:  mov    -0xc(%ebp),%edx
082270ea +0x1ba:  add    $0xb24,%edx
082270f0 +0x1c0:  mov    %eax,0x4(%esp)
082270f4 +0x1c4:  mov    %edx,(%esp)
082270f7 +0x1c7:  call   0822d012 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x26bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x26bc
082270fc +0x1cc:  lea    -0x1c(%ebp),%eax
082270ff +0x1cf:  mov    %eax,(%esp)
08227102 +0x1d2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08227107 +0x1d7:  movl   $0x13e,0x8(%esp)
0822710f +0x1df:  movl   $0x1,0x4(%esp)
08227117 +0x1e7:  lea    -0x1c(%ebp),%eax
0822711a +0x1ea:  mov    %eax,(%esp)
0822711d +0x1ed:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08227122 +0x1f2:  movl   $0x1,0x4(%esp)
0822712a +0x1fa:  lea    -0x1c(%ebp),%eax
0822712d +0x1fd:  mov    %eax,(%esp)
08227130 +0x200:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08227135 +0x205:  movzbl -0xd(%ebp),%eax
08227139 +0x209:  movsbl %al,%eax
0822713c +0x20c:  mov    %eax,0x4(%esp)
08227140 +0x210:  lea    -0x1c(%ebp),%eax
08227143 +0x213:  mov    %eax,(%esp)
08227146 +0x216:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0822714b +0x21b:  movl   $0x1,0x4(%esp)
08227153 +0x223:  lea    -0x1c(%ebp),%eax
08227156 +0x226:  mov    %eax,(%esp)
08227159 +0x229:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0822715e +0x22e:  lea    -0x1c(%ebp),%eax
08227161 +0x231:  mov    %eax,0x4(%esp)
08227165 +0x235:  mov    -0xc(%ebp),%eax
08227168 +0x238:  mov    %eax,(%esp)
0822716b +0x23b:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08227170 +0x240:  mov    -0xc(%ebp),%eax
08227173 +0x243:  add    $0xb24,%eax
08227178 +0x248:  mov    %eax,(%esp)
0822717b +0x24b:  call   083064de <_ZN13CBattle_Field18startUltimateRoundEv>  ; CBattle_Field::startUltimateRound()
08227180 +0x250:  mov    $0x0,%ebx
08227185 +0x255:  lea    -0x1c(%ebp),%eax
08227188 +0x258:  mov    %eax,(%esp)
0822718b +0x25b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08227190 +0x260:  jmp    082271ad <+0x27d>
08227192 +0x262:  mov    %edx,%ebx
08227194 +0x264:  mov    %eax,%esi
08227196 +0x266:  lea    -0x1c(%ebp),%eax
08227199 +0x269:  mov    %eax,(%esp)
0822719c +0x26c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082271a1 +0x271:  mov    %esi,%eax
082271a3 +0x273:  mov    %ebx,%edx
082271a5 +0x275:  mov    %eax,(%esp)
082271a8 +0x278:  call   08ae3750 <_Unwind_Resume>
082271ad +0x27d:  mov    %ebx,%eax
082271af +0x27f:  add    $0x40,%esp
082271b2 +0x282:  pop    %ebx
082271b3 +0x283:  pop    %esi
082271b4 +0x284:  pop    %ebp
082271b5 +0x285:  ret
```

## 反编译 C

```c
// Dispatcher_SelectUltimateDifficulty::dispatch_sig @ 0x8226f30

/* Dispatcher_SelectUltimateDifficulty::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SelectUltimateDifficulty::dispatch_sig
          (Dispatcher_SelectUltimateDifficulty *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CUser *pCVar4;
  undefined4 uVar5;
  PacketGuard local_20 [15];
  char local_11;
  CParty *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 != 5) {
    return 0;
  }
  local_10 = (CParty *)CUser::GetParty(param_1);
  if ((local_10 == (CParty *)0x0) ||
     (pCVar4 = (CUser *)CParty::getManager(local_10), pCVar4 != param_1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  iVar3 = CBattle_Field::getBloodState((CBattle_Field *)(local_10 + 0xb24));
  if (2 < iVar3) {
    return 0;
  }
  local_11 = '\0';
  cVar2 = PacketBuf::get_byte(param_2,&local_11);
  if (cVar2 != '\x01') {
    uVar5 = LineFunc(0xe2d9,
                     "virtual int Dispatcher_SelectUltimateDifficulty::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  if ((local_11 != '\x01') && (local_11 != '\x02')) {
    LogManager::logFormat
              (1,"PacketDispatcher_Impl_1.cpp",
               "virtual int Dispatcher_SelectUltimateDifficulty::dispatch_sig(CUser*, PacketBuf&)",
               0xe2dd,"ULTIMATE_LOG : Difficulty ERROR!! difficulty (%d)\n",(int)local_11);
    return 0;
  }
  if ((*(int *)(local_10 + 0xcac) == 0) ||
     (iVar3 = CDungeon::get_index(*(CDungeon **)(local_10 + 0xcac)), iVar3 != 0x2aff)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    LogManager::logFormat
              (1,"PacketDispatcher_Impl_1.cpp",
               "virtual int Dispatcher_SelectUltimateDifficulty::dispatch_sig(CUser*, PacketBuf&)",
               0xe2e3,"ULTIMATE_LOG : Dispatcher_SelectUltimateDifficulty ERROR!!\n");
  }
  else {
    cVar2 = CBattle_Field::getUltimateDifficylty((CBattle_Field *)(local_10 + 0xb24));
    if (cVar2 == '\0') {
      CBattle_Field::setUltimateDifficulty((CBattle_Field *)(local_10 + 0xb24),local_11);
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0822711d to 0822717f has its CatchHandler @ 08227192 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x13e);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)local_11);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CParty::send_to_party(local_10,local_20);
      CBattle_Field::startUltimateRound((CBattle_Field *)(local_10 + 0xb24));
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return 0;
}
```
