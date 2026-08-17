# CSchoolMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## AddUser

```asm
// === 085683a0 CSchoolMgr::AddUser  [0x085683a0-0x85684bb] ===
 85683a0:	55                   	push   %ebp
 85683a1:	89 e5                	mov    %esp,%ebp
 85683a3:	83 ec 48             	sub    $0x48,%esp
 85683a6:	e8 fc 1f b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85683ab:	89 04 24             	mov    %eax,(%esp)
 85683ae:	e8 9b 58 ee ff       	call   844dc4e <_ZNK9GameWorld18IsSchoolPvPChannelEv>
 85683b3:	83 f0 01             	xor    $0x1,%eax
 85683b6:	84 c0                	test   %al,%al
 85683b8:	0f 85 fb 00 00 00    	jne    85684b9 <_ZN10CSchoolMgr7AddUserEP5CUser+0x119>
 85683be:	8b 45 0c             	mov    0xc(%ebp),%eax
 85683c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85683c5:	8b 45 08             	mov    0x8(%ebp),%eax
 85683c8:	89 04 24             	mov    %eax,(%esp)
 85683cb:	e8 18 fc ff ff       	call   8567fe8 <_ZN10CSchoolMgr19SendBroadcastUserInEP5CUser>
 85683d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85683d3:	89 04 24             	mov    %eax,(%esp)
 85683d6:	e8 27 7a cc ff       	call   822fe02 <_ZN5CUser11GetSchoolNoEv>
 85683db:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85683de:	8b 55 08             	mov    0x8(%ebp),%edx
 85683e1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85683e4:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 85683e7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85683eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85683ef:	89 04 24             	mov    %eax,(%esp)
 85683f2:	e8 ff a1 b7 ff       	call   80e25f6 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE4findERS3_>
 85683f7:	83 ec 04             	sub    $0x4,%esp
 85683fa:	8b 55 08             	mov    0x8(%ebp),%edx
 85683fd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8568400:	89 54 24 04          	mov    %edx,0x4(%esp)
 8568404:	89 04 24             	mov    %eax,(%esp)
 8568407:	e8 16 a2 b7 ff       	call   80e2622 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE3endEv>
 856840c:	83 ec 04             	sub    $0x4,%esp
 856840f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8568412:	89 44 24 04          	mov    %eax,0x4(%esp)
 8568416:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8568419:	89 04 24             	mov    %eax,(%esp)
 856841c:	e8 e9 a4 b7 ff       	call   80e290a <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEneERKS3_>
 8568421:	84 c0                	test   %al,%al
 8568423:	74 16                	je     856843b <_ZN10CSchoolMgr7AddUserEP5CUser+0x9b>
 8568425:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8568428:	89 04 24             	mov    %eax,(%esp)
 856842b:	e8 88 a2 b7 ff       	call   80e26b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEptEv>
 8568430:	8b 50 04             	mov    0x4(%eax),%edx
 8568433:	83 c2 01             	add    $0x1,%edx
 8568436:	89 50 04             	mov    %edx,0x4(%eax)
 8568439:	eb 7f                	jmp    85684ba <_ZN10CSchoolMgr7AddUserEP5CUser+0x11a>
 856843b:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 8568442:	8b 45 0c             	mov    0xc(%ebp),%eax
 8568445:	89 04 24             	mov    %eax,(%esp)
 8568448:	e8 b5 79 cc ff       	call   822fe02 <_ZN5CUser11GetSchoolNoEv>
 856844d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8568450:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8568453:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8568456:	89 54 24 08          	mov    %edx,0x8(%esp)
 856845a:	8d 55 f4             	lea    -0xc(%ebp),%edx
 856845d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8568461:	89 04 24             	mov    %eax,(%esp)
 8568464:	e8 d7 18 00 00       	call   8569d40 <_ZSt9make_pairIjiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8568469:	83 ec 04             	sub    $0x4,%esp
 856846c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 856846f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8568473:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8568476:	89 04 24             	mov    %eax,(%esp)
 8568479:	e8 ba 3d d4 ff       	call   82ac238 <_ZNSt4pairIKjjEC1IjiEEOS_IT_T0_E>
 856847e:	8b 55 08             	mov    0x8(%ebp),%edx
 8568481:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8568484:	8d 4d e0             	lea    -0x20(%ebp),%ecx
 8568487:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 856848b:	89 54 24 04          	mov    %edx,0x4(%esp)
 856848f:	89 04 24             	mov    %eax,(%esp)
 8568492:	e8 f5 a1 b7 ff       	call   80e268c <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE6insertERKS4_>
 8568497:	83 ec 04             	sub    $0x4,%esp
 856849a:	8b 45 0c             	mov    0xc(%ebp),%eax
 856849d:	89 04 24             	mov    %eax,(%esp)
 85684a0:	e8 5d 79 cc ff       	call   822fe02 <_ZN5CUser11GetSchoolNoEv>
 85684a5:	8b 55 08             	mov    0x8(%ebp),%edx
 85684a8:	83 c2 18             	add    $0x18,%edx
 85684ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 85684af:	89 14 24             	mov    %edx,(%esp)
 85684b2:	e8 87 05 00 00       	call   8568a3e <_ZN11CSchoolArea13AddSchoolAreaEj>
 85684b7:	eb 01                	jmp    85684ba <_ZN10CSchoolMgr7AddUserEP5CUser+0x11a>
 85684b9:	90                   	nop
 85684ba:	c9                   	leave
 85684bb:	c3                   	ret

```

