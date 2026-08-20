# dispatch_sig

`_ZN17TimerDungeonClear12dispatch_sigEiij`

`TimerDungeonClear::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerDungeonClear` | `0x08633108` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08633108  _ZN17TimerDungeonClear12dispatch_sigEiij
#           TimerDungeonClear::dispatch_sig(int, int, unsigned int)
# range [0x08633108, 0x0863316b]
08633108 +0x00:  push   %ebp
08633109 +0x01:  mov    %esp,%ebp
0863310b +0x03:  sub    $0x28,%esp
0863310e +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08633113 +0x0b:  mov    0xc(%ebp),%edx
08633116 +0x0e:  mov    %edx,0x4(%esp)
0863311a +0x12:  mov    %eax,(%esp)
0863311d +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08633122 +0x1a:  mov    %eax,-0xc(%ebp)
08633125 +0x1d:  cmpl   $0x0,-0xc(%ebp)
08633129 +0x21:  jne    08633132 <+0x2a>
0863312b +0x23:  mov    $0x0,%eax
08633130 +0x28:  jmp    0863316a <+0x62>
08633132 +0x2a:  mov    0x10(%ebp),%eax
08633135 +0x2d:  mov    %eax,0x8(%esp)
08633139 +0x31:  movl   $0xd,0x4(%esp)
08633141 +0x39:  mov    -0xc(%ebp),%eax
08633144 +0x3c:  mov    %eax,(%esp)
08633147 +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
0863314c +0x44:  xor    $0x1,%eax
0863314f +0x47:  test   %al,%al
08633151 +0x49:  je     0863315a <+0x52>
08633153 +0x4b:  mov    $0x0,%eax
08633158 +0x50:  jmp    0863316a <+0x62>
0863315a +0x52:  mov    -0xc(%ebp),%eax
0863315d +0x55:  mov    %eax,(%esp)
08633160 +0x58:  call   085ab736 <_ZN6CParty13dungeon_clearEv>  ; CParty::dungeon_clear()
08633165 +0x5d:  mov    $0x1,%eax
0863316a +0x62:  leave
0863316b +0x63:  ret
```

## 反编译 C

```c
// TimerDungeonClear::dispatch_sig @ 0x8633108

/* TimerDungeonClear::dispatch_sig(int, int, unsigned int) */

undefined4 TimerDungeonClear::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CParty *this;
  undefined4 uVar3;
  
  iVar2 = G_CGameManager();
  this = (CParty *)CGameManager::GetParty(iVar2);
  if (this == (CParty *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(this,0xd,param_3);
    if (cVar1 == '\x01') {
      CParty::dungeon_clear(this);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
