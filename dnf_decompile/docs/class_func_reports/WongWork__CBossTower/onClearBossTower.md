# onClearBossTower

`_ZN8WongWork10CBossTower16onClearBossTowerEv`

`WongWork::CBossTower::onClearBossTower()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08144508` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08144508  _ZN8WongWork10CBossTower16onClearBossTowerEv
#           WongWork::CBossTower::onClearBossTower()
# range [0x08144508, 0x081446a1]
08144508 +0x000:  push   %ebp
08144509 +0x001:  mov    %esp,%ebp
0814450b +0x003:  push   %esi
0814450c +0x004:  push   %ebx
0814450d +0x005:  sub    $0x30,%esp
08144510 +0x008:  mov    0x8(%ebp),%eax
08144513 +0x00b:  mov    0x4(%eax),%eax
08144516 +0x00e:  mov    0xcd8(%eax),%eax
0814451c +0x014:  cmp    $0x1,%eax
0814451f +0x017:  jne    0814459c <+0x94>
08144521 +0x019:  lea    -0x14(%ebp),%eax
08144524 +0x01c:  mov    %eax,(%esp)
08144527 +0x01f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814452c +0x024:  movl   $0xfe,0x8(%esp)
08144534 +0x02c:  movl   $0x0,0x4(%esp)
0814453c +0x034:  lea    -0x14(%ebp),%eax
0814453f +0x037:  mov    %eax,(%esp)
08144542 +0x03a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08144547 +0x03f:  movl   $0x1,0x4(%esp)
0814454f +0x047:  lea    -0x14(%ebp),%eax
08144552 +0x04a:  mov    %eax,(%esp)
08144555 +0x04d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0814455a +0x052:  mov    0x8(%ebp),%eax
0814455d +0x055:  mov    0x4(%eax),%eax
08144560 +0x058:  lea    -0x14(%ebp),%edx
08144563 +0x05b:  mov    %edx,0x4(%esp)
08144567 +0x05f:  mov    %eax,(%esp)
0814456a +0x062:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0814456f +0x067:  jmp    0814458c <+0x84>
08144571 +0x069:  mov    %edx,%ebx
08144573 +0x06b:  mov    %eax,%esi
08144575 +0x06d:  lea    -0x14(%ebp),%eax
08144578 +0x070:  mov    %eax,(%esp)
0814457b +0x073:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08144580 +0x078:  mov    %esi,%eax
08144582 +0x07a:  mov    %ebx,%edx
08144584 +0x07c:  mov    %eax,(%esp)
08144587 +0x07f:  call   08ae3750 <_Unwind_Resume>
0814458c +0x084:  lea    -0x14(%ebp),%eax
0814458f +0x087:  mov    %eax,(%esp)
08144592 +0x08a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08144597 +0x08f:  jmp    08144625 <+0x11d>
0814459c +0x094:  mov    0x8(%ebp),%eax
0814459f +0x097:  mov    %eax,(%esp)
081445a2 +0x09a:  call   08144d54 <_ZN8WongWork10CBossTower17generateRewardExpEv>  ; WongWork::CBossTower::generateRewardExp()
081445a7 +0x09f:  xor    $0x1,%eax
081445aa +0x0a2:  test   %al,%al
081445ac +0x0a4:  je     081445b8 <+0xb0>
081445ae +0x0a6:  mov    $0x0,%eax
081445b3 +0x0ab:  jmp    0814469b <+0x193>
081445b8 +0x0b0:  mov    0x8(%ebp),%eax
081445bb +0x0b3:  mov    %eax,(%esp)
081445be +0x0b6:  call   08144e36 <_ZN8WongWork10CBossTower18generateRewardItemEv>  ; WongWork::CBossTower::generateRewardItem()
081445c3 +0x0bb:  xor    $0x1,%eax
081445c6 +0x0be:  test   %al,%al
081445c8 +0x0c0:  je     081445d4 <+0xcc>
081445ca +0x0c2:  mov    $0x0,%eax
081445cf +0x0c7:  jmp    0814469b <+0x193>
081445d4 +0x0cc:  mov    0x8(%ebp),%eax
081445d7 +0x0cf:  mov    %eax,(%esp)
081445da +0x0d2:  call   0814432a <_ZN8WongWork10CBossTower16SendRewardPacketEv>  ; WongWork::CBossTower::SendRewardPacket()
081445df +0x0d7:  xor    $0x1,%eax
081445e2 +0x0da:  test   %al,%al
081445e4 +0x0dc:  je     081445f0 <+0xe8>
081445e6 +0x0de:  mov    $0x0,%eax
081445eb +0x0e3:  jmp    0814469b <+0x193>
081445f0 +0x0e8:  mov    0x8(%ebp),%eax
081445f3 +0x0eb:  mov    %eax,(%esp)
081445f6 +0x0ee:  call   081446a2 <_ZN8WongWork10CBossTower15InsertRewardExpEv>  ; WongWork::CBossTower::InsertRewardExp()
081445fb +0x0f3:  xor    $0x1,%eax
081445fe +0x0f6:  test   %al,%al
08144600 +0x0f8:  je     0814460c <+0x104>
08144602 +0x0fa:  mov    $0x0,%eax
08144607 +0x0ff:  jmp    0814469b <+0x193>
0814460c +0x104:  mov    0x8(%ebp),%eax
0814460f +0x107:  mov    %eax,(%esp)
08144612 +0x10a:  call   081447a0 <_ZN8WongWork10CBossTower17InsertRewardItemsEv>  ; WongWork::CBossTower::InsertRewardItems()
08144617 +0x10f:  xor    $0x1,%eax
0814461a +0x112:  test   %al,%al
0814461c +0x114:  je     08144625 <+0x11d>
0814461e +0x116:  mov    $0x0,%eax
08144623 +0x11b:  jmp    0814469b <+0x193>
08144625 +0x11d:  mov    0x8(%ebp),%eax
08144628 +0x120:  mov    %eax,(%esp)
0814462b +0x123:  call   081441d4 <_ZN8WongWork10CBossTower14SendELPLPacketEv>  ; WongWork::CBossTower::SendELPLPacket()
08144630 +0x128:  xor    $0x1,%eax
08144633 +0x12b:  test   %al,%al
08144635 +0x12d:  je     0814463e <+0x136>
08144637 +0x12f:  mov    $0x0,%eax
0814463c +0x134:  jmp    0814469b <+0x193>
0814463e +0x136:  mov    0x8(%ebp),%eax
08144641 +0x139:  mov    0x4(%eax),%eax
08144644 +0x13c:  movl   $0x2,0x4(%esp)
0814464c +0x144:  mov    %eax,(%esp)
0814464f +0x147:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
08144654 +0x14c:  mov    0x8(%ebp),%eax
08144657 +0x14f:  mov    0xaf0(%eax),%ebx
0814465d +0x155:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08144662 +0x15a:  movl   $0xa4,0x18(%esp)
0814466a +0x162:  movl   $0xa4,0x14(%esp)
08144672 +0x16a:  movl   $0x14,0x10(%esp)
0814467a +0x172:  movl   $0xa4,0xc(%esp)
08144682 +0x17a:  mov    %ebx,0x8(%esp)
08144686 +0x17e:  movl   $0x7,0x4(%esp)
0814468e +0x186:  mov    %eax,(%esp)
08144691 +0x189:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08144696 +0x18e:  mov    $0x1,%eax
0814469b +0x193:  add    $0x30,%esp
0814469e +0x196:  pop    %ebx
0814469f +0x197:  pop    %esi
081446a0 +0x198:  pop    %ebp
081446a1 +0x199:  ret
```

## 反编译 C

```c
// WongWork::CBossTower::onClearBossTower @ 0x8144508

