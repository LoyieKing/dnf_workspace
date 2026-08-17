# CDungeonJobNode

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## InsertDB

```asm
// === 08485e00 CDungeonJobNode::InsertDB  [0x08485e00-0x8485f89] ===
 8485e00:	55                   	push   %ebp
 8485e01:	89 e5                	mov    %esp,%ebp
 8485e03:	57                   	push   %edi
 8485e04:	56                   	push   %esi
 8485e05:	53                   	push   %ebx
 8485e06:	83 ec 7c             	sub    $0x7c,%esp
 8485e09:	8b 55 08             	mov    0x8(%ebp),%edx
 8485e0c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8485e0f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485e13:	89 04 24             	mov    %eax,(%esp)
 8485e16:	e8 39 1f 00 00       	call   8487d54 <_ZNSt3mapIi5SkillSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 8485e1b:	83 ec 04             	sub    $0x4,%esp
 8485e1e:	e9 28 01 00 00       	jmp    8485f4b <_ZN15CDungeonJobNode8InsertDBERK10DungeonKeyi+0x14b>
 8485e23:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8485e26:	89 04 24             	mov    %eax,(%esp)
 8485e29:	e8 88 13 00 00       	call   84871b6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi5SkillEEptEv>
 8485e2e:	83 c0 04             	add    $0x4,%eax
 8485e31:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8485e34:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8485e37:	89 04 24             	mov    %eax,(%esp)
 8485e3a:	e8 77 13 00 00       	call   84871b6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi5SkillEEptEv>
 8485e3f:	8b 00                	mov    (%eax),%eax
 8485e41:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8485e44:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8485e47:	8b 40 0c             	mov    0xc(%eax),%eax
 8485e4a:	85 c0                	test   %eax,%eax
 8485e4c:	0f 84 d1 00 00 00    	je     8485f23 <_ZN15CDungeonJobNode8InsertDBERK10DungeonKeyi+0x123>
 8485e52:	e8 22 fd ff ff       	call   8485b79 <_Z16GetMySqLInstancev>
 8485e57:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8485e5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8485e5d:	8b 40 04             	mov    0x4(%eax),%eax
 8485e60:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8485e63:	8b 45 0c             	mov    0xc(%ebp),%eax
 8485e66:	8b 38                	mov    (%eax),%edi
 8485e68:	e8 14 63 c4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8485e6d:	89 04 24             	mov    %eax,(%esp)
 8485e70:	e8 55 4c cc ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8485e75:	89 c2                	mov    %eax,%edx
 8485e77:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8485e7a:	8b 30                	mov    (%eax),%esi
 8485e7c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8485e7f:	8b 58 08             	mov    0x8(%eax),%ebx
 8485e82:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8485e85:	8b 48 04             	mov    0x4(%eax),%ecx
 8485e88:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8485e8b:	89 44 24 28          	mov    %eax,0x28(%esp)
 8485e8f:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8485e96:	00 
 8485e97:	8b 45 10             	mov    0x10(%ebp),%eax
 8485e9a:	89 44 24 20          	mov    %eax,0x20(%esp)
 8485e9e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8485ea1:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8485ea5:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8485ea9:	89 54 24 14          	mov    %edx,0x14(%esp)
 8485ead:	89 74 24 10          	mov    %esi,0x10(%esp)
 8485eb1:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8485eb5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8485eb9:	c7 44 24 04 64 45 c7 	movl   $0x8c74564,0x4(%esp)
 8485ec0:	08 
 8485ec1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8485ec4:	89 04 24             	mov    %eax,(%esp)
 8485ec7:	e8 f4 e2 f6 ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8485ecc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8485ed3:	00 
 8485ed4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8485ed7:	89 04 24             	mov    %eax,(%esp)
 8485eda:	e8 47 e4 f6 ff       	call   83f4326 <_ZN5MySQL4execEb>
 8485edf:	83 f0 01             	xor    $0x1,%eax
 8485ee2:	84 c0                	test   %al,%al
 8485ee4:	74 3d                	je     8485f23 <_ZN15CDungeonJobNode8InsertDBERK10DungeonKeyi+0x123>
 8485ee6:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8485eed:	00 
 8485eee:	c7 44 24 08 77 01 00 	movl   $0x177,0x8(%esp)
 8485ef5:	00 
 8485ef6:	c7 44 24 04 40 56 c7 	movl   $0x8c75640,0x4(%esp)
 8485efd:	08 
 8485efe:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8485f01:	89 04 24             	mov    %eax,(%esp)
 8485f04:	e8 0f 98 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8485f09:	c7 44 24 04 28 46 c7 	movl   $0x8c74628,0x4(%esp)
 8485f10:	08 
 8485f11:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8485f14:	89 04 24             	mov    %eax,(%esp)
 8485f17:	e8 6c 98 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8485f1c:	b8 00 00 00 00       	mov    $0x0,%eax
 8485f21:	eb 5c                	jmp    8485f7f <_ZN15CDungeonJobNode8InsertDBERK10DungeonKeyi+0x17f>
 8485f23:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8485f26:	89 04 24             	mov    %eax,(%esp)
 8485f29:	e8 8a 09 00 00       	call   84868b8 <_ZN5Skill5ResetEv>
 8485f2e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8485f31:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8485f38:	00 
 8485f39:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8485f3c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485f40:	89 04 24             	mov    %eax,(%esp)
 8485f43:	e8 32 1e 00 00       	call   8487d7a <_ZNSt17_Rb_tree_iteratorISt4pairIKi5SkillEEppEi>
 8485f48:	83 ec 04             	sub    $0x4,%esp
 8485f4b:	8b 55 08             	mov    0x8(%ebp),%edx
 8485f4e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8485f51:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485f55:	89 04 24             	mov    %eax,(%esp)
 8485f58:	e8 59 11 00 00       	call   84870b6 <_ZNSt3mapIi5SkillSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8485f5d:	83 ec 04             	sub    $0x4,%esp
 8485f60:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8485f63:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485f67:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8485f6a:	89 04 24             	mov    %eax,(%esp)
 8485f6d:	e8 6a 11 00 00       	call   84870dc <_ZNKSt17_Rb_tree_iteratorISt4pairIKi5SkillEEneERKS4_>
 8485f72:	84 c0                	test   %al,%al
 8485f74:	0f 85 a9 fe ff ff    	jne    8485e23 <_ZN15CDungeonJobNode8InsertDBERK10DungeonKeyi+0x23>
 8485f7a:	b8 01 00 00 00       	mov    $0x1,%eax
 8485f7f:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8485f82:	83 c4 00             	add    $0x0,%esp
 8485f85:	5b                   	pop    %ebx
 8485f86:	5e                   	pop    %esi
 8485f87:	5f                   	pop    %edi
 8485f88:	5d                   	pop    %ebp
 8485f89:	c3                   	ret

```

