# CSchoolMatchEvent

`_GLOBAL__I__ZN17CSchoolMatchEventC2Ev`

`global constructors keyed to CSchoolMatchEvent::CSchoolMatchEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CSchoolMatchEvent` | `0x08274384` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08274384  _GLOBAL__I__ZN17CSchoolMatchEventC2Ev
#           global constructors keyed to CSchoolMatchEvent::CSchoolMatchEvent()
# range [0x08274384, 0x082743af]
08274384 +0x00:  push   %ebp
08274385 +0x01:  mov    %esp,%ebp
08274387 +0x03:  sub    $0x18,%esp
0827438a +0x06:  movl   $0xffff,0x4(%esp)
08274392 +0x0e:  movl   $0x1,(%esp)
08274399 +0x15:  call   08274344 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0827439e +0x1a:  leave
0827439f +0x1b:  ret
082743a0 +0x1c:  push   %ebp
082743a1 +0x1d:  mov    %esp,%ebp
082743a3 +0x1f:  mov    0x8(%ebp),%eax
082743a6 +0x22:  mov    %al,&_ZN12CLeagueMatch12nBattleMode_E
082743ab +0x27:  pop    %ebp
082743ac +0x28:  ret
082743ad +0x29:  nop
082743ae +0x2a:  nop
082743af +0x2b:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8274384

/* CSchoolMatchEvent::CSchoolMatchEvent() */

void CSchoolMatchEvent::_GLOBAL__I_CSchoolMatchEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
