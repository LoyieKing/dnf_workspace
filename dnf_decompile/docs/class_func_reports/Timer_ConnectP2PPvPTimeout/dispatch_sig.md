# dispatch_sig

`_ZN26Timer_ConnectP2PPvPTimeout12dispatch_sigEiij`

`Timer_ConnectP2PPvPTimeout::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_ConnectP2PPvPTimeout` | `0x08639834` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08639834  _ZN26Timer_ConnectP2PPvPTimeout12dispatch_sigEiij
#           Timer_ConnectP2PPvPTimeout::dispatch_sig(int, int, unsigned int)
# range [0x08639834, 0x086398a7]
08639834 +0x00:  push   %ebp
08639835 +0x01:  mov    %esp,%ebp
08639837 +0x03:  sub    $0x28,%esp
0863983a +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0863983f +0x0b:  movl   $0x3b,0xc(%esp)
08639847 +0x13:  movl   $0x0,0x8(%esp)
0863984f +0x1b:  mov    0xc(%ebp),%edx
08639852 +0x1e:  mov    %edx,0x4(%esp)
08639856 +0x22:  mov    %eax,(%esp)
08639859 +0x25:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
0863985e +0x2a:  mov    %eax,-0xc(%ebp)
08639861 +0x2d:  cmpl   $0x0,-0xc(%ebp)
08639865 +0x31:  jne    0863986e <+0x3a>
08639867 +0x33:  mov    $0x0,%eax
0863986c +0x38:  jmp    086398a6 <+0x72>
0863986e +0x3a:  mov    0x10(%ebp),%eax
08639871 +0x3d:  mov    %eax,0x8(%esp)
08639875 +0x41:  movl   $0x3b,0x4(%esp)
0863987d +0x49:  mov    -0xc(%ebp),%eax
08639880 +0x4c:  mov    %eax,(%esp)
08639883 +0x4f:  call   0863bccc <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1dd>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1dd
08639888 +0x54:  xor    $0x1,%eax
0863988b +0x57:  test   %al,%al
0863988d +0x59:  je     08639896 <+0x62>
0863988f +0x5b:  mov    $0x0,%eax
08639894 +0x60:  jmp    086398a6 <+0x72>
08639896 +0x62:  mov    -0xc(%ebp),%eax
08639899 +0x65:  mov    %eax,(%esp)
0863989c +0x68:  call   085ddef6 <_ZN8PvP_Room22OnConnectP2PPvPTimeoutEv>  ; PvP_Room::OnConnectP2PPvPTimeout()
086398a1 +0x6d:  mov    $0x1,%eax
086398a6 +0x72:  leave
086398a7 +0x73:  ret
```

## 反编译 C

```c
// Timer_ConnectP2PPvPTimeout::dispatch_sig @ 0x8639834

/* Timer_ConnectP2PPvPTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_ConnectP2PPvPTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  CGameManager *this;
  PvP_Room *this_00;
  undefined4 uVar2;
  
  this = (CGameManager *)G_CGameManager();
  this_00 = (PvP_Room *)CGameManager::GetPvp(this,param_2,(CUser *)0x0,0x3b);
  if (this_00 == (PvP_Room *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = PvP_Room::CheckTimerKey(this_00,0x3b,param_3);
    if (cVar1 == '\x01') {
      PvP_Room::OnConnectP2PPvPTimeout(this_00);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
