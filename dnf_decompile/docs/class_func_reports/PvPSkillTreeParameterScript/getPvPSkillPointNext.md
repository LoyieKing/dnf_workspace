# getPvPSkillPointNext

`_ZNK27PvPSkillTreeParameterScript20getPvPSkillPointNextEiiii`

`PvPSkillTreeParameterScript::getPvPSkillPointNext(int, int, int, int) const`

| 类 | 地址 |
|---|---|
| `PvPSkillTreeParameterScript` | `0x08a5df0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a5df0e  _ZNK27PvPSkillTreeParameterScript20getPvPSkillPointNextEiiii
#           PvPSkillTreeParameterScript::getPvPSkillPointNext(int, int, int, int) const
# range [0x08a5df0e, 0x08a5e177]
08a5df0e +0x000:  push   %ebp
08a5df0f +0x001:  mov    %esp,%ebp
08a5df11 +0x003:  sub    $0x68,%esp
08a5df14 +0x006:  movl   $0x0,-0x14(%ebp)
08a5df1b +0x00d:  mov    0x8(%ebp),%eax
08a5df1e +0x010:  lea    0x18(%eax),%ecx
08a5df21 +0x013:  lea    -0x34(%ebp),%eax
08a5df24 +0x016:  lea    0x18(%ebp),%edx
08a5df27 +0x019:  mov    %edx,0x8(%esp)
08a5df2b +0x01d:  mov    %ecx,0x4(%esp)
08a5df2f +0x021:  mov    %eax,(%esp)
08a5df32 +0x024:  call   08a5ed70 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x6b5>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x6b5
08a5df37 +0x029:  sub    $0x4,%esp
08a5df3a +0x02c:  mov    0x8(%ebp),%eax
08a5df3d +0x02f:  lea    0x18(%eax),%edx
08a5df40 +0x032:  lea    -0x30(%ebp),%eax
08a5df43 +0x035:  mov    %edx,0x4(%esp)
08a5df47 +0x039:  mov    %eax,(%esp)
08a5df4a +0x03c:  call   08a5ed9c <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x6e1>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x6e1
08a5df4f +0x041:  sub    $0x4,%esp
08a5df52 +0x044:  lea    -0x30(%ebp),%eax
08a5df55 +0x047:  mov    %eax,0x4(%esp)
08a5df59 +0x04b:  lea    -0x34(%ebp),%eax
08a5df5c +0x04e:  mov    %eax,(%esp)
08a5df5f +0x051:  call   08a5edc2 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x707>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x707
08a5df64 +0x056:  test   %al,%al
08a5df66 +0x058:  je     08a5dfec <+0xde>
08a5df6c +0x05e:  mov    0xc(%ebp),%edx
08a5df6f +0x061:  mov    %edx,%eax
08a5df71 +0x063:  shl    $0x2,%eax
08a5df74 +0x066:  add    %edx,%eax
08a5df76 +0x068:  add    0x10(%ebp),%eax
08a5df79 +0x06b:  mov    %eax,-0x40(%ebp)
08a5df7c +0x06e:  lea    -0x34(%ebp),%eax
08a5df7f +0x071:  mov    %eax,(%esp)
08a5df82 +0x074:  call   08a5edd6 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x71b>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x71b
08a5df87 +0x079:  lea    0x4(%eax),%ecx
08a5df8a +0x07c:  lea    -0x44(%ebp),%eax
08a5df8d +0x07f:  lea    -0x40(%ebp),%edx
08a5df90 +0x082:  mov    %edx,0x8(%esp)
08a5df94 +0x086:  mov    %ecx,0x4(%esp)
08a5df98 +0x08a:  mov    %eax,(%esp)
08a5df9b +0x08d:  call   080c6eaa <_GLOBAL__I_g_ServerString_+0x415>  ; global constructors keyed to g_ServerString_+0x415
08a5dfa0 +0x092:  sub    $0x4,%esp
08a5dfa3 +0x095:  lea    -0x34(%ebp),%eax
08a5dfa6 +0x098:  mov    %eax,(%esp)
08a5dfa9 +0x09b:  call   08a5edd6 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x71b>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x71b
08a5dfae +0x0a0:  lea    0x4(%eax),%edx
08a5dfb1 +0x0a3:  lea    -0x2c(%ebp),%eax
08a5dfb4 +0x0a6:  mov    %edx,0x4(%esp)
08a5dfb8 +0x0aa:  mov    %eax,(%esp)
08a5dfbb +0x0ad:  call   080c6ed6 <_GLOBAL__I_g_ServerString_+0x441>  ; global constructors keyed to g_ServerString_+0x441
08a5dfc0 +0x0b2:  sub    $0x4,%esp
08a5dfc3 +0x0b5:  lea    -0x2c(%ebp),%eax
08a5dfc6 +0x0b8:  mov    %eax,0x4(%esp)
08a5dfca +0x0bc:  lea    -0x44(%ebp),%eax
08a5dfcd +0x0bf:  mov    %eax,(%esp)
08a5dfd0 +0x0c2:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
08a5dfd5 +0x0c7:  test   %al,%al
08a5dfd7 +0x0c9:  je     08a5dff6 <+0xe8>
08a5dfd9 +0x0cb:  lea    -0x44(%ebp),%eax
08a5dfdc +0x0ce:  mov    %eax,(%esp)
08a5dfdf +0x0d1:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
08a5dfe4 +0x0d6:  mov    0x4(%eax),%eax
08a5dfe7 +0x0d9:  mov    %eax,-0x14(%ebp)
08a5dfea +0x0dc:  jmp    08a5dff6 <+0xe8>
08a5dfec +0x0de:  mov    $0x0,%eax
08a5dff1 +0x0e3:  jmp    08a5e175 <+0x267>
08a5dff6 +0x0e8:  movl   $0x0,-0x10(%ebp)
08a5dffd +0x0ef:  mov    0x18(%ebp),%eax
08a5e000 +0x0f2:  sub    $0x1,%eax
08a5e003 +0x0f5:  mov    %eax,-0x28(%ebp)
08a5e006 +0x0f8:  mov    0x8(%ebp),%eax
08a5e009 +0x0fb:  lea    0x18(%eax),%ecx
08a5e00c +0x0fe:  lea    -0x38(%ebp),%eax
08a5e00f +0x101:  lea    -0x28(%ebp),%edx
08a5e012 +0x104:  mov    %edx,0x8(%esp)
08a5e016 +0x108:  mov    %ecx,0x4(%esp)
08a5e01a +0x10c:  mov    %eax,(%esp)
08a5e01d +0x10f:  call   08a5ed70 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x6b5>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x6b5
08a5e022 +0x114:  sub    $0x4,%esp
08a5e025 +0x117:  mov    0x8(%ebp),%eax
08a5e028 +0x11a:  lea    0x18(%eax),%edx
08a5e02b +0x11d:  lea    -0x24(%ebp),%eax
08a5e02e +0x120:  mov    %edx,0x4(%esp)
08a5e032 +0x124:  mov    %eax,(%esp)
08a5e035 +0x127:  call   08a5ed9c <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x6e1>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x6e1
08a5e03a +0x12c:  sub    $0x4,%esp
08a5e03d +0x12f:  lea    -0x24(%ebp),%eax
08a5e040 +0x132:  mov    %eax,0x4(%esp)
08a5e044 +0x136:  lea    -0x38(%ebp),%eax
08a5e047 +0x139:  mov    %eax,(%esp)
08a5e04a +0x13c:  call   08a5edc2 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x707>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x707
08a5e04f +0x141:  test   %al,%al
08a5e051 +0x143:  je     08a5e0d1 <+0x1c3>
08a5e053 +0x145:  mov    0xc(%ebp),%edx
08a5e056 +0x148:  mov    %edx,%eax
08a5e058 +0x14a:  shl    $0x2,%eax
08a5e05b +0x14d:  add    %edx,%eax
08a5e05d +0x14f:  add    0x10(%ebp),%eax
08a5e060 +0x152:  mov    %eax,-0x48(%ebp)
08a5e063 +0x155:  lea    -0x38(%ebp),%eax
08a5e066 +0x158:  mov    %eax,(%esp)
08a5e069 +0x15b:  call   08a5edd6 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x71b>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x71b
08a5e06e +0x160:  lea    0x4(%eax),%ecx
08a5e071 +0x163:  lea    -0x4c(%ebp),%eax
08a5e074 +0x166:  lea    -0x48(%ebp),%edx
08a5e077 +0x169:  mov    %edx,0x8(%esp)
08a5e07b +0x16d:  mov    %ecx,0x4(%esp)
08a5e07f +0x171:  mov    %eax,(%esp)
08a5e082 +0x174:  call   080c6eaa <_GLOBAL__I_g_ServerString_+0x415>  ; global constructors keyed to g_ServerString_+0x415
08a5e087 +0x179:  sub    $0x4,%esp
08a5e08a +0x17c:  lea    -0x38(%ebp),%eax
08a5e08d +0x17f:  mov    %eax,(%esp)
08a5e090 +0x182:  call   08a5edd6 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x71b>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x71b
08a5e095 +0x187:  lea    0x4(%eax),%edx
08a5e098 +0x18a:  lea    -0x20(%ebp),%eax
08a5e09b +0x18d:  mov    %edx,0x4(%esp)
08a5e09f +0x191:  mov    %eax,(%esp)
08a5e0a2 +0x194:  call   080c6ed6 <_GLOBAL__I_g_ServerString_+0x441>  ; global constructors keyed to g_ServerString_+0x441
08a5e0a7 +0x199:  sub    $0x4,%esp
08a5e0aa +0x19c:  lea    -0x20(%ebp),%eax
08a5e0ad +0x19f:  mov    %eax,0x4(%esp)
08a5e0b1 +0x1a3:  lea    -0x4c(%ebp),%eax
08a5e0b4 +0x1a6:  mov    %eax,(%esp)
08a5e0b7 +0x1a9:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
08a5e0bc +0x1ae:  test   %al,%al
08a5e0be +0x1b0:  je     08a5e0d1 <+0x1c3>
08a5e0c0 +0x1b2:  lea    -0x4c(%ebp),%eax
08a5e0c3 +0x1b5:  mov    %eax,(%esp)
08a5e0c6 +0x1b8:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
08a5e0cb +0x1bd:  mov    0x4(%eax),%eax
08a5e0ce +0x1c0:  mov    %eax,-0x10(%ebp)
08a5e0d1 +0x1c3:  movl   $0x0,0x14(%ebp)
08a5e0d8 +0x1ca:  movl   $0x0,-0xc(%ebp)
08a5e0df +0x1d1:  mov    0x14(%ebp),%eax
08a5e0e2 +0x1d4:  movzbl %al,%ecx
08a5e0e5 +0x1d7:  mov    0x10(%ebp),%eax
08a5e0e8 +0x1da:  movzbl %al,%edx
08a5e0eb +0x1dd:  mov    0xc(%ebp),%eax
08a5e0ee +0x1e0:  movzbl %al,%eax
08a5e0f1 +0x1e3:  mov    %ecx,0xc(%esp)
08a5e0f5 +0x1e7:  mov    %edx,0x8(%esp)
08a5e0f9 +0x1eb:  mov    %eax,0x4(%esp)
08a5e0fd +0x1ef:  lea    -0x1b(%ebp),%eax
08a5e100 +0x1f2:  mov    %eax,(%esp)
08a5e103 +0x1f5:  call   08a5e768 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0xad>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0xad
08a5e108 +0x1fa:  mov    0x8(%ebp),%eax
08a5e10b +0x1fd:  lea    0x30(%eax),%ecx
08a5e10e +0x200:  lea    -0x3c(%ebp),%eax
08a5e111 +0x203:  lea    -0x1b(%ebp),%edx
08a5e114 +0x206:  mov    %edx,0x8(%esp)
08a5e118 +0x20a:  mov    %ecx,0x4(%esp)
08a5e11c +0x20e:  mov    %eax,(%esp)
08a5e11f +0x211:  call   08a5ede4 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x729>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x729
08a5e124 +0x216:  sub    $0x4,%esp
08a5e127 +0x219:  mov    0x8(%ebp),%eax
08a5e12a +0x21c:  lea    0x30(%eax),%edx
08a5e12d +0x21f:  lea    -0x18(%ebp),%eax
08a5e130 +0x222:  mov    %edx,0x4(%esp)
08a5e134 +0x226:  mov    %eax,(%esp)
08a5e137 +0x229:  call   08a5ee10 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x755>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x755
08a5e13c +0x22e:  sub    $0x4,%esp
08a5e13f +0x231:  lea    -0x18(%ebp),%eax
08a5e142 +0x234:  mov    %eax,0x4(%esp)
08a5e146 +0x238:  lea    -0x3c(%ebp),%eax
08a5e149 +0x23b:  mov    %eax,(%esp)
08a5e14c +0x23e:  call   08a5ee36 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x77b>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x77b
08a5e151 +0x243:  test   %al,%al
08a5e153 +0x245:  je     08a5e166 <+0x258>
08a5e155 +0x247:  lea    -0x3c(%ebp),%eax
08a5e158 +0x24a:  mov    %eax,(%esp)
08a5e15b +0x24d:  call   08a5ee4a <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x78f>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x78f
08a5e160 +0x252:  mov    0x40(%eax),%eax
08a5e163 +0x255:  mov    %eax,-0xc(%ebp)
08a5e166 +0x258:  mov    -0x10(%ebp),%eax
08a5e169 +0x25b:  mov    -0x14(%ebp),%edx
08a5e16c +0x25e:  mov    %edx,%ecx
08a5e16e +0x260:  sub    %eax,%ecx
08a5e170 +0x262:  mov    %ecx,%eax
08a5e172 +0x264:  sub    -0xc(%ebp),%eax
08a5e175 +0x267:  leave
08a5e176 +0x268:  ret
08a5e177 +0x269:  nop
```

