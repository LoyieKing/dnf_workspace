# getRestrictValue

`_ZN10NullPolicy16getRestrictValueERN6Taiwan21SigLoadRestrictPolicyE`

`NullPolicy::getRestrictValue(Taiwan::SigLoadRestrictPolicy&)`

| 类 | 地址 |
|---|---|
| `NullPolicy` | `0x0816d6c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d6c8  _ZN10NullPolicy16getRestrictValueERN6Taiwan21SigLoadRestrictPolicyE
#           NullPolicy::getRestrictValue(Taiwan::SigLoadRestrictPolicy&)
# range [0x0816d6c8, 0x0816d6cd]
0816d6c8 +0x00:  push   %ebp
0816d6c9 +0x01:  mov    %esp,%ebp
0816d6cb +0x03:  pop    %ebp
0816d6cc +0x04:  ret
0816d6cd +0x05:  nop
```

## 反编译 C

```c
// NullPolicy::getRestrictValue @ 0x816d6c8

/* NullPolicy::getRestrictValue(Taiwan::SigLoadRestrictPolicy&) */

void NullPolicy::getRestrictValue(SigLoadRestrictPolicy *param_1)

{
  return;
}
```
