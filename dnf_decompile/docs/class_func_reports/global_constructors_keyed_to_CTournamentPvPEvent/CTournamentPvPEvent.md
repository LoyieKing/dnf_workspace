# CTournamentPvPEvent

`_GLOBAL__I__ZN19CTournamentPvPEventC2Ev`

`global constructors keyed to CTournamentPvPEvent::CTournamentPvPEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CTournamentPvPEvent` | `0x0828471f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828471f  _GLOBAL__I__ZN19CTournamentPvPEventC2Ev
#           global constructors keyed to CTournamentPvPEvent::CTournamentPvPEvent()
# range [0x0828471f, 0x0828473b]
0828471f +0x00:  push   %ebp
08284720 +0x01:  mov    %esp,%ebp
08284722 +0x03:  sub    $0x18,%esp
08284725 +0x06:  movl   $0xffff,0x4(%esp)
0828472d +0x0e:  movl   $0x1,(%esp)
08284734 +0x15:  call   082846df <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08284739 +0x1a:  leave
0828473a +0x1b:  ret
0828473b +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x828471f

/* CTournamentPvPEvent::CTournamentPvPEvent() */

void CTournamentPvPEvent::_GLOBAL__I_CTournamentPvPEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
