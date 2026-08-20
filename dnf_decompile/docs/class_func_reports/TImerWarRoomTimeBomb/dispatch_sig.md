# dispatch_sig

`_ZN20TImerWarRoomTimeBomb12dispatch_sigEiij`

`TImerWarRoomTimeBomb::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TImerWarRoomTimeBomb` | `0x08634ea6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08634ea6  _ZN20TImerWarRoomTimeBomb12dispatch_sigEiij
#           TImerWarRoomTimeBomb::dispatch_sig(int, int, unsigned int)
# range [0x08634ea6, 0x08634f09]
08634ea6 +0x00:  push   %ebp
08634ea7 +0x01:  mov    %esp,%ebp
08634ea9 +0x03:  sub    $0x28,%esp
08634eac +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08634eb1 +0x0b:  mov    0xc(%ebp),%edx
08634eb4 +0x0e:  mov    %edx,0x4(%esp)
08634eb8 +0x12:  mov    %eax,(%esp)
08634ebb +0x15:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
08634ec0 +0x1a:  mov    %eax,-0xc(%ebp)
08634ec3 +0x1d:  cmpl   $0x0,-0xc(%ebp)
08634ec7 +0x21:  jne    08634ed0 <+0x2a>
08634ec9 +0x23:  mov    $0x0,%eax
08634ece +0x28:  jmp    08634f08 <+0x62>
08634ed0 +0x2a:  mov    0x10(%ebp),%eax
08634ed3 +0x2d:  mov    %eax,0x8(%esp)
08634ed7 +0x31:  movl   $0x45,0x4(%esp)
08634edf +0x39:  mov    -0xc(%ebp),%eax
08634ee2 +0x3c:  mov    %eax,(%esp)
08634ee5 +0x3f:  call   0863bd92 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x2a3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x2a3
08634eea +0x44:  xor    $0x1,%eax
08634eed +0x47:  test   %al,%al
08634eef +0x49:  je     08634ef8 <+0x52>
08634ef1 +0x4b:  mov    $0x0,%eax
08634ef6 +0x50:  jmp    08634f08 <+0x62>
08634ef8 +0x52:  mov    -0xc(%ebp),%eax
08634efb +0x55:  mov    %eax,(%esp)
08634efe +0x58:  call   086c0512 <_ZN7WarRoom19HandleTimerTimeBombEv>  ; WarRoom::HandleTimerTimeBomb()
08634f03 +0x5d:  mov    $0x1,%eax
08634f08 +0x62:  leave
08634f09 +0x63:  ret
```

## 反编译 C

```c
// TImerWarRoomTimeBomb::dispatch_sig @ 0x8634ea6

/* TImerWarRoomTimeBomb::dispatch_sig(int, int, unsigned int) */

undefined4 TImerWarRoomTimeBomb::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = WarRoom::CheckTimerKey(this,0x45,param_3);
    if (cVar1 == '\x01') {
      WarRoom::HandleTimerTimeBomb(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
