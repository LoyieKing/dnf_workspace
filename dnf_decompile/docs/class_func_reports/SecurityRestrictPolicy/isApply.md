# isApply

`_ZN22SecurityRestrictPolicy7isApplyEv`

`SecurityRestrictPolicy::isApply()`

| 类 | 地址 |
|---|---|
| `SecurityRestrictPolicy` | `0x0816db66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816db66  _ZN22SecurityRestrictPolicy7isApplyEv
#           SecurityRestrictPolicy::isApply()
# range [0x0816db66, 0x0816db71]
0816db66 +0x00:  push   %ebp
0816db67 +0x01:  mov    %esp,%ebp
0816db69 +0x03:  mov    0x8(%ebp),%eax
0816db6c +0x06:  movzbl 0x4(%eax),%eax
0816db70 +0x0a:  pop    %ebp
0816db71 +0x0b:  ret
```

## 反编译 C

```c
// SecurityRestrictPolicy::isApply @ 0x816db66

/* SecurityRestrictPolicy::isApply() */

SecurityRestrictPolicy __thiscall SecurityRestrictPolicy::isApply(SecurityRestrictPolicy *this)

{
  return this[4];
}
```
