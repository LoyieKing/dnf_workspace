# CMemberExpRewardEvent

`_GLOBAL__I__ZN21CMemberExpRewardEventC2Ev`

`global constructors keyed to CMemberExpRewardEvent::CMemberExpRewardEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CMemberExpRewardEvent` | `0x081b2b01` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b2b01  _GLOBAL__I__ZN21CMemberExpRewardEventC2Ev
#           global constructors keyed to CMemberExpRewardEvent::CMemberExpRewardEvent()
# range [0x081b2b01, 0x081b2b1f]
081b2b01 +0x00:  push   %ebp
081b2b02 +0x01:  mov    %esp,%ebp
081b2b04 +0x03:  sub    $0x18,%esp
081b2b07 +0x06:  movl   $0xffff,0x4(%esp)
081b2b0f +0x0e:  movl   $0x1,(%esp)
081b2b16 +0x15:  call   081b2ac1 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081b2b1b +0x1a:  leave
081b2b1c +0x1b:  ret
081b2b1d +0x1c:  nop
081b2b1e +0x1d:  nop
081b2b1f +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81b2b01

/* CMemberExpRewardEvent::CMemberExpRewardEvent() */

void CMemberExpRewardEvent::_GLOBAL__I_CMemberExpRewardEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
