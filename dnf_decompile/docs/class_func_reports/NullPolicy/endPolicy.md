# endPolicy

`_ZN10NullPolicy9endPolicyEv`

`NullPolicy::endPolicy()`

| 类 | 地址 |
|---|---|
| `NullPolicy` | `0x0816d660` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d660  _ZN10NullPolicy9endPolicyEv
#           NullPolicy::endPolicy()
# range [0x0816d660, 0x0816d665]
0816d660 +0x00:  push   %ebp
0816d661 +0x01:  mov    %esp,%ebp
0816d663 +0x03:  pop    %ebp
0816d664 +0x04:  ret
0816d665 +0x05:  nop
```

## 反编译 C

```c
// NullPolicy::endPolicy @ 0x816d660

/* NullPolicy::endPolicy() */

void NullPolicy::endPolicy(void)

{
  return;
}
```
