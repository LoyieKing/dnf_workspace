# dispatch_sig

`_ZN22TimerWarRoomChangeHost12dispatch_sigEiij`

`TimerWarRoomChangeHost::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerWarRoomChangeHost` | `0x08634f6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08634f6e  _ZN22TimerWarRoomChangeHost12dispatch_sigEiij
#           TimerWarRoomChangeHost::dispatch_sig(int, int, unsigned int)
# range [0x08634f6e, 0x08634fd1]
08634f6e +0x00:  push   %ebp
08634f6f +0x01:  mov    %esp,%ebp
08634f71 +0x03:  sub    $0x28,%esp
08634f74 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08634f79 +0x0b:  mov    0xc(%ebp),%edx
08634f7c +0x0e:  mov    %edx,0x4(%esp)
08634f80 +0x12:  mov    %eax,(%esp)
08634f83 +0x15:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
08634f88 +0x1a:  mov    %eax,-0xc(%ebp)
08634f8b +0x1d:  cmpl   $0x0,-0xc(%ebp)
08634f8f +0x21:  jne    08634f98 <+0x2a>
08634f91 +0x23:  mov    $0x0,%eax
08634f96 +0x28:  jmp    08634fd0 <+0x62>
08634f98 +0x2a:  mov    0x10(%ebp),%eax
08634f9b +0x2d:  mov    %eax,0x8(%esp)
08634f9f +0x31:  movl   $0x47,0x4(%esp)
08634fa7 +0x39:  mov    -0xc(%ebp),%eax
08634faa +0x3c:  mov    %eax,(%esp)
08634fad +0x3f:  call   0863bd92 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x2a3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x2a3
08634fb2 +0x44:  xor    $0x1,%eax
08634fb5 +0x47:  test   %al,%al
08634fb7 +0x49:  je     08634fc0 <+0x52>
08634fb9 +0x4b:  mov    $0x0,%eax
08634fbe +0x50:  jmp    08634fd0 <+0x62>
08634fc0 +0x52:  mov    -0xc(%ebp),%eax
08634fc3 +0x55:  mov    %eax,(%esp)
08634fc6 +0x58:  call   086c0964 <_ZN7WarRoom15CheckHostChangeEv>  ; WarRoom::CheckHostChange()
08634fcb +0x5d:  mov    $0x1,%eax
08634fd0 +0x62:  leave
08634fd1 +0x63:  ret
```

## 反编译 C

```c
// TimerWarRoomChangeHost::dispatch_sig @ 0x8634f6e

/* TimerWarRoomChangeHost::dispatch_sig(int, int, unsigned int) */

undefined4 TimerWarRoomChangeHost::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  WarRoom *this;
  undefined4 uVar3;
  
  iVar2 = G_CGameManager();
  this = (WarRoom *)CGameManager::GetWarRoom(iVar2);
  if (this == (WarRoom *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = WarRoom::CheckTimerKey(this,0x47,param_3);
    if (cVar1 == '\x01') {
      WarRoom::CheckHostChange(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