```c
// CDungeonJobNode::InsertDB @ 0x8485e00

/* CDungeonJobNode::InsertDB(DungeonKey const&, int) */

undefined4 __thiscall
CDungeonJobNode::InsertDB(CDungeonJobNode *this,DungeonKey *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  CEnvironment *this_00;
  undefined4 uVar6;
  map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>> local_44 [4];
  map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>> local_40 [4];
  cMyTrace local_3c [16];
  _Rb_tree_iterator<std::pair<int_const,Skill>> local_2c [4];
  Skill *local_28;
  undefined4 local_24;
  MySQL *local_20;
  
  std::map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>>::begin(local_44);
  do {
    std::map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>>::end(local_40);
    cVar3 = std::_Rb_tree_iterator<std::pair<int_const,Skill>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,Skill>> *)local_44,
                       (_Rb_tree_iterator *)local_40);
    if (cVar3 == '\0') {
      return 1;
    }
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,Skill>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,Skill>> *)local_44);
    local_28 = (Skill *)(iVar4 + 4);
    puVar5 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,Skill>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,Skill>> *)local_44);
    local_24 = *puVar5;
    if (*(int *)(local_28 + 0xc) != 0) {
      local_20 = (MySQL *)GetMySqLInstance();
      uVar1 = *(undefined4 *)(param_1 + 4);
      uVar2 = *(undefined4 *)param_1;
      this_00 = (CEnvironment *)G_CEnvironment();
      uVar6 = CEnvironment::get_channel_no(this_00);
      MySQL::set_query(local_20,
                       "inSert into log_dungeon_skill(skill_cool_time,skill_use,skill_count,channel_no,dungeon_index,dungeon_diff,charac_job,charac_grow,skill_index,last_time) values(%d,%d,%d,%d,%d,%d,%d,%d,%d,NOW())"
                       ,*(undefined4 *)(local_28 + 4),*(undefined4 *)(local_28 + 8),
                       *(undefined4 *)local_28,uVar6,uVar2,uVar1,param_2,0,local_24);
      cVar3 = MySQL::exec(local_20,true);
      if (cVar3 != '\x01') {
        cMyTrace::cMyTrace(local_3c,"bool CDungeonJobNode::InsertDB(const DungeonKey&, int)",0x177,5
                          );
        cMyTrace::operator()(local_3c,"inSert log_dungeon_skill failed");
        return 0;
      }
    }
    Skill::Reset(local_28);
    std::_Rb_tree_iterator<std::pair<int_const,Skill>>::operator++(local_2c,(int)local_44);
  } while( true );
}

```

