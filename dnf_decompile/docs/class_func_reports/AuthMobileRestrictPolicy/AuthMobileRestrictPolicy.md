# AuthMobileRestrictPolicy

`_ZN24AuthMobileRestrictPolicyC1Ev`

`AuthMobileRestrictPolicy::AuthMobileRestrictPolicy()`

| 类 | 地址 |
|---|---|
| `AuthMobileRestrictPolicy` | `0x0816d6ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d6ce  _ZN24AuthMobileRestrictPolicyC1Ev
#           AuthMobileRestrictPolicy::AuthMobileRestrictPolicy()
# range [0x0816d6ce, 0x0816d75d]
0816d6ce +0x00:  push   %ebp
0816d6cf +0x01:  mov    %esp,%ebp
0816d6d1 +0x03:  push   %esi
0816d6d2 +0x04:  push   %ebx
0816d6d3 +0x05:  sub    $0x20,%esp
0816d6d6 +0x08:  mov    0x8(%ebp),%eax
0816d6d9 +0x0b:  movl   $0x1,0x4(%esp)
0816d6e1 +0x13:  mov    %eax,(%esp)
0816d6e4 +0x16:  call   0816ed98 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x86>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x86
0816d6e9 +0x1b:  mov    0x8(%ebp),%eax
0816d6ec +0x1e:  movl   $&_ZTV24AuthMobileRestrictPolicy+0x8,(%eax)
0816d6f2 +0x24:  mov    0x8(%ebp),%eax
0816d6f5 +0x27:  movb   $0x0,0x4(%eax)
0816d6f9 +0x2b:  mov    0x8(%ebp),%eax
0816d6fc +0x2e:  add    $0xc,%eax
0816d6ff +0x31:  mov    %eax,(%esp)
0816d702 +0x34:  call   0816ed70 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x5e>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x5e
0816d707 +0x39:  movl   $0x0,-0xc(%ebp)
0816d70e +0x40:  jmp    0816d72f <+0x61>
0816d710 +0x42:  movw   $0x1,-0xe(%ebp)
0816d716 +0x48:  mov    0x8(%ebp),%eax
0816d719 +0x4b:  lea    0xc(%eax),%edx
0816d71c +0x4e:  lea    -0xe(%ebp),%eax
0816d71f +0x51:  mov    %eax,0x4(%esp)
0816d723 +0x55:  mov    %edx,(%esp)
0816d726 +0x58:  call   0816eefa <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1e8>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1e8
0816d72b +0x5d:  addl   $0x1,-0xc(%ebp)
0816d72f +0x61:  cmpl   $0x21,-0xc(%ebp)
0816d733 +0x65:  setle  %al
0816d736 +0x68:  test   %al,%al
0816d738 +0x6a:  jne    0816d710 <+0x42>
0816d73a +0x6c:  jmp    0816d757 <+0x89>
0816d73c +0x6e:  mov    %edx,%ebx
0816d73e +0x70:  mov    %eax,%esi
0816d740 +0x72:  mov    0x8(%ebp),%eax
0816d743 +0x75:  mov    %eax,(%esp)
0816d746 +0x78:  call   0816edc0 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0xae>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0xae
0816d74b +0x7d:  mov    %esi,%eax
0816d74d +0x7f:  mov    %ebx,%edx
0816d74f +0x81:  mov    %eax,(%esp)
0816d752 +0x84:  call   08ae3750 <_Unwind_Resume>
0816d757 +0x89:  add    $0x20,%esp
0816d75a +0x8c:  pop    %ebx
0816d75b +0x8d:  pop    %esi
0816d75c +0x8e:  pop    %ebp
0816d75d +0x8f:  ret
```

## 反编译 C

```c
// AuthMobileRestrictPolicy::AuthMobileRestrictPolicy @ 0x816d6ce

/* AuthMobileRestrictPolicy::AuthMobileRestrictPolicy() */

void __thiscall AuthMobileRestrictPolicy::AuthMobileRestrictPolicy(AuthMobileRestrictPolicy *this)

{
  short local_12;
  int local_10;
  
  InterfaceServicePolicy::InterfaceServicePolicy((InterfaceServicePolicy *)this,1);
  *(undefined ***)this = &PTR__AuthMobileRestrictPolicy_08b82ee8;
  this[4] = (AuthMobileRestrictPolicy)0x0;
                    /* try { // try from 0816d702 to 0816d72a has its CatchHandler @ 0816d73c */
  ServicePolicy::Init((ServicePolicy *)(this + 0xc));
  for (local_10 = 0; local_10 < 0x22; local_10 = local_10 + 1) {
    local_12 = 1;
    std::vector<short,std::allocator<short>>::push_back
              ((vector<short,std::allocator<short>> *)(this + 0xc),&local_12);
  }
  return;
}
```
