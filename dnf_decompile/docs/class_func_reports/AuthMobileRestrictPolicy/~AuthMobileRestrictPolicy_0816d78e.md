# ~AuthMobileRestrictPolicy

`_ZN24AuthMobileRestrictPolicyD0Ev`

`AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy()`

| 类 | 地址 |
|---|---|
| `AuthMobileRestrictPolicy` | `0x0816d78e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d78e  _ZN24AuthMobileRestrictPolicyD0Ev
#           AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy()
# range [0x0816d78e, 0x0816d7ab]
0816d78e +0x00:  push   %ebp
0816d78f +0x01:  mov    %esp,%ebp
0816d791 +0x03:  sub    $0x18,%esp
0816d794 +0x06:  mov    0x8(%ebp),%eax
0816d797 +0x09:  mov    %eax,(%esp)
0816d79a +0x0c:  call   0816d75e <_ZN24AuthMobileRestrictPolicyD1Ev>  ; AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy()
0816d79f +0x11:  mov    0x8(%ebp),%eax
0816d7a2 +0x14:  mov    %eax,(%esp)
0816d7a5 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816d7aa +0x1c:  leave
0816d7ab +0x1d:  ret
```

## 反编译 C

```c
// AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy @ 0x816d78e

/* AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy() */

void __thiscall AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy(AuthMobileRestrictPolicy *this)

{
  ~AuthMobileRestrictPolicy(this);
  operator_delete(this);
  return;
}
```