```c
// CSchoolMgr::AddUser @ 0x85683a0

/* CSchoolMgr::AddUser(CUser*) */

void __thiscall CSchoolMgr::AddUser(CSchoolMgr *this,CUser *param_1)

{
  char cVar1;
  GameWorld *this_00;
  int iVar2;
  uint uVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> local_38 [4];
  undefined4 local_34;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_30 [4];
  pair local_2c [8];
  pair<unsigned_int_const,unsigned_int> local_24 [8];
  uint local_1c [2];
  undefined4 local_14;
  int local_10 [3];
  
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsSchoolPvPChannel(this_00);
  if (cVar1 == '\x01') {
    SendBroadcastUserIn(this,param_1);
    local_34 = CUser::GetSchoolNo(param_1);
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::find((uint *)local_38);
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::end(local_30);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                      (local_38,(_Rb_tree_iterator *)local_30);
    if (cVar1 == '\0') {
      local_14 = 1;
      local_10[0] = CUser::GetSchoolNo(param_1);
      std::make_pair<unsigned_int,int>(local_1c,local_10);
      std::pair<unsigned_int_const,unsigned_int>::pair<unsigned_int,int>(local_24,(pair *)local_1c);
      std::
      map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::insert(local_2c);
      uVar3 = CUser::GetSchoolNo(param_1);
      CSchoolArea::AddSchoolArea((CSchoolArea *)(this + 0x18),uVar3);
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                        (local_38);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
  }
  return;
}

```

---

## DelUser

