# CTrcOnOffEvent

`_GLOBAL__I__ZN14CTrcOnOffEventC2Ev`

`global constructors keyed to CTrcOnOffEvent::CTrcOnOffEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CTrcOnOffEvent` | `0x08285c12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285c12  _GLOBAL__I__ZN14CTrcOnOffEventC2Ev
#           global constructors keyed to CTrcOnOffEvent::CTrcOnOffEvent()
# range [0x08285c12, 0x08285c2f]
08285c12 +0x00:  push   %ebp
08285c13 +0x01:  mov    %esp,%ebp
08285c15 +0x03:  sub    $0x18,%esp
08285c18 +0x06:  movl   $0xffff,0x4(%esp)
08285c20 +0x0e:  movl   $0x1,(%esp)
08285c27 +0x15:  call   08285bd2 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08285c2c +0x1a:  leave
08285c2d +0x1b:  ret
08285c2e +0x1c:  nop
08285c2f +0x1d:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8285c12

/* CTrcOnOffEvent::CTrcOnOffEvent() */

void CTrcOnOffEvent::_GLOBAL__I_CTrcOnOffEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
