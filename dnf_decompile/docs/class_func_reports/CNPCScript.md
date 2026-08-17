# CNPCScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## getBuffRewardInfo

```asm
// === 085811f8 CNPCScript::getBuffRewardInfo  [0x085811f8-0x8581313] ===
 85811f8:	55                   	push   %ebp
 85811f9:	89 e5                	mov    %esp,%ebp
 85811fb:	53                   	push   %ebx
 85811fc:	83 ec 34             	sub    $0x34,%esp
 85811ff:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8581202:	8b 45 0c             	mov    0xc(%ebp),%eax
 8581205:	8d 90 64 06 00 00    	lea    0x664(%eax),%edx
 858120b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858120e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8581212:	89 04 24             	mov    %eax,(%esp)
 8581215:	e8 b6 1b 00 00       	call   8582dd0 <_ZNKSt6vectorIN25stFavorableRelationShip_t16stBuffRewardInfoESaIS1_EE5beginEv>
 858121a:	83 ec 04             	sub    $0x4,%esp
 858121d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8581220:	8d 90 64 06 00 00    	lea    0x664(%eax),%edx
 8581226:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8581229:	89 54 24 04          	mov    %edx,0x4(%esp)
 858122d:	89 04 24             	mov    %eax,(%esp)
 8581230:	e8 c7 1b 00 00       	call   8582dfc <_ZNKSt6vectorIN25stFavorableRelationShip_t16stBuffRewardInfoESaIS1_EE3endEv>
 8581235:	83 ec 04             	sub    $0x4,%esp
 8581238:	89 1c 24             	mov    %ebx,(%esp)
 858123b:	e8 b0 06 00 00       	call   85818f0 <_ZN25stFavorableRelationShip_t16stBuffRewardInfoC1Ev>
 8581240:	c7 04 24 e8 03 00 00 	movl   $0x3e8,(%esp)
 8581247:	e8 3b 09 13 00       	call   86b1b87 <_Z12get_rand_inti>
 858124c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 858124f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8581256:	66 c7 43 02 00 00    	movw   $0x0,0x2(%ebx)
 858125c:	e9 8e 00 00 00       	jmp    85812ef <_ZNK10CNPCScript17getBuffRewardInfoEi+0xf7>
 8581261:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8581264:	89 04 24             	mov    %eax,(%esp)
 8581267:	e8 e8 1b 00 00       	call   8582e54 <_ZNK9__gnu_cxx17__normal_iteratorIPKN25stFavorableRelationShip_t16stBuffRewardInfoESt6vectorIS2_SaIS2_EEEptEv>
 858126c:	0f b7 00             	movzwl (%eax),%eax
 858126f:	0f b7 c0             	movzwl %ax,%eax
 8581272:	3b 45 10             	cmp    0x10(%ebp),%eax
 8581275:	0f 9c c0             	setl   %al
 8581278:	84 c0                	test   %al,%al
 858127a:	74 56                	je     85812d2 <_ZNK10CNPCScript17getBuffRewardInfoEi+0xda>
 858127c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858127f:	89 04 24             	mov    %eax,(%esp)
 8581282:	e8 cd 1b 00 00       	call   8582e54 <_ZNK9__gnu_cxx17__normal_iteratorIPKN25stFavorableRelationShip_t16stBuffRewardInfoESt6vectorIS2_SaIS2_EEEptEv>
 8581287:	8b 50 04             	mov    0x4(%eax),%edx
 858128a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858128d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8581290:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8581293:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8581296:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8581299:	7e 37                	jle    85812d2 <_ZNK10CNPCScript17getBuffRewardInfoEi+0xda>
 858129b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858129e:	89 04 24             	mov    %eax,(%esp)
 85812a1:	e8 ae 1b 00 00       	call   8582e54 <_ZNK9__gnu_cxx17__normal_iteratorIPKN25stFavorableRelationShip_t16stBuffRewardInfoESt6vectorIS2_SaIS2_EEEptEv>
 85812a6:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 85812aa:	66 89 43 02          	mov    %ax,0x2(%ebx)
 85812ae:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85812b1:	89 04 24             	mov    %eax,(%esp)
 85812b4:	e8 9b 1b 00 00       	call   8582e54 <_ZNK9__gnu_cxx17__normal_iteratorIPKN25stFavorableRelationShip_t16stBuffRewardInfoESt6vectorIS2_SaIS2_EEEptEv>
 85812b9:	0f b7 00             	movzwl (%eax),%eax
 85812bc:	66 89 03             	mov    %ax,(%ebx)
 85812bf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85812c2:	89 04 24             	mov    %eax,(%esp)
 85812c5:	e8 8a 1b 00 00       	call   8582e54 <_ZNK9__gnu_cxx17__normal_iteratorIPKN25stFavorableRelationShip_t16stBuffRewardInfoESt6vectorIS2_SaIS2_EEEptEv>
 85812ca:	8b 40 04             	mov    0x4(%eax),%eax
 85812cd:	89 43 04             	mov    %eax,0x4(%ebx)
 85812d0:	eb 38                	jmp    858130a <_ZNK10CNPCScript17getBuffRewardInfoEi+0x112>
 85812d2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85812d5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85812dc:	00 
 85812dd:	8d 55 e8             	lea    -0x18(%ebp),%edx
 85812e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 85812e4:	89 04 24             	mov    %eax,(%esp)
 85812e7:	e8 72 1b 00 00       	call   8582e5e <_ZN9__gnu_cxx17__normal_iteratorIPKN25stFavorableRelationShip_t16stBuffRewardInfoESt6vectorIS2_SaIS2_EEEppEi>
 85812ec:	83 ec 04             	sub    $0x4,%esp
 85812ef:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85812f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85812f6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85812f9:	89 04 24             	mov    %eax,(%esp)
 85812fc:	e8 27 1b 00 00       	call   8582e28 <_ZN9__gnu_cxxneIPKN25stFavorableRelationShip_t16stBuffRewardInfoESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8581301:	84 c0                	test   %al,%al
 8581303:	0f 85 58 ff ff ff    	jne    8581261 <_ZNK10CNPCScript17getBuffRewardInfoEi+0x69>
 8581309:	90                   	nop
 858130a:	89 d8                	mov    %ebx,%eax
 858130c:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 858130f:	c9                   	leave
 8581310:	c2 04 00             	ret    $0x4
 8581313:	90                   	nop

```

```c
// CNPCScript::getBuffRewardInfo @ 0x85811f8

/* CNPCScript::getBuffRewardInfo(int) const */

int CNPCScript::getBuffRewardInfo(int param_1)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int in_stack_0000000c;
  __normal_iterator local_20 [4];
  __normal_iterator<stFavorableRelationShip_t::stBuffRewardInfo_const*,std::vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>>
  local_1c [4];
  __normal_iterator<stFavorableRelationShip_t::stBuffRewardInfo_const*,std::vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  std::
  vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>
  ::begin();
  std::
  vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>
  ::end();
  stFavorableRelationShip_t::stBuffRewardInfo::stBuffRewardInfo((stBuffRewardInfo *)param_1);
  local_14 = get_rand_int(1000);
  local_10 = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  do {
    bVar1 = __gnu_cxx::operator!=(local_1c,local_20);
    if (!bVar1) {
      return param_1;
    }
    puVar2 = (ushort *)
             __gnu_cxx::
             __normal_iterator<stFavorableRelationShip_t::stBuffRewardInfo_const*,std::vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>>
             ::operator->(local_1c);
    if ((int)(uint)*puVar2 < in_stack_0000000c) {
      iVar3 = __gnu_cxx::
              __normal_iterator<stFavorableRelationShip_t::stBuffRewardInfo_const*,std::vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>>
              ::operator->(local_1c);
      local_10 = *(int *)(iVar3 + 4) + local_10;
      if (local_14 < local_10) {
        iVar3 = __gnu_cxx::
                __normal_iterator<stFavorableRelationShip_t::stBuffRewardInfo_const*,std::vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>>
                ::operator->(local_1c);
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar3 + 2);
        puVar4 = (undefined2 *)
                 __gnu_cxx::
                 __normal_iterator<stFavorableRelationShip_t::stBuffRewardInfo_const*,std::vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>>
                 ::operator->(local_1c);
        *(undefined2 *)param_1 = *puVar4;
        iVar3 = __gnu_cxx::
                __normal_iterator<stFavorableRelationShip_t::stBuffRewardInfo_const*,std::vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>>
                ::operator->(local_1c);
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar3 + 4);
        return param_1;
      }
    }
    __gnu_cxx::
    __normal_iterator<stFavorableRelationShip_t::stBuffRewardInfo_const*,std::vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>>
    ::operator++(local_18,(int)local_1c);
  } while( true );
}

```