```asm
// === 085684bc CSchoolMgr::DelUser  [0x085684bc-0x856859f] ===
 85684bc:	55                   	push   %ebp
 85684bd:	89 e5                	mov    %esp,%ebp
 85684bf:	83 ec 28             	sub    $0x28,%esp
 85684c2:	e8 e0 1e b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85684c7:	89 04 24             	mov    %eax,(%esp)
 85684ca:	e8 7f 57 ee ff       	call   844dc4e <_ZNK9GameWorld18IsSchoolPvPChannelEv>
 85684cf:	83 f0 01             	xor    $0x1,%eax
 85684d2:	84 c0                	test   %al,%al
 85684d4:	0f 85 c3 00 00 00    	jne    856859d <_ZN10CSchoolMgr7DelUserEP5CUser+0xe1>
 85684da:	8b 45 0c             	mov    0xc(%ebp),%eax
 85684dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85684e1:	8b 45 08             	mov    0x8(%ebp),%eax
 85684e4:	89 04 24             	mov    %eax,(%esp)
 85684e7:	e8 e2 fc ff ff       	call   85681ce <_ZN10CSchoolMgr20SendBroadcastUserOutEP5CUser>
 85684ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 85684ef:	89 04 24             	mov    %eax,(%esp)
 85684f2:	e8 0b 79 cc ff       	call   822fe02 <_ZN5CUser11GetSchoolNoEv>
 85684f7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85684fa:	8b 55 08             	mov    0x8(%ebp),%edx
 85684fd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8568500:	8d 4d f0             	lea    -0x10(%ebp),%ecx
 8568503:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8568507:	89 54 24 04          	mov    %edx,0x4(%esp)
 856850b:	89 04 24             	mov    %eax,(%esp)
 856850e:	e8 e3 a0 b7 ff       	call   80e25f6 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE4findERS3_>
 8568513:	83 ec 04             	sub    $0x4,%esp
 8568516:	8b 55 08             	mov    0x8(%ebp),%edx
 8568519:	8d 45 f4             	lea    -0xc(%ebp),%eax
 856851c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8568520:	89 04 24             	mov    %eax,(%esp)
 8568523:	e8 fa a0 b7 ff       	call   80e2622 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE3endEv>
 8568528:	83 ec 04             	sub    $0x4,%esp
 856852b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 856852e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8568532:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8568535:	89 04 24             	mov    %eax,(%esp)
 8568538:	e8 cd a3 b7 ff       	call   80e290a <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEneERKS3_>
 856853d:	84 c0                	test   %al,%al
 856853f:	74 5d                	je     856859e <_ZN10CSchoolMgr7DelUserEP5CUser+0xe2>
 8568541:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8568544:	89 04 24             	mov    %eax,(%esp)
 8568547:	e8 6c a1 b7 ff       	call   80e26b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEptEv>
 856854c:	8b 50 04             	mov    0x4(%eax),%edx
 856854f:	83 ea 01             	sub    $0x1,%edx
 8568552:	89 50 04             	mov    %edx,0x4(%eax)
 8568555:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8568558:	89 04 24             	mov    %eax,(%esp)
 856855b:	e8 58 a1 b7 ff       	call   80e26b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEptEv>
 8568560:	8b 40 04             	mov    0x4(%eax),%eax
 8568563:	85 c0                	test   %eax,%eax
 8568565:	0f 94 c0             	sete   %al
 8568568:	84 c0                	test   %al,%al
 856856a:	74 32                	je     856859e <_ZN10CSchoolMgr7DelUserEP5CUser+0xe2>
 856856c:	8b 45 08             	mov    0x8(%ebp),%eax
 856856f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8568572:	89 54 24 04          	mov    %edx,0x4(%esp)
 8568576:	89 04 24             	mov    %eax,(%esp)
 8568579:	e8 a0 a3 b7 ff       	call   80e291e <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5eraseESt17_Rb_tree_iteratorIS4_E>
 856857e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8568581:	89 04 24             	mov    %eax,(%esp)
 8568584:	e8 79 78 cc ff       	call   822fe02 <_ZN5CUser11GetSchoolNoEv>
 8568589:	8b 55 08             	mov    0x8(%ebp),%edx
 856858c:	83 c2 18             	add    $0x18,%edx
 856858f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8568593:	89 14 24             	mov    %edx,(%esp)
 8568596:	e8 d9 04 00 00       	call   8568a74 <_ZN11CSchoolArea13DelSchoolAreaEj>
 856859b:	eb 01                	jmp    856859e <_ZN10CSchoolMgr7DelUserEP5CUser+0xe2>
 856859d:	90                   	nop
 856859e:	c9                   	leave
 856859f:	c3                   	ret

```

