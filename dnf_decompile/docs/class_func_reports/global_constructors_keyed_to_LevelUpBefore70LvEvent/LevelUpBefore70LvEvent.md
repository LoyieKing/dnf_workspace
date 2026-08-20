# LevelUpBefore70LvEvent

`_GLOBAL__I__ZN22LevelUpBefore70LvEventC2Ev`

`global constructors keyed to LevelUpBefore70LvEvent::LevelUpBefore70LvEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to LevelUpBefore70LvEvent` | `0x081200ff` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081200ff  _GLOBAL__I__ZN22LevelUpBefore70LvEventC2Ev
#           global constructors keyed to LevelUpBefore70LvEvent::LevelUpBefore70LvEvent()
# range [0x081200ff, 0x08120127]
081200ff +0x00:  push   %ebp
08120100 +0x01:  mov    %esp,%ebp
08120102 +0x03:  sub    $0x18,%esp
08120105 +0x06:  movl   $0xffff,0x4(%esp)
0812010d +0x0e:  movl   $0x1,(%esp)
08120114 +0x15:  call   081200bf <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08120119 +0x1a:  leave
0812011a +0x1b:  ret
0812011b +0x1c:  nop
0812011c +0x1d:  push   %ebp
0812011d +0x1e:  mov    %esp,%ebp
0812011f +0x20:  mov    $0x1,%eax
08120124 +0x25:  pop    %ebp
08120125 +0x26:  ret
08120126 +0x27:  nop
08120127 +0x28:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81200ff

/* LevelUpBefore70LvEvent::LevelUpBefore70LvEvent() */

void LevelUpBefore70LvEvent::_GLOBAL__I_LevelUpBefore70LvEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
