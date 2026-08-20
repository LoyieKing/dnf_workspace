# dispatch_sig

`_ZN26TimerScheduleTenMinPerUser12dispatch_sigEiij`

`TimerScheduleTenMinPerUser::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerScheduleTenMinPerUser` | `0x086342c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086342c6  _ZN26TimerScheduleTenMinPerUser12dispatch_sigEiij
#           TimerScheduleTenMinPerUser::dispatch_sig(int, int, unsigned int)
# range [0x086342c6, 0x086343b9]
086342c6 +0x00:  push   %ebp
086342c7 +0x01:  mov    %esp,%ebp
086342c9 +0x03:  push   %edi
086342ca +0x04:  push   %esi
086342cb +0x05:  push   %ebx
086342cc +0x06:  sub    $0x3c,%esp
086342cf +0x09:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086342d4 +0x0e:  movl   $0x3,0x8(%esp)
086342dc +0x16:  mov    0xc(%ebp),%edx
086342df +0x19:  mov    %edx,0x4(%esp)
086342e3 +0x1d:  mov    %eax,(%esp)
086342e6 +0x20:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
086342eb +0x25:  mov    %eax,-0x1c(%ebp)
086342ee +0x28:  cmpl   $0x0,-0x1c(%ebp)
086342f2 +0x2c:  jne    086342fe <+0x38>
086342f4 +0x2e:  mov    $0x0,%eax
086342f9 +0x33:  jmp    086343b2 <+0xec>
086342fe +0x38:  mov    -0x1c(%ebp),%eax
08634301 +0x3b:  mov    %eax,(%esp)
08634304 +0x3e:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
08634309 +0x43:  cmp    0x10(%ebp),%eax
0863430c +0x46:  setne  %al
0863430f +0x49:  test   %al,%al
08634311 +0x4b:  je     0863431d <+0x57>
08634313 +0x4d:  mov    $0x0,%eax
08634318 +0x52:  jmp    086343b2 <+0xec>
0863431d +0x57:  cmpl   $0x0,0x14(%ebp)
08634321 +0x5b:  je     0863433a <+0x74>
08634323 +0x5d:  mov    -0x1c(%ebp),%eax
08634326 +0x60:  mov    %eax,(%esp)
08634329 +0x63:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0863432e +0x68:  cmp    0x14(%ebp),%eax
08634331 +0x6b:  je     0863433a <+0x74>
08634333 +0x6d:  mov    $0x1,%eax
08634338 +0x72:  jmp    0863433f <+0x79>
0863433a +0x74:  mov    $0x0,%eax
0863433f +0x79:  test   %al,%al
08634341 +0x7b:  je     0863434a <+0x84>
08634343 +0x7d:  mov    $0x0,%eax
08634348 +0x82:  jmp    086343b2 <+0xec>
0863434a +0x84:  mov    -0x1c(%ebp),%eax
0863434d +0x87:  mov    %eax,(%esp)
08634350 +0x8a:  call   08653196 <_ZN5CUser13WorkPerTenMinEv>  ; CUser::WorkPerTenMin()
08634355 +0x8f:  mov    -0x1c(%ebp),%eax
08634358 +0x92:  mov    %eax,(%esp)
0863435b +0x95:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08634360 +0x9a:  mov    %eax,%edi
08634362 +0x9c:  mov    -0x1c(%ebp),%eax
08634365 +0x9f:  mov    %eax,(%esp)
08634368 +0xa2:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
0863436d +0xa7:  mov    %eax,%esi
0863436f +0xa9:  mov    -0x1c(%ebp),%eax
08634372 +0xac:  mov    %eax,(%esp)
08634375 +0xaf:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0863437a +0xb4:  mov    %eax,%ebx
0863437c +0xb6:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08634381 +0xbb:  mov    %edi,0x18(%esp)
08634385 +0xbf:  mov    %esi,0x14(%esp)
08634389 +0xc3:  movl   $0x258,0x10(%esp)
08634391 +0xcb:  movl   $0x60,0xc(%esp)
08634399 +0xd3:  mov    %ebx,0x8(%esp)
0863439d +0xd7:  movl   $0x0,0x4(%esp)
086343a5 +0xdf:  mov    %eax,(%esp)
086343a8 +0xe2:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086343ad +0xe7:  mov    $0x1,%eax
086343b2 +0xec:  add    $0x3c,%esp
086343b5 +0xef:  pop    %ebx
086343b6 +0xf0:  pop    %esi
086343b7 +0xf1:  pop    %edi
086343b8 +0xf2:  pop    %ebp
086343b9 +0xf3:  ret
```

## 反编译 C

```c
// TimerScheduleTenMinPerUser::dispatch_sig @ 0x86342c6

/* TimerScheduleTenMinPerUser::dispatch_sig(int, int, unsigned int) */

bool __thiscall
TimerScheduleTenMinPerUser::dispatch_sig
          (TimerScheduleTenMinPerUser *this,int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  CUserCharacInfo *this_00;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TimerQueue *pTVar7;
  
  iVar2 = G_CGameManager();
  this_00 = (CUserCharacInfo *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUserCharacInfo *)0x0) {
    return false;
  }
  iVar2 = CUserCharacInfo::GetLoginTick(this_00);
  if (iVar2 != param_2) {
    return false;
  }
  if ((param_3 == 0) || (uVar3 = CUserCharacInfo::getCurCharacNo(this_00), uVar3 == param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    CUser::WorkPerTenMin((CUser *)this_00);
    uVar4 = CUserCharacInfo::getCurCharacNo(this_00);
    uVar5 = CUserCharacInfo::GetLoginTick(this_00);
    uVar6 = CUser::GetUID((CUser *)this_00);
    pTVar7 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar7,0,uVar6,0x60,600,uVar5,uVar4);
  }
  return !bVar1;
}
```
