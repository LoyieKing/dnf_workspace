# CSuccessJobNode

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## CSuccessJobNode

```asm
// === 08484c30 CSuccessJobNode::CSuccessJobNode  [0x08484c30-0x8484d4b] ===
 8484c30:	55                   	push   %ebp
 8484c31:	89 e5                	mov    %esp,%ebp
 8484c33:	56                   	push   %esi
 8484c34:	53                   	push   %ebx
 8484c35:	83 ec 40             	sub    $0x40,%esp
 8484c38:	8b 45 08             	mov    0x8(%ebp),%eax
 8484c3b:	89 04 24             	mov    %eax,(%esp)
 8484c3e:	e8 81 25 00 00       	call   84871c4 <_ZNSt3mapIi8JobPartySt4lessIiESaISt4pairIKiS0_EEEC1Ev>
 8484c43:	8b 45 08             	mov    0x8(%ebp),%eax
 8484c46:	83 c0 18             	add    $0x18,%eax
 8484c49:	89 04 24             	mov    %eax,(%esp)
 8484c4c:	e8 eb 1b 00 00       	call   848683c <_ZN9CharacterC1Ev>
 8484c51:	c7 45 d0 02 00 00 00 	movl   $0x2,-0x30(%ebp)
 8484c58:	e9 a1 00 00 00       	jmp    8484cfe <_ZN15CSuccessJobNodeC1Ev+0xce>
 8484c5d:	8b 55 08             	mov    0x8(%ebp),%edx
 8484c60:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8484c63:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484c67:	89 04 24             	mov    %eax,(%esp)
 8484c6a:	e8 fb 25 00 00       	call   848726a <_ZNSt3mapIi8JobPartySt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8484c6f:	83 ec 04             	sub    $0x4,%esp
 8484c72:	8b 55 08             	mov    0x8(%ebp),%edx
 8484c75:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8484c78:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 8484c7b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8484c7f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484c83:	89 04 24             	mov    %eax,(%esp)
 8484c86:	e8 b3 25 00 00       	call   848723e <_ZNSt3mapIi8JobPartySt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8484c8b:	83 ec 04             	sub    $0x4,%esp
 8484c8e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8484c91:	89 44 24 04          	mov    %eax,0x4(%esp)
 8484c95:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8484c98:	89 04 24             	mov    %eax,(%esp)
 8484c9b:	e8 f0 25 00 00       	call   8487290 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi8JobPartyEEneERKS4_>
 8484ca0:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8484ca3:	89 04 24             	mov    %eax,(%esp)
 8484ca6:	e8 87 1d 00 00       	call   8486a32 <_ZN8JobPartyC1Ev>
 8484cab:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8484cae:	8d 55 f4             	lea    -0xc(%ebp),%edx
 8484cb1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8484cb5:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8484cb8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484cbc:	89 04 24             	mov    %eax,(%esp)
 8484cbf:	e8 e0 25 00 00       	call   84872a4 <_ZSt9make_pairIRi8JobPartyESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 8484cc4:	83 ec 04             	sub    $0x4,%esp
 8484cc7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8484cca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8484cce:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8484cd1:	89 04 24             	mov    %eax,(%esp)
 8484cd4:	e8 09 26 00 00       	call   84872e2 <_ZNSt4pairIKi8JobPartyEC1IiS1_EEOS_IT_T0_E>
 8484cd9:	8b 55 08             	mov    0x8(%ebp),%edx
 8484cdc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8484cdf:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 8484ce2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8484ce6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484cea:	89 04 24             	mov    %eax,(%esp)
 8484ced:	e8 20 26 00 00       	call   8487312 <_ZNSt3mapIi8JobPartySt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 8484cf2:	83 ec 04             	sub    $0x4,%esp
 8484cf5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8484cf8:	83 c0 01             	add    $0x1,%eax
 8484cfb:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8484cfe:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8484d01:	83 f8 04             	cmp    $0x4,%eax
 8484d04:	0f 9e c0             	setle  %al
 8484d07:	84 c0                	test   %al,%al
 8484d09:	0f 85 4e ff ff ff    	jne    8484c5d <_ZN15CSuccessJobNodeC1Ev+0x2d>
 8484d0f:	eb 31                	jmp    8484d42 <_ZN15CSuccessJobNodeC1Ev+0x112>
 8484d11:	89 d3                	mov    %edx,%ebx
 8484d13:	89 c6                	mov    %eax,%esi
 8484d15:	8b 45 08             	mov    0x8(%ebp),%eax
 8484d18:	83 c0 18             	add    $0x18,%eax
 8484d1b:	89 04 24             	mov    %eax,(%esp)
 8484d1e:	e8 43 1b 00 00       	call   8486866 <_ZN9CharacterD1Ev>
 8484d23:	89 f0                	mov    %esi,%eax
 8484d25:	89 da                	mov    %ebx,%edx
 8484d27:	89 d3                	mov    %edx,%ebx
 8484d29:	89 c6                	mov    %eax,%esi
 8484d2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8484d2e:	89 04 24             	mov    %eax,(%esp)
 8484d31:	e8 e4 1e 00 00       	call   8486c1a <_ZNSt3mapIi8JobPartySt4lessIiESaISt4pairIKiS0_EEED1Ev>
 8484d36:	89 f0                	mov    %esi,%eax
 8484d38:	89 da                	mov    %ebx,%edx
 8484d3a:	89 04 24             	mov    %eax,(%esp)
 8484d3d:	e8 0e ea 65 00       	call   8ae3750 <_Unwind_Resume>
 8484d42:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8484d45:	83 c4 00             	add    $0x0,%esp
 8484d48:	5b                   	pop    %ebx
 8484d49:	5e                   	pop    %esi
 8484d4a:	5d                   	pop    %ebp
 8484d4b:	c3                   	ret

```