## 反编译 C

```c
// PvPSkillTreeParameterScript::getPvPSkillPointNext @ 0x8a5df0e

/* PvPSkillTreeParameterScript::getPvPSkillPointNext(int, int, int, int) const */

int __thiscall
PvPSkillTreeParameterScript::getPvPSkillPointNext
          (PvPSkillTreeParameterScript *this,int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_50 [4];
  int local_4c;
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_48 [4];
  int local_44;
  PvPSkillTreeKey local_40 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
  local_3c [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
  local_38 [4];
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  local_34 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_30 [4];
  int local_2c;
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  local_28 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_24 [5];
  PvPSkillTreeKey local_1f [3];
  map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
  local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  std::
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  ::find((int *)local_38);
  std::
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  ::end(local_34);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
          ::operator!=(local_38,(_Rb_tree_const_iterator *)local_34);
  if (cVar1 == '\0') {
    local_10 = 0;
  }
  else {
    local_44 = param_1 * 5 + param_2;
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
    ::operator->(local_38);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_48)
    ;
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
    ::operator->(local_38);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_30);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                      (local_48,(_Rb_tree_const_iterator *)local_30);
    if (cVar1 != '\0') {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_48);
      local_18 = *(int *)(iVar2 + 4);
    }
    local_14 = 0;
    local_2c = param_4 + -1;
    std::
    map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
    ::find((int *)local_3c);
    std::
    map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
    ::end(local_28);
    cVar1 = std::
            _Rb_tree_const_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
            ::operator!=(local_3c,(_Rb_tree_const_iterator *)local_28);
    if (cVar1 != '\0') {
      local_4c = param_1 * 5 + param_2;
      std::
      _Rb_tree_const_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
      ::operator->(local_3c);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_50);
      std::
      _Rb_tree_const_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
      ::operator->(local_3c);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_24);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                        (local_50,(_Rb_tree_const_iterator *)local_24);
      if (cVar1 != '\0') {
        iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_50);
        local_14 = *(int *)(iVar2 + 4);
      }
    }
    local_10 = 0;
    PvPSkillTreeKey::PvPSkillTreeKey(local_1f,(uchar)param_1,(uchar)param_2,'\0');
    std::
    map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
    ::find(local_40);
    std::
    map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
    ::end(local_1c);
    cVar1 = std::
            _Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
            ::operator!=((_Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                          *)local_40,(_Rb_tree_const_iterator *)local_1c);
    if (cVar1 != '\0') {
      iVar2 = std::
              _Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
              ::operator->((_Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                            *)local_40);
      local_10 = *(int *)(iVar2 + 0x40);
    }
    local_10 = (local_18 - local_14) - local_10;
  }
  return local_10;
}
```
