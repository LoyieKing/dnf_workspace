# isApply

`_ZN10NullPolicy7isApplyEi`

`NullPolicy::isApply(int)`

| 类 | 地址 |
|---|---|
| `NullPolicy` | `0x0816d670` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d670  _ZN10NullPolicy7isApplyEi
#           NullPolicy::isApply(int)
# range [0x0816d670, 0x0816d679]
0816d670 +0x00:  push   %ebp
0816d671 +0x01:  mov    %esp,%ebp
0816d673 +0x03:  mov    $0x1,%eax
0816d678 +0x08:  pop    %ebp
0816d679 +0x09:  ret
```

## 反编译 C

```c
// NullPolicy::isApply @ 0x816d670

/* NullPolicy::isApply(int) */

undefined4 NullPolicy::isApply(int param_1)

{
  return 1;
}
```
