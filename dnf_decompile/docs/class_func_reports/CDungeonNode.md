# CDungeonNode

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## InsertDB

```asm
// === 08485ba4 CDungeonNode::InsertDB  [0x08485ba4-0x8485dff] ===
 8485ba4:	55                   	push   %ebp
 8485ba5:	89 e5                	mov    %esp,%ebp
 8485ba7:	57                   	push   %edi
 8485ba8:	56                   	push   %esi
 8485ba9:	53                   	push   %ebx
 8485baa:	83 ec 7c             	sub    $0x7c,%esp
 8485bad:	8b 55 08             	mov    0x8(%ebp),%edx
 8485bb0:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8485bb3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485bb7:	89 04 24             	mov    %eax,(%esp)
 8485bba:	e8 cd 20 00 00       	call   8487c8c <_ZNSt3mapIi7MonsterSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 8485bbf:	83 ec 04             	sub    $0x4,%esp
 8485bc2:	e9 10 01 00 00       	jmp    8485cd7 <_ZN12CDungeonNode8InsertDBERK10DungeonKey+0x133>
 8485bc7:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8485bca:	89 04 24             	mov    %eax,(%esp)
 8485bcd:	e8 a6 1d 00 00       	call   8487978 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi7MonsterEEptEv>
 8485bd2:	83 c0 04             	add    $0x4,%eax
 8485bd5:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8485bd8:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8485bdb:	89 04 24             	mov    %eax,(%esp)
 8485bde:	e8 95 1d 00 00       	call   8487978 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi7MonsterEEptEv>
 8485be3:	8b 00                	mov    (%eax),%eax
 8485be5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8485be8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8485beb:	8b 40 08             	mov    0x8(%eax),%eax
 8485bee:	85 c0                	test   %eax,%eax
 8485bf0:	0f 84 b9 00 00 00    	je     8485caf <_ZN12CDungeonNode8InsertDBERK10DungeonKey+0x10b>
 8485bf6:	e8 7e ff ff ff       	call   8485b79 <_Z16GetMySqLInstancev>
 8485bfb:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8485bfe:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8485c01:	8b 40 04             	mov    0x4(%eax),%eax
 8485c04:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8485c07:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8485c0a:	8b 38                	mov    (%eax),%edi
 8485c0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8485c0f:	8b 70 04             	mov    0x4(%eax),%esi
 8485c12:	8b 45 0c             	mov    0xc(%ebp),%eax
 8485c15:	8b 18                	mov    (%eax),%ebx
 8485c17:	e8 65 65 c4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8485c1c:	89 04 24             	mov    %eax,(%esp)
 8485c1f:	e8 a6 4e cc ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8485c24:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8485c27:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8485c2b:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8485c2f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8485c32:	89 54 24 14          	mov    %edx,0x14(%esp)
 8485c36:	89 74 24 10          	mov    %esi,0x10(%esp)
 8485c3a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8485c3e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8485c42:	c7 44 24 04 a4 44 c7 	movl   $0x8c744a4,0x4(%esp)
 8485c49:	08 
 8485c4a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8485c4d:	89 04 24             	mov    %eax,(%esp)
 8485c50:	e8 6b e5 f6 ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8485c55:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8485c5c:	00 
 8485c5d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8485c60:	89 04 24             	mov    %eax,(%esp)
 8485c63:	e8 be e6 f6 ff       	call   83f4326 <_ZN5MySQL4execEb>
 8485c68:	83 f0 01             	xor    $0x1,%eax
 8485c6b:	84 c0                	test   %al,%al
 8485c6d:	74 40                	je     8485caf <_ZN12CDungeonNode8InsertDBERK10DungeonKey+0x10b>
 8485c6f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8485c76:	00 
 8485c77:	c7 44 24 08 3d 01 00 	movl   $0x13d,0x8(%esp)
 8485c7e:	00 
 8485c7f:	c7 44 24 04 80 56 c7 	movl   $0x8c75680,0x4(%esp)
 8485c86:	08 
 8485c87:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8485c8a:	89 04 24             	mov    %eax,(%esp)
 8485c8d:	e8 86 9a 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8485c92:	c7 44 24 04 40 45 c7 	movl   $0x8c74540,0x4(%esp)
 8485c99:	08 
 8485c9a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8485c9d:	89 04 24             	mov    %eax,(%esp)
 8485ca0:	e8 e3 9a 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8485ca5:	b8 00 00 00 00       	mov    $0x0,%eax
 8485caa:	e9 46 01 00 00       	jmp    8485df5 <_ZN12CDungeonNode8InsertDBERK10DungeonKey+0x251>
 8485caf:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8485cb2:	89 04 24             	mov    %eax,(%esp)
 8485cb5:	e8 9c 0c 00 00       	call   8486956 <_ZN7Monster5ResetEv>
 8485cba:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8485cbd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8485cc4:	00 
 8485cc5:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8485cc8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485ccc:	89 04 24             	mov    %eax,(%esp)
 8485ccf:	e8 de 1f 00 00       	call   8487cb2 <_ZNSt17_Rb_tree_iteratorISt4pairIKi7MonsterEEppEi>
 8485cd4:	83 ec 04             	sub    $0x4,%esp
 8485cd7:	8b 55 08             	mov    0x8(%ebp),%edx
 8485cda:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8485cdd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485ce1:	89 04 24             	mov    %eax,(%esp)
 8485ce4:	e8 cf 19 00 00       	call   84876b8 <_ZNSt3mapIi7MonsterSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8485ce9:	83 ec 04             	sub    $0x4,%esp
 8485cec:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8485cef:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485cf3:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8485cf6:	89 04 24             	mov    %eax,(%esp)
 8485cf9:	e8 e0 19 00 00       	call   84876de <_ZNKSt17_Rb_tree_iteratorISt4pairIKi7MonsterEEneERKS4_>
 8485cfe:	84 c0                	test   %al,%al
 8485d00:	0f 85 c1 fe ff ff    	jne    8485bc7 <_ZN12CDungeonNode8InsertDBERK10DungeonKey+0x23>
 8485d06:	8b 45 08             	mov    0x8(%ebp),%eax
 8485d09:	8d 50 18             	lea    0x18(%eax),%edx
 8485d0c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8485d0f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485d13:	89 04 24             	mov    %eax,(%esp)
 8485d16:	e8 d5 1f 00 00       	call   8487cf0 <_ZNSt3mapIi15CDungeonJobNodeSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 8485d1b:	83 ec 04             	sub    $0x4,%esp
 8485d1e:	eb 57                	jmp    8485d77 <_ZN12CDungeonNode8InsertDBERK10DungeonKey+0x1d3>
 8485d20:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8485d23:	89 04 24             	mov    %eax,(%esp)
 8485d26:	e8 d9 1a 00 00       	call   8487804 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15CDungeonJobNodeEEptEv>
 8485d2b:	83 c0 04             	add    $0x4,%eax
 8485d2e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8485d31:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8485d34:	89 04 24             	mov    %eax,(%esp)
 8485d37:	e8 c8 1a 00 00       	call   8487804 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15CDungeonJobNodeEEptEv>
 8485d3c:	8b 00                	mov    (%eax),%eax
 8485d3e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8485d41:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8485d44:	89 44 24 08          	mov    %eax,0x8(%esp)
 8485d48:	8b 45 0c             	mov    0xc(%ebp),%eax
 8485d4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485d4f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8485d52:	89 04 24             	mov    %eax,(%esp)
 8485d55:	e8 a6 00 00 00       	call   8485e00 <_ZN15CDungeonJobNode8InsertDBERK10DungeonKeyi>
 8485d5a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8485d5d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8485d64:	00 
 8485d65:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8485d68:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485d6c:	89 04 24             	mov    %eax,(%esp)
 8485d6f:	e8 a2 1f 00 00       	call   8487d16 <_ZNSt17_Rb_tree_iteratorISt4pairIKi15CDungeonJobNodeEEppEi>
 8485d74:	83 ec 04             	sub    $0x4,%esp
 8485d77:	8b 45 08             	mov    0x8(%ebp),%eax
 8485d7a:	8d 50 18             	lea    0x18(%eax),%edx
 8485d7d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8485d80:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485d84:	89 04 24             	mov    %eax,(%esp)
 8485d87:	e8 3e 1a 00 00       	call   84877ca <_ZNSt3mapIi15CDungeonJobNodeSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8485d8c:	83 ec 04             	sub    $0x4,%esp
 8485d8f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8485d92:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485d96:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8485d99:	89 04 24             	mov    %eax,(%esp)
 8485d9c:	e8 4f 1a 00 00       	call   84877f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15CDungeonJobNodeEEneERKS4_>
 8485da1:	84 c0                	test   %al,%al
 8485da3:	0f 85 77 ff ff ff    	jne    8485d20 <_ZN12CDungeonNode8InsertDBERK10DungeonKey+0x17c>
 8485da9:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8485db0:	eb 33                	jmp    8485de5 <_ZN12CDungeonNode8InsertDBERK10DungeonKey+0x241>
 8485db2:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8485db6:	0f 95 c0             	setne  %al
 8485db9:	0f b6 c8             	movzbl %al,%ecx
 8485dbc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8485dbf:	8d 50 01             	lea    0x1(%eax),%edx
 8485dc2:	89 d0                	mov    %edx,%eax
 8485dc4:	01 c0                	add    %eax,%eax
 8485dc6:	01 d0                	add    %edx,%eax
 8485dc8:	c1 e0 04             	shl    $0x4,%eax
 8485dcb:	03 45 08             	add    0x8(%ebp),%eax
 8485dce:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8485dd2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8485dd5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485dd9:	89 04 24             	mov    %eax,(%esp)
 8485ddc:	e8 a9 01 00 00       	call   8485f8a <_ZN19CDungeonSuccessNode8InsertDBERK10DungeonKeyb>
 8485de1:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8485de5:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 8485de9:	0f 9e c0             	setle  %al
 8485dec:	84 c0                	test   %al,%al
 8485dee:	75 c2                	jne    8485db2 <_ZN12CDungeonNode8InsertDBERK10DungeonKey+0x20e>
 8485df0:	b8 01 00 00 00       	mov    $0x1,%eax
 8485df5:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8485df8:	83 c4 00             	add    $0x0,%esp
 8485dfb:	5b                   	pop    %ebx
 8485dfc:	5e                   	pop    %esi
 8485dfd:	5f                   	pop    %edi
 8485dfe:	5d                   	pop    %ebp
 8485dff:	c3                   	ret

```

