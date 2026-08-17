# Arad_VillageAttackRewardItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## find_ranking_reward_item

```asm
// === 081a3ef0 Arad_VillageAttackRewardItem::find_ranking_reward_item  [0x081a3ef0-0x81a3f64] ===
 81a3ef0:	55                   	push   %ebp
 81a3ef1:	89 e5                	mov    %esp,%ebp
 81a3ef3:	83 ec 28             	sub    $0x28,%esp
 81a3ef6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a3ef9:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 81a3efd:	66 83 7d f4 00       	cmpw   $0x0,-0xc(%ebp)
 81a3f02:	78 1b                	js     81a3f1f <_ZN28Arad_VillageAttackRewardItem24find_ranking_reward_itemEsRNS_8RankDataE+0x2f>
 81a3f04:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3f07:	83 c0 10             	add    $0x10,%eax
 81a3f0a:	89 04 24             	mov    %eax,(%esp)
 81a3f0d:	e8 b2 0d 00 00       	call   81a4cc4 <_ZNKSt6vectorIN28Arad_VillageAttackRewardItem8RankDataESaIS1_EE4sizeEv>
 81a3f12:	66 3b 45 f4          	cmp    -0xc(%ebp),%ax
 81a3f16:	7e 07                	jle    81a3f1f <_ZN28Arad_VillageAttackRewardItem24find_ranking_reward_itemEsRNS_8RankDataE+0x2f>
 81a3f18:	b8 01 00 00 00       	mov    $0x1,%eax
 81a3f1d:	eb 05                	jmp    81a3f24 <_ZN28Arad_VillageAttackRewardItem24find_ranking_reward_itemEsRNS_8RankDataE+0x34>
 81a3f1f:	b8 00 00 00 00       	mov    $0x0,%eax
 81a3f24:	84 c0                	test   %al,%al
 81a3f26:	74 36                	je     81a3f5e <_ZN28Arad_VillageAttackRewardItem24find_ranking_reward_itemEsRNS_8RankDataE+0x6e>
 81a3f28:	0f bf 45 f4          	movswl -0xc(%ebp),%eax
 81a3f2c:	8b 55 08             	mov    0x8(%ebp),%edx
 81a3f2f:	83 c2 10             	add    $0x10,%edx
 81a3f32:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3f36:	89 14 24             	mov    %edx,(%esp)
 81a3f39:	e8 a2 0d 00 00       	call   81a4ce0 <_ZNSt6vectorIN28Arad_VillageAttackRewardItem8RankDataESaIS1_EEixEj>
 81a3f3e:	8b 55 10             	mov    0x10(%ebp),%edx
 81a3f41:	8b 08                	mov    (%eax),%ecx
 81a3f43:	89 0a                	mov    %ecx,(%edx)
 81a3f45:	8b 48 04             	mov    0x4(%eax),%ecx
 81a3f48:	89 4a 04             	mov    %ecx,0x4(%edx)
 81a3f4b:	8b 48 08             	mov    0x8(%eax),%ecx
 81a3f4e:	89 4a 08             	mov    %ecx,0x8(%edx)
 81a3f51:	8b 40 0c             	mov    0xc(%eax),%eax
 81a3f54:	89 42 0c             	mov    %eax,0xc(%edx)
 81a3f57:	b8 01 00 00 00       	mov    $0x1,%eax
 81a3f5c:	eb 05                	jmp    81a3f63 <_ZN28Arad_VillageAttackRewardItem24find_ranking_reward_itemEsRNS_8RankDataE+0x73>
 81a3f5e:	b8 00 00 00 00       	mov    $0x0,%eax
 81a3f63:	c9                   	leave
 81a3f64:	c3                   	ret

```

