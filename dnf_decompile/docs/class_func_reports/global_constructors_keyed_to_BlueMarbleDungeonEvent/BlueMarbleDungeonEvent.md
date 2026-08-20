# BlueMarbleDungeonEvent

`_GLOBAL__I__ZN22BlueMarbleDungeonEventC2Ev`

`global constructors keyed to BlueMarbleDungeonEvent::BlueMarbleDungeonEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to BlueMarbleDungeonEvent` | `0x080dc60f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dc60f  _GLOBAL__I__ZN22BlueMarbleDungeonEventC2Ev
#           global constructors keyed to BlueMarbleDungeonEvent::BlueMarbleDungeonEvent()
# range [0x080dc60f, 0x080dc62b]
080dc60f +0x00:  push   %ebp
080dc610 +0x01:  mov    %esp,%ebp
080dc612 +0x03:  sub    $0x18,%esp
080dc615 +0x06:  movl   $0xffff,0x4(%esp)
080dc61d +0x0e:  movl   $0x1,(%esp)
080dc624 +0x15:  call   080dc5cf <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080dc629 +0x1a:  leave
080dc62a +0x1b:  ret
080dc62b +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x80dc60f

/* BlueMarbleDungeonEvent::BlueMarbleDungeonEvent() */

void BlueMarbleDungeonEvent::_GLOBAL__I_BlueMarbleDungeonEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
