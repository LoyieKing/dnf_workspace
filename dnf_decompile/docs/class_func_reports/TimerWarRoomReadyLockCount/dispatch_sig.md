# dispatch_sig

`_ZN26TimerWarRoomReadyLockCount12dispatch_sigEiij`

`TimerWarRoomReadyLockCount::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerWarRoomReadyLockCount` | `0x08634d6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08634d6a  _ZN26TimerWarRoomReadyLockCount12dispatch_sigEiij
#           TimerWarRoomReadyLockCount::dispatch_sig(int, int, unsigned int)
# range [0x08634d6a, 0x08634dd5]
08634d6a +0x00:  push   %ebp
08634d6b +0x01:  mov    %esp,%ebp
08634d6d +0x03:  sub    $0x28,%esp
08634d70 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08634d75 +0x0b:  mov    0xc(%ebp),%edx
08634d78 +0x0e:  mov    %edx,0x4(%esp)
08634d7c +0x12:  mov    %eax,(%esp)
08634d7f +0x15:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
08634d84 +0x1a:  mov    %eax,-0xc(%ebp)
08634d87 +0x1d:  cmpl   $0x0,-0xc(%ebp)
08634d8b +0x21:  jne    08634d94 <+0x2a>
08634d8d +0x23:  mov    $0x0,%eax
08634d92 +0x28:  jmp    08634dd4 <+0x6a>
08634d94 +0x2a:  mov    0x10(%ebp),%eax
08634d97 +0x2d:  mov    %eax,0x8(%esp)
08634d9b +0x31:  movl   $0x42,0x4(%esp)
08634da3 +0x39:  mov    -0xc(%ebp),%eax
08634da6 +0x3c:  mov    %eax,(%esp)
08634da9 +0x3f:  call   0863bd92 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x2a3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x2a3
08634dae +0x44:  xor    $0x1,%eax
08634db1 +0x47:  test   %al,%al
08634db3 +0x49:  je     08634dbc <+0x52>
08634db5 +0x4b:  mov    $0x0,%eax
08634dba +0x50:  jmp    08634dd4 <+0x6a>
08634dbc +0x52:  movl   $0x3,0x4(%esp)
08634dc4 +0x5a:  mov    -0xc(%ebp),%eax
08634dc7 +0x5d:  mov    %eax,(%esp)
08634dca +0x60:  call   086bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>  ; WarRoom::ChangeState(WARROOM_STATE)
08634dcf +0x65:  mov    $0x1,%eax
08634dd4 +0x6a:  leave
08634dd5 +0x6b:  ret
```

## 反编译 C

```c
// TimerWarRoomReadyLockCount::dispatch_sig @ 0x8634d6a

/* TimerWarRoomReadyLockCount::dispatch_sig(int, int, unsigned int) */

undefined4 TimerWarRoomReadyLockCount::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = WarRoom::CheckTimerKey(pWVar3,0x42,param_3);
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