---

## getGiftRewardItem

```asm
// === 08580d30 CNPCScript::getGiftRewardItem  [0x08580d30-0x8580e69] ===
 8580d30:	55                   	push   %ebp
 8580d31:	89 e5                	mov    %esp,%ebp
 8580d33:	57                   	push   %edi
 8580d34:	56                   	push   %esi
 8580d35:	53                   	push   %ebx
 8580d36:	83 ec 2c             	sub    $0x2c,%esp
 8580d39:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8580d3c:	89 1c 24             	mov    %ebx,(%esp)
 8580d3f:	e8 10 ab b4 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8580d44:	8b 4d 18             	mov    0x18(%ebp),%ecx
 8580d47:	8b 75 10             	mov    0x10(%ebp),%esi
 8580d4a:	8b 45 14             	mov    0x14(%ebp),%eax
 8580d4d:	89 c2                	mov    %eax,%edx
 8580d4f:	01 d2                	add    %edx,%edx
 8580d51:	01 c2                	add    %eax,%edx
 8580d53:	8d 04 95 00 00 00 00 	lea    0x0(,%edx,4),%eax
 8580d5a:	89 c2                	mov    %eax,%edx
 8580d5c:	89 f0                	mov    %esi,%eax
 8580d5e:	01 c0                	add    %eax,%eax
 8580d60:	01 f0                	add    %esi,%eax
 8580d62:	c1 e0 04             	shl    $0x4,%eax
 8580d65:	01 c2                	add    %eax,%edx
 8580d67:	89 c8                	mov    %ecx,%eax
 8580d69:	c1 e0 03             	shl    $0x3,%eax
 8580d6c:	01 c8                	add    %ecx,%eax
 8580d6e:	c1 e0 04             	shl    $0x4,%eax
 8580d71:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8580d74:	05 70 03 00 00       	add    $0x370,%eax
 8580d79:	03 45 0c             	add    0xc(%ebp),%eax
 8580d7c:	83 c0 0c             	add    $0xc,%eax
 8580d7f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8580d82:	8b 4d 18             	mov    0x18(%ebp),%ecx
 8580d85:	8b 45 10             	mov    0x10(%ebp),%eax
 8580d88:	8b 7d 14             	mov    0x14(%ebp),%edi
 8580d8b:	8b 75 0c             	mov    0xc(%ebp),%esi
 8580d8e:	89 c2                	mov    %eax,%edx
 8580d90:	01 d2                	add    %edx,%edx
 8580d92:	01 c2                	add    %eax,%edx
 8580d94:	8d 04 95 00 00 00 00 	lea    0x0(,%edx,4),%eax
 8580d9b:	89 c2                	mov    %eax,%edx
 8580d9d:	89 c8                	mov    %ecx,%eax
 8580d9f:	c1 e0 03             	shl    $0x3,%eax
 8580da2:	01 c8                	add    %ecx,%eax
 8580da4:	c1 e0 02             	shl    $0x2,%eax
 8580da7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8580daa:	01 f8                	add    %edi,%eax
 8580dac:	05 e4 00 00 00       	add    $0xe4,%eax
 8580db1:	8b 44 86 10          	mov    0x10(%esi,%eax,4),%eax
 8580db5:	89 04 24             	mov    %eax,(%esp)
 8580db8:	e8 ca 0d 13 00       	call   86b1b87 <_Z12get_rand_inti>
 8580dbd:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8580dc0:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8580dc7:	eb 78                	jmp    8580e41 <_ZNK10CNPCScript17getGiftRewardItemE13ENUM_NPC_MOOD27ENUM_NPC_FAVOR_CHANGE_CONSTj+0x111>
 8580dc9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8580dcc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8580dd0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8580dd3:	89 04 24             	mov    %eax,(%esp)
 8580dd6:	e8 9b 1d 00 00       	call   8582b76 <_ZNKSt6vectorIN25stFavorableRelationShip_t21stRewardItemElement_tESaIS1_EE2atEj>
 8580ddb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8580dde:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8580de1:	8b 40 08             	mov    0x8(%eax),%eax
 8580de4:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 8580de7:	76 54                	jbe    8580e3d <_ZNK10CNPCScript17getGiftRewardItemE13ENUM_NPC_MOOD27ENUM_NPC_FAVOR_CHANGE_CONSTj+0x10d>
 8580de9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8580dec:	8b 00                	mov    (%eax),%eax
 8580dee:	85 c0                	test   %eax,%eax
 8580df0:	75 0a                	jne    8580dfc <_ZNK10CNPCScript17getGiftRewardItemE13ENUM_NPC_MOOD27ENUM_NPC_FAVOR_CHANGE_CONSTj+0xcc>
 8580df2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8580df5:	8b 40 04             	mov    0x4(%eax),%eax
 8580df8:	85 c0                	test   %eax,%eax
 8580dfa:	74 60                	je     8580e5c <_ZNK10CNPCScript17getGiftRewardItemE13ENUM_NPC_MOOD27ENUM_NPC_FAVOR_CHANGE_CONSTj+0x12c>
 8580dfc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8580dff:	8b 00                	mov    (%eax),%eax
 8580e01:	89 43 02             	mov    %eax,0x2(%ebx)
 8580e04:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8580e07:	89 44 24 04          	mov    %eax,0x4(%esp)
 8580e0b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8580e0e:	89 04 24             	mov    %eax,(%esp)
 8580e11:	e8 60 1d 00 00       	call   8582b76 <_ZNKSt6vectorIN25stFavorableRelationShip_t21stRewardItemElement_tESaIS1_EE2atEj>
 8580e16:	8b 40 04             	mov    0x4(%eax),%eax
 8580e19:	89 c6                	mov    %eax,%esi
 8580e1b:	e8 7b b3 b4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8580e20:	8b 40 0c             	mov    0xc(%eax),%eax
 8580e23:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8580e27:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8580e2b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8580e32:	00 
 8580e33:	89 04 24             	mov    %eax,(%esp)
 8580e36:	e8 7d 11 f9 ff       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 8580e3b:	eb 20                	jmp    8580e5d <_ZNK10CNPCScript17getGiftRewardItemE13ENUM_NPC_MOOD27ENUM_NPC_FAVOR_CHANGE_CONSTj+0x12d>
 8580e3d:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8580e41:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8580e44:	89 04 24             	mov    %eax,(%esp)
 8580e47:	e8 08 1d 00 00       	call   8582b54 <_ZNKSt6vectorIN25stFavorableRelationShip_t21stRewardItemElement_tESaIS1_EE4sizeEv>
 8580e4c:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8580e4f:	0f 97 c0             	seta   %al
 8580e52:	84 c0                	test   %al,%al
 8580e54:	0f 85 6f ff ff ff    	jne    8580dc9 <_ZNK10CNPCScript17getGiftRewardItemE13ENUM_NPC_MOOD27ENUM_NPC_FAVOR_CHANGE_CONSTj+0x99>
 8580e5a:	eb 01                	jmp    8580e5d <_ZNK10CNPCScript17getGiftRewardItemE13ENUM_NPC_MOOD27ENUM_NPC_FAVOR_CHANGE_CONSTj+0x12d>
 8580e5c:	90                   	nop
 8580e5d:	89 d8                	mov    %ebx,%eax
 8580e5f:	83 c4 2c             	add    $0x2c,%esp
 8580e62:	5b                   	pop    %ebx
 8580e63:	5e                   	pop    %esi
 8580e64:	5f                   	pop    %edi
 8580e65:	5d                   	pop    %ebp
 8580e66:	c2 04 00             	ret    $0x4
 8580e69:	90                   	nop

```