```c
// CDungeonNode::InsertDB @ 0x8485ba4

/* CDungeonNode::InsertDB(DungeonKey const&) */

undefined4 __thiscall CDungeonNode::InsertDB(CDungeonNode *this,DungeonKey *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  CEnvironment *this_00;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
  local_5c [4];
  map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>> local_58 [4];
  map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>> local_54 [4];
  cMyTrace local_50 [16];
  _Rb_tree_iterator<std::pair<int_const,Monster>> local_40 [4];
  map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
  local_3c [4];
  _Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>> local_38 [4];
  Monster *local_34;
  undefined4 local_30;
  MySQL *local_2c;
  CDungeonJobNode *local_28;
  int local_24;
  int local_20;
  
  std::map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>>::begin(local_58)
  ;
  do {
    std::map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>>::end(local_54)
    ;
    cVar5 = std::_Rb_tree_iterator<std::pair<int_const,Monster>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,Monster>> *)local_58,
                       (_Rb_tree_iterator *)local_54);
    if (cVar5 == '\0') {
      std::
      map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>::
      begin(local_5c);
      while( true ) {
        std::
        map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
        ::end(local_3c);
        cVar5 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>> *)local_5c,
                           (_Rb_tree_iterator *)local_3c);
        if (cVar5 == '\0') break;
        iVar8 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>> *)local_5c);
        local_28 = (CDungeonJobNode *)(iVar8 + 4);
        piVar9 = (int *)std::_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>>::operator->
                                  ((_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>> *)
                                   local_5c);
        local_24 = *piVar9;
        CDungeonJobNode::InsertDB(local_28,param_1,local_24);
        std::_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>>::operator++
                  (local_38,(int)local_5c);
      }
      for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
        CDungeonSuccessNode::InsertDB
                  ((CDungeonSuccessNode *)(this + (local_20 + 1) * 0x30),param_1,local_20 != 0);
      }
      return 1;
    }
    iVar8 = std::_Rb_tree_iterator<std::pair<int_const,Monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,Monster>> *)local_58);
    local_34 = (Monster *)(iVar8 + 4);
    puVar6 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,Monster>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,Monster>> *)local_58);
    local_30 = *puVar6;
    if (*(int *)(local_34 + 8) != 0) {
      local_2c = (MySQL *)GetMySqLInstance();
      uVar1 = *(undefined4 *)(local_34 + 4);
      uVar2 = *(undefined4 *)local_34;
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar4 = *(undefined4 *)param_1;
      this_00 = (CEnvironment *)G_CEnvironment();
      uVar7 = CEnvironment::get_channel_no(this_00);
      MySQL::set_query(local_2c,
                       "inSert into log_dungeon_monster(channel_no,dungeon_index,dungeon_diff,monster_index,damage_total,damage_count,last_time) values(%d,%d,%d,%d,%d,%d,NOW())"
                       ,uVar7,uVar4,uVar3,local_30,uVar2,uVar1);
      cVar5 = MySQL::exec(local_2c,true);
      if (cVar5 != '\x01') {
        cMyTrace::cMyTrace(local_50,"bool CDungeonNode::InsertDB(const DungeonKey&)",0x13d,5);
        cMyTrace::operator()(local_50,"inSert log_dungeon_monster failed ");
        return 0;
      }
    }
    Monster::Reset(local_34);
    std::_Rb_tree_iterator<std::pair<int_const,Monster>>::operator++(local_40,(int)local_58);
  } while( true );
}

```

