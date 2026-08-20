# getSkillData

`_ZN12TutorialData12getSkillDataEii`

`TutorialData::getSkillData(int, int)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab89fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab89fa  _ZN12TutorialData12getSkillDataEii
#           TutorialData::getSkillData(int, int)
# range [0x08ab89fa, 0x08ab8a85]
08ab89fa +0x00:  push   %ebp
08ab89fb +0x01:  mov    %esp,%ebp
08ab89fd +0x03:  sub    $0x28,%esp
08ab8a00 +0x06:  mov    0xc(%ebp),%edx
08ab8a03 +0x09:  mov    %edx,%eax
08ab8a05 +0x0b:  add    %eax,%eax
08ab8a07 +0x0d:  add    %edx,%eax
08ab8a09 +0x0f:  shl    $0x3,%eax
08ab8a0c +0x12:  add    $0x90,%eax
08ab8a11 +0x17:  add    0x8(%ebp),%eax
08ab8a14 +0x1a:  lea    0x4(%eax),%ecx
08ab8a17 +0x1d:  lea    -0x10(%ebp),%eax
08ab8a1a +0x20:  lea    0x10(%ebp),%edx
08ab8a1d +0x23:  mov    %edx,0x8(%esp)
08ab8a21 +0x27:  mov    %ecx,0x4(%esp)
08ab8a25 +0x2b:  mov    %eax,(%esp)
08ab8a28 +0x2e:  call   08ab9f14 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x74f>  ; global constructors keyed to TutorialData::TutorialData()+0x74f
08ab8a2d +0x33:  sub    $0x4,%esp
08ab8a30 +0x36:  mov    0xc(%ebp),%edx
08ab8a33 +0x39:  mov    %edx,%eax
08ab8a35 +0x3b:  add    %eax,%eax
08ab8a37 +0x3d:  add    %edx,%eax
08ab8a39 +0x3f:  shl    $0x3,%eax
08ab8a3c +0x42:  add    $0x90,%eax
08ab8a41 +0x47:  add    0x8(%ebp),%eax
08ab8a44 +0x4a:  lea    0x4(%eax),%edx
08ab8a47 +0x4d:  lea    -0xc(%ebp),%eax
08ab8a4a +0x50:  mov    %edx,0x4(%esp)
08ab8a4e +0x54:  mov    %eax,(%esp)
08ab8a51 +0x57:  call   08ab9f40 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x77b>  ; global constructors keyed to TutorialData::TutorialData()+0x77b
08ab8a56 +0x5c:  sub    $0x4,%esp
08ab8a59 +0x5f:  lea    -0xc(%ebp),%eax
08ab8a5c +0x62:  mov    %eax,0x4(%esp)
08ab8a60 +0x66:  lea    -0x10(%ebp),%eax
08ab8a63 +0x69:  mov    %eax,(%esp)
08ab8a66 +0x6c:  call   08ab9f66 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x7a1>  ; global constructors keyed to TutorialData::TutorialData()+0x7a1
08ab8a6b +0x71:  test   %al,%al
08ab8a6d +0x73:  je     08ab8a7f <+0x85>
08ab8a6f +0x75:  lea    -0x10(%ebp),%eax
08ab8a72 +0x78:  mov    %eax,(%esp)
08ab8a75 +0x7b:  call   08ab9f7a <_GLOBAL__I__ZN12TutorialDataC2Ev+0x7b5>  ; global constructors keyed to TutorialData::TutorialData()+0x7b5
08ab8a7a +0x80:  mov    0x4(%eax),%eax
08ab8a7d +0x83:  jmp    08ab8a84 <+0x8a>
08ab8a7f +0x85:  mov    $0x0,%eax
08ab8a84 +0x8a:  leave
08ab8a85 +0x8b:  ret
```

## 反编译 C

```c
// TutorialData::getSkillData @ 0x8ab89fa

/* TutorialData::getSkillData(int, int) */

undefined4 TutorialData::getSkillData(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,TutorialData::SkillData*>> local_14 [4];
  map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
  local_10 [12];
  
  std::
  map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
  ::find((int *)local_14);
  std::
  map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,TutorialData::SkillData*>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,TutorialData::SkillData*>>::operator->
                      (local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
