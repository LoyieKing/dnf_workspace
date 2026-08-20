# ~AuthMobileRestrictPolicy

`_ZN24AuthMobileRestrictPolicyD1Ev`

`AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy()`

| 类 | 地址 |
|---|---|
| `AuthMobileRestrictPolicy` | `0x0816d75e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d75e  _ZN24AuthMobileRestrictPolicyD1Ev
#           AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy()
# range [0x0816d75e, 0x0816d78d]
0816d75e +0x00:  push   %ebp
0816d75f +0x01:  mov    %esp,%ebp
0816d761 +0x03:  sub    $0x18,%esp
0816d764 +0x06:  mov    0x8(%ebp),%eax
0816d767 +0x09:  movl   $&_ZTV24AuthMobileRestrictPolicy+0x8,(%eax)
0816d76d +0x0f:  mov    0x8(%ebp),%eax
0816d770 +0x12:  mov    %eax,(%esp)
0816d773 +0x15:  call   0816edc0 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0xae>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0xae
0816d778 +0x1a:  mov    $0x0,%eax
0816d77d +0x1f:  test   %al,%al
0816d77f +0x21:  je     0816d78c <+0x2e>
0816d781 +0x23:  mov    0x8(%ebp),%eax
0816d784 +0x26:  mov    %eax,(%esp)
0816d787 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816d78c +0x2e:  leave
0816d78d +0x2f:  ret
```

## 反编译 C

```c
// AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy @ 0x816d75e

/* WARNING: Removing unreachable block (ram,0x0816d781) */
/* AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy() */

void __thiscall AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy(AuthMobileRestrictPolicy *this)

{
  *(undefined ***)this = &PTR__AuthMobileRestrictPolicy_08b82ee8;
  InterfaceServicePolicy::~InterfaceServicePolicy((InterfaceServicePolicy *)this);
  return;
}
```
