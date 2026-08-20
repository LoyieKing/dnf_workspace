# dispatch_sig

`_ZN28TimerWarRoomBattlePauseCount12dispatch_sigEiij`

`TimerWarRoomBattlePauseCount::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerWarRoomBattlePauseCount` | `0x08634dd6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08634dd6  _ZN28TimerWarRoomBattlePauseCount12dispatch_sigEiij
#           TimerWarRoomBattlePauseCount::dispatch_sig(int, int, unsigned int)
# range [0x08634dd6, 0x08634e41]
08634dd6 +0x00:  push   %ebp
08634dd7 +0x01:  mov    %esp,%ebp
08634dd9 +0x03:  sub    $0x28,%esp
08634ddc +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08634de1 +0x0b:  mov    0xc(%ebp),%edx
08634de4 +0x0e:  mov    %edx,0x4(%esp)
08634de8 +0x12:  mov    %eax,(%esp)
08634deb +0x15:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
08634df0 +0x1a:  mov    %eax,-0xc(%ebp)
08634df3 +0x1d:  cmpl   $0x0,-0xc(%ebp)
08634df7 +0x21:  jne    08634e00 <+0x2a>
08634df9 +0x23:  mov    $0x0,%eax
08634dfe +0x28:  jmp    08634e40 <+0x6a>
08634e00 +0x2a:  mov    0x10(%ebp),%eax
08634e03 +0x2d:  mov    %eax,0x8(%esp)
08634e07 +0x31:  movl   $0x43,0x4(%esp)
08634e0f +0x39:  mov    -0xc(%ebp),%eax
08634e12 +0x3c:  mov    %eax,(%esp)
08634e15 +0x3f:  call   0863bd92 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x2a3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x2a3
08634e1a +0x44:  xor    $0x1,%eax
08634e1d +0x47:  test   %al,%al
08634e1f +0x49:  je     08634e28 <+0x52>
08634e21 +0x4b:  mov    $0x0,%eax
08634e26 +0x50:  jmp    08634e40 <+0x6a>
08634e28 +0x52:  movl   $0x3,0x4(%esp)
08634e30 +0x5a:  mov    -0xc(%ebp),%eax
08634e33 +0x5d:  mov    %eax,(%esp)
08634e36 +0x60:  call   086bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>  ; WarRoom::ChangeState(WARROOM_STATE)
08634e3b +0x65:  mov    $0x1,%eax
08634e40 +0x6a:  leave
08634e41 +0x6b:  ret
```

## 反编译 C

```c
// TimerWarRoomBattlePauseCount::dispatch_sig @ 0x8634dd6

/* TimerWarRoomBattlePauseCount::dispatch_sig(int, int, unsigned int) */

undefined4 TimerWarRoomBattlePauseCount::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  WarRoom *pWVar3;
  undefined4 uVar4;
  
  iVar2 = G_CGameManager();
  pWVar3 = (WarRoom *)CGameManager::GetWarRoom(iVar2);
  if (pWVar3 == (WarRoom *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar1 = WarRoom::CheckTimerKey(pWVar3,0x43,param_3);
    if (cVar1 == '\x01') {
      WarRoom::ChangeState(pWVar3,3);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
