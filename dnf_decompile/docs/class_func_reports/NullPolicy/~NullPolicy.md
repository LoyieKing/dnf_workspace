# ~NullPolicy

`_ZN10NullPolicyD1Ev`

`NullPolicy::~NullPolicy()`

| 类 | 地址 |
|---|---|
| `NullPolicy` | `0x0816d608` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d608  _ZN10NullPolicyD1Ev
#           NullPolicy::~NullPolicy()
# range [0x0816d608, 0x0816d637]
0816d608 +0x00:  push   %ebp
0816d609 +0x01:  mov    %esp,%ebp
0816d60b +0x03:  sub    $0x18,%esp
0816d60e +0x06:  mov    0x8(%ebp),%eax
0816d611 +0x09:  movl   $&_ZTV10NullPolicy+0x8,(%eax)
0816d617 +0x0f:  mov    0x8(%ebp),%eax
0816d61a +0x12:  mov    %eax,(%esp)
0816d61d +0x15:  call   0816edc0 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0xae>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0xae
0816d622 +0x1a:  mov    $0x0,%eax
0816d627 +0x1f:  test   %al,%al
0816d629 +0x21:  je     0816d636 <+0x2e>
0816d62b +0x23:  mov    0x8(%ebp),%eax
0816d62e +0x26:  mov    %eax,(%esp)
0816d631 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816d636 +0x2e:  leave
0816d637 +0x2f:  ret
```

## 反编译 C

```c
// NullPolicy::~NullPolicy @ 0x816d608

/* WARNING: Removing unreachable block (ram,0x0816d62b) */
/* NullPolicy::~NullPolicy() */

void __thiscall NullPolicy::~NullPolicy(NullPolicy *this)

{
  *(undefined ***)this = &PTR__NullPolicy_08b82f28;
  InterfaceServicePolicy::~InterfaceServicePolicy((InterfaceServicePolicy *)this);
  return;
}
```
