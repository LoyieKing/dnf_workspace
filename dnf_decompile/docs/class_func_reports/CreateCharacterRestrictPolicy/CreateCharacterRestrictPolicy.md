# CreateCharacterRestrictPolicy

`_ZN29CreateCharacterRestrictPolicyC1Ev`

`CreateCharacterRestrictPolicy::CreateCharacterRestrictPolicy()`

| 类 | 地址 |
|---|---|
| `CreateCharacterRestrictPolicy` | `0x0816ddd2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816ddd2  _ZN29CreateCharacterRestrictPolicyC1Ev
#           CreateCharacterRestrictPolicy::CreateCharacterRestrictPolicy()
# range [0x0816ddd2, 0x0816de63]
0816ddd2 +0x00:  push   %ebp
0816ddd3 +0x01:  mov    %esp,%ebp
0816ddd5 +0x03:  push   %esi
0816ddd6 +0x04:  push   %ebx
0816ddd7 +0x05:  sub    $0x20,%esp
0816ddda +0x08:  mov    0x8(%ebp),%eax
0816dddd +0x0b:  movl   $0x2,0x4(%esp)
0816dde5 +0x13:  mov    %eax,(%esp)
0816dde8 +0x16:  call   0816ed98 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x86>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x86
0816dded +0x1b:  mov    0x8(%ebp),%eax
0816ddf0 +0x1e:  movl   $&_ZTV29CreateCharacterRestrictPolicy+0x8,(%eax)
0816ddf6 +0x24:  mov    0x8(%ebp),%eax
0816ddf9 +0x27:  movb   $0x0,0x4(%eax)
0816ddfd +0x2b:  mov    0x8(%ebp),%eax
0816de00 +0x2e:  add    $0xc,%eax
0816de03 +0x31:  mov    %eax,(%esp)
0816de06 +0x34:  call   0816ed70 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x5e>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x5e
0816de0b +0x39:  movl   $0x0,-0xc(%ebp)
0816de12 +0x40:  jmp    0816de34 <+0x62>
0816de14 +0x42:  mov    -0xc(%ebp),%eax
0816de17 +0x45:  mov    %ax,-0xe(%ebp)
0816de1b +0x49:  mov    0x8(%ebp),%eax
0816de1e +0x4c:  lea    0xc(%eax),%edx
0816de21 +0x4f:  lea    -0xe(%ebp),%eax
0816de24 +0x52:  mov    %eax,0x4(%esp)
0816de28 +0x56:  mov    %edx,(%esp)
0816de2b +0x59:  call   0816eefa <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1e8>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1e8
0816de30 +0x5e:  addl   $0x1,-0xc(%ebp)
0816de34 +0x62:  cmpl   $0x2,-0xc(%ebp)
0816de38 +0x66:  setle  %al
0816de3b +0x69:  test   %al,%al
0816de3d +0x6b:  jne    0816de14 <+0x42>
0816de3f +0x6d:  jmp    0816de5c <+0x8a>
0816de41 +0x6f:  mov    %edx,%ebx
0816de43 +0x71:  mov    %eax,%esi
0816de45 +0x73:  mov    0x8(%ebp),%eax
0816de48 +0x76:  mov    %eax,(%esp)
0816de4b +0x79:  call   0816edc0 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0xae>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0xae
0816de50 +0x7e:  mov    %esi,%eax
0816de52 +0x80:  mov    %ebx,%edx
0816de54 +0x82:  mov    %eax,(%esp)
0816de57 +0x85:  call   08ae3750 <_Unwind_Resume>
0816de5c +0x8a:  add    $0x20,%esp
0816de5f +0x8d:  pop    %ebx
0816de60 +0x8e:  pop    %esi
0816de61 +0x8f:  pop    %ebp
0816de62 +0x90:  ret
0816de63 +0x91:  nop
```

## 反编译 C

```c
// CreateCharacterRestrictPolicy::CreateCharacterRestrictPolicy @ 0x816ddd2

/* CreateCharacterRestrictPolicy::CreateCharacterRestrictPolicy() */

void __thiscall
CreateCharacterRestrictPolicy::CreateCharacterRestrictPolicy(CreateCharacterRestrictPolicy *this)

{
  short local_12;
  int local_10;
  
  InterfaceServicePolicy::InterfaceServicePolicy((InterfaceServicePolicy *)this,2);
  *(undefined ***)this = &PTR__CreateCharacterRestrictPolicy_08b82e68;
  this[4] = (CreateCharacterRestrictPolicy)0x0;
                    /* try { // try from 0816de06 to 0816de2f has its CatchHandler @ 0816de41 */
  ServicePolicy::Init((ServicePolicy *)(this + 0xc));
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    local_12 = (short)local_10;
    std::vector<short,std::allocator<short>>::push_back
              ((vector<short,std::allocator<short>> *)(this + 0xc),&local_12);
  }
  return;
}
```
