# QuestParameterScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## getRewardExp

```asm
// === 08a6bd86 QuestParameterScript::getRewardExp  [0x08a6bd86-0x8a6bda5] ===
 8a6bd86:	55                   	push   %ebp
 8a6bd87:	89 e5                	mov    %esp,%ebp
 8a6bd89:	83 ec 18             	sub    $0x18,%esp
 8a6bd8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6bd8f:	8b 55 08             	mov    0x8(%ebp),%edx
 8a6bd92:	83 c2 24             	add    $0x24,%edx
 8a6bd95:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6bd99:	89 14 24             	mov    %edx,(%esp)
 8a6bd9c:	e8 d1 ae 62 ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 8a6bda1:	8b 00                	mov    (%eax),%eax
 8a6bda3:	c9                   	leave
 8a6bda4:	c3                   	ret
 8a6bda5:	90                   	nop

```

```c
// QuestParameterScript::getRewardExp @ 0x8a6bd86

/* QuestParameterScript::getRewardExp(int) */

undefined4 __thiscall QuestParameterScript::getRewardExp(QuestParameterScript *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           std::vector<int,std::allocator<int>>::at
                     ((vector<int,std::allocator<int>> *)(this + 0x24),param_1);
  return *puVar1;
}

```

---

## getRewardGold

```asm
// === 08a6bda6 QuestParameterScript::getRewardGold  [0x08a6bda6-0x8a6bdc5] ===
 8a6bda6:	55                   	push   %ebp
 8a6bda7:	89 e5                	mov    %esp,%ebp
 8a6bda9:	83 ec 18             	sub    $0x18,%esp
 8a6bdac:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6bdaf:	8b 55 08             	mov    0x8(%ebp),%edx
 8a6bdb2:	83 c2 30             	add    $0x30,%edx
 8a6bdb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6bdb9:	89 14 24             	mov    %edx,(%esp)
 8a6bdbc:	e8 b1 ae 62 ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 8a6bdc1:	8b 00                	mov    (%eax),%eax
 8a6bdc3:	c9                   	leave
 8a6bdc4:	c3                   	ret
 8a6bdc5:	90                   	nop

```

```c
// QuestParameterScript::getRewardGold @ 0x8a6bda6

/* QuestParameterScript::getRewardGold(int) */

undefined4 __thiscall QuestParameterScript::getRewardGold(QuestParameterScript *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           std::vector<int,std::allocator<int>>::at
                     ((vector<int,std::allocator<int>> *)(this + 0x30),param_1);
  return *puVar1;
}

```

---

## getRewardLevel

```asm
// === 08a6bdc6 QuestParameterScript::getRewardLevel  [0x08a6bdc6-0x8a6be65] ===
 8a6bdc6:	55                   	push   %ebp
 8a6bdc7:	89 e5                	mov    %esp,%ebp
 8a6bdc9:	83 ec 28             	sub    $0x28,%esp
 8a6bdcc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a6bdd3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6bdd6:	8d 50 3c             	lea    0x3c(%eax),%edx
 8a6bdd9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a6bddc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6bde0:	89 04 24             	mov    %eax,(%esp)
 8a6bde3:	e8 b8 61 6e ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 8a6bde8:	83 ec 04             	sub    $0x4,%esp
 8a6bdeb:	eb 45                	jmp    8a6be32 <_ZN20QuestParameterScript14getRewardLevelEi+0x6c>
 8a6bded:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a6bdf0:	89 04 24             	mov    %eax,(%esp)
 8a6bdf3:	e8 48 15 66 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8a6bdf8:	8b 40 04             	mov    0x4(%eax),%eax
 8a6bdfb:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8a6bdfe:	0f 9e c0             	setle  %al
 8a6be01:	84 c0                	test   %al,%al
 8a6be03:	74 10                	je     8a6be15 <_ZN20QuestParameterScript14getRewardLevelEi+0x4f>
 8a6be05:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a6be08:	89 04 24             	mov    %eax,(%esp)
 8a6be0b:	e8 30 15 66 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8a6be10:	8b 00                	mov    (%eax),%eax
 8a6be12:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8a6be15:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a6be18:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8a6be1f:	00 
 8a6be20:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8a6be23:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6be27:	89 04 24             	mov    %eax,(%esp)
 8a6be2a:	e8 d5 ce 74 ff       	call   81b8d04 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEi>
 8a6be2f:	83 ec 04             	sub    $0x4,%esp
 8a6be32:	8b 45 08             	mov    0x8(%ebp),%eax
 8a6be35:	8d 50 3c             	lea    0x3c(%eax),%edx
 8a6be38:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a6be3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6be3f:	89 04 24             	mov    %eax,(%esp)
 8a6be42:	e8 d3 14 66 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8a6be47:	83 ec 04             	sub    $0x4,%esp
 8a6be4a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8a6be4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6be51:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a6be54:	89 04 24             	mov    %eax,(%esp)
 8a6be57:	e8 6c e5 66 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 8a6be5c:	84 c0                	test   %al,%al
 8a6be5e:	75 8d                	jne    8a6bded <_ZN20QuestParameterScript14getRewardLevelEi+0x27>
 8a6be60:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a6be63:	c9                   	leave
 8a6be64:	c3                   	ret
 8a6be65:	90                   	nop

```

