# getPvPSkillPoint

`_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib`

`PvPSkillTreeParameterScript::getPvPSkillPoint(int, int, int, int, bool) const`

| 类 | 地址 |
|---|---|
| `PvPSkillTreeParameterScript` | `0x08a5dd62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a5dd62  _ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib
#           PvPSkillTreeParameterScript::getPvPSkillPoint(int, int, int, int, bool) const
# range [0x08a5dd62, 0x08a5df0d]
08a5dd62 +0x000:  push   %ebp
08a5dd63 +0x001:  mov    %esp,%ebp
08a5dd65 +0x003:  sub    $0x58,%esp
08a5dd68 +0x006:  mov    0x1c(%ebp),%eax
08a5dd6b +0x009:  mov    %al,-0x3c(%ebp)
08a5dd6e +0x00c:  movl   $0x0,-0xc(%ebp)
08a5dd75 +0x013:  mov    0x8(%ebp),%eax
08a5dd78 +0x016:  mov    0x4c(%eax),%edx
08a5dd7b +0x019:  mov    0x18(%ebp),%eax
08a5dd7e +0x01c:  cmp    %eax,%edx
08a5dd80 +0x01e:  jge    08a5dd8b <+0x29>
08a5dd82 +0x020:  mov    0x8(%ebp),%eax
08a5dd85 +0x023:  mov    0x4c(%eax),%eax
08a5dd88 +0x026:  mov    %eax,0x18(%ebp)
08a5dd8b +0x029:  mov    0x8(%ebp),%eax
08a5dd8e +0x02c:  lea    0x18(%eax),%ecx
08a5dd91 +0x02f:  lea    -0x20(%ebp),%eax
08a5dd94 +0x032:  lea    0x18(%ebp),%edx
08a5dd97 +0x035:  mov    %edx,0x8(%esp)
08a5dd9b +0x039:  mov    %ecx,0x4(%esp)
08a5dd9f +0x03d:  mov    %eax,(%esp)
08a5dda2 +0x040:  call   08a5ed70 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x6b5>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x6b5
08a5dda7 +0x045:  sub    $0x4,%esp
08a5ddaa +0x048:  mov    0x8(%ebp),%eax
08a5ddad +0x04b:  lea    0x18(%eax),%edx
08a5ddb0 +0x04e:  lea    -0x1c(%ebp),%eax
08a5ddb3 +0x051:  mov    %edx,0x4(%esp)
08a5ddb7 +0x055:  mov    %eax,(%esp)
08a5ddba +0x058:  call   08a5ed9c <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x6e1>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x6e1
08a5ddbf +0x05d:  sub    $0x4,%esp
08a5ddc2 +0x060:  lea    -0x1c(%ebp),%eax
08a5ddc5 +0x063:  mov    %eax,0x4(%esp)
08a5ddc9 +0x067:  lea    -0x20(%ebp),%eax
08a5ddcc +0x06a:  mov    %eax,(%esp)
08a5ddcf +0x06d:  call   08a5edc2 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x707>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x707
08a5ddd4 +0x072:  test   %al,%al
08a5ddd6 +0x074:  je     08a5de56 <+0xf4>
08a5ddd8 +0x076:  mov    0xc(%ebp),%edx
08a5dddb +0x079:  mov    %edx,%eax
08a5dddd +0x07b:  shl    $0x2,%eax
08a5dde0 +0x07e:  add    %edx,%eax
08a5dde2 +0x080:  add    0x10(%ebp),%eax
08a5dde5 +0x083:  mov    %eax,-0x28(%ebp)
08a5dde8 +0x086:  lea    -0x20(%ebp),%eax
08a5ddeb +0x089:  mov    %eax,(%esp)
08a5ddee +0x08c:  call   08a5edd6 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x71b>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x71b
08a5ddf3 +0x091:  lea    0x4(%eax),%ecx
08a5ddf6 +0x094:  lea    -0x2c(%ebp),%eax
08a5ddf9 +0x097:  lea    -0x28(%ebp),%edx
08a5ddfc +0x09a:  mov    %edx,0x8(%esp)
08a5de00 +0x09e:  mov    %ecx,0x4(%esp)
08a5de04 +0x0a2:  mov    %eax,(%esp)
08a5de07 +0x0a5:  call   080c6eaa <_GLOBAL__I_g_ServerString_+0x415>  ; global constructors keyed to g_ServerString_+0x415
08a5de0c +0x0aa:  sub    $0x4,%esp
08a5de0f +0x0ad:  lea    -0x20(%ebp),%eax
08a5de12 +0x0b0:  mov    %eax,(%esp)
08a5de15 +0x0b3:  call   08a5edd6 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x71b>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x71b
08a5de1a +0x0b8:  lea    0x4(%eax),%edx
08a5de1d +0x0bb:  lea    -0x18(%ebp),%eax
08a5de20 +0x0be:  mov    %edx,0x4(%esp)
08a5de24 +0x0c2:  mov    %eax,(%esp)
08a5de27 +0x0c5:  call   080c6ed6 <_GLOBAL__I_g_ServerString_+0x441>  ; global constructors keyed to g_ServerString_+0x441
08a5de2c +0x0ca:  sub    $0x4,%esp
08a5de2f +0x0cd:  lea    -0x18(%ebp),%eax
08a5de32 +0x0d0:  mov    %eax,0x4(%esp)
08a5de36 +0x0d4:  lea    -0x2c(%ebp),%eax
08a5de39 +0x0d7:  mov    %eax,(%esp)
08a5de3c +0x0da:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
08a5de41 +0x0df:  test   %al,%al
08a5de43 +0x0e1:  je     08a5de56 <+0xf4>
08a5de45 +0x0e3:  lea    -0x2c(%ebp),%eax
08a5de48 +0x0e6:  mov    %eax,(%esp)
08a5de4b +0x0e9:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
08a5de50 +0x0ee:  mov    0x4(%eax),%eax
08a5de53 +0x0f1:  add    %eax,-0xc(%ebp)
08a5de56 +0x0f4:  movl   $0x0,0x14(%ebp)
08a5de5d +0x0fb:  mov    0x14(%ebp),%eax
08a5de60 +0x0fe:  movzbl %al,%ecx
08a5de63 +0x101:  mov    0x10(%ebp),%eax
08a5de66 +0x104:  movzbl %al,%edx
08a5de69 +0x107:  mov    0xc(%ebp),%eax
08a5de6c +0x10a:  movzbl %al,%eax
08a5de6f +0x10d:  mov    %ecx,0xc(%esp)
08a5de73 +0x111:  mov    %edx,0x8(%esp)
08a5de77 +0x115:  mov    %eax,0x4(%esp)
08a5de7b +0x119:  lea    -0x13(%ebp),%eax
08a5de7e +0x11c:  mov    %eax,(%esp)
08a5de81 +0x11f:  call   08a5e768 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0xad>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0xad
08a5de86 +0x124:  mov    0x8(%ebp),%eax
08a5de89 +0x127:  lea    0x30(%eax),%ecx
08a5de8c +0x12a:  lea    -0x24(%ebp),%eax
08a5de8f +0x12d:  lea    -0x13(%ebp),%edx
08a5de92 +0x130:  mov    %edx,0x8(%esp)
08a5de96 +0x134:  mov    %ecx,0x4(%esp)
08a5de9a +0x138:  mov    %eax,(%esp)
08a5de9d +0x13b:  call   08a5ede4 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x729>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x729
08a5dea2 +0x140:  sub    $0x4,%esp
08a5dea5 +0x143:  mov    0x8(%ebp),%eax
08a5dea8 +0x146:  lea    0x30(%eax),%edx
08a5deab +0x149:  lea    -0x10(%ebp),%eax
08a5deae +0x14c:  mov    %edx,0x4(%esp)
08a5deb2 +0x150:  mov    %eax,(%esp)
08a5deb5 +0x153:  call   08a5ee10 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x755>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x755
08a5deba +0x158:  sub    $0x4,%esp
08a5debd +0x15b:  lea    -0x10(%ebp),%eax
08a5dec0 +0x15e:  mov    %eax,0x4(%esp)
08a5dec4 +0x162:  lea    -0x24(%ebp),%eax
08a5dec7 +0x165:  mov    %eax,(%esp)
08a5deca +0x168:  call   08a5ee36 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x77b>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x77b
08a5decf +0x16d:  test   %al,%al
08a5ded1 +0x16f:  je     08a5df09 <+0x1a7>
08a5ded3 +0x171:  cmpb   $0x0,-0x3c(%ebp)
08a5ded7 +0x175:  je     08a5def2 <+0x190>
08a5ded9 +0x177:  cmpl   $0x0,-0xc(%ebp)
08a5dedd +0x17b:  je     08a5df09 <+0x1a7>
08a5dedf +0x17d:  lea    -0x24(%ebp),%eax
08a5dee2 +0x180:  mov    %eax,(%esp)
08a5dee5 +0x183:  call   08a5ee4a <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x78f>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x78f
08a5deea +0x188:  mov    0x40(%eax),%eax
08a5deed +0x18b:  sub    %eax,-0xc(%ebp)
08a5def0 +0x18e:  jmp    08a5df09 <+0x1a7>
08a5def2 +0x190:  cmpl   $0x0,-0xc(%ebp)
08a5def6 +0x194:  jne    08a5df09 <+0x1a7>
08a5def8 +0x196:  lea    -0x24(%ebp),%eax
08a5defb +0x199:  mov    %eax,(%esp)
08a5defe +0x19c:  call   08a5ee4a <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x78f>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x78f
08a5df03 +0x1a1:  mov    0x40(%eax),%eax
08a5df06 +0x1a4:  mov    %eax,-0xc(%ebp)
08a5df09 +0x1a7:  mov    -0xc(%ebp),%eax
08a5df0c +0x1aa:  leave
08a5df0d +0x1ab:  ret
```

