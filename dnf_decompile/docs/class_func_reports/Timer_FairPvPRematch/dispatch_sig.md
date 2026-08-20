# dispatch_sig

`_ZN20Timer_FairPvPRematch12dispatch_sigEiij`

`Timer_FairPvPRematch::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_FairPvPRematch` | `0x0863a430` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863a430  _ZN20Timer_FairPvPRematch12dispatch_sigEiij
#           Timer_FairPvPRematch::dispatch_sig(int, int, unsigned int)
# range [0x0863a430, 0x0863a4c7]
0863a430 +0x00:  push   %ebp
0863a431 +0x01:  mov    %esp,%ebp
0863a433 +0x03:  sub    $0x28,%esp
0863a436 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0863a43b +0x0b:  movl   $0x3e,0xc(%esp)
0863a443 +0x13:  movl   $0x0,0x8(%esp)
0863a44b +0x1b:  mov    0xc(%ebp),%edx
0863a44e +0x1e:  mov    %edx,0x4(%esp)
0863a452 +0x22:  mov    %eax,(%esp)
0863a455 +0x25:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
0863a45a +0x2a:  mov    %eax,-0xc(%ebp)
0863a45d +0x2d:  cmpl   $0x0,-0xc(%ebp)
0863a461 +0x31:  jne    0863a46a <+0x3a>
0863a463 +0x33:  mov    $0x0,%eax
0863a468 +0x38:  jmp    0863a4c5 <+0x95>
0863a46a +0x3a:  movl   $0x3e,0x4(%esp)
0863a472 +0x42:  mov    -0xc(%ebp),%eax
0863a475 +0x45:  mov    %eax,(%esp)
0863a478 +0x48:  call   0863bcb4 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1c5>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1c5
0863a47d +0x4d:  cmp    0x10(%ebp),%eax
0863a480 +0x50:  setne  %al
0863a483 +0x53:  test   %al,%al
0863a485 +0x55:  je     0863a48e <+0x5e>
0863a487 +0x57:  mov    $0x0,%eax
0863a48c +0x5c:  jmp    0863a4c5 <+0x95>
0863a48e +0x5e:  mov    -0xc(%ebp),%eax
0863a491 +0x61:  mov    0x6e4(%eax),%eax
0863a497 +0x67:  test   %eax,%eax
0863a499 +0x69:  je     0863a4c0 <+0x90>
0863a49b +0x6b:  mov    -0xc(%ebp),%eax
0863a49e +0x6e:  mov    0x6e4(%eax),%eax
0863a4a4 +0x74:  mov    (%eax),%eax
0863a4a6 +0x76:  add    $0x64,%eax
0863a4a9 +0x79:  mov    (%eax),%ecx
0863a4ab +0x7b:  mov    -0xc(%ebp),%eax
0863a4ae +0x7e:  mov    0x6e4(%eax),%eax
0863a4b4 +0x84:  mov    -0xc(%ebp),%edx
0863a4b7 +0x87:  mov    %edx,0x4(%esp)
0863a4bb +0x8b:  mov    %eax,(%esp)
0863a4be +0x8e:  call   *%ecx
0863a4c0 +0x90:  mov    $0x1,%eax
0863a4c5 +0x95:  leave
0863a4c6 +0x96:  ret
0863a4c7 +0x97:  nop
```

## 反编译 C

```c
// Timer_FairPvPRematch::dispatch_sig @ 0x863a430

/* Timer_FairPvPRematch::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_FairPvPRematch::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CGameManager *this;
  PvP_Room *pPVar1;
  undefined4 uVar2;
  uint uVar3;
  
  this = (CGameManager *)G_CGameManager();
  pPVar1 = (PvP_Room *)CGameManager::GetPvp(this,param_2,(CUser *)0x0,0x3e);
  if (pPVar1 == (PvP_Room *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = PvP_Room::get_timer_key(pPVar1,0x3e);
    if (uVar3 == param_3) {
      if (*(int *)(pPVar1 + 0x6e4) != 0) {
        (**(code **)(**(int **)(pPVar1 + 0x6e4) + 100))(*(undefined4 *)(pPVar1 + 0x6e4),pPVar1);
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
