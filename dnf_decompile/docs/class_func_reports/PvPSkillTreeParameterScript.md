# PvPSkillTreeParameterScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## getGivePvPSkillPoint

```asm
// === 08a5dc74 PvPSkillTreeParameterScript::getGivePvPSkillPoint  [0x08a5dc74-0x8a5dd61] ===
 8a5dc74:	55                   	push   %ebp
 8a5dc75:	89 e5                	mov    %esp,%ebp
 8a5dc77:	83 ec 38             	sub    $0x38,%esp
 8a5dc7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5dc7d:	8b 50 4c             	mov    0x4c(%eax),%edx
 8a5dc80:	8b 45 18             	mov    0x18(%ebp),%eax
 8a5dc83:	39 c2                	cmp    %eax,%edx
 8a5dc85:	7d 09                	jge    8a5dc90 <_ZNK27PvPSkillTreeParameterScript20getGivePvPSkillPointEiiii+0x1c>
 8a5dc87:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5dc8a:	8b 40 4c             	mov    0x4c(%eax),%eax
 8a5dc8d:	89 45 18             	mov    %eax,0x18(%ebp)
 8a5dc90:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5dc93:	8d 48 18             	lea    0x18(%eax),%ecx
 8a5dc96:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a5dc99:	8d 55 18             	lea    0x18(%ebp),%edx
 8a5dc9c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5dca0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5dca4:	89 04 24             	mov    %eax,(%esp)
 8a5dca7:	e8 c4 10 00 00       	call   8a5ed70 <_ZNKSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEE4findERS3_>
 8a5dcac:	83 ec 04             	sub    $0x4,%esp
 8a5dcaf:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5dcb2:	8d 50 18             	lea    0x18(%eax),%edx
 8a5dcb5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a5dcb8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5dcbc:	89 04 24             	mov    %eax,(%esp)
 8a5dcbf:	e8 d8 10 00 00       	call   8a5ed9c <_ZNKSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEE3endEv>
 8a5dcc4:	83 ec 04             	sub    $0x4,%esp
 8a5dcc7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a5dcca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5dcce:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a5dcd1:	89 04 24             	mov    %eax,(%esp)
 8a5dcd4:	e8 e9 10 00 00       	call   8a5edc2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEneERKS9_>
 8a5dcd9:	84 c0                	test   %al,%al
 8a5dcdb:	74 7d                	je     8a5dd5a <_ZNK27PvPSkillTreeParameterScript20getGivePvPSkillPointEiiii+0xe6>
 8a5dcdd:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a5dce0:	89 d0                	mov    %edx,%eax
 8a5dce2:	c1 e0 02             	shl    $0x2,%eax
 8a5dce5:	01 d0                	add    %edx,%eax
 8a5dce7:	03 45 10             	add    0x10(%ebp),%eax
 8a5dcea:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8a5dced:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a5dcf0:	89 04 24             	mov    %eax,(%esp)
 8a5dcf3:	e8 de 10 00 00       	call   8a5edd6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 8a5dcf8:	8d 48 04             	lea    0x4(%eax),%ecx
 8a5dcfb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a5dcfe:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8a5dd01:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5dd05:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5dd09:	89 04 24             	mov    %eax,(%esp)
 8a5dd0c:	e8 99 91 66 ff       	call   80c6eaa <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8a5dd11:	83 ec 04             	sub    $0x4,%esp
 8a5dd14:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a5dd17:	89 04 24             	mov    %eax,(%esp)
 8a5dd1a:	e8 b7 10 00 00       	call   8a5edd6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 8a5dd1f:	8d 50 04             	lea    0x4(%eax),%edx
 8a5dd22:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a5dd25:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5dd29:	89 04 24             	mov    %eax,(%esp)
 8a5dd2c:	e8 a5 91 66 ff       	call   80c6ed6 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8a5dd31:	83 ec 04             	sub    $0x4,%esp
 8a5dd34:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a5dd37:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5dd3b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a5dd3e:	89 04 24             	mov    %eax,(%esp)
 8a5dd41:	e8 b6 91 66 ff       	call   80c6efc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEneERKS3_>
 8a5dd46:	84 c0                	test   %al,%al
 8a5dd48:	74 10                	je     8a5dd5a <_ZNK27PvPSkillTreeParameterScript20getGivePvPSkillPointEiiii+0xe6>
 8a5dd4a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a5dd4d:	89 04 24             	mov    %eax,(%esp)
 8a5dd50:	e8 bb 91 66 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 8a5dd55:	8b 40 04             	mov    0x4(%eax),%eax
 8a5dd58:	eb 05                	jmp    8a5dd5f <_ZNK27PvPSkillTreeParameterScript20getGivePvPSkillPointEiiii+0xeb>
 8a5dd5a:	b8 00 00 00 00       	mov    $0x0,%eax
 8a5dd5f:	c9                   	leave
 8a5dd60:	c3                   	ret
 8a5dd61:	90                   	nop

```

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

---

## getGiveSkill

```asm
// === 08a5e178 PvPSkillTreeParameterScript::getGiveSkill  [0x08a5e178-0x8a5e225] ===
 8a5e178:	55                   	push   %ebp
 8a5e179:	89 e5                	mov    %esp,%ebp
 8a5e17b:	83 ec 28             	sub    $0x28,%esp
 8a5e17e:	c7 45 14 00 00 00 00 	movl   $0x0,0x14(%ebp)
 8a5e185:	8b 45 14             	mov    0x14(%ebp),%eax
 8a5e188:	0f b6 c8             	movzbl %al,%ecx
 8a5e18b:	8b 45 10             	mov    0x10(%ebp),%eax
 8a5e18e:	0f b6 d0             	movzbl %al,%edx
 8a5e191:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a5e194:	0f b6 c0             	movzbl %al,%eax
 8a5e197:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8a5e19b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5e19f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5e1a3:	8d 45 f1             	lea    -0xf(%ebp),%eax
 8a5e1a6:	89 04 24             	mov    %eax,(%esp)
 8a5e1a9:	e8 ba 05 00 00       	call   8a5e768 <_ZN15PvPSkillTreeKeyC1Ehhh>
 8a5e1ae:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5e1b1:	8d 48 30             	lea    0x30(%eax),%ecx
 8a5e1b4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a5e1b7:	8d 55 f1             	lea    -0xf(%ebp),%edx
 8a5e1ba:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5e1be:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5e1c2:	89 04 24             	mov    %eax,(%esp)
 8a5e1c5:	e8 1a 0c 00 00       	call   8a5ede4 <_ZNKSt3mapI15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 8a5e1ca:	83 ec 04             	sub    $0x4,%esp
 8a5e1cd:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5e1d0:	8d 50 30             	lea    0x30(%eax),%edx
 8a5e1d3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a5e1d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5e1da:	89 04 24             	mov    %eax,(%esp)
 8a5e1dd:	e8 2e 0c 00 00       	call   8a5ee10 <_ZNKSt3mapI15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 8a5e1e2:	83 ec 04             	sub    $0x4,%esp
 8a5e1e5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a5e1e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5e1ec:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a5e1ef:	89 04 24             	mov    %eax,(%esp)
 8a5e1f2:	e8 3f 0c 00 00       	call   8a5ee36 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTEEneERKS5_>
 8a5e1f7:	84 c0                	test   %al,%al
 8a5e1f9:	74 24                	je     8a5e21f <_ZNK27PvPSkillTreeParameterScript12getGiveSkillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0xa7>
 8a5e1fb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a5e1fe:	89 04 24             	mov    %eax,(%esp)
 8a5e201:	e8 44 0c 00 00       	call   8a5ee4a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTEEptEv>
 8a5e206:	83 c0 34             	add    $0x34,%eax
 8a5e209:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5e20d:	8b 45 18             	mov    0x18(%ebp),%eax
 8a5e210:	89 04 24             	mov    %eax,(%esp)
 8a5e213:	e8 74 0e 8b ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 8a5e218:	b8 01 00 00 00       	mov    $0x1,%eax
 8a5e21d:	eb 05                	jmp    8a5e224 <_ZNK27PvPSkillTreeParameterScript12getGiveSkillEiiiRSt6vectorISt4pairIiiESaIS2_EE+0xac>
 8a5e21f:	b8 00 00 00 00       	mov    $0x0,%eax
 8a5e224:	c9                   	leave
 8a5e225:	c3                   	ret

```

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

---

## getPvPSkillPoint

```asm
// === 08a5dd62 PvPSkillTreeParameterScript::getPvPSkillPoint  [0x08a5dd62-0x8a5df0d] ===
 8a5dd62:	55                   	push   %ebp
 8a5dd63:	89 e5                	mov    %esp,%ebp
 8a5dd65:	83 ec 58             	sub    $0x58,%esp
 8a5dd68:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8a5dd6b:	88 45 c4             	mov    %al,-0x3c(%ebp)
 8a5dd6e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a5dd75:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5dd78:	8b 50 4c             	mov    0x4c(%eax),%edx
 8a5dd7b:	8b 45 18             	mov    0x18(%ebp),%eax
 8a5dd7e:	39 c2                	cmp    %eax,%edx
 8a5dd80:	7d 09                	jge    8a5dd8b <_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib+0x29>
 8a5dd82:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5dd85:	8b 40 4c             	mov    0x4c(%eax),%eax
 8a5dd88:	89 45 18             	mov    %eax,0x18(%ebp)
 8a5dd8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5dd8e:	8d 48 18             	lea    0x18(%eax),%ecx
 8a5dd91:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a5dd94:	8d 55 18             	lea    0x18(%ebp),%edx
 8a5dd97:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5dd9b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5dd9f:	89 04 24             	mov    %eax,(%esp)
 8a5dda2:	e8 c9 0f 00 00       	call   8a5ed70 <_ZNKSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEE4findERS3_>
 8a5dda7:	83 ec 04             	sub    $0x4,%esp
 8a5ddaa:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5ddad:	8d 50 18             	lea    0x18(%eax),%edx
 8a5ddb0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a5ddb3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5ddb7:	89 04 24             	mov    %eax,(%esp)
 8a5ddba:	e8 dd 0f 00 00       	call   8a5ed9c <_ZNKSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEE3endEv>
 8a5ddbf:	83 ec 04             	sub    $0x4,%esp
 8a5ddc2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a5ddc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5ddc9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a5ddcc:	89 04 24             	mov    %eax,(%esp)
 8a5ddcf:	e8 ee 0f 00 00       	call   8a5edc2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEneERKS9_>
 8a5ddd4:	84 c0                	test   %al,%al
 8a5ddd6:	74 7e                	je     8a5de56 <_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib+0xf4>
 8a5ddd8:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a5dddb:	89 d0                	mov    %edx,%eax
 8a5dddd:	c1 e0 02             	shl    $0x2,%eax
 8a5dde0:	01 d0                	add    %edx,%eax
 8a5dde2:	03 45 10             	add    0x10(%ebp),%eax
 8a5dde5:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8a5dde8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a5ddeb:	89 04 24             	mov    %eax,(%esp)
 8a5ddee:	e8 e3 0f 00 00       	call   8a5edd6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 8a5ddf3:	8d 48 04             	lea    0x4(%eax),%ecx
 8a5ddf6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8a5ddf9:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8a5ddfc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5de00:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5de04:	89 04 24             	mov    %eax,(%esp)
 8a5de07:	e8 9e 90 66 ff       	call   80c6eaa <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8a5de0c:	83 ec 04             	sub    $0x4,%esp
 8a5de0f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a5de12:	89 04 24             	mov    %eax,(%esp)
 8a5de15:	e8 bc 0f 00 00       	call   8a5edd6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 8a5de1a:	8d 50 04             	lea    0x4(%eax),%edx
 8a5de1d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a5de20:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5de24:	89 04 24             	mov    %eax,(%esp)
 8a5de27:	e8 aa 90 66 ff       	call   80c6ed6 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8a5de2c:	83 ec 04             	sub    $0x4,%esp
 8a5de2f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a5de32:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5de36:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8a5de39:	89 04 24             	mov    %eax,(%esp)
 8a5de3c:	e8 bb 90 66 ff       	call   80c6efc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEneERKS3_>
 8a5de41:	84 c0                	test   %al,%al
 8a5de43:	74 11                	je     8a5de56 <_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib+0xf4>
 8a5de45:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8a5de48:	89 04 24             	mov    %eax,(%esp)
 8a5de4b:	e8 c0 90 66 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 8a5de50:	8b 40 04             	mov    0x4(%eax),%eax
 8a5de53:	01 45 f4             	add    %eax,-0xc(%ebp)
 8a5de56:	c7 45 14 00 00 00 00 	movl   $0x0,0x14(%ebp)
 8a5de5d:	8b 45 14             	mov    0x14(%ebp),%eax
 8a5de60:	0f b6 c8             	movzbl %al,%ecx
 8a5de63:	8b 45 10             	mov    0x10(%ebp),%eax
 8a5de66:	0f b6 d0             	movzbl %al,%edx
 8a5de69:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a5de6c:	0f b6 c0             	movzbl %al,%eax
 8a5de6f:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8a5de73:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5de77:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5de7b:	8d 45 ed             	lea    -0x13(%ebp),%eax
 8a5de7e:	89 04 24             	mov    %eax,(%esp)
 8a5de81:	e8 e2 08 00 00       	call   8a5e768 <_ZN15PvPSkillTreeKeyC1Ehhh>
 8a5de86:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5de89:	8d 48 30             	lea    0x30(%eax),%ecx
 8a5de8c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8a5de8f:	8d 55 ed             	lea    -0x13(%ebp),%edx
 8a5de92:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5de96:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5de9a:	89 04 24             	mov    %eax,(%esp)
 8a5de9d:	e8 42 0f 00 00       	call   8a5ede4 <_ZNKSt3mapI15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 8a5dea2:	83 ec 04             	sub    $0x4,%esp
 8a5dea5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5dea8:	8d 50 30             	lea    0x30(%eax),%edx
 8a5deab:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a5deae:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5deb2:	89 04 24             	mov    %eax,(%esp)
 8a5deb5:	e8 56 0f 00 00       	call   8a5ee10 <_ZNKSt3mapI15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 8a5deba:	83 ec 04             	sub    $0x4,%esp
 8a5debd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a5dec0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5dec4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8a5dec7:	89 04 24             	mov    %eax,(%esp)
 8a5deca:	e8 67 0f 00 00       	call   8a5ee36 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTEEneERKS5_>
 8a5decf:	84 c0                	test   %al,%al
 8a5ded1:	74 36                	je     8a5df09 <_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib+0x1a7>
 8a5ded3:	80 7d c4 00          	cmpb   $0x0,-0x3c(%ebp)
 8a5ded7:	74 19                	je     8a5def2 <_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib+0x190>
 8a5ded9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8a5dedd:	74 2a                	je     8a5df09 <_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib+0x1a7>
 8a5dedf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8a5dee2:	89 04 24             	mov    %eax,(%esp)
 8a5dee5:	e8 60 0f 00 00       	call   8a5ee4a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTEEptEv>
 8a5deea:	8b 40 40             	mov    0x40(%eax),%eax
 8a5deed:	29 45 f4             	sub    %eax,-0xc(%ebp)
 8a5def0:	eb 17                	jmp    8a5df09 <_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib+0x1a7>
 8a5def2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8a5def6:	75 11                	jne    8a5df09 <_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib+0x1a7>
 8a5def8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8a5defb:	89 04 24             	mov    %eax,(%esp)
 8a5defe:	e8 47 0f 00 00       	call   8a5ee4a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTEEptEv>
 8a5df03:	8b 40 40             	mov    0x40(%eax),%eax
 8a5df06:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8a5df09:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a5df0c:	c9                   	leave
 8a5df0d:	c3                   	ret

```

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

---

## getPvPSkillPointNext

