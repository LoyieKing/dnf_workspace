# getPassiveSkillData

`_ZN12TutorialData19getPassiveSkillDataEi`

`TutorialData::getPassiveSkillData(int)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab89a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab89a6  _ZN12TutorialData19getPassiveSkillDataEi
#           TutorialData::getPassiveSkillData(int)
# range [0x08ab89a6, 0x08ab89f9]
08ab89a6 +0x00:  push   %ebp
08ab89a7 +0x01:  mov    %esp,%ebp
08ab89a9 +0x03:  push   %ebx
08ab89aa +0x04:  sub    $0x14,%esp
08ab89ad +0x07:  mov    0x8(%ebp),%ebx
08ab89b0 +0x0a:  cmpl   $0x0,0x10(%ebp)
08ab89b4 +0x0e:  js     08ab89bc <+0x16>
08ab89b6 +0x10:  cmpl   $0x3,0x10(%ebp)
08ab89ba +0x14:  jle    08ab89c8 <+0x22>
08ab89bc +0x16:  mov    %ebx,%eax
08ab89be +0x18:  mov    %eax,(%esp)
08ab89c1 +0x1b:  call   08ab9994 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x1cf>  ; global constructors keyed to TutorialData::TutorialData()+0x1cf
08ab89c6 +0x20:  jmp    08ab89ed <+0x47>
08ab89c8 +0x22:  mov    %ebx,%ecx
08ab89ca +0x24:  mov    0x10(%ebp),%edx
08ab89cd +0x27:  mov    %edx,%eax
08ab89cf +0x29:  add    %eax,%eax
08ab89d1 +0x2b:  add    %edx,%eax
08ab89d3 +0x2d:  shl    $0x2,%eax
08ab89d6 +0x30:  add    $0xf0,%eax
08ab89db +0x35:  add    0xc(%ebp),%eax
08ab89de +0x38:  add    $0x4,%eax
08ab89e1 +0x3b:  mov    %eax,0x4(%esp)
08ab89e5 +0x3f:  mov    %ecx,(%esp)
08ab89e8 +0x42:  call   08ab9e60 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x69b>  ; global constructors keyed to TutorialData::TutorialData()+0x69b
08ab89ed +0x47:  mov    %ebx,%eax
08ab89ef +0x49:  mov    %ebx,%eax
08ab89f1 +0x4b:  add    $0x14,%esp
08ab89f4 +0x4e:  pop    %ebx
08ab89f5 +0x4f:  pop    %ebp
08ab89f6 +0x50:  ret    $0x4
08ab89f9 +0x53:  nop
```

## 反编译 C

```c
// TutorialData::getPassiveSkillData @ 0x8ab89a6

/* TutorialData::getPassiveSkillData(int) */

int TutorialData::getPassiveSkillData(int param_1)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  
  if ((in_stack_0000000c < 0) || (3 < in_stack_0000000c)) {
    std::vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>>::vector
              ((vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>> *)param_1)
    ;
  }
  else {
    std::vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>>::vector
              ((vector<TutorialData::SkillData*,std::allocator<TutorialData::SkillData*>> *)param_1,
               (vector *)(in_stack_0000000c * 0xc + in_stack_00000008 + 0xf4));
  }
  return param_1;
}
```