```c
// CSuccessJobNode::CSuccessJobNode @ 0x8484c30

/* CSuccessJobNode::CSuccessJobNode() */

void __thiscall CSuccessJobNode::CSuccessJobNode(CSuccessJobNode *this)

{
  int local_34;
  map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>> local_30 [4];
  _Rb_tree_iterator<std::pair<int_const,JobParty>> local_2c [4];
  pair local_28 [8];
  pair<int_const,JobParty> local_20 [8];
  int local_18 [2];
  JobParty local_10 [4];
  
  std::map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>>::map
            ((map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>> *)this)
  ;
  Character::Character((Character *)(this + 0x18));
  for (local_34 = 2; local_34 < 5; local_34 = local_34 + 1) {
                    /* try { // try from 08484c6a to 08484cf1 has its CatchHandler @ 08484d11 */
    std::map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>>::end
              (local_30);
    std::map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>>::find
              ((int *)local_2c);
    std::_Rb_tree_iterator<std::pair<int_const,JobParty>>::operator!=
              (local_2c,(_Rb_tree_iterator *)local_30);
    JobParty::JobParty(local_10);
    std::make_pair<int&,JobParty>(local_18,(JobParty *)&local_34);
    std::pair<int_const,JobParty>::pair<int,JobParty>(local_20,(pair *)local_18);
    std::map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>>::insert
              (local_28);
  }
  return;
}

```

---

## InsertDB

