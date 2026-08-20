# dispatch_sig

`_ZN18DisPatcher_Lottery12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_Lottery::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_Lottery` | `0x081f8380` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f8380  _ZN18DisPatcher_Lottery12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_Lottery::dispatch_sig(CUser*, PacketBuf&)
# range [0x081f8380, 0x081f8601]
081f8380 +0x000:  push   %ebp
081f8381 +0x001:  mov    %esp,%ebp
081f8383 +0x003:  push   %esi
081f8384 +0x004:  push   %ebx
081f8385 +0x005:  sub    $0x50,%esp
081f8388 +0x008:  mov    0xc(%ebp),%eax
081f838b +0x00b:  mov    %eax,(%esp)
081f838e +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f8393 +0x013:  cmp    $0x2,%eax
081f8396 +0x016:  setle  %al
081f8399 +0x019:  test   %al,%al
081f839b +0x01b:  je     081f83a7 <+0x27>
081f839d +0x01d:  mov    $0x0,%ebx
081f83a2 +0x022:  jmp    081f85f9 <+0x279>
081f83a7 +0x027:  mov    0xc(%ebp),%eax
081f83aa +0x02a:  mov    %eax,(%esp)
081f83ad +0x02d:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081f83b2 +0x032:  test   %al,%al
081f83b4 +0x034:  je     081f845b <+0xdb>
081f83ba +0x03a:  lea    -0x2c(%ebp),%eax
081f83bd +0x03d:  mov    %eax,(%esp)
081f83c0 +0x040:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f83c5 +0x045:  movl   $0x1d,0x8(%esp)
081f83cd +0x04d:  movl   $0x1,0x4(%esp)
081f83d5 +0x055:  lea    -0x2c(%ebp),%eax
081f83d8 +0x058:  mov    %eax,(%esp)
081f83db +0x05b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f83e0 +0x060:  movl   $0x0,0x4(%esp)
081f83e8 +0x068:  lea    -0x2c(%ebp),%eax
081f83eb +0x06b:  mov    %eax,(%esp)
081f83ee +0x06e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f83f3 +0x073:  movl   $0xda,0x4(%esp)
081f83fb +0x07b:  lea    -0x2c(%ebp),%eax
081f83fe +0x07e:  mov    %eax,(%esp)
081f8401 +0x081:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f8406 +0x086:  movl   $0x1,0x4(%esp)
081f840e +0x08e:  lea    -0x2c(%ebp),%eax
081f8411 +0x091:  mov    %eax,(%esp)
081f8414 +0x094:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f8419 +0x099:  lea    -0x2c(%ebp),%eax
081f841c +0x09c:  mov    %eax,0x4(%esp)
081f8420 +0x0a0:  mov    0xc(%ebp),%eax
081f8423 +0x0a3:  mov    %eax,(%esp)
081f8426 +0x0a6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f842b +0x0ab:  mov    $0x0,%ebx
081f8430 +0x0b0:  lea    -0x2c(%ebp),%eax
081f8433 +0x0b3:  mov    %eax,(%esp)
081f8436 +0x0b6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f843b +0x0bb:  jmp    081f85f9 <+0x279>
081f8440 +0x0c0:  mov    %edx,%ebx
081f8442 +0x0c2:  mov    %eax,%esi
081f8444 +0x0c4:  lea    -0x2c(%ebp),%eax
081f8447 +0x0c7:  mov    %eax,(%esp)
081f844a +0x0ca:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f844f +0x0cf:  mov    %esi,%eax
081f8451 +0x0d1:  mov    %ebx,%edx
081f8453 +0x0d3:  mov    %eax,(%esp)
081f8456 +0x0d6:  call   08ae3750 <_Unwind_Resume>
081f845b +0x0db:  lea    -0x1f(%ebp),%eax
081f845e +0x0de:  add    $0xd,%eax
081f8461 +0x0e1:  mov    %eax,0x4(%esp)
081f8465 +0x0e5:  mov    0x10(%ebp),%eax
081f8468 +0x0e8:  mov    %eax,(%esp)
081f846b +0x0eb:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081f8470 +0x0f0:  xor    $0x1,%eax
081f8473 +0x0f3:  test   %al,%al
081f8475 +0x0f5:  je     081f84a2 <+0x122>
081f8477 +0x0f7:  movl   $0x0,0xc(%esp)
081f847f +0x0ff:  movl   $0x0,0x8(%esp)
081f8487 +0x107:  movl   $&_ZZN18DisPatcher_Lottery12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f848f +0x10f:  movl   $0x861c,(%esp)
081f8496 +0x116:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f849b +0x11b:  mov    %eax,%ebx
081f849d +0x11d:  jmp    081f85f9 <+0x279>
081f84a2 +0x122:  movzwl -0x12(%ebp),%eax
081f84a6 +0x126:  cwtl
081f84a7 +0x127:  mov    %eax,0x4(%esp)
081f84ab +0x12b:  mov    0xc(%ebp),%eax
081f84ae +0x12e:  mov    %eax,(%esp)
081f84b1 +0x131:  call   086733a2 <_ZN5CUser12lottery_itemEi>  ; CUser::lottery_item(int)
081f84b6 +0x136:  mov    %eax,-0x10(%ebp)
081f84b9 +0x139:  cmpl   $0x0,-0x10(%ebp)
081f84bd +0x13d:  jle    081f8563 <+0x1e3>
081f84c3 +0x143:  lea    -0x38(%ebp),%eax
081f84c6 +0x146:  mov    %eax,(%esp)
081f84c9 +0x149:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f84ce +0x14e:  movl   $0x1d,0x8(%esp)
081f84d6 +0x156:  movl   $0x1,0x4(%esp)
081f84de +0x15e:  lea    -0x38(%ebp),%eax
081f84e1 +0x161:  mov    %eax,(%esp)
081f84e4 +0x164:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f84e9 +0x169:  movl   $0x0,0x4(%esp)
081f84f1 +0x171:  lea    -0x38(%ebp),%eax
081f84f4 +0x174:  mov    %eax,(%esp)
081f84f7 +0x177:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f84fc +0x17c:  mov    -0x10(%ebp),%eax
081f84ff +0x17f:  mov    %eax,0x4(%esp)
081f8503 +0x183:  lea    -0x38(%ebp),%eax
081f8506 +0x186:  mov    %eax,(%esp)
081f8509 +0x189:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f850e +0x18e:  movl   $0x1,0x4(%esp)
081f8516 +0x196:  lea    -0x38(%ebp),%eax
081f8519 +0x199:  mov    %eax,(%esp)
081f851c +0x19c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f8521 +0x1a1:  lea    -0x38(%ebp),%eax
081f8524 +0x1a4:  mov    %eax,0x4(%esp)
081f8528 +0x1a8:  mov    0xc(%ebp),%eax
081f852b +0x1ab:  mov    %eax,(%esp)
081f852e +0x1ae:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f8533 +0x1b3:  mov    $0x0,%ebx
081f8538 +0x1b8:  lea    -0x38(%ebp),%eax
081f853b +0x1bb:  mov    %eax,(%esp)
081f853e +0x1be:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f8543 +0x1c3:  jmp    081f85f9 <+0x279>
081f8548 +0x1c8:  mov    %edx,%ebx
081f854a +0x1ca:  mov    %eax,%esi
081f854c +0x1cc:  lea    -0x38(%ebp),%eax
081f854f +0x1cf:  mov    %eax,(%esp)
081f8552 +0x1d2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f8557 +0x1d7:  mov    %esi,%eax
081f8559 +0x1d9:  mov    %ebx,%edx
081f855b +0x1db:  mov    %eax,(%esp)
081f855e +0x1de:  call   08ae3750 <_Unwind_Resume>
081f8563 +0x1e3:  mov    0xc(%ebp),%eax
081f8566 +0x1e6:  mov    %eax,(%esp)
081f8569 +0x1e9:  call   082307ba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5e64>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5e64
081f856e +0x1ee:  test   %eax,%eax
081f8570 +0x1f0:  setne  %al
081f8573 +0x1f3:  test   %al,%al
081f8575 +0x1f5:  je     081f85d9 <+0x259>
081f8577 +0x1f7:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081f857e +0x1fe:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081f8583 +0x203:  mov    %eax,%ebx
081f8585 +0x205:  mov    0xc(%ebp),%eax
081f8588 +0x208:  mov    %eax,(%esp)
081f858b +0x20b:  call   082307ba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5e64>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5e64
081f8590 +0x210:  mov    %ebx,%edx
081f8592 +0x212:  sub    %eax,%edx
081f8594 +0x214:  mov    %edx,%eax
081f8596 +0x216:  mov    %eax,-0xc(%ebp)
081f8599 +0x219:  cmpl   $0x2,-0xc(%ebp)
081f859d +0x21d:  ja     081f85d9 <+0x259>
081f859f +0x21f:  mov    0xc(%ebp),%eax
081f85a2 +0x222:  mov    %eax,(%esp)
081f85a5 +0x225:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081f85aa +0x22a:  movl   $0x0,0x14(%esp)
081f85b2 +0x232:  movl   $0x0,0x10(%esp)
081f85ba +0x23a:  movl   $0x1,0xc(%esp)
081f85c2 +0x242:  movl   $0x334,0x8(%esp)
081f85ca +0x24a:  mov    0xc(%ebp),%edx
081f85cd +0x24d:  mov    %edx,0x4(%esp)
081f85d1 +0x251:  mov    %eax,(%esp)
081f85d4 +0x254:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081f85d9 +0x259:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081f85e0 +0x260:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081f85e5 +0x265:  mov    %eax,0x4(%esp)
081f85e9 +0x269:  mov    0xc(%ebp),%eax
081f85ec +0x26c:  mov    %eax,(%esp)
081f85ef +0x26f:  call   082307c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5e72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5e72
081f85f4 +0x274:  mov    $0x0,%ebx
081f85f9 +0x279:  mov    %ebx,%eax
081f85fb +0x27b:  add    $0x50,%esp
081f85fe +0x27e:  pop    %ebx
081f85ff +0x27f:  pop    %esi
081f8600 +0x280:  pop    %ebp
081f8601 +0x281:  ret
```

## 反编译 C

```c
// DisPatcher_Lottery::dispatch_sig @ 0x81f8380

