# ~CreateCharacterRestrictPolicy

`_ZN29CreateCharacterRestrictPolicyD1Ev`

`CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy()`

| 类 | 地址 |
|---|---|
| `CreateCharacterRestrictPolicy` | `0x0816de64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816de64  _ZN29CreateCharacterRestrictPolicyD1Ev
#           CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy()
# range [0x0816de64, 0x0816de93]
0816de64 +0x00:  push   %ebp
0816de65 +0x01:  mov    %esp,%ebp
0816de67 +0x03:  sub    $0x18,%esp
0816de6a +0x06:  mov    0x8(%ebp),%eax
0816de6d +0x09:  movl   $&_ZTV29CreateCharacterRestrictPolicy+0x8,(%eax)
0816de73 +0x0f:  mov    0x8(%ebp),%eax
0816de76 +0x12:  mov    %eax,(%esp)
0816de79 +0x15:  call   0816edc0 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0xae>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0xae
0816de7e +0x1a:  mov    $0x0,%eax
0816de83 +0x1f:  test   %al,%al
0816de85 +0x21:  je     0816de92 <+0x2e>
0816de87 +0x23:  mov    0x8(%ebp),%eax
0816de8a +0x26:  mov    %eax,(%esp)
0816de8d +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816de92 +0x2e:  leave
0816de93 +0x2f:  ret
```

## 反编译 C

```c
// CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy @ 0x816de64

/* WARNING: Removing unreachable block (ram,0x0816de87) */
/* CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy() */

void __thiscall
CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy(CreateCharacterRestrictPolicy *this)

{
  *(undefined ***)this = &PTR__CreateCharacterRestrictPolicy_08b82e68;
  InterfaceServicePolicy::~InterfaceServicePolicy((InterfaceServicePolicy *)this);
  return;
}
```
