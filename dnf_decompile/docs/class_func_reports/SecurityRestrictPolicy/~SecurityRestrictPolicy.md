# ~SecurityRestrictPolicy

`_ZN22SecurityRestrictPolicyD1Ev`

`SecurityRestrictPolicy::~SecurityRestrictPolicy()`

| 类 | 地址 |
|---|---|
| `SecurityRestrictPolicy` | `0x0816dae0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816dae0  _ZN22SecurityRestrictPolicyD1Ev
#           SecurityRestrictPolicy::~SecurityRestrictPolicy()
# range [0x0816dae0, 0x0816db0f]
0816dae0 +0x00:  push   %ebp
0816dae1 +0x01:  mov    %esp,%ebp
0816dae3 +0x03:  sub    $0x18,%esp
0816dae6 +0x06:  mov    0x8(%ebp),%eax
0816dae9 +0x09:  movl   $&_ZTV22SecurityRestrictPolicy+0x8,(%eax)
0816daef +0x0f:  mov    0x8(%ebp),%eax
0816daf2 +0x12:  mov    %eax,(%esp)
0816daf5 +0x15:  call   0816edc0 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0xae>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0xae
0816dafa +0x1a:  mov    $0x0,%eax
0816daff +0x1f:  test   %al,%al
0816db01 +0x21:  je     0816db0e <+0x2e>
0816db03 +0x23:  mov    0x8(%ebp),%eax
0816db06 +0x26:  mov    %eax,(%esp)
0816db09 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816db0e +0x2e:  leave
0816db0f +0x2f:  ret
```

## 反编译 C

```c
// SecurityRestrictPolicy::~SecurityRestrictPolicy @ 0x816dae0

/* WARNING: Removing unreachable block (ram,0x0816db03) */
/* SecurityRestrictPolicy::~SecurityRestrictPolicy() */

void __thiscall SecurityRestrictPolicy::~SecurityRestrictPolicy(SecurityRestrictPolicy *this)

{
  *(undefined ***)this = &PTR__SecurityRestrictPolicy_08b82ea8;
  InterfaceServicePolicy::~InterfaceServicePolicy((InterfaceServicePolicy *)this);
  return;
}
```
