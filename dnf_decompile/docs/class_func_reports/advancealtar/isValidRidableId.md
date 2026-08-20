# isValidRidableId

`_ZN12advancealtar16isValidRidableIdENS_9RidableId1TE`

`advancealtar::isValidRidableId(advancealtar::RidableId::T)`

| 类 | 地址 |
|---|---|
| `advancealtar` | `0x08898ff0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08898ff0  _ZN12advancealtar16isValidRidableIdENS_9RidableId1TE
#           advancealtar::isValidRidableId(advancealtar::RidableId::T)
# range [0x08898ff0, 0x08899009]
08898ff0 +0x00:  push   %ebp
08898ff1 +0x01:  mov    %esp,%ebp
08898ff3 +0x03:  mov    0x8(%ebp),%eax
08898ff6 +0x06:  cmp    $0x1,%eax
08898ff9 +0x09:  jne    08899002 <+0x12>
08898ffb +0x0b:  mov    $0x1,%eax
08899000 +0x10:  jmp    08899007 <+0x17>
08899002 +0x12:  mov    $0x0,%eax
08899007 +0x17:  pop    %ebp
08899008 +0x18:  ret
08899009 +0x19:  nop
```

## 反编译 C

```c
// advancealtar::isValidRidableId @ 0x8898ff0

/* advancealtar::isValidRidableId(advancealtar::RidableId::T) */

bool advancealtar::isValidRidableId(int param_1)

{
  return param_1 == 1;
}
```