/* DisPatcher_Lottery::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_Lottery::dispatch_sig(DisPatcher_Lottery *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CHackAnalyzer *pCVar4;
  ulong uVar5;
  undefined4 uVar6;
  PacketGuard local_3c [12];
  PacketGuard local_30 [26];
  short local_16;
  int local_14;
  uint local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar6 = 0;
  }
  else {
    cVar1 = CUser::CheckInTrade(param_1);
    if (cVar1 == '\0') {
      cVar1 = PacketBuf::get_short(param_2,&local_16);
      if (cVar1 == '\x01') {
        local_14 = CUser::lottery_item(param_1,(int)local_16);
        if (local_14 < 1) {
          iVar2 = CUser::getLastLotteryTime(param_1);
          if (iVar2 != 0) {
            iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
            iVar3 = CUser::getLastLotteryTime(param_1);
            local_10 = iVar2 - iVar3;
            if (local_10 < 3) {
              pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x334,1,0,0);
            }
          }
          uVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          CUser::setLastLotteryTime(param_1,uVar5);
          uVar6 = 0;
        }
        else {
          PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 081f84e4 to 081f8532 has its CatchHandler @ 081f8548 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,0x1d);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,local_14);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
          CUser::Send(param_1,local_3c);
          uVar6 = 0;
          PacketGuard::~PacketGuard(local_3c);
        }
      }
      else {
        uVar6 = LineFunc(0x861c,"virtual int DisPatcher_Lottery::dispatch_sig(CUser*, PacketBuf&)",0
                         ,0);
      }
    }
    else {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 081f83db to 081f842a has its CatchHandler @ 081f8440 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x1d);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0xda);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send(param_1,local_30);
      uVar6 = 0;
      PacketGuard::~PacketGuard(local_30);
    }
  }
  return uVar6;
}
```