---

## InsertMonsterKey

```asm
// === 084852de CDungeonNode::InsertMonsterKey  [0x084852de-0x8485403] ===
 84852de:	55                   	push   %ebp
 84852df:	89 e5                	mov    %esp,%ebp
 84852e1:	56                   	push   %esi
 84852e2:	53                   	push   %ebx
 84852e3:	83 ec 50             	sub    $0x50,%esp
 84852e6:	8b 55 08             	mov    0x8(%ebp),%edx
 84852e9:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84852ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 84852f0:	89 04 24             	mov    %eax,(%esp)
 84852f3:	e8 c0 23 00 00       	call   84876b8 <_ZNSt3mapIi7MonsterSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 84852f8:	83 ec 04             	sub    $0x4,%esp
 84852fb:	8b 55 08             	mov    0x8(%ebp),%edx
 84852fe:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8485301:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 8485304:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8485308:	89 54 24 04          	mov    %edx,0x4(%esp)
 848530c:	89 04 24             	mov    %eax,(%esp)
 848530f:	e8 78 23 00 00       	call   848768c <_ZNSt3mapIi7MonsterSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8485314:	83 ec 04             	sub    $0x4,%esp
 8485317:	8d 45 bc             	lea    -0x44(%ebp),%eax
 848531a:	89 44 24 04          	mov    %eax,0x4(%esp)
 848531e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8485321:	89 04 24             	mov    %eax,(%esp)
 8485324:	e8 b5 23 00 00       	call   84876de <_ZNKSt17_Rb_tree_iteratorISt4pairIKi7MonsterEEneERKS4_>
 8485329:	84 c0                	test   %al,%al
 848532b:	74 0a                	je     8485337 <_ZN12CDungeonNode16InsertMonsterKeyEi+0x59>
 848532d:	b8 00 00 00 00       	mov    $0x0,%eax
 8485332:	e9 c2 00 00 00       	jmp    84853f9 <_ZN12CDungeonNode16InsertMonsterKeyEi+0x11b>
 8485337:	8d 45 ec             	lea    -0x14(%ebp),%eax
 848533a:	89 04 24             	mov    %eax,(%esp)
 848533d:	e8 36 16 00 00       	call   8486978 <_ZN7MonsterC1Ev>
 8485342:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8485345:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8485348:	89 54 24 08          	mov    %edx,0x8(%esp)
 848534c:	8d 55 0c             	lea    0xc(%ebp),%edx
 848534f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485353:	89 04 24             	mov    %eax,(%esp)
 8485356:	e8 97 23 00 00       	call   84876f2 <_ZSt9make_pairIRi7MonsterESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 848535b:	83 ec 04             	sub    $0x4,%esp
 848535e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8485361:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485365:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8485368:	89 04 24             	mov    %eax,(%esp)
 848536b:	e8 c6 23 00 00       	call   8487736 <_ZNSt4pairIKi7MonsterEC1IiS1_EEOS_IT_T0_E>
 8485370:	8b 55 08             	mov    0x8(%ebp),%edx
 8485373:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8485376:	8d 4d cc             	lea    -0x34(%ebp),%ecx
 8485379:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 848537d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485381:	89 04 24             	mov    %eax,(%esp)
 8485384:	e8 e9 23 00 00       	call   8487772 <_ZNSt3mapIi7MonsterSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 8485389:	83 ec 04             	sub    $0x4,%esp
 848538c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 848538f:	89 04 24             	mov    %eax,(%esp)
 8485392:	e8 27 19 00 00       	call   8486cbe <_ZNSt4pairIKi7MonsterED1Ev>
 8485397:	8d 45 dc             	lea    -0x24(%ebp),%eax
 848539a:	89 04 24             	mov    %eax,(%esp)
 848539d:	e8 06 19 00 00       	call   8486ca8 <_ZNSt4pairIi7MonsterED1Ev>
 84853a2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84853a5:	89 04 24             	mov    %eax,(%esp)
 84853a8:	e8 23 16 00 00       	call   84869d0 <_ZN7MonsterD1Ev>
 84853ad:	b8 01 00 00 00       	mov    $0x1,%eax
 84853b2:	eb 45                	jmp    84853f9 <_ZN12CDungeonNode16InsertMonsterKeyEi+0x11b>
 84853b4:	89 d3                	mov    %edx,%ebx
 84853b6:	89 c6                	mov    %eax,%esi
 84853b8:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84853bb:	89 04 24             	mov    %eax,(%esp)
 84853be:	e8 fb 18 00 00       	call   8486cbe <_ZNSt4pairIKi7MonsterED1Ev>
 84853c3:	89 f0                	mov    %esi,%eax
 84853c5:	89 da                	mov    %ebx,%edx
 84853c7:	eb 00                	jmp    84853c9 <_ZN12CDungeonNode16InsertMonsterKeyEi+0xeb>
 84853c9:	89 d3                	mov    %edx,%ebx
 84853cb:	89 c6                	mov    %eax,%esi
 84853cd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84853d0:	89 04 24             	mov    %eax,(%esp)
 84853d3:	e8 d0 18 00 00       	call   8486ca8 <_ZNSt4pairIi7MonsterED1Ev>
 84853d8:	89 f0                	mov    %esi,%eax
 84853da:	89 da                	mov    %ebx,%edx
 84853dc:	eb 00                	jmp    84853de <_ZN12CDungeonNode16InsertMonsterKeyEi+0x100>
 84853de:	89 d3                	mov    %edx,%ebx
 84853e0:	89 c6                	mov    %eax,%esi
 84853e2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84853e5:	89 04 24             	mov    %eax,(%esp)
 84853e8:	e8 e3 15 00 00       	call   84869d0 <_ZN7MonsterD1Ev>
 84853ed:	89 f0                	mov    %esi,%eax
 84853ef:	89 da                	mov    %ebx,%edx
 84853f1:	89 04 24             	mov    %eax,(%esp)
 84853f4:	e8 57 e3 65 00       	call   8ae3750 <_Unwind_Resume>
 84853f9:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84853fc:	83 c4 00             	add    $0x0,%esp
 84853ff:	5b                   	pop    %ebx
 8485400:	5e                   	pop    %esi
 8485401:	5d                   	pop    %ebp
 8485402:	c3                   	ret
 8485403:	90                   	nop

```

