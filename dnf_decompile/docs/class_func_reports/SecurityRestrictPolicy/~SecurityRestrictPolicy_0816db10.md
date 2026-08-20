# ~SecurityRestrictPolicy

`_ZN22SecurityRestrictPolicyD0Ev`

`SecurityRestrictPolicy::~SecurityRestrictPolicy()`

| 类 | 地址 |
|---|---|
| `SecurityRestrictPolicy` | `0x0816db10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816db10  _ZN22SecurityRestrictPolicyD0Ev
#           SecurityRestrictPolicy::~SecurityRestrictPolicy()
# range [0x0816db10, 0x0816db2d]
0816db10 +0x00:  push   %ebp
0816db11 +0x01:  mov    %esp,%ebp
0816db13 +0x03:  sub    $0x18,%esp
0816db16 +0x06:  mov    0x8(%ebp),%eax
0816db19 +0x09:  mov    %eax,(%esp)
0816db1c +0x0c:  call   0816dae0 <_ZN22SecurityRestrictPolicyD1Ev>  ; SecurityRestrictPolicy::~SecurityRestrictPolicy()
0816db21 +0x11:  mov    0x8(%ebp),%eax
0816db24 +0x14:  mov    %eax,(%esp)
0816db27 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816db2c +0x1c:  leave
0816db2d +0x1d:  ret
```

## 反编译 C

```c
// SecurityRestrictPolicy::~SecurityRestrictPolicy @ 0x816db10

/* SecurityRestrictPolicy::~SecurityRestrictPolicy() */

void __thiscall SecurityRestrictPolicy::~SecurityRestrictPolicy(SecurityRestrictPolicy *this)

{
  ~SecurityRestrictPolicy(this);
  operator_delete(this);
  return;
}
```
