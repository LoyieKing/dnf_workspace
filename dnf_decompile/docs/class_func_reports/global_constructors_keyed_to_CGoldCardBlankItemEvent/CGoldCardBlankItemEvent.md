# CGoldCardBlankItemEvent

`_GLOBAL__I__ZN23CGoldCardBlankItemEventC2Ev`

`global constructors keyed to CGoldCardBlankItemEvent::CGoldCardBlankItemEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CGoldCardBlankItemEvent` | `0x0811cf77` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811cf77  _GLOBAL__I__ZN23CGoldCardBlankItemEventC2Ev
#           global constructors keyed to CGoldCardBlankItemEvent::CGoldCardBlankItemEvent()
# range [0x0811cf77, 0x0811cf93]
0811cf77 +0x00:  push   %ebp
0811cf78 +0x01:  mov    %esp,%ebp
0811cf7a +0x03:  sub    $0x18,%esp
0811cf7d +0x06:  movl   $0xffff,0x4(%esp)
0811cf85 +0x0e:  movl   $0x1,(%esp)
0811cf8c +0x15:  call   0811cf37 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0811cf91 +0x1a:  leave
0811cf92 +0x1b:  ret
0811cf93 +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x811cf77

/* CGoldCardBlankItemEvent::CGoldCardBlankItemEvent() */

void CGoldCardBlankItemEvent::_GLOBAL__I_CGoldCardBlankItemEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