```c
// Arad_VillageAttackRewardItem::find_ranking_reward_item @ 0x81a3ef0

/* Arad_VillageAttackRewardItem::find_ranking_reward_item(short,
   Arad_VillageAttackRewardItem::RankData&) */

bool __thiscall
Arad_VillageAttackRewardItem::find_ranking_reward_item
          (Arad_VillageAttackRewardItem *this,short param_1,RankData *param_2)

{
  bool bVar1;
  short sVar2;
  undefined4 *puVar3;
  
  if ((param_1 < 0) ||
     (sVar2 = std::
              vector<Arad_VillageAttackRewardItem::RankData,std::allocator<Arad_VillageAttackRewardItem::RankData>>
              ::size((vector<Arad_VillageAttackRewardItem::RankData,std::allocator<Arad_VillageAttackRewardItem::RankData>>
                      *)(this + 0x10)), sVar2 <= param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    puVar3 = (undefined4 *)
             std::
             vector<Arad_VillageAttackRewardItem::RankData,std::allocator<Arad_VillageAttackRewardItem::RankData>>
             ::operator[]((vector<Arad_VillageAttackRewardItem::RankData,std::allocator<Arad_VillageAttackRewardItem::RankData>>
                           *)(this + 0x10),(int)param_1);
    *(undefined4 *)param_2 = *puVar3;
    *(undefined4 *)(param_2 + 4) = puVar3[1];
    *(undefined4 *)(param_2 + 8) = puVar3[2];
    *(undefined4 *)(param_2 + 0xc) = puVar3[3];
  }
  return bVar1;
}

```

---

## find_reward_item

```asm
// === 081a3e3c Arad_VillageAttackRewardItem::find_reward_item  [0x081a3e3c-0x81a3eef] ===
 81a3e3c:	55                   	push   %ebp
 81a3e3d:	89 e5                	mov    %esp,%ebp
 81a3e3f:	83 ec 28             	sub    $0x28,%esp
 81a3e42:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3e45:	8d 50 04             	lea    0x4(%eax),%edx
 81a3e48:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a3e4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a3e4f:	89 04 24             	mov    %eax,(%esp)
 81a3e52:	e8 bd 0d 00 00       	call   81a4c14 <_ZNSt6vectorIN28Arad_VillageAttackRewardItem4DataESaIS1_EE3endEv>
 81a3e57:	83 ec 04             	sub    $0x4,%esp
 81a3e5a:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3e5d:	8d 50 04             	lea    0x4(%eax),%edx
 81a3e60:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a3e63:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a3e67:	89 04 24             	mov    %eax,(%esp)
 81a3e6a:	e8 81 0d 00 00       	call   81a4bf0 <_ZNSt6vectorIN28Arad_VillageAttackRewardItem4DataESaIS1_EE5beginEv>
 81a3e6f:	83 ec 04             	sub    $0x4,%esp
 81a3e72:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a3e75:	8b 55 10             	mov    0x10(%ebp),%edx
 81a3e78:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81a3e7c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81a3e7f:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a3e83:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81a3e86:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a3e8a:	89 04 24             	mov    %eax,(%esp)
 81a3e8d:	e8 a8 0d 00 00       	call   81a4c3a <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPN28Arad_VillageAttackRewardItem4DataESt6vectorIS3_SaIS3_EEEES3_ET_S9_S9_RKT0_>
 81a3e92:	83 ec 04             	sub    $0x4,%esp
 81a3e95:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3e98:	8d 50 04             	lea    0x4(%eax),%edx
 81a3e9b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a3e9e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a3ea2:	89 04 24             	mov    %eax,(%esp)
 81a3ea5:	e8 6a 0d 00 00       	call   81a4c14 <_ZNSt6vectorIN28Arad_VillageAttackRewardItem4DataESaIS1_EE3endEv>
 81a3eaa:	83 ec 04             	sub    $0x4,%esp
 81a3ead:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a3eb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3eb4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a3eb7:	89 04 24             	mov    %eax,(%esp)
 81a3eba:	e8 cf 0d 00 00       	call   81a4c8e <_ZN9__gnu_cxxneIPN28Arad_VillageAttackRewardItem4DataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 81a3ebf:	84 c0                	test   %al,%al
 81a3ec1:	74 25                	je     81a3ee8 <_ZN28Arad_VillageAttackRewardItem16find_reward_itemEiRNS_4DataE+0xac>
 81a3ec3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a3ec6:	89 04 24             	mov    %eax,(%esp)
 81a3ec9:	e8 ec 0d 00 00       	call   81a4cba <_ZNK9__gnu_cxx17__normal_iteratorIPN28Arad_VillageAttackRewardItem4DataESt6vectorIS2_SaIS2_EEEdeEv>
 81a3ece:	8b 55 10             	mov    0x10(%ebp),%edx
 81a3ed1:	8b 08                	mov    (%eax),%ecx
 81a3ed3:	89 0a                	mov    %ecx,(%edx)
 81a3ed5:	8b 48 04             	mov    0x4(%eax),%ecx
 81a3ed8:	89 4a 04             	mov    %ecx,0x4(%edx)
 81a3edb:	8b 40 08             	mov    0x8(%eax),%eax
 81a3ede:	89 42 08             	mov    %eax,0x8(%edx)
 81a3ee1:	b8 01 00 00 00       	mov    $0x1,%eax
 81a3ee6:	eb 05                	jmp    81a3eed <_ZN28Arad_VillageAttackRewardItem16find_reward_itemEiRNS_4DataE+0xb1>
 81a3ee8:	b8 00 00 00 00       	mov    $0x0,%eax
 81a3eed:	c9                   	leave
 81a3eee:	c3                   	ret
 81a3eef:	90                   	nop

```

