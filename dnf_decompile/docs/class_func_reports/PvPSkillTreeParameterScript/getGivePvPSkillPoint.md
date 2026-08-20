# getGivePvPSkillPoint

`_ZNK27PvPSkillTreeParameterScript20getGivePvPSkillPointEiiii`

`PvPSkillTreeParameterScript::getGivePvPSkillPoint(int, int, int, int) const`

| 类 | 地址 |
|---|---|
| `PvPSkillTreeParameterScript` | `0x08a5dc74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a5dc74  _ZNK27PvPSkillTreeParameterScript20getGivePvPSkillPointEiiii
#           PvPSkillTreeParameterScript::getGivePvPSkillPoint(int, int, int, int) const
# range [0x08a5dc74, 0x08a5dd61]
08a5dc74 +0x00:  push   %ebp
08a5dc75 +0x01:  mov    %esp,%ebp
08a5dc77 +0x03:  sub    $0x38,%esp
08a5dc7a +0x06:  mov    0x8(%ebp),%eax
08a5dc7d +0x09:  mov    0x4c(%eax),%edx
08a5dc80 +0x0c:  mov    0x18(%ebp),%eax
08a5dc83 +0x0f:  cmp    %eax,%edx
08a5dc85 +0x11:  jge    08a5dc90 <+0x1c>
08a5dc87 +0x13:  mov    0x8(%ebp),%eax
08a5dc8a +0x16:  mov    0x4c(%eax),%eax
08a5dc8d +0x19:  mov    %eax,0x18(%ebp)
08a5dc90 +0x1c:  mov    0x8(%ebp),%eax
08a5dc93 +0x1f:  lea    0x18(%eax),%ecx
08a5dc96 +0x22:  lea    -0x14(%ebp),%eax
08a5dc99 +0x25:  lea    0x18(%ebp),%edx
08a5dc9c +0x28:  mov    %edx,0x8(%esp)
08a5dca0 +0x2c:  mov    %ecx,0x4(%esp)
08a5dca4 +0x30:  mov    %eax,(%esp)
08a5dca7 +0x33:  call   08a5ed70 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x6b5>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x6b5
08a5dcac +0x38:  sub    $0x4,%esp
08a5dcaf +0x3b:  mov    0x8(%ebp),%eax
08a5dcb2 +0x3e:  lea    0x18(%eax),%edx
08a5dcb5 +0x41:  lea    -0x10(%ebp),%eax
08a5dcb8 +0x44:  mov    %edx,0x4(%esp)
08a5dcbc +0x48:  mov    %eax,(%esp)
08a5dcbf +0x4b:  call   08a5ed9c <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x6e1>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x6e1
08a5dcc4 +0x50:  sub    $0x4,%esp
08a5dcc7 +0x53:  lea    -0x10(%ebp),%eax
08a5dcca +0x56:  mov    %eax,0x4(%esp)
08a5dcce +0x5a:  lea    -0x14(%ebp),%eax
08a5dcd1 +0x5d:  mov    %eax,(%esp)
08a5dcd4 +0x60:  call   08a5edc2 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x707>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x707
08a5dcd9 +0x65:  test   %al,%al
08a5dcdb +0x67:  je     08a5dd5a <+0xe6>
08a5dcdd +0x69:  mov    0xc(%ebp),%edx
08a5dce0 +0x6c:  mov    %edx,%eax
08a5dce2 +0x6e:  shl    $0x2,%eax
08a5dce5 +0x71:  add    %edx,%eax
08a5dce7 +0x73:  add    0x10(%ebp),%eax
08a5dcea +0x76:  mov    %eax,-0x18(%ebp)
08a5dced +0x79:  lea    -0x14(%ebp),%eax
08a5dcf0 +0x7c:  mov    %eax,(%esp)
08a5dcf3 +0x7f:  call   08a5edd6 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x71b>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x71b
08a5dcf8 +0x84:  lea    0x4(%eax),%ecx
08a5dcfb +0x87:  lea    -0x1c(%ebp),%eax
08a5dcfe +0x8a:  lea    -0x18(%ebp),%edx
08a5dd01 +0x8d:  mov    %edx,0x8(%esp)
08a5dd05 +0x91:  mov    %ecx,0x4(%esp)
08a5dd09 +0x95:  mov    %eax,(%esp)
08a5dd0c +0x98:  call   080c6eaa <_GLOBAL__I_g_ServerString_+0x415>  ; global constructors keyed to g_ServerString_+0x415
08a5dd11 +0x9d:  sub    $0x4,%esp
08a5dd14 +0xa0:  lea    -0x14(%ebp),%eax
08a5dd17 +0xa3:  mov    %eax,(%esp)
08a5dd1a +0xa6:  call   08a5edd6 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x71b>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x71b
08a5dd1f +0xab:  lea    0x4(%eax),%edx
08a5dd22 +0xae:  lea    -0xc(%ebp),%eax
08a5dd25 +0xb1:  mov    %edx,0x4(%esp)
08a5dd29 +0xb5:  mov    %eax,(%esp)
08a5dd2c +0xb8:  call   080c6ed6 <_GLOBAL__I_g_ServerString_+0x441>  ; global constructors keyed to g_ServerString_+0x441
08a5dd31 +0xbd:  sub    $0x4,%esp
08a5dd34 +0xc0:  lea    -0xc(%ebp),%eax
08a5dd37 +0xc3:  mov    %eax,0x4(%esp)
08a5dd3b +0xc7:  lea    -0x1c(%ebp),%eax
08a5dd3e +0xca:  mov    %eax,(%esp)
08a5dd41 +0xcd:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
08a5dd46 +0xd2:  test   %al,%al
08a5dd48 +0xd4:  je     08a5dd5a <+0xe6>
08a5dd4a +0xd6:  lea    -0x1c(%ebp),%eax
08a5dd4d +0xd9:  mov    %eax,(%esp)
08a5dd50 +0xdc:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
08a5dd55 +0xe1:  mov    0x4(%eax),%eax
08a5dd58 +0xe4:  jmp    08a5dd5f <+0xeb>
08a5dd5a +0xe6:  mov    $0x0,%eax
08a5dd5f +0xeb:  leave
08a5dd60 +0xec:  ret
08a5dd61 +0xed:  nop
```

## 反编译 C

```c
// PvPSkillTreeParameterScript::getGivePvPSkillPoint @ 0x8a5dc74

/* PvPSkillTreeParameterScript::getGivePvPSkillPoint(int, int, int, int) const */

undefined4
PvPSkillTreeParameterScript::getGivePvPSkillPoint(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_20 [4];
  int local_1c;
  _Rb_tree_const_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
  local_18 [4];
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  ::find((int *)local_18);
  std::
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  ::end(local_14);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
          ::operator!=(local_18,(_Rb_tree_const_iterator *)local_14);
  if (cVar1 != '\0') {
    local_1c = param_2 * 5 + param_3;
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
    ::operator->(local_18);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_20)
    ;
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
    ::operator->(local_18);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                      (local_20,(_Rb_tree_const_iterator *)local_10);
    if (cVar1 != '\0') {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_20);
      return *(undefined4 *)(iVar2 + 4);
    }
  }
  return 0;
}
```