---

## InsertSkillKey

```asm
// === 08484a86 CDungeonJobNode::InsertSkillKey  [0x08484a86-0x8484bab] ===
 8484a86:	55                   	push   %ebp
 8484a87:	89 e5                	mov    %esp,%ebp
 8484a89:	56                   	push   %esi
 8484a8a:	53                   	push   %ebx
 8484a8b:	83 ec 60             	sub    $0x60,%esp
 8484a8e:	8b 55 08             	mov    0x8(%ebp),%edx
 8484a91:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8484a94:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484a98:	89 04 24             	mov    %eax,(%esp)
 8484a9b:	e8 16 26 00 00       	call   84870b6 <_ZNSt3mapIi5SkillSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8484aa0:	83 ec 04             	sub    $0x4,%esp
 8484aa3:	8b 55 08             	mov    0x8(%ebp),%edx
 8484aa6:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8484aa9:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 8484aac:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8484ab0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484ab4:	89 04 24             	mov    %eax,(%esp)
 8484ab7:	e8 ce 25 00 00       	call   848708a <_ZNSt3mapIi5SkillSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8484abc:	83 ec 04             	sub    $0x4,%esp
 8484abf:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8484ac2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8484ac6:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8484ac9:	89 04 24             	mov    %eax,(%esp)
 8484acc:	e8 0b 26 00 00       	call   84870dc <_ZNKSt17_Rb_tree_iteratorISt4pairIKi5SkillEEneERKS4_>
 8484ad1:	84 c0                	test   %al,%al
 8484ad3:	74 0a                	je     8484adf <_ZN15CDungeonJobNode14InsertSkillKeyEi+0x59>
 8484ad5:	b8 00 00 00 00       	mov    $0x0,%eax
 8484ada:	e9 c2 00 00 00       	jmp    8484ba1 <_ZN15CDungeonJobNode14InsertSkillKeyEi+0x11b>
 8484adf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8484ae2:	89 04 24             	mov    %eax,(%esp)
 8484ae5:	e8 fa 1d 00 00       	call   84868e4 <_ZN5SkillC1Ev>
 8484aea:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8484aed:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8484af0:	89 54 24 08          	mov    %edx,0x8(%esp)
 8484af4:	8d 55 0c             	lea    0xc(%ebp),%edx
 8484af7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484afb:	89 04 24             	mov    %eax,(%esp)
 8484afe:	e8 ed 25 00 00       	call   84870f0 <_ZSt9make_pairIRi5SkillESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 8484b03:	83 ec 04             	sub    $0x4,%esp
 8484b06:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8484b09:	89 44 24 04          	mov    %eax,0x4(%esp)
 8484b0d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8484b10:	89 04 24             	mov    %eax,(%esp)
 8484b13:	e8 1c 26 00 00       	call   8487134 <_ZNSt4pairIKi5SkillEC1IiS1_EEOS_IT_T0_E>
 8484b18:	8b 55 08             	mov    0x8(%ebp),%edx
 8484b1b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8484b1e:	8d 4d c0             	lea    -0x40(%ebp),%ecx
 8484b21:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8484b25:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484b29:	89 04 24             	mov    %eax,(%esp)
 8484b2c:	e8 45 26 00 00       	call   8487176 <_ZNSt3mapIi5SkillSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 8484b31:	83 ec 04             	sub    $0x4,%esp
 8484b34:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8484b37:	89 04 24             	mov    %eax,(%esp)
 8484b3a:	e8 c5 20 00 00       	call   8486c04 <_ZNSt4pairIKi5SkillED1Ev>
 8484b3f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8484b42:	89 04 24             	mov    %eax,(%esp)
 8484b45:	e8 a4 20 00 00       	call   8486bee <_ZNSt4pairIi5SkillED1Ev>
 8484b4a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8484b4d:	89 04 24             	mov    %eax,(%esp)
 8484b50:	e8 fb 1d 00 00       	call   8486950 <_ZN5SkillD1Ev>
 8484b55:	b8 01 00 00 00       	mov    $0x1,%eax
 8484b5a:	eb 45                	jmp    8484ba1 <_ZN15CDungeonJobNode14InsertSkillKeyEi+0x11b>
 8484b5c:	89 d3                	mov    %edx,%ebx
 8484b5e:	89 c6                	mov    %eax,%esi
 8484b60:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8484b63:	89 04 24             	mov    %eax,(%esp)
 8484b66:	e8 99 20 00 00       	call   8486c04 <_ZNSt4pairIKi5SkillED1Ev>
 8484b6b:	89 f0                	mov    %esi,%eax
 8484b6d:	89 da                	mov    %ebx,%edx
 8484b6f:	eb 00                	jmp    8484b71 <_ZN15CDungeonJobNode14InsertSkillKeyEi+0xeb>
 8484b71:	89 d3                	mov    %edx,%ebx
 8484b73:	89 c6                	mov    %eax,%esi
 8484b75:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8484b78:	89 04 24             	mov    %eax,(%esp)
 8484b7b:	e8 6e 20 00 00       	call   8486bee <_ZNSt4pairIi5SkillED1Ev>
 8484b80:	89 f0                	mov    %esi,%eax
 8484b82:	89 da                	mov    %ebx,%edx
 8484b84:	eb 00                	jmp    8484b86 <_ZN15CDungeonJobNode14InsertSkillKeyEi+0x100>
 8484b86:	89 d3                	mov    %edx,%ebx
 8484b88:	89 c6                	mov    %eax,%esi
 8484b8a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8484b8d:	89 04 24             	mov    %eax,(%esp)
 8484b90:	e8 bb 1d 00 00       	call   8486950 <_ZN5SkillD1Ev>
 8484b95:	89 f0                	mov    %esi,%eax
 8484b97:	89 da                	mov    %ebx,%edx
 8484b99:	89 04 24             	mov    %eax,(%esp)
 8484b9c:	e8 af eb 65 00       	call   8ae3750 <_Unwind_Resume>
 8484ba1:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8484ba4:	83 c4 00             	add    $0x0,%esp
 8484ba7:	5b                   	pop    %ebx
 8484ba8:	5e                   	pop    %esi
 8484ba9:	5d                   	pop    %ebp
 8484baa:	c3                   	ret
 8484bab:	90                   	nop

```

