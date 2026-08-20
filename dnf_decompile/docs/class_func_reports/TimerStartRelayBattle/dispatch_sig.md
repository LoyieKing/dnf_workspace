# dispatch_sig

`_ZN21TimerStartRelayBattle12dispatch_sigEiij`

`TimerStartRelayBattle::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerStartRelayBattle` | `0x0863640c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863640c  _ZN21TimerStartRelayBattle12dispatch_sigEiij
#           TimerStartRelayBattle::dispatch_sig(int, int, unsigned int)
# range [0x0863640c, 0x0863647d]
0863640c +0x00:  push   %ebp
0863640d +0x01:  mov    %esp,%ebp
0863640f +0x03:  sub    $0x28,%esp
08636412 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08636417 +0x0b:  movl   $0x63,0xc(%esp)
0863641f +0x13:  movl   $0x0,0x8(%esp)
08636427 +0x1b:  mov    0xc(%ebp),%edx
0863642a +0x1e:  mov    %edx,0x4(%esp)
0863642e +0x22:  mov    %eax,(%esp)
08636431 +0x25:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
08636436 +0x2a:  mov    %eax,-0xc(%ebp)
08636439 +0x2d:  cmpl   $0x0,-0xc(%ebp)
0863643d +0x31:  jne    08636446 <+0x3a>
0863643f +0x33:  mov    $0x0,%eax
08636444 +0x38:  jmp    0863647c <+0x70>
08636446 +0x3a:  mov    -0xc(%ebp),%eax
08636449 +0x3d:  add    $0x620,%eax
0863644e +0x42:  mov    %eax,(%esp)
08636451 +0x45:  call   0863bca8 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1b9>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1b9
08636456 +0x4a:  cmp    0x10(%ebp),%eax
08636459 +0x4d:  setne  %al
0863645c +0x50:  test   %al,%al
0863645e +0x52:  je     08636467 <+0x5b>
08636460 +0x54:  mov    $0x0,%eax
08636465 +0x59:  jmp    0863647c <+0x70>
08636467 +0x5b:  mov    -0xc(%ebp),%eax
0863646a +0x5e:  add    $0x620,%eax
0863646f +0x63:  mov    %eax,(%esp)
08636472 +0x66:  call   085de358 <_ZN15CRelayBattleMgr7OnFightEv>  ; CRelayBattleMgr::OnFight()
08636477 +0x6b:  mov    $0x1,%eax
0863647c +0x70:  leave
0863647d +0x71:  ret
```

## 反编译 C

```c
// TimerStartRelayBattle::dispatch_sig @ 0x863640c

/* TimerStartRelayBattle::dispatch_sig(int, int, unsigned int) */

undefined4 TimerStartRelayBattle::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CGameManager *this;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  this = (CGameManager *)G_CGameManager();
  iVar1 = CGameManager::GetPvp(this,param_2,(CUser *)0x0,99);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = CRelayBattleMgr::GetTimerKey((CRelayBattleMgr *)(iVar1 + 0x620));
    if (uVar3 == param_3) {
      CRelayBattleMgr::OnFight((CRelayBattleMgr *)(iVar1 + 0x620));
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
