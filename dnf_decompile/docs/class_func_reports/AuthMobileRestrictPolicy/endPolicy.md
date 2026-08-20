# endPolicy

`_ZN24AuthMobileRestrictPolicy9endPolicyEv`

`AuthMobileRestrictPolicy::endPolicy()`

| 类 | 地址 |
|---|---|
| `AuthMobileRestrictPolicy` | `0x0816d7d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d7d8  _ZN24AuthMobileRestrictPolicy9endPolicyEv
#           AuthMobileRestrictPolicy::endPolicy()
# range [0x0816d7d8, 0x0816d7e3]
0816d7d8 +0x00:  push   %ebp
0816d7d9 +0x01:  mov    %esp,%ebp
0816d7db +0x03:  mov    0x8(%ebp),%eax
0816d7de +0x06:  movb   $0x0,0x4(%eax)
0816d7e2 +0x0a:  pop    %ebp
0816d7e3 +0x0b:  ret
```

## 反编译 C

```c
// AuthMobileRestrictPolicy::endPolicy @ 0x816d7d8

/* AuthMobileRestrictPolicy::endPolicy() */

void __thiscall AuthMobileRestrictPolicy::endPolicy(AuthMobileRestrictPolicy *this)

{
  this[4] = (AuthMobileRestrictPolicy)0x0;
  return;
}
```