```c
// CDungeonNode::InsertMonsterKey @ 0x84852de

/* CDungeonNode::InsertMonsterKey(int) */

bool CDungeonNode::InsertMonsterKey(int param_1)

{
  char cVar1;
  map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>> local_48 [4];
  _Rb_tree_iterator<std::pair<int_const,Monster>> local_44 [4];
  pair local_40 [8];
  pair<int_const,Monster> local_38 [16];
  pair<int,Monster> local_28 [16];
  Monster local_18 [12];
  
  std::map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>>::end(local_48);
  std::map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>>::find
            ((int *)local_44);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,Monster>>::operator!=
                    (local_44,(_Rb_tree_iterator *)local_48);
  if (cVar1 == '\0') {
    Monster::Monster(local_18);
                    /* try { // try from 08485356 to 0848535a has its CatchHandler @ 084853de */
    std::make_pair<int&,Monster>((int *)local_28,(Monster *)&stack0x00000008);
                    /* try { // try from 0848536b to 0848536f has its CatchHandler @ 084853c9 */
    std::pair<int_const,Monster>::pair<int,Monster>(local_38,local_28);
                    /* try { // try from 08485384 to 08485388 has its CatchHandler @ 084853b4 */
    std::map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>>::insert
              (local_40);
    std::pair<int_const,Monster>::~pair(local_38);
    std::pair<int,Monster>::~pair(local_28);
    Monster::~Monster(local_18);
  }
  return cVar1 == '\0';
}

```

