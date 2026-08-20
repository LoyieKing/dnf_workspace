# reqHumanCertify

`_ZN5CUser15reqHumanCertifyEv`

`CUser::reqHumanCertify()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867f26e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867f26e  _ZN5CUser15reqHumanCertifyEv
#           CUser::reqHumanCertify()
# range [0x0867f26e, 0x0867f4c7]
0867f26e +0x000:  push   %ebp
0867f26f +0x001:  mov    %esp,%ebp
0867f271 +0x003:  push   %esi
0867f272 +0x004:  push   %ebx
0867f273 +0x005:  sub    $0x30,%esp
0867f276 +0x008:  mov    0x8(%ebp),%eax
0867f279 +0x00b:  mov    %eax,(%esp)
0867f27c +0x00e:  call   0823021a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58c4
0867f281 +0x013:  xor    $0x1,%eax
0867f284 +0x016:  test   %al,%al
0867f286 +0x018:  je     0867f292 <+0x24>
0867f288 +0x01a:  mov    $0x0,%ebx
0867f28d +0x01f:  jmp    0867f4be <+0x250>
0867f292 +0x024:  mov    0x8(%ebp),%eax
0867f295 +0x027:  add    $0x8e3f0,%eax
0867f29a +0x02c:  mov    %eax,(%esp)
0867f29d +0x02f:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
0867f2a2 +0x034:  mov    0x8(%ebp),%edx
0867f2a5 +0x037:  add    $0x79700,%edx
0867f2ab +0x03d:  movl   $0x0,0x8(%esp)
0867f2b3 +0x045:  mov    %eax,0x4(%esp)
0867f2b7 +0x049:  mov    %edx,(%esp)
0867f2ba +0x04c:  call   086853e6 <_ZN15cUserHistoryLog15RequestCleanPadEjc>  ; cUserHistoryLog::RequestCleanPad(unsigned int, char)
0867f2bf +0x051:  mov    0x8(%ebp),%eax
0867f2c2 +0x054:  add    $0x8e3f0,%eax
0867f2c7 +0x059:  mov    %eax,(%esp)
0867f2ca +0x05c:  call   08695038 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x188d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x188d
0867f2cf +0x061:  movl   $&_ZN10GlobalData19s_capchaDataManagerE,(%esp)
0867f2d6 +0x068:  call   086977fa <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x404f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x404f
0867f2db +0x06d:  test   %al,%al
0867f2dd +0x06f:  je     0867f2e9 <+0x7b>
0867f2df +0x071:  mov    $0x0,%ebx
0867f2e4 +0x076:  jmp    0867f4be <+0x250>
0867f2e9 +0x07b:  movl   $&_ZN10GlobalData19s_capchaDataManagerE,(%esp)
0867f2f0 +0x082:  call   08299f74 <_ZN8WongWork18CCapchaDataManager8peekDataEv>  ; WongWork::CCapchaDataManager::peekData()
0867f2f5 +0x087:  mov    %eax,-0xc(%ebp)
0867f2f8 +0x08a:  mov    -0xc(%ebp),%eax
0867f2fb +0x08d:  mov    0x8(%ebp),%edx
0867f2fe +0x090:  add    $0x8e0ec,%edx
0867f304 +0x096:  movl   $0xa,0x8(%esp)
0867f30c +0x09e:  mov    %eax,0x4(%esp)
0867f310 +0x0a2:  mov    %edx,(%esp)
0867f313 +0x0a5:  call   0807d8a0 <_init+0x198>
0867f318 +0x0aa:  lea    -0x18(%ebp),%eax
0867f31b +0x0ad:  mov    %eax,(%esp)
0867f31e +0x0b0:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867f323 +0x0b5:  movl   $0x7d,0x8(%esp)
0867f32b +0x0bd:  movl   $0x0,0x4(%esp)
0867f333 +0x0c5:  lea    -0x18(%ebp),%eax
0867f336 +0x0c8:  mov    %eax,(%esp)
0867f339 +0x0cb:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867f33e +0x0d0:  movl   $0x5,0x4(%esp)
0867f346 +0x0d8:  lea    -0x18(%ebp),%eax
0867f349 +0x0db:  mov    %eax,(%esp)
0867f34c +0x0de:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867f351 +0x0e3:  mov    -0xc(%ebp),%eax
0867f354 +0x0e6:  mov    0xa(%eax),%eax
0867f357 +0x0e9:  mov    %eax,0x4(%esp)
0867f35b +0x0ed:  lea    -0x18(%ebp),%eax
0867f35e +0x0f0:  mov    %eax,(%esp)
0867f361 +0x0f3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867f366 +0x0f8:  mov    -0xc(%ebp),%eax
0867f369 +0x0fb:  mov    0xa(%eax),%eax
0867f36c +0x0fe:  mov    -0xc(%ebp),%edx
0867f36f +0x101:  add    $0xe,%edx
0867f372 +0x104:  mov    %eax,0x8(%esp)
0867f376 +0x108:  mov    %edx,0x4(%esp)
0867f37a +0x10c:  lea    -0x18(%ebp),%eax
0867f37d +0x10f:  mov    %eax,(%esp)
0867f380 +0x112:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0867f385 +0x117:  mov    0x8(%ebp),%eax
0867f388 +0x11a:  add    $0x8e3f0,%eax
0867f38d +0x11f:  mov    %eax,(%esp)
0867f390 +0x122:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
0867f395 +0x127:  cmp    $0x251b,%eax
0867f39a +0x12c:  jbe    0867f3a3 <+0x135>
0867f39c +0x12e:  mov    $0x1,%eax
0867f3a1 +0x133:  jmp    0867f3a8 <+0x13a>
0867f3a3 +0x135:  mov    $0x0,%eax
0867f3a8 +0x13a:  mov    %eax,0x4(%esp)
0867f3ac +0x13e:  lea    -0x18(%ebp),%eax
0867f3af +0x141:  mov    %eax,(%esp)
0867f3b2 +0x144:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867f3b7 +0x149:  movw   $0x0,-0x1a(%ebp)
0867f3bd +0x14f:  movb   $0x0,-0x1b(%ebp)
0867f3c1 +0x153:  movw   $0x0,-0x1e(%ebp)
0867f3c7 +0x159:  lea    -0x1e(%ebp),%eax
0867f3ca +0x15c:  mov    %eax,0xc(%esp)
0867f3ce +0x160:  lea    -0x1b(%ebp),%eax
0867f3d1 +0x163:  mov    %eax,0x8(%esp)
0867f3d5 +0x167:  lea    -0x1a(%ebp),%eax
0867f3d8 +0x16a:  mov    %eax,0x4(%esp)
0867f3dc +0x16e:  mov    0x8(%ebp),%eax
0867f3df +0x171:  mov    %eax,(%esp)
0867f3e2 +0x174:  call   08649ac4 <_ZN5CUser24GenerateCleanPadVeriDataERtRhS0_>  ; CUser::GenerateCleanPadVeriData(unsigned short&, unsigned char&, unsigned short&)
0867f3e7 +0x179:  movzwl -0x1a(%ebp),%eax
0867f3eb +0x17d:  movzwl %ax,%eax
0867f3ee +0x180:  mov    %eax,0x4(%esp)
0867f3f2 +0x184:  lea    -0x18(%ebp),%eax
0867f3f5 +0x187:  mov    %eax,(%esp)
0867f3f8 +0x18a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867f3fd +0x18f:  movzbl -0x1b(%ebp),%eax
0867f401 +0x193:  movzbl %al,%eax
0867f404 +0x196:  mov    %eax,0x4(%esp)
0867f408 +0x19a:  lea    -0x18(%ebp),%eax
0867f40b +0x19d:  mov    %eax,(%esp)
0867f40e +0x1a0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867f413 +0x1a5:  movzwl -0x1e(%ebp),%eax
0867f417 +0x1a9:  movzwl %ax,%eax
0867f41a +0x1ac:  mov    %eax,0x4(%esp)
0867f41e +0x1b0:  lea    -0x18(%ebp),%eax
0867f421 +0x1b3:  mov    %eax,(%esp)
0867f424 +0x1b6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867f429 +0x1bb:  mov    0x8(%ebp),%eax
0867f42c +0x1be:  mov    0x8e0fc(%eax),%eax
0867f432 +0x1c4:  movzbl %al,%eax
0867f435 +0x1c7:  mov    %eax,0x4(%esp)
0867f439 +0x1cb:  lea    -0x18(%ebp),%eax
0867f43c +0x1ce:  mov    %eax,(%esp)
0867f43f +0x1d1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867f444 +0x1d6:  movl   $0x0,0x4(%esp)
0867f44c +0x1de:  lea    -0x18(%ebp),%eax
0867f44f +0x1e1:  mov    %eax,(%esp)
0867f452 +0x1e4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867f457 +0x1e9:  movl   $0x1,0x4(%esp)
0867f45f +0x1f1:  lea    -0x18(%ebp),%eax
0867f462 +0x1f4:  mov    %eax,(%esp)
0867f465 +0x1f7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867f46a +0x1fc:  lea    -0x18(%ebp),%eax
0867f46d +0x1ff:  mov    %eax,0x4(%esp)
0867f471 +0x203:  mov    0x8(%ebp),%eax
0867f474 +0x206:  mov    %eax,(%esp)
0867f477 +0x209:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0867f47c +0x20e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0867f483 +0x215:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
0867f488 +0x21a:  mov    0x8(%ebp),%edx
0867f48b +0x21d:  mov    %eax,0x8e94c(%edx)
0867f491 +0x223:  mov    $0x1,%ebx
0867f496 +0x228:  lea    -0x18(%ebp),%eax
0867f499 +0x22b:  mov    %eax,(%esp)
0867f49c +0x22e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867f4a1 +0x233:  jmp    0867f4be <+0x250>
0867f4a3 +0x235:  mov    %edx,%ebx
0867f4a5 +0x237:  mov    %eax,%esi
0867f4a7 +0x239:  lea    -0x18(%ebp),%eax
0867f4aa +0x23c:  mov    %eax,(%esp)
0867f4ad +0x23f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867f4b2 +0x244:  mov    %esi,%eax
0867f4b4 +0x246:  mov    %ebx,%edx
0867f4b6 +0x248:  mov    %eax,(%esp)
0867f4b9 +0x24b:  call   08ae3750 <_Unwind_Resume>
0867f4be +0x250:  mov    %ebx,%eax
0867f4c0 +0x252:  add    $0x30,%esp
0867f4c3 +0x255:  pop    %ebx
0867f4c4 +0x256:  pop    %esi
0867f4c5 +0x257:  pop    %ebp
0867f4c6 +0x258:  ret
0867f4c7 +0x259:  nop
```

