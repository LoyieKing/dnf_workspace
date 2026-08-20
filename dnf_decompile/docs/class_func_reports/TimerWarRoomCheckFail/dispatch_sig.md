# dispatch_sig

`_ZN21TimerWarRoomCheckFail12dispatch_sigEiij`

`TimerWarRoomCheckFail::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerWarRoomCheckFail` | `0x08634f0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08634f0a  _ZN21TimerWarRoomCheckFail12dispatch_sigEiij
#           TimerWarRoomCheckFail::dispatch_sig(int, int, unsigned int)
# range [0x08634f0a, 0x08634f6d]
08634f0a +0x00:  push   %ebp
08634f0b +0x01:  mov    %esp,%ebp
08634f0d +0x03:  sub    $0x28,%esp
08634f10 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08634f15 +0x0b:  mov    0xc(%ebp),%edx
08634f18 +0x0e:  mov    %edx,0x4(%esp)
08634f1c +0x12:  mov    %eax,(%esp)
08634f1f +0x15:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
08634f24 +0x1a:  mov    %eax,-0xc(%ebp)
08634f27 +0x1d:  cmpl   $0x0,-0xc(%ebp)
08634f2b +0x21:  jne    08634f34 <+0x2a>
08634f2d +0x23:  mov    $0x0,%eax
08634f32 +0x28:  jmp    08634f6c <+0x62>
08634f34 +0x2a:  mov    0x10(%ebp),%eax
08634f37 +0x2d:  mov    %eax,0x8(%esp)
08634f3b +0x31:  movl   $0x46,0x4(%esp)
08634f43 +0x39:  mov    -0xc(%ebp),%eax
08634f46 +0x3c:  mov    %eax,(%esp)
08634f49 +0x3f:  call   0863bd92 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x2a3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x2a3
08634f4e +0x44:  xor    $0x1,%eax
08634f51 +0x47:  test   %al,%al
08634f53 +0x49:  je     08634f5c <+0x52>
08634f55 +0x4b:  mov    $0x0,%eax
08634f5a +0x50:  jmp    08634f6c <+0x62>
08634f5c +0x52:  mov    -0xc(%ebp),%eax
08634f5f +0x55:  mov    %eax,(%esp)
08634f62 +0x58:  call   086c07ee <_ZN7WarRoom11WarRoomFailEv>  ; WarRoom::WarRoomFail()
08634f67 +0x5d:  mov    $0x1,%eax
08634f6c +0x62:  leave
08634f6d +0x63:  ret
```

## 反编译 C

```c
// TimerWarRoomCheckFail::dispatch_sig @ 0x8634f0a

/* TimerWarRoomCheckFail::dispatch_sig(int, int, unsigned int) */

undefined4 TimerWarRoomCheckFail::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = WarRoom::CheckTimerKey(this,0x46,param_3);
    if (cVar1 == '\x01') {
      WarRoom::WarRoomFail(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