---

## InsertSkillKey

```asm
// === 08485404 CDungeonNode::InsertSkillKey  [0x08485404-0x8485563] ===
 8485404:	55                   	push   %ebp
 8485405:	89 e5                	mov    %esp,%ebp
 8485407:	56                   	push   %esi
 8485408:	53                   	push   %ebx
 8485409:	83 c4 80             	add    $0xffffff80,%esp
 848540c:	8b 45 08             	mov    0x8(%ebp),%eax
 848540f:	8d 48 18             	lea    0x18(%eax),%ecx
 8485412:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8485415:	8d 55 10             	lea    0x10(%ebp),%edx
 8485418:	89 54 24 08          	mov    %edx,0x8(%esp)
 848541c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8485420:	89 04 24             	mov    %eax,(%esp)
 8485423:	e8 76 23 00 00       	call   848779e <_ZNSt3mapIi15CDungeonJobNodeSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8485428:	83 ec 04             	sub    $0x4,%esp
 848542b:	8b 45 08             	mov    0x8(%ebp),%eax
 848542e:	8d 50 18             	lea    0x18(%eax),%edx
 8485431:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8485434:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485438:	89 04 24             	mov    %eax,(%esp)
 848543b:	e8 8a 23 00 00       	call   84877ca <_ZNSt3mapIi15CDungeonJobNodeSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8485440:	83 ec 04             	sub    $0x4,%esp
 8485443:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8485446:	89 44 24 04          	mov    %eax,0x4(%esp)
 848544a:	8d 45 ac             	lea    -0x54(%ebp),%eax
 848544d:	89 04 24             	mov    %eax,(%esp)
 8485450:	e8 9b 23 00 00       	call   84877f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15CDungeonJobNodeEEneERKS4_>
 8485455:	84 c0                	test   %al,%al
 8485457:	74 28                	je     8485481 <_ZN12CDungeonNode14InsertSkillKeyEiiii+0x7d>
 8485459:	8d 45 ac             	lea    -0x54(%ebp),%eax
 848545c:	89 04 24             	mov    %eax,(%esp)
 848545f:	e8 a0 23 00 00       	call   8487804 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15CDungeonJobNodeEEptEv>
 8485464:	83 c0 04             	add    $0x4,%eax
 8485467:	89 45 f4             	mov    %eax,-0xc(%ebp)
 848546a:	8b 45 0c             	mov    0xc(%ebp),%eax
 848546d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485471:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8485474:	89 04 24             	mov    %eax,(%esp)
 8485477:	e8 0a f6 ff ff       	call   8484a86 <_ZN15CDungeonJobNode14InsertSkillKeyEi>
 848547c:	e9 d4 00 00 00       	jmp    8485555 <_ZN12CDungeonNode14InsertSkillKeyEiiii+0x151>
 8485481:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8485484:	89 04 24             	mov    %eax,(%esp)
 8485487:	e8 5c 18 00 00       	call   8486ce8 <_ZN15CDungeonJobNodeC1Ev>
 848548c:	8b 45 0c             	mov    0xc(%ebp),%eax
 848548f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485493:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8485496:	89 04 24             	mov    %eax,(%esp)
 8485499:	e8 e8 f5 ff ff       	call   8484a86 <_ZN15CDungeonJobNode14InsertSkillKeyEi>
 848549e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84854a1:	8d 55 94             	lea    -0x6c(%ebp),%edx
 84854a4:	89 54 24 08          	mov    %edx,0x8(%esp)
 84854a8:	8d 55 10             	lea    0x10(%ebp),%edx
 84854ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 84854af:	89 04 24             	mov    %eax,(%esp)
 84854b2:	e8 d4 23 00 00       	call   848788b <_ZSt9make_pairIRiR15CDungeonJobNodeESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 84854b7:	83 ec 04             	sub    $0x4,%esp
 84854ba:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84854bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84854c1:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84854c4:	89 04 24             	mov    %eax,(%esp)
 84854c7:	e8 1e 24 00 00       	call   84878ea <_ZNSt4pairIKi15CDungeonJobNodeEC1IiS1_EEOS_IT_T0_E>
 84854cc:	8b 45 08             	mov    0x8(%ebp),%eax
 84854cf:	8d 48 18             	lea    0x18(%eax),%ecx
 84854d2:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84854d5:	8d 55 bc             	lea    -0x44(%ebp),%edx
 84854d8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84854dc:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84854e0:	89 04 24             	mov    %eax,(%esp)
 84854e3:	e8 3c 24 00 00       	call   8487924 <_ZNSt3mapIi15CDungeonJobNodeSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 84854e8:	83 ec 04             	sub    $0x4,%esp
 84854eb:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84854ee:	89 04 24             	mov    %eax,(%esp)
 84854f1:	e8 30 18 00 00       	call   8486d26 <_ZNSt4pairIKi15CDungeonJobNodeED1Ev>
 84854f6:	eb 2a                	jmp    8485522 <_ZN12CDungeonNode14InsertSkillKeyEiiii+0x11e>
 84854f8:	89 d3                	mov    %edx,%ebx
 84854fa:	89 c6                	mov    %eax,%esi
 84854fc:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84854ff:	89 04 24             	mov    %eax,(%esp)
 8485502:	e8 1f 18 00 00       	call   8486d26 <_ZNSt4pairIKi15CDungeonJobNodeED1Ev>
 8485507:	89 f0                	mov    %esi,%eax
 8485509:	89 da                	mov    %ebx,%edx
 848550b:	eb 00                	jmp    848550d <_ZN12CDungeonNode14InsertSkillKeyEiiii+0x109>
 848550d:	89 d3                	mov    %edx,%ebx
 848550f:	89 c6                	mov    %eax,%esi
 8485511:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8485514:	89 04 24             	mov    %eax,(%esp)
 8485517:	e8 f4 17 00 00       	call   8486d10 <_ZNSt4pairIi15CDungeonJobNodeED1Ev>
 848551c:	89 f0                	mov    %esi,%eax
 848551e:	89 da                	mov    %ebx,%edx
 8485520:	eb 0d                	jmp    848552f <_ZN12CDungeonNode14InsertSkillKeyEiiii+0x12b>
 8485522:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8485525:	89 04 24             	mov    %eax,(%esp)
 8485528:	e8 e3 17 00 00       	call   8486d10 <_ZNSt4pairIi15CDungeonJobNodeED1Ev>
 848552d:	eb 1b                	jmp    848554a <_ZN12CDungeonNode14InsertSkillKeyEiiii+0x146>
 848552f:	89 d3                	mov    %edx,%ebx
 8485531:	89 c6                	mov    %eax,%esi
 8485533:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8485536:	89 04 24             	mov    %eax,(%esp)
 8485539:	e8 be 17 00 00       	call   8486cfc <_ZN15CDungeonJobNodeD1Ev>
 848553e:	89 f0                	mov    %esi,%eax
 8485540:	89 da                	mov    %ebx,%edx
 8485542:	89 04 24             	mov    %eax,(%esp)
 8485545:	e8 06 e2 65 00       	call   8ae3750 <_Unwind_Resume>
 848554a:	8d 45 94             	lea    -0x6c(%ebp),%eax
 848554d:	89 04 24             	mov    %eax,(%esp)
 8485550:	e8 a7 17 00 00       	call   8486cfc <_ZN15CDungeonJobNodeD1Ev>
 8485555:	b8 01 00 00 00       	mov    $0x1,%eax
 848555a:	8d 65 f8             	lea    -0x8(%ebp),%esp
 848555d:	83 c4 00             	add    $0x0,%esp
 8485560:	5b                   	pop    %ebx
 8485561:	5e                   	pop    %esi
 8485562:	5d                   	pop    %ebp
 8485563:	c3                   	ret

```