```c
// QuestParameterScript::getRewardLevel @ 0x8a6bdc6

/* QuestParameterScript::getRewardLevel(int) */

undefined4 __thiscall QuestParameterScript::getRewardLevel(QuestParameterScript *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  undefined4 local_10;
  
  local_10 = 0;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_1c);
  while( true ) {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c);
    if (*(int *)(iVar2 + 4) <= param_1) {
      puVar3 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c);
      local_10 = *puVar3;
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++(local_14,(int)local_1c);
  }
  return local_10;
}

```

---

## getRewardStatus

```asm
// === 08a6be66 QuestParameterScript::getRewardStatus  [0x08a6be66-0x8a6c0e8] ===
 8a6be66:	55                   	push   %ebp
 8a6be67:	89 e5                	mov    %esp,%ebp
 8a6be69:	57                   	push   %edi
 8a6be6a:	56                   	push   %esi
 8a6be6b:	53                   	push   %ebx
 8a6be6c:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 8a6be72:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8a6be75:	89 d8                	mov    %ebx,%eax
 8a6be77:	89 04 24             	mov    %eax,(%esp)
 8a6be7a:	e8 fb 03 00 00       	call   8a6c27a <_ZNSt6vectorI22pieceQuestRewardStatusSaIS0_EEC1Ev>
 8a6be7f:	8b 45 10             	mov    0x10(%ebp),%eax
 8a6be82:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6be86:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6be89:	89 04 24             	mov    %eax,(%esp)
 8a6be8c:	e8 35 ff ff ff       	call   8a6bdc6 <_ZN20QuestParameterScript14getRewardLevelEi>
 8a6be91:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8a6be94:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%ebp)
 8a6be98:	0f 84 39 02 00 00    	je     8a6c0d7 <_ZN20QuestParameterScript15getRewardStatusEi+0x271>
 8a6be9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6bea1:	8d 50 54             	lea    0x54(%eax),%edx
 8a6bea4:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8a6bea7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6beab:	89 04 24             	mov    %eax,(%esp)
 8a6beae:	e8 8f 05 00 00       	call   8a6c442 <_ZNSt3mapIiSt6vectorI22pieceQuestRewardStatusSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE5beginEv>
 8a6beb3:	83 ec 04             	sub    $0x4,%esp
 8a6beb6:	e9 ce 01 00 00       	jmp    8a6c089 <_ZN20QuestParameterScript15getRewardStatusEi+0x223>
 8a6bebb:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8a6bebe:	89 04 24             	mov    %eax,(%esp)
 8a6bec1:	e8 1a 06 00 00       	call   8a6c4e0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI22pieceQuestRewardStatusSaIS3_EEEEptEv>
 8a6bec6:	8b 00                	mov    (%eax),%eax
 8a6bec8:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8a6becb:	0f 9f c0             	setg   %al
 8a6bece:	84 c0                	test   %al,%al
 8a6bed0:	74 06                	je     8a6bed8 <_ZN20QuestParameterScript15getRewardStatusEi+0x72>
 8a6bed2:	90                   	nop
 8a6bed3:	e9 00 02 00 00       	jmp    8a6c0d8 <_ZN20QuestParameterScript15getRewardStatusEi+0x272>
 8a6bed8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8a6bedb:	89 04 24             	mov    %eax,(%esp)
 8a6bede:	e8 fd 05 00 00       	call   8a6c4e0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI22pieceQuestRewardStatusSaIS3_EEEEptEv>
 8a6bee3:	83 c0 04             	add    $0x4,%eax
 8a6bee6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6beea:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8a6beed:	89 04 24             	mov    %eax,(%esp)
 8a6bef0:	e8 f9 05 00 00       	call   8a6c4ee <_ZNSt6vectorI22pieceQuestRewardStatusSaIS0_EEC1ERKS2_>
 8a6bef5:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8a6bef8:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8a6befb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6beff:	89 04 24             	mov    %eax,(%esp)
 8a6bf02:	e8 9b 06 00 00       	call   8a6c5a2 <_ZNSt6vectorI22pieceQuestRewardStatusSaIS0_EE5beginEv>
 8a6bf07:	83 ec 04             	sub    $0x4,%esp
 8a6bf0a:	e9 0c 01 00 00       	jmp    8a6c01b <_ZN20QuestParameterScript15getRewardStatusEi+0x1b5>
 8a6bf0f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8a6bf12:	89 04 24             	mov    %eax,(%esp)
 8a6bf15:	e8 32 07 00 00       	call   8a6c64c <_ZNK9__gnu_cxx17__normal_iteratorIP22pieceQuestRewardStatusSt6vectorIS1_SaIS1_EEEdeEv>
 8a6bf1a:	8b 10                	mov    (%eax),%edx
 8a6bf1c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6bf20:	8b 50 04             	mov    0x4(%eax),%edx
 8a6bf23:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a6bf27:	8b 40 08             	mov    0x8(%eax),%eax
 8a6bf2a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8a6bf2e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8a6bf31:	89 04 24             	mov    %eax,(%esp)
 8a6bf34:	e8 4d 02 00 00       	call   8a6c186 <_ZN15StatuepredicateC1E22pieceQuestRewardStatus>
 8a6bf39:	89 da                	mov    %ebx,%edx
 8a6bf3b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8a6bf3e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6bf42:	89 04 24             	mov    %eax,(%esp)
 8a6bf45:	e8 7c 06 00 00       	call   8a6c5c6 <_ZNSt6vectorI22pieceQuestRewardStatusSaIS0_EE3endEv>
 8a6bf4a:	83 ec 04             	sub    $0x4,%esp
 8a6bf4d:	89 da                	mov    %ebx,%edx
 8a6bf4f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8a6bf52:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6bf56:	89 04 24             	mov    %eax,(%esp)
 8a6bf59:	e8 44 06 00 00       	call   8a6c5a2 <_ZNSt6vectorI22pieceQuestRewardStatusSaIS0_EE5beginEv>
 8a6bf5e:	83 ec 04             	sub    $0x4,%esp
 8a6bf61:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8a6bf64:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8a6bf67:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8a6bf6b:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8a6bf6e:	89 54 24 10          	mov    %edx,0x10(%esp)
 8a6bf72:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8a6bf75:	89 54 24 14          	mov    %edx,0x14(%esp)
 8a6bf79:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8a6bf7c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a6bf80:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8a6bf83:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6bf87:	89 04 24             	mov    %eax,(%esp)
 8a6bf8a:	e8 c7 06 00 00       	call   8a6c656 <_ZSt7find_ifIN9__gnu_cxx17__normal_iteratorIP22pieceQuestRewardStatusSt6vectorIS2_SaIS2_EEEE15StatuepredicateET_S9_S9_T0_>
 8a6bf8f:	83 ec 04             	sub    $0x4,%esp
 8a6bf92:	89 da                	mov    %ebx,%edx
 8a6bf94:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8a6bf97:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6bf9b:	89 04 24             	mov    %eax,(%esp)
 8a6bf9e:	e8 23 06 00 00       	call   8a6c5c6 <_ZNSt6vectorI22pieceQuestRewardStatusSaIS0_EE3endEv>
 8a6bfa3:	83 ec 04             	sub    $0x4,%esp
 8a6bfa6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8a6bfa9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6bfad:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8a6bfb0:	89 04 24             	mov    %eax,(%esp)
 8a6bfb3:	e8 34 06 00 00       	call   8a6c5ec <_ZN9__gnu_cxxneIP22pieceQuestRewardStatusSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8a6bfb8:	84 c0                	test   %al,%al
 8a6bfba:	74 29                	je     8a6bfe5 <_ZN20QuestParameterScript15getRewardStatusEi+0x17f>
 8a6bfbc:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8a6bfbf:	89 04 24             	mov    %eax,(%esp)
 8a6bfc2:	e8 85 06 00 00       	call   8a6c64c <_ZNK9__gnu_cxx17__normal_iteratorIP22pieceQuestRewardStatusSt6vectorIS1_SaIS1_EEEdeEv>
 8a6bfc7:	89 c6                	mov    %eax,%esi
 8a6bfc9:	d9 46 08             	flds   0x8(%esi)
 8a6bfcc:	d9 5d 94             	fstps  -0x6c(%ebp)
 8a6bfcf:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8a6bfd2:	89 04 24             	mov    %eax,(%esp)
 8a6bfd5:	e8 72 06 00 00       	call   8a6c64c <_ZNK9__gnu_cxx17__normal_iteratorIP22pieceQuestRewardStatusSt6vectorIS1_SaIS1_EEEdeEv>
 8a6bfda:	d9 40 08             	flds   0x8(%eax)
 8a6bfdd:	d8 45 94             	fadds  -0x6c(%ebp)
 8a6bfe0:	d9 5e 08             	fstps  0x8(%esi)
 8a6bfe3:	eb 19                	jmp    8a6bffe <_ZN20QuestParameterScript15getRewardStatusEi+0x198>
 8a6bfe5:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8a6bfe8:	89 04 24             	mov    %eax,(%esp)
 8a6bfeb:	e8 5c 06 00 00       	call   8a6c64c <_ZNK9__gnu_cxx17__normal_iteratorIP22pieceQuestRewardStatusSt6vectorIS1_SaIS1_EEEdeEv>
 8a6bff0:	89 da                	mov    %ebx,%edx
 8a6bff2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6bff6:	89 14 24             	mov    %edx,(%esp)
 8a6bff9:	e8 90 02 00 00       	call   8a6c28e <_ZNSt6vectorI22pieceQuestRewardStatusSaIS0_EE9push_backERKS0_>
 8a6bffe:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8a6c001:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8a6c008:	00 
 8a6c009:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8a6c00c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6c010:	89 04 24             	mov    %eax,(%esp)
 8a6c013:	e8 00 06 00 00       	call   8a6c618 <_ZN9__gnu_cxx17__normal_iteratorIP22pieceQuestRewardStatusSt6vectorIS1_SaIS1_EEEppEi>
 8a6c018:	83 ec 04             	sub    $0x4,%esp
 8a6c01b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8a6c01e:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8a6c021:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6c025:	89 04 24             	mov    %eax,(%esp)
 8a6c028:	e8 99 05 00 00       	call   8a6c5c6 <_ZNSt6vectorI22pieceQuestRewardStatusSaIS0_EE3endEv>
 8a6c02d:	83 ec 04             	sub    $0x4,%esp
 8a6c030:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8a6c033:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6c037:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8a6c03a:	89 04 24             	mov    %eax,(%esp)
 8a6c03d:	e8 aa 05 00 00       	call   8a6c5ec <_ZN9__gnu_cxxneIP22pieceQuestRewardStatusSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8a6c042:	84 c0                	test   %al,%al
 8a6c044:	0f 85 c5 fe ff ff    	jne    8a6bf0f <_ZN20QuestParameterScript15getRewardStatusEi+0xa9>
 8a6c04a:	eb 15                	jmp    8a6c061 <_ZN20QuestParameterScript15getRewardStatusEi+0x1fb>
 8a6c04c:	89 d6                	mov    %edx,%esi
 8a6c04e:	89 c7                	mov    %eax,%edi
 8a6c050:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8a6c053:	89 04 24             	mov    %eax,(%esp)
 8a6c056:	e8 f7 0a 97 ff       	call   83dcb52 <_ZNSt6vectorI22pieceQuestRewardStatusSaIS0_EED1Ev>
 8a6c05b:	89 f8                	mov    %edi,%eax
 8a6c05d:	89 f2                	mov    %esi,%edx
 8a6c05f:	eb 5c                	jmp    8a6c0bd <_ZN20QuestParameterScript15getRewardStatusEi+0x257>
 8a6c061:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8a6c064:	89 04 24             	mov    %eax,(%esp)
 8a6c067:	e8 e6 0a 97 ff       	call   83dcb52 <_ZNSt6vectorI22pieceQuestRewardStatusSaIS0_EED1Ev>
 8a6c06c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8a6c06f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8a6c076:	00 
 8a6c077:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8a6c07a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6c07e:	89 04 24             	mov    %eax,(%esp)
 8a6c081:	e8 1c 04 00 00       	call   8a6c4a2 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI22pieceQuestRewardStatusSaIS3_EEEEppEi>
 8a6c086:	83 ec 04             	sub    $0x4,%esp
 8a6c089:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6c08c:	8d 50 54             	lea    0x54(%eax),%edx
 8a6c08f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8a6c092:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6c096:	89 04 24             	mov    %eax,(%esp)
 8a6c099:	e8 ca 03 00 00       	call   8a6c468 <_ZNSt3mapIiSt6vectorI22pieceQuestRewardStatusSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE3endEv>
 8a6c09e:	83 ec 04             	sub    $0x4,%esp
 8a6c0a1:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8a6c0a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6c0a8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8a6c0ab:	89 04 24             	mov    %eax,(%esp)
 8a6c0ae:	e8 db 03 00 00       	call   8a6c48e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI22pieceQuestRewardStatusSaIS3_EEEEneERKS7_>
 8a6c0b3:	84 c0                	test   %al,%al
 8a6c0b5:	0f 85 00 fe ff ff    	jne    8a6bebb <_ZN20QuestParameterScript15getRewardStatusEi+0x55>
 8a6c0bb:	eb 1b                	jmp    8a6c0d8 <_ZN20QuestParameterScript15getRewardStatusEi+0x272>
 8a6c0bd:	89 d6                	mov    %edx,%esi
 8a6c0bf:	89 c7                	mov    %eax,%edi
 8a6c0c1:	89 d8                	mov    %ebx,%eax
 8a6c0c3:	89 04 24             	mov    %eax,(%esp)
 8a6c0c6:	e8 87 0a 97 ff       	call   83dcb52 <_ZNSt6vectorI22pieceQuestRewardStatusSaIS0_EED1Ev>
 8a6c0cb:	89 f8                	mov    %edi,%eax
 8a6c0cd:	89 f2                	mov    %esi,%edx
 8a6c0cf:	89 04 24             	mov    %eax,(%esp)
 8a6c0d2:	e8 79 76 07 00       	call   8ae3750 <_Unwind_Resume>
 8a6c0d7:	90                   	nop
 8a6c0d8:	89 d8                	mov    %ebx,%eax
 8a6c0da:	89 d8                	mov    %ebx,%eax
 8a6c0dc:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8a6c0df:	83 c4 00             	add    $0x0,%esp
 8a6c0e2:	5b                   	pop    %ebx
 8a6c0e3:	5e                   	pop    %esi
 8a6c0e4:	5f                   	pop    %edi
 8a6c0e5:	5d                   	pop    %ebp
 8a6c0e6:	c2 04 00             	ret    $0x4

```

