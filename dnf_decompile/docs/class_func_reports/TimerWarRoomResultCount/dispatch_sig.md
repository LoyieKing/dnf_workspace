# dispatch_sig

`_ZN23TimerWarRoomResultCount12dispatch_sigEiij`

`TimerWarRoomResultCount::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerWarRoomResultCount` | `0x08634e42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08634e42  _ZN23TimerWarRoomResultCount12dispatch_sigEiij
#           TimerWarRoomResultCount::dispatch_sig(int, int, unsigned int)
# range [0x08634e42, 0x08634ea5]
08634e42 +0x00:  push   %ebp
08634e43 +0x01:  mov    %esp,%ebp
08634e45 +0x03:  sub    $0x28,%esp
08634e48 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08634e4d +0x0b:  mov    0xc(%ebp),%edx
08634e50 +0x0e:  mov    %edx,0x4(%esp)
08634e54 +0x12:  mov    %eax,(%esp)
08634e57 +0x15:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
08634e5c +0x1a:  mov    %eax,-0xc(%ebp)
08634e5f +0x1d:  cmpl   $0x0,-0xc(%ebp)
08634e63 +0x21:  jne    08634e6c <+0x2a>
08634e65 +0x23:  mov    $0x0,%eax
08634e6a +0x28:  jmp    08634ea4 <+0x62>
08634e6c +0x2a:  mov    0x10(%ebp),%eax
08634e6f +0x2d:  mov    %eax,0x8(%esp)
08634e73 +0x31:  movl   $0x44,0x4(%esp)
08634e7b +0x39:  mov    -0xc(%ebp),%eax
08634e7e +0x3c:  mov    %eax,(%esp)
08634e81 +0x3f:  call   0863bd92 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x2a3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x2a3
08634e86 +0x44:  xor    $0x1,%eax
08634e89 +0x47:  test   %al,%al
08634e8b +0x49:  je     08634e94 <+0x52>
08634e8d +0x4b:  mov    $0x0,%eax
08634e92 +0x50:  jmp    08634ea4 <+0x62>
08634e94 +0x52:  mov    -0xc(%ebp),%eax
08634e97 +0x55:  mov    %eax,(%esp)
08634e9a +0x58:  call   086c0404 <_ZN7WarRoom22HandleTimerResultCountEv>  ; WarRoom::HandleTimerResultCount()
08634e9f +0x5d:  mov    $0x1,%eax
08634ea4 +0x62:  leave
08634ea5 +0x63:  ret
```

## 反编译 C

```c
// TimerWarRoomResultCount::dispatch_sig @ 0x8634e42

/* TimerWarRoomResultCount::dispatch_sig(int, int, unsigned int) */

undefined4 TimerWarRoomResultCount::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = WarRoom::CheckTimerKey(this,0x44,param_3);
    if (cVar1 == '\x01') {
      WarRoom::HandleTimerResultCount(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
