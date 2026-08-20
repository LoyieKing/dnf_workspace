# get_disjoint_additional_items

`_ZN10expert_job29get_disjoint_additional_itemsERSt8multimapIi16stItemSelectRateSt4lessIiESaISt4pairIKiS1_EEEiRSt6vectorIS1_SaIS1_EE`

`expert_job::get_disjoint_additional_items(std::multimap<int, stItemSelectRate, std::less<int>, std::allocator<std::pair<int const, stItemSelectRate> > >&, int, std::vector<stItemSelectRate, std::allocator<stItemSelectRate> >&)`

| 类 | 地址 |
|---|---|
| `expert_job` | `0x0896d75d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0896d75d  _ZN10expert_job29get_disjoint_additional_itemsERSt8multimapIi16stItemSelectRateSt4lessIiESaISt4pairIKiS1_EEEiRSt6vectorIS1_SaIS1_EE
#           expert_job::get_disjoint_additional_items(std::multimap<int, stItemSelectRate, std::less<int>, std::allocator<std::pair<int const, stItemSelectRate> > >&, int, std::vector<stItemSelectRate, std::allocator<stItemSelectRate> >&)
# range [0x0896d75d, 0x0896d82f]
0896d75d +0x00:  push   %ebp
0896d75e +0x01:  mov    %esp,%ebp
0896d760 +0x03:  sub    $0x28,%esp
0896d763 +0x06:  lea    -0x10(%ebp),%eax
0896d766 +0x09:  lea    0xc(%ebp),%edx
0896d769 +0x0c:  mov    %edx,0x8(%esp)
0896d76d +0x10:  mov    0x8(%ebp),%edx
0896d770 +0x13:  mov    %edx,0x4(%esp)
0896d774 +0x17:  mov    %eax,(%esp)
0896d777 +0x1a:  call   0896fc5a <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x20aa>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x20aa
0896d77c +0x1f:  sub    $0x4,%esp
0896d77f +0x22:  lea    -0xc(%ebp),%eax
0896d782 +0x25:  mov    0x8(%ebp),%edx
0896d785 +0x28:  mov    %edx,0x4(%esp)
0896d789 +0x2c:  mov    %eax,(%esp)
0896d78c +0x2f:  call   0896fc86 <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x20d6>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x20d6
0896d791 +0x34:  sub    $0x4,%esp
0896d794 +0x37:  lea    -0xc(%ebp),%eax
0896d797 +0x3a:  mov    %eax,0x4(%esp)
0896d79b +0x3e:  lea    -0x10(%ebp),%eax
0896d79e +0x41:  mov    %eax,(%esp)
0896d7a1 +0x44:  call   0896fcac <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x20fc>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x20fc
0896d7a6 +0x49:  test   %al,%al
0896d7a8 +0x4b:  je     0896d829 <+0xcc>
0896d7aa +0x4d:  lea    -0x14(%ebp),%eax
0896d7ad +0x50:  lea    0xc(%ebp),%edx
0896d7b0 +0x53:  mov    %edx,0x8(%esp)
0896d7b4 +0x57:  mov    0x8(%ebp),%edx
0896d7b7 +0x5a:  mov    %edx,0x4(%esp)
0896d7bb +0x5e:  mov    %eax,(%esp)
0896d7be +0x61:  call   0896fcc0 <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x2110>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x2110
0896d7c3 +0x66:  sub    $0x4,%esp
0896d7c6 +0x69:  lea    -0x18(%ebp),%eax
0896d7c9 +0x6c:  lea    0xc(%ebp),%edx
0896d7cc +0x6f:  mov    %edx,0x8(%esp)
0896d7d0 +0x73:  mov    0x8(%ebp),%edx
0896d7d3 +0x76:  mov    %edx,0x4(%esp)
0896d7d7 +0x7a:  mov    %eax,(%esp)
0896d7da +0x7d:  call   0896fcec <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x213c>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x213c
0896d7df +0x82:  sub    $0x4,%esp
0896d7e2 +0x85:  jmp    0896d80c <+0xaf>
0896d7e4 +0x87:  lea    -0x14(%ebp),%eax
0896d7e7 +0x8a:  mov    %eax,(%esp)
0896d7ea +0x8d:  call   0896fd36 <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x2186>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x2186
0896d7ef +0x92:  add    $0x4,%eax
0896d7f2 +0x95:  mov    %eax,0x4(%esp)
0896d7f6 +0x99:  mov    0x10(%ebp),%eax
0896d7f9 +0x9c:  mov    %eax,(%esp)
0896d7fc +0x9f:  call   0896fd44 <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x2194>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x2194
0896d801 +0xa4:  lea    -0x14(%ebp),%eax
0896d804 +0xa7:  mov    %eax,(%esp)
0896d807 +0xaa:  call   0896fd18 <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x2168>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x2168
0896d80c +0xaf:  lea    -0x18(%ebp),%eax
0896d80f +0xb2:  mov    %eax,0x4(%esp)
0896d813 +0xb6:  lea    -0x14(%ebp),%eax
0896d816 +0xb9:  mov    %eax,(%esp)
0896d819 +0xbc:  call   0896fcac <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x20fc>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x20fc
0896d81e +0xc1:  test   %al,%al
0896d820 +0xc3:  jne    0896d7e4 <+0x87>
0896d822 +0xc5:  mov    $0x1,%eax
0896d827 +0xca:  jmp    0896d82e <+0xd1>
0896d829 +0xcc:  mov    $0x0,%eax
0896d82e +0xd1:  leave
0896d82f +0xd2:  ret
```