```c
// QuestParameterScript::getRewardStatus @ 0x8a6be66

/* QuestParameterScript::getRewardStatus(int) */

int QuestParameterScript::getRewardStatus(int param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  QuestParameterScript *in_stack_00000008;
  int in_stack_0000000c;
  int local_a8 [3];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [12];
  map<int,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>>
  local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  int local_20;
  
  piVar8 = (int *)&stack0xffffff64;
  std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::vector
            ((vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>> *)param_1);
                    /* try { // try from 08a6be8c to 08a6bef4 has its CatchHandler @ 08a6c0bd */
  local_20 = getRewardLevel(in_stack_00000008,in_stack_0000000c);
  if (local_20 != -1) {
    std::
    map<int,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>>
    ::begin(local_4c);
    while( true ) {
      piVar8[1] = (int)(in_stack_00000008 + 0x54);
      *piVar8 = (int)local_48;
      piVar8[-1] = 0x8a6c09e;
      std::
      map<int,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>>
      ::end((map<int,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>>
             *)*piVar8);
      piVar8[1] = (int)local_48;
      *piVar8 = (int)local_4c;
      piVar8[-1] = 0x8a6c0b3;
      cVar3 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>
              ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>
                            *)*piVar8,(_Rb_tree_iterator *)piVar8[1]);
      if (cVar3 == '\0') break;
      *piVar8 = (int)local_4c;
      piVar8[-1] = 0x8a6bec6;
      piVar4 = (int *)std::
                      _Rb_tree_iterator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>
                      ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>
                                    *)*piVar8);
      if (local_20 < *piVar4) {
        return param_1;
      }
      *piVar8 = (int)local_4c;
      piVar8[-1] = 0x8a6bee3;
      iVar5 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>
                            *)*piVar8);
      piVar8[1] = iVar5 + 4;
      *piVar8 = (int)local_58;
      piVar8[-1] = 0x8a6bef5;
      std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::vector
                ((vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>> *)*piVar8,
                 (vector *)piVar8[1]);
      piVar8[1] = (int)local_58;
      *piVar8 = (int)local_5c;
                    /* try { // try from 08a6bf02 to 08a6c041 has its CatchHandler @ 08a6c04c */
      piVar8[-1] = 0x8a6bf07;
      std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::begin();
      while( true ) {
        piVar8[1] = (int)local_58;
        *piVar8 = (int)local_44;
        piVar8[-1] = 0x8a6c02d;
        std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::end();
        piVar8[1] = (int)local_44;
        *piVar8 = (int)local_5c;
        piVar8[-1] = 0x8a6c042;
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)*piVar8,(__normal_iterator *)piVar8[1]);
        if (!bVar2) break;
        *piVar8 = (int)local_5c;
        piVar8[-1] = 0x8a6bf1a;
        piVar4 = (int *)__gnu_cxx::
                        __normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                        ::operator*((__normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                                     *)*piVar8);
        piVar8[1] = *piVar4;
        piVar8[2] = piVar4[1];
        piVar8[3] = piVar4[2];
        *piVar8 = (int)&local_40;
        piVar8[-1] = 0x8a6bf39;
        Statuepredicate::Statuepredicate();
        piVar8[1] = param_1;
        *piVar8 = (int)&local_34;
        piVar8[-1] = 0x8a6bf4a;
        std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::end();
        piVar8[1] = param_1;
        *piVar8 = (int)&local_30;
        piVar8[-1] = 0x8a6bf5e;
        std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::begin();
        piVar8[3] = local_40;
        piVar8[4] = local_3c;
        piVar8[5] = local_38;
        piVar8[2] = local_34;
        piVar8[1] = local_30;
        *piVar8 = (int)local_60;
        piVar8[-1] = 0x8a6bf8f;
        std::
        find_if<__gnu_cxx::__normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>,Statuepredicate>
                  ();
        *piVar8 = param_1;
        piVar8[-1] = (int)local_2c;
        piVar8[-2] = 0x8a6bfa3;
        std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::end();
        *piVar8 = (int)local_2c;
        piVar8[-1] = (int)local_60;
        piVar8[-2] = 0x8a6bfb8;
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)piVar8[-1],(__normal_iterator *)*piVar8);
        if (bVar2) {
          piVar8[-1] = (int)local_60;
          piVar8[-2] = 0x8a6bfc7;
          iVar5 = __gnu_cxx::
                  __normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                  ::operator*((__normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                               *)piVar8[-1]);
          fVar1 = *(float *)(iVar5 + 8);
          piVar8[-1] = (int)local_5c;
          piVar8[-2] = 0x8a6bfda;
          iVar6 = __gnu_cxx::
                  __normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                  ::operator*((__normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                               *)piVar8[-1]);
          *(float *)(iVar5 + 8) = *(float *)(iVar6 + 8) + fVar1;
        }
        else {
          piVar8[-1] = (int)local_5c;
          piVar8[-2] = 0x8a6bff0;
          uVar7 = __gnu_cxx::
                  __normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                  ::operator*((__normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                               *)piVar8[-1]);
          *piVar8 = uVar7;
          piVar8[-1] = param_1;
          piVar8[-2] = 0x8a6bffe;
          std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::push_back
                    ((vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>> *)
                     piVar8[-1],(pieceQuestRewardStatus *)*piVar8);
        }
        piVar8[1] = 0;
        *piVar8 = (int)local_5c;
        piVar8[-1] = (int)local_28;
        piVar8[-2] = 0x8a6c018;
        __gnu_cxx::
        __normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
        ::operator++((__normal_iterator<pieceQuestRewardStatus*,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>
                      *)piVar8[-1],*piVar8);
        piVar8 = piVar8 + -1;
      }
      *piVar8 = (int)local_58;
                    /* try { // try from 08a6c067 to 08a6c09d has its CatchHandler @ 08a6c0bd */
      piVar8[-1] = 0x8a6c06c;
      std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>::~vector
                ((vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>> *)*piVar8);
      piVar8[2] = 0;
      piVar8[1] = (int)local_4c;
      *piVar8 = (int)local_24;
      piVar8[-1] = 0x8a6c086;
      std::
      _Rb_tree_iterator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>
      ::operator++((_Rb_tree_iterator<std::pair<int_const,std::vector<pieceQuestRewardStatus,std::allocator<pieceQuestRewardStatus>>>>
                    *)*piVar8,piVar8[1]);
    }
  }
  return param_1;
}

```