```c
// CNPCScript::getGiftRewardItem @ 0x8580d30

/* CNPCScript::getGiftRewardItem(ENUM_NPC_MOOD, ENUM_NPC_FAVOR_CHANGE_CONST, unsigned int) const */

Inven_Item *
CNPCScript::getGiftRewardItem(Inven_Item *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  vector<stFavorableRelationShip_t::stRewardItemElement_t,std::allocator<stFavorableRelationShip_t::stRewardItemElement_t>>
  *this;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint local_24;
  
  Inven_Item::Inven_Item(param_1);
  this = (vector<stFavorableRelationShip_t::stRewardItemElement_t,std::allocator<stFavorableRelationShip_t::stRewardItemElement_t>>
          *)(param_4 * 0xc + param_3 * 0x30 + param_5 * 0x90 + param_2 + 0x37c);
  uVar2 = get_rand_int(*(int *)(param_2 + 0x10 +
                               (param_3 * 0xc + param_5 * 0x24 + param_4 + 0xe4) * 4));
  local_24 = 0;
  while( true ) {
    uVar5 = std::
            vector<stFavorableRelationShip_t::stRewardItemElement_t,std::allocator<stFavorableRelationShip_t::stRewardItemElement_t>>
            ::size(this);
    if (uVar5 <= local_24) {
      return param_1;
    }
    piVar3 = (int *)std::
                    vector<stFavorableRelationShip_t::stRewardItemElement_t,std::allocator<stFavorableRelationShip_t::stRewardItemElement_t>>
                    ::at(this,local_24);
    if (uVar2 < (uint)piVar3[2]) break;
    local_24 = local_24 + 1;
  }
  if ((*piVar3 == 0) && (piVar3[1] == 0)) {
    return param_1;
  }
  *(int *)(param_1 + 2) = *piVar3;
  iVar4 = std::
          vector<stFavorableRelationShip_t::stRewardItemElement_t,std::allocator<stFavorableRelationShip_t::stRewardItemElement_t>>
          ::at(this,local_24);
  uVar1 = *(undefined4 *)(iVar4 + 4);
  iVar4 = G_CDataManager();
  CItemList::create_item(*(CItemList **)(iVar4 + 0xc),0,param_1,uVar1);
  return param_1;
}

```

---

## getLevelRewardInfo

```asm
// === 08581076 CNPCScript::getLevelRewardInfo  [0x08581076-0x85811a3] ===
 8581076:	55                   	push   %ebp
 8581077:	89 e5                	mov    %esp,%ebp
 8581079:	57                   	push   %edi
 858107a:	56                   	push   %esi
 858107b:	53                   	push   %ebx
 858107c:	83 ec 3c             	sub    $0x3c,%esp
 858107f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8581082:	8b 45 10             	mov    0x10(%ebp),%eax
 8581085:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 8581089:	89 d8                	mov    %ebx,%eax
 858108b:	89 04 24             	mov    %eax,(%esp)
 858108e:	e8 f7 07 00 00       	call   858188a <_ZN25stFavorableRelationShip_t17stLevelRewardInfoC1Ev>
 8581093:	8b 45 0c             	mov    0xc(%ebp),%eax
 8581096:	8d 90 58 06 00 00    	lea    0x658(%eax),%edx
 858109c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 858109f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85810a3:	89 04 24             	mov    %eax,(%esp)
 85810a6:	e8 63 1c 00 00       	call   8582d0e <_ZNKSt6vectorIN25stFavorableRelationShip_t17stLevelRewardInfoESaIS1_EE5beginEv>
 85810ab:	83 ec 04             	sub    $0x4,%esp
 85810ae:	e9 8f 00 00 00       	jmp    8581142 <_ZNK10CNPCScript18getLevelRewardInfoEt+0xcc>
 85810b3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85810b6:	89 04 24             	mov    %eax,(%esp)
 85810b9:	e8 d4 1c 00 00       	call   8582d92 <_ZNK9__gnu_cxx17__normal_iteratorIPKN25stFavorableRelationShip_t17stLevelRewardInfoESt6vectorIS2_SaIS2_EEEdeEv>
 85810be:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85810c1:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85810c5:	74 5e                	je     8581125 <_ZNK10CNPCScript18getLevelRewardInfoEt+0xaf>
 85810c7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85810ca:	0f b7 00             	movzwl (%eax),%eax
 85810cd:	66 3b 45 d4          	cmp    -0x2c(%ebp),%ax
 85810d1:	75 52                	jne    8581125 <_ZNK10CNPCScript18getLevelRewardInfoEt+0xaf>
 85810d3:	89 d8                	mov    %ebx,%eax
 85810d5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85810d8:	0f b7 12             	movzwl (%edx),%edx
 85810db:	66 89 10             	mov    %dx,(%eax)
 85810de:	89 d8                	mov    %ebx,%eax
 85810e0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85810e3:	8b 52 04             	mov    0x4(%edx),%edx
 85810e6:	89 50 04             	mov    %edx,0x4(%eax)
 85810e9:	89 d8                	mov    %ebx,%eax
 85810eb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85810ee:	8b 52 08             	mov    0x8(%edx),%edx
 85810f1:	89 50 08             	mov    %edx,0x8(%eax)
 85810f4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85810f7:	8d 50 0c             	lea    0xc(%eax),%edx
 85810fa:	89 d8                	mov    %ebx,%eax
 85810fc:	83 c0 0c             	add    $0xc,%eax
 85810ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 8581103:	89 04 24             	mov    %eax,(%esp)
 8581106:	e8 f5 6b 18 00       	call   8707d00 <_ZNSsaSERKSs>
 858110b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 858110e:	8d 50 10             	lea    0x10(%eax),%edx
 8581111:	89 d8                	mov    %ebx,%eax
 8581113:	83 c0 10             	add    $0x10,%eax
 8581116:	89 54 24 04          	mov    %edx,0x4(%esp)
 858111a:	89 04 24             	mov    %eax,(%esp)
 858111d:	e8 de 6b 18 00       	call   8707d00 <_ZNSsaSERKSs>
 8581122:	90                   	nop
 8581123:	eb 6e                	jmp    8581193 <_ZNK10CNPCScript18getLevelRewardInfoEt+0x11d>
 8581125:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8581128:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 858112f:	00 
 8581130:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8581133:	89 54 24 04          	mov    %edx,0x4(%esp)
 8581137:	89 04 24             	mov    %eax,(%esp)
 858113a:	e8 5d 1c 00 00       	call   8582d9c <_ZN9__gnu_cxx17__normal_iteratorIPKN25stFavorableRelationShip_t17stLevelRewardInfoESt6vectorIS2_SaIS2_EEEppEi>
 858113f:	83 ec 04             	sub    $0x4,%esp
 8581142:	8b 45 0c             	mov    0xc(%ebp),%eax
 8581145:	8d 90 58 06 00 00    	lea    0x658(%eax),%edx
 858114b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 858114e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8581152:	89 04 24             	mov    %eax,(%esp)
 8581155:	e8 e0 1b 00 00       	call   8582d3a <_ZNKSt6vectorIN25stFavorableRelationShip_t17stLevelRewardInfoESaIS1_EE3endEv>
 858115a:	83 ec 04             	sub    $0x4,%esp
 858115d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8581160:	89 44 24 04          	mov    %eax,0x4(%esp)
 8581164:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8581167:	89 04 24             	mov    %eax,(%esp)
 858116a:	e8 f7 1b 00 00       	call   8582d66 <_ZN9__gnu_cxxneIPKN25stFavorableRelationShip_t17stLevelRewardInfoESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 858116f:	84 c0                	test   %al,%al
 8581171:	0f 85 3c ff ff ff    	jne    85810b3 <_ZNK10CNPCScript18getLevelRewardInfoEt+0x3d>
 8581177:	eb 1a                	jmp    8581193 <_ZNK10CNPCScript18getLevelRewardInfoEt+0x11d>
 8581179:	89 d6                	mov    %edx,%esi
 858117b:	89 c7                	mov    %eax,%edi
 858117d:	89 d8                	mov    %ebx,%eax
 858117f:	89 04 24             	mov    %eax,(%esp)
 8581182:	e8 3f 12 00 00       	call   85823c6 <_ZN25stFavorableRelationShip_t17stLevelRewardInfoD1Ev>
 8581187:	89 f8                	mov    %edi,%eax
 8581189:	89 f2                	mov    %esi,%edx
 858118b:	89 04 24             	mov    %eax,(%esp)
 858118e:	e8 bd 25 56 00       	call   8ae3750 <_Unwind_Resume>
 8581193:	89 d8                	mov    %ebx,%eax
 8581195:	89 d8                	mov    %ebx,%eax
 8581197:	8d 65 f4             	lea    -0xc(%ebp),%esp
 858119a:	83 c4 00             	add    $0x0,%esp
 858119d:	5b                   	pop    %ebx
 858119e:	5e                   	pop    %esi
 858119f:	5f                   	pop    %edi
 85811a0:	5d                   	pop    %ebp
 85811a1:	c2 04 00             	ret    $0x4

```