## 反编译 C

```c
// expert_job::get_disjoint_additional_items @ 0x896d75d

/* expert_job::get_disjoint_additional_items(std::multimap<int, stItemSelectRate, std::less<int>,
   std::allocator<std::pair<int const, stItemSelectRate> > >&, int, std::vector<stItemSelectRate,
   std::allocator<stItemSelectRate> >&) */

undefined4 expert_job::get_disjoint_additional_items(multimap *param_1,int param_2,vector *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  multimap<int,stItemSelectRate,std::less<int>,std::allocator<std::pair<int_const,stItemSelectRate>>>
  local_1c [4];
  multimap<int,stItemSelectRate,std::less<int>,std::allocator<std::pair<int_const,stItemSelectRate>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,stItemSelectRate>> local_14 [4];
  multimap<int,stItemSelectRate,std::less<int>,std::allocator<std::pair<int_const,stItemSelectRate>>>
  local_10 [12];
  
  std::
  multimap<int,stItemSelectRate,std::less<int>,std::allocator<std::pair<int_const,stItemSelectRate>>>
  ::find((int *)local_14);
  std::
  multimap<int,stItemSelectRate,std::less<int>,std::allocator<std::pair<int_const,stItemSelectRate>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stItemSelectRate>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    std::
    multimap<int,stItemSelectRate,std::less<int>,std::allocator<std::pair<int_const,stItemSelectRate>>>
    ::lower_bound(local_18,(int *)param_1);
    std::
    multimap<int,stItemSelectRate,std::less<int>,std::allocator<std::pair<int_const,stItemSelectRate>>>
    ::upper_bound(local_1c,(int *)param_1);
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stItemSelectRate>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,stItemSelectRate>> *)local_18,
                         (_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,stItemSelectRate>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,stItemSelectRate>> *)local_18);
      std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>::push_back
                ((vector<stItemSelectRate,std::allocator<stItemSelectRate>> *)param_3,
                 (stItemSelectRate *)(iVar2 + 4));
      std::_Rb_tree_iterator<std::pair<int_const,stItemSelectRate>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,stItemSelectRate>> *)local_18);
    }
    uVar3 = 1;
  }
  return uVar3;
}
```