## 反编译 C

```c
// PvPSkillTreeParameterScript::getPvPSkillPoint @ 0x8a5dd62

/* PvPSkillTreeParameterScript::getPvPSkillPoint(int, int, int, int, bool) const */

int __thiscall
PvPSkillTreeParameterScript::getPvPSkillPoint
          (PvPSkillTreeParameterScript *this,int param_1,int param_2,int param_3,int param_4,
          bool param_5)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_30 [4];
  int local_2c;
  PvPSkillTreeKey local_28 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
  local_24 [4];
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  local_20 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [5];
  PvPSkillTreeKey local_17 [3];
  map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
  local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  ::find((int *)local_24);
  std::
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  ::end(local_20);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
          ::operator!=(local_24,(_Rb_tree_const_iterator *)local_20);
  if (cVar1 != '\0') {
    local_2c = param_1 * 5 + param_2;
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
    ::operator->(local_24);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_30)
    ;
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
    ::operator->(local_24);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_1c);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                      (local_30,(_Rb_tree_const_iterator *)local_1c);
    if (cVar1 != '\0') {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_30);
      local_10 = local_10 + *(int *)(iVar2 + 4);
    }
  }
  PvPSkillTreeKey::PvPSkillTreeKey(local_17,(uchar)param_1,(uchar)param_2,'\0');
  std::
  map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
  ::find(local_28);
  std::
  map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
  ::end(local_14);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
          ::operator!=((_Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                        *)local_28,(_Rb_tree_const_iterator *)local_14);
  if (cVar1 != '\0') {
    if (param_5) {
      if (local_10 != 0) {
        iVar2 = std::
                _Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                ::operator->((_Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                              *)local_28);
        local_10 = local_10 - *(int *)(iVar2 + 0x40);
      }
    }
    else if (local_10 == 0) {
      iVar2 = std::
              _Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
              ::operator->((_Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                            *)local_28);
      local_10 = *(int *)(iVar2 + 0x40);
    }
  }
  return local_10;
}
```
