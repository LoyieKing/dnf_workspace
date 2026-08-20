# SendEffectItemInfo

`_ZN5CUser18SendEffectItemInfoEj`

`CUser::SendEffectItemInfo(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08659366` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08659366  _ZN5CUser18SendEffectItemInfoEj
#           CUser::SendEffectItemInfo(unsigned int)
# range [0x08659366, 0x0865948b]
08659366 +0x000:  push   %ebp
08659367 +0x001:  mov    %esp,%ebp
08659369 +0x003:  push   %esi
0865936a +0x004:  push   %ebx
0865936b +0x005:  sub    $0x30,%esp
0865936e +0x008:  lea    -0x28(%ebp),%eax
08659371 +0x00b:  mov    %eax,(%esp)
08659374 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08659379 +0x013:  movl   $0xae,0x8(%esp)
08659381 +0x01b:  movl   $0x0,0x4(%esp)
08659389 +0x023:  lea    -0x28(%ebp),%eax
0865938c +0x026:  mov    %eax,(%esp)
0865938f +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08659394 +0x02e:  mov    0x8(%ebp),%eax
08659397 +0x031:  mov    %eax,(%esp)
0865939a +0x034:  call   08696a44 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3299>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3299
0865939f +0x039:  mov    %eax,-0x1c(%ebp)
086593a2 +0x03c:  mov    -0x1c(%ebp),%eax
086593a5 +0x03f:  mov    %eax,(%esp)
086593a8 +0x042:  call   0863d2c0 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17d1>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17d1
086593ad +0x047:  mov    %al,-0x15(%ebp)
086593b0 +0x04a:  movzbl -0x15(%ebp),%eax
086593b4 +0x04e:  mov    %eax,0x4(%esp)
086593b8 +0x052:  lea    -0x28(%ebp),%eax
086593bb +0x055:  mov    %eax,(%esp)
086593be +0x058:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086593c3 +0x05d:  movl   $0x0,-0x14(%ebp)
086593ca +0x064:  jmp    0865942c <+0xc6>
086593cc +0x066:  mov    -0x14(%ebp),%eax
086593cf +0x069:  mov    %eax,0x4(%esp)
086593d3 +0x06d:  mov    -0x1c(%ebp),%eax
086593d6 +0x070:  mov    %eax,(%esp)
086593d9 +0x073:  call   0869b0e4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7939>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7939
086593de +0x078:  mov    (%eax),%eax
086593e0 +0x07a:  mov    %eax,-0x10(%ebp)
086593e3 +0x07d:  mov    -0x14(%ebp),%eax
086593e6 +0x080:  mov    %eax,0x4(%esp)
086593ea +0x084:  mov    -0x1c(%ebp),%eax
086593ed +0x087:  mov    %eax,(%esp)
086593f0 +0x08a:  call   0869b0e4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7939>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7939
086593f5 +0x08f:  mov    0x4(%eax),%eax
086593f8 +0x092:  mov    %eax,-0xc(%ebp)
086593fb +0x095:  mov    -0x10(%ebp),%eax
086593fe +0x098:  mov    %eax,0x4(%esp)
08659402 +0x09c:  lea    -0x28(%ebp),%eax
08659405 +0x09f:  mov    %eax,(%esp)
08659408 +0x0a2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865940d +0x0a7:  mov    0xc(%ebp),%eax
08659410 +0x0aa:  mov    -0xc(%ebp),%edx
08659413 +0x0ad:  mov    %edx,%ecx
08659415 +0x0af:  sub    %eax,%ecx
08659417 +0x0b1:  mov    %ecx,%eax
08659419 +0x0b3:  mov    %eax,0x4(%esp)
0865941d +0x0b7:  lea    -0x28(%ebp),%eax
08659420 +0x0ba:  mov    %eax,(%esp)
08659423 +0x0bd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08659428 +0x0c2:  addl   $0x1,-0x14(%ebp)
0865942c +0x0c6:  movzbl -0x15(%ebp),%eax
08659430 +0x0ca:  cmp    -0x14(%ebp),%eax
08659433 +0x0cd:  setg   %al
08659436 +0x0d0:  test   %al,%al
08659438 +0x0d2:  jne    086593cc <+0x66>
0865943a +0x0d4:  movl   $0x1,0x4(%esp)
08659442 +0x0dc:  lea    -0x28(%ebp),%eax
08659445 +0x0df:  mov    %eax,(%esp)
08659448 +0x0e2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0865944d +0x0e7:  lea    -0x28(%ebp),%eax
08659450 +0x0ea:  mov    %eax,0x4(%esp)
08659454 +0x0ee:  mov    0x8(%ebp),%eax
08659457 +0x0f1:  mov    %eax,(%esp)
0865945a +0x0f4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0865945f +0x0f9:  mov    %eax,%ebx
08659461 +0x0fb:  lea    -0x28(%ebp),%eax
08659464 +0x0fe:  mov    %eax,(%esp)
08659467 +0x101:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865946c +0x106:  mov    %ebx,%eax
0865946e +0x108:  add    $0x30,%esp
08659471 +0x10b:  pop    %ebx
08659472 +0x10c:  pop    %esi
08659473 +0x10d:  pop    %ebp
08659474 +0x10e:  ret
08659475 +0x10f:  mov    %edx,%ebx
08659477 +0x111:  mov    %eax,%esi
08659479 +0x113:  lea    -0x28(%ebp),%eax
0865947c +0x116:  mov    %eax,(%esp)
0865947f +0x119:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08659484 +0x11e:  mov    %esi,%eax
08659486 +0x120:  mov    %ebx,%edx
08659488 +0x122:  mov    %eax,(%esp)
0865948b +0x125:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CUser::SendEffectItemInfo @ 0x8659366

/* CUser::SendEffectItemInfo(unsigned int) */

undefined4 __thiscall CUser::SendEffectItemInfo(CUser *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_2c [12];
  vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *local_20;
  byte local_19;
  uint local_18;
  int local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 0865938f to 0865945e has its CatchHandler @ 08659475 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xae);
  local_20 = (vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *)
             CUserCharacInfo::GetCurCharacEffectItemList((CUserCharacInfo *)this);
  local_19 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::size(local_20);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(uint)local_19);
  for (local_18 = 0; (int)local_18 < (int)(uint)local_19; local_18 = local_18 + 1) {
    piVar1 = (int *)std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                              (local_20,local_18);
    local_14 = *piVar1;
    iVar2 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                      (local_20,local_18);
    local_10 = *(int *)(iVar2 + 4);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_14);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_10 - param_1);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
  uVar3 = Send(this,local_2c);
  PacketGuard::~PacketGuard(local_2c);
  return uVar3;
}
```
