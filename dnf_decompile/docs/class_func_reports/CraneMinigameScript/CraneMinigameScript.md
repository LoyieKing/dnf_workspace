# CraneMinigameScript

`_ZN19CraneMinigameScriptC1Ev`

`CraneMinigameScript::CraneMinigameScript()`

| 类 | 地址 |
|---|---|
| `CraneMinigameScript` | `0x088e3736` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e3736  _ZN19CraneMinigameScriptC1Ev
#           CraneMinigameScript::CraneMinigameScript()
# range [0x088e3736, 0x088e37a7]
088e3736 +0x00:  push   %ebp
088e3737 +0x01:  mov    %esp,%ebp
088e3739 +0x03:  push   %esi
088e373a +0x04:  push   %ebx
088e373b +0x05:  sub    $0x10,%esp
088e373e +0x08:  mov    0x8(%ebp),%eax
088e3741 +0x0b:  add    $0x4,%eax
088e3744 +0x0e:  mov    %eax,(%esp)
088e3747 +0x11:  call   088e420e <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0x15d>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0x15d
088e374c +0x16:  mov    0x8(%ebp),%eax
088e374f +0x19:  add    $0x18,%eax
088e3752 +0x1c:  mov    %eax,(%esp)
088e3755 +0x1f:  call   088e40ce <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0x1d>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0x1d
088e375a +0x24:  mov    0x8(%ebp),%eax
088e375d +0x27:  add    $0x5c,%eax
088e3760 +0x2a:  mov    %eax,(%esp)
088e3763 +0x2d:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
088e3768 +0x32:  jmp    088e37a0 <+0x6a>
088e376a +0x34:  mov    %edx,%ebx
088e376c +0x36:  mov    %eax,%esi
088e376e +0x38:  mov    0x8(%ebp),%eax
088e3771 +0x3b:  add    $0x18,%eax
088e3774 +0x3e:  mov    %eax,(%esp)
088e3777 +0x41:  call   088e4160 <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0xaf>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0xaf
088e377c +0x46:  mov    %esi,%eax
088e377e +0x48:  mov    %ebx,%edx
088e3780 +0x4a:  jmp    088e3782 <+0x4c>
088e3782 +0x4c:  mov    %edx,%ebx
088e3784 +0x4e:  mov    %eax,%esi
088e3786 +0x50:  mov    0x8(%ebp),%eax
088e3789 +0x53:  add    $0x4,%eax
088e378c +0x56:  mov    %eax,(%esp)
088e378f +0x59:  call   088e4222 <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0x171>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0x171
088e3794 +0x5e:  mov    %esi,%eax
088e3796 +0x60:  mov    %ebx,%edx
088e3798 +0x62:  mov    %eax,(%esp)
088e379b +0x65:  call   08ae3750 <_Unwind_Resume>
088e37a0 +0x6a:  add    $0x10,%esp
088e37a3 +0x6d:  pop    %ebx
088e37a4 +0x6e:  pop    %esi
088e37a5 +0x6f:  pop    %ebp
088e37a6 +0x70:  ret
088e37a7 +0x71:  nop
```

## 反编译 C

```c
// CraneMinigameScript::CraneMinigameScript @ 0x88e3736

/* CraneMinigameScript::CraneMinigameScript() */

void __thiscall CraneMinigameScript::CraneMinigameScript(CraneMinigameScript *this)

{
  std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>::vector
            ((vector<CraneItemInfo*,std::allocator<CraneItemInfo*>> *)(this + 4));
                    /* try { // try from 088e3755 to 088e3759 has its CatchHandler @ 088e3782 */
  Action_SendMail::Action_SendMail((Action_SendMail *)(this + 0x18));
                    /* try { // try from 088e3763 to 088e3767 has its CatchHandler @ 088e376a */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x5c));
  return;
}
```
