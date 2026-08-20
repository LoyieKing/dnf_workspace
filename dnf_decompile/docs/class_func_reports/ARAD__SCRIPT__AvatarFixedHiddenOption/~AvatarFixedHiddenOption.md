# ~AvatarFixedHiddenOption

`_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionD1Ev`

`ARAD::SCRIPT::AvatarFixedHiddenOption::~AvatarFixedHiddenOption()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarFixedHiddenOption` | `0x088aed5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088aed5e  _ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionD1Ev
#           ARAD::SCRIPT::AvatarFixedHiddenOption::~AvatarFixedHiddenOption()
# range [0x088aed5e, 0x088aedcd]
088aed5e +0x00:  push   %ebp
088aed5f +0x01:  mov    %esp,%ebp
088aed61 +0x03:  push   %edi
088aed62 +0x04:  push   %esi
088aed63 +0x05:  push   %ebx
088aed64 +0x06:  sub    $0x1c,%esp
088aed67 +0x09:  mov    0x8(%ebp),%eax
088aed6a +0x0c:  mov    %eax,(%esp)
088aed6d +0x0f:  call   088b00e0 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption11clearScriptEv>  ; ARAD::SCRIPT::AvatarFixedHiddenOption::clearScript()
088aed72 +0x14:  jmp    088aeda5 <+0x47>
088aed74 +0x16:  mov    %edx,%esi
088aed76 +0x18:  mov    %eax,%edi
088aed78 +0x1a:  mov    0x8(%ebp),%eax
088aed7b +0x1d:  test   %eax,%eax
088aed7d +0x1f:  je     088aed99 <+0x3b>
088aed7f +0x21:  mov    0x8(%ebp),%eax
088aed82 +0x24:  lea    0x48(%eax),%ebx
088aed85 +0x27:  mov    0x8(%ebp),%eax
088aed88 +0x2a:  cmp    %eax,%ebx
088aed8a +0x2c:  je     088aed99 <+0x3b>
088aed8c +0x2e:  sub    $0xc,%ebx
088aed8f +0x31:  mov    %ebx,(%esp)
088aed92 +0x34:  call   088b025e <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x92>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x92
088aed97 +0x39:  jmp    088aed85 <+0x27>
088aed99 +0x3b:  mov    %edi,%eax
088aed9b +0x3d:  mov    %esi,%edx
088aed9d +0x3f:  mov    %eax,(%esp)
088aeda0 +0x42:  call   08ae3750 <_Unwind_Resume>
088aeda5 +0x47:  mov    0x8(%ebp),%eax
088aeda8 +0x4a:  test   %eax,%eax
088aedaa +0x4c:  je     088aedc6 <+0x68>
088aedac +0x4e:  mov    0x8(%ebp),%eax
088aedaf +0x51:  lea    0x48(%eax),%ebx
088aedb2 +0x54:  mov    0x8(%ebp),%eax
088aedb5 +0x57:  cmp    %eax,%ebx
088aedb7 +0x59:  je     088aedc6 <+0x68>
088aedb9 +0x5b:  sub    $0xc,%ebx
088aedbc +0x5e:  mov    %ebx,(%esp)
088aedbf +0x61:  call   088b025e <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x92>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x92
088aedc4 +0x66:  jmp    088aedb2 <+0x54>
088aedc6 +0x68:  add    $0x1c,%esp
088aedc9 +0x6b:  pop    %ebx
088aedca +0x6c:  pop    %esi
088aedcb +0x6d:  pop    %edi
088aedcc +0x6e:  pop    %ebp
088aedcd +0x6f:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarFixedHiddenOption::~AvatarFixedHiddenOption @ 0x88aed5e

/* ARAD::SCRIPT::AvatarFixedHiddenOption::~AvatarFixedHiddenOption() */

void __thiscall
ARAD::SCRIPT::AvatarFixedHiddenOption::~AvatarFixedHiddenOption(AvatarFixedHiddenOption *this)

{
  vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>> *this_00;
  
                    /* try { // try from 088aed6d to 088aed71 has its CatchHandler @ 088aed74 */
  clearScript(this);
  if (this != (AvatarFixedHiddenOption *)0x0) {
    this_00 = (vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
               *)(this + 0x48);
    while (this_00 !=
           (vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>> *)
           this) {
      this_00 = this_00 + -0xc;
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      ~vector(this_00);
    }
  }
  return;
}
```