```c
// CDungeonJobNode::InsertSkillKey @ 0x8484a86

/* CDungeonJobNode::InsertSkillKey(int) */

bool CDungeonJobNode::InsertSkillKey(int param_1)

{
  char cVar1;
  map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>> local_54 [4];
  _Rb_tree_iterator<std::pair<int_const,Skill>> local_50 [4];
  pair local_4c [8];
  pair<int_const,Skill> local_44 [20];
  pair<int,Skill> local_30 [20];
  Skill local_1c [16];
  
  std::map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>>::end(local_54);
  std::map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>>::find
            ((int *)local_50);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,Skill>>::operator!=
                    (local_50,(_Rb_tree_iterator *)local_54);
  if (cVar1 == '\0') {
    Skill::Skill(local_1c);
                    /* try { // try from 08484afe to 08484b02 has its CatchHandler @ 08484b86 */
    std::make_pair<int&,Skill>((int *)local_30,(Skill *)&stack0x00000008);
                    /* try { // try from 08484b13 to 08484b17 has its CatchHandler @ 08484b71 */
    std::pair<int_const,Skill>::pair<int,Skill>(local_44,local_30);
                    /* try { // try from 08484b2c to 08484b30 has its CatchHandler @ 08484b5c */
    std::map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>>::insert(local_4c);
    std::pair<int_const,Skill>::~pair(local_44);
    std::pair<int,Skill>::~pair(local_30);
    Skill::~Skill(local_1c);
  }
  return cVar1 == '\0';
}

```