/* WongWork::CBossTower::onClearBossTower() */

bool __thiscall WongWork::CBossTower::onClearBossTower(CBossTower *this)

{
  undefined4 uVar1;
  char cVar2;
  TimerQueue *pTVar3;
  PacketGuard local_18 [12];
  
  if (*(int *)(*(int *)(this + 4) + 0xcd8) == 1) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08144542 to 0814456e has its CatchHandler @ 08144571 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xfe);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CParty::send_to_party(*(CParty **)(this + 4),local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  else {
    cVar2 = generateRewardExp(this);
    if (cVar2 != '\x01') {
      return false;
    }
    cVar2 = generateRewardItem(this);
    if (cVar2 != '\x01') {
      return false;
    }
    cVar2 = SendRewardPacket(this);
    if (cVar2 != '\x01') {
      return false;
    }
    cVar2 = InsertRewardExp(this);
    if (cVar2 != '\x01') {
      return false;
    }
    cVar2 = InsertRewardItems(this);
    if (cVar2 != '\x01') {
      return false;
    }
  }
  cVar2 = SendELPLPacket(this);
  if (cVar2 == '\x01') {
    CParty::SetEPLPState(*(CParty **)(this + 4),'\x02');
    uVar1 = *(undefined4 *)(this + 0xaf0);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,7,uVar1,0xa4,0x14,0xa4,0xa4);
  }
  return cVar2 == '\x01';
}
```
