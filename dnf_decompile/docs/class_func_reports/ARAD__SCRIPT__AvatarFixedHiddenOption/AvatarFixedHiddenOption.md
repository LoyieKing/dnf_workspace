# AvatarFixedHiddenOption

`_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC1Ev`

`ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarFixedHiddenOption` | `0x088aecac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088aecac  _ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC1Ev
#           ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()
# range [0x088aecac, 0x088aed5d]
088aecac +0x00:  push   %ebp
088aecad +0x01:  mov    %esp,%ebp
088aecaf +0x03:  push   %edi
088aecb0 +0x04:  push   %esi
088aecb1 +0x05:  push   %ebx
088aecb2 +0x06:  sub    $0x2c,%esp
088aecb5 +0x09:  mov    0x8(%ebp),%ebx
088aecb8 +0x0c:  mov    %ebx,%edi
088aecba +0x0e:  mov    $0x5,%esi
088aecbf +0x13:  jmp    088aeccf <+0x23>
088aecc1 +0x15:  mov    %edi,(%esp)
088aecc4 +0x18:  call   088b024a <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x7e>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x7e
088aecc9 +0x1d:  add    $0xc,%edi
088aeccc +0x20:  sub    $0x1,%esi
088aeccf +0x23:  cmp    $0xffffffff,%esi
088aecd2 +0x26:  setne  %al
088aecd5 +0x29:  test   %al,%al
088aecd7 +0x2b:  jne    088aecc1 <+0x15>
088aecd9 +0x2d:  jmp    088aed17 <+0x6b>
088aecdb +0x2f:  mov    %edx,%edi
088aecdd +0x31:  mov    %eax,-0x1c(%ebp)
088aece0 +0x34:  test   %ebx,%ebx
088aece2 +0x36:  je     088aed0a <+0x5e>
088aece4 +0x38:  mov    $0x5,%eax
088aece9 +0x3d:  sub    %esi,%eax
088aeceb +0x3f:  mov    %eax,%edx
088aeced +0x41:  mov    %edx,%eax
088aecef +0x43:  add    %eax,%eax
088aecf1 +0x45:  add    %edx,%eax
088aecf3 +0x47:  shl    $0x2,%eax
088aecf6 +0x4a:  lea    (%ebx,%eax,1),%esi
088aecf9 +0x4d:  cmp    %ebx,%esi
088aecfb +0x4f:  je     088aed0a <+0x5e>
088aecfd +0x51:  sub    $0xc,%esi
088aed00 +0x54:  mov    %esi,(%esp)
088aed03 +0x57:  call   088b025e <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x92>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x92
088aed08 +0x5c:  jmp    088aecf9 <+0x4d>
088aed0a +0x5e:  mov    -0x1c(%ebp),%eax
088aed0d +0x61:  mov    %edi,%edx
088aed0f +0x63:  mov    %eax,(%esp)
088aed12 +0x66:  call   08ae3750 <_Unwind_Resume>
088aed17 +0x6b:  mov    0x8(%ebp),%eax
088aed1a +0x6e:  mov    %eax,(%esp)
088aed1d +0x71:  call   088b00e0 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption11clearScriptEv>  ; ARAD::SCRIPT::AvatarFixedHiddenOption::clearScript()
088aed22 +0x76:  jmp    088aed55 <+0xa9>
088aed24 +0x78:  mov    %edx,%esi
088aed26 +0x7a:  mov    %eax,%edi
088aed28 +0x7c:  mov    0x8(%ebp),%eax
088aed2b +0x7f:  test   %eax,%eax
088aed2d +0x81:  je     088aed49 <+0x9d>
088aed2f +0x83:  mov    0x8(%ebp),%eax
088aed32 +0x86:  lea    0x48(%eax),%ebx
088aed35 +0x89:  mov    0x8(%ebp),%eax
088aed38 +0x8c:  cmp    %eax,%ebx
088aed3a +0x8e:  je     088aed49 <+0x9d>
088aed3c +0x90:  sub    $0xc,%ebx
088aed3f +0x93:  mov    %ebx,(%esp)
088aed42 +0x96:  call   088b025e <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x92>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x92
088aed47 +0x9b:  jmp    088aed35 <+0x89>
088aed49 +0x9d:  mov    %edi,%eax
088aed4b +0x9f:  mov    %esi,%edx
088aed4d +0xa1:  mov    %eax,(%esp)
088aed50 +0xa4:  call   08ae3750 <_Unwind_Resume>
088aed55 +0xa9:  add    $0x2c,%esp
088aed58 +0xac:  pop    %ebx
088aed59 +0xad:  pop    %esi
088aed5a +0xae:  pop    %edi
088aed5b +0xaf:  pop    %ebp
088aed5c +0xb0:  ret
088aed5d +0xb1:  nop
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption @ 0x88aecac

/* ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption() */

void __thiscall
ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption(AvatarFixedHiddenOption *this)

{
  int iVar1;
  AvatarFixedHiddenOption *this_00;
  
  this_00 = this;
  for (iVar1 = 5; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 088aecc4 to 088aecc8 has its CatchHandler @ 088aecdb */
    std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
    vector((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>> *)
           this_00);
    this_00 = this_00 + 0xc;
  }
                    /* try { // try from 088aed1d to 088aed21 has its CatchHandler @ 088aed24 */
  clearScript(this);
  return;
}
```