## 反编译 C

```c
// CUser::reqHumanCertify @ 0x867f26e

/* CUser::reqHumanCertify() */

undefined4 __thiscall CUser::reqHumanCertify(CUser *this)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort local_22;
  byte local_1f;
  ushort local_1e;
  PacketGuard local_1c [12];
  void *local_10;
  
  cVar1 = isHumanCertified(this);
  if (cVar1 == '\x01') {
    uVar2 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(this + 0x8e3f0));
    cUserHistoryLog::RequestCleanPad((cUserHistoryLog *)(this + 0x79700),uVar2,'\0');
    WongWork::CMCAPManager::incExposedCount((CMCAPManager *)(this + 0x8e3f0));
    cVar1 = WongWork::CCapchaDataManager::isEmpty
                      ((CCapchaDataManager *)GlobalData::s_capchaDataManager);
    if (cVar1 == '\0') {
      local_10 = (void *)WongWork::CCapchaDataManager::peekData
                                   ((CCapchaDataManager *)GlobalData::s_capchaDataManager);
      memcpy(this + 0x8e0ec,local_10,10);
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0867f339 to 0867f47b has its CatchHandler @ 0867f4a3 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x7d);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,5);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)((int)local_10 + 10));
      InterfacePacketBuf::put_binary
                ((InterfacePacketBuf *)local_1c,(char *)((int)local_10 + 0xe),
                 *(int *)((int)local_10 + 10));
      uVar2 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(this + 0x8e3f0));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(0x251b < uVar2));
      local_1e = 0;
      local_1f = 0;
      local_22 = 0;
      GenerateCleanPadVeriData(this,&local_1e,&local_1f,&local_22);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)local_1e);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)local_1f);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)local_22);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(uint *)(this + 0x8e0fc) & 0xff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      Send(this,local_1c);
      uVar3 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
      *(undefined4 *)(this + 0x8e94c) = uVar3;
      uVar3 = 1;
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