```c
// Arad_VillageAttackRewardItem::find_reward_item @ 0x81a3e3c

/* Arad_VillageAttackRewardItem::find_reward_item(int, Arad_VillageAttackRewardItem::Data&) */

bool __thiscall
Arad_VillageAttackRewardItem::find_reward_item
          (Arad_VillageAttackRewardItem *this,int param_1,Data *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  __normal_iterator<Arad_VillageAttackRewardItem::Data*,std::vector<Arad_VillageAttackRewardItem::Data,std::allocator<Arad_VillageAttackRewardItem::Data>>>
  local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  std::vector<Arad_VillageAttackRewardItem::Data,std::allocator<Arad_VillageAttackRewardItem::Data>>
  ::end();
  std::vector<Arad_VillageAttackRewardItem::Data,std::allocator<Arad_VillageAttackRewardItem::Data>>
  ::begin();
  std::
  find<__gnu_cxx::__normal_iterator<Arad_VillageAttackRewardItem::Data*,std::vector<Arad_VillageAttackRewardItem::Data,std::allocator<Arad_VillageAttackRewardItem::Data>>>,Arad_VillageAttackRewardItem::Data>
            (local_1c,local_14,local_18,param_2);
  std::vector<Arad_VillageAttackRewardItem::Data,std::allocator<Arad_VillageAttackRewardItem::Data>>
  ::end();
  bVar1 = __gnu_cxx::operator!=(local_1c,local_10);
  if (bVar1) {
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<Arad_VillageAttackRewardItem::Data*,std::vector<Arad_VillageAttackRewardItem::Data,std::allocator<Arad_VillageAttackRewardItem::Data>>>
             ::operator*(local_1c);
    *(undefined4 *)param_2 = *puVar2;
    *(undefined4 *)(param_2 + 4) = puVar2[1];
    *(undefined4 *)(param_2 + 8) = puVar2[2];
  }
  return bVar1;
}

```

---

## parsing