```asm
// === 08486234 CSuccessJobNode::InsertDB  [0x08486234-0x8486585] ===
 8486234:	55                   	push   %ebp
 8486235:	89 e5                	mov    %esp,%ebp
 8486237:	57                   	push   %edi
 8486238:	56                   	push   %esi
 8486239:	53                   	push   %ebx
 848623a:	81 ec ec 00 00 00    	sub    $0xec,%esp
 8486240:	8b 45 10             	mov    0x10(%ebp),%eax
 8486243:	88 45 a4             	mov    %al,-0x5c(%ebp)
 8486246:	8b 45 08             	mov    0x8(%ebp),%eax
 8486249:	8b 40 54             	mov    0x54(%eax),%eax
 848624c:	85 c0                	test   %eax,%eax
 848624e:	0f 84 98 01 00 00    	je     84863ec <_ZN15CSuccessJobNode8InsertDBERK10DungeonKeybRK6JobKey+0x1b8>
 8486254:	e8 20 f9 ff ff       	call   8485b79 <_Z16GetMySqLInstancev>
 8486259:	89 45 d8             	mov    %eax,-0x28(%ebp)
 848625c:	8b 45 08             	mov    0x8(%ebp),%eax
 848625f:	8b 40 40             	mov    0x40(%eax),%eax
 8486262:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 8486268:	8b 45 14             	mov    0x14(%ebp),%eax
 848626b:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 848626f:	0f be c0             	movsbl %al,%eax
 8486272:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 8486278:	8b 45 08             	mov    0x8(%ebp),%eax
 848627b:	8b 40 3c             	mov    0x3c(%eax),%eax
 848627e:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 8486284:	8b 45 14             	mov    0x14(%ebp),%eax
 8486287:	8b 00                	mov    (%eax),%eax
 8486289:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 848628f:	0f b6 45 a4          	movzbl -0x5c(%ebp),%eax
 8486293:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8486299:	8b 45 0c             	mov    0xc(%ebp),%eax
 848629c:	8b 40 04             	mov    0x4(%eax),%eax
 848629f:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 84862a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84862a8:	8b 00                	mov    (%eax),%eax
 84862aa:	89 45 80             	mov    %eax,-0x80(%ebp)
 84862ad:	e8 cf 5e c4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84862b2:	89 04 24             	mov    %eax,(%esp)
 84862b5:	e8 10 48 cc ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 84862ba:	89 45 84             	mov    %eax,-0x7c(%ebp)
 84862bd:	8b 45 08             	mov    0x8(%ebp),%eax
 84862c0:	8b 40 54             	mov    0x54(%eax),%eax
 84862c3:	89 45 88             	mov    %eax,-0x78(%ebp)
 84862c6:	8b 45 08             	mov    0x8(%ebp),%eax
 84862c9:	8b 40 34             	mov    0x34(%eax),%eax
 84862cc:	89 45 8c             	mov    %eax,-0x74(%ebp)
 84862cf:	8b 45 08             	mov    0x8(%ebp),%eax
 84862d2:	8b 40 30             	mov    0x30(%eax),%eax
 84862d5:	89 45 90             	mov    %eax,-0x70(%ebp)
 84862d8:	8b 45 08             	mov    0x8(%ebp),%eax
 84862db:	8b 78 2c             	mov    0x2c(%eax),%edi
 84862de:	8b 45 08             	mov    0x8(%ebp),%eax
 84862e1:	8b 70 28             	mov    0x28(%eax),%esi
 84862e4:	8b 45 08             	mov    0x8(%ebp),%eax
 84862e7:	8b 58 24             	mov    0x24(%eax),%ebx
 84862ea:	8b 45 08             	mov    0x8(%ebp),%eax
 84862ed:	8b 48 20             	mov    0x20(%eax),%ecx
 84862f0:	8b 45 08             	mov    0x8(%ebp),%eax
 84862f3:	8b 50 1c             	mov    0x1c(%eax),%edx
 84862f6:	8b 45 08             	mov    0x8(%ebp),%eax
 84862f9:	8b 40 18             	mov    0x18(%eax),%eax
 84862fc:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8486302:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8486308:	89 44 24 48          	mov    %eax,0x48(%esp)
 848630c:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8486312:	89 44 24 44          	mov    %eax,0x44(%esp)
 8486316:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 848631c:	89 44 24 40          	mov    %eax,0x40(%esp)
 8486320:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8486326:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 848632a:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8486330:	89 44 24 38          	mov    %eax,0x38(%esp)
 8486334:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 848633a:	89 44 24 34          	mov    %eax,0x34(%esp)
 848633e:	8b 45 80             	mov    -0x80(%ebp),%eax
 8486341:	89 44 24 30          	mov    %eax,0x30(%esp)
 8486345:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8486348:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 848634c:	8b 45 88             	mov    -0x78(%ebp),%eax
 848634f:	89 44 24 28          	mov    %eax,0x28(%esp)
 8486353:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8486356:	89 44 24 24          	mov    %eax,0x24(%esp)
 848635a:	8b 45 90             	mov    -0x70(%ebp),%eax
 848635d:	89 44 24 20          	mov    %eax,0x20(%esp)
 8486361:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8486365:	89 74 24 18          	mov    %esi,0x18(%esp)
 8486369:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 848636d:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8486371:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8486375:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 848637b:	89 54 24 08          	mov    %edx,0x8(%esp)
 848637f:	c7 44 24 04 80 47 c7 	movl   $0x8c74780,0x4(%esp)
 8486386:	08 
 8486387:	8b 45 d8             	mov    -0x28(%ebp),%eax
 848638a:	89 04 24             	mov    %eax,(%esp)
 848638d:	e8 2e de f6 ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8486392:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8486399:	00 
 848639a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 848639d:	89 04 24             	mov    %eax,(%esp)
 84863a0:	e8 81 df f6 ff       	call   83f4326 <_ZN5MySQL4execEb>
 84863a5:	83 f0 01             	xor    $0x1,%eax
 84863a8:	84 c0                	test   %al,%al
 84863aa:	74 40                	je     84863ec <_ZN15CSuccessJobNode8InsertDBERK10DungeonKeybRK6JobKey+0x1b8>
 84863ac:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84863b3:	00 
 84863b4:	c7 44 24 08 f2 01 00 	movl   $0x1f2,0x8(%esp)
 84863bb:	00 
 84863bc:	c7 44 24 04 a0 55 c7 	movl   $0x8c755a0,0x4(%esp)
 84863c3:	08 
 84863c4:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84863c7:	89 04 24             	mov    %eax,(%esp)
 84863ca:	e8 49 93 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84863cf:	c7 44 24 04 ac 48 c7 	movl   $0x8c748ac,0x4(%esp)
 84863d6:	08 
 84863d7:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84863da:	89 04 24             	mov    %eax,(%esp)
 84863dd:	e8 a6 93 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84863e2:	b8 00 00 00 00       	mov    $0x0,%eax
 84863e7:	e9 8f 01 00 00       	jmp    848657b <_ZN15CSuccessJobNode8InsertDBERK10DungeonKeybRK6JobKey+0x347>
 84863ec:	8b 45 08             	mov    0x8(%ebp),%eax
 84863ef:	83 c0 18             	add    $0x18,%eax
 84863f2:	89 04 24             	mov    %eax,(%esp)
 84863f5:	e8 1e 04 00 00       	call   8486818 <_ZN9Character5ResetEv>
 84863fa:	8b 55 08             	mov    0x8(%ebp),%edx
 84863fd:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8486400:	89 54 24 04          	mov    %edx,0x4(%esp)
 8486404:	89 04 24             	mov    %eax,(%esp)
 8486407:	e8 74 1a 00 00       	call   8487e80 <_ZNSt3mapIi8JobPartySt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 848640c:	83 ec 04             	sub    $0x4,%esp
 848640f:	e9 33 01 00 00       	jmp    8486547 <_ZN15CSuccessJobNode8InsertDBERK10DungeonKeybRK6JobKey+0x313>
 8486414:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8486417:	89 04 24             	mov    %eax,(%esp)
 848641a:	e8 1f 0f 00 00       	call   848733e <_ZNKSt17_Rb_tree_iteratorISt4pairIKi8JobPartyEEptEv>
 848641f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8486422:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8486425:	89 04 24             	mov    %eax,(%esp)
 8486428:	e8 11 0f 00 00       	call   848733e <_ZNKSt17_Rb_tree_iteratorISt4pairIKi8JobPartyEEptEv>
 848642d:	83 c0 04             	add    $0x4,%eax
 8486430:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8486433:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8486436:	8b 00                	mov    (%eax),%eax
 8486438:	85 c0                	test   %eax,%eax
 848643a:	0f 84 df 00 00 00    	je     848651f <_ZN15CSuccessJobNode8InsertDBERK10DungeonKeybRK6JobKey+0x2eb>
 8486440:	e8 34 f7 ff ff       	call   8485b79 <_Z16GetMySqLInstancev>
 8486445:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8486448:	8b 45 e0             	mov    -0x20(%ebp),%eax
 848644b:	8b 30                	mov    (%eax),%esi
 848644d:	0f b6 45 a4          	movzbl -0x5c(%ebp),%eax
 8486451:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8486454:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8486457:	8b 00                	mov    (%eax),%eax
 8486459:	89 45 98             	mov    %eax,-0x68(%ebp)
 848645c:	8b 45 14             	mov    0x14(%ebp),%eax
 848645f:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8486463:	0f be c0             	movsbl %al,%eax
 8486466:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8486469:	8b 45 14             	mov    0x14(%ebp),%eax
 848646c:	8b 00                	mov    (%eax),%eax
 848646e:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8486471:	8b 45 0c             	mov    0xc(%ebp),%eax
 8486474:	8b 78 04             	mov    0x4(%eax),%edi
 8486477:	8b 45 0c             	mov    0xc(%ebp),%eax
 848647a:	8b 18                	mov    (%eax),%ebx
 848647c:	e8 00 5d c4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8486481:	89 04 24             	mov    %eax,(%esp)
 8486484:	e8 41 46 cc ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8486489:	89 74 24 24          	mov    %esi,0x24(%esp)
 848648d:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8486490:	89 54 24 20          	mov    %edx,0x20(%esp)
 8486494:	8b 55 98             	mov    -0x68(%ebp),%edx
 8486497:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 848649b:	8b 55 9c             	mov    -0x64(%ebp),%edx
 848649e:	89 54 24 18          	mov    %edx,0x18(%esp)
 84864a2:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84864a5:	89 54 24 14          	mov    %edx,0x14(%esp)
 84864a9:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84864ad:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84864b1:	89 44 24 08          	mov    %eax,0x8(%esp)
 84864b5:	c7 44 24 04 d0 48 c7 	movl   $0x8c748d0,0x4(%esp)
 84864bc:	08 
 84864bd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84864c0:	89 04 24             	mov    %eax,(%esp)
 84864c3:	e8 f8 dc f6 ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84864c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84864cf:	00 
 84864d0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84864d3:	89 04 24             	mov    %eax,(%esp)
 84864d6:	e8 4b de f6 ff       	call   83f4326 <_ZN5MySQL4execEb>
 84864db:	83 f0 01             	xor    $0x1,%eax
 84864de:	84 c0                	test   %al,%al
 84864e0:	74 3d                	je     848651f <_ZN15CSuccessJobNode8InsertDBERK10DungeonKeybRK6JobKey+0x2eb>
 84864e2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84864e9:	00 
 84864ea:	c7 44 24 08 15 02 00 	movl   $0x215,0x8(%esp)
 84864f1:	00 
 84864f2:	c7 44 24 04 a0 55 c7 	movl   $0x8c755a0,0x4(%esp)
 84864f9:	08 
 84864fa:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84864fd:	89 04 24             	mov    %eax,(%esp)
 8486500:	e8 13 92 0c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8486505:	c7 44 24 04 84 49 c7 	movl   $0x8c74984,0x4(%esp)
 848650c:	08 
 848650d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8486510:	89 04 24             	mov    %eax,(%esp)
 8486513:	e8 70 92 0c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8486518:	b8 00 00 00 00       	mov    $0x0,%eax
 848651d:	eb 5c                	jmp    848657b <_ZN15CSuccessJobNode8InsertDBERK10DungeonKeybRK6JobKey+0x347>
 848651f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8486522:	89 04 24             	mov    %eax,(%esp)
 8486525:	e8 fa 04 00 00       	call   8486a24 <_ZN8JobParty5ResetEv>
 848652a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 848652d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8486534:	00 
 8486535:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8486538:	89 54 24 04          	mov    %edx,0x4(%esp)
 848653c:	89 04 24             	mov    %eax,(%esp)
 848653f:	e8 62 19 00 00       	call   8487ea6 <_ZNSt17_Rb_tree_iteratorISt4pairIKi8JobPartyEEppEi>
 8486544:	83 ec 04             	sub    $0x4,%esp
 8486547:	8b 55 08             	mov    0x8(%ebp),%edx
 848654a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 848654d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8486551:	89 04 24             	mov    %eax,(%esp)
 8486554:	e8 11 0d 00 00       	call   848726a <_ZNSt3mapIi8JobPartySt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8486559:	83 ec 04             	sub    $0x4,%esp
 848655c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 848655f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8486563:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8486566:	89 04 24             	mov    %eax,(%esp)
 8486569:	e8 22 0d 00 00       	call   8487290 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi8JobPartyEEneERKS4_>
 848656e:	84 c0                	test   %al,%al
 8486570:	0f 85 9e fe ff ff    	jne    8486414 <_ZN15CSuccessJobNode8InsertDBERK10DungeonKeybRK6JobKey+0x1e0>
 8486576:	b8 01 00 00 00       	mov    $0x1,%eax
 848657b:	8d 65 f4             	lea    -0xc(%ebp),%esp
 848657e:	83 c4 00             	add    $0x0,%esp
 8486581:	5b                   	pop    %ebx
 8486582:	5e                   	pop    %esi
 8486583:	5f                   	pop    %edi
 8486584:	5d                   	pop    %ebp
 8486585:	c3                   	ret

```