```c
// CDungeonNode::InsertSkillKey @ 0x8485404

/* CDungeonNode::InsertSkillKey(int, int, int, int) */

undefined4 CDungeonNode::InsertSkillKey(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  CDungeonJobNode local_70 [24];
  _Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>> local_58 [4];
  map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
  local_54 [4];
  pair local_50 [8];
  pair<int_const,CDungeonJobNode> local_48 [28];
  pair<int,CDungeonJobNode> local_2c [28];
  int local_10;
  
  std::map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
  ::find((int *)local_58);
  std::map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
  ::end(local_54);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>>::operator!=
                    (local_58,(_Rb_tree_iterator *)local_54);
  if (cVar1 == '\0') {
    CDungeonJobNode::CDungeonJobNode(local_70);
                    /* try { // try from 08485499 to 084854b6 has its CatchHandler @ 0848552f */
    CDungeonJobNode::InsertSkillKey((int)local_70);
    std::make_pair<int&,CDungeonJobNode&>((int *)local_2c,(CDungeonJobNode *)&param_3);
                    /* try { // try from 084854c7 to 084854cb has its CatchHandler @ 0848550d */
    std::pair<int_const,CDungeonJobNode>::pair<int,CDungeonJobNode>(local_48,local_2c);
                    /* try { // try from 084854e3 to 084854e7 has its CatchHandler @ 084854f8 */
    std::
    map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>::
    insert(local_50);
                    /* try { // try from 084854f1 to 084854f5 has its CatchHandler @ 0848550d */
    std::pair<int_const,CDungeonJobNode>::~pair(local_48);
                    /* try { // try from 08485528 to 0848552c has its CatchHandler @ 0848552f */
    std::pair<int,CDungeonJobNode>::~pair(local_2c);
    CDungeonJobNode::~CDungeonJobNode(local_70);
  }
  else {
    local_10 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>>::operator->(local_58);
    local_10 = local_10 + 4;
    CDungeonJobNode::InsertSkillKey(local_10);
  }
  return 1;
}

```