```c
// CNPCScript::getLevelRewardInfo @ 0x8581076

/* CNPCScript::getLevelRewardInfo(unsigned short) const */

stLevelRewardInfo * CNPCScript::getLevelRewardInfo(ushort param_1)

{
  bool bVar1;
  undefined2 in_stack_00000006;
  short in_stack_0000000c;
  __normal_iterator<stFavorableRelationShip_t::stLevelRewardInfo_const*,std::vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>>
  local_2c [4];
  __normal_iterator local_28 [4];
  __normal_iterator<stFavorableRelationShip_t::stLevelRewardInfo_const*,std::vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>>
  local_24 [4];
  short *local_20;
  
  stFavorableRelationShip_t::stLevelRewardInfo::stLevelRewardInfo(_param_1);
                    /* try { // try from 085810a6 to 0858116e has its CatchHandler @ 08581179 */
  std::
  vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>
  ::begin();
  while( true ) {
    std::
    vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>
    ::end();
    bVar1 = __gnu_cxx::operator!=(local_2c,local_28);
    if (!bVar1) {
      return _param_1;
    }
    local_20 = (short *)__gnu_cxx::
                        __normal_iterator<stFavorableRelationShip_t::stLevelRewardInfo_const*,std::vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>>
                        ::operator*(local_2c);
    if ((local_20 != (short *)0x0) && (*local_20 == in_stack_0000000c)) break;
    __gnu_cxx::
    __normal_iterator<stFavorableRelationShip_t::stLevelRewardInfo_const*,std::vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>>
    ::operator++(local_24,(int)local_2c);
  }
  *(short *)_param_1 = *local_20;
  *(undefined4 *)(_param_1 + 4) = *(undefined4 *)(local_20 + 2);
  *(undefined4 *)(_param_1 + 8) = *(undefined4 *)(local_20 + 4);
  std::string::operator=((string *)(_param_1 + 0xc),(string *)(local_20 + 6));
  std::string::operator=((string *)(_param_1 + 0x10),(string *)(local_20 + 8));
  return _param_1;
}

```

---

## getNextMood

```asm
// === 08580f28 CNPCScript::getNextMood  [0x08580f28-0x8580fcf] ===
 8580f28:	55                   	push   %ebp
 8580f29:	89 e5                	mov    %esp,%ebp
 8580f2b:	83 ec 18             	sub    $0x18,%esp
 8580f2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8580f31:	05 84 01 00 00       	add    $0x184,%eax
 8580f36:	89 04 24             	mov    %eax,(%esp)
 8580f39:	e8 44 1d 00 00       	call   8582c82 <_ZNKSt6vectorISt4pairI13ENUM_NPC_MOODjESaIS2_EE5emptyEv>
 8580f3e:	84 c0                	test   %al,%al
 8580f40:	74 19                	je     8580f5b <_ZNK10CNPCScript11getNextMoodER13ENUM_NPC_MOODRj+0x33>
 8580f42:	8b 45 0c             	mov    0xc(%ebp),%eax
 8580f45:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8580f4b:	8b 45 10             	mov    0x10(%ebp),%eax
 8580f4e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8580f54:	b8 00 00 00 00       	mov    $0x0,%eax
 8580f59:	eb 72                	jmp    8580fcd <_ZNK10CNPCScript11getNextMoodER13ENUM_NPC_MOODRj+0xa5>
 8580f5b:	8b 45 10             	mov    0x10(%ebp),%eax
 8580f5e:	8b 00                	mov    (%eax),%eax
 8580f60:	8d 50 01             	lea    0x1(%eax),%edx
 8580f63:	8b 45 10             	mov    0x10(%ebp),%eax
 8580f66:	89 10                	mov    %edx,(%eax)
 8580f68:	8b 45 08             	mov    0x8(%ebp),%eax
 8580f6b:	05 84 01 00 00       	add    $0x184,%eax
 8580f70:	89 04 24             	mov    %eax,(%esp)
 8580f73:	e8 4e 1d 00 00       	call   8582cc6 <_ZNKSt6vectorISt4pairI13ENUM_NPC_MOODjESaIS2_EE4sizeEv>
 8580f78:	8b 55 10             	mov    0x10(%ebp),%edx
 8580f7b:	8b 12                	mov    (%edx),%edx
 8580f7d:	39 d0                	cmp    %edx,%eax
 8580f7f:	0f 96 c0             	setbe  %al
 8580f82:	84 c0                	test   %al,%al
 8580f84:	74 09                	je     8580f8f <_ZNK10CNPCScript11getNextMoodER13ENUM_NPC_MOODRj+0x67>
 8580f86:	8b 45 10             	mov    0x10(%ebp),%eax
 8580f89:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8580f8f:	8b 45 10             	mov    0x10(%ebp),%eax
 8580f92:	8b 00                	mov    (%eax),%eax
 8580f94:	8b 55 08             	mov    0x8(%ebp),%edx
 8580f97:	81 c2 84 01 00 00    	add    $0x184,%edx
 8580f9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8580fa1:	89 14 24             	mov    %edx,(%esp)
 8580fa4:	e8 39 1d 00 00       	call   8582ce2 <_ZNKSt6vectorISt4pairI13ENUM_NPC_MOODjESaIS2_EE2atEj>
 8580fa9:	8b 10                	mov    (%eax),%edx
 8580fab:	8b 45 0c             	mov    0xc(%ebp),%eax
 8580fae:	89 10                	mov    %edx,(%eax)
 8580fb0:	8b 45 10             	mov    0x10(%ebp),%eax
 8580fb3:	8b 00                	mov    (%eax),%eax
 8580fb5:	8b 55 08             	mov    0x8(%ebp),%edx
 8580fb8:	81 c2 84 01 00 00    	add    $0x184,%edx
 8580fbe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8580fc2:	89 14 24             	mov    %edx,(%esp)
 8580fc5:	e8 18 1d 00 00       	call   8582ce2 <_ZNKSt6vectorISt4pairI13ENUM_NPC_MOODjESaIS2_EE2atEj>
 8580fca:	8b 40 04             	mov    0x4(%eax),%eax
 8580fcd:	c9                   	leave
 8580fce:	c3                   	ret
 8580fcf:	90                   	nop

```

```c
// CNPCScript::getNextMood @ 0x8580f28

/* CNPCScript::getNextMood(ENUM_NPC_MOOD&, unsigned int&) const */

undefined4 __thiscall CNPCScript::getNextMood(CNPCScript *this,ENUM_NPC_MOOD *param_1,uint *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  cVar1 = std::
          vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
          ::empty();
  if (cVar1 == '\0') {
    *param_2 = *param_2 + 1;
    uVar3 = std::
            vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
            ::size((vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
                    *)(this + 0x184));
    if (uVar3 <= *param_2) {
      *param_2 = 0;
    }
    puVar4 = (undefined4 *)
             std::
             vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
             ::at((vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
                   *)(this + 0x184),*param_2);
    *(undefined4 *)param_1 = *puVar4;
    iVar5 = std::
            vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
            ::at((vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
                  *)(this + 0x184),*param_2);
    uVar2 = *(undefined4 *)(iVar5 + 4);
  }
  else {
    *(undefined4 *)param_1 = 1;
    *param_2 = 0;
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## getPeriodRewardType

```asm
// === 085811a4 CNPCScript::getPeriodRewardType  [0x085811a4-0x85811f7] ===
 85811a4:	55                   	push   %ebp
 85811a5:	89 e5                	mov    %esp,%ebp
 85811a7:	83 ec 18             	sub    $0x18,%esp
 85811aa:	8b 45 08             	mov    0x8(%ebp),%eax
 85811ad:	05 74 06 00 00       	add    $0x674,%eax
 85811b2:	c7 44 24 04 e0 98 ca 	movl   $0x8ca98e0,0x4(%esp)
 85811b9:	08 
 85811ba:	89 04 24             	mov    %eax,(%esp)
 85811bd:	e8 df f7 af ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 85811c2:	84 c0                	test   %al,%al
 85811c4:	74 07                	je     85811cd <_ZNK10CNPCScript19getPeriodRewardTypeEv+0x29>
 85811c6:	b8 01 00 00 00       	mov    $0x1,%eax
 85811cb:	eb 28                	jmp    85811f5 <_ZNK10CNPCScript19getPeriodRewardTypeEv+0x51>
 85811cd:	8b 45 08             	mov    0x8(%ebp),%eax
 85811d0:	05 74 06 00 00       	add    $0x674,%eax
 85811d5:	c7 44 24 04 e5 98 ca 	movl   $0x8ca98e5,0x4(%esp)
 85811dc:	08 
 85811dd:	89 04 24             	mov    %eax,(%esp)
 85811e0:	e8 bc f7 af ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 85811e5:	84 c0                	test   %al,%al
 85811e7:	74 07                	je     85811f0 <_ZNK10CNPCScript19getPeriodRewardTypeEv+0x4c>
 85811e9:	b8 02 00 00 00       	mov    $0x2,%eax
 85811ee:	eb 05                	jmp    85811f5 <_ZNK10CNPCScript19getPeriodRewardTypeEv+0x51>
 85811f0:	b8 00 00 00 00       	mov    $0x0,%eax
 85811f5:	c9                   	leave
 85811f6:	c3                   	ret
 85811f7:	90                   	nop