```asm
// === 081a3b48 Arad_VillageAttackRewardItem::parsing  [0x081a3b48-0x81a3e3b] ===
 81a3b48:	55                   	push   %ebp
 81a3b49:	89 e5                	mov    %esp,%ebp
 81a3b4b:	56                   	push   %esi
 81a3b4c:	53                   	push   %ebx
 81a3b4d:	81 ec b0 00 00 00    	sub    $0xb0,%esp
 81a3b53:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a3b59:	89 04 24             	mov    %eax,(%esp)
 81a3b5c:	e8 13 79 fd ff       	call   817b474 <_ZN11Arad_ScriptC1Ev>
 81a3b61:	c7 44 24 08 8d c9 ba 	movl   $0x8bac98d,0x8(%esp)
 81a3b68:	08 
 81a3b69:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a3b6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3b70:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a3b76:	89 04 24             	mov    %eax,(%esp)
 81a3b79:	e8 d2 7d fd ff       	call   817b950 <_ZN11Arad_Script4LoadEPKcS1_>
 81a3b7e:	83 f0 01             	xor    $0x1,%eax
 81a3b81:	84 c0                	test   %al,%al
 81a3b83:	74 0a                	je     81a3b8f <_ZN28Arad_VillageAttackRewardItem7parsingEPc+0x47>
 81a3b85:	bb 32 02 00 00       	mov    $0x232,%ebx
 81a3b8a:	e9 92 02 00 00       	jmp    81a3e21 <_ZN28Arad_VillageAttackRewardItem7parsingEPc+0x2d9>
 81a3b8f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a3b95:	89 04 24             	mov    %eax,(%esp)
 81a3b98:	e8 df 06 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a3b9d:	85 c0                	test   %eax,%eax
 81a3b9f:	0f 94 c0             	sete   %al
 81a3ba2:	84 c0                	test   %al,%al
 81a3ba4:	74 0a                	je     81a3bb0 <_ZN28Arad_VillageAttackRewardItem7parsingEPc+0x68>
 81a3ba6:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a3bab:	e9 71 02 00 00       	jmp    81a3e21 <_ZN28Arad_VillageAttackRewardItem7parsingEPc+0x2d9>
 81a3bb0:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81a3bb7:	e9 09 01 00 00       	jmp    81a3cc5 <_ZN28Arad_VillageAttackRewardItem7parsingEPc+0x17d>
 81a3bbc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a3bbf:	89 04 24             	mov    %eax,(%esp)
 81a3bc2:	e8 5b 06 00 00       	call   81a4222 <_ZN28Arad_VillageAttackRewardItem4DataC1Ev>
 81a3bc7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81a3bca:	89 04 24             	mov    %eax,(%esp)
 81a3bcd:	e8 50 06 00 00       	call   81a4222 <_ZN28Arad_VillageAttackRewardItem4DataC1Ev>
 81a3bd2:	c7 44 24 08 99 c9 ba 	movl   $0x8bac999,0x8(%esp)
 81a3bd9:	08 
 81a3bda:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a3bdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3be1:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a3be7:	89 04 24             	mov    %eax,(%esp)
 81a3bea:	e8 91 8b fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a3bef:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81a3bf2:	c7 44 24 08 fd c8 ba 	movl   $0x8bac8fd,0x8(%esp)
 81a3bf9:	08 
 81a3bfa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a3bfd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3c01:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a3c07:	89 04 24             	mov    %eax,(%esp)
 81a3c0a:	e8 71 8b fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a3c0f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81a3c12:	c7 44 24 08 27 c7 ba 	movl   $0x8bac727,0x8(%esp)
 81a3c19:	08 
 81a3c1a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a3c1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3c21:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a3c27:	89 04 24             	mov    %eax,(%esp)
 81a3c2a:	e8 51 8b fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a3c2f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81a3c32:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81a3c35:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81a3c38:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81a3c3b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81a3c3e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81a3c41:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81a3c44:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81a3c47:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 81a3c4a:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a3c4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3c52:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3c55:	89 04 24             	mov    %eax,(%esp)
 81a3c58:	e8 df 01 00 00       	call   81a3e3c <_ZN28Arad_VillageAttackRewardItem16find_reward_itemEiRNS_4DataE>
 81a3c5d:	84 c0                	test   %al,%al
 81a3c5f:	74 4b                	je     81a3cac <_ZN28Arad_VillageAttackRewardItem7parsingEPc+0x164>
 81a3c61:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 81a3c64:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81a3c67:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81a3c6a:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 81a3c6e:	89 54 24 18          	mov    %edx,0x18(%esp)
 81a3c72:	89 44 24 14          	mov    %eax,0x14(%esp)
 81a3c76:	c7 44 24 10 a4 c9 ba 	movl   $0x8bac9a4,0x10(%esp)
 81a3c7d:	08 
 81a3c7e:	c7 44 24 0c 44 02 00 	movl   $0x244,0xc(%esp)
 81a3c85:	00 
 81a3c86:	c7 44 24 08 20 d6 ba 	movl   $0x8bad620,0x8(%esp)
 81a3c8d:	08 
 81a3c8e:	c7 44 24 04 0c c8 ba 	movl   $0x8bac80c,0x4(%esp)
 81a3c95:	08 
 81a3c96:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81a3c9d:	e8 68 ff 92 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81a3ca2:	bb 45 02 00 00       	mov    $0x245,%ebx
 81a3ca7:	e9 75 01 00 00       	jmp    81a3e21 <_ZN28Arad_VillageAttackRewardItem7parsingEPc+0x2d9>
 81a3cac:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3caf:	8d 50 04             	lea    0x4(%eax),%edx
 81a3cb2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81a3cb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3cb9:	89 14 24             	mov    %edx,(%esp)
 81a3cbc:	e8 47 0e 00 00       	call   81a4b08 <_ZNSt6vectorIN28Arad_VillageAttackRewardItem4DataESaIS1_EE9push_backERKS1_>
 81a3cc1:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81a3cc5:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a3ccb:	89 04 24             	mov    %eax,(%esp)
 81a3cce:	e8 a9 05 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a3cd3:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 81a3cd6:	0f 9f c0             	setg   %al
 81a3cd9:	84 c0                	test   %al,%al
 81a3cdb:	0f 85 db fe ff ff    	jne    81a3bbc <_ZN28Arad_VillageAttackRewardItem7parsingEPc+0x74>
 81a3ce1:	c7 44 24 08 de c9 ba 	movl   $0x8bac9de,0x8(%esp)
 81a3ce8:	08 
 81a3ce9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a3cec:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3cf0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a3cf6:	89 04 24             	mov    %eax,(%esp)
 81a3cf9:	e8 52 7c fd ff       	call   817b950 <_ZN11Arad_Script4LoadEPKcS1_>
 81a3cfe:	83 f0 01             	xor    $0x1,%eax
 81a3d01:	84 c0                	test   %al,%al
 81a3d03:	74 0a                	je     81a3d0f <_ZN28Arad_VillageAttackRewardItem7parsingEPc+0x1c7>
 81a3d05:	bb 4c 02 00 00       	mov    $0x24c,%ebx
 81a3d0a:	e9 12 01 00 00       	jmp    81a3e21 <_ZN28Arad_VillageAttackRewardItem7parsingEPc+0x2d9>
 81a3d0f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a3d15:	89 04 24             	mov    %eax,(%esp)
 81a3d18:	e8 5f 05 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a3d1d:	85 c0                	test   %eax,%eax
 81a3d1f:	0f 94 c0             	sete   %al
 81a3d22:	84 c0                	test   %al,%al
 81a3d24:	74 0a                	je     81a3d30 <_ZN28Arad_VillageAttackRewardItem7parsingEPc+0x1e8>
 81a3d26:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a3d2b:	e9 f1 00 00 00       	jmp    81a3e21 <_ZN28Arad_VillageAttackRewardItem7parsingEPc+0x2d9>
 81a3d30:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81a3d37:	e9 a4 00 00 00       	jmp    81a3de0 <_ZN28Arad_VillageAttackRewardItem7parsingEPc+0x298>
 81a3d3c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81a3d3f:	89 04 24             	mov    %eax,(%esp)
 81a3d42:	e8 11 05 00 00       	call   81a4258 <_ZN28Arad_VillageAttackRewardItem8RankDataC1Ev>
 81a3d47:	c7 44 24 08 fd c8 ba 	movl   $0x8bac8fd,0x8(%esp)
 81a3d4e:	08 
 81a3d4f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a3d52:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3d56:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a3d5c:	89 04 24             	mov    %eax,(%esp)
 81a3d5f:	e8 1c 8a fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a3d64:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81a3d67:	c7 44 24 08 27 c7 ba 	movl   $0x8bac727,0x8(%esp)
 81a3d6e:	08 
 81a3d6f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a3d72:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3d76:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a3d7c:	89 04 24             	mov    %eax,(%esp)
 81a3d7f:	e8 fc 89 fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a3d84:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81a3d87:	c7 44 24 08 ec c9 ba 	movl   $0x8bac9ec,0x8(%esp)
 81a3d8e:	08 
 81a3d8f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a3d92:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3d96:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a3d9c:	89 04 24             	mov    %eax,(%esp)
 81a3d9f:	e8 dc 89 fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a3da4:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81a3da7:	c7 44 24 08 f8 c9 ba 	movl   $0x8bac9f8,0x8(%esp)
 81a3dae:	08 
 81a3daf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a3db2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3db6:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a3dbc:	89 04 24             	mov    %eax,(%esp)
 81a3dbf:	e8 bc 89 fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a3dc4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81a3dc7:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3dca:	8d 50 10             	lea    0x10(%eax),%edx
 81a3dcd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81a3dd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3dd4:	89 14 24             	mov    %edx,(%esp)
 81a3dd7:	e8 a0 0d 00 00       	call   81a4b7c <_ZNSt6vectorIN28Arad_VillageAttackRewardItem8RankDataESaIS1_EE9push_backERKS1_>
 81a3ddc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81a3de0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a3de6:	89 04 24             	mov    %eax,(%esp)
 81a3de9:	e8 8e 04 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a3dee:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81a3df1:	0f 9f c0             	setg   %al
 81a3df4:	84 c0                	test   %al,%al
 81a3df6:	0f 85 40 ff ff ff    	jne    81a3d3c <_ZN28Arad_VillageAttackRewardItem7parsingEPc+0x1f4>
 81a3dfc:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a3e01:	eb 1e                	jmp    81a3e21 <_ZN28Arad_VillageAttackRewardItem7parsingEPc+0x2d9>
 81a3e03:	89 d3                	mov    %edx,%ebx
 81a3e05:	89 c6                	mov    %eax,%esi
 81a3e07:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a3e0d:	89 04 24             	mov    %eax,(%esp)
 81a3e10:	e8 0f 78 fd ff       	call   817b624 <_ZN11Arad_ScriptD1Ev>
 81a3e15:	89 f0                	mov    %esi,%eax
 81a3e17:	89 da                	mov    %ebx,%edx
 81a3e19:	89 04 24             	mov    %eax,(%esp)
 81a3e1c:	e8 2f f9 93 00       	call   8ae3750 <_Unwind_Resume>
 81a3e21:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a3e27:	89 04 24             	mov    %eax,(%esp)
 81a3e2a:	e8 f5 77 fd ff       	call   817b624 <_ZN11Arad_ScriptD1Ev>
 81a3e2f:	89 d8                	mov    %ebx,%eax
 81a3e31:	81 c4 b0 00 00 00    	add    $0xb0,%esp
 81a3e37:	5b                   	pop    %ebx
 81a3e38:	5e                   	pop    %esi
 81a3e39:	5d                   	pop    %ebp
 81a3e3a:	c3                   	ret
 81a3e3b:	90                   	nop

```

