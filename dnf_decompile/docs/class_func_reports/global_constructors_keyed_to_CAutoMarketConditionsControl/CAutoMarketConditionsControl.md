# CAutoMarketConditionsControl

`_GLOBAL__I__ZN28CAutoMarketConditionsControlC2Ev`

`global constructors keyed to CAutoMarketConditionsControl::CAutoMarketConditionsControl()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CAutoMarketConditionsControl` | `0x082f8f7f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f8f7f  _GLOBAL__I__ZN28CAutoMarketConditionsControlC2Ev
#           global constructors keyed to CAutoMarketConditionsControl::CAutoMarketConditionsControl()
# range [0x082f8f7f, 0x082f8f9b]
082f8f7f +0x00:  push   %ebp
082f8f80 +0x01:  mov    %esp,%ebp
082f8f82 +0x03:  sub    $0x18,%esp
082f8f85 +0x06:  movl   $0xffff,0x4(%esp)
082f8f8d +0x0e:  movl   $0x1,(%esp)
082f8f94 +0x15:  call   082f8f3f <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
082f8f99 +0x1a:  leave
082f8f9a +0x1b:  ret
082f8f9b +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x82f8f7f

/* CAutoMarketConditionsControl::CAutoMarketConditionsControl() */

void CAutoMarketConditionsControl::_GLOBAL__I_CAutoMarketConditionsControl(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