---

## UpdateCharacter

```asm
// === 08485564 CDungeonNode::UpdateCharacter  [0x08485564-0x8485599] ===
 8485564:	55                   	push   %ebp
 8485565:	89 e5                	mov    %esp,%ebp
 8485567:	83 ec 18             	sub    $0x18,%esp
 848556a:	8b 45 0c             	mov    0xc(%ebp),%eax
 848556d:	0f b6 40 20          	movzbl 0x20(%eax),%eax
 8485571:	0f b6 c0             	movzbl %al,%eax
 8485574:	8d 50 01             	lea    0x1(%eax),%edx
 8485577:	89 d0                	mov    %edx,%eax
 8485579:	01 c0                	add    %eax,%eax
 848557b:	01 d0                	add    %edx,%eax
 848557d:	c1 e0 04             	shl    $0x4,%eax
 8485580:	03 45 08             	add    0x8(%ebp),%eax
 8485583:	8b 55 0c             	mov    0xc(%ebp),%edx
 8485586:	89 54 24 04          	mov    %edx,0x4(%esp)
 848558a:	89 04 24             	mov    %eax,(%esp)
 848558d:	e8 4c fc ff ff       	call   84851de <_ZN19CDungeonSuccessNode15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC>
 8485592:	b8 01 00 00 00       	mov    $0x1,%eax
 8485597:	c9                   	leave
 8485598:	c3                   	ret
 8485599:	90                   	nop

```

```c
// CDungeonNode::UpdateCharacter @ 0x8485564

/* CDungeonNode::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*) */

undefined4 __thiscall
CDungeonNode::UpdateCharacter(CDungeonNode *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

{
  CDungeonSuccessNode::UpdateCharacter
            ((CDungeonSuccessNode *)(this + ((byte)param_1[0x20] + 1) * 0x30),param_1);
  return 1;
}

```

---

## UpdateMonster

```asm
// === 08485628 CDungeonNode::UpdateMonster  [0x08485628-0x84856ab] ===
 8485628:	55                   	push   %ebp
 8485629:	89 e5                	mov    %esp,%ebp
 848562b:	83 ec 28             	sub    $0x28,%esp
 848562e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8485631:	8d 48 18             	lea    0x18(%eax),%ecx
 8485634:	8b 55 08             	mov    0x8(%ebp),%edx
 8485637:	8d 45 ec             	lea    -0x14(%ebp),%eax
 848563a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 848563e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485642:	89 04 24             	mov    %eax,(%esp)
 8485645:	e8 42 20 00 00       	call   848768c <_ZNSt3mapIi7MonsterSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 848564a:	83 ec 04             	sub    $0x4,%esp
 848564d:	8b 55 08             	mov    0x8(%ebp),%edx
 8485650:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8485653:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485657:	89 04 24             	mov    %eax,(%esp)
 848565a:	e8 59 20 00 00       	call   84876b8 <_ZNSt3mapIi7MonsterSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 848565f:	83 ec 04             	sub    $0x4,%esp
 8485662:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8485665:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485669:	8d 45 ec             	lea    -0x14(%ebp),%eax
 848566c:	89 04 24             	mov    %eax,(%esp)
 848566f:	e8 f0 22 00 00       	call   8487964 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi7MonsterEEeqERKS4_>
 8485674:	84 c0                	test   %al,%al
 8485676:	74 07                	je     848567f <_ZN12CDungeonNode13UpdateMonsterEP26SIG_DUNGEON_DATA_STATISTIC+0x57>
 8485678:	b8 00 00 00 00       	mov    $0x0,%eax
 848567d:	eb 2b                	jmp    84856aa <_ZN12CDungeonNode13UpdateMonsterEP26SIG_DUNGEON_DATA_STATISTIC+0x82>
 848567f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8485682:	89 04 24             	mov    %eax,(%esp)
 8485685:	e8 ee 22 00 00       	call   8487978 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi7MonsterEEptEv>
 848568a:	83 c0 04             	add    $0x4,%eax
 848568d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8485690:	8b 45 0c             	mov    0xc(%ebp),%eax
 8485693:	83 c0 74             	add    $0x74,%eax
 8485696:	89 44 24 04          	mov    %eax,0x4(%esp)
 848569a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848569d:	89 04 24             	mov    %eax,(%esp)
 84856a0:	e8 f1 12 00 00       	call   8486996 <_ZN7MonsterpLERKS_>
 84856a5:	b8 01 00 00 00       	mov    $0x1,%eax
 84856aa:	c9                   	leave
 84856ab:	c3                   	ret

```

