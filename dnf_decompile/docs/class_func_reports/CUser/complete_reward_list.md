# complete_reward_list

`_ZN5CUser20complete_reward_listERSt6vectorISt4pairIiiESaIS2_EES5_`

`CUser::complete_reward_list(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08664dce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08664dce  _ZN5CUser20complete_reward_listERSt6vectorISt4pairIiiESaIS2_EES5_
#           CUser::complete_reward_list(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x08664dce, 0x08664e8d]
08664dce +0x00:  push   %ebp
08664dcf +0x01:  mov    %esp,%ebp
08664dd1 +0x03:  push   %esi
08664dd2 +0x04:  push   %ebx
08664dd3 +0x05:  sub    $0x20,%esp
08664dd6 +0x08:  movl   $0x0,-0x10(%ebp)
08664ddd +0x0f:  jmp    08664e6e <+0xa0>
08664de2 +0x14:  movl   $0x0,-0xc(%ebp)
08664de9 +0x1b:  jmp    08664e55 <+0x87>
08664deb +0x1d:  mov    -0x10(%ebp),%eax
08664dee +0x20:  mov    %eax,0x4(%esp)
08664df2 +0x24:  mov    0xc(%ebp),%eax
08664df5 +0x27:  mov    %eax,(%esp)
08664df8 +0x2a:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08664dfd +0x2f:  mov    (%eax),%ebx
08664dff +0x31:  mov    -0xc(%ebp),%eax
08664e02 +0x34:  mov    %eax,0x4(%esp)
08664e06 +0x38:  mov    0x10(%ebp),%eax
08664e09 +0x3b:  mov    %eax,(%esp)
08664e0c +0x3e:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08664e11 +0x43:  mov    (%eax),%eax
08664e13 +0x45:  cmp    %eax,%ebx
08664e15 +0x47:  sete   %al
08664e18 +0x4a:  test   %al,%al
08664e1a +0x4c:  je     08664e51 <+0x83>
08664e1c +0x4e:  mov    -0x10(%ebp),%eax
08664e1f +0x51:  mov    %eax,0x4(%esp)
08664e23 +0x55:  mov    0xc(%ebp),%eax
08664e26 +0x58:  mov    %eax,(%esp)
08664e29 +0x5b:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08664e2e +0x60:  mov    %eax,%ebx
08664e30 +0x62:  mov    0x4(%ebx),%esi
08664e33 +0x65:  mov    -0xc(%ebp),%eax
08664e36 +0x68:  mov    %eax,0x4(%esp)
08664e3a +0x6c:  mov    0x10(%ebp),%eax
08664e3d +0x6f:  mov    %eax,(%esp)
08664e40 +0x72:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08664e45 +0x77:  mov    0x4(%eax),%eax
08664e48 +0x7a:  mov    %esi,%edx
08664e4a +0x7c:  sub    %eax,%edx
08664e4c +0x7e:  mov    %edx,%eax
08664e4e +0x80:  mov    %eax,0x4(%ebx)
08664e51 +0x83:  addl   $0x1,-0xc(%ebp)
08664e55 +0x87:  mov    0x10(%ebp),%eax
08664e58 +0x8a:  mov    %eax,(%esp)
08664e5b +0x8d:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08664e60 +0x92:  cmp    -0xc(%ebp),%eax
08664e63 +0x95:  seta   %al
08664e66 +0x98:  test   %al,%al
08664e68 +0x9a:  jne    08664deb <+0x1d>
08664e6a +0x9c:  addl   $0x1,-0x10(%ebp)
08664e6e +0xa0:  mov    0xc(%ebp),%eax
08664e71 +0xa3:  mov    %eax,(%esp)
08664e74 +0xa6:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08664e79 +0xab:  cmp    -0x10(%ebp),%eax
08664e7c +0xae:  seta   %al
08664e7f +0xb1:  test   %al,%al
08664e81 +0xb3:  jne    08664de2 <+0x14>
08664e87 +0xb9:  add    $0x20,%esp
08664e8a +0xbc:  pop    %ebx
08664e8b +0xbd:  pop    %esi
08664e8c +0xbe:  pop    %ebp
08664e8d +0xbf:  ret
```

## 反编译 C

```c
// CUser::complete_reward_list @ 0x8664dce

/* CUser::complete_reward_list(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> >
   >&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

void __thiscall CUser::complete_reward_list(CUser *this,vector *param_1,vector *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  while( true ) {
    uVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
    if (uVar5 <= local_14) break;
    local_10 = 0;
    while( true ) {
      uVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2);
      if (uVar5 <= local_10) break;
      piVar2 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                 param_1,local_14);
      iVar1 = *piVar2;
      piVar2 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                 param_2,local_10);
      if (iVar1 == *piVar2) {
        iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,
                           local_14);
        iVar1 = *(int *)(iVar3 + 4);
        iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,
                           local_10);
        *(int *)(iVar3 + 4) = iVar1 - *(int *)(iVar4 + 4);
      }
      local_10 = local_10 + 1;
    }
    local_14 = local_14 + 1;
  }
  return;
}
```