```asm
// === 08a5df0e PvPSkillTreeParameterScript::getPvPSkillPointNext  [0x08a5df0e-0x8a5e177] ===
 8a5df0e:	55                   	push   %ebp
 8a5df0f:	89 e5                	mov    %esp,%ebp
 8a5df11:	83 ec 68             	sub    $0x68,%esp
 8a5df14:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8a5df1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5df1e:	8d 48 18             	lea    0x18(%eax),%ecx
 8a5df21:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8a5df24:	8d 55 18             	lea    0x18(%ebp),%edx
 8a5df27:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5df2b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5df2f:	89 04 24             	mov    %eax,(%esp)
 8a5df32:	e8 39 0e 00 00       	call   8a5ed70 <_ZNKSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEE4findERS3_>
 8a5df37:	83 ec 04             	sub    $0x4,%esp
 8a5df3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5df3d:	8d 50 18             	lea    0x18(%eax),%edx
 8a5df40:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8a5df43:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5df47:	89 04 24             	mov    %eax,(%esp)
 8a5df4a:	e8 4d 0e 00 00       	call   8a5ed9c <_ZNKSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEE3endEv>
 8a5df4f:	83 ec 04             	sub    $0x4,%esp
 8a5df52:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8a5df55:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5df59:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8a5df5c:	89 04 24             	mov    %eax,(%esp)
 8a5df5f:	e8 5e 0e 00 00       	call   8a5edc2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEneERKS9_>
 8a5df64:	84 c0                	test   %al,%al
 8a5df66:	0f 84 80 00 00 00    	je     8a5dfec <_ZNK27PvPSkillTreeParameterScript20getPvPSkillPointNextEiiii+0xde>
 8a5df6c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a5df6f:	89 d0                	mov    %edx,%eax
 8a5df71:	c1 e0 02             	shl    $0x2,%eax
 8a5df74:	01 d0                	add    %edx,%eax
 8a5df76:	03 45 10             	add    0x10(%ebp),%eax
 8a5df79:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8a5df7c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8a5df7f:	89 04 24             	mov    %eax,(%esp)
 8a5df82:	e8 4f 0e 00 00       	call   8a5edd6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 8a5df87:	8d 48 04             	lea    0x4(%eax),%ecx
 8a5df8a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8a5df8d:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8a5df90:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5df94:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5df98:	89 04 24             	mov    %eax,(%esp)
 8a5df9b:	e8 0a 8f 66 ff       	call   80c6eaa <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8a5dfa0:	83 ec 04             	sub    $0x4,%esp
 8a5dfa3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8a5dfa6:	89 04 24             	mov    %eax,(%esp)
 8a5dfa9:	e8 28 0e 00 00       	call   8a5edd6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 8a5dfae:	8d 50 04             	lea    0x4(%eax),%edx
 8a5dfb1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8a5dfb4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5dfb8:	89 04 24             	mov    %eax,(%esp)
 8a5dfbb:	e8 16 8f 66 ff       	call   80c6ed6 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8a5dfc0:	83 ec 04             	sub    $0x4,%esp
 8a5dfc3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8a5dfc6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5dfca:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8a5dfcd:	89 04 24             	mov    %eax,(%esp)
 8a5dfd0:	e8 27 8f 66 ff       	call   80c6efc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEneERKS3_>
 8a5dfd5:	84 c0                	test   %al,%al
 8a5dfd7:	74 1d                	je     8a5dff6 <_ZNK27PvPSkillTreeParameterScript20getPvPSkillPointNextEiiii+0xe8>
 8a5dfd9:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8a5dfdc:	89 04 24             	mov    %eax,(%esp)
 8a5dfdf:	e8 2c 8f 66 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 8a5dfe4:	8b 40 04             	mov    0x4(%eax),%eax
 8a5dfe7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8a5dfea:	eb 0a                	jmp    8a5dff6 <_ZNK27PvPSkillTreeParameterScript20getPvPSkillPointNextEiiii+0xe8>
 8a5dfec:	b8 00 00 00 00       	mov    $0x0,%eax
 8a5dff1:	e9 7f 01 00 00       	jmp    8a5e175 <_ZNK27PvPSkillTreeParameterScript20getPvPSkillPointNextEiiii+0x267>
 8a5dff6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8a5dffd:	8b 45 18             	mov    0x18(%ebp),%eax
 8a5e000:	83 e8 01             	sub    $0x1,%eax
 8a5e003:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8a5e006:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5e009:	8d 48 18             	lea    0x18(%eax),%ecx
 8a5e00c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8a5e00f:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8a5e012:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5e016:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5e01a:	89 04 24             	mov    %eax,(%esp)
 8a5e01d:	e8 4e 0d 00 00       	call   8a5ed70 <_ZNKSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEE4findERS3_>
 8a5e022:	83 ec 04             	sub    $0x4,%esp
 8a5e025:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5e028:	8d 50 18             	lea    0x18(%eax),%edx
 8a5e02b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8a5e02e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5e032:	89 04 24             	mov    %eax,(%esp)
 8a5e035:	e8 62 0d 00 00       	call   8a5ed9c <_ZNKSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEE3endEv>
 8a5e03a:	83 ec 04             	sub    $0x4,%esp
 8a5e03d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8a5e040:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5e044:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8a5e047:	89 04 24             	mov    %eax,(%esp)
 8a5e04a:	e8 73 0d 00 00       	call   8a5edc2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEneERKS9_>
 8a5e04f:	84 c0                	test   %al,%al
 8a5e051:	74 7e                	je     8a5e0d1 <_ZNK27PvPSkillTreeParameterScript20getPvPSkillPointNextEiiii+0x1c3>
 8a5e053:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a5e056:	89 d0                	mov    %edx,%eax
 8a5e058:	c1 e0 02             	shl    $0x2,%eax
 8a5e05b:	01 d0                	add    %edx,%eax
 8a5e05d:	03 45 10             	add    0x10(%ebp),%eax
 8a5e060:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8a5e063:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8a5e066:	89 04 24             	mov    %eax,(%esp)
 8a5e069:	e8 68 0d 00 00       	call   8a5edd6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 8a5e06e:	8d 48 04             	lea    0x4(%eax),%ecx
 8a5e071:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8a5e074:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8a5e077:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5e07b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5e07f:	89 04 24             	mov    %eax,(%esp)
 8a5e082:	e8 23 8e 66 ff       	call   80c6eaa <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8a5e087:	83 ec 04             	sub    $0x4,%esp
 8a5e08a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8a5e08d:	89 04 24             	mov    %eax,(%esp)
 8a5e090:	e8 41 0d 00 00       	call   8a5edd6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 8a5e095:	8d 50 04             	lea    0x4(%eax),%edx
 8a5e098:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a5e09b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5e09f:	89 04 24             	mov    %eax,(%esp)
 8a5e0a2:	e8 2f 8e 66 ff       	call   80c6ed6 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8a5e0a7:	83 ec 04             	sub    $0x4,%esp
 8a5e0aa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a5e0ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5e0b1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8a5e0b4:	89 04 24             	mov    %eax,(%esp)
 8a5e0b7:	e8 40 8e 66 ff       	call   80c6efc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEneERKS3_>
 8a5e0bc:	84 c0                	test   %al,%al
 8a5e0be:	74 11                	je     8a5e0d1 <_ZNK27PvPSkillTreeParameterScript20getPvPSkillPointNextEiiii+0x1c3>
 8a5e0c0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8a5e0c3:	89 04 24             	mov    %eax,(%esp)
 8a5e0c6:	e8 45 8e 66 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 8a5e0cb:	8b 40 04             	mov    0x4(%eax),%eax
 8a5e0ce:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8a5e0d1:	c7 45 14 00 00 00 00 	movl   $0x0,0x14(%ebp)
 8a5e0d8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a5e0df:	8b 45 14             	mov    0x14(%ebp),%eax
 8a5e0e2:	0f b6 c8             	movzbl %al,%ecx
 8a5e0e5:	8b 45 10             	mov    0x10(%ebp),%eax
 8a5e0e8:	0f b6 d0             	movzbl %al,%edx
 8a5e0eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a5e0ee:	0f b6 c0             	movzbl %al,%eax
 8a5e0f1:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8a5e0f5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5e0f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5e0fd:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 8a5e100:	89 04 24             	mov    %eax,(%esp)
 8a5e103:	e8 60 06 00 00       	call   8a5e768 <_ZN15PvPSkillTreeKeyC1Ehhh>
 8a5e108:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5e10b:	8d 48 30             	lea    0x30(%eax),%ecx
 8a5e10e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a5e111:	8d 55 e5             	lea    -0x1b(%ebp),%edx
 8a5e114:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5e118:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5e11c:	89 04 24             	mov    %eax,(%esp)
 8a5e11f:	e8 c0 0c 00 00       	call   8a5ede4 <_ZNKSt3mapI15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 8a5e124:	83 ec 04             	sub    $0x4,%esp
 8a5e127:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5e12a:	8d 50 30             	lea    0x30(%eax),%edx
 8a5e12d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a5e130:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5e134:	89 04 24             	mov    %eax,(%esp)
 8a5e137:	e8 d4 0c 00 00       	call   8a5ee10 <_ZNKSt3mapI15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 8a5e13c:	83 ec 04             	sub    $0x4,%esp
 8a5e13f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a5e142:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5e146:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a5e149:	89 04 24             	mov    %eax,(%esp)
 8a5e14c:	e8 e5 0c 00 00       	call   8a5ee36 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTEEneERKS5_>
 8a5e151:	84 c0                	test   %al,%al
 8a5e153:	74 11                	je     8a5e166 <_ZNK27PvPSkillTreeParameterScript20getPvPSkillPointNextEiiii+0x258>
 8a5e155:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a5e158:	89 04 24             	mov    %eax,(%esp)
 8a5e15b:	e8 ea 0c 00 00       	call   8a5ee4a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTEEptEv>
 8a5e160:	8b 40 40             	mov    0x40(%eax),%eax
 8a5e163:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8a5e166:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a5e169:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8a5e16c:	89 d1                	mov    %edx,%ecx
 8a5e16e:	29 c1                	sub    %eax,%ecx
 8a5e170:	89 c8                	mov    %ecx,%eax
 8a5e172:	2b 45 f4             	sub    -0xc(%ebp),%eax
 8a5e175:	c9                   	leave
 8a5e176:	c3                   	ret
 8a5e177:	90                   	nop

```

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

---

## getPvPSkillTree

```asm
// === 08a5db5a PvPSkillTreeParameterScript::getPvPSkillTree  [0x08a5db5a-0x8a5dc73] ===
 8a5db5a:	55                   	push   %ebp
 8a5db5b:	89 e5                	mov    %esp,%ebp
 8a5db5d:	83 ec 48             	sub    $0x48,%esp
 8a5db60:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8a5db63:	88 45 d4             	mov    %al,-0x2c(%ebp)
 8a5db66:	8b 45 14             	mov    0x14(%ebp),%eax
 8a5db69:	0f b6 c8             	movzbl %al,%ecx
 8a5db6c:	8b 45 10             	mov    0x10(%ebp),%eax
 8a5db6f:	0f b6 d0             	movzbl %al,%edx
 8a5db72:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a5db75:	0f b6 c0             	movzbl %al,%eax
 8a5db78:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8a5db7c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5db80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5db84:	8d 45 ed             	lea    -0x13(%ebp),%eax
 8a5db87:	89 04 24             	mov    %eax,(%esp)
 8a5db8a:	e8 d9 0b 00 00       	call   8a5e768 <_ZN15PvPSkillTreeKeyC1Ehhh>
 8a5db8f:	8b 55 08             	mov    0x8(%ebp),%edx
 8a5db92:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a5db95:	8d 4d ed             	lea    -0x13(%ebp),%ecx
 8a5db98:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8a5db9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5dba0:	89 04 24             	mov    %eax,(%esp)
 8a5dba3:	e8 e0 10 00 00       	call   8a5ec88 <_ZNKSt3mapI15PvPSkillTreeKeyS_Ii17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS1_EEES2_IS0_ESaIS4_IKS0_S8_EEE4findERSA_>
 8a5dba8:	83 ec 04             	sub    $0x4,%esp
 8a5dbab:	8b 55 08             	mov    0x8(%ebp),%edx
 8a5dbae:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a5dbb1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5dbb5:	89 04 24             	mov    %eax,(%esp)
 8a5dbb8:	e8 f7 10 00 00       	call   8a5ecb4 <_ZNKSt3mapI15PvPSkillTreeKeyS_Ii17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS1_EEES2_IS0_ESaIS4_IKS0_S8_EEE3endEv>
 8a5dbbd:	83 ec 04             	sub    $0x4,%esp
 8a5dbc0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a5dbc3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5dbc7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a5dbca:	89 04 24             	mov    %eax,(%esp)
 8a5dbcd:	e8 08 11 00 00       	call   8a5ecda <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK15PvPSkillTreeKeySt3mapIi17PvPSkillTreeValueSt4lessIiESaIS0_IKiS4_EEEEEneERKSC_>
 8a5dbd2:	84 c0                	test   %al,%al
 8a5dbd4:	0f 84 92 00 00 00    	je     8a5dc6c <_ZNK27PvPSkillTreeParameterScript15getPvPSkillTreeEiiiibPPSt6vectorISt4pairIiiESaIS2_EE+0x112>
 8a5dbda:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a5dbdd:	89 04 24             	mov    %eax,(%esp)
 8a5dbe0:	e8 09 11 00 00       	call   8a5ecee <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK15PvPSkillTreeKeySt3mapIi17PvPSkillTreeValueSt4lessIiESaIS0_IKiS4_EEEEEptEv>
 8a5dbe5:	8d 48 04             	lea    0x4(%eax),%ecx
 8a5dbe8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a5dbeb:	8d 55 18             	lea    0x18(%ebp),%edx
 8a5dbee:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5dbf2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5dbf6:	89 04 24             	mov    %eax,(%esp)
 8a5dbf9:	e8 fe 10 00 00       	call   8a5ecfc <_ZNKSt3mapIi17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8a5dbfe:	83 ec 04             	sub    $0x4,%esp
 8a5dc01:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a5dc04:	89 04 24             	mov    %eax,(%esp)
 8a5dc07:	e8 e2 10 00 00       	call   8a5ecee <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK15PvPSkillTreeKeySt3mapIi17PvPSkillTreeValueSt4lessIiESaIS0_IKiS4_EEEEEptEv>
 8a5dc0c:	8d 50 04             	lea    0x4(%eax),%edx
 8a5dc0f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a5dc12:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5dc16:	89 04 24             	mov    %eax,(%esp)
 8a5dc19:	e8 0a 11 00 00       	call   8a5ed28 <_ZNKSt3mapIi17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8a5dc1e:	83 ec 04             	sub    $0x4,%esp
 8a5dc21:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a5dc24:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5dc28:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a5dc2b:	89 04 24             	mov    %eax,(%esp)
 8a5dc2e:	e8 1b 11 00 00       	call   8a5ed4e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi17PvPSkillTreeValueEEneERKS4_>
 8a5dc33:	84 c0                	test   %al,%al
 8a5dc35:	74 35                	je     8a5dc6c <_ZNK27PvPSkillTreeParameterScript15getPvPSkillTreeEiiiibPPSt6vectorISt4pairIiiESaIS2_EE+0x112>
 8a5dc37:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 8a5dc3b:	74 15                	je     8a5dc52 <_ZNK27PvPSkillTreeParameterScript15getPvPSkillTreeEiiiibPPSt6vectorISt4pairIiiESaIS2_EE+0xf8>
 8a5dc3d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a5dc40:	89 04 24             	mov    %eax,(%esp)
 8a5dc43:	e8 1a 11 00 00       	call   8a5ed62 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi17PvPSkillTreeValueEEptEv>
 8a5dc48:	8d 50 10             	lea    0x10(%eax),%edx
 8a5dc4b:	8b 45 20             	mov    0x20(%ebp),%eax
 8a5dc4e:	89 10                	mov    %edx,(%eax)
 8a5dc50:	eb 13                	jmp    8a5dc65 <_ZNK27PvPSkillTreeParameterScript15getPvPSkillTreeEiiiibPPSt6vectorISt4pairIiiESaIS2_EE+0x10b>
 8a5dc52:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a5dc55:	89 04 24             	mov    %eax,(%esp)
 8a5dc58:	e8 05 11 00 00       	call   8a5ed62 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi17PvPSkillTreeValueEEptEv>
 8a5dc5d:	8d 50 04             	lea    0x4(%eax),%edx
 8a5dc60:	8b 45 20             	mov    0x20(%ebp),%eax
 8a5dc63:	89 10                	mov    %edx,(%eax)
 8a5dc65:	b8 01 00 00 00       	mov    $0x1,%eax
 8a5dc6a:	eb 05                	jmp    8a5dc71 <_ZNK27PvPSkillTreeParameterScript15getPvPSkillTreeEiiiibPPSt6vectorISt4pairIiiESaIS2_EE+0x117>
 8a5dc6c:	b8 00 00 00 00       	mov    $0x0,%eax
 8a5dc71:	c9                   	leave
 8a5dc72:	c3                   	ret
 8a5dc73:	90                   	nop

```