---

## UpdateSkill

```asm
// === 08484bac CDungeonJobNode::UpdateSkill  [0x08484bac-0x8484c2f] ===
 8484bac:	55                   	push   %ebp
 8484bad:	89 e5                	mov    %esp,%ebp
 8484baf:	83 ec 28             	sub    $0x28,%esp
 8484bb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8484bb5:	8d 48 1c             	lea    0x1c(%eax),%ecx
 8484bb8:	8b 55 08             	mov    0x8(%ebp),%edx
 8484bbb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8484bbe:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8484bc2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484bc6:	89 04 24             	mov    %eax,(%esp)
 8484bc9:	e8 bc 24 00 00       	call   848708a <_ZNSt3mapIi5SkillSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8484bce:	83 ec 04             	sub    $0x4,%esp
 8484bd1:	8b 55 08             	mov    0x8(%ebp),%edx
 8484bd4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8484bd7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484bdb:	89 04 24             	mov    %eax,(%esp)
 8484bde:	e8 d3 24 00 00       	call   84870b6 <_ZNSt3mapIi5SkillSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8484be3:	83 ec 04             	sub    $0x4,%esp
 8484be6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8484be9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8484bed:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8484bf0:	89 04 24             	mov    %eax,(%esp)
 8484bf3:	e8 aa 25 00 00       	call   84871a2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi5SkillEEeqERKS4_>
 8484bf8:	84 c0                	test   %al,%al
 8484bfa:	74 07                	je     8484c03 <_ZN15CDungeonJobNode11UpdateSkillEP26SIG_DUNGEON_DATA_STATISTIC+0x57>
 8484bfc:	b8 00 00 00 00       	mov    $0x0,%eax
 8484c01:	eb 2b                	jmp    8484c2e <_ZN15CDungeonJobNode11UpdateSkillEP26SIG_DUNGEON_DATA_STATISTIC+0x82>
 8484c03:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8484c06:	89 04 24             	mov    %eax,(%esp)
 8484c09:	e8 a8 25 00 00       	call   84871b6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi5SkillEEptEv>
 8484c0e:	83 c0 04             	add    $0x4,%eax
 8484c11:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8484c14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8484c17:	83 c0 64             	add    $0x64,%eax
 8484c1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8484c1e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8484c21:	89 04 24             	mov    %eax,(%esp)
 8484c24:	e8 d9 1c 00 00       	call   8486902 <_ZN5SkillpLERKS_>
 8484c29:	b8 01 00 00 00       	mov    $0x1,%eax
 8484c2e:	c9                   	leave
 8484c2f:	c3                   	ret

```

```c
// CDungeonJobNode::UpdateSkill @ 0x8484bac

/* CDungeonJobNode::UpdateSkill(SIG_DUNGEON_DATA_STATISTIC*) */

bool __thiscall
CDungeonJobNode::UpdateSkill(CDungeonJobNode *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,Skill>> local_18 [4];
  map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>> local_14 [4];
  Skill *local_10;
  
  std::map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>>::find
            ((int *)local_18);
  std::map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>>::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,Skill>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,Skill>>::operator->(local_18);
    local_10 = (Skill *)(iVar2 + 4);
    Skill::operator+=(local_10,(Skill *)(param_1 + 100));
  }
  return cVar1 == '\0';
}

```