```

```c
// CNPCScript::getPeriodRewardType @ 0x85811a4

/* CNPCScript::getPeriodRewardType() const */

undefined4 __thiscall CNPCScript::getPeriodRewardType(CNPCScript *this)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==((string *)(this + 0x674),"item");
  if (bVar1) {
    uVar2 = 1;
  }
  else {
    bVar1 = std::operator==((string *)(this + 0x674),"quest");
    if (bVar1) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## giveGiftItem

```asm
// === 085809e4 CNPCScript::giveGiftItem  [0x085809e4-0x8580d2f] ===
 85809e4:	55                   	push   %ebp
 85809e5:	89 e5                	mov    %esp,%ebp
 85809e7:	83 ec 58             	sub    $0x58,%esp
 85809ea:	66 c7 45 d6 00 00    	movw   $0x0,-0x2a(%ebp)
 85809f0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85809f3:	89 04 24             	mov    %eax,(%esp)
 85809f6:	e8 b9 20 00 00       	call   8582ab4 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKmN25stFavorableRelationShip_t16stGiftItemInfo_tEEEC1Ev>
 85809fb:	8b 45 10             	mov    0x10(%ebp),%eax
 85809fe:	89 04 24             	mov    %eax,(%esp)
 8580a01:	e8 42 02 b9 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8580a06:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8580a09:	8b 55 0c             	mov    0xc(%ebp),%edx
 8580a0c:	89 d0                	mov    %edx,%eax
 8580a0e:	01 c0                	add    %eax,%eax
 8580a10:	01 d0                	add    %edx,%eax
 8580a12:	c1 e0 03             	shl    $0x3,%eax
 8580a15:	05 90 01 00 00       	add    $0x190,%eax
 8580a1a:	03 45 08             	add    0x8(%ebp),%eax
 8580a1d:	8d 48 0c             	lea    0xc(%eax),%ecx
 8580a20:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8580a23:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8580a26:	89 54 24 08          	mov    %edx,0x8(%esp)
 8580a2a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8580a2e:	89 04 24             	mov    %eax,(%esp)
 8580a31:	e8 8c 20 00 00       	call   8582ac2 <_ZNKSt3mapImN25stFavorableRelationShip_t16stGiftItemInfo_tESt4lessImESaISt4pairIKmS1_EEE4findERS5_>
 8580a36:	83 ec 04             	sub    $0x4,%esp
 8580a39:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8580a3c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8580a3f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8580a42:	89 d0                	mov    %edx,%eax
 8580a44:	01 c0                	add    %eax,%eax
 8580a46:	01 d0                	add    %edx,%eax
 8580a48:	c1 e0 03             	shl    $0x3,%eax
 8580a4b:	05 90 01 00 00       	add    $0x190,%eax
 8580a50:	03 45 08             	add    0x8(%ebp),%eax
 8580a53:	8d 50 0c             	lea    0xc(%eax),%edx
 8580a56:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8580a59:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580a5d:	89 04 24             	mov    %eax,(%esp)
 8580a60:	e8 89 20 00 00       	call   8582aee <_ZNKSt3mapImN25stFavorableRelationShip_t16stGiftItemInfo_tESt4lessImESaISt4pairIKmS1_EEE3endEv>
 8580a65:	83 ec 04             	sub    $0x4,%esp
 8580a68:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8580a6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8580a6f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8580a72:	89 04 24             	mov    %eax,(%esp)
 8580a75:	e8 9a 20 00 00       	call   8582b14 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKmN25stFavorableRelationShip_t16stGiftItemInfo_tEEEneERKS5_>
 8580a7a:	84 c0                	test   %al,%al
 8580a7c:	74 3a                	je     8580ab8 <_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST+0xd4>
 8580a7e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8580a81:	89 04 24             	mov    %eax,(%esp)
 8580a84:	e8 9f 20 00 00       	call   8582b28 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKmN25stFavorableRelationShip_t16stGiftItemInfo_tEEEptEv>
 8580a89:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8580a8d:	0f b7 c0             	movzwl %ax,%eax
 8580a90:	3b 45 14             	cmp    0x14(%ebp),%eax
 8580a93:	0f 96 c0             	setbe  %al
 8580a96:	84 c0                	test   %al,%al
 8580a98:	74 15                	je     8580aaf <_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST+0xcb>
 8580a9a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8580a9d:	89 04 24             	mov    %eax,(%esp)
 8580aa0:	e8 83 20 00 00       	call   8582b28 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKmN25stFavorableRelationShip_t16stGiftItemInfo_tEEEptEv>
 8580aa5:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8580aa9:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 8580aad:	eb 09                	jmp    8580ab8 <_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST+0xd4>
 8580aaf:	8b 45 18             	mov    0x18(%ebp),%eax
 8580ab2:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8580ab8:	8b 45 10             	mov    0x10(%ebp),%eax
 8580abb:	89 04 24             	mov    %eax,(%esp)
 8580abe:	e8 4f 08 b7 ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 8580ac3:	85 c0                	test   %eax,%eax
 8580ac5:	0f 95 c0             	setne  %al
 8580ac8:	84 c0                	test   %al,%al
 8580aca:	0f 84 da 00 00 00    	je     8580baa <_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST+0x1c6>
 8580ad0:	8b 45 10             	mov    0x10(%ebp),%eax
 8580ad3:	89 04 24             	mov    %eax,(%esp)
 8580ad6:	e8 37 08 b7 ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 8580adb:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8580ade:	8b 55 0c             	mov    0xc(%ebp),%edx
 8580ae1:	89 d0                	mov    %edx,%eax
 8580ae3:	01 c0                	add    %eax,%eax
 8580ae5:	01 d0                	add    %edx,%eax
 8580ae7:	c1 e0 03             	shl    $0x3,%eax
 8580aea:	05 10 02 00 00       	add    $0x210,%eax
 8580aef:	03 45 08             	add    0x8(%ebp),%eax
 8580af2:	8d 48 04             	lea    0x4(%eax),%ecx
 8580af5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8580af8:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8580afb:	89 54 24 08          	mov    %edx,0x8(%esp)
 8580aff:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8580b03:	89 04 24             	mov    %eax,(%esp)
 8580b06:	e8 b7 1f 00 00       	call   8582ac2 <_ZNKSt3mapImN25stFavorableRelationShip_t16stGiftItemInfo_tESt4lessImESaISt4pairIKmS1_EEE4findERS5_>
 8580b0b:	83 ec 04             	sub    $0x4,%esp
 8580b0e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8580b11:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8580b14:	8b 55 0c             	mov    0xc(%ebp),%edx
 8580b17:	89 d0                	mov    %edx,%eax
 8580b19:	01 c0                	add    %eax,%eax
 8580b1b:	01 d0                	add    %edx,%eax
 8580b1d:	c1 e0 03             	shl    $0x3,%eax
 8580b20:	05 10 02 00 00       	add    $0x210,%eax
 8580b25:	03 45 08             	add    0x8(%ebp),%eax
 8580b28:	8d 50 04             	lea    0x4(%eax),%edx
 8580b2b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8580b2e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580b32:	89 04 24             	mov    %eax,(%esp)
 8580b35:	e8 b4 1f 00 00       	call   8582aee <_ZNKSt3mapImN25stFavorableRelationShip_t16stGiftItemInfo_tESt4lessImESaISt4pairIKmS1_EEE3endEv>
 8580b3a:	83 ec 04             	sub    $0x4,%esp
 8580b3d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8580b40:	89 44 24 04          	mov    %eax,0x4(%esp)
 8580b44:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8580b47:	89 04 24             	mov    %eax,(%esp)
 8580b4a:	e8 c5 1f 00 00       	call   8582b14 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKmN25stFavorableRelationShip_t16stGiftItemInfo_tEEEneERKS5_>
 8580b4f:	84 c0                	test   %al,%al
 8580b51:	74 57                	je     8580baa <_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST+0x1c6>
 8580b53:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8580b56:	89 04 24             	mov    %eax,(%esp)
 8580b59:	e8 ca 1f 00 00       	call   8582b28 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKmN25stFavorableRelationShip_t16stGiftItemInfo_tEEEptEv>
 8580b5e:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8580b62:	0f b7 c0             	movzwl %ax,%eax
 8580b65:	3b 45 14             	cmp    0x14(%ebp),%eax
 8580b68:	0f 96 c0             	setbe  %al
 8580b6b:	84 c0                	test   %al,%al
 8580b6d:	74 32                	je     8580ba1 <_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST+0x1bd>
 8580b6f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8580b72:	89 04 24             	mov    %eax,(%esp)
 8580b75:	e8 ae 1f 00 00       	call   8582b28 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKmN25stFavorableRelationShip_t16stGiftItemInfo_tEEEptEv>
 8580b7a:	0f b7 50 0a          	movzwl 0xa(%eax),%edx
 8580b7e:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 8580b82:	66 39 c2             	cmp    %ax,%dx
 8580b85:	0f 9f c0             	setg   %al
 8580b88:	84 c0                	test   %al,%al
 8580b8a:	74 1e                	je     8580baa <_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST+0x1c6>
 8580b8c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8580b8f:	89 04 24             	mov    %eax,(%esp)
 8580b92:	e8 91 1f 00 00       	call   8582b28 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKmN25stFavorableRelationShip_t16stGiftItemInfo_tEEEptEv>
 8580b97:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8580b9b:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 8580b9f:	eb 09                	jmp    8580baa <_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST+0x1c6>
 8580ba1:	8b 45 18             	mov    0x18(%ebp),%eax
 8580ba4:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8580baa:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 8580bae:	66 85 c0             	test   %ax,%ax
 8580bb1:	0f 85 73 01 00 00    	jne    8580d2a <_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST+0x346>
 8580bb7:	8b 45 10             	mov    0x10(%ebp),%eax
 8580bba:	89 04 24             	mov    %eax,(%esp)
 8580bbd:	e8 86 00 b9 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8580bc2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8580bc5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8580bc8:	89 d0                	mov    %edx,%eax
 8580bca:	01 c0                	add    %eax,%eax
 8580bcc:	01 d0                	add    %edx,%eax
 8580bce:	c1 e0 03             	shl    $0x3,%eax
 8580bd1:	05 80 02 00 00       	add    $0x280,%eax
 8580bd6:	03 45 08             	add    0x8(%ebp),%eax
 8580bd9:	8d 48 0c             	lea    0xc(%eax),%ecx
 8580bdc:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8580bdf:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8580be2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8580be6:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8580bea:	89 04 24             	mov    %eax,(%esp)
 8580bed:	e8 d0 1e 00 00       	call   8582ac2 <_ZNKSt3mapImN25stFavorableRelationShip_t16stGiftItemInfo_tESt4lessImESaISt4pairIKmS1_EEE4findERS5_>
 8580bf2:	83 ec 04             	sub    $0x4,%esp
 8580bf5:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8580bf8:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8580bfb:	8b 55 0c             	mov    0xc(%ebp),%edx
 8580bfe:	89 d0                	mov    %edx,%eax
 8580c00:	01 c0                	add    %eax,%eax
 8580c02:	01 d0                	add    %edx,%eax
 8580c04:	c1 e0 03             	shl    $0x3,%eax
 8580c07:	05 80 02 00 00       	add    $0x280,%eax
 8580c0c:	03 45 08             	add    0x8(%ebp),%eax
 8580c0f:	8d 50 0c             	lea    0xc(%eax),%edx
 8580c12:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8580c15:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580c19:	89 04 24             	mov    %eax,(%esp)
 8580c1c:	e8 cd 1e 00 00       	call   8582aee <_ZNKSt3mapImN25stFavorableRelationShip_t16stGiftItemInfo_tESt4lessImESaISt4pairIKmS1_EEE3endEv>
 8580c21:	83 ec 04             	sub    $0x4,%esp
 8580c24:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8580c27:	89 44 24 04          	mov    %eax,0x4(%esp)
 8580c2b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8580c2e:	89 04 24             	mov    %eax,(%esp)
 8580c31:	e8 de 1e 00 00       	call   8582b14 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKmN25stFavorableRelationShip_t16stGiftItemInfo_tEEEneERKS5_>
 8580c36:	84 c0                	test   %al,%al
 8580c38:	74 13                	je     8580c4d <_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST+0x269>
 8580c3a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8580c3d:	89 04 24             	mov    %eax,(%esp)
 8580c40:	e8 e3 1e 00 00       	call   8582b28 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKmN25stFavorableRelationShip_t16stGiftItemInfo_tEEEptEv>
 8580c45:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8580c49:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 8580c4d:	8b 45 10             	mov    0x10(%ebp),%eax
 8580c50:	89 04 24             	mov    %eax,(%esp)
 8580c53:	e8 ba 06 b7 ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 8580c58:	85 c0                	test   %eax,%eax
 8580c5a:	0f 95 c0             	setne  %al
 8580c5d:	84 c0                	test   %al,%al
 8580c5f:	0f 84 c5 00 00 00    	je     8580d2a <_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST+0x346>
 8580c65:	8b 45 10             	mov    0x10(%ebp),%eax
 8580c68:	89 04 24             	mov    %eax,(%esp)
 8580c6b:	e8 a2 06 b7 ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 8580c70:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8580c73:	8b 55 0c             	mov    0xc(%ebp),%edx
 8580c76:	89 d0                	mov    %edx,%eax
 8580c78:	01 c0                	add    %eax,%eax
 8580c7a:	01 d0                	add    %edx,%eax
 8580c7c:	c1 e0 03             	shl    $0x3,%eax
 8580c7f:	05 00 03 00 00       	add    $0x300,%eax
 8580c84:	03 45 08             	add    0x8(%ebp),%eax
 8580c87:	8d 48 04             	lea    0x4(%eax),%ecx
 8580c8a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8580c8d:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8580c90:	89 54 24 08          	mov    %edx,0x8(%esp)
 8580c94:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8580c98:	89 04 24             	mov    %eax,(%esp)
 8580c9b:	e8 22 1e 00 00       	call   8582ac2 <_ZNKSt3mapImN25stFavorableRelationShip_t16stGiftItemInfo_tESt4lessImESaISt4pairIKmS1_EEE4findERS5_>
 8580ca0:	83 ec 04             	sub    $0x4,%esp
 8580ca3:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8580ca6:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8580ca9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8580cac:	89 d0                	mov    %edx,%eax
 8580cae:	01 c0                	add    %eax,%eax
 8580cb0:	01 d0                	add    %edx,%eax
 8580cb2:	c1 e0 03             	shl    $0x3,%eax
 8580cb5:	05 00 03 00 00       	add    $0x300,%eax
 8580cba:	03 45 08             	add    0x8(%ebp),%eax
 8580cbd:	8d 50 04             	lea    0x4(%eax),%edx
 8580cc0:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8580cc3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580cc7:	89 04 24             	mov    %eax,(%esp)
 8580cca:	e8 1f 1e 00 00       	call   8582aee <_ZNKSt3mapImN25stFavorableRelationShip_t16stGiftItemInfo_tESt4lessImESaISt4pairIKmS1_EEE3endEv>
 8580ccf:	83 ec 04             	sub    $0x4,%esp
 8580cd2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8580cd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8580cd9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8580cdc:	89 04 24             	mov    %eax,(%esp)
 8580cdf:	e8 30 1e 00 00       	call   8582b14 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKmN25stFavorableRelationShip_t16stGiftItemInfo_tEEEneERKS5_>
 8580ce4:	84 c0                	test   %al,%al
 8580ce6:	74 42                	je     8580d2a <_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST+0x346>
 8580ce8:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 8580cec:	66 85 c0             	test   %ax,%ax
 8580cef:	74 26                	je     8580d17 <_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST+0x333>
 8580cf1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8580cf4:	89 04 24             	mov    %eax,(%esp)
 8580cf7:	e8 2c 1e 00 00       	call   8582b28 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKmN25stFavorableRelationShip_t16stGiftItemInfo_tEEEptEv>
 8580cfc:	83 c0 0a             	add    $0xa,%eax
 8580cff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8580d03:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 8580d06:	89 04 24             	mov    %eax,(%esp)
 8580d09:	e8 27 1e 00 00       	call   8582b35 <_ZSt3maxIsERKT_S2_S2_>
 8580d0e:	0f b7 00             	movzwl (%eax),%eax
 8580d11:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 8580d15:	eb 13                	jmp    8580d2a <_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST+0x346>
 8580d17:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8580d1a:	89 04 24             	mov    %eax,(%esp)
 8580d1d:	e8 06 1e 00 00       	call   8582b28 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKmN25stFavorableRelationShip_t16stGiftItemInfo_tEEEptEv>
 8580d22:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8580d26:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 8580d2a:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 8580d2e:	c9                   	leave
 8580d2f:	c3                   	ret

```

```c
// CNPCScript::giveGiftItem @ 0x85809e4

/* CNPCScript::giveGiftItem(unsigned int, CItem const*, unsigned int,
   ENUM_NPC_FAVOR_GIFT_RESULT_CONST&) const */

short __thiscall
CNPCScript::giveGiftItem
          (CNPCScript *this,uint param_1,CItem *param_2,uint param_3,
          ENUM_NPC_FAVOR_GIFT_RESULT_CONST *param_4)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  ulong local_40 [3];
  ulong local_34;
  short local_2e;
  undefined4 local_2c;
  map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
  local_28 [4];
  undefined4 local_24;
  map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
  local_20 [4];
  undefined4 local_1c;
  map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
  local_18 [4];
  undefined4 local_14;
  map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
  local_10 [12];
  
  local_2e = 0;
  std::
  _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
  ::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
              *)&local_34);
  local_2c = CItem::get_index(param_2);
  std::
  map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
  ::find(local_40);
  local_34 = local_40[0];
  std::
  map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
  ::end(local_28);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
          ::operator!=((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                        *)&local_34,(_Rb_tree_const_iterator *)local_28);
  if (cVar1 != '\0') {
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
            ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                          *)&local_34);
    if (param_3 < *(ushort *)(iVar2 + 8)) {
      *(undefined4 *)param_4 = 1;
    }
    else {
      iVar2 = std::
              _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
              ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                            *)&local_34);
      local_2e = *(short *)(iVar2 + 10);
    }
  }
  iVar2 = CItem::getItemGroupName(param_2);
  if (iVar2 != 0) {
    local_24 = CItem::getItemGroupName(param_2);
    std::
    map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
    ::find(local_40);
    local_34 = local_40[0];
    std::
    map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
    ::end(local_20);
    cVar1 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
            ::operator!=((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                          *)&local_34,(_Rb_tree_const_iterator *)local_20);
    if (cVar1 != '\0') {
      iVar2 = std::
              _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
              ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                            *)&local_34);
      if (param_3 < *(ushort *)(iVar2 + 8)) {
        *(undefined4 *)param_4 = 1;
      }
      else {
        iVar2 = std::
                _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                              *)&local_34);
        if (local_2e < *(short *)(iVar2 + 10)) {
          iVar2 = std::
                  _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                                *)&local_34);
          local_2e = *(short *)(iVar2 + 10);
        }
      }
    }
  }
  if (local_2e == 0) {
    local_1c = CItem::get_index(param_2);
    std::
    map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
    ::find(local_40);
    local_34 = local_40[0];
    std::
    map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
            ::operator!=((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                          *)&local_34,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 != '\0') {
      iVar2 = std::
              _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
              ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                            *)&local_34);
      local_2e = *(short *)(iVar2 + 10);
    }
    iVar2 = CItem::getItemGroupName(param_2);
    if (iVar2 != 0) {
      local_14 = CItem::getItemGroupName(param_2);
      std::
      map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
      ::find(local_40);
      local_34 = local_40[0];
      std::
      map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
      ::end(local_10);
      cVar1 = std::
              _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
              ::operator!=((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                            *)&local_34,(_Rb_tree_const_iterator *)local_10);
      if (cVar1 != '\0') {
        if (local_2e == 0) {
          iVar2 = std::
                  _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                                *)&local_34);
          local_2e = *(short *)(iVar2 + 10);
        }
        else {
          iVar2 = std::
                  _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                                *)&local_34);
          psVar3 = std::max<short>(&local_2e,(short *)(iVar2 + 10));
          local_2e = *psVar3;
        }
      }
    }
  }
  return local_2e;
}

```

---

## isKeyItem

```asm
// === 08580e6a CNPCScript::isKeyItem  [0x08580e6a-0x8580f27] ===
 8580e6a:	55                   	push   %ebp
 8580e6b:	89 e5                	mov    %esp,%ebp
 8580e6d:	83 ec 48             	sub    $0x48,%esp
 8580e70:	8b 45 10             	mov    0x10(%ebp),%eax
 8580e73:	89 44 24 08          	mov    %eax,0x8(%esp)
 8580e77:	8b 45 0c             	mov    0xc(%ebp),%eax
 8580e7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8580e7e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8580e81:	89 04 24             	mov    %eax,(%esp)
 8580e84:	e8 1b 15 00 00       	call   85823a4 <_ZN10isSameItemC1Emj>
 8580e89:	8b 45 08             	mov    0x8(%ebp),%eax
 8580e8c:	8d 90 90 01 00 00    	lea    0x190(%eax),%edx
 8580e92:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8580e95:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580e99:	89 04 24             	mov    %eax,(%esp)
 8580e9c:	e8 2d 1d 00 00       	call   8582bce <_ZNKSt6vectorISt4pairImjESaIS1_EE3endEv>
 8580ea1:	83 ec 04             	sub    $0x4,%esp
 8580ea4:	8b 45 08             	mov    0x8(%ebp),%eax
 8580ea7:	8d 90 90 01 00 00    	lea    0x190(%eax),%edx
 8580ead:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8580eb0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580eb4:	89 04 24             	mov    %eax,(%esp)
 8580eb7:	e8 e6 1c 00 00       	call   8582ba2 <_ZNKSt6vectorISt4pairImjESaIS1_EE5beginEv>
 8580ebc:	83 ec 04             	sub    $0x4,%esp
 8580ebf:	8d 4d e0             	lea    -0x20(%ebp),%ecx
 8580ec2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8580ec5:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8580ec8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8580ecc:	89 54 24 10          	mov    %edx,0x10(%esp)
 8580ed0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8580ed3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8580ed7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8580eda:	89 44 24 04          	mov    %eax,0x4(%esp)
 8580ede:	89 0c 24             	mov    %ecx,(%esp)
 8580ee1:	e8 14 1d 00 00       	call   8582bfa <_ZSt7find_ifIN9__gnu_cxx17__normal_iteratorIPKSt4pairImjESt6vectorIS3_SaIS3_EEEE10isSameItemET_SB_SB_T0_>
 8580ee6:	83 ec 04             	sub    $0x4,%esp
 8580ee9:	8b 45 08             	mov    0x8(%ebp),%eax
 8580eec:	8d 90 90 01 00 00    	lea    0x190(%eax),%edx
 8580ef2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8580ef5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580ef9:	89 04 24             	mov    %eax,(%esp)
 8580efc:	e8 cd 1c 00 00       	call   8582bce <_ZNKSt6vectorISt4pairImjESaIS1_EE3endEv>
 8580f01:	83 ec 04             	sub    $0x4,%esp
 8580f04:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8580f07:	89 44 24 04          	mov    %eax,0x4(%esp)
 8580f0b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8580f0e:	89 04 24             	mov    %eax,(%esp)
 8580f11:	e8 3f 1d 00 00       	call   8582c55 <_ZN9__gnu_cxxeqIPKSt4pairImjESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8580f16:	84 c0                	test   %al,%al
 8580f18:	74 07                	je     8580f21 <_ZNK10CNPCScript9isKeyItemEmj+0xb7>
 8580f1a:	b8 00 00 00 00       	mov    $0x0,%eax
 8580f1f:	eb 05                	jmp    8580f26 <_ZNK10CNPCScript9isKeyItemEmj+0xbc>
 8580f21:	b8 01 00 00 00       	mov    $0x1,%eax
 8580f26:	c9                   	leave
 8580f27:	c3                   	ret

```

```c
// CNPCScript::isKeyItem @ 0x8580e6a

/* CNPCScript::isKeyItem(unsigned long, unsigned int) const */

bool __thiscall CNPCScript::isKeyItem(CNPCScript *this,ulong param_1,uint param_2)

{
  bool bVar1;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  isSameItem::isSameItem((isSameItem *)&local_20,param_1,param_2);
  std::
  vector<std::pair<unsigned_long,unsigned_int>,std::allocator<std::pair<unsigned_long,unsigned_int>>>
  ::end();
  std::
  vector<std::pair<unsigned_long,unsigned_int>,std::allocator<std::pair<unsigned_long,unsigned_int>>>
  ::begin();
  std::
  find_if<__gnu_cxx::__normal_iterator<std::pair<unsigned_long,unsigned_int>const*,std::vector<std::pair<unsigned_long,unsigned_int>,std::allocator<std::pair<unsigned_long,unsigned_int>>>>,isSameItem>
            (local_24,local_14,local_18,local_20,local_1c);
  std::
  vector<std::pair<unsigned_long,unsigned_int>,std::allocator<std::pair<unsigned_long,unsigned_int>>>
  ::end();
  bVar1 = __gnu_cxx::operator==(local_24,local_10);
  return !bVar1;
}

```

---

## isRewardLevel

```asm
// === 08580fd0 CNPCScript::isRewardLevel  [0x08580fd0-0x8581075] ===
 8580fd0:	55                   	push   %ebp
 8580fd1:	89 e5                	mov    %esp,%ebp
 8580fd3:	83 ec 38             	sub    $0x38,%esp
 8580fd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8580fd9:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 8580fdd:	8b 45 08             	mov    0x8(%ebp),%eax
 8580fe0:	8d 90 58 06 00 00    	lea    0x658(%eax),%edx
 8580fe6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8580fe9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580fed:	89 04 24             	mov    %eax,(%esp)
 8580ff0:	e8 19 1d 00 00       	call   8582d0e <_ZNKSt6vectorIN25stFavorableRelationShip_t17stLevelRewardInfoESaIS1_EE5beginEv>
 8580ff5:	83 ec 04             	sub    $0x4,%esp
 8580ff8:	eb 44                	jmp    858103e <_ZNK10CNPCScript13isRewardLevelEt+0x6e>
 8580ffa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8580ffd:	89 04 24             	mov    %eax,(%esp)
 8581000:	e8 8d 1d 00 00       	call   8582d92 <_ZNK9__gnu_cxx17__normal_iteratorIPKN25stFavorableRelationShip_t17stLevelRewardInfoESt6vectorIS2_SaIS2_EEEdeEv>
 8581005:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8581008:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 858100c:	74 13                	je     8581021 <_ZNK10CNPCScript13isRewardLevelEt+0x51>
 858100e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8581011:	0f b7 00             	movzwl (%eax),%eax
 8581014:	66 3b 45 e4          	cmp    -0x1c(%ebp),%ax
 8581018:	75 07                	jne    8581021 <_ZNK10CNPCScript13isRewardLevelEt+0x51>
 858101a:	b8 01 00 00 00       	mov    $0x1,%eax
 858101f:	eb 53                	jmp    8581074 <_ZNK10CNPCScript13isRewardLevelEt+0xa4>
 8581021:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8581024:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 858102b:	00 
 858102c:	8d 55 e8             	lea    -0x18(%ebp),%edx
 858102f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8581033:	89 04 24             	mov    %eax,(%esp)
 8581036:	e8 61 1d 00 00       	call   8582d9c <_ZN9__gnu_cxx17__normal_iteratorIPKN25stFavorableRelationShip_t17stLevelRewardInfoESt6vectorIS2_SaIS2_EEEppEi>
 858103b:	83 ec 04             	sub    $0x4,%esp
 858103e:	8b 45 08             	mov    0x8(%ebp),%eax
 8581041:	8d 90 58 06 00 00    	lea    0x658(%eax),%edx
 8581047:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858104a:	89 54 24 04          	mov    %edx,0x4(%esp)
 858104e:	89 04 24             	mov    %eax,(%esp)
 8581051:	e8 e4 1c 00 00       	call   8582d3a <_ZNKSt6vectorIN25stFavorableRelationShip_t17stLevelRewardInfoESaIS1_EE3endEv>
 8581056:	83 ec 04             	sub    $0x4,%esp
 8581059:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858105c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8581060:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8581063:	89 04 24             	mov    %eax,(%esp)
 8581066:	e8 fb 1c 00 00       	call   8582d66 <_ZN9__gnu_cxxneIPKN25stFavorableRelationShip_t17stLevelRewardInfoESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 858106b:	84 c0                	test   %al,%al
 858106d:	75 8b                	jne    8580ffa <_ZNK10CNPCScript13isRewardLevelEt+0x2a>
 858106f:	b8 00 00 00 00       	mov    $0x0,%eax
 8581074:	c9                   	leave
 8581075:	c3                   	ret

```

```c
// CNPCScript::isRewardLevel @ 0x8580fd0

/* CNPCScript::isRewardLevel(unsigned short) const */

undefined4 __thiscall CNPCScript::isRewardLevel(CNPCScript *this,ushort param_1)

{
  bool bVar1;
  __normal_iterator<stFavorableRelationShip_t::stLevelRewardInfo_const*,std::vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<stFavorableRelationShip_t::stLevelRewardInfo_const*,std::vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>>
  local_14 [4];
  ushort *local_10;
  
  std::
  vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>
  ::begin();
  while( true ) {
    std::
    vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>
    ::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if (!bVar1) {
      return 0;
    }
    local_10 = (ushort *)
               __gnu_cxx::
               __normal_iterator<stFavorableRelationShip_t::stLevelRewardInfo_const*,std::vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>>
               ::operator*(local_1c);
    if ((local_10 != (ushort *)0x0) && (*local_10 == param_1)) break;
    __gnu_cxx::
    __normal_iterator<stFavorableRelationShip_t::stLevelRewardInfo_const*,std::vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>>
    ::operator++(local_14,(int)local_1c);
  }
  return 1;
}

```

---

## load

```asm
// === 085809a6 CNPCScript::load  [0x085809a6-0x85809e3] ===
 85809a6:	55                   	push   %ebp
 85809a7:	89 e5                	mov    %esp,%ebp
 85809a9:	83 ec 18             	sub    $0x18,%esp
 85809ac:	8b 45 08             	mov    0x8(%ebp),%eax
 85809af:	8d 50 04             	lea    0x4(%eax),%edx
 85809b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85809b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85809b9:	89 14 24             	mov    %edx,(%esp)
 85809bc:	e8 a3 b8 47 00       	call   89fc264 <_Z15importNpcScriptP9NpcScriptPKc>
 85809c1:	83 f0 01             	xor    $0x1,%eax
 85809c4:	84 c0                	test   %al,%al
 85809c6:	74 07                	je     85809cf <_ZN10CNPCScript4loadEPKc+0x29>
 85809c8:	b8 00 00 00 00       	mov    $0x0,%eax
 85809cd:	eb 12                	jmp    85809e1 <_ZN10CNPCScript4loadEPKc+0x3b>
 85809cf:	8b 45 08             	mov    0x8(%ebp),%eax
 85809d2:	8b 40 04             	mov    0x4(%eax),%eax
 85809d5:	89 c2                	mov    %eax,%edx
 85809d7:	8b 45 08             	mov    0x8(%ebp),%eax
 85809da:	89 10                	mov    %edx,(%eax)
 85809dc:	b8 01 00 00 00       	mov    $0x1,%eax
 85809e1:	c9                   	leave
 85809e2:	c3                   	ret
 85809e3:	90                   	nop

```

```c
// CNPCScript::load @ 0x85809a6

/* CNPCScript::load(char const*) */

bool __thiscall CNPCScript::load(CNPCScript *this,char *param_1)

{
  char cVar1;
  
  cVar1 = importNpcScript((NpcScript *)(this + 4),param_1);
  if (cVar1 == '\x01') {
    *(undefined4 *)this = *(undefined4 *)(this + 4);
  }
  return cVar1 == '\x01';
}

```