```c
// CSchoolMgr::DelUser @ 0x85684bc

/* CSchoolMgr::DelUser(CUser*) */

void __thiscall CSchoolMgr::DelUser(CSchoolMgr *this,CUser *param_1)

{
  char cVar1;
  GameWorld *this_00;
  int iVar2;
  uint local_18;
  undefined4 local_14;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_10 [12];
  
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsSchoolPvPChannel(this_00);
  if (cVar1 == '\x01') {
    SendBroadcastUserOut(this,param_1);
    local_14 = CUser::GetSchoolNo(param_1);
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::find(&local_18);
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_18,
                       (_Rb_tree_iterator *)local_10);
    if (cVar1 != '\0') {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_18)
      ;
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_18)
      ;
      if (*(int *)(iVar2 + 4) == 0) {
        std::
        map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
        ::erase((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                 *)this,local_18);
        CUser::GetSchoolNo(param_1);
        CSchoolArea::DelSchoolArea((uint)(this + 0x18));
      }
    }
  }
  return;
}

```

---

## SendBroadcastUserIn

```asm
// === 08567fe8 CSchoolMgr::SendBroadcastUserIn  [0x08567fe8-0x85681cd] ===
 8567fe8:	55                   	push   %ebp
 8567fe9:	89 e5                	mov    %esp,%ebp
 8567feb:	57                   	push   %edi
 8567fec:	56                   	push   %esi
 8567fed:	53                   	push   %ebx
 8567fee:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 8567ff4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8567ffb:	00 
 8567ffc:	c7 44 24 08 3f 25 ca 	movl   $0x8ca253f,0x8(%esp)
 8568003:	08 
 8568004:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 856800b:	00 
 856800c:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8568013:	e8 e6 d7 53 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8568018:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 856801b:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 856801f:	0f 84 9d 01 00 00    	je     85681c2 <_ZN10CSchoolMgr19SendBroadcastUserInEP5CUser+0x1da>
 8568025:	8d 95 d1 fe ff ff    	lea    -0x12f(%ebp),%edx
 856802b:	bb ff 00 00 00       	mov    $0xff,%ebx
 8568030:	b8 00 00 00 00       	mov    $0x0,%eax
 8568035:	89 d1                	mov    %edx,%ecx
 8568037:	83 e1 01             	and    $0x1,%ecx
 856803a:	85 c9                	test   %ecx,%ecx
 856803c:	74 08                	je     8568046 <_ZN10CSchoolMgr19SendBroadcastUserInEP5CUser+0x5e>
 856803e:	88 02                	mov    %al,(%edx)
 8568040:	83 c2 01             	add    $0x1,%edx
 8568043:	83 eb 01             	sub    $0x1,%ebx
 8568046:	89 d1                	mov    %edx,%ecx
 8568048:	83 e1 02             	and    $0x2,%ecx
 856804b:	85 c9                	test   %ecx,%ecx
 856804d:	74 09                	je     8568058 <_ZN10CSchoolMgr19SendBroadcastUserInEP5CUser+0x70>
 856804f:	66 89 02             	mov    %ax,(%edx)
 8568052:	83 c2 02             	add    $0x2,%edx
 8568055:	83 eb 02             	sub    $0x2,%ebx
 8568058:	89 d9                	mov    %ebx,%ecx
 856805a:	c1 e9 02             	shr    $0x2,%ecx
 856805d:	89 d7                	mov    %edx,%edi
 856805f:	f3 ab                	rep stos %eax,%es:(%edi)
 8568061:	89 fa                	mov    %edi,%edx
 8568063:	89 d9                	mov    %ebx,%ecx
 8568065:	83 e1 02             	and    $0x2,%ecx
 8568068:	85 c9                	test   %ecx,%ecx
 856806a:	74 06                	je     8568072 <_ZN10CSchoolMgr19SendBroadcastUserInEP5CUser+0x8a>
 856806c:	66 89 02             	mov    %ax,(%edx)
 856806f:	83 c2 02             	add    $0x2,%edx
 8568072:	89 d9                	mov    %ebx,%ecx
 8568074:	83 e1 01             	and    $0x1,%ecx
 8568077:	85 c9                	test   %ecx,%ecx
 8568079:	74 05                	je     8568080 <_ZN10CSchoolMgr19SendBroadcastUserInEP5CUser+0x98>
 856807b:	88 02                	mov    %al,(%edx)
 856807d:	83 c2 01             	add    $0x1,%edx
 8568080:	e8 fc 40 b6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8568085:	89 04 24             	mov    %eax,(%esp)
 8568088:	e8 3d 2a be ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 856808d:	89 c3                	mov    %eax,%ebx
 856808f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8568092:	89 04 24             	mov    %eax,(%esp)
 8568095:	e8 8e 8f b9 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 856809a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 856809e:	89 44 24 08          	mov    %eax,0x8(%esp)
 85680a2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85680a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85680a9:	8d 85 d1 fe ff ff    	lea    -0x12f(%ebp),%eax
 85680af:	89 04 24             	mov    %eax,(%esp)
 85680b2:	e8 89 63 b1 ff       	call   807e440 <sprintf@plt>
 85680b7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85680ba:	89 04 24             	mov    %eax,(%esp)
 85680bd:	e8 8a 5c 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85680c2:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 85680c9:	00 
 85680ca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85680d1:	00 
 85680d2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85680d5:	89 04 24             	mov    %eax,(%esp)
 85680d8:	e8 1f 38 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85680dd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85680e4:	00 
 85680e5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85680e8:	89 04 24             	mov    %eax,(%esp)
 85680eb:	e8 30 38 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85680f0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85680f7:	00 
 85680f8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85680fb:	89 04 24             	mov    %eax,(%esp)
 85680fe:	e8 a1 1d b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8568103:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 856810a:	00 
 856810b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 856810e:	89 04 24             	mov    %eax,(%esp)
 8568111:	e8 0a 38 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8568116:	8d 85 d1 fe ff ff    	lea    -0x12f(%ebp),%eax
 856811c:	89 04 24             	mov    %eax,(%esp)
 856811f:	e8 8c 62 b1 ff       	call   807e3b0 <strlen@plt>
 8568124:	89 44 24 04          	mov    %eax,0x4(%esp)
 8568128:	8d 45 d8             	lea    -0x28(%ebp),%eax
 856812b:	89 04 24             	mov    %eax,(%esp)
 856812e:	e8 09 38 b6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8568133:	8d 85 d1 fe ff ff    	lea    -0x12f(%ebp),%eax
 8568139:	89 04 24             	mov    %eax,(%esp)
 856813c:	e8 6f 62 b1 ff       	call   807e3b0 <strlen@plt>
 8568141:	89 44 24 08          	mov    %eax,0x8(%esp)
 8568145:	8d 85 d1 fe ff ff    	lea    -0x12f(%ebp),%eax
 856814b:	89 44 24 04          	mov    %eax,0x4(%esp)
 856814f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8568152:	89 04 24             	mov    %eax,(%esp)
 8568155:	e8 8a f2 c4 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 856815a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8568161:	00 
 8568162:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8568165:	89 04 24             	mov    %eax,(%esp)
 8568168:	e8 eb 37 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 856816d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8568170:	89 44 24 04          	mov    %eax,0x4(%esp)
 8568174:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8568177:	89 04 24             	mov    %eax,(%esp)
 856817a:	e8 37 0f 00 00       	call   85690b6 <_ZN13CSchoolMemberC1EP5CUser>
 856817f:	e8 23 22 b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8568184:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8568187:	89 54 24 08          	mov    %edx,0x8(%esp)
 856818b:	8d 55 d8             	lea    -0x28(%ebp),%edx
 856818e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8568192:	89 04 24             	mov    %eax,(%esp)
 8568195:	e8 9a 10 16 00       	call   86c9234 <_ZN9GameWorld10send_groupER11PacketGuardP7CBelong>
 856819a:	eb 1b                	jmp    85681b7 <_ZN10CSchoolMgr19SendBroadcastUserInEP5CUser+0x1cf>
 856819c:	89 d3                	mov    %edx,%ebx
 856819e:	89 c6                	mov    %eax,%esi
 85681a0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85681a3:	89 04 24             	mov    %eax,(%esp)
 85681a6:	e8 d5 5c 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 85681ab:	89 f0                	mov    %esi,%eax
 85681ad:	89 da                	mov    %ebx,%edx
 85681af:	89 04 24             	mov    %eax,(%esp)
 85681b2:	e8 99 b5 57 00       	call   8ae3750 <_Unwind_Resume>
 85681b7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85681ba:	89 04 24             	mov    %eax,(%esp)
 85681bd:	e8 be 5c 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 85681c2:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 85681c8:	5b                   	pop    %ebx
 85681c9:	5e                   	pop    %esi
 85681ca:	5f                   	pop    %edi
 85681cb:	5d                   	pop    %ebp
 85681cc:	c3                   	ret
 85681cd:	90                   	nop

```

