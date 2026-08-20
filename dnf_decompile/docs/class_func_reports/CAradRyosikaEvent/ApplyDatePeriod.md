# ApplyDatePeriod

`_ZN17CAradRyosikaEvent15ApplyDatePeriodEP5CUser`

`CAradRyosikaEvent::ApplyDatePeriod(CUser*)`

| 类 | 地址 |
|---|---|
| `CAradRyosikaEvent` | `0x081a0fda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a0fda  _ZN17CAradRyosikaEvent15ApplyDatePeriodEP5CUser
#           CAradRyosikaEvent::ApplyDatePeriod(CUser*)
# range [0x081a0fda, 0x081a0fe3]
081a0fda +0x00:  push   %ebp
081a0fdb +0x01:  mov    %esp,%ebp
081a0fdd +0x03:  mov    $0x1,%eax
081a0fe2 +0x08:  pop    %ebp
081a0fe3 +0x09:  ret
```

## 反编译 C

```c
// CAradRyosikaEvent::ApplyDatePeriod @ 0x81a0fda

/* CAradRyosikaEvent::ApplyDatePeriod(CUser*) */

undefined4 CAradRyosikaEvent::ApplyDatePeriod(CUser *param_1)

{
  return 1;
}
```