```c
// PvPSkillTreeParameterScript::getPvPSkillTree @ 0x8a5db5a

/* PvPSkillTreeParameterScript::getPvPSkillTree(int, int, int, int, bool, std::vector<std::pair<int,
   int>, std::allocator<std::pair<int, int> > >**) const */

undefined4 __thiscall
PvPSkillTreeParameterScript::getPvPSkillTree
          (PvPSkillTreeParameterScript *this,int param_1,int param_2,int param_3,int param_4,
          bool param_5,vector **param_6)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,PvPSkillTreeValue>> local_20 [4];
  PvPSkillTreeKey local_1c [5];
  PvPSkillTreeKey local_17 [3];
  map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
  local_14 [4];
  map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
  local_10 [12];
  
  PvPSkillTreeKey::PvPSkillTreeKey(local_17,(uchar)param_1,(uchar)param_2,(uchar)param_3);
  std::
  map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
  ::find(local_1c);
  std::
  map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
  ::end(local_14);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
          ::operator!=((_Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                        *)local_1c,(_Rb_tree_const_iterator *)local_14);
  if (cVar1 != '\0') {
    std::
    _Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
    ::operator->((_Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                  *)local_1c);
    std::
    map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
    ::find((int *)local_20);
    std::
    _Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
    ::operator->((_Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                  *)local_1c);
    std::
    map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,PvPSkillTreeValue>>::operator!=
                      (local_20,(_Rb_tree_const_iterator *)local_10);
    if (cVar1 != '\0') {
      if (param_5) {
        iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,PvPSkillTreeValue>>::operator->
                          (local_20);
        *param_6 = (vector *)(iVar2 + 0x10);
      }
      else {
        iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,PvPSkillTreeValue>>::operator->
                          (local_20);
        *param_6 = (vector *)(iVar2 + 4);
      }
      return 1;
    }
  }
  return 0;
}

```

---

## importPairPvPSkillPointScript

```asm
// === 08a5e226 PvPSkillTreeParameterScript::importPairPvPSkillPointScript  [0x08a5e226-0x8a5e651] ===
 8a5e226:	55                   	push   %ebp
 8a5e227:	89 e5                	mov    %esp,%ebp
 8a5e229:	56                   	push   %esi
 8a5e22a:	53                   	push   %ebx
 8a5e22b:	81 ec d0 00 00 00    	sub    $0xd0,%esp
 8a5e231:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a5e234:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5e238:	c7 04 24 69 51 e2 08 	movl   $0x8e25169,(%esp)
 8a5e23f:	e8 e5 da e5 ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 8a5e244:	83 f0 01             	xor    $0x1,%eax
 8a5e247:	84 c0                	test   %al,%al
 8a5e249:	74 0a                	je     8a5e255 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x2f>
 8a5e24b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a5e250:	e9 f1 03 00 00       	jmp    8a5e646 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x420>
 8a5e255:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8a5e25b:	89 04 24             	mov    %eax,(%esp)
 8a5e25e:	e8 6d 83 ca ff       	call   87065d0 <_ZNSsC1Ev>
 8a5e263:	c6 85 6f ff ff ff 00 	movb   $0x0,-0x91(%ebp)
 8a5e26a:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8a5e270:	89 04 24             	mov    %eax,(%esp)
 8a5e273:	e8 ec 89 66 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 8a5e278:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8a5e27f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8a5e286:	c7 45 f4 37 00 00 00 	movl   $0x37,-0xc(%ebp)
 8a5e28d:	eb 07                	jmp    8a5e296 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x70>
 8a5e28f:	90                   	nop
 8a5e290:	eb 04                	jmp    8a5e296 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x70>
 8a5e292:	90                   	nop
 8a5e293:	eb 01                	jmp    8a5e296 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x70>
 8a5e295:	90                   	nop
 8a5e296:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8a5e29d:	00 
 8a5e29e:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8a5e2a4:	89 04 24             	mov    %eax,(%esp)
 8a5e2a7:	e8 b3 e5 e5 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8a5e2ac:	83 f0 01             	xor    $0x1,%eax
 8a5e2af:	84 c0                	test   %al,%al
 8a5e2b1:	0f 85 33 03 00 00    	jne    8a5e5ea <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x3c4>
 8a5e2b7:	c7 44 24 04 6a 51 e2 	movl   $0x8e2516a,0x4(%esp)
 8a5e2be:	08 
 8a5e2bf:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8a5e2c5:	89 04 24             	mov    %eax,(%esp)
 8a5e2c8:	e8 d4 26 62 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a5e2cd:	84 c0                	test   %al,%al
 8a5e2cf:	0f 84 d7 01 00 00    	je     8a5e4ac <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x286>
 8a5e2d5:	eb 01                	jmp    8a5e2d8 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0xb2>
 8a5e2d7:	90                   	nop
 8a5e2d8:	8d 85 6f ff ff ff    	lea    -0x91(%ebp),%eax
 8a5e2de:	89 04 24             	mov    %eax,(%esp)
 8a5e2e1:	e8 ff e1 e5 ff       	call   88bc4e5 <_Z9ScanFloatPb>
 8a5e2e6:	d9 bd 46 ff ff ff    	fnstcw -0xba(%ebp)
 8a5e2ec:	0f b7 85 46 ff ff ff 	movzwl -0xba(%ebp),%eax
 8a5e2f3:	b4 0c                	mov    $0xc,%ah
 8a5e2f5:	66 89 85 44 ff ff ff 	mov    %ax,-0xbc(%ebp)
 8a5e2fc:	d9 ad 44 ff ff ff    	fldcw  -0xbc(%ebp)
 8a5e302:	db 9d 40 ff ff ff    	fistpl -0xc0(%ebp)
 8a5e308:	d9 ad 46 ff ff ff    	fldcw  -0xba(%ebp)
 8a5e30e:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 8a5e314:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 8a5e31a:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 8a5e321:	83 f0 01             	xor    $0x1,%eax
 8a5e324:	84 c0                	test   %al,%al
 8a5e326:	0f 85 3a 01 00 00    	jne    8a5e466 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x240>
 8a5e32c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8a5e32f:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8a5e332:	8d 55 8c             	lea    -0x74(%ebp),%edx
 8a5e335:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8a5e339:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8a5e33c:	8d 8d 50 ff ff ff    	lea    -0xb0(%ebp),%ecx
 8a5e342:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8a5e346:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5e34a:	89 04 24             	mov    %eax,(%esp)
 8a5e34d:	e8 35 c3 67 ff       	call   80da687 <_ZSt9make_pairIiRiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 8a5e352:	83 ec 04             	sub    $0x4,%esp
 8a5e355:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8a5e358:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5e35c:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8a5e362:	89 04 24             	mov    %eax,(%esp)
 8a5e365:	e8 b6 89 66 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 8a5e36a:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8a5e370:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 8a5e376:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5e37a:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 8a5e380:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5e384:	89 04 24             	mov    %eax,(%esp)
 8a5e387:	e8 c4 89 66 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 8a5e38c:	83 ec 04             	sub    $0x4,%esp
 8a5e38f:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8a5e395:	89 04 24             	mov    %eax,(%esp)
 8a5e398:	e8 a3 74 7d ff       	call   8235840 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4sizeEv>
 8a5e39d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a5e3a0:	39 d0                	cmp    %edx,%eax
 8a5e3a2:	0f 94 c0             	sete   %al
 8a5e3a5:	84 c0                	test   %al,%al
 8a5e3a7:	0f 84 2a ff ff ff    	je     8a5e2d7 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0xb1>
 8a5e3ad:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a5e3b0:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8a5e3b3:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8a5e3b6:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8a5e3ba:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8a5e3bd:	8d 8d 54 ff ff ff    	lea    -0xac(%ebp),%ecx
 8a5e3c3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8a5e3c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5e3cb:	89 04 24             	mov    %eax,(%esp)
 8a5e3ce:	e8 91 65 a5 ff       	call   84b4964 <_ZSt9make_pairIiRSt3mapIiiSt4lessIiESaISt4pairIKiiEEEES3_INSt17__decay_and_stripIT_E6__typeENS9_IT0_E6__typeEEOSA_OSD_>
 8a5e3d3:	83 ec 04             	sub    $0x4,%esp
 8a5e3d6:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8a5e3d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5e3dd:	8d 45 98             	lea    -0x68(%ebp),%eax
 8a5e3e0:	89 04 24             	mov    %eax,(%esp)
 8a5e3e3:	e8 c8 65 a5 ff       	call   84b49b0 <_ZNSt4pairIKiSt3mapIiiSt4lessIiESaIS_IS0_iEEEEC1IiS6_EEOS_IT_T0_E>
 8a5e3e8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5e3eb:	8d 48 18             	lea    0x18(%eax),%ecx
 8a5e3ee:	8d 45 90             	lea    -0x70(%ebp),%eax
 8a5e3f1:	8d 55 98             	lea    -0x68(%ebp),%edx
 8a5e3f4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5e3f8:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5e3fc:	89 04 24             	mov    %eax,(%esp)
 8a5e3ff:	e8 e6 65 a5 ff       	call   84b49ea <_ZNSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEE6insertERKS7_>
 8a5e404:	83 ec 04             	sub    $0x4,%esp
 8a5e407:	8d 45 98             	lea    -0x68(%ebp),%eax
 8a5e40a:	89 04 24             	mov    %eax,(%esp)
 8a5e40d:	e8 36 fe 96 ff       	call   83ce248 <_ZNSt4pairIKiSt3mapIiiSt4lessIiESaIS_IS0_iEEEED1Ev>
 8a5e412:	eb 2d                	jmp    8a5e441 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x21b>
 8a5e414:	89 d3                	mov    %edx,%ebx
 8a5e416:	89 c6                	mov    %eax,%esi
 8a5e418:	8d 45 98             	lea    -0x68(%ebp),%eax
 8a5e41b:	89 04 24             	mov    %eax,(%esp)
 8a5e41e:	e8 25 fe 96 ff       	call   83ce248 <_ZNSt4pairIKiSt3mapIiiSt4lessIiESaIS_IS0_iEEEED1Ev>
 8a5e423:	89 f0                	mov    %esi,%eax
 8a5e425:	89 da                	mov    %ebx,%edx
 8a5e427:	eb 00                	jmp    8a5e429 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x203>
 8a5e429:	89 d3                	mov    %edx,%ebx
 8a5e42b:	89 c6                	mov    %eax,%esi
 8a5e42d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8a5e430:	89 04 24             	mov    %eax,(%esp)
 8a5e433:	e8 18 60 a5 ff       	call   84b4450 <_ZNSt4pairIiSt3mapIiiSt4lessIiESaIS_IKiiEEEED1Ev>
 8a5e438:	89 f0                	mov    %esi,%eax
 8a5e43a:	89 da                	mov    %ebx,%edx
 8a5e43c:	e9 b1 01 00 00       	jmp    8a5e5f2 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x3cc>
 8a5e441:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8a5e444:	89 04 24             	mov    %eax,(%esp)
 8a5e447:	e8 04 60 a5 ff       	call   84b4450 <_ZNSt4pairIiSt3mapIiiSt4lessIiESaIS_IKiiEEEED1Ev>
 8a5e44c:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8a5e452:	89 04 24             	mov    %eax,(%esp)
 8a5e455:	e8 84 88 66 ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 8a5e45a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8a5e461:	e9 72 fe ff ff       	jmp    8a5e2d8 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0xb2>
 8a5e466:	90                   	nop
 8a5e467:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8a5e46d:	89 04 24             	mov    %eax,(%esp)
 8a5e470:	e8 cb 73 7d ff       	call   8235840 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4sizeEv>
 8a5e475:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8a5e478:	39 d0                	cmp    %edx,%eax
 8a5e47a:	74 19                	je     8a5e495 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x26f>
 8a5e47c:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8a5e482:	89 04 24             	mov    %eax,(%esp)
 8a5e485:	e8 b6 73 7d ff       	call   8235840 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4sizeEv>
 8a5e48a:	85 c0                	test   %eax,%eax
 8a5e48c:	74 07                	je     8a5e495 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x26f>
 8a5e48e:	b8 01 00 00 00       	mov    $0x1,%eax
 8a5e493:	eb 05                	jmp    8a5e49a <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x274>
 8a5e495:	b8 00 00 00 00       	mov    $0x0,%eax
 8a5e49a:	84 c0                	test   %al,%al
 8a5e49c:	0f 84 ed fd ff ff    	je     8a5e28f <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x69>
 8a5e4a2:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a5e4a7:	e9 5e 01 00 00       	jmp    8a5e60a <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x3e4>
 8a5e4ac:	c7 44 24 04 78 51 e2 	movl   $0x8e25178,0x4(%esp)
 8a5e4b3:	08 
 8a5e4b4:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8a5e4ba:	89 04 24             	mov    %eax,(%esp)
 8a5e4bd:	e8 df 24 62 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a5e4c2:	84 c0                	test   %al,%al
 8a5e4c4:	74 32                	je     8a5e4f8 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x2d2>
 8a5e4c6:	8d 85 6f ff ff ff    	lea    -0x91(%ebp),%eax
 8a5e4cc:	89 04 24             	mov    %eax,(%esp)
 8a5e4cf:	e8 a7 de e5 ff       	call   88bc37b <_Z7ScanIntPb>
 8a5e4d4:	89 c2                	mov    %eax,%edx
 8a5e4d6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5e4d9:	88 50 50             	mov    %dl,0x50(%eax)
 8a5e4dc:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 8a5e4e3:	83 f0 01             	xor    $0x1,%eax
 8a5e4e6:	84 c0                	test   %al,%al
 8a5e4e8:	0f 84 a4 fd ff ff    	je     8a5e292 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x6c>
 8a5e4ee:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a5e4f3:	e9 12 01 00 00       	jmp    8a5e60a <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x3e4>
 8a5e4f8:	c7 44 24 04 82 51 e2 	movl   $0x8e25182,0x4(%esp)
 8a5e4ff:	08 
 8a5e500:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8a5e506:	89 04 24             	mov    %eax,(%esp)
 8a5e509:	e8 93 24 62 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a5e50e:	84 c0                	test   %al,%al
 8a5e510:	0f 84 7f fd ff ff    	je     8a5e295 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x6f>
 8a5e516:	c7 85 4c ff ff ff 00 	movl   $0x0,-0xb4(%ebp)
 8a5e51d:	00 00 00 
 8a5e520:	c7 85 48 ff ff ff 00 	movl   $0x0,-0xb8(%ebp)
 8a5e527:	00 00 00 
 8a5e52a:	eb 01                	jmp    8a5e52d <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x307>
 8a5e52c:	90                   	nop
 8a5e52d:	8d 85 6f ff ff ff    	lea    -0x91(%ebp),%eax
 8a5e533:	89 04 24             	mov    %eax,(%esp)
 8a5e536:	e8 40 de e5 ff       	call   88bc37b <_Z7ScanIntPb>
 8a5e53b:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 8a5e541:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 8a5e548:	83 f0 01             	xor    $0x1,%eax
 8a5e54b:	84 c0                	test   %al,%al
 8a5e54d:	74 06                	je     8a5e555 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x32f>
 8a5e54f:	90                   	nop
 8a5e550:	e9 41 fd ff ff       	jmp    8a5e296 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x70>
 8a5e555:	8d 85 6f ff ff ff    	lea    -0x91(%ebp),%eax
 8a5e55b:	89 04 24             	mov    %eax,(%esp)
 8a5e55e:	e8 18 de e5 ff       	call   88bc37b <_Z7ScanIntPb>
 8a5e563:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 8a5e569:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 8a5e570:	83 f0 01             	xor    $0x1,%eax
 8a5e573:	84 c0                	test   %al,%al
 8a5e575:	74 0a                	je     8a5e581 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x35b>
 8a5e577:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a5e57c:	e9 89 00 00 00       	jmp    8a5e60a <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x3e4>
 8a5e581:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a5e584:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 8a5e58a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5e58e:	8d 95 4c ff ff ff    	lea    -0xb4(%ebp),%edx
 8a5e594:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5e598:	89 04 24             	mov    %eax,(%esp)
 8a5e59b:	e8 12 2d 6b ff       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 8a5e5a0:	83 ec 04             	sub    $0x4,%esp
 8a5e5a3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a5e5a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5e5aa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8a5e5ad:	89 04 24             	mov    %eax,(%esp)
 8a5e5b0:	e8 6b 87 66 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 8a5e5b5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5e5b8:	8d 48 54             	lea    0x54(%eax),%ecx
 8a5e5bb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8a5e5be:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8a5e5c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5e5c5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5e5c9:	89 04 24             	mov    %eax,(%esp)
 8a5e5cc:	e8 7f 87 66 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 8a5e5d1:	83 ec 04             	sub    $0x4,%esp
 8a5e5d4:	0f b6 45 d8          	movzbl -0x28(%ebp),%eax
 8a5e5d8:	83 f0 01             	xor    $0x1,%eax
 8a5e5db:	84 c0                	test   %al,%al
 8a5e5dd:	0f 84 49 ff ff ff    	je     8a5e52c <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x306>
 8a5e5e3:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a5e5e8:	eb 20                	jmp    8a5e60a <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x3e4>
 8a5e5ea:	90                   	nop
 8a5e5eb:	bb 01 00 00 00       	mov    $0x1,%ebx
 8a5e5f0:	eb 18                	jmp    8a5e60a <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x3e4>
 8a5e5f2:	89 d3                	mov    %edx,%ebx
 8a5e5f4:	89 c6                	mov    %eax,%esi
 8a5e5f6:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8a5e5fc:	89 04 24             	mov    %eax,(%esp)
 8a5e5ff:	e8 c2 84 66 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8a5e604:	89 f0                	mov    %esi,%eax
 8a5e606:	89 da                	mov    %ebx,%edx
 8a5e608:	eb 10                	jmp    8a5e61a <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x3f4>
 8a5e60a:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8a5e610:	89 04 24             	mov    %eax,(%esp)
 8a5e613:	e8 ae 84 66 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8a5e618:	eb 1e                	jmp    8a5e638 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc+0x412>
 8a5e61a:	89 d3                	mov    %edx,%ebx
 8a5e61c:	89 c6                	mov    %eax,%esi
 8a5e61e:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8a5e624:	89 04 24             	mov    %eax,(%esp)
 8a5e627:	e8 b4 95 ca ff       	call   8707be0 <_ZNSsD1Ev>
 8a5e62c:	89 f0                	mov    %esi,%eax
 8a5e62e:	89 da                	mov    %ebx,%edx
 8a5e630:	89 04 24             	mov    %eax,(%esp)
 8a5e633:	e8 18 51 08 00       	call   8ae3750 <_Unwind_Resume>
 8a5e638:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8a5e63e:	89 04 24             	mov    %eax,(%esp)
 8a5e641:	e8 9a 95 ca ff       	call   8707be0 <_ZNSsD1Ev>
 8a5e646:	89 d8                	mov    %ebx,%eax
 8a5e648:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8a5e64b:	83 c4 00             	add    $0x0,%esp
 8a5e64e:	5b                   	pop    %ebx
 8a5e64f:	5e                   	pop    %esi
 8a5e650:	5d                   	pop    %ebp
 8a5e651:	c3                   	ret

```