---

## getRewardWeight

```asm
// === 08a6bd1c QuestParameterScript::getRewardWeight  [0x08a6bd1c-0x8a6bd85] ===
 8a6bd1c:	55                   	push   %ebp
 8a6bd1d:	89 e5                	mov    %esp,%ebp
 8a6bd1f:	83 ec 38             	sub    $0x38,%esp
 8a6bd22:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a6bd25:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8a6bd28:	8b 55 08             	mov    0x8(%ebp),%edx
 8a6bd2b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a6bd2e:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 8a6bd31:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8a6bd35:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6bd39:	89 04 24             	mov    %eax,(%esp)
 8a6bd3c:	e8 6b 06 00 00       	call   8a6c3ac <_ZNSt3mapIciSt4lessIcESaISt4pairIKciEEE4findERS3_>
 8a6bd41:	83 ec 04             	sub    $0x4,%esp
 8a6bd44:	8b 55 08             	mov    0x8(%ebp),%edx
 8a6bd47:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a6bd4a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a6bd4e:	89 04 24             	mov    %eax,(%esp)
 8a6bd51:	e8 82 06 00 00       	call   8a6c3d8 <_ZNSt3mapIciSt4lessIcESaISt4pairIKciEEE3endEv>
 8a6bd56:	83 ec 04             	sub    $0x4,%esp
 8a6bd59:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a6bd5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a6bd60:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a6bd63:	89 04 24             	mov    %eax,(%esp)
 8a6bd66:	e8 93 06 00 00       	call   8a6c3fe <_ZNKSt17_Rb_tree_iteratorISt4pairIKciEEneERKS3_>
 8a6bd6b:	84 c0                	test   %al,%al
 8a6bd6d:	74 10                	je     8a6bd7f <_ZN20QuestParameterScript15getRewardWeightEc+0x63>
 8a6bd6f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a6bd72:	89 04 24             	mov    %eax,(%esp)
 8a6bd75:	e8 98 06 00 00       	call   8a6c412 <_ZNKSt17_Rb_tree_iteratorISt4pairIKciEEptEv>
 8a6bd7a:	8b 40 04             	mov    0x4(%eax),%eax
 8a6bd7d:	eb 05                	jmp    8a6bd84 <_ZN20QuestParameterScript15getRewardWeightEc+0x68>
 8a6bd7f:	b8 64 00 00 00       	mov    $0x64,%eax
 8a6bd84:	c9                   	leave
 8a6bd85:	c3                   	ret

```

```c
// QuestParameterScript::getRewardWeight @ 0x8a6bd1c

/* QuestParameterScript::getRewardWeight(char) */

undefined4 QuestParameterScript::getRewardWeight(char param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<char_const,int>> local_14 [4];
  map<char,int,std::less<char>,std::allocator<std::pair<char_const,int>>> local_10 [12];
  
  std::map<char,int,std::less<char>,std::allocator<std::pair<char_const,int>>>::find
            ((char *)local_14);
  std::map<char,int,std::less<char>,std::allocator<std::pair<char_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<char_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 100;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<char_const,int>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

