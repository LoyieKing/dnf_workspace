# getStrikerSkillVector

`_ZN13StrikerScript21getStrikerSkillVectorEss`

`StrikerScript::getStrikerSkillVector(short, short)`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9e7e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9e7e0  _ZN13StrikerScript21getStrikerSkillVectorEss
#           StrikerScript::getStrikerSkillVector(short, short)
# range [0x08a9e7e0, 0x08a9e867]
08a9e7e0 +0x00:  push   %ebp
08a9e7e1 +0x01:  mov    %esp,%ebp
08a9e7e3 +0x03:  sub    $0x38,%esp
08a9e7e6 +0x06:  mov    0xc(%ebp),%edx
08a9e7e9 +0x09:  mov    0x10(%ebp),%eax
08a9e7ec +0x0c:  mov    %dx,-0x1c(%ebp)
08a9e7f0 +0x10:  mov    %ax,-0x20(%ebp)
08a9e7f4 +0x14:  movzwl -0x1c(%ebp),%eax
08a9e7f8 +0x18:  mov    %ax,-0x10(%ebp)
08a9e7fc +0x1c:  movzwl -0x20(%ebp),%eax
08a9e800 +0x20:  mov    %ax,-0xe(%ebp)
08a9e804 +0x24:  mov    0x8(%ebp),%eax
08a9e807 +0x27:  lea    0x78(%eax),%ecx
08a9e80a +0x2a:  lea    -0x14(%ebp),%eax
08a9e80d +0x2d:  lea    -0x10(%ebp),%edx
08a9e810 +0x30:  mov    %edx,0x8(%esp)
08a9e814 +0x34:  mov    %ecx,0x4(%esp)
08a9e818 +0x38:  mov    %eax,(%esp)
08a9e81b +0x3b:  call   08a9f1e0 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x4f3>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x4f3
08a9e820 +0x40:  sub    $0x4,%esp
08a9e823 +0x43:  mov    0x8(%ebp),%eax
08a9e826 +0x46:  lea    0x78(%eax),%edx
08a9e829 +0x49:  lea    -0xc(%ebp),%eax
08a9e82c +0x4c:  mov    %edx,0x4(%esp)
08a9e830 +0x50:  mov    %eax,(%esp)
08a9e833 +0x53:  call   08a9f0de <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x3f1>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x3f1
08a9e838 +0x58:  sub    $0x4,%esp
08a9e83b +0x5b:  lea    -0xc(%ebp),%eax
08a9e83e +0x5e:  mov    %eax,0x4(%esp)
08a9e842 +0x62:  lea    -0x14(%ebp),%eax
08a9e845 +0x65:  mov    %eax,(%esp)
08a9e848 +0x68:  call   08a9f104 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x417>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x417
08a9e84d +0x6d:  test   %al,%al
08a9e84f +0x6f:  je     08a9e861 <+0x81>
08a9e851 +0x71:  lea    -0x14(%ebp),%eax
08a9e854 +0x74:  mov    %eax,(%esp)
08a9e857 +0x77:  call   08a9f136 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x449>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x449
08a9e85c +0x7c:  mov    0x4(%eax),%eax
08a9e85f +0x7f:  jmp    08a9e866 <+0x86>
08a9e861 +0x81:  mov    $0x0,%eax
08a9e866 +0x86:  leave
08a9e867 +0x87:  ret
```

## 反编译 C

```c
// StrikerScript::getStrikerSkillVector @ 0x8a9e7e0

/* StrikerScript::getStrikerSkillVector(short, short) */

undefined4 __thiscall
StrikerScript::getStrikerSkillVector(StrikerScript *this,short param_1,short param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
  local_18 [4];
  short local_14;
  short local_12;
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  local_10 [12];
  
  local_14 = param_1;
  local_12 = param_2;
  std::
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  ::find((int *)local_18);
  std::
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
          ::operator!=(local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
            ::operator->(local_18);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
