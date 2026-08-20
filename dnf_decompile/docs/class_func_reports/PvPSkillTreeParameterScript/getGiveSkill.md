# getGiveSkill

`_ZNK27PvPSkillTreeParameterScript12getGiveSkillEiiiRSt6vectorISt4pairIiiESaIS2_EE`

`PvPSkillTreeParameterScript::getGiveSkill(int, int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) const`

| 类 | 地址 |
|---|---|
| `PvPSkillTreeParameterScript` | `0x08a5e178` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a5e178  _ZNK27PvPSkillTreeParameterScript12getGiveSkillEiiiRSt6vectorISt4pairIiiESaIS2_EE
#           PvPSkillTreeParameterScript::getGiveSkill(int, int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) const
# range [0x08a5e178, 0x08a5e225]
08a5e178 +0x00:  push   %ebp
08a5e179 +0x01:  mov    %esp,%ebp
08a5e17b +0x03:  sub    $0x28,%esp
08a5e17e +0x06:  movl   $0x0,0x14(%ebp)
08a5e185 +0x0d:  mov    0x14(%ebp),%eax
08a5e188 +0x10:  movzbl %al,%ecx
08a5e18b +0x13:  mov    0x10(%ebp),%eax
08a5e18e +0x16:  movzbl %al,%edx
08a5e191 +0x19:  mov    0xc(%ebp),%eax
08a5e194 +0x1c:  movzbl %al,%eax
08a5e197 +0x1f:  mov    %ecx,0xc(%esp)
08a5e19b +0x23:  mov    %edx,0x8(%esp)
08a5e19f +0x27:  mov    %eax,0x4(%esp)
08a5e1a3 +0x2b:  lea    -0xf(%ebp),%eax
08a5e1a6 +0x2e:  mov    %eax,(%esp)
08a5e1a9 +0x31:  call   08a5e768 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0xad>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0xad
08a5e1ae +0x36:  mov    0x8(%ebp),%eax
08a5e1b1 +0x39:  lea    0x30(%eax),%ecx
08a5e1b4 +0x3c:  lea    -0x14(%ebp),%eax
08a5e1b7 +0x3f:  lea    -0xf(%ebp),%edx
08a5e1ba +0x42:  mov    %edx,0x8(%esp)
08a5e1be +0x46:  mov    %ecx,0x4(%esp)
08a5e1c2 +0x4a:  mov    %eax,(%esp)
08a5e1c5 +0x4d:  call   08a5ede4 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x729>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x729
08a5e1ca +0x52:  sub    $0x4,%esp
08a5e1cd +0x55:  mov    0x8(%ebp),%eax
08a5e1d0 +0x58:  lea    0x30(%eax),%edx
08a5e1d3 +0x5b:  lea    -0xc(%ebp),%eax
08a5e1d6 +0x5e:  mov    %edx,0x4(%esp)
08a5e1da +0x62:  mov    %eax,(%esp)
08a5e1dd +0x65:  call   08a5ee10 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x755>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x755
08a5e1e2 +0x6a:  sub    $0x4,%esp
08a5e1e5 +0x6d:  lea    -0xc(%ebp),%eax
08a5e1e8 +0x70:  mov    %eax,0x4(%esp)
08a5e1ec +0x74:  lea    -0x14(%ebp),%eax
08a5e1ef +0x77:  mov    %eax,(%esp)
08a5e1f2 +0x7a:  call   08a5ee36 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x77b>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x77b
08a5e1f7 +0x7f:  test   %al,%al
08a5e1f9 +0x81:  je     08a5e21f <+0xa7>
08a5e1fb +0x83:  lea    -0x14(%ebp),%eax
08a5e1fe +0x86:  mov    %eax,(%esp)
08a5e201 +0x89:  call   08a5ee4a <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x78f>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x78f
08a5e206 +0x8e:  add    $0x34,%eax
08a5e209 +0x91:  mov    %eax,0x4(%esp)
08a5e20d +0x95:  mov    0x18(%ebp),%eax
08a5e210 +0x98:  mov    %eax,(%esp)
08a5e213 +0x9b:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
08a5e218 +0xa0:  mov    $0x1,%eax
08a5e21d +0xa5:  jmp    08a5e224 <+0xac>
08a5e21f +0xa7:  mov    $0x0,%eax
08a5e224 +0xac:  leave
08a5e225 +0xad:  ret
```

## 反编译 C

```c
// PvPSkillTreeParameterScript::getGiveSkill @ 0x8a5e178

/* PvPSkillTreeParameterScript::getGiveSkill(int, int, int, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&) const */

bool __thiscall
PvPSkillTreeParameterScript::getGiveSkill
          (PvPSkillTreeParameterScript *this,int param_1,int param_2,int param_3,vector *param_4)

{
  char cVar1;
  int iVar2;
  PvPSkillTreeKey local_18 [5];
  PvPSkillTreeKey local_13 [3];
  map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
  local_10 [12];
  
  PvPSkillTreeKey::PvPSkillTreeKey(local_13,(uchar)param_1,(uchar)param_2,'\0');
  std::
  map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
  ::find(local_18);
  std::
  map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
          ::operator!=((_Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                        *)local_18,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
            ::operator->((_Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                          *)local_18);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_4,
               (vector *)(iVar2 + 0x34));
  }
  return cVar1 != '\0';
}
```