```c
// PvPSkillTreeParameterScript::importPairPvPSkillPointScript @ 0x8a5e226

/* PvPSkillTreeParameterScript::importPairPvPSkillPointScript(char const*) */

undefined4 __thiscall
PvPSkillTreeParameterScript::importPairPvPSkillPointScript
          (PvPSkillTreeParameterScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  PvPSkillTreeParameterScript PVar3;
  int iVar4;
  undefined4 uVar5;
  longdouble lVar6;
  int local_b8;
  int local_b4;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_b0 [27];
  bool local_95;
  string local_94;
  pair local_90 [8];
  pair<int_const,int> local_88 [8];
  int local_80 [2];
  int local_78;
  pair local_74 [8];
  pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
  local_6c [28];
  pair<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>> local_50 [28];
  int local_34;
  pair local_30 [4];
  char local_2c;
  pair<int_const,int> local_28 [8];
  int local_20 [2];
  int local_18;
  int local_14;
  int local_10;
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_94);
    local_95 = false;
                    /* try { // try from 08a5e273 to 08a5e277 has its CatchHandler @ 08a5e61a */
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_b0);
    local_18 = 0;
    local_14 = 0;
    local_10 = 0x37;
    do {
      while( true ) {
        while( true ) {
                    /* try { // try from 08a5e2a7 to 08a5e3d2 has its CatchHandler @ 08a5e5f2 */
          cVar1 = ScanType((string *)&local_94,true);
          if (cVar1 != '\x01') {
            uVar5 = 1;
            goto LAB_08a5e60a;
          }
          bVar2 = std::operator==(&local_94,"[skill point]");
          if (!bVar2) break;
          while( true ) {
            lVar6 = (longdouble)ScanFloat(&local_95);
            local_b4 = (int)ROUND(lVar6);
            if (local_95 != true) break;
            local_78 = local_18;
            local_18 = local_18 + 1;
            std::make_pair<int,int&>(local_80,&local_78);
            std::pair<int_const,int>::pair<int,int>(local_88,(pair *)local_80);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                      (local_90);
            iVar4 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                              (local_b0);
            if (iVar4 == local_10) {
              local_34 = local_14;
              local_14 = local_14 + 1;
              std::
              make_pair<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>&>
                        ((int *)local_50,(map *)&local_34);
                    /* try { // try from 08a5e3e3 to 08a5e3e7 has its CatchHandler @ 08a5e429 */
              std::
              pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
              ::pair<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
                        (local_6c,local_50);
                    /* try { // try from 08a5e3ff to 08a5e403 has its CatchHandler @ 08a5e414 */
              std::
              map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
              ::insert(local_74);
                    /* try { // try from 08a5e40d to 08a5e411 has its CatchHandler @ 08a5e429 */
              std::
              pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
              ::~pair(local_6c);
                    /* try { // try from 08a5e447 to 08a5e5d0 has its CatchHandler @ 08a5e5f2 */
              std::
              pair<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>::
              ~pair(local_50);
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
                        (local_b0);
              local_18 = 0;
            }
          }
          iVar4 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                            (local_b0);
          if ((iVar4 == local_10) ||
             (iVar4 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      size(local_b0), iVar4 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            uVar5 = 0;
            goto LAB_08a5e60a;
          }
        }
        bVar2 = std::operator==(&local_94,"[version]");
        if (bVar2) break;
        bVar2 = std::operator==(&local_94,"[init skill tree]");
        if (bVar2) {
          local_b8 = 0;
          while (local_b8 = ScanInt(&local_95), local_95 == true) {
            ScanInt(&local_95);
            if (local_95 != true) {
              uVar5 = 0;
              goto LAB_08a5e60a;
            }
            std::make_pair<int&,int&>(local_20,&local_b8);
            std::pair<int_const,int>::pair<int,int>(local_28,(pair *)local_20);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                      (local_30);
            if (local_2c != '\x01') {
              uVar5 = 0;
              goto LAB_08a5e60a;
            }
          }
        }
      }
      PVar3 = (PvPSkillTreeParameterScript)ScanInt(&local_95);
      this[0x50] = PVar3;
    } while (local_95 == true);
    uVar5 = 0;
LAB_08a5e60a:
                    /* try { // try from 08a5e613 to 08a5e617 has its CatchHandler @ 08a5e61a */
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_b0);
    std::string::~string((string *)&local_94);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## importPvPSkillTreeParameterScript

```asm
// === 08a5cf16 PvPSkillTreeParameterScript::importPvPSkillTreeParameterScript  [0x08a5cf16-0x8a5db59] ===
 8a5cf16:	55                   	push   %ebp
 8a5cf17:	89 e5                	mov    %esp,%ebp
 8a5cf19:	56                   	push   %esi
 8a5cf1a:	53                   	push   %ebx
 8a5cf1b:	81 ec d0 02 00 00    	sub    $0x2d0,%esp
 8a5cf21:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a5cf24:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5cf28:	c7 04 24 40 02 50 09 	movl   $0x9500240,(%esp)
 8a5cf2f:	e8 f5 ed e5 ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 8a5cf34:	83 f0 01             	xor    $0x1,%eax
 8a5cf37:	84 c0                	test   %al,%al
 8a5cf39:	74 0a                	je     8a5cf45 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x2f>
 8a5cf3b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a5cf40:	e9 09 0c 00 00       	jmp    8a5db4e <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xc38>
 8a5cf45:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 8a5cf4b:	89 04 24             	mov    %eax,(%esp)
 8a5cf4e:	e8 7d 96 ca ff       	call   87065d0 <_ZNSsC1Ev>
 8a5cf53:	c6 85 ff fd ff ff 00 	movb   $0x0,-0x201(%ebp)
 8a5cf5a:	8d 85 fc fd ff ff    	lea    -0x204(%ebp),%eax
 8a5cf60:	89 04 24             	mov    %eax,(%esp)
 8a5cf63:	e8 e6 17 00 00       	call   8a5e74e <_ZN15PvPSkillTreeKeyC1Ev>
 8a5cf68:	eb 0d                	jmp    8a5cf77 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x61>
 8a5cf6a:	90                   	nop
 8a5cf6b:	eb 0a                	jmp    8a5cf77 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x61>
 8a5cf6d:	90                   	nop
 8a5cf6e:	eb 07                	jmp    8a5cf77 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x61>
 8a5cf70:	90                   	nop
 8a5cf71:	eb 04                	jmp    8a5cf77 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x61>
 8a5cf73:	90                   	nop
 8a5cf74:	eb 01                	jmp    8a5cf77 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x61>
 8a5cf76:	90                   	nop
 8a5cf77:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8a5cf7e:	00 
 8a5cf7f:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 8a5cf85:	89 04 24             	mov    %eax,(%esp)
 8a5cf88:	e8 d2 f8 e5 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8a5cf8d:	83 f0 01             	xor    $0x1,%eax
 8a5cf90:	84 c0                	test   %al,%al
 8a5cf92:	0f 85 82 0b 00 00    	jne    8a5db1a <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xc04>
 8a5cf98:	c7 44 24 04 15 51 e2 	movl   $0x8e25115,0x4(%esp)
 8a5cf9f:	08 
 8a5cfa0:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 8a5cfa6:	89 04 24             	mov    %eax,(%esp)
 8a5cfa9:	e8 f3 39 62 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a5cfae:	84 c0                	test   %al,%al
 8a5cfb0:	74 2c                	je     8a5cfde <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xc8>
 8a5cfb2:	8d 85 ff fd ff ff    	lea    -0x201(%ebp),%eax
 8a5cfb8:	89 04 24             	mov    %eax,(%esp)
 8a5cfbb:	e8 bb f3 e5 ff       	call   88bc37b <_Z7ScanIntPb>
 8a5cfc0:	89 85 f8 fd ff ff    	mov    %eax,-0x208(%ebp)
 8a5cfc6:	0f b6 85 ff fd ff ff 	movzbl -0x201(%ebp),%eax
 8a5cfcd:	83 f0 01             	xor    $0x1,%eax
 8a5cfd0:	84 c0                	test   %al,%al
 8a5cfd2:	74 96                	je     8a5cf6a <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x54>
 8a5cfd4:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a5cfd9:	e9 62 0b 00 00       	jmp    8a5db40 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xc2a>
 8a5cfde:	c7 44 24 04 1d 51 e2 	movl   $0x8e2511d,0x4(%esp)
 8a5cfe5:	08 
 8a5cfe6:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 8a5cfec:	89 04 24             	mov    %eax,(%esp)
 8a5cfef:	e8 ad 39 62 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a5cff4:	84 c0                	test   %al,%al
 8a5cff6:	74 30                	je     8a5d028 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x112>
 8a5cff8:	8d 85 ff fd ff ff    	lea    -0x201(%ebp),%eax
 8a5cffe:	89 04 24             	mov    %eax,(%esp)
 8a5d001:	e8 75 f3 e5 ff       	call   88bc37b <_Z7ScanIntPb>
 8a5d006:	88 85 fc fd ff ff    	mov    %al,-0x204(%ebp)
 8a5d00c:	0f b6 85 ff fd ff ff 	movzbl -0x201(%ebp),%eax
 8a5d013:	83 f0 01             	xor    $0x1,%eax
 8a5d016:	84 c0                	test   %al,%al
 8a5d018:	0f 84 4f ff ff ff    	je     8a5cf6d <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x57>
 8a5d01e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a5d023:	e9 18 0b 00 00       	jmp    8a5db40 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xc2a>
 8a5d028:	c7 44 24 04 29 51 e2 	movl   $0x8e25129,0x4(%esp)
 8a5d02f:	08 
 8a5d030:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 8a5d036:	89 04 24             	mov    %eax,(%esp)
 8a5d039:	e8 63 39 62 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a5d03e:	84 c0                	test   %al,%al
 8a5d040:	74 30                	je     8a5d072 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x15c>
 8a5d042:	8d 85 ff fd ff ff    	lea    -0x201(%ebp),%eax
 8a5d048:	89 04 24             	mov    %eax,(%esp)
 8a5d04b:	e8 2b f3 e5 ff       	call   88bc37b <_Z7ScanIntPb>
 8a5d050:	88 85 fd fd ff ff    	mov    %al,-0x203(%ebp)
 8a5d056:	0f b6 85 ff fd ff ff 	movzbl -0x201(%ebp),%eax
 8a5d05d:	83 f0 01             	xor    $0x1,%eax
 8a5d060:	84 c0                	test   %al,%al
 8a5d062:	0f 84 08 ff ff ff    	je     8a5cf70 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x5a>
 8a5d068:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a5d06d:	e9 ce 0a 00 00       	jmp    8a5db40 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xc2a>
 8a5d072:	c7 44 24 04 3b 51 e2 	movl   $0x8e2513b,0x4(%esp)
 8a5d079:	08 
 8a5d07a:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 8a5d080:	89 04 24             	mov    %eax,(%esp)
 8a5d083:	e8 19 39 62 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a5d088:	84 c0                	test   %al,%al
 8a5d08a:	74 30                	je     8a5d0bc <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x1a6>
 8a5d08c:	8d 85 ff fd ff ff    	lea    -0x201(%ebp),%eax
 8a5d092:	89 04 24             	mov    %eax,(%esp)
 8a5d095:	e8 e1 f2 e5 ff       	call   88bc37b <_Z7ScanIntPb>
 8a5d09a:	88 85 fe fd ff ff    	mov    %al,-0x202(%ebp)
 8a5d0a0:	0f b6 85 ff fd ff ff 	movzbl -0x201(%ebp),%eax
 8a5d0a7:	83 f0 01             	xor    $0x1,%eax
 8a5d0aa:	84 c0                	test   %al,%al
 8a5d0ac:	0f 84 c1 fe ff ff    	je     8a5cf73 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x5d>
 8a5d0b2:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a5d0b7:	e9 84 0a 00 00       	jmp    8a5db40 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xc2a>
 8a5d0bc:	c7 44 24 04 4c 51 e2 	movl   $0x8e2514c,0x4(%esp)
 8a5d0c3:	08 
 8a5d0c4:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 8a5d0ca:	89 04 24             	mov    %eax,(%esp)
 8a5d0cd:	e8 cf 38 62 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a5d0d2:	84 c0                	test   %al,%al
 8a5d0d4:	0f 84 86 06 00 00    	je     8a5d760 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x84a>
 8a5d0da:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
 8a5d0e0:	89 04 24             	mov    %eax,(%esp)
 8a5d0e3:	e8 b8 16 00 00       	call   8a5e7a0 <_ZN17PvPSkillTreeValueC1Ev>
 8a5d0e8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8a5d0ef:	8d 85 d4 fd ff ff    	lea    -0x22c(%ebp),%eax
 8a5d0f5:	89 04 24             	mov    %eax,(%esp)
 8a5d0f8:	e8 91 8b 75 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 8a5d0fd:	8d 85 ff fd ff ff    	lea    -0x201(%ebp),%eax
 8a5d103:	89 04 24             	mov    %eax,(%esp)
 8a5d106:	e8 70 f2 e5 ff       	call   88bc37b <_Z7ScanIntPb>
 8a5d10b:	89 85 d4 fd ff ff    	mov    %eax,-0x22c(%ebp)
 8a5d111:	0f b6 85 ff fd ff ff 	movzbl -0x201(%ebp),%eax
 8a5d118:	83 f0 01             	xor    $0x1,%eax
 8a5d11b:	84 c0                	test   %al,%al
 8a5d11d:	0f 85 f4 02 00 00    	jne    8a5d417 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x501>
 8a5d123:	8d 85 ff fd ff ff    	lea    -0x201(%ebp),%eax
 8a5d129:	89 04 24             	mov    %eax,(%esp)
 8a5d12c:	e8 4a f2 e5 ff       	call   88bc37b <_Z7ScanIntPb>
 8a5d131:	89 85 d8 fd ff ff    	mov    %eax,-0x228(%ebp)
 8a5d137:	0f b6 85 ff fd ff ff 	movzbl -0x201(%ebp),%eax
 8a5d13e:	83 f0 01             	xor    $0x1,%eax
 8a5d141:	84 c0                	test   %al,%al
 8a5d143:	0f 85 d1 02 00 00    	jne    8a5d41a <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x504>
 8a5d149:	8d 85 d4 fd ff ff    	lea    -0x22c(%ebp),%eax
 8a5d14f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5d153:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
 8a5d159:	89 04 24             	mov    %eax,(%esp)
 8a5d15c:	e8 0f 29 8b ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 8a5d161:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5d164:	8d 48 30             	lea    0x30(%eax),%ecx
 8a5d167:	8d 85 d0 fd ff ff    	lea    -0x230(%ebp),%eax
 8a5d16d:	8d 95 fc fd ff ff    	lea    -0x204(%ebp),%edx
 8a5d173:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d177:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5d17b:	89 04 24             	mov    %eax,(%esp)
 8a5d17e:	e8 6d 17 00 00       	call   8a5e8f0 <_ZNSt3mapI15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 8a5d183:	83 ec 04             	sub    $0x4,%esp
 8a5d186:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5d189:	8d 50 30             	lea    0x30(%eax),%edx
 8a5d18c:	8d 85 04 fe ff ff    	lea    -0x1fc(%ebp),%eax
 8a5d192:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d196:	89 04 24             	mov    %eax,(%esp)
 8a5d199:	e8 26 61 93 ff       	call   83932c4 <_ZNSt3mapI15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 8a5d19e:	83 ec 04             	sub    $0x4,%esp
 8a5d1a1:	8d 85 04 fe ff ff    	lea    -0x1fc(%ebp),%eax
 8a5d1a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5d1ab:	8d 85 d0 fd ff ff    	lea    -0x230(%ebp),%eax
 8a5d1b1:	89 04 24             	mov    %eax,(%esp)
 8a5d1b4:	e8 31 61 93 ff       	call   83932ea <_ZNKSt17_Rb_tree_iteratorISt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTEEneERKS5_>
 8a5d1b9:	84 c0                	test   %al,%al
 8a5d1bb:	0f 84 03 01 00 00    	je     8a5d2c4 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x3ae>
 8a5d1c1:	8d 85 d0 fd ff ff    	lea    -0x230(%ebp),%eax
 8a5d1c7:	89 04 24             	mov    %eax,(%esp)
 8a5d1ca:	e8 4d 61 93 ff       	call   839331c <_ZNKSt17_Rb_tree_iteratorISt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTEEptEv>
 8a5d1cf:	8d 48 04             	lea    0x4(%eax),%ecx
 8a5d1d2:	8d 85 cc fd ff ff    	lea    -0x234(%ebp),%eax
 8a5d1d8:	8d 95 d4 fd ff ff    	lea    -0x22c(%ebp),%edx
 8a5d1de:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d1e2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5d1e6:	89 04 24             	mov    %eax,(%esp)
 8a5d1e9:	e8 00 01 67 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8a5d1ee:	83 ec 04             	sub    $0x4,%esp
 8a5d1f1:	8d 85 d0 fd ff ff    	lea    -0x230(%ebp),%eax
 8a5d1f7:	89 04 24             	mov    %eax,(%esp)
 8a5d1fa:	e8 1d 61 93 ff       	call   839331c <_ZNKSt17_Rb_tree_iteratorISt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTEEptEv>
 8a5d1ff:	8d 50 04             	lea    0x4(%eax),%edx
 8a5d202:	8d 85 08 fe ff ff    	lea    -0x1f8(%ebp),%eax
 8a5d208:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d20c:	89 04 24             	mov    %eax,(%esp)
 8a5d20f:	e8 06 01 67 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8a5d214:	83 ec 04             	sub    $0x4,%esp
 8a5d217:	8d 85 08 fe ff ff    	lea    -0x1f8(%ebp),%eax
 8a5d21d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5d221:	8d 85 cc fd ff ff    	lea    -0x234(%ebp),%eax
 8a5d227:	89 04 24             	mov    %eax,(%esp)
 8a5d22a:	e8 99 d1 67 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 8a5d22f:	84 c0                	test   %al,%al
 8a5d231:	74 1c                	je     8a5d24f <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x339>
 8a5d233:	8d 85 cc fd ff ff    	lea    -0x234(%ebp),%eax
 8a5d239:	89 04 24             	mov    %eax,(%esp)
 8a5d23c:	e8 ff 00 67 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8a5d241:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
 8a5d247:	89 50 04             	mov    %edx,0x4(%eax)
 8a5d24a:	e9 a0 fe ff ff       	jmp    8a5d0ef <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x1d9>
 8a5d24f:	8d 85 1c fe ff ff    	lea    -0x1e4(%ebp),%eax
 8a5d255:	8d 95 d4 fd ff ff    	lea    -0x22c(%ebp),%edx
 8a5d25b:	83 c2 04             	add    $0x4,%edx
 8a5d25e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d262:	8d 95 d4 fd ff ff    	lea    -0x22c(%ebp),%edx
 8a5d268:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d26c:	89 04 24             	mov    %eax,(%esp)
 8a5d26f:	e8 3e 40 6b ff       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 8a5d274:	83 ec 04             	sub    $0x4,%esp
 8a5d277:	8d 85 1c fe ff ff    	lea    -0x1e4(%ebp),%eax
 8a5d27d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5d281:	8d 85 14 fe ff ff    	lea    -0x1ec(%ebp),%eax
 8a5d287:	89 04 24             	mov    %eax,(%esp)
 8a5d28a:	e8 91 9a 66 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 8a5d28f:	8d 85 d0 fd ff ff    	lea    -0x230(%ebp),%eax
 8a5d295:	89 04 24             	mov    %eax,(%esp)
 8a5d298:	e8 7f 60 93 ff       	call   839331c <_ZNKSt17_Rb_tree_iteratorISt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTEEptEv>
 8a5d29d:	8d 48 04             	lea    0x4(%eax),%ecx
 8a5d2a0:	8d 85 0c fe ff ff    	lea    -0x1f4(%ebp),%eax
 8a5d2a6:	8d 95 14 fe ff ff    	lea    -0x1ec(%ebp),%edx
 8a5d2ac:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d2b0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5d2b4:	89 04 24             	mov    %eax,(%esp)
 8a5d2b7:	e8 94 9a 66 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 8a5d2bc:	83 ec 04             	sub    $0x4,%esp
 8a5d2bf:	e9 2b fe ff ff       	jmp    8a5d0ef <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x1d9>
 8a5d2c4:	8d 85 3c fd ff ff    	lea    -0x2c4(%ebp),%eax
 8a5d2ca:	89 04 24             	mov    %eax,(%esp)
 8a5d2cd:	e8 14 15 00 00       	call   8a5e7e6 <_ZN35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTC1Ev>
 8a5d2d2:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 8a5d2d8:	8d 95 d4 fd ff ff    	lea    -0x22c(%ebp),%edx
 8a5d2de:	83 c2 04             	add    $0x4,%edx
 8a5d2e1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d2e5:	8d 95 d4 fd ff ff    	lea    -0x22c(%ebp),%edx
 8a5d2eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d2ef:	89 04 24             	mov    %eax,(%esp)
 8a5d2f2:	e8 bb 3f 6b ff       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 8a5d2f7:	83 ec 04             	sub    $0x4,%esp
 8a5d2fa:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 8a5d300:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5d304:	8d 85 2c fe ff ff    	lea    -0x1d4(%ebp),%eax
 8a5d30a:	89 04 24             	mov    %eax,(%esp)
 8a5d30d:	e8 0e 9a 66 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 8a5d312:	8d 85 24 fe ff ff    	lea    -0x1dc(%ebp),%eax
 8a5d318:	8d 95 2c fe ff ff    	lea    -0x1d4(%ebp),%edx
 8a5d31e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d322:	8d 95 3c fd ff ff    	lea    -0x2c4(%ebp),%edx
 8a5d328:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d32c:	89 04 24             	mov    %eax,(%esp)
 8a5d32f:	e8 1c 9a 66 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 8a5d334:	83 ec 04             	sub    $0x4,%esp
 8a5d337:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 8a5d33d:	8d 95 3c fd ff ff    	lea    -0x2c4(%ebp),%edx
 8a5d343:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d347:	8d 95 fc fd ff ff    	lea    -0x204(%ebp),%edx
 8a5d34d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d351:	89 04 24             	mov    %eax,(%esp)
 8a5d354:	e8 c3 15 00 00       	call   8a5e91c <_ZSt9make_pairIR15PvPSkillTreeKeyR35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8a5d359:	83 ec 04             	sub    $0x4,%esp
 8a5d35c:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 8a5d362:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5d366:	8d 85 44 fe ff ff    	lea    -0x1bc(%ebp),%eax
 8a5d36c:	89 04 24             	mov    %eax,(%esp)
 8a5d36f:	e8 7c 16 00 00       	call   8a5e9f0 <_ZNSt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTEC1IS0_S2_EEOS_IT_T0_E>
 8a5d374:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5d377:	8d 48 30             	lea    0x30(%eax),%ecx
 8a5d37a:	8d 85 3c fe ff ff    	lea    -0x1c4(%ebp),%eax
 8a5d380:	8d 95 44 fe ff ff    	lea    -0x1bc(%ebp),%edx
 8a5d386:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d38a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5d38e:	89 04 24             	mov    %eax,(%esp)
 8a5d391:	e8 a2 16 00 00       	call   8a5ea38 <_ZNSt3mapI15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 8a5d396:	83 ec 04             	sub    $0x4,%esp
 8a5d399:	8d 85 44 fe ff ff    	lea    -0x1bc(%ebp),%eax
 8a5d39f:	89 04 24             	mov    %eax,(%esp)
 8a5d3a2:	e8 bf 0f 97 ff       	call   83ce366 <_ZNSt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTED1Ev>
 8a5d3a7:	eb 30                	jmp    8a5d3d9 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x4c3>
 8a5d3a9:	89 d3                	mov    %edx,%ebx
 8a5d3ab:	89 c6                	mov    %eax,%esi
 8a5d3ad:	8d 85 44 fe ff ff    	lea    -0x1bc(%ebp),%eax
 8a5d3b3:	89 04 24             	mov    %eax,(%esp)
 8a5d3b6:	e8 ab 0f 97 ff       	call   83ce366 <_ZNSt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTED1Ev>
 8a5d3bb:	89 f0                	mov    %esi,%eax
 8a5d3bd:	89 da                	mov    %ebx,%edx
 8a5d3bf:	eb 00                	jmp    8a5d3c1 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x4ab>
 8a5d3c1:	89 d3                	mov    %edx,%ebx
 8a5d3c3:	89 c6                	mov    %eax,%esi
 8a5d3c5:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 8a5d3cb:	89 04 24             	mov    %eax,(%esp)
 8a5d3ce:	e8 db 14 00 00       	call   8a5e8ae <_ZNSt4pairI15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTED1Ev>
 8a5d3d3:	89 f0                	mov    %esi,%eax
 8a5d3d5:	89 da                	mov    %ebx,%edx
 8a5d3d7:	eb 10                	jmp    8a5d3e9 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x4d3>
 8a5d3d9:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 8a5d3df:	89 04 24             	mov    %eax,(%esp)
 8a5d3e2:	e8 c7 14 00 00       	call   8a5e8ae <_ZNSt4pairI15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTED1Ev>
 8a5d3e7:	eb 1b                	jmp    8a5d404 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x4ee>
 8a5d3e9:	89 d3                	mov    %edx,%ebx
 8a5d3eb:	89 c6                	mov    %eax,%esi
 8a5d3ed:	8d 85 3c fd ff ff    	lea    -0x2c4(%ebp),%eax
 8a5d3f3:	89 04 24             	mov    %eax,(%esp)
 8a5d3f6:	e8 fd 0e 97 ff       	call   83ce2f8 <_ZN35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTD1Ev>
 8a5d3fb:	89 f0                	mov    %esi,%eax
 8a5d3fd:	89 da                	mov    %ebx,%edx
 8a5d3ff:	e9 26 03 00 00       	jmp    8a5d72a <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x814>
 8a5d404:	8d 85 3c fd ff ff    	lea    -0x2c4(%ebp),%eax
 8a5d40a:	89 04 24             	mov    %eax,(%esp)
 8a5d40d:	e8 e6 0e 97 ff       	call   83ce2f8 <_ZN35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTD1Ev>
 8a5d412:	e9 d8 fc ff ff       	jmp    8a5d0ef <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x1d9>
 8a5d417:	90                   	nop
 8a5d418:	eb 01                	jmp    8a5d41b <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x505>
 8a5d41a:	90                   	nop
 8a5d41b:	8b 55 08             	mov    0x8(%ebp),%edx
 8a5d41e:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
 8a5d424:	8d 8d fc fd ff ff    	lea    -0x204(%ebp),%ecx
 8a5d42a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8a5d42e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d432:	89 04 24             	mov    %eax,(%esp)
 8a5d435:	e8 2a 16 00 00       	call   8a5ea64 <_ZNSt3mapI15PvPSkillTreeKeyS_Ii17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS1_EEES2_IS0_ESaIS4_IKS0_S8_EEE4findERSA_>
 8a5d43a:	83 ec 04             	sub    $0x4,%esp
 8a5d43d:	8b 55 08             	mov    0x8(%ebp),%edx
 8a5d440:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 8a5d446:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d44a:	89 04 24             	mov    %eax,(%esp)
 8a5d44d:	e8 a6 5c 93 ff       	call   83930f8 <_ZNSt3mapI15PvPSkillTreeKeyS_Ii17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS1_EEES2_IS0_ESaIS4_IKS0_S8_EEE3endEv>
 8a5d452:	83 ec 04             	sub    $0x4,%esp
 8a5d455:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 8a5d45b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5d45f:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
 8a5d465:	89 04 24             	mov    %eax,(%esp)
 8a5d468:	e8 b1 5c 93 ff       	call   839311e <_ZNKSt17_Rb_tree_iteratorISt4pairIK15PvPSkillTreeKeySt3mapIi17PvPSkillTreeValueSt4lessIiESaIS0_IKiS4_EEEEEneERKSC_>
 8a5d46d:	84 c0                	test   %al,%al
 8a5d46f:	0f 84 e5 00 00 00    	je     8a5d55a <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x644>
 8a5d475:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 8a5d47b:	8d 95 e0 fd ff ff    	lea    -0x220(%ebp),%edx
 8a5d481:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d485:	8d 95 f8 fd ff ff    	lea    -0x208(%ebp),%edx
 8a5d48b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d48f:	89 04 24             	mov    %eax,(%esp)
 8a5d492:	e8 f9 15 00 00       	call   8a5ea90 <_ZSt9make_pairIRiR17PvPSkillTreeValueESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 8a5d497:	83 ec 04             	sub    $0x4,%esp
 8a5d49a:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 8a5d4a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5d4a4:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 8a5d4aa:	89 04 24             	mov    %eax,(%esp)
 8a5d4ad:	e8 78 16 00 00       	call   8a5eb2a <_ZNSt4pairIKi17PvPSkillTreeValueEC1IiS1_EEOS_IT_T0_E>
 8a5d4b2:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
 8a5d4b8:	89 04 24             	mov    %eax,(%esp)
 8a5d4bb:	e8 90 5c 93 ff       	call   8393150 <_ZNKSt17_Rb_tree_iteratorISt4pairIK15PvPSkillTreeKeySt3mapIi17PvPSkillTreeValueSt4lessIiESaIS0_IKiS4_EEEEEptEv>
 8a5d4c0:	8d 48 04             	lea    0x4(%eax),%ecx
 8a5d4c3:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 8a5d4c9:	8d 95 d8 fe ff ff    	lea    -0x128(%ebp),%edx
 8a5d4cf:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d4d3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5d4d7:	89 04 24             	mov    %eax,(%esp)
 8a5d4da:	e8 85 16 00 00       	call   8a5eb64 <_ZNSt3mapIi17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 8a5d4df:	83 ec 04             	sub    $0x4,%esp
 8a5d4e2:	0f b6 85 d4 fe ff ff 	movzbl -0x12c(%ebp),%eax
 8a5d4e9:	be 01 00 00 00       	mov    $0x1,%esi
 8a5d4ee:	31 c6                	xor    %eax,%esi
 8a5d4f0:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 8a5d4f6:	89 04 24             	mov    %eax,(%esp)
 8a5d4f9:	e8 4c 2b 99 ff       	call   83f004a <_ZNSt4pairIKi17PvPSkillTreeValueED1Ev>
 8a5d4fe:	eb 33                	jmp    8a5d533 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x61d>
 8a5d500:	89 d3                	mov    %edx,%ebx
 8a5d502:	89 c6                	mov    %eax,%esi
 8a5d504:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 8a5d50a:	89 04 24             	mov    %eax,(%esp)
 8a5d50d:	e8 38 2b 99 ff       	call   83f004a <_ZNSt4pairIKi17PvPSkillTreeValueED1Ev>
 8a5d512:	89 f0                	mov    %esi,%eax
 8a5d514:	89 da                	mov    %ebx,%edx
 8a5d516:	eb 00                	jmp    8a5d518 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x602>
 8a5d518:	89 d3                	mov    %edx,%ebx
 8a5d51a:	89 c6                	mov    %eax,%esi
 8a5d51c:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 8a5d522:	89 04 24             	mov    %eax,(%esp)
 8a5d525:	e8 9a 13 00 00       	call   8a5e8c4 <_ZNSt4pairIi17PvPSkillTreeValueED1Ev>
 8a5d52a:	89 f0                	mov    %esi,%eax
 8a5d52c:	89 da                	mov    %ebx,%edx
 8a5d52e:	e9 f7 01 00 00       	jmp    8a5d72a <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x814>
 8a5d533:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 8a5d539:	89 04 24             	mov    %eax,(%esp)
 8a5d53c:	e8 83 13 00 00       	call   8a5e8c4 <_ZNSt4pairIi17PvPSkillTreeValueED1Ev>
 8a5d541:	89 f0                	mov    %esi,%eax
 8a5d543:	84 c0                	test   %al,%al
 8a5d545:	0f 84 d8 01 00 00    	je     8a5d723 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x80d>
 8a5d54b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a5d550:	be 00 00 00 00       	mov    $0x0,%esi
 8a5d555:	e9 eb 01 00 00       	jmp    8a5d745 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x82f>
 8a5d55a:	8d 85 b4 fd ff ff    	lea    -0x24c(%ebp),%eax
 8a5d560:	89 04 24             	mov    %eax,(%esp)
 8a5d563:	e8 28 16 00 00       	call   8a5eb90 <_ZNSt3mapIi17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS0_EEEC1Ev>
 8a5d568:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 8a5d56e:	8d 95 e0 fd ff ff    	lea    -0x220(%ebp),%edx
 8a5d574:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d578:	8d 95 f8 fd ff ff    	lea    -0x208(%ebp),%edx
 8a5d57e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d582:	89 04 24             	mov    %eax,(%esp)
 8a5d585:	e8 06 15 00 00       	call   8a5ea90 <_ZSt9make_pairIRiR17PvPSkillTreeValueESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 8a5d58a:	83 ec 04             	sub    $0x4,%esp
 8a5d58d:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 8a5d593:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5d597:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 8a5d59d:	89 04 24             	mov    %eax,(%esp)
 8a5d5a0:	e8 85 15 00 00       	call   8a5eb2a <_ZNSt4pairIKi17PvPSkillTreeValueEC1IiS1_EEOS_IT_T0_E>
 8a5d5a5:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8a5d5ab:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 8a5d5b1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d5b5:	8d 95 b4 fd ff ff    	lea    -0x24c(%ebp),%edx
 8a5d5bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d5bf:	89 04 24             	mov    %eax,(%esp)
 8a5d5c2:	e8 9d 15 00 00       	call   8a5eb64 <_ZNSt3mapIi17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 8a5d5c7:	83 ec 04             	sub    $0x4,%esp
 8a5d5ca:	0f b6 85 14 ff ff ff 	movzbl -0xec(%ebp),%eax
 8a5d5d1:	be 01 00 00 00       	mov    $0x1,%esi
 8a5d5d6:	31 c6                	xor    %eax,%esi
 8a5d5d8:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 8a5d5de:	89 04 24             	mov    %eax,(%esp)
 8a5d5e1:	e8 64 2a 99 ff       	call   83f004a <_ZNSt4pairIKi17PvPSkillTreeValueED1Ev>
 8a5d5e6:	eb 33                	jmp    8a5d61b <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x705>
 8a5d5e8:	89 d3                	mov    %edx,%ebx
 8a5d5ea:	89 c6                	mov    %eax,%esi
 8a5d5ec:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 8a5d5f2:	89 04 24             	mov    %eax,(%esp)
 8a5d5f5:	e8 50 2a 99 ff       	call   83f004a <_ZNSt4pairIKi17PvPSkillTreeValueED1Ev>
 8a5d5fa:	89 f0                	mov    %esi,%eax
 8a5d5fc:	89 da                	mov    %ebx,%edx
 8a5d5fe:	eb 00                	jmp    8a5d600 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x6ea>
 8a5d600:	89 d3                	mov    %edx,%ebx
 8a5d602:	89 c6                	mov    %eax,%esi
 8a5d604:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 8a5d60a:	89 04 24             	mov    %eax,(%esp)
 8a5d60d:	e8 b2 12 00 00       	call   8a5e8c4 <_ZNSt4pairIi17PvPSkillTreeValueED1Ev>
 8a5d612:	89 f0                	mov    %esi,%eax
 8a5d614:	89 da                	mov    %ebx,%edx
 8a5d616:	e9 d7 00 00 00       	jmp    8a5d6f2 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x7dc>
 8a5d61b:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 8a5d621:	89 04 24             	mov    %eax,(%esp)
 8a5d624:	e8 9b 12 00 00       	call   8a5e8c4 <_ZNSt4pairIi17PvPSkillTreeValueED1Ev>
 8a5d629:	89 f0                	mov    %esi,%eax
 8a5d62b:	84 c0                	test   %al,%al
 8a5d62d:	74 0f                	je     8a5d63e <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x728>
 8a5d62f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a5d634:	be 00 00 00 00       	mov    $0x0,%esi
 8a5d639:	e9 cc 00 00 00       	jmp    8a5d70a <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x7f4>
 8a5d63e:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8a5d644:	8d 95 b4 fd ff ff    	lea    -0x24c(%ebp),%edx
 8a5d64a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d64e:	8d 95 fc fd ff ff    	lea    -0x204(%ebp),%edx
 8a5d654:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d658:	89 04 24             	mov    %eax,(%esp)
 8a5d65b:	e8 43 15 00 00       	call   8a5eba3 <_ZSt9make_pairIR15PvPSkillTreeKeyRSt3mapIi17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS3_EEEES6_INSt17__decay_and_stripIT_E6__typeENSC_IT0_E6__typeEEOSD_OSG_>
 8a5d660:	83 ec 04             	sub    $0x4,%esp
 8a5d663:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8a5d669:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5d66d:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8a5d673:	89 04 24             	mov    %eax,(%esp)
 8a5d676:	e8 6d 15 00 00       	call   8a5ebe8 <_ZNSt4pairIK15PvPSkillTreeKeySt3mapIi17PvPSkillTreeValueSt4lessIiESaIS_IKiS3_EEEEC1IS0_S9_EEOS_IT_T0_E>
 8a5d67b:	8b 55 08             	mov    0x8(%ebp),%edx
 8a5d67e:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8a5d684:	8d 8d 58 ff ff ff    	lea    -0xa8(%ebp),%ecx
 8a5d68a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8a5d68e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d692:	89 04 24             	mov    %eax,(%esp)
 8a5d695:	e8 96 15 00 00       	call   8a5ec30 <_ZNSt3mapI15PvPSkillTreeKeyS_Ii17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS1_EEES2_IS0_ESaIS4_IKS0_S8_EEE6insertERKSB_>
 8a5d69a:	83 ec 04             	sub    $0x4,%esp
 8a5d69d:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8a5d6a3:	89 04 24             	mov    %eax,(%esp)
 8a5d6a6:	e8 ed 0a 97 ff       	call   83ce198 <_ZNSt4pairIK15PvPSkillTreeKeySt3mapIi17PvPSkillTreeValueSt4lessIiESaIS_IKiS3_EEEED1Ev>
 8a5d6ab:	eb 30                	jmp    8a5d6dd <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x7c7>
 8a5d6ad:	89 d3                	mov    %edx,%ebx
 8a5d6af:	89 c6                	mov    %eax,%esi
 8a5d6b1:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8a5d6b7:	89 04 24             	mov    %eax,(%esp)
 8a5d6ba:	e8 d9 0a 97 ff       	call   83ce198 <_ZNSt4pairIK15PvPSkillTreeKeySt3mapIi17PvPSkillTreeValueSt4lessIiESaIS_IKiS3_EEEED1Ev>
 8a5d6bf:	89 f0                	mov    %esi,%eax
 8a5d6c1:	89 da                	mov    %ebx,%edx
 8a5d6c3:	eb 00                	jmp    8a5d6c5 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x7af>
 8a5d6c5:	89 d3                	mov    %edx,%ebx
 8a5d6c7:	89 c6                	mov    %eax,%esi
 8a5d6c9:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8a5d6cf:	89 04 24             	mov    %eax,(%esp)
 8a5d6d2:	e8 03 12 00 00       	call   8a5e8da <_ZNSt4pairI15PvPSkillTreeKeySt3mapIi17PvPSkillTreeValueSt4lessIiESaIS_IKiS2_EEEED1Ev>
 8a5d6d7:	89 f0                	mov    %esi,%eax
 8a5d6d9:	89 da                	mov    %ebx,%edx
 8a5d6db:	eb 15                	jmp    8a5d6f2 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x7dc>
 8a5d6dd:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8a5d6e3:	89 04 24             	mov    %eax,(%esp)
 8a5d6e6:	e8 ef 11 00 00       	call   8a5e8da <_ZNSt4pairI15PvPSkillTreeKeySt3mapIi17PvPSkillTreeValueSt4lessIiESaIS_IKiS2_EEEED1Ev>
 8a5d6eb:	be 01 00 00 00       	mov    $0x1,%esi
 8a5d6f0:	eb 18                	jmp    8a5d70a <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x7f4>
 8a5d6f2:	89 d3                	mov    %edx,%ebx
 8a5d6f4:	89 c6                	mov    %eax,%esi
 8a5d6f6:	8d 85 b4 fd ff ff    	lea    -0x24c(%ebp),%eax
 8a5d6fc:	89 04 24             	mov    %eax,(%esp)
 8a5d6ff:	e8 80 0a 97 ff       	call   83ce184 <_ZNSt3mapIi17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 8a5d704:	89 f0                	mov    %esi,%eax
 8a5d706:	89 da                	mov    %ebx,%edx
 8a5d708:	eb 20                	jmp    8a5d72a <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x814>
 8a5d70a:	8d 85 b4 fd ff ff    	lea    -0x24c(%ebp),%eax
 8a5d710:	89 04 24             	mov    %eax,(%esp)
 8a5d713:	e8 6c 0a 97 ff       	call   83ce184 <_ZNSt3mapIi17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 8a5d718:	85 f6                	test   %esi,%esi
 8a5d71a:	75 07                	jne    8a5d723 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x80d>
 8a5d71c:	be 00 00 00 00       	mov    $0x0,%esi
 8a5d721:	eb 22                	jmp    8a5d745 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x82f>
 8a5d723:	be 01 00 00 00       	mov    $0x1,%esi
 8a5d728:	eb 1b                	jmp    8a5d745 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x82f>
 8a5d72a:	89 d3                	mov    %edx,%ebx
 8a5d72c:	89 c6                	mov    %eax,%esi
 8a5d72e:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
 8a5d734:	89 04 24             	mov    %eax,(%esp)
 8a5d737:	e8 c8 28 99 ff       	call   83f0004 <_ZN17PvPSkillTreeValueD1Ev>
 8a5d73c:	89 f0                	mov    %esi,%eax
 8a5d73e:	89 da                	mov    %ebx,%edx
 8a5d740:	e9 dd 03 00 00       	jmp    8a5db22 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xc0c>
 8a5d745:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
 8a5d74b:	89 04 24             	mov    %eax,(%esp)
 8a5d74e:	e8 b1 28 99 ff       	call   83f0004 <_ZN17PvPSkillTreeValueD1Ev>
 8a5d753:	85 f6                	test   %esi,%esi
 8a5d755:	0f 84 e5 03 00 00    	je     8a5db40 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xc2a>
 8a5d75b:	e9 17 f8 ff ff       	jmp    8a5cf77 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x61>
 8a5d760:	c7 44 24 04 54 51 e2 	movl   $0x8e25154,0x4(%esp)
 8a5d767:	08 
 8a5d768:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 8a5d76e:	89 04 24             	mov    %eax,(%esp)
 8a5d771:	e8 2b 32 62 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8a5d776:	84 c0                	test   %al,%al
 8a5d778:	0f 84 f8 f7 ff ff    	je     8a5cf76 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x60>
 8a5d77e:	8b 55 08             	mov    0x8(%ebp),%edx
 8a5d781:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
 8a5d787:	8d 8d fc fd ff ff    	lea    -0x204(%ebp),%ecx
 8a5d78d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8a5d791:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d795:	89 04 24             	mov    %eax,(%esp)
 8a5d798:	e8 c7 12 00 00       	call   8a5ea64 <_ZNSt3mapI15PvPSkillTreeKeyS_Ii17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS1_EEES2_IS0_ESaIS4_IKS0_S8_EEE4findERSA_>
 8a5d79d:	83 ec 04             	sub    $0x4,%esp
 8a5d7a0:	8b 55 08             	mov    0x8(%ebp),%edx
 8a5d7a3:	8d 45 90             	lea    -0x70(%ebp),%eax
 8a5d7a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d7aa:	89 04 24             	mov    %eax,(%esp)
 8a5d7ad:	e8 46 59 93 ff       	call   83930f8 <_ZNSt3mapI15PvPSkillTreeKeyS_Ii17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS1_EEES2_IS0_ESaIS4_IKS0_S8_EEE3endEv>
 8a5d7b2:	83 ec 04             	sub    $0x4,%esp
 8a5d7b5:	8d 45 90             	lea    -0x70(%ebp),%eax
 8a5d7b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5d7bc:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
 8a5d7c2:	89 04 24             	mov    %eax,(%esp)
 8a5d7c5:	e8 54 59 93 ff       	call   839311e <_ZNKSt17_Rb_tree_iteratorISt4pairIK15PvPSkillTreeKeySt3mapIi17PvPSkillTreeValueSt4lessIiESaIS0_IKiS4_EEEEEneERKSC_>
 8a5d7ca:	84 c0                	test   %al,%al
 8a5d7cc:	0f 84 41 03 00 00    	je     8a5db13 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xbfd>
 8a5d7d2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a5d7d9:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
 8a5d7df:	89 04 24             	mov    %eax,(%esp)
 8a5d7e2:	e8 69 59 93 ff       	call   8393150 <_ZNKSt17_Rb_tree_iteratorISt4pairIK15PvPSkillTreeKeySt3mapIi17PvPSkillTreeValueSt4lessIiESaIS0_IKiS4_EEEEEptEv>
 8a5d7e7:	8d 48 04             	lea    0x4(%eax),%ecx
 8a5d7ea:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
 8a5d7f0:	8d 95 f8 fd ff ff    	lea    -0x208(%ebp),%edx
 8a5d7f6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d7fa:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5d7fe:	89 04 24             	mov    %eax,(%esp)
 8a5d801:	e8 56 14 00 00       	call   8a5ec5c <_ZNSt3mapIi17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8a5d806:	83 ec 04             	sub    $0x4,%esp
 8a5d809:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
 8a5d80f:	89 04 24             	mov    %eax,(%esp)
 8a5d812:	e8 39 59 93 ff       	call   8393150 <_ZNKSt17_Rb_tree_iteratorISt4pairIK15PvPSkillTreeKeySt3mapIi17PvPSkillTreeValueSt4lessIiESaIS0_IKiS4_EEEEEptEv>
 8a5d817:	8d 50 04             	lea    0x4(%eax),%edx
 8a5d81a:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8a5d81d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d821:	89 04 24             	mov    %eax,(%esp)
 8a5d824:	e8 5b 59 93 ff       	call   8393184 <_ZNSt3mapIi17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8a5d829:	83 ec 04             	sub    $0x4,%esp
 8a5d82c:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8a5d82f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5d833:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
 8a5d839:	89 04 24             	mov    %eax,(%esp)
 8a5d83c:	e8 69 59 93 ff       	call   83931aa <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17PvPSkillTreeValueEEneERKS4_>
 8a5d841:	84 c0                	test   %al,%al
 8a5d843:	74 19                	je     8a5d85e <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x948>
 8a5d845:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
 8a5d84b:	89 04 24             	mov    %eax,(%esp)
 8a5d84e:	e8 89 59 93 ff       	call   83931dc <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17PvPSkillTreeValueEEptEv>
 8a5d853:	83 c0 10             	add    $0x10,%eax
 8a5d856:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8a5d859:	e9 f0 00 00 00       	jmp    8a5d94e <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xa38>
 8a5d85e:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 8a5d864:	89 04 24             	mov    %eax,(%esp)
 8a5d867:	e8 34 0f 00 00       	call   8a5e7a0 <_ZN17PvPSkillTreeValueC1Ev>
 8a5d86c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8a5d86f:	8d 95 94 fd ff ff    	lea    -0x26c(%ebp),%edx
 8a5d875:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d879:	8d 95 f8 fd ff ff    	lea    -0x208(%ebp),%edx
 8a5d87f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d883:	89 04 24             	mov    %eax,(%esp)
 8a5d886:	e8 05 12 00 00       	call   8a5ea90 <_ZSt9make_pairIRiR17PvPSkillTreeValueESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 8a5d88b:	83 ec 04             	sub    $0x4,%esp
 8a5d88e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8a5d891:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5d895:	8d 45 98             	lea    -0x68(%ebp),%eax
 8a5d898:	89 04 24             	mov    %eax,(%esp)
 8a5d89b:	e8 8a 12 00 00       	call   8a5eb2a <_ZNSt4pairIKi17PvPSkillTreeValueEC1IiS1_EEOS_IT_T0_E>
 8a5d8a0:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
 8a5d8a6:	89 04 24             	mov    %eax,(%esp)
 8a5d8a9:	e8 a2 58 93 ff       	call   8393150 <_ZNKSt17_Rb_tree_iteratorISt4pairIK15PvPSkillTreeKeySt3mapIi17PvPSkillTreeValueSt4lessIiESaIS0_IKiS4_EEEEEptEv>
 8a5d8ae:	8d 48 04             	lea    0x4(%eax),%ecx
 8a5d8b1:	8d 85 8c fd ff ff    	lea    -0x274(%ebp),%eax
 8a5d8b7:	8d 55 98             	lea    -0x68(%ebp),%edx
 8a5d8ba:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d8be:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5d8c2:	89 04 24             	mov    %eax,(%esp)
 8a5d8c5:	e8 9a 12 00 00       	call   8a5eb64 <_ZNSt3mapIi17PvPSkillTreeValueSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 8a5d8ca:	83 ec 04             	sub    $0x4,%esp
 8a5d8cd:	8d 45 98             	lea    -0x68(%ebp),%eax
 8a5d8d0:	89 04 24             	mov    %eax,(%esp)
 8a5d8d3:	e8 72 27 99 ff       	call   83f004a <_ZNSt4pairIKi17PvPSkillTreeValueED1Ev>
 8a5d8d8:	eb 2a                	jmp    8a5d904 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x9ee>
 8a5d8da:	89 d3                	mov    %edx,%ebx
 8a5d8dc:	89 c6                	mov    %eax,%esi
 8a5d8de:	8d 45 98             	lea    -0x68(%ebp),%eax
 8a5d8e1:	89 04 24             	mov    %eax,(%esp)
 8a5d8e4:	e8 61 27 99 ff       	call   83f004a <_ZNSt4pairIKi17PvPSkillTreeValueED1Ev>
 8a5d8e9:	89 f0                	mov    %esi,%eax
 8a5d8eb:	89 da                	mov    %ebx,%edx
 8a5d8ed:	eb 00                	jmp    8a5d8ef <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x9d9>
 8a5d8ef:	89 d3                	mov    %edx,%ebx
 8a5d8f1:	89 c6                	mov    %eax,%esi
 8a5d8f3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8a5d8f6:	89 04 24             	mov    %eax,(%esp)
 8a5d8f9:	e8 c6 0f 00 00       	call   8a5e8c4 <_ZNSt4pairIi17PvPSkillTreeValueED1Ev>
 8a5d8fe:	89 f0                	mov    %esi,%eax
 8a5d900:	89 da                	mov    %ebx,%edx
 8a5d902:	eb 2f                	jmp    8a5d933 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xa1d>
 8a5d904:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8a5d907:	89 04 24             	mov    %eax,(%esp)
 8a5d90a:	e8 b5 0f 00 00       	call   8a5e8c4 <_ZNSt4pairIi17PvPSkillTreeValueED1Ev>
 8a5d90f:	8d 85 8c fd ff ff    	lea    -0x274(%ebp),%eax
 8a5d915:	89 04 24             	mov    %eax,(%esp)
 8a5d918:	e8 bf 58 93 ff       	call   83931dc <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17PvPSkillTreeValueEEptEv>
 8a5d91d:	83 c0 10             	add    $0x10,%eax
 8a5d920:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8a5d923:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 8a5d929:	89 04 24             	mov    %eax,(%esp)
 8a5d92c:	e8 d3 26 99 ff       	call   83f0004 <_ZN17PvPSkillTreeValueD1Ev>
 8a5d931:	eb 1b                	jmp    8a5d94e <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xa38>
 8a5d933:	89 d3                	mov    %edx,%ebx
 8a5d935:	89 c6                	mov    %eax,%esi
 8a5d937:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 8a5d93d:	89 04 24             	mov    %eax,(%esp)
 8a5d940:	e8 bf 26 99 ff       	call   83f0004 <_ZN17PvPSkillTreeValueD1Ev>
 8a5d945:	89 f0                	mov    %esi,%eax
 8a5d947:	89 da                	mov    %ebx,%edx
 8a5d949:	e9 d4 01 00 00       	jmp    8a5db22 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xc0c>
 8a5d94e:	8d 85 84 fd ff ff    	lea    -0x27c(%ebp),%eax
 8a5d954:	89 04 24             	mov    %eax,(%esp)
 8a5d957:	e8 32 83 75 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 8a5d95c:	8d 85 ff fd ff ff    	lea    -0x201(%ebp),%eax
 8a5d962:	89 04 24             	mov    %eax,(%esp)
 8a5d965:	e8 11 ea e5 ff       	call   88bc37b <_Z7ScanIntPb>
 8a5d96a:	89 85 84 fd ff ff    	mov    %eax,-0x27c(%ebp)
 8a5d970:	0f b6 85 ff fd ff ff 	movzbl -0x201(%ebp),%eax
 8a5d977:	83 f0 01             	xor    $0x1,%eax
 8a5d97a:	84 c0                	test   %al,%al
 8a5d97c:	74 05                	je     8a5d983 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xa6d>
 8a5d97e:	e9 8b 01 00 00       	jmp    8a5db0e <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xbf8>
 8a5d983:	8d 85 ff fd ff ff    	lea    -0x201(%ebp),%eax
 8a5d989:	89 04 24             	mov    %eax,(%esp)
 8a5d98c:	e8 ea e9 e5 ff       	call   88bc37b <_Z7ScanIntPb>
 8a5d991:	89 85 88 fd ff ff    	mov    %eax,-0x278(%ebp)
 8a5d997:	0f b6 85 ff fd ff ff 	movzbl -0x201(%ebp),%eax
 8a5d99e:	83 f0 01             	xor    $0x1,%eax
 8a5d9a1:	84 c0                	test   %al,%al
 8a5d9a3:	74 05                	je     8a5d9aa <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xa94>
 8a5d9a5:	e9 64 01 00 00       	jmp    8a5db0e <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xbf8>
 8a5d9aa:	8d 85 84 fd ff ff    	lea    -0x27c(%ebp),%eax
 8a5d9b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5d9b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a5d9b7:	89 04 24             	mov    %eax,(%esp)
 8a5d9ba:	e8 b1 20 8b ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 8a5d9bf:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5d9c2:	8d 48 30             	lea    0x30(%eax),%ecx
 8a5d9c5:	8d 85 80 fd ff ff    	lea    -0x280(%ebp),%eax
 8a5d9cb:	8d 95 fc fd ff ff    	lea    -0x204(%ebp),%edx
 8a5d9d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5d9d5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5d9d9:	89 04 24             	mov    %eax,(%esp)
 8a5d9dc:	e8 0f 0f 00 00       	call   8a5e8f0 <_ZNSt3mapI15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 8a5d9e1:	83 ec 04             	sub    $0x4,%esp
 8a5d9e4:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5d9e7:	8d 50 30             	lea    0x30(%eax),%edx
 8a5d9ea:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8a5d9ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5d9f1:	89 04 24             	mov    %eax,(%esp)
 8a5d9f4:	e8 cb 58 93 ff       	call   83932c4 <_ZNSt3mapI15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 8a5d9f9:	83 ec 04             	sub    $0x4,%esp
 8a5d9fc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8a5d9ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5da03:	8d 85 80 fd ff ff    	lea    -0x280(%ebp),%eax
 8a5da09:	89 04 24             	mov    %eax,(%esp)
 8a5da0c:	e8 d9 58 93 ff       	call   83932ea <_ZNKSt17_Rb_tree_iteratorISt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTEEneERKS5_>
 8a5da11:	84 c0                	test   %al,%al
 8a5da13:	0f 84 ee 00 00 00    	je     8a5db07 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xbf1>
 8a5da19:	8d 85 80 fd ff ff    	lea    -0x280(%ebp),%eax
 8a5da1f:	89 04 24             	mov    %eax,(%esp)
 8a5da22:	e8 f5 58 93 ff       	call   839331c <_ZNKSt17_Rb_tree_iteratorISt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTEEptEv>
 8a5da27:	8d 48 1c             	lea    0x1c(%eax),%ecx
 8a5da2a:	8d 85 7c fd ff ff    	lea    -0x284(%ebp),%eax
 8a5da30:	8d 95 84 fd ff ff    	lea    -0x27c(%ebp),%edx
 8a5da36:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5da3a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5da3e:	89 04 24             	mov    %eax,(%esp)
 8a5da41:	e8 a8 f8 66 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8a5da46:	83 ec 04             	sub    $0x4,%esp
 8a5da49:	8d 85 80 fd ff ff    	lea    -0x280(%ebp),%eax
 8a5da4f:	89 04 24             	mov    %eax,(%esp)
 8a5da52:	e8 c5 58 93 ff       	call   839331c <_ZNKSt17_Rb_tree_iteratorISt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTEEptEv>
 8a5da57:	8d 50 1c             	lea    0x1c(%eax),%edx
 8a5da5a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8a5da5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5da61:	89 04 24             	mov    %eax,(%esp)
 8a5da64:	e8 b1 f8 66 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8a5da69:	83 ec 04             	sub    $0x4,%esp
 8a5da6c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8a5da6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5da73:	8d 85 7c fd ff ff    	lea    -0x284(%ebp),%eax
 8a5da79:	89 04 24             	mov    %eax,(%esp)
 8a5da7c:	e8 47 c9 67 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 8a5da81:	84 c0                	test   %al,%al
 8a5da83:	74 1c                	je     8a5daa1 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xb8b>
 8a5da85:	8d 85 7c fd ff ff    	lea    -0x284(%ebp),%eax
 8a5da8b:	89 04 24             	mov    %eax,(%esp)
 8a5da8e:	e8 ad f8 66 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8a5da93:	8b 95 88 fd ff ff    	mov    -0x278(%ebp),%edx
 8a5da99:	89 50 04             	mov    %edx,0x4(%eax)
 8a5da9c:	e9 ad fe ff ff       	jmp    8a5d94e <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xa38>
 8a5daa1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a5daa4:	8d 95 84 fd ff ff    	lea    -0x27c(%ebp),%edx
 8a5daaa:	83 c2 04             	add    $0x4,%edx
 8a5daad:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5dab1:	8d 95 84 fd ff ff    	lea    -0x27c(%ebp),%edx
 8a5dab7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a5dabb:	89 04 24             	mov    %eax,(%esp)
 8a5dabe:	e8 ef 37 6b ff       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 8a5dac3:	83 ec 04             	sub    $0x4,%esp
 8a5dac6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a5dac9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5dacd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a5dad0:	89 04 24             	mov    %eax,(%esp)
 8a5dad3:	e8 48 92 66 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 8a5dad8:	8d 85 80 fd ff ff    	lea    -0x280(%ebp),%eax
 8a5dade:	89 04 24             	mov    %eax,(%esp)
 8a5dae1:	e8 36 58 93 ff       	call   839331c <_ZNKSt17_Rb_tree_iteratorISt4pairIK15PvPSkillTreeKey35FAIR_PVP_SKILL_TREE_SKILL_PER_POINTEEptEv>
 8a5dae6:	8d 48 1c             	lea    0x1c(%eax),%ecx
 8a5dae9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8a5daec:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8a5daef:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a5daf3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a5daf7:	89 04 24             	mov    %eax,(%esp)
 8a5dafa:	e8 51 92 66 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 8a5daff:	83 ec 04             	sub    $0x4,%esp
 8a5db02:	e9 47 fe ff ff       	jmp    8a5d94e <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xa38>
 8a5db07:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a5db0c:	eb 32                	jmp    8a5db40 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xc2a>
 8a5db0e:	e9 64 f4 ff ff       	jmp    8a5cf77 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0x61>
 8a5db13:	bb 00 00 00 00       	mov    $0x0,%ebx
 8a5db18:	eb 26                	jmp    8a5db40 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xc2a>
 8a5db1a:	90                   	nop
 8a5db1b:	bb 01 00 00 00       	mov    $0x1,%ebx
 8a5db20:	eb 1e                	jmp    8a5db40 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc+0xc2a>
 8a5db22:	89 d3                	mov    %edx,%ebx
 8a5db24:	89 c6                	mov    %eax,%esi
 8a5db26:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 8a5db2c:	89 04 24             	mov    %eax,(%esp)
 8a5db2f:	e8 ac a0 ca ff       	call   8707be0 <_ZNSsD1Ev>
 8a5db34:	89 f0                	mov    %esi,%eax
 8a5db36:	89 da                	mov    %ebx,%edx
 8a5db38:	89 04 24             	mov    %eax,(%esp)
 8a5db3b:	e8 10 5c 08 00       	call   8ae3750 <_Unwind_Resume>
 8a5db40:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 8a5db46:	89 04 24             	mov    %eax,(%esp)
 8a5db49:	e8 92 a0 ca ff       	call   8707be0 <_ZNSsD1Ev>
 8a5db4e:	89 d8                	mov    %ebx,%eax
 8a5db50:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8a5db53:	83 c4 00             	add    $0x0,%esp
 8a5db56:	5b                   	pop    %ebx
 8a5db57:	5e                   	pop    %esi
 8a5db58:	5d                   	pop    %ebp
 8a5db59:	c3                   	ret

