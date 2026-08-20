# endPolicy

`_ZN22SecurityRestrictPolicy9endPolicyEv`

`SecurityRestrictPolicy::endPolicy()`

| 类 | 地址 |
|---|---|
| `SecurityRestrictPolicy` | `0x0816db5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816db5a  _ZN22SecurityRestrictPolicy9endPolicyEv
#           SecurityRestrictPolicy::endPolicy()
# range [0x0816db5a, 0x0816db65]
0816db5a +0x00:  push   %ebp
0816db5b +0x01:  mov    %esp,%ebp
0816db5d +0x03:  mov    0x8(%ebp),%eax
0816db60 +0x06:  movb   $0x0,0x4(%eax)
0816db64 +0x0a:  pop    %ebp
0816db65 +0x0b:  ret
```

## 反编译 C

```c
// SecurityRestrictPolicy::endPolicy @ 0x816db5a

/* SecurityRestrictPolicy::endPolicy() */

void __thiscall SecurityRestrictPolicy::endPolicy(SecurityRestrictPolicy *this)

{
  this[4] = (SecurityRestrictPolicy)0x0;
  return;
}
```
