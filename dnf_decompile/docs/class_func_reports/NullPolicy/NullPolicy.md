# NullPolicy

`_ZN10NullPolicyC1Ev`

`NullPolicy::NullPolicy()`

| 类 | 地址 |
|---|---|
| `NullPolicy` | `0x0816d5aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d5aa  _ZN10NullPolicyC1Ev
#           NullPolicy::NullPolicy()
# range [0x0816d5aa, 0x0816d607]
0816d5aa +0x00:  push   %ebp
0816d5ab +0x01:  mov    %esp,%ebp
0816d5ad +0x03:  push   %esi
0816d5ae +0x04:  push   %ebx
0816d5af +0x05:  sub    $0x10,%esp
0816d5b2 +0x08:  mov    0x8(%ebp),%eax
0816d5b5 +0x0b:  movl   $0x0,0x4(%esp)
0816d5bd +0x13:  mov    %eax,(%esp)
0816d5c0 +0x16:  call   0816ed98 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x86>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x86
0816d5c5 +0x1b:  mov    0x8(%ebp),%eax
0816d5c8 +0x1e:  movl   $&_ZTV10NullPolicy+0x8,(%eax)
0816d5ce +0x24:  mov    0x8(%ebp),%eax
0816d5d1 +0x27:  movb   $0x0,0x4(%eax)
0816d5d5 +0x2b:  mov    0x8(%ebp),%eax
0816d5d8 +0x2e:  add    $0xc,%eax
0816d5db +0x31:  mov    %eax,(%esp)
0816d5de +0x34:  call   0816ed70 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x5e>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x5e
0816d5e3 +0x39:  jmp    0816d600 <+0x56>
0816d5e5 +0x3b:  mov    %edx,%ebx
0816d5e7 +0x3d:  mov    %eax,%esi
0816d5e9 +0x3f:  mov    0x8(%ebp),%eax
0816d5ec +0x42:  mov    %eax,(%esp)
0816d5ef +0x45:  call   0816edc0 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0xae>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0xae
0816d5f4 +0x4a:  mov    %esi,%eax
0816d5f6 +0x4c:  mov    %ebx,%edx
0816d5f8 +0x4e:  mov    %eax,(%esp)
0816d5fb +0x51:  call   08ae3750 <_Unwind_Resume>
0816d600 +0x56:  add    $0x10,%esp
0816d603 +0x59:  pop    %ebx
0816d604 +0x5a:  pop    %esi
0816d605 +0x5b:  pop    %ebp
0816d606 +0x5c:  ret
0816d607 +0x5d:  nop
```

## 反编译 C

```c
// NullPolicy::NullPolicy @ 0x816d5aa

/* NullPolicy::NullPolicy() */

void __thiscall NullPolicy::NullPolicy(NullPolicy *this)

{
  InterfaceServicePolicy::InterfaceServicePolicy((InterfaceServicePolicy *)this,0);
  *(undefined ***)this = &PTR__NullPolicy_08b82f28;
  this[4] = (NullPolicy)0x0;
                    /* try { // try from 0816d5de to 0816d5e2 has its CatchHandler @ 0816d5e5 */
  ServicePolicy::Init((ServicePolicy *)(this + 0xc));
  return;
}
```