```c
// CSchoolMgr::SendBroadcastUserIn @ 0x8567fe8

/* CSchoolMgr::SendBroadcastUserIn(CUser*) */

void __thiscall CSchoolMgr::SendBroadcastUserIn(CSchoolMgr *this,CUser *param_1)

{
  CEnvironment *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  size_t sVar3;
  GameWorld *this_01;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_133;
  char local_132 [254];
  CSchoolMember local_34 [8];
  PacketGuard local_2c [12];
  char *local_20;
  
  bVar8 = 0;
  local_20 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "channel_connect",(bool *)0x0);
  if (local_20 != (char *)0x0) {
    pcVar5 = &local_133;
    uVar6 = 0xff;
    bVar7 = ((uint)pcVar5 & 1) != 0;
    if (bVar7) {
      local_133 = '\0';
      pcVar5 = local_132;
      uVar6 = 0xfe;
    }
    if (((uint)pcVar5 & 2) != 0) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5 = pcVar5 + 2;
      uVar6 = uVar6 - 2;
    }
    for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
    }
    if ((uVar6 & 2) != 0) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5 = pcVar5 + 2;
    }
    if (!bVar7) {
      *pcVar5 = '\0';
    }
    this_00 = (CEnvironment *)G_CEnvironment();
    uVar1 = CEnvironment::get_channel_no(this_00);
    uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    sprintf(&local_133,local_20,uVar2,uVar1);
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 085680d8 to 08568199 has its CatchHandler @ 0856819c */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
    sVar3 = strlen(&local_133);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar3);
    sVar3 = strlen(&local_133);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,&local_133,sVar3);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
    CSchoolMember::CSchoolMember(local_34,param_1);
    this_01 = (GameWorld *)G_GameWorld();
    GameWorld::send_group(this_01,local_2c,(CBelong *)local_34);
    PacketGuard::~PacketGuard(local_2c);
  }
  return;
}

```