```c
// CSuccessJobNode::InsertDB @ 0x8486234

/* CSuccessJobNode::InsertDB(DungeonKey const&, bool, JobKey const&) */

undefined4 __thiscall
CSuccessJobNode::InsertDB(CSuccessJobNode *this,DungeonKey *param_1,bool param_2,JobKey *param_3)

{
  JobKey JVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  CEnvironment *pCVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>> local_58 [4];
  cMyTrace local_54 [16];
  map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>> local_44 [4];
  cMyTrace local_40 [16];
  _Rb_tree_iterator<std::pair<int_const,JobParty>> local_30 [4];
  MySQL *local_2c;
  undefined4 *local_28;
  JobParty *local_24;
  MySQL *local_20;
  
  if (*(int *)(this + 0x54) != 0) {
    local_2c = (MySQL *)GetMySqLInstance();
    uVar2 = *(undefined4 *)(this + 0x40);
    JVar1 = param_3[4];
    uVar3 = *(undefined4 *)(this + 0x3c);
    uVar4 = *(undefined4 *)param_3;
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar10 = *(undefined4 *)param_1;
    pCVar7 = (CEnvironment *)G_CEnvironment();
    uVar8 = CEnvironment::get_channel_no(pCVar7);
    MySQL::set_query(local_2c,
                     "inSert into log_dungeon_charac(clear_time,die_count,hp_consume,mp_consume,hit_count,hit_per_avg_damage,hp_recovery,mp_recovery,update_count,channel_no,dungeon_index,dungeon_diff,success,charac_job,level,charac_grow,last_time,exp_avg) values(%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,NOW(),%d)"
                     ,*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                     *(undefined4 *)(this + 0x20),*(undefined4 *)(this + 0x24),
                     *(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x2c),
                     *(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34),
                     *(undefined4 *)(this + 0x54),uVar8,uVar10,uVar5,(uint)param_2,uVar4,uVar3,
                     (int)(char)JVar1,uVar2);
    cVar6 = MySQL::exec(local_2c,true);
    if (cVar6 != '\x01') {
      cMyTrace::cMyTrace(local_54,
                         "bool CSuccessJobNode::InsertDB(const DungeonKey&, bool, const JobKey&)",
                         0x1f2,5);
      cMyTrace::operator()(local_54,"inSert log_dungeon_charac failed");
      return 0;
    }
  }
  Character::Reset((Character *)(this + 0x18));
  std::map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>>::begin
            (local_58);
  do {
    std::map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>>::end
              (local_44);
    cVar6 = std::_Rb_tree_iterator<std::pair<int_const,JobParty>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,JobParty>> *)local_58,
                       (_Rb_tree_iterator *)local_44);
    if (cVar6 == '\0') {
      return 1;
    }
    local_28 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,JobParty>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,JobParty>> *)local_58);
    iVar9 = std::_Rb_tree_iterator<std::pair<int_const,JobParty>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,JobParty>> *)local_58);
    local_24 = (JobParty *)(iVar9 + 4);
    if (*(int *)local_24 != 0) {
      local_20 = (MySQL *)GetMySqLInstance();
      iVar9 = *(int *)local_24;
      uVar2 = *local_28;
      JVar1 = param_3[4];
      uVar3 = *(undefined4 *)param_3;
      uVar4 = *(undefined4 *)(param_1 + 4);
      uVar5 = *(undefined4 *)param_1;
      pCVar7 = (CEnvironment *)G_CEnvironment();
      uVar10 = CEnvironment::get_channel_no(pCVar7);
      MySQL::set_query(local_20,
                       "inSert into log_dungeon_party_job(channel_no,dungeon_index,dungeon_diff,charac_job,charac_grow,party_user_count,success,job_count,last_time) values(%d,%d,%d,%d,%d,%d,%d,%d,NOW())"
                       ,uVar10,uVar5,uVar4,uVar3,(int)(char)JVar1,uVar2,(uint)param_2,iVar9);
      cVar6 = MySQL::exec(local_20,true);
      if (cVar6 != '\x01') {
        cMyTrace::cMyTrace(local_40,
                           "bool CSuccessJobNode::InsertDB(const DungeonKey&, bool, const JobKey&)",
                           0x215,5);
        cMyTrace::operator()(local_40,"inSert log_dungeon_party_job failed");
        return 0;
      }
    }
    JobParty::Reset(local_24);
    std::_Rb_tree_iterator<std::pair<int_const,JobParty>>::operator++(local_30,(int)local_58);
  } while( true );
}

```