```c
// CDungeonNode::UpdateMonster @ 0x8485628

/* CDungeonNode::UpdateMonster(SIG_DUNGEON_DATA_STATISTIC*) */

bool __thiscall CDungeonNode::UpdateMonster(CDungeonNode *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,Monster>> local_18 [4];
  map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>> local_14 [4];
  Monster *local_10;
  
  std::map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>>::find
            ((int *)local_18);
  std::map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>>::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,Monster>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,Monster>>::operator->(local_18);
    local_10 = (Monster *)(iVar2 + 4);
    Monster::operator+=(local_10,(Monster *)(param_1 + 0x74));
  }
  return cVar1 == '\0';
}

```

---

## UpdateSkill

```asm
// === 0848559a CDungeonNode::UpdateSkill  [0x0848559a-0x8485627] ===
 848559a:	55                   	push   %ebp
 848559b:	89 e5                	mov    %esp,%ebp
 848559d:	83 ec 28             	sub    $0x28,%esp
 84855a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84855a3:	8b 40 10             	mov    0x10(%eax),%eax
 84855a6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84855a9:	8b 45 08             	mov    0x8(%ebp),%eax
 84855ac:	8d 48 18             	lea    0x18(%eax),%ecx
 84855af:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84855b2:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84855b5:	89 54 24 08          	mov    %edx,0x8(%esp)
 84855b9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84855bd:	89 04 24             	mov    %eax,(%esp)
 84855c0:	e8 d9 21 00 00       	call   848779e <_ZNSt3mapIi15CDungeonJobNodeSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 84855c5:	83 ec 04             	sub    $0x4,%esp
 84855c8:	8b 45 08             	mov    0x8(%ebp),%eax
 84855cb:	8d 50 18             	lea    0x18(%eax),%edx
 84855ce:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84855d1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84855d5:	89 04 24             	mov    %eax,(%esp)
 84855d8:	e8 ed 21 00 00       	call   84877ca <_ZNSt3mapIi15CDungeonJobNodeSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 84855dd:	83 ec 04             	sub    $0x4,%esp
 84855e0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84855e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84855e7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84855ea:	89 04 24             	mov    %eax,(%esp)
 84855ed:	e8 5e 23 00 00       	call   8487950 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15CDungeonJobNodeEEeqERKS4_>
 84855f2:	84 c0                	test   %al,%al
 84855f4:	74 07                	je     84855fd <_ZN12CDungeonNode11UpdateSkillEP26SIG_DUNGEON_DATA_STATISTIC+0x63>
 84855f6:	b8 00 00 00 00       	mov    $0x0,%eax
 84855fb:	eb 28                	jmp    8485625 <_ZN12CDungeonNode11UpdateSkillEP26SIG_DUNGEON_DATA_STATISTIC+0x8b>
 84855fd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8485600:	89 04 24             	mov    %eax,(%esp)
 8485603:	e8 fc 21 00 00       	call   8487804 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15CDungeonJobNodeEEptEv>
 8485608:	83 c0 04             	add    $0x4,%eax
 848560b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 848560e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8485611:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485615:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8485618:	89 04 24             	mov    %eax,(%esp)
 848561b:	e8 8c f5 ff ff       	call   8484bac <_ZN15CDungeonJobNode11UpdateSkillEP26SIG_DUNGEON_DATA_STATISTIC>
 8485620:	b8 01 00 00 00       	mov    $0x1,%eax
 8485625:	c9                   	leave
 8485626:	c3                   	ret
 8485627:	90                   	nop

```

```c
// CDungeonNode::UpdateSkill @ 0x848559a

/* CDungeonNode::UpdateSkill(SIG_DUNGEON_DATA_STATISTIC*) */

bool __thiscall CDungeonNode::UpdateSkill(CDungeonNode *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>> local_1c [4];
  undefined4 local_18;
  map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
  local_14 [4];
  CDungeonJobNode *local_10;
  
  local_18 = *(undefined4 *)(param_1 + 0x10);
  std::map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
  ::find((int *)local_1c);
  std::map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>>::operator==
                    (local_1c,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>>::operator->(local_1c);
    local_10 = (CDungeonJobNode *)(iVar2 + 4);
    CDungeonJobNode::UpdateSkill(local_10,param_1);
  }
  return cVar1 == '\0';
}

```