---

## SendBroadcastUserOut

```asm
// === 085681ce CSchoolMgr::SendBroadcastUserOut  [0x085681ce-0x856839f] ===
 85681ce:	55                   	push   %ebp
 85681cf:	89 e5                	mov    %esp,%ebp
 85681d1:	57                   	push   %edi
 85681d2:	56                   	push   %esi
 85681d3:	53                   	push   %ebx
 85681d4:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 85681da:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85681e1:	00 
 85681e2:	c7 44 24 08 4f 25 ca 	movl   $0x8ca254f,0x8(%esp)
 85681e9:	08 
 85681ea:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85681f1:	00 
 85681f2:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 85681f9:	e8 00 d6 53 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 85681fe:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8568201:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8568205:	0f 84 8a 01 00 00    	je     8568395 <_ZN10CSchoolMgr20SendBroadcastUserOutEP5CUser+0x1c7>
 856820b:	8d 95 d1 fe ff ff    	lea    -0x12f(%ebp),%edx
 8568211:	bb ff 00 00 00       	mov    $0xff,%ebx
 8568216:	b8 00 00 00 00       	mov    $0x0,%eax
 856821b:	89 d1                	mov    %edx,%ecx
 856821d:	83 e1 01             	and    $0x1,%ecx
 8568220:	85 c9                	test   %ecx,%ecx
 8568222:	74 08                	je     856822c <_ZN10CSchoolMgr20SendBroadcastUserOutEP5CUser+0x5e>
 8568224:	88 02                	mov    %al,(%edx)
 8568226:	83 c2 01             	add    $0x1,%edx
 8568229:	83 eb 01             	sub    $0x1,%ebx
 856822c:	89 d1                	mov    %edx,%ecx
 856822e:	83 e1 02             	and    $0x2,%ecx
 8568231:	85 c9                	test   %ecx,%ecx
 8568233:	74 09                	je     856823e <_ZN10CSchoolMgr20SendBroadcastUserOutEP5CUser+0x70>
 8568235:	66 89 02             	mov    %ax,(%edx)
 8568238:	83 c2 02             	add    $0x2,%edx
 856823b:	83 eb 02             	sub    $0x2,%ebx
 856823e:	89 d9                	mov    %ebx,%ecx
 8568240:	c1 e9 02             	shr    $0x2,%ecx
 8568243:	89 d7                	mov    %edx,%edi
 8568245:	f3 ab                	rep stos %eax,%es:(%edi)
 8568247:	89 fa                	mov    %edi,%edx
 8568249:	89 d9                	mov    %ebx,%ecx
 856824b:	83 e1 02             	and    $0x2,%ecx
 856824e:	85 c9                	test   %ecx,%ecx
 8568250:	74 06                	je     8568258 <_ZN10CSchoolMgr20SendBroadcastUserOutEP5CUser+0x8a>
 8568252:	66 89 02             	mov    %ax,(%edx)
 8568255:	83 c2 02             	add    $0x2,%edx
 8568258:	89 d9                	mov    %ebx,%ecx
 856825a:	83 e1 01             	and    $0x1,%ecx
 856825d:	85 c9                	test   %ecx,%ecx
 856825f:	74 05                	je     8568266 <_ZN10CSchoolMgr20SendBroadcastUserOutEP5CUser+0x98>
 8568261:	88 02                	mov    %al,(%edx)
 8568263:	83 c2 01             	add    $0x1,%edx
 8568266:	8b 45 0c             	mov    0xc(%ebp),%eax
 8568269:	89 04 24             	mov    %eax,(%esp)
 856826c:	e8 b7 8d b9 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8568271:	89 44 24 08          	mov    %eax,0x8(%esp)
 8568275:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8568278:	89 44 24 04          	mov    %eax,0x4(%esp)
 856827c:	8d 85 d1 fe ff ff    	lea    -0x12f(%ebp),%eax
 8568282:	89 04 24             	mov    %eax,(%esp)
 8568285:	e8 b6 61 b1 ff       	call   807e440 <sprintf@plt>
 856828a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 856828d:	89 04 24             	mov    %eax,(%esp)
 8568290:	e8 b7 5a 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8568295:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 856829c:	00 
 856829d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85682a4:	00 
 85682a5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85682a8:	89 04 24             	mov    %eax,(%esp)
 85682ab:	e8 4c 36 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85682b0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85682b7:	00 
 85682b8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85682bb:	89 04 24             	mov    %eax,(%esp)
 85682be:	e8 5d 36 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85682c3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85682ca:	00 
 85682cb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85682ce:	89 04 24             	mov    %eax,(%esp)
 85682d1:	e8 ce 1b b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85682d6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85682dd:	00 
 85682de:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85682e1:	89 04 24             	mov    %eax,(%esp)
 85682e4:	e8 37 36 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85682e9:	8d 85 d1 fe ff ff    	lea    -0x12f(%ebp),%eax
 85682ef:	89 04 24             	mov    %eax,(%esp)
 85682f2:	e8 b9 60 b1 ff       	call   807e3b0 <strlen@plt>
 85682f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85682fb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85682fe:	89 04 24             	mov    %eax,(%esp)
 8568301:	e8 36 36 b6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8568306:	8d 85 d1 fe ff ff    	lea    -0x12f(%ebp),%eax
 856830c:	89 04 24             	mov    %eax,(%esp)
 856830f:	e8 9c 60 b1 ff       	call   807e3b0 <strlen@plt>
 8568314:	89 44 24 08          	mov    %eax,0x8(%esp)
 8568318:	8d 85 d1 fe ff ff    	lea    -0x12f(%ebp),%eax
 856831e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8568322:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8568325:	89 04 24             	mov    %eax,(%esp)
 8568328:	e8 b7 f0 c4 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 856832d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8568334:	00 
 8568335:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8568338:	89 04 24             	mov    %eax,(%esp)
 856833b:	e8 18 36 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8568340:	8b 45 0c             	mov    0xc(%ebp),%eax
 8568343:	89 44 24 04          	mov    %eax,0x4(%esp)
 8568347:	8d 45 d0             	lea    -0x30(%ebp),%eax
 856834a:	89 04 24             	mov    %eax,(%esp)
 856834d:	e8 64 0d 00 00       	call   85690b6 <_ZN13CSchoolMemberC1EP5CUser>
 8568352:	e8 50 20 b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8568357:	8d 55 d0             	lea    -0x30(%ebp),%edx
 856835a:	89 54 24 08          	mov    %edx,0x8(%esp)
 856835e:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8568361:	89 54 24 04          	mov    %edx,0x4(%esp)
 8568365:	89 04 24             	mov    %eax,(%esp)
 8568368:	e8 c7 0e 16 00       	call   86c9234 <_ZN9GameWorld10send_groupER11PacketGuardP7CBelong>
 856836d:	eb 1b                	jmp    856838a <_ZN10CSchoolMgr20SendBroadcastUserOutEP5CUser+0x1bc>
 856836f:	89 d3                	mov    %edx,%ebx
 8568371:	89 c6                	mov    %eax,%esi
 8568373:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8568376:	89 04 24             	mov    %eax,(%esp)
 8568379:	e8 02 5b 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 856837e:	89 f0                	mov    %esi,%eax
 8568380:	89 da                	mov    %ebx,%edx
 8568382:	89 04 24             	mov    %eax,(%esp)
 8568385:	e8 c6 b3 57 00       	call   8ae3750 <_Unwind_Resume>
 856838a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 856838d:	89 04 24             	mov    %eax,(%esp)
 8568390:	e8 eb 5a 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8568395:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 856839b:	5b                   	pop    %ebx
 856839c:	5e                   	pop    %esi
 856839d:	5f                   	pop    %edi
 856839e:	5d                   	pop    %ebp
 856839f:	c3                   	ret

```