---

## UpdateCharacter

```asm
// === 08484d4c CSuccessJobNode::UpdateCharacter  [0x08484d4c-0x8484dd9] ===
 8484d4c:	55                   	push   %ebp
 8484d4d:	89 e5                	mov    %esp,%ebp
 8484d4f:	83 ec 28             	sub    $0x28,%esp
 8484d52:	8b 45 0c             	mov    0xc(%ebp),%eax
 8484d55:	8d 48 44             	lea    0x44(%eax),%ecx
 8484d58:	8b 55 08             	mov    0x8(%ebp),%edx
 8484d5b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8484d5e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8484d62:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484d66:	89 04 24             	mov    %eax,(%esp)
 8484d69:	e8 d0 24 00 00       	call   848723e <_ZNSt3mapIi8JobPartySt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8484d6e:	83 ec 04             	sub    $0x4,%esp
 8484d71:	8b 55 08             	mov    0x8(%ebp),%edx
 8484d74:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8484d77:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484d7b:	89 04 24             	mov    %eax,(%esp)
 8484d7e:	e8 e7 24 00 00       	call   848726a <_ZNSt3mapIi8JobPartySt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8484d83:	83 ec 04             	sub    $0x4,%esp
 8484d86:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8484d89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8484d8d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8484d90:	89 04 24             	mov    %eax,(%esp)
 8484d93:	e8 f8 24 00 00       	call   8487290 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi8JobPartyEEneERKS4_>
 8484d98:	84 c0                	test   %al,%al
 8484d9a:	74 1e                	je     8484dba <_ZN15CSuccessJobNode15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC+0x6e>
 8484d9c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8484d9f:	89 04 24             	mov    %eax,(%esp)
 8484da2:	e8 97 25 00 00       	call   848733e <_ZNKSt17_Rb_tree_iteratorISt4pairIKi8JobPartyEEptEv>
 8484da7:	83 c0 04             	add    $0x4,%eax
 8484daa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8484dad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8484db0:	8b 00                	mov    (%eax),%eax
 8484db2:	8d 50 01             	lea    0x1(%eax),%edx
 8484db5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8484db8:	89 10                	mov    %edx,(%eax)
 8484dba:	8b 45 0c             	mov    0xc(%ebp),%eax
 8484dbd:	8d 50 24             	lea    0x24(%eax),%edx
 8484dc0:	8b 45 08             	mov    0x8(%ebp),%eax
 8484dc3:	83 c0 18             	add    $0x18,%eax
 8484dc6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8484dca:	89 04 24             	mov    %eax,(%esp)
 8484dcd:	e8 1c 1a 00 00       	call   84867ee <_ZN9CharacterpLERKS_>
 8484dd2:	b8 01 00 00 00       	mov    $0x1,%eax
 8484dd7:	c9                   	leave
 8484dd8:	c3                   	ret
 8484dd9:	90                   	nop

```

```c
// CSuccessJobNode::UpdateCharacter @ 0x8484d4c

/* CSuccessJobNode::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*) */

undefined4 __thiscall
CSuccessJobNode::UpdateCharacter(CSuccessJobNode *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,JobParty>> local_18 [4];
  map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>> local_14 [4];
  int *local_10;
  
  std::map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>>::find
            ((int *)local_18);
  std::map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>>::end(local_14)
  ;
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,JobParty>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,JobParty>>::operator->(local_18);
    local_10 = (int *)(iVar2 + 4);
    *local_10 = *local_10 + 1;
  }
  Character::operator+=((Character *)(this + 0x18),(Character *)(param_1 + 0x24));
  return 1;
}

```

