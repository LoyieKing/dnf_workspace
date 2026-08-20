# isApply

`_ZN24AuthMobileRestrictPolicy7isApplyEv`

`AuthMobileRestrictPolicy::isApply()`

| 类 | 地址 |
|---|---|
| `AuthMobileRestrictPolicy` | `0x0816d7e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d7e4  _ZN24AuthMobileRestrictPolicy7isApplyEv
#           AuthMobileRestrictPolicy::isApply()
# range [0x0816d7e4, 0x0816d7ef]
0816d7e4 +0x00:  push   %ebp
0816d7e5 +0x01:  mov    %esp,%ebp
0816d7e7 +0x03:  mov    0x8(%ebp),%eax
0816d7ea +0x06:  movzbl 0x4(%eax),%eax
0816d7ee +0x0a:  pop    %ebp
0816d7ef +0x0b:  ret
```

## 反编译 C

```c
// AuthMobileRestrictPolicy::isApply @ 0x816d7e4

/* AuthMobileRestrictPolicy::isApply() */

AuthMobileRestrictPolicy __thiscall
AuthMobileRestrictPolicy::isApply(AuthMobileRestrictPolicy *this)

{
  return this[4];
}
```
