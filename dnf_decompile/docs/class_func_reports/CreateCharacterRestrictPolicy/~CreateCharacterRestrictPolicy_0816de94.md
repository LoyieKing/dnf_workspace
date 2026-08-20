# ~CreateCharacterRestrictPolicy

`_ZN29CreateCharacterRestrictPolicyD0Ev`

`CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy()`

| 类 | 地址 |
|---|---|
| `CreateCharacterRestrictPolicy` | `0x0816de94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816de94  _ZN29CreateCharacterRestrictPolicyD0Ev
#           CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy()
# range [0x0816de94, 0x0816deb1]
0816de94 +0x00:  push   %ebp
0816de95 +0x01:  mov    %esp,%ebp
0816de97 +0x03:  sub    $0x18,%esp
0816de9a +0x06:  mov    0x8(%ebp),%eax
0816de9d +0x09:  mov    %eax,(%esp)
0816dea0 +0x0c:  call   0816de64 <_ZN29CreateCharacterRestrictPolicyD1Ev>  ; CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy()
0816dea5 +0x11:  mov    0x8(%ebp),%eax
0816dea8 +0x14:  mov    %eax,(%esp)
0816deab +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816deb0 +0x1c:  leave
0816deb1 +0x1d:  ret
```

## 反编译 C

```c
// CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy @ 0x816de94

/* CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy() */

void __thiscall
CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy(CreateCharacterRestrictPolicy *this)

{
  ~CreateCharacterRestrictPolicy(this);
  operator_delete(this);
  return;
}
```
