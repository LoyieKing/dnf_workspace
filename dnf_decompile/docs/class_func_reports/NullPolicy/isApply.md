# isApply

`_ZN10NullPolicy7isApplyEv`

`NullPolicy::isApply()`

| 类 | 地址 |
|---|---|
| `NullPolicy` | `0x0816d666` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d666  _ZN10NullPolicy7isApplyEv
#           NullPolicy::isApply()
# range [0x0816d666, 0x0816d66f]
0816d666 +0x00:  push   %ebp
0816d667 +0x01:  mov    %esp,%ebp
0816d669 +0x03:  mov    $0x1,%eax
0816d66e +0x08:  pop    %ebp
0816d66f +0x09:  ret
```

## 反编译 C

```c
// NullPolicy::isApply @ 0x816d666

/* NullPolicy::isApply() */

undefined4 NullPolicy::isApply(void)

{
  return 1;
}
```