```

```c
// PvPSkillTreeParameterScript::importPvPSkillTreeParameterScript @ 0x8a5cf16

/* PvPSkillTreeParameterScript::importPvPSkillTreeParameterScript(char const*) */

undefined4 __thiscall
PvPSkillTreeParameterScript::importPvPSkillTreeParameterScript
          (PvPSkillTreeParameterScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 unaff_EBX;
  FAIR_PVP_SKILL_TREE_SKILL_PER_POINT local_2c8 [64];
  _Rb_tree_iterator<std::pair<int_const,int>> local_288 [4];
  PvPSkillTreeKey local_284 [4];
  int local_280;
  undefined4 local_27c;
  _Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>> local_278 [8];
  PvPSkillTreeValue local_270 [24];
  _Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>> local_258 [4];
  PvPSkillTreeKey local_254 [4];
  map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
  local_250 [24];
  _Rb_tree_iterator<std::pair<int_const,int>> local_238 [4];
  PvPSkillTreeKey local_234 [4];
  int local_230;
  undefined4 local_22c;
  PvPSkillTreeKey local_228 [4];
  PvPSkillTreeValue local_224 [24];
  undefined4 local_20c;
  PvPSkillTreeKey local_208;
  undefined1 local_207;
  undefined1 local_206;
  bool local_205;
  string local_204;
  map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
  local_200 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1fc [4];
  pair local_1f8 [8];
  pair<int_const,int> local_1f0 [8];
  int local_1e8 [2];
  pair local_1e0 [8];
  pair<int_const,int> local_1d8 [8];
  int local_1d0 [2];
  pair local_1c8 [8];
  pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT> local_1c0 [68];
  PvPSkillTreeKey local_17c [68];
  map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
  local_138 [4];
  pair local_134 [4];
  char local_130;
  pair<int_const,PvPSkillTreeValue> local_12c [28];
  pair<int,PvPSkillTreeValue> local_110 [28];
  pair local_f4 [4];
  char local_f0;
  pair<int_const,PvPSkillTreeValue> local_ec [28];
  pair<int,PvPSkillTreeValue> local_d0 [28];
  pair local_b4 [8];
  pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>
  local_ac [28];
  PvPSkillTreeKey local_90 [28];
  map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
  local_74 [4];
  map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
  local_70 [4];
  pair<int_const,PvPSkillTreeValue> local_6c [28];
  pair<int,PvPSkillTreeValue> local_50 [28];
  map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
  local_34 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_30 [4];
  pair local_2c [8];
  pair<int_const,int> local_24 [8];
  int local_1c [2];
  undefined4 local_14;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *local_10;
  
  cVar1 = loadRDARScriptFile(g_pvpSkillTreeScriptBaseDirectory,param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_204);
    local_205 = false;
    PvPSkillTreeKey::PvPSkillTreeKey(&local_208);
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                    /* try { // try from 08a5cf88 to 08a5d0e7 has its CatchHandler @ 08a5db22 */
                cVar1 = ScanType((string *)&local_204,true);
                if (cVar1 != '\x01') {
                  unaff_EBX = 1;
                  goto LAB_08a5db40;
                }
                bVar2 = std::operator==(&local_204,"[level]");
                if (!bVar2) break;
                local_20c = ScanInt(&local_205);
                if (local_205 != true) {
                  unaff_EBX = 0;
                  goto LAB_08a5db40;
                }
              }
              bVar2 = std::operator==(&local_204,"[job index]");
              if (!bVar2) break;
              local_208 = (PvPSkillTreeKey)ScanInt(&local_205);
              if (local_205 != true) {
                unaff_EBX = 0;
                goto LAB_08a5db40;
              }
            }
            bVar2 = std::operator==(&local_204,"[grow type index]");
            if (!bVar2) break;
            local_207 = ScanInt(&local_205);
            if (local_205 != true) {
              unaff_EBX = 0;
              goto LAB_08a5db40;
            }
          }
          bVar2 = std::operator==(&local_204,"[awakening type]");
          if (!bVar2) break;
          local_206 = ScanInt(&local_205);
          if (local_205 != true) {
            unaff_EBX = 0;
            goto LAB_08a5db40;
          }
        }
        bVar2 = std::operator==(&local_204,"[skill]");
        if (bVar2) break;
        bVar2 = std::operator==(&local_204,"[static basic skill]");
        if (bVar2) {
          std::
          map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
          ::find(local_254);
          std::
          map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
          ::end(local_74);
          cVar1 = std::
                  _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                  ::operator!=((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                                *)local_254,(_Rb_tree_iterator *)local_74);
          if (cVar1 == '\0') {
            unaff_EBX = 0;
            goto LAB_08a5db40;
          }
          local_10 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)0x0;
          std::
          _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
          ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                        *)local_254);
          std::
          map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
          ::find((int *)local_258);
          std::
          _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
          ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                        *)local_254);
          std::
          map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
          ::end(local_70);
          cVar1 = std::_Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>>::operator!=
                            (local_258,(_Rb_tree_iterator *)local_70);
          if (cVar1 == '\0') {
            PvPSkillTreeValue::PvPSkillTreeValue(local_270);
                    /* try { // try from 08a5d886 to 08a5d88a has its CatchHandler @ 08a5d933 */
            std::make_pair<int&,PvPSkillTreeValue&>((int *)local_50,(PvPSkillTreeValue *)&local_20c)
            ;
                    /* try { // try from 08a5d89b to 08a5d89f has its CatchHandler @ 08a5d8ef */
            std::pair<int_const,PvPSkillTreeValue>::pair<int,PvPSkillTreeValue>(local_6c,local_50);
            std::
            _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
            ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                          *)local_254);
                    /* try { // try from 08a5d8c5 to 08a5d8c9 has its CatchHandler @ 08a5d8da */
            std::
            map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
            ::insert(local_278);
                    /* try { // try from 08a5d8d3 to 08a5d8d7 has its CatchHandler @ 08a5d8ef */
            std::pair<int_const,PvPSkillTreeValue>::~pair(local_6c);
                    /* try { // try from 08a5d90a to 08a5d90e has its CatchHandler @ 08a5d933 */
            std::pair<int,PvPSkillTreeValue>::~pair(local_50);
            iVar3 = std::_Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>>::operator->
                              (local_278);
            local_10 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (iVar3 + 0x10);
                    /* try { // try from 08a5d92c to 08a5d930 has its CatchHandler @ 08a5db22 */
            PvPSkillTreeValue::~PvPSkillTreeValue(local_270);
          }
          else {
            iVar3 = std::_Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>>::operator->
                              (local_258);
            local_10 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (iVar3 + 0x10);
          }
          while( true ) {
            std::pair<int,int>::pair((pair<int,int> *)&local_280);
                    /* try { // try from 08a5d965 to 08a5dafe has its CatchHandler @ 08a5db22 */
            local_280 = ScanInt(&local_205);
            if ((local_205 != true) || (local_27c = ScanInt(&local_205), local_205 != true)) break;
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      (local_10,(pair *)&local_280);
            std::
            map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
            ::find(local_284);
            std::
            map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
            ::end(local_34);
            cVar1 = std::
                    _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                    ::operator!=((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                                  *)local_284,(_Rb_tree_iterator *)local_34);
            if (cVar1 == '\0') {
              unaff_EBX = 0;
              goto LAB_08a5db40;
            }
            std::
            _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
            ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                          *)local_284);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                      ((int *)local_288);
            std::
            _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
            ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                          *)local_284);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_30)
            ;
            cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                              (local_288,(_Rb_tree_iterator *)local_30);
            if (cVar1 == '\0') {
              std::make_pair<int&,int&>(local_1c,&local_280);
              std::pair<int_const,int>::pair<int,int>(local_24,(pair *)local_1c);
              std::
              _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
              ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                            *)local_284);
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                        (local_2c);
            }
            else {
              iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_288);
              *(undefined4 *)(iVar3 + 4) = local_27c;
            }
          }
        }
      }
      PvPSkillTreeValue::PvPSkillTreeValue(local_224);
      local_14 = 0;
      while( true ) {
        std::pair<int,int>::pair((pair<int,int> *)&local_230);
                    /* try { // try from 08a5d106 to 08a5d2d1 has its CatchHandler @ 08a5d72a */
        local_230 = ScanInt(&local_205);
        if ((local_205 != true) || (local_22c = ScanInt(&local_205), local_205 != true)) break;
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_224,
                   (pair *)&local_230);
        std::
        map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
        ::find(local_234);
        std::
        map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
        ::end(local_200);
        cVar1 = std::
                _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                ::operator!=((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                              *)local_234,(_Rb_tree_iterator *)local_200);
        if (cVar1 == '\0') {
          FAIR_PVP_SKILL_TREE_SKILL_PER_POINT::FAIR_PVP_SKILL_TREE_SKILL_PER_POINT(local_2c8);
                    /* try { // try from 08a5d2f2 to 08a5d358 has its CatchHandler @ 08a5d3e9 */
          std::make_pair<int&,int&>(local_1d0,&local_230);
          std::pair<int_const,int>::pair<int,int>(local_1d8,(pair *)local_1d0);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                    (local_1e0);
          std::make_pair<PvPSkillTreeKey&,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT&>
                    (local_17c,(FAIR_PVP_SKILL_TREE_SKILL_PER_POINT *)&local_208);
                    /* try { // try from 08a5d36f to 08a5d373 has its CatchHandler @ 08a5d3c1 */
          std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>::
          pair<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>(local_1c0,local_17c);
                    /* try { // try from 08a5d391 to 08a5d395 has its CatchHandler @ 08a5d3a9 */
          std::
          map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
          ::insert(local_1c8);
                    /* try { // try from 08a5d3a2 to 08a5d3a6 has its CatchHandler @ 08a5d3c1 */
          std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>::~pair(local_1c0);
                    /* try { // try from 08a5d3e2 to 08a5d3e6 has its CatchHandler @ 08a5d3e9 */
          std::pair<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>::~pair
                    ((pair<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT> *)local_17c);
                    /* try { // try from 08a5d40d to 08a5d496 has its CatchHandler @ 08a5d72a */
          FAIR_PVP_SKILL_TREE_SKILL_PER_POINT::~FAIR_PVP_SKILL_TREE_SKILL_PER_POINT(local_2c8);
        }
        else {
          std::
          _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>::
          operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                      *)local_234);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                    ((int *)local_238);
          std::
          _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>::
          operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                      *)local_234);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_1fc);
          cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                            (local_238,(_Rb_tree_iterator *)local_1fc);
          if (cVar1 == '\0') {
            std::make_pair<int&,int&>(local_1e8,&local_230);
            std::pair<int_const,int>::pair<int,int>(local_1f0,(pair *)local_1e8);
            std::
            _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
            ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                          *)local_234);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                      (local_1f8);
          }
          else {
            iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_238);
            *(undefined4 *)(iVar3 + 4) = local_22c;
          }
        }
      }
      std::
      map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
      ::find(local_228);
      std::
      map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
      ::end(local_138);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
              ::operator!=((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                            *)local_228,(_Rb_tree_iterator *)local_138);
      if (cVar1 == '\0') {
        std::
        map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
        ::map(local_250);
                    /* try { // try from 08a5d585 to 08a5d589 has its CatchHandler @ 08a5d6f2 */
        std::make_pair<int&,PvPSkillTreeValue&>((int *)local_d0,(PvPSkillTreeValue *)&local_20c);
                    /* try { // try from 08a5d5a0 to 08a5d5a4 has its CatchHandler @ 08a5d600 */
        std::pair<int_const,PvPSkillTreeValue>::pair<int,PvPSkillTreeValue>(local_ec,local_d0);
                    /* try { // try from 08a5d5c2 to 08a5d5c6 has its CatchHandler @ 08a5d5e8 */
        std::
        map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
        ::insert(local_f4);
        cVar1 = local_f0;
                    /* try { // try from 08a5d5e1 to 08a5d5e5 has its CatchHandler @ 08a5d600 */
        std::pair<int_const,PvPSkillTreeValue>::~pair(local_ec);
                    /* try { // try from 08a5d624 to 08a5d65f has its CatchHandler @ 08a5d6f2 */
        std::pair<int,PvPSkillTreeValue>::~pair(local_d0);
        if (cVar1 == '\x01') {
          std::
          make_pair<PvPSkillTreeKey&,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>&>
                    (local_90,(map *)&local_208);
                    /* try { // try from 08a5d676 to 08a5d67a has its CatchHandler @ 08a5d6c5 */
          std::
          pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>
          ::
          pair<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>
                    (local_ac,local_90);
                    /* try { // try from 08a5d695 to 08a5d699 has its CatchHandler @ 08a5d6ad */
          std::
          map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
          ::insert(local_b4);
                    /* try { // try from 08a5d6a6 to 08a5d6aa has its CatchHandler @ 08a5d6c5 */
          std::
          pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>
          ::~pair(local_ac);
                    /* try { // try from 08a5d6e6 to 08a5d6ea has its CatchHandler @ 08a5d6f2 */
          std::
          pair<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>
          ::~pair((pair<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>
                   *)local_90);
        }
        else {
          unaff_EBX = 0;
        }
                    /* try { // try from 08a5d713 to 08a5d717 has its CatchHandler @ 08a5d72a */
        std::
        map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
        ::~map(local_250);
        if (cVar1 == '\x01') goto LAB_08a5d723;
        bVar2 = false;
      }
      else {
        std::make_pair<int&,PvPSkillTreeValue&>((int *)local_110,(PvPSkillTreeValue *)&local_20c);
                    /* try { // try from 08a5d4ad to 08a5d4b1 has its CatchHandler @ 08a5d518 */
        std::pair<int_const,PvPSkillTreeValue>::pair<int,PvPSkillTreeValue>(local_12c,local_110);
        std::
        _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
        ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                      *)local_228);
                    /* try { // try from 08a5d4da to 08a5d4de has its CatchHandler @ 08a5d500 */
        std::
        map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
        ::insert(local_134);
        cVar1 = local_130;
                    /* try { // try from 08a5d4f9 to 08a5d4fd has its CatchHandler @ 08a5d518 */
        std::pair<int_const,PvPSkillTreeValue>::~pair(local_12c);
                    /* try { // try from 08a5d53c to 08a5d567 has its CatchHandler @ 08a5d72a */
        std::pair<int,PvPSkillTreeValue>::~pair(local_110);
        if (cVar1 == '\x01') {
LAB_08a5d723:
          bVar2 = true;
        }
        else {
          unaff_EBX = 0;
          bVar2 = false;
        }
      }
                    /* try { // try from 08a5d74e to 08a5d86b has its CatchHandler @ 08a5db22 */
      PvPSkillTreeValue::~PvPSkillTreeValue(local_224);
    } while (bVar2);