```c
// Arad_VillageAttackRewardItem::parsing @ 0x81a3b48

/* Arad_VillageAttackRewardItem::parsing(char*) */

undefined4 __thiscall
Arad_VillageAttackRewardItem::parsing(Arad_VillageAttackRewardItem *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Arad_Script local_90 [84];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  Arad_Script::Arad_Script(local_90);
                    /* try { // try from 081a3b79 to 081a3ddb has its CatchHandler @ 081a3e03 */
  cVar1 = Arad_Script::Load(local_90,param_1,"reward_item");
  if (cVar1 == '\x01') {
    iVar2 = Arad_Script::GetRowNum(local_90);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      local_14 = 0;
      while( true ) {
        iVar2 = Arad_Script::GetRowNum(local_90);
        if (iVar2 <= local_14) break;
        Data::Data((Data *)&local_20);
        Data::Data((Data *)&local_2c);
        local_2c = Arad_Script::GetInt(local_90,local_14,"win_point");
        local_28 = Arad_Script::GetInt(local_90,local_14,"item_index");
        local_24 = Arad_Script::GetInt(local_90,local_14,"item_count");
        local_20 = local_2c;
        local_1c = local_28;
        local_18 = local_24;
        cVar1 = find_reward_item(this,local_2c,(Data *)&local_20);
        if (cVar1 != '\0') {
          LogManager::logFormat
                    (1,"localjapan/Arad_Script_Loader.cpp",
                     "virtual int Arad_VillageAttackRewardItem::parsing(char*)",0x244,
                     "[ERROR] Already exist data. (point:%d, item:%u, count:%d)",local_2c,local_28,
                     local_24);
          uVar3 = 0x245;
          goto LAB_081a3e21;
        }
        std::
        vector<Arad_VillageAttackRewardItem::Data,std::allocator<Arad_VillageAttackRewardItem::Data>>
        ::push_back((vector<Arad_VillageAttackRewardItem::Data,std::allocator<Arad_VillageAttackRewardItem::Data>>
                     *)(this + 4),(Data *)&local_2c);
        local_14 = local_14 + 1;
      }
      cVar1 = Arad_Script::Load(local_90,param_1,"reward_ranker");
      if (cVar1 == '\x01') {
        iVar2 = Arad_Script::GetRowNum(local_90);
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          local_10 = 0;
          while( true ) {
            iVar2 = Arad_Script::GetRowNum(local_90);
            if (iVar2 <= local_10) break;
            RankData::RankData((RankData *)&local_3c);
            local_3c = Arad_Script::GetInt(local_90,local_10,"item_index");
            local_34 = Arad_Script::GetInt(local_90,local_10,"item_count");
            local_38 = Arad_Script::GetInt(local_90,local_10,"item_index2");
            local_30 = Arad_Script::GetInt(local_90,local_10,"item_count2");
            std::
            vector<Arad_VillageAttackRewardItem::RankData,std::allocator<Arad_VillageAttackRewardItem::RankData>>
            ::push_back((vector<Arad_VillageAttackRewardItem::RankData,std::allocator<Arad_VillageAttackRewardItem::RankData>>
                         *)(this + 0x10),(RankData *)&local_3c);
            local_10 = local_10 + 1;
          }
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0x24c;
      }
    }
  }
  else {
    uVar3 = 0x232;
  }
LAB_081a3e21:
  Arad_Script::~Arad_Script(local_90);
  return uVar3;
}

```