```c
// CSchoolMgr::SendBroadcastUserOut @ 0x85681ce

/* CSchoolMgr::SendBroadcastUserOut(CUser*) */

void __thiscall CSchoolMgr::SendBroadcastUserOut(CSchoolMgr *this,CUser *param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  GameWorld *this_00;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  char local_133;
  char local_132 [254];
  CSchoolMember local_34 [8];
  PacketGuard local_2c [12];
  char *local_20;
  
  bVar7 = 0;
  local_20 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "channel_disconnect",(bool *)0x0);
  if (local_20 != (char *)0x0) {
    pcVar4 = &local_133;
    uVar5 = 0xff;
    bVar6 = ((uint)pcVar4 & 1) != 0;
    if (bVar6) {
      local_133 = '\0';
      pcVar4 = local_132;
      uVar5 = 0xfe;
    }
    if (((uint)pcVar4 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
      uVar5 = uVar5 - 2;
    }
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
    }
    if ((uVar5 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
    }
    if (!bVar6) {
      *pcVar4 = '\0';
    }
    uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    sprintf(&local_133,local_20,uVar1);
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 085682ab to 0856836c has its CatchHandler @ 0856836f */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
    sVar2 = strlen(&local_133);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar2);
    sVar2 = strlen(&local_133);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,&local_133,sVar2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
    CSchoolMember::CSchoolMember(local_34,param_1);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_group(this_00,local_2c,(CBelong *)local_34);
    PacketGuard::~PacketGuard(local_2c);
  }
  return;
}

```