LAB_08a5db40:
    std::string::~string((string *)&local_204);
  }
  else {
    unaff_EBX = 0;
  }
  return unaff_EBX;
}

```

---

## load_pvp_skill_tree_list

```asm
// === 08a5ce28 PvPSkillTreeParameterScript::load_pvp_skill_tree_list  [0x08a5ce28-0x8a5cf15] ===
 8a5ce28:	55                   	push   %ebp
 8a5ce29:	89 e5                	mov    %esp,%ebp
 8a5ce2b:	83 ec 48             	sub    $0x48,%esp
 8a5ce2e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a5ce31:	89 04 24             	mov    %eax,(%esp)
 8a5ce34:	e8 9f 6e 85 ff       	call   82b3cd8 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEC1Ev>
 8a5ce39:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8a5ce3c:	c7 44 24 04 40 03 50 	movl   $0x9500340,0x4(%esp)
 8a5ce43:	09 
 8a5ce44:	89 04 24             	mov    %eax,(%esp)
 8a5ce47:	e8 a6 92 68 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 8a5ce4c:	83 ec 04             	sub    $0x4,%esp
 8a5ce4f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8a5ce52:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8a5ce55:	e9 81 00 00 00       	jmp    8a5cedb <_ZN27PvPSkillTreeParameterScript24load_pvp_skill_tree_listEv+0xb3>
 8a5ce5a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a5ce5d:	89 04 24             	mov    %eax,(%esp)
 8a5ce60:	e8 53 93 68 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 8a5ce65:	83 c0 04             	add    $0x4,%eax
 8a5ce68:	89 04 24             	mov    %eax,(%esp)
 8a5ce6b:	e8 80 96 ca ff       	call   87064f0 <_ZNKSs5c_strEv>
 8a5ce70:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8a5ce73:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8a5ce77:	0f 84 90 00 00 00    	je     8a5cf0d <_ZN27PvPSkillTreeParameterScript24load_pvp_skill_tree_listEv+0xe5>
 8a5ce7d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a5ce80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5ce84:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5ce87:	89 04 24             	mov    %eax,(%esp)
 8a5ce8a:	e8 87 00 00 00       	call   8a5cf16 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc>
 8a5ce8f:	83 f0 01             	xor    $0x1,%eax
 8a5ce92:	84 c0                	test   %al,%al
 8a5ce94:	74 3a                	je     8a5ced0 <_ZN27PvPSkillTreeParameterScript24load_pvp_skill_tree_listEv+0xa8>
 8a5ce96:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a5ce99:	89 44 24 14          	mov    %eax,0x14(%esp)
 8a5ce9d:	c7 44 24 10 c4 50 e2 	movl   $0x8e250c4,0x10(%esp)
 8a5cea4:	08 
 8a5cea5:	c7 44 24 0c 45 00 00 	movl   $0x45,0xc(%esp)
 8a5ceac:	00 
 8a5cead:	c7 44 24 08 8c 55 e2 	movl   $0x8e2558c,0x8(%esp)
 8a5ceb4:	08 
 8a5ceb5:	c7 44 24 04 f7 50 e2 	movl   $0x8e250f7,0x4(%esp)
 8a5cebc:	08 
 8a5cebd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8a5cec4:	e8 41 6d 07 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8a5cec9:	b8 00 00 00 00       	mov    $0x0,%eax
 8a5cece:	eb 43                	jmp    8a5cf13 <_ZN27PvPSkillTreeParameterScript24load_pvp_skill_tree_listEv+0xeb>
 8a5ced0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a5ced3:	89 04 24             	mov    %eax,(%esp)
 8a5ced6:	e8 35 97 68 ff       	call   80e6610 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEv>
 8a5cedb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a5cede:	c7 44 24 04 40 03 50 	movl   $0x9500340,0x4(%esp)
 8a5cee5:	09 
 8a5cee6:	89 04 24             	mov    %eax,(%esp)
 8a5cee9:	e8 2a 92 68 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 8a5ceee:	83 ec 04             	sub    $0x4,%esp
 8a5cef1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a5cef4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5cef8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a5cefb:	89 04 24             	mov    %eax,(%esp)
 8a5cefe:	e8 3b 92 68 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 8a5cf03:	84 c0                	test   %al,%al
 8a5cf05:	0f 85 4f ff ff ff    	jne    8a5ce5a <_ZN27PvPSkillTreeParameterScript24load_pvp_skill_tree_listEv+0x32>
 8a5cf0b:	eb 01                	jmp    8a5cf0e <_ZN27PvPSkillTreeParameterScript24load_pvp_skill_tree_listEv+0xe6>
 8a5cf0d:	90                   	nop
 8a5cf0e:	b8 01 00 00 00       	mov    $0x1,%eax
 8a5cf13:	c9                   	leave
 8a5cf14:	c3                   	ret
 8a5cf15:	90                   	nop

```

```c
// PvPSkillTreeParameterScript::load_pvp_skill_tree_list @ 0x8a5ce28

/* PvPSkillTreeParameterScript::load_pvp_skill_tree_list() */

undefined4 __thiscall
PvPSkillTreeParameterScript::load_pvp_skill_tree_list(PvPSkillTreeParameterScript *this)

{
  char cVar1;
  int iVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_14 [4];
  char *local_10;
  
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )local_20);
  local_18 = local_20[0];
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      return 1;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18);
    local_10 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_10 == (char *)0x0) break;
    cVar1 = importPvPSkillTreeParameterScript(this,local_10);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"../RDARScriptPvPSkillTree.cpp","load_pvp_skill_tree_list",0x45,
                 "PvPSkillTreeParameterScript File Script Error: %s\n",local_10);
      return 0;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18);
  }
  return 1;
}

```

