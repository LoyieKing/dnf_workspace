# dispatch_sig

`_ZN27TimerScheduleFiveMinPerUser12dispatch_sigEiij`

`TimerScheduleFiveMinPerUser::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerScheduleFiveMinPerUser` | `0x086341d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086341d2  _ZN27TimerScheduleFiveMinPerUser12dispatch_sigEiij
#           TimerScheduleFiveMinPerUser::dispatch_sig(int, int, unsigned int)
# range [0x086341d2, 0x086342c5]
086341d2 +0x00:  push   %ebp
086341d3 +0x01:  mov    %esp,%ebp
086341d5 +0x03:  push   %edi
086341d6 +0x04:  push   %esi
086341d7 +0x05:  push   %ebx
086341d8 +0x06:  sub    $0x3c,%esp
086341db +0x09:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086341e0 +0x0e:  movl   $0x3,0x8(%esp)
086341e8 +0x16:  mov    0xc(%ebp),%edx
086341eb +0x19:  mov    %edx,0x4(%esp)
086341ef +0x1d:  mov    %eax,(%esp)
086341f2 +0x20:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
086341f7 +0x25:  mov    %eax,-0x1c(%ebp)
086341fa +0x28:  cmpl   $0x0,-0x1c(%ebp)
086341fe +0x2c:  jne    0863420a <+0x38>
08634200 +0x2e:  mov    $0x0,%eax
08634205 +0x33:  jmp    086342be <+0xec>
0863420a +0x38:  mov    -0x1c(%ebp),%eax
0863420d +0x3b:  mov    %eax,(%esp)
08634210 +0x3e:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
08634215 +0x43:  cmp    0x10(%ebp),%eax
08634218 +0x46:  setne  %al
0863421b +0x49:  test   %al,%al
0863421d +0x4b:  je     08634229 <+0x57>
0863421f +0x4d:  mov    $0x0,%eax
08634224 +0x52:  jmp    086342be <+0xec>
08634229 +0x57:  cmpl   $0x0,0x14(%ebp)
0863422d +0x5b:  je     08634246 <+0x74>
0863422f +0x5d:  mov    -0x1c(%ebp),%eax
08634232 +0x60:  mov    %eax,(%esp)
08634235 +0x63:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0863423a +0x68:  cmp    0x14(%ebp),%eax
0863423d +0x6b:  je     08634246 <+0x74>
0863423f +0x6d:  mov    $0x1,%eax
08634244 +0x72:  jmp    0863424b <+0x79>
08634246 +0x74:  mov    $0x0,%eax
0863424b +0x79:  test   %al,%al
0863424d +0x7b:  je     08634256 <+0x84>
0863424f +0x7d:  mov    $0x0,%eax
08634254 +0x82:  jmp    086342be <+0xec>
08634256 +0x84:  mov    -0x1c(%ebp),%eax
08634259 +0x87:  mov    %eax,(%esp)
0863425c +0x8a:  call   08652f0c <_ZN5CUser14WorkPerFiveMinEv>  ; CUser::WorkPerFiveMin()
08634261 +0x8f:  mov    -0x1c(%ebp),%eax
08634264 +0x92:  mov    %eax,(%esp)
08634267 +0x95:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0863426c +0x9a:  mov    %eax,%edi
0863426e +0x9c:  mov    -0x1c(%ebp),%eax
08634271 +0x9f:  mov    %eax,(%esp)
08634274 +0xa2:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
08634279 +0xa7:  mov    %eax,%esi
0863427b +0xa9:  mov    -0x1c(%ebp),%eax
0863427e +0xac:  mov    %eax,(%esp)
08634281 +0xaf:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08634286 +0xb4:  mov    %eax,%ebx
08634288 +0xb6:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863428d +0xbb:  mov    %edi,0x18(%esp)
08634291 +0xbf:  mov    %esi,0x14(%esp)
08634295 +0xc3:  movl   $0x12c,0x10(%esp)
0863429d +0xcb:  movl   $0x5f,0xc(%esp)
086342a5 +0xd3:  mov    %ebx,0x8(%esp)
086342a9 +0xd7:  movl   $0x0,0x4(%esp)
086342b1 +0xdf:  mov    %eax,(%esp)
086342b4 +0xe2:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086342b9 +0xe7:  mov    $0x1,%eax
086342be +0xec:  add    $0x3c,%esp
086342c1 +0xef:  pop    %ebx
086342c2 +0xf0:  pop    %esi
086342c3 +0xf1:  pop    %edi
086342c4 +0xf2:  pop    %ebp
086342c5 +0xf3:  ret
```

## 反编译 C

```c
// TimerScheduleFiveMinPerUser::dispatch_sig @ 0x86341d2

/* TimerScheduleFiveMinPerUser::dispatch_sig(int, int, unsigned int) */

bool __thiscall
TimerScheduleFiveMinPerUser::dispatch_sig
          (TimerScheduleFiveMinPerUser *this,int param_1,int param_2,uint param_3)

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
    CUser::WorkPerFiveMin((CUser *)this_00);
    uVar4 = CUserCharacInfo::getCurCharacNo(this_00);
    uVar5 = CUserCharacInfo::GetLoginTick(this_00);
    uVar6 = CUser::GetUID((CUser *)this_00);
    pTVar7 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar7,0,uVar6,0x5f,300,uVar5,uVar4);
  }
  return !bVar1;
}
```
