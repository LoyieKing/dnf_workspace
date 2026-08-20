# SecurityRestrictPolicy

`_ZN22SecurityRestrictPolicyC1Ev`

`SecurityRestrictPolicy::SecurityRestrictPolicy()`

| 类 | 地址 |
|---|---|
| `SecurityRestrictPolicy` | `0x0816da50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816da50  _ZN22SecurityRestrictPolicyC1Ev
#           SecurityRestrictPolicy::SecurityRestrictPolicy()
# range [0x0816da50, 0x0816dadf]
0816da50 +0x00:  push   %ebp
0816da51 +0x01:  mov    %esp,%ebp
0816da53 +0x03:  push   %esi
0816da54 +0x04:  push   %ebx
0816da55 +0x05:  sub    $0x20,%esp
0816da58 +0x08:  mov    0x8(%ebp),%eax
0816da5b +0x0b:  movl   $0x3,0x4(%esp)
0816da63 +0x13:  mov    %eax,(%esp)
0816da66 +0x16:  call   0816ed98 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x86>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x86
0816da6b +0x1b:  mov    0x8(%ebp),%eax
0816da6e +0x1e:  movl   $&_ZTV22SecurityRestrictPolicy+0x8,(%eax)
0816da74 +0x24:  mov    0x8(%ebp),%eax
0816da77 +0x27:  movb   $0x0,0x4(%eax)
0816da7b +0x2b:  mov    0x8(%ebp),%eax
0816da7e +0x2e:  add    $0xc,%eax
0816da81 +0x31:  mov    %eax,(%esp)
0816da84 +0x34:  call   0816ed70 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x5e>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x5e
0816da89 +0x39:  movl   $0x0,-0xc(%ebp)
0816da90 +0x40:  jmp    0816dab1 <+0x61>
0816da92 +0x42:  movw   $0x1,-0xe(%ebp)
0816da98 +0x48:  mov    0x8(%ebp),%eax
0816da9b +0x4b:  lea    0xc(%eax),%edx
0816da9e +0x4e:  lea    -0xe(%ebp),%eax
0816daa1 +0x51:  mov    %eax,0x4(%esp)
0816daa5 +0x55:  mov    %edx,(%esp)
0816daa8 +0x58:  call   0816eefa <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1e8>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1e8
0816daad +0x5d:  addl   $0x1,-0xc(%ebp)
0816dab1 +0x61:  cmpl   $0x1,-0xc(%ebp)
0816dab5 +0x65:  setle  %al
0816dab8 +0x68:  test   %al,%al
0816daba +0x6a:  jne    0816da92 <+0x42>
0816dabc +0x6c:  jmp    0816dad9 <+0x89>
0816dabe +0x6e:  mov    %edx,%ebx
0816dac0 +0x70:  mov    %eax,%esi
0816dac2 +0x72:  mov    0x8(%ebp),%eax
0816dac5 +0x75:  mov    %eax,(%esp)
0816dac8 +0x78:  call   0816edc0 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0xae>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0xae
0816dacd +0x7d:  mov    %esi,%eax
0816dacf +0x7f:  mov    %ebx,%edx
0816dad1 +0x81:  mov    %eax,(%esp)
0816dad4 +0x84:  call   08ae3750 <_Unwind_Resume>
0816dad9 +0x89:  add    $0x20,%esp
0816dadc +0x8c:  pop    %ebx
0816dadd +0x8d:  pop    %esi
0816dade +0x8e:  pop    %ebp
0816dadf +0x8f:  ret
```

## 反编译 C

```c
// SecurityRestrictPolicy::SecurityRestrictPolicy @ 0x816da50

/* SecurityRestrictPolicy::SecurityRestrictPolicy() */

void __thiscall SecurityRestrictPolicy::SecurityRestrictPolicy(SecurityRestrictPolicy *this)

{
  short local_12;
  int local_10;
  
  InterfaceServicePolicy::InterfaceServicePolicy((InterfaceServicePolicy *)this,3);
  *(undefined ***)this = &PTR__SecurityRestrictPolicy_08b82ea8;
  this[4] = (SecurityRestrictPolicy)0x0;
                    /* try { // try from 0816da84 to 0816daac has its CatchHandler @ 0816dabe */
  ServicePolicy::Init((ServicePolicy *)(this + 0xc));
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    local_12 = 1;
    std::vector<short,std::allocator<short>>::push_back
              ((vector<short,std::allocator<short>> *)(this + 0xc),&local_12);
  }
  return;
}
```
