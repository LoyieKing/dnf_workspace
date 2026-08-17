# ServiceRestrictManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## ServiceRestrictManager

```asm
// === 0816e272 ServiceRestrictManager::ServiceRestrictManager  [0x0816e272-0x816e29d] ===
 816e272:	55                   	push   %ebp
 816e273:	89 e5                	mov    %esp,%ebp
 816e275:	83 ec 18             	sub    $0x18,%esp
 816e278:	8b 45 08             	mov    0x8(%ebp),%eax
 816e27b:	89 04 24             	mov    %eax,(%esp)
 816e27e:	e8 a3 0c 00 00       	call   816ef26 <_ZN4ARAD9SingletonI22ServiceRestrictManagerEC1Ev>
 816e283:	8b 45 08             	mov    0x8(%ebp),%eax
 816e286:	89 04 24             	mov    %eax,(%esp)
 816e289:	e8 9e 0c 00 00       	call   816ef2c <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEEC1Ev>
 816e28e:	8b 45 08             	mov    0x8(%ebp),%eax
 816e291:	c6 40 18 00          	movb   $0x0,0x18(%eax)
 816e295:	8b 45 08             	mov    0x8(%ebp),%eax
 816e298:	c6 40 19 00          	movb   $0x0,0x19(%eax)
 816e29c:	c9                   	leave
 816e29d:	c3                   	ret

```

```c
// ServiceRestrictManager::ServiceRestrictManager @ 0x816e272

/* ServiceRestrictManager::ServiceRestrictManager() */

void __thiscall ServiceRestrictManager::ServiceRestrictManager(ServiceRestrictManager *this)

{
  ARAD::Singleton<ServiceRestrictManager>::Singleton();
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::map((map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
         *)this);
  this[0x18] = (ServiceRestrictManager)0x0;
  this[0x19] = (ServiceRestrictManager)0x0;
  return;
}

```

---

## beginPolicy

```asm
// === 0816e54a ServiceRestrictManager::beginPolicy  [0x0816e54a-0x816e5dd] ===
 816e54a:	55                   	push   %ebp
 816e54b:	89 e5                	mov    %esp,%ebp
 816e54d:	83 ec 28             	sub    $0x28,%esp
 816e550:	8b 55 08             	mov    0x8(%ebp),%edx
 816e553:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816e556:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 816e559:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 816e55d:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e561:	89 04 24             	mov    %eax,(%esp)
 816e564:	e8 33 0b 00 00       	call   816f09c <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEE4findERS7_>
 816e569:	83 ec 04             	sub    $0x4,%esp
 816e56c:	8b 55 08             	mov    0x8(%ebp),%edx
 816e56f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 816e572:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e576:	89 04 24             	mov    %eax,(%esp)
 816e579:	e8 4a 0b 00 00       	call   816f0c8 <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEE3endEv>
 816e57e:	83 ec 04             	sub    $0x4,%esp
 816e581:	8d 45 f4             	lea    -0xc(%ebp),%eax
 816e584:	89 44 24 04          	mov    %eax,0x4(%esp)
 816e588:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816e58b:	89 04 24             	mov    %eax,(%esp)
 816e58e:	e8 5b 0b 00 00       	call   816f0ee <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEneERKS7_>
 816e593:	84 c0                	test   %al,%al
 816e595:	74 21                	je     816e5b8 <_ZN22ServiceRestrictManager11beginPolicyEN16RestrictCategory4EnumERKSs+0x6e>
 816e597:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816e59a:	89 04 24             	mov    %eax,(%esp)
 816e59d:	e8 60 0b 00 00       	call   816f102 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEptEv>
 816e5a2:	8b 40 04             	mov    0x4(%eax),%eax
 816e5a5:	8b 10                	mov    (%eax),%edx
 816e5a7:	83 c2 08             	add    $0x8,%edx
 816e5aa:	8b 0a                	mov    (%edx),%ecx
 816e5ac:	8b 55 10             	mov    0x10(%ebp),%edx
 816e5af:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e5b3:	89 04 24             	mov    %eax,(%esp)
 816e5b6:	ff d1                	call   *%ecx
 816e5b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 816e5bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 816e5bf:	8b 45 08             	mov    0x8(%ebp),%eax
 816e5c2:	89 04 24             	mov    %eax,(%esp)
 816e5c5:	e8 a0 04 00 00       	call   816ea6a <_ZN22ServiceRestrictManager11printPolicyEN16RestrictCategory4EnumE>
 816e5ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 816e5cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 816e5d1:	8b 45 08             	mov    0x8(%ebp),%eax
 816e5d4:	89 04 24             	mov    %eax,(%esp)
 816e5d7:	e8 86 05 00 00       	call   816eb62 <_ZN22ServiceRestrictManager12updatePolicyEN16RestrictCategory4EnumE>
 816e5dc:	c9                   	leave
 816e5dd:	c3                   	ret

```

```c
// ServiceRestrictManager::beginPolicy @ 0x816e54a

/* ServiceRestrictManager::beginPolicy(RestrictCategory::Enum, std::string const&) */

void __thiscall
ServiceRestrictManager::beginPolicy
          (ServiceRestrictManager *this,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>> local_14 [4];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_10 [12];
  
  puVar3 = &param_2;
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::find(local_14);
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>
            ::operator->(local_14);
    (**(code **)(**(int **)(iVar2 + 4) + 8))(*(int **)(iVar2 + 4),param_3,puVar3);
  }
  printPolicy(this,param_2);
  updatePolicy(this,param_2);
  return;
}

```

---

## endPolicy

```asm
// === 0816e5de ServiceRestrictManager::endPolicy  [0x0816e5de-0x816e647] ===
 816e5de:	55                   	push   %ebp
 816e5df:	89 e5                	mov    %esp,%ebp
 816e5e1:	83 ec 28             	sub    $0x28,%esp
 816e5e4:	8b 55 08             	mov    0x8(%ebp),%edx
 816e5e7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816e5ea:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 816e5ed:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 816e5f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e5f5:	89 04 24             	mov    %eax,(%esp)
 816e5f8:	e8 9f 0a 00 00       	call   816f09c <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEE4findERS7_>
 816e5fd:	83 ec 04             	sub    $0x4,%esp
 816e600:	8b 55 08             	mov    0x8(%ebp),%edx
 816e603:	8d 45 f4             	lea    -0xc(%ebp),%eax
 816e606:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e60a:	89 04 24             	mov    %eax,(%esp)
 816e60d:	e8 b6 0a 00 00       	call   816f0c8 <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEE3endEv>
 816e612:	83 ec 04             	sub    $0x4,%esp
 816e615:	8d 45 f4             	lea    -0xc(%ebp),%eax
 816e618:	89 44 24 04          	mov    %eax,0x4(%esp)
 816e61c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816e61f:	89 04 24             	mov    %eax,(%esp)
 816e622:	e8 c7 0a 00 00       	call   816f0ee <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEneERKS7_>
 816e627:	84 c0                	test   %al,%al
 816e629:	74 1a                	je     816e645 <_ZN22ServiceRestrictManager9endPolicyEN16RestrictCategory4EnumE+0x67>
 816e62b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816e62e:	89 04 24             	mov    %eax,(%esp)
 816e631:	e8 cc 0a 00 00       	call   816f102 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEptEv>
 816e636:	8b 40 04             	mov    0x4(%eax),%eax
 816e639:	8b 10                	mov    (%eax),%edx
 816e63b:	83 c2 0c             	add    $0xc,%edx
 816e63e:	8b 12                	mov    (%edx),%edx
 816e640:	89 04 24             	mov    %eax,(%esp)
 816e643:	ff d2                	call   *%edx
 816e645:	c9                   	leave
 816e646:	c3                   	ret
 816e647:	90                   	nop

```

```c
// ServiceRestrictManager::endPolicy @ 0x816e5de

/* ServiceRestrictManager::endPolicy(RestrictCategory::Enum) */

void ServiceRestrictManager::endPolicy(void)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator *p_Var3;
  undefined1 *puVar4;
  _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>> local_14 [4];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_10 [12];
  
  puVar4 = &stack0x00000008;
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::find(local_14);
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::end(local_10);
  p_Var3 = (_Rb_tree_iterator *)local_10;
  cVar1 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
          operator!=(local_14,p_Var3);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>
            ::operator->(local_14);
    (**(code **)(**(int **)(iVar2 + 4) + 0xc))(*(int **)(iVar2 + 4),p_Var3,puVar4);
  }
  return;
}

```

---

## initialize

```asm
// === 0816e2b2 ServiceRestrictManager::initialize  [0x0816e2b2-0x816e549] ===
 816e2b2:	55                   	push   %ebp
 816e2b3:	89 e5                	mov    %esp,%ebp
 816e2b5:	57                   	push   %edi
 816e2b6:	56                   	push   %esi
 816e2b7:	53                   	push   %ebx
 816e2b8:	83 ec 4c             	sub    $0x4c,%esp
 816e2bb:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 816e2c2:	e8 ba de f5 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 816e2c7:	89 04 24             	mov    %eax,(%esp)
 816e2ca:	e8 fb c7 fd ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 816e2cf:	83 f8 01             	cmp    $0x1,%eax
 816e2d2:	0f 94 c0             	sete   %al
 816e2d5:	84 c0                	test   %al,%al
 816e2d7:	74 07                	je     816e2e0 <_ZN22ServiceRestrictManager10initializeEv+0x2e>
 816e2d9:	8b 45 08             	mov    0x8(%ebp),%eax
 816e2dc:	c6 40 19 01          	movb   $0x1,0x19(%eax)
 816e2e0:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 816e2e7:	e8 64 61 5b 00       	call   8724450 <_Znwj>
 816e2ec:	89 c3                	mov    %eax,%ebx
 816e2ee:	89 d8                	mov    %ebx,%eax
 816e2f0:	89 04 24             	mov    %eax,(%esp)
 816e2f3:	e8 b2 f2 ff ff       	call   816d5aa <_ZN10NullPolicyC1Ev>
 816e2f8:	eb 18                	jmp    816e312 <_ZN22ServiceRestrictManager10initializeEv+0x60>
 816e2fa:	89 d6                	mov    %edx,%esi
 816e2fc:	89 c7                	mov    %eax,%edi
 816e2fe:	89 1c 24             	mov    %ebx,(%esp)
 816e301:	e8 ea 61 5b 00       	call   87244f0 <_ZdlPv>
 816e306:	89 f8                	mov    %edi,%eax
 816e308:	89 f2                	mov    %esi,%edx
 816e30a:	89 04 24             	mov    %eax,(%esp)
 816e30d:	e8 3e 54 97 00       	call   8ae3750 <_Unwind_Resume>
 816e312:	89 d8                	mov    %ebx,%eax
 816e314:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 816e317:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 816e31b:	75 36                	jne    816e353 <_ZN22ServiceRestrictManager10initializeEv+0xa1>
 816e31d:	c7 44 24 10 0c 1d b8 	movl   $0x8b81d0c,0x10(%esp)
 816e324:	08 
 816e325:	c7 44 24 0c 69 01 00 	movl   $0x169,0xc(%esp)
 816e32c:	00 
 816e32d:	c7 44 24 08 00 2c b8 	movl   $0x8b82c00,0x8(%esp)
 816e334:	08 
 816e335:	c7 44 24 04 98 1b b8 	movl   $0x8b81b98,0x4(%esp)
 816e33c:	08 
 816e33d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 816e344:	e8 c1 58 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 816e349:	b8 00 00 00 00       	mov    $0x0,%eax
 816e34e:	e9 ef 01 00 00       	jmp    816e542 <_ZN22ServiceRestrictManager10initializeEv+0x290>
 816e353:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 816e356:	89 04 24             	mov    %eax,(%esp)
 816e359:	e8 b4 0a 00 00       	call   816ee12 <_ZN22InterfaceServicePolicy7getCodeEv>
 816e35e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 816e361:	8b 45 08             	mov    0x8(%ebp),%eax
 816e364:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 816e367:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e36b:	89 04 24             	mov    %eax,(%esp)
 816e36e:	e8 33 0c 00 00       	call   816efa6 <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEEixERS7_>
 816e373:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 816e376:	89 10                	mov    %edx,(%eax)
 816e378:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 816e37f:	e8 cc 60 5b 00       	call   8724450 <_Znwj>
 816e384:	89 c3                	mov    %eax,%ebx
 816e386:	89 d8                	mov    %ebx,%eax
 816e388:	89 04 24             	mov    %eax,(%esp)
 816e38b:	e8 3e f3 ff ff       	call   816d6ce <_ZN24AuthMobileRestrictPolicyC1Ev>
 816e390:	eb 18                	jmp    816e3aa <_ZN22ServiceRestrictManager10initializeEv+0xf8>
 816e392:	89 d6                	mov    %edx,%esi
 816e394:	89 c7                	mov    %eax,%edi
 816e396:	89 1c 24             	mov    %ebx,(%esp)
 816e399:	e8 52 61 5b 00       	call   87244f0 <_ZdlPv>
 816e39e:	89 f8                	mov    %edi,%eax
 816e3a0:	89 f2                	mov    %esi,%edx
 816e3a2:	89 04 24             	mov    %eax,(%esp)
 816e3a5:	e8 a6 53 97 00       	call   8ae3750 <_Unwind_Resume>
 816e3aa:	89 d8                	mov    %ebx,%eax
 816e3ac:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 816e3af:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 816e3b3:	75 36                	jne    816e3eb <_ZN22ServiceRestrictManager10initializeEv+0x139>
 816e3b5:	c7 44 24 10 38 1d b8 	movl   $0x8b81d38,0x10(%esp)
 816e3bc:	08 
 816e3bd:	c7 44 24 0c 71 01 00 	movl   $0x171,0xc(%esp)
 816e3c4:	00 
 816e3c5:	c7 44 24 08 00 2c b8 	movl   $0x8b82c00,0x8(%esp)
 816e3cc:	08 
 816e3cd:	c7 44 24 04 98 1b b8 	movl   $0x8b81b98,0x4(%esp)
 816e3d4:	08 
 816e3d5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 816e3dc:	e8 29 58 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 816e3e1:	b8 00 00 00 00       	mov    $0x0,%eax
 816e3e6:	e9 57 01 00 00       	jmp    816e542 <_ZN22ServiceRestrictManager10initializeEv+0x290>
 816e3eb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 816e3ee:	89 04 24             	mov    %eax,(%esp)
 816e3f1:	e8 1c 0a 00 00       	call   816ee12 <_ZN22InterfaceServicePolicy7getCodeEv>
 816e3f6:	89 45 d8             	mov    %eax,-0x28(%ebp)
 816e3f9:	8b 45 08             	mov    0x8(%ebp),%eax
 816e3fc:	8d 55 d8             	lea    -0x28(%ebp),%edx
 816e3ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e403:	89 04 24             	mov    %eax,(%esp)
 816e406:	e8 9b 0b 00 00       	call   816efa6 <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEEixERS7_>
 816e40b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 816e40e:	89 10                	mov    %edx,(%eax)
 816e410:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 816e417:	e8 34 60 5b 00       	call   8724450 <_Znwj>
 816e41c:	89 c3                	mov    %eax,%ebx
 816e41e:	89 d8                	mov    %ebx,%eax
 816e420:	89 04 24             	mov    %eax,(%esp)
 816e423:	e8 aa f9 ff ff       	call   816ddd2 <_ZN29CreateCharacterRestrictPolicyC1Ev>
 816e428:	eb 18                	jmp    816e442 <_ZN22ServiceRestrictManager10initializeEv+0x190>
 816e42a:	89 d6                	mov    %edx,%esi
 816e42c:	89 c7                	mov    %eax,%edi
 816e42e:	89 1c 24             	mov    %ebx,(%esp)
 816e431:	e8 ba 60 5b 00       	call   87244f0 <_ZdlPv>
 816e436:	89 f8                	mov    %edi,%eax
 816e438:	89 f2                	mov    %esi,%edx
 816e43a:	89 04 24             	mov    %eax,(%esp)
 816e43d:	e8 0e 53 97 00       	call   8ae3750 <_Unwind_Resume>
 816e442:	89 d8                	mov    %ebx,%eax
 816e444:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 816e447:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 816e44b:	75 36                	jne    816e483 <_ZN22ServiceRestrictManager10initializeEv+0x1d1>
 816e44d:	c7 44 24 10 74 1d b8 	movl   $0x8b81d74,0x10(%esp)
 816e454:	08 
 816e455:	c7 44 24 0c 7a 01 00 	movl   $0x17a,0xc(%esp)
 816e45c:	00 
 816e45d:	c7 44 24 08 00 2c b8 	movl   $0x8b82c00,0x8(%esp)
 816e464:	08 
 816e465:	c7 44 24 04 98 1b b8 	movl   $0x8b81b98,0x4(%esp)
 816e46c:	08 
 816e46d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 816e474:	e8 91 57 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 816e479:	b8 00 00 00 00       	mov    $0x0,%eax
 816e47e:	e9 bf 00 00 00       	jmp    816e542 <_ZN22ServiceRestrictManager10initializeEv+0x290>
 816e483:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 816e486:	89 04 24             	mov    %eax,(%esp)
 816e489:	e8 84 09 00 00       	call   816ee12 <_ZN22InterfaceServicePolicy7getCodeEv>
 816e48e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 816e491:	8b 45 08             	mov    0x8(%ebp),%eax
 816e494:	8d 55 dc             	lea    -0x24(%ebp),%edx
 816e497:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e49b:	89 04 24             	mov    %eax,(%esp)
 816e49e:	e8 03 0b 00 00       	call   816efa6 <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEEixERS7_>
 816e4a3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 816e4a6:	89 10                	mov    %edx,(%eax)
 816e4a8:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 816e4af:	e8 9c 5f 5b 00       	call   8724450 <_Znwj>
 816e4b4:	89 c3                	mov    %eax,%ebx
 816e4b6:	89 d8                	mov    %ebx,%eax
 816e4b8:	89 04 24             	mov    %eax,(%esp)
 816e4bb:	e8 90 f5 ff ff       	call   816da50 <_ZN22SecurityRestrictPolicyC1Ev>
 816e4c0:	eb 18                	jmp    816e4da <_ZN22ServiceRestrictManager10initializeEv+0x228>
 816e4c2:	89 d6                	mov    %edx,%esi
 816e4c4:	89 c7                	mov    %eax,%edi
 816e4c6:	89 1c 24             	mov    %ebx,(%esp)
 816e4c9:	e8 22 60 5b 00       	call   87244f0 <_ZdlPv>
 816e4ce:	89 f8                	mov    %edi,%eax
 816e4d0:	89 f2                	mov    %esi,%edx
 816e4d2:	89 04 24             	mov    %eax,(%esp)
 816e4d5:	e8 76 52 97 00       	call   8ae3750 <_Unwind_Resume>
 816e4da:	89 d8                	mov    %ebx,%eax
 816e4dc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 816e4df:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 816e4e3:	75 33                	jne    816e518 <_ZN22ServiceRestrictManager10initializeEv+0x266>
 816e4e5:	c7 44 24 10 b4 1d b8 	movl   $0x8b81db4,0x10(%esp)
 816e4ec:	08 
 816e4ed:	c7 44 24 0c 83 01 00 	movl   $0x183,0xc(%esp)
 816e4f4:	00 
 816e4f5:	c7 44 24 08 00 2c b8 	movl   $0x8b82c00,0x8(%esp)
 816e4fc:	08 
 816e4fd:	c7 44 24 04 98 1b b8 	movl   $0x8b81b98,0x4(%esp)
 816e504:	08 
 816e505:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 816e50c:	e8 f9 56 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 816e511:	b8 00 00 00 00       	mov    $0x0,%eax
 816e516:	eb 2a                	jmp    816e542 <_ZN22ServiceRestrictManager10initializeEv+0x290>
 816e518:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 816e51b:	89 04 24             	mov    %eax,(%esp)
 816e51e:	e8 ef 08 00 00       	call   816ee12 <_ZN22InterfaceServicePolicy7getCodeEv>
 816e523:	89 45 e0             	mov    %eax,-0x20(%ebp)
 816e526:	8b 45 08             	mov    0x8(%ebp),%eax
 816e529:	8d 55 e0             	lea    -0x20(%ebp),%edx
 816e52c:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e530:	89 04 24             	mov    %eax,(%esp)
 816e533:	e8 6e 0a 00 00       	call   816efa6 <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEEixERS7_>
 816e538:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 816e53b:	89 10                	mov    %edx,(%eax)
 816e53d:	b8 01 00 00 00       	mov    $0x1,%eax
 816e542:	83 c4 4c             	add    $0x4c,%esp
 816e545:	5b                   	pop    %ebx
 816e546:	5e                   	pop    %esi
 816e547:	5f                   	pop    %edi
 816e548:	5d                   	pop    %ebp
 816e549:	c3                   	ret

```

```c
// ServiceRestrictManager::initialize @ 0x816e2b2

/* ServiceRestrictManager::initialize() */

undefined4 __thiscall ServiceRestrictManager::initialize(ServiceRestrictManager *this)

{
  CEnvironment *this_00;
  int iVar1;
  NullPolicy *this_01;
  undefined4 uVar2;
  undefined4 *puVar3;
  AuthMobileRestrictPolicy *this_02;
  CreateCharacterRestrictPolicy *this_03;
  SecurityRestrictPolicy *this_04;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  NullPolicy *local_20;
  
  local_20 = (NullPolicy *)0x0;
  this_00 = (CEnvironment *)G_CEnvironment();
  iVar1 = CEnvironment::get_channel_no(this_00);
  if (iVar1 == 1) {
    this[0x19] = (ServiceRestrictManager)0x1;
  }
  this_01 = operator_new(0x18);
                    /* try { // try from 0816e2f3 to 0816e2f7 has its CatchHandler @ 0816e2fa */
  NullPolicy::NullPolicy(this_01);
  local_20 = this_01;
  if (this_01 == (NullPolicy *)0x0) {
    LogManager::logFormat
              (1,"localtaiwan/System/ServiceRestrictManager.cpp",
               "bool ServiceRestrictManager::initialize()",0x169,
               "[Taiwan, Restrict] Fail create NullPolicy.");
    uVar2 = 0;
  }
  else {
    local_30 = InterfaceServicePolicy::getCode((InterfaceServicePolicy *)this_01);
    puVar3 = (undefined4 *)
             std::
             map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
             ::operator[]((map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
                           *)this,(Enum *)&local_30);
    *puVar3 = local_20;
    this_02 = operator_new(0x18);
                    /* try { // try from 0816e38b to 0816e38f has its CatchHandler @ 0816e392 */
    AuthMobileRestrictPolicy::AuthMobileRestrictPolicy(this_02);
    local_20 = (NullPolicy *)this_02;
    if (this_02 == (AuthMobileRestrictPolicy *)0x0) {
      LogManager::logFormat
                (1,"localtaiwan/System/ServiceRestrictManager.cpp",
                 "bool ServiceRestrictManager::initialize()",0x171,
                 "[Taiwan, Restrict] Fail create AuthMobileRestrictPolicy.");
      uVar2 = 0;
    }
    else {
      local_2c = InterfaceServicePolicy::getCode((InterfaceServicePolicy *)this_02);
      puVar3 = (undefined4 *)
               std::
               map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
               ::operator[]((map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
                             *)this,(Enum *)&local_2c);
      *puVar3 = local_20;
      this_03 = operator_new(0x18);
                    /* try { // try from 0816e423 to 0816e427 has its CatchHandler @ 0816e42a */
      CreateCharacterRestrictPolicy::CreateCharacterRestrictPolicy(this_03);
      local_20 = (NullPolicy *)this_03;
      if (this_03 == (CreateCharacterRestrictPolicy *)0x0) {
        LogManager::logFormat
                  (1,"localtaiwan/System/ServiceRestrictManager.cpp",
                   "bool ServiceRestrictManager::initialize()",0x17a,
                   "[Taiwan, Restrict] Fail create CreateCharacterRestrictPolicy.");
        uVar2 = 0;
      }
      else {
        local_28 = InterfaceServicePolicy::getCode((InterfaceServicePolicy *)this_03);
        puVar3 = (undefined4 *)
                 std::
                 map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
                 ::operator[]((map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
                               *)this,(Enum *)&local_28);
        *puVar3 = local_20;
        this_04 = operator_new(0x18);
                    /* try { // try from 0816e4bb to 0816e4bf has its CatchHandler @ 0816e4c2 */
        SecurityRestrictPolicy::SecurityRestrictPolicy(this_04);
        local_20 = (NullPolicy *)this_04;
        if (this_04 == (SecurityRestrictPolicy *)0x0) {
          LogManager::logFormat
                    (1,"localtaiwan/System/ServiceRestrictManager.cpp",
                     "bool ServiceRestrictManager::initialize()",0x183,
                     "[Taiwan, Restrict] Fail create SecurityRestrictPolicy.");
          uVar2 = 0;
        }
        else {
          local_24 = InterfaceServicePolicy::getCode((InterfaceServicePolicy *)this_04);
          puVar3 = (undefined4 *)
                   std::
                   map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
                   ::operator[]((map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
                                 *)this,(Enum *)&local_24);
          *puVar3 = local_20;
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}

```

---

## isApply

```asm
// === 0816e648 ServiceRestrictManager::isApply  [0x0816e648-0x816e6b7] ===
 816e648:	55                   	push   %ebp
 816e649:	89 e5                	mov    %esp,%ebp
 816e64b:	83 ec 28             	sub    $0x28,%esp
 816e64e:	8b 55 08             	mov    0x8(%ebp),%edx
 816e651:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816e654:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 816e657:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 816e65b:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e65f:	89 04 24             	mov    %eax,(%esp)
 816e662:	e8 35 0a 00 00       	call   816f09c <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEE4findERS7_>
 816e667:	83 ec 04             	sub    $0x4,%esp
 816e66a:	8b 55 08             	mov    0x8(%ebp),%edx
 816e66d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 816e670:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e674:	89 04 24             	mov    %eax,(%esp)
 816e677:	e8 4c 0a 00 00       	call   816f0c8 <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEE3endEv>
 816e67c:	83 ec 04             	sub    $0x4,%esp
 816e67f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 816e682:	89 44 24 04          	mov    %eax,0x4(%esp)
 816e686:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816e689:	89 04 24             	mov    %eax,(%esp)
 816e68c:	e8 5d 0a 00 00       	call   816f0ee <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEneERKS7_>
 816e691:	84 c0                	test   %al,%al
 816e693:	74 1c                	je     816e6b1 <_ZN22ServiceRestrictManager7isApplyEN16RestrictCategory4EnumE+0x69>
 816e695:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816e698:	89 04 24             	mov    %eax,(%esp)
 816e69b:	e8 62 0a 00 00       	call   816f102 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEptEv>
 816e6a0:	8b 40 04             	mov    0x4(%eax),%eax
 816e6a3:	8b 10                	mov    (%eax),%edx
 816e6a5:	83 c2 10             	add    $0x10,%edx
 816e6a8:	8b 12                	mov    (%edx),%edx
 816e6aa:	89 04 24             	mov    %eax,(%esp)
 816e6ad:	ff d2                	call   *%edx
 816e6af:	eb 05                	jmp    816e6b6 <_ZN22ServiceRestrictManager7isApplyEN16RestrictCategory4EnumE+0x6e>
 816e6b1:	b8 01 00 00 00       	mov    $0x1,%eax
 816e6b6:	c9                   	leave
 816e6b7:	c3                   	ret

```

```c
// ServiceRestrictManager::isApply @ 0x816e648

/* ServiceRestrictManager::isApply(RestrictCategory::Enum) */

undefined4 ServiceRestrictManager::isApply(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator *p_Var4;
  undefined1 *puVar5;
  _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>> local_14 [4];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_10 [12];
  
  puVar5 = &stack0x00000008;
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::find(local_14);
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::end(local_10);
  p_Var4 = (_Rb_tree_iterator *)local_10;
  cVar1 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
          operator!=(local_14,p_Var4);
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>
            ::operator->(local_14);
    uVar3 = (**(code **)(**(int **)(iVar2 + 4) + 0x10))(*(int **)(iVar2 + 4),p_Var4,puVar5);
  }
  return uVar3;
}

```

---

## isRestricted

```asm
// === 0816e6b8 ServiceRestrictManager::isRestricted  [0x0816e6b8-0x816e75d] ===
 816e6b8:	55                   	push   %ebp
 816e6b9:	89 e5                	mov    %esp,%ebp
 816e6bb:	83 ec 28             	sub    $0x28,%esp
 816e6be:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 816e6c2:	75 0a                	jne    816e6ce <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi+0x16>
 816e6c4:	b8 00 00 00 00       	mov    $0x0,%eax
 816e6c9:	e9 8d 00 00 00       	jmp    816e75b <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi+0xa3>
 816e6ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 816e6d1:	89 04 24             	mov    %eax,(%esp)
 816e6d4:	e8 45 07 00 00       	call   816ee1e <_ZN5CUser17getGarenaAuthDataEv>
 816e6d9:	89 04 24             	mov    %eax,(%esp)
 816e6dc:	e8 41 49 00 00       	call   8173022 <_ZN6Taiwan14GarenaAuthData13getMobileAuthEv>
 816e6e1:	84 c0                	test   %al,%al
 816e6e3:	74 07                	je     816e6ec <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi+0x34>
 816e6e5:	b8 00 00 00 00       	mov    $0x0,%eax
 816e6ea:	eb 6f                	jmp    816e75b <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi+0xa3>
 816e6ec:	8b 55 08             	mov    0x8(%ebp),%edx
 816e6ef:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816e6f2:	8d 4d 10             	lea    0x10(%ebp),%ecx
 816e6f5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 816e6f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e6fd:	89 04 24             	mov    %eax,(%esp)
 816e700:	e8 97 09 00 00       	call   816f09c <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEE4findERS7_>
 816e705:	83 ec 04             	sub    $0x4,%esp
 816e708:	8b 55 08             	mov    0x8(%ebp),%edx
 816e70b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 816e70e:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e712:	89 04 24             	mov    %eax,(%esp)
 816e715:	e8 ae 09 00 00       	call   816f0c8 <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEE3endEv>
 816e71a:	83 ec 04             	sub    $0x4,%esp
 816e71d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 816e720:	89 44 24 04          	mov    %eax,0x4(%esp)
 816e724:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816e727:	89 04 24             	mov    %eax,(%esp)
 816e72a:	e8 bf 09 00 00       	call   816f0ee <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEneERKS7_>
 816e72f:	84 c0                	test   %al,%al
 816e731:	74 23                	je     816e756 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi+0x9e>
 816e733:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816e736:	89 04 24             	mov    %eax,(%esp)
 816e739:	e8 c4 09 00 00       	call   816f102 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEptEv>
 816e73e:	8b 40 04             	mov    0x4(%eax),%eax
 816e741:	8b 10                	mov    (%eax),%edx
 816e743:	83 c2 14             	add    $0x14,%edx
 816e746:	8b 0a                	mov    (%edx),%ecx
 816e748:	8b 55 14             	mov    0x14(%ebp),%edx
 816e74b:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e74f:	89 04 24             	mov    %eax,(%esp)
 816e752:	ff d1                	call   *%ecx
 816e754:	eb 05                	jmp    816e75b <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi+0xa3>
 816e756:	b8 01 00 00 00       	mov    $0x1,%eax
 816e75b:	c9                   	leave
 816e75c:	c3                   	ret
 816e75d:	90                   	nop

```

```c
// ServiceRestrictManager::isRestricted @ 0x816e6b8

/* ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int) */

undefined4 __thiscall
ServiceRestrictManager::isRestricted
          (undefined4 this,CUser *param_1,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  GarenaAuthData *this_00;
  int iVar3;
  undefined1 *puVar4;
  _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>> local_14 [4];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_10 [12];
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    this_00 = (GarenaAuthData *)CUser::getGarenaAuthData(param_1);
    cVar1 = Taiwan::GarenaAuthData::getMobileAuth(this_00);
    if (cVar1 == '\0') {
      puVar4 = (undefined1 *)&param_3;
      std::
      map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
      ::find(local_14);
      std::
      map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
      ::end(local_10);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
              operator!=(local_14,(_Rb_tree_iterator *)local_10);
      if (cVar1 == '\0') {
        uVar2 = 1;
      }
      else {
        iVar3 = std::
                _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
                operator->(local_14);
        uVar2 = (**(code **)(**(int **)(iVar3 + 4) + 0x14))(*(int **)(iVar3 + 4),param_4,puVar4);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## isRestricted_0816e75e

```asm
// === 0816e75e ServiceRestrictManager::isRestricted  [0x0816e75e-0x816e7d5] ===
 816e75e:	55                   	push   %ebp
 816e75f:	89 e5                	mov    %esp,%ebp
 816e761:	83 ec 28             	sub    $0x28,%esp
 816e764:	8b 55 08             	mov    0x8(%ebp),%edx
 816e767:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816e76a:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 816e76d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 816e771:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e775:	89 04 24             	mov    %eax,(%esp)
 816e778:	e8 1f 09 00 00       	call   816f09c <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEE4findERS7_>
 816e77d:	83 ec 04             	sub    $0x4,%esp
 816e780:	8b 55 08             	mov    0x8(%ebp),%edx
 816e783:	8d 45 f4             	lea    -0xc(%ebp),%eax
 816e786:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e78a:	89 04 24             	mov    %eax,(%esp)
 816e78d:	e8 36 09 00 00       	call   816f0c8 <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEE3endEv>
 816e792:	83 ec 04             	sub    $0x4,%esp
 816e795:	8d 45 f4             	lea    -0xc(%ebp),%eax
 816e798:	89 44 24 04          	mov    %eax,0x4(%esp)
 816e79c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816e79f:	89 04 24             	mov    %eax,(%esp)
 816e7a2:	e8 47 09 00 00       	call   816f0ee <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEneERKS7_>
 816e7a7:	84 c0                	test   %al,%al
 816e7a9:	74 23                	je     816e7ce <_ZN22ServiceRestrictManager12isRestrictedEN16RestrictCategory4EnumEi+0x70>
 816e7ab:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816e7ae:	89 04 24             	mov    %eax,(%esp)
 816e7b1:	e8 4c 09 00 00       	call   816f102 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEptEv>
 816e7b6:	8b 40 04             	mov    0x4(%eax),%eax
 816e7b9:	8b 10                	mov    (%eax),%edx
 816e7bb:	83 c2 14             	add    $0x14,%edx
 816e7be:	8b 0a                	mov    (%edx),%ecx
 816e7c0:	8b 55 10             	mov    0x10(%ebp),%edx
 816e7c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e7c7:	89 04 24             	mov    %eax,(%esp)
 816e7ca:	ff d1                	call   *%ecx
 816e7cc:	eb 05                	jmp    816e7d3 <_ZN22ServiceRestrictManager12isRestrictedEN16RestrictCategory4EnumEi+0x75>
 816e7ce:	b8 01 00 00 00       	mov    $0x1,%eax
 816e7d3:	c9                   	leave
 816e7d4:	c3                   	ret
 816e7d5:	90                   	nop

```

```c
// ServiceRestrictManager::isRestricted @ 0x816e75e

/* ServiceRestrictManager::isRestricted(RestrictCategory::Enum, int) */

undefined4 __thiscall
ServiceRestrictManager::isRestricted(undefined4 this,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>> local_14 [4];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_10 [12];
  
  puVar4 = (undefined1 *)&param_2;
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::find(local_14);
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>
            ::operator->(local_14);
    uVar3 = (**(code **)(**(int **)(iVar2 + 4) + 0x14))(*(int **)(iVar2 + 4),param_3,puVar4);
  }
  return uVar3;
}

```

---

## loadPolicy

```asm
// === 0816e7d6 ServiceRestrictManager::loadPolicy  [0x0816e7d6-0x816e8cd] ===
 816e7d6:	55                   	push   %ebp
 816e7d7:	89 e5                	mov    %esp,%ebp
 816e7d9:	56                   	push   %esi
 816e7da:	53                   	push   %ebx
 816e7db:	83 ec 30             	sub    $0x30,%esp
 816e7de:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 816e7e3:	c7 44 24 08 c5 01 00 	movl   $0x1c5,0x8(%esp)
 816e7ea:	00 
 816e7eb:	c7 44 24 04 98 1b b8 	movl   $0x8b81b98,0x4(%esp)
 816e7f2:	08 
 816e7f3:	89 04 24             	mov    %eax,(%esp)
 816e7f6:	e8 8b 12 12 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 816e7fb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 816e802:	00 
 816e803:	89 44 24 04          	mov    %eax,0x4(%esp)
 816e807:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816e80a:	89 04 24             	mov    %eax,(%esp)
 816e80d:	e8 14 a4 f5 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 816e812:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 816e819:	ff 
 816e81a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 816e821:	00 
 816e822:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816e825:	89 04 24             	mov    %eax,(%esp)
 816e828:	e8 23 51 ff ff       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 816e82d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816e830:	89 04 24             	mov    %eax,(%esp)
 816e833:	e8 16 a4 f5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 816e838:	89 04 24             	mov    %eax,(%esp)
 816e83b:	e8 62 01 ff ff       	call   815e9a2 <_ZN12CStreamGuard11GetInBufferIN6Taiwan21SigLoadRestrictPolicyEEEPT_v>
 816e840:	89 45 f4             	mov    %eax,-0xc(%ebp)
 816e843:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 816e847:	75 2e                	jne    816e877 <_ZN22ServiceRestrictManager10loadPolicyEv+0xa1>
 816e849:	c7 44 24 10 ec 1d b8 	movl   $0x8b81dec,0x10(%esp)
 816e850:	08 
 816e851:	c7 44 24 0c cc 01 00 	movl   $0x1cc,0xc(%esp)
 816e858:	00 
 816e859:	c7 44 24 08 c0 2b b8 	movl   $0x8b82bc0,0x8(%esp)
 816e860:	08 
 816e861:	c7 44 24 04 98 1b b8 	movl   $0x8b81b98,0x4(%esp)
 816e868:	08 
 816e869:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 816e870:	e8 95 53 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 816e875:	eb 44                	jmp    816e8bb <_ZN22ServiceRestrictManager10loadPolicyEv+0xe5>
 816e877:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816e87a:	89 04 24             	mov    %eax,(%esp)
 816e87d:	e8 26 f5 fe ff       	call   815dda8 <_ZN6Taiwan21SigLoadRestrictPolicy4initEv>
 816e882:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 816e887:	8d 55 ec             	lea    -0x14(%ebp),%edx
 816e88a:	89 54 24 08          	mov    %edx,0x8(%esp)
 816e88e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 816e895:	00 
 816e896:	89 04 24             	mov    %eax,(%esp)
 816e899:	e8 40 27 40 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 816e89e:	eb 1b                	jmp    816e8bb <_ZN22ServiceRestrictManager10loadPolicyEv+0xe5>
 816e8a0:	89 d3                	mov    %edx,%ebx
 816e8a2:	89 c6                	mov    %eax,%esi
 816e8a4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816e8a7:	89 04 24             	mov    %eax,(%esp)
 816e8aa:	e8 23 e0 4a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 816e8af:	89 f0                	mov    %esi,%eax
 816e8b1:	89 da                	mov    %ebx,%edx
 816e8b3:	89 04 24             	mov    %eax,(%esp)
 816e8b6:	e8 95 4e 97 00       	call   8ae3750 <_Unwind_Resume>
 816e8bb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816e8be:	89 04 24             	mov    %eax,(%esp)
 816e8c1:	e8 0c e0 4a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 816e8c6:	83 c4 30             	add    $0x30,%esp
 816e8c9:	5b                   	pop    %ebx
 816e8ca:	5e                   	pop    %esi
 816e8cb:	5d                   	pop    %ebp
 816e8cc:	c3                   	ret
 816e8cd:	90                   	nop

```

```c
// ServiceRestrictManager::loadPolicy @ 0x816e7d6

/* ServiceRestrictManager::loadPolicy() */

void ServiceRestrictManager::loadPolicy(void)

{
  Stream *pSVar1;
  CStreamGuard *this;
  CStreamGuard local_18 [8];
  SigLoadRestrictPolicy *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/System/ServiceRestrictManager.cpp",0x1c5);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 0816e828 to 0816e89d has its CatchHandler @ 0816e8a0 */
  Taiwan::internal_stream(local_18,1,0xffffffff);
  this = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<Taiwan::SigLoadRestrictPolicy>(this);
  if (local_10 == (SigLoadRestrictPolicy *)0x0) {
    LogManager::logFormat
              (1,"localtaiwan/System/ServiceRestrictManager.cpp",
               "void ServiceRestrictManager::loadPolicy()",0x1cc,
               "[Taiwan, Restrict] SigLoadRestrictPolicy is null.");
  }
  else {
    Taiwan::SigLoadRestrictPolicy::init(local_10);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## printPolicy

```asm
// === 0816ea6a ServiceRestrictManager::printPolicy  [0x0816ea6a-0x816eb61] ===
 816ea6a:	55                   	push   %ebp
 816ea6b:	89 e5                	mov    %esp,%ebp
 816ea6d:	83 ec 58             	sub    $0x58,%esp
 816ea70:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 816ea77:	00 
 816ea78:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 816ea7f:	00 
 816ea80:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 816ea87:	00 
 816ea88:	c7 44 24 08 ef 01 00 	movl   $0x1ef,0x8(%esp)
 816ea8f:	00 
 816ea90:	c7 44 24 04 20 2b b8 	movl   $0x8b82b20,0x4(%esp)
 816ea97:	08 
 816ea98:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816ea9b:	89 04 24             	mov    %eax,(%esp)
 816ea9e:	e8 a3 0c 3e 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 816eaa3:	c7 44 24 04 54 1e b8 	movl   $0x8b81e54,0x4(%esp)
 816eaaa:	08 
 816eaab:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816eaae:	89 04 24             	mov    %eax,(%esp)
 816eab1:	e8 d2 0c 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816eab6:	8b 55 08             	mov    0x8(%ebp),%edx
 816eab9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 816eabc:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 816eabf:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 816eac3:	89 54 24 04          	mov    %edx,0x4(%esp)
 816eac7:	89 04 24             	mov    %eax,(%esp)
 816eaca:	e8 cd 05 00 00       	call   816f09c <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEE4findERS7_>
 816eacf:	83 ec 04             	sub    $0x4,%esp
 816ead2:	8b 55 08             	mov    0x8(%ebp),%edx
 816ead5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 816ead8:	89 54 24 04          	mov    %edx,0x4(%esp)
 816eadc:	89 04 24             	mov    %eax,(%esp)
 816eadf:	e8 e4 05 00 00       	call   816f0c8 <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEE3endEv>
 816eae4:	83 ec 04             	sub    $0x4,%esp
 816eae7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 816eaea:	89 44 24 04          	mov    %eax,0x4(%esp)
 816eaee:	8d 45 d0             	lea    -0x30(%ebp),%eax
 816eaf1:	89 04 24             	mov    %eax,(%esp)
 816eaf4:	e8 f5 05 00 00       	call   816f0ee <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEneERKS7_>
 816eaf9:	84 c0                	test   %al,%al
 816eafb:	74 1c                	je     816eb19 <_ZN22ServiceRestrictManager11printPolicyEN16RestrictCategory4EnumE+0xaf>
 816eafd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 816eb00:	89 04 24             	mov    %eax,(%esp)
 816eb03:	e8 fa 05 00 00       	call   816f102 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEptEv>
 816eb08:	8b 40 04             	mov    0x4(%eax),%eax
 816eb0b:	8b 10                	mov    (%eax),%edx
 816eb0d:	83 c2 18             	add    $0x18,%edx
 816eb10:	8b 12                	mov    (%edx),%edx
 816eb12:	89 04 24             	mov    %eax,(%esp)
 816eb15:	ff d2                	call   *%edx
 816eb17:	eb 46                	jmp    816eb5f <_ZN22ServiceRestrictManager11printPolicyEN16RestrictCategory4EnumE+0xf5>
 816eb19:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 816eb20:	00 
 816eb21:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 816eb28:	00 
 816eb29:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 816eb30:	00 
 816eb31:	c7 44 24 08 f3 01 00 	movl   $0x1f3,0x8(%esp)
 816eb38:	00 
 816eb39:	c7 44 24 04 20 2b b8 	movl   $0x8b82b20,0x4(%esp)
 816eb40:	08 
 816eb41:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816eb44:	89 04 24             	mov    %eax,(%esp)
 816eb47:	e8 fa 0b 3e 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 816eb4c:	c7 44 24 04 74 1e b8 	movl   $0x8b81e74,0x4(%esp)
 816eb53:	08 
 816eb54:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816eb57:	89 04 24             	mov    %eax,(%esp)
 816eb5a:	e8 29 0c 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816eb5f:	c9                   	leave
 816eb60:	c3                   	ret
 816eb61:	90                   	nop

```

```c
// ServiceRestrictManager::printPolicy @ 0x816ea6a

/* ServiceRestrictManager::printPolicy(RestrictCategory::Enum) */

void ServiceRestrictManager::printPolicy(void)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator *p_Var3;
  undefined1 *puVar4;
  _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>> local_34 [4];
  cMyTrace local_30 [16];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_20 [4];
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_30,"void ServiceRestrictManager::printPolicy(RestrictCategory::Enum)",
                     0x1ef,9,true,true);
  cMyTrace::operator()(local_30,"[!] Service Restrict List ... ");
  puVar4 = &stack0x00000008;
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::find(local_34);
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::end(local_20);
  p_Var3 = (_Rb_tree_iterator *)local_20;
  cVar1 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
          operator!=(local_34,p_Var3);
  if (cVar1 == '\0') {
    cMyTrace::cMyTrace(local_1c,"void ServiceRestrictManager::printPolicy(RestrictCategory::Enum)",
                       499,9,true,true);
    cMyTrace::operator()(local_1c,"[!] Service Restrict List ... End");
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>
            ::operator->(local_34);
    (**(code **)(**(int **)(iVar2 + 4) + 0x18))(*(int **)(iVar2 + 4),p_Var3,puVar4);
  }
  return;
}

```

---

## savePolicy

```asm
// === 0816e8ce ServiceRestrictManager::savePolicy  [0x0816e8ce-0x816ea69] ===
 816e8ce:	55                   	push   %ebp
 816e8cf:	89 e5                	mov    %esp,%ebp
 816e8d1:	56                   	push   %esi
 816e8d2:	53                   	push   %ebx
 816e8d3:	83 ec 40             	sub    $0x40,%esp
 816e8d6:	8b 45 08             	mov    0x8(%ebp),%eax
 816e8d9:	0f b6 40 19          	movzbl 0x19(%eax),%eax
 816e8dd:	83 f0 01             	xor    $0x1,%eax
 816e8e0:	84 c0                	test   %al,%al
 816e8e2:	0f 85 77 01 00 00    	jne    816ea5f <_ZN22ServiceRestrictManager10savePolicyEv+0x191>
 816e8e8:	8b 55 08             	mov    0x8(%ebp),%edx
 816e8eb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 816e8ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e8f2:	89 04 24             	mov    %eax,(%esp)
 816e8f5:	e8 16 08 00 00       	call   816f110 <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEE5beginEv>
 816e8fa:	83 ec 04             	sub    $0x4,%esp
 816e8fd:	e9 2c 01 00 00       	jmp    816ea2e <_ZN22ServiceRestrictManager10savePolicyEv+0x160>
 816e902:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 816e907:	c7 44 24 08 de 01 00 	movl   $0x1de,0x8(%esp)
 816e90e:	00 
 816e90f:	c7 44 24 04 98 1b b8 	movl   $0x8b81b98,0x4(%esp)
 816e916:	08 
 816e917:	89 04 24             	mov    %eax,(%esp)
 816e91a:	e8 67 11 12 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 816e91f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 816e926:	00 
 816e927:	89 44 24 04          	mov    %eax,0x4(%esp)
 816e92b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816e92e:	89 04 24             	mov    %eax,(%esp)
 816e931:	e8 f0 a2 f5 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 816e936:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 816e93d:	ff 
 816e93e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 816e945:	00 
 816e946:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816e949:	89 04 24             	mov    %eax,(%esp)
 816e94c:	e8 ff 4f ff ff       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 816e951:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816e954:	89 04 24             	mov    %eax,(%esp)
 816e957:	e8 f2 a2 f5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 816e95c:	89 04 24             	mov    %eax,(%esp)
 816e95f:	e8 3e 00 ff ff       	call   815e9a2 <_ZN12CStreamGuard11GetInBufferIN6Taiwan21SigLoadRestrictPolicyEEEPT_v>
 816e964:	89 45 f4             	mov    %eax,-0xc(%ebp)
 816e967:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 816e96b:	75 3d                	jne    816e9aa <_ZN22ServiceRestrictManager10savePolicyEv+0xdc>
 816e96d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 816e974:	00 
 816e975:	c7 44 24 08 e3 01 00 	movl   $0x1e3,0x8(%esp)
 816e97c:	00 
 816e97d:	c7 44 24 04 80 2b b8 	movl   $0x8b82b80,0x4(%esp)
 816e984:	08 
 816e985:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 816e988:	89 04 24             	mov    %eax,(%esp)
 816e98b:	e8 88 0d 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 816e990:	c7 44 24 04 20 1e b8 	movl   $0x8b81e20,0x4(%esp)
 816e997:	08 
 816e998:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 816e99b:	89 04 24             	mov    %eax,(%esp)
 816e99e:	e8 e5 0d 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816e9a3:	bb 00 00 00 00       	mov    $0x0,%ebx
 816e9a8:	eb 6a                	jmp    816ea14 <_ZN22ServiceRestrictManager10savePolicyEv+0x146>
 816e9aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816e9ad:	89 04 24             	mov    %eax,(%esp)
 816e9b0:	e8 f3 f3 fe ff       	call   815dda8 <_ZN6Taiwan21SigLoadRestrictPolicy4initEv>
 816e9b5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 816e9b8:	89 04 24             	mov    %eax,(%esp)
 816e9bb:	e8 42 07 00 00       	call   816f102 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEptEv>
 816e9c0:	8b 40 04             	mov    0x4(%eax),%eax
 816e9c3:	8b 10                	mov    (%eax),%edx
 816e9c5:	83 c2 1c             	add    $0x1c,%edx
 816e9c8:	8b 0a                	mov    (%edx),%ecx
 816e9ca:	8b 55 f4             	mov    -0xc(%ebp),%edx
 816e9cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e9d1:	89 04 24             	mov    %eax,(%esp)
 816e9d4:	ff d1                	call   *%ecx
 816e9d6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 816e9db:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 816e9de:	89 54 24 08          	mov    %edx,0x8(%esp)
 816e9e2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 816e9e9:	00 
 816e9ea:	89 04 24             	mov    %eax,(%esp)
 816e9ed:	e8 ec 25 40 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 816e9f2:	bb 01 00 00 00       	mov    $0x1,%ebx
 816e9f7:	eb 1b                	jmp    816ea14 <_ZN22ServiceRestrictManager10savePolicyEv+0x146>
 816e9f9:	89 d3                	mov    %edx,%ebx
 816e9fb:	89 c6                	mov    %eax,%esi
 816e9fd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816ea00:	89 04 24             	mov    %eax,(%esp)
 816ea03:	e8 ca de 4a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 816ea08:	89 f0                	mov    %esi,%eax
 816ea0a:	89 da                	mov    %ebx,%edx
 816ea0c:	89 04 24             	mov    %eax,(%esp)
 816ea0f:	e8 3c 4d 97 00       	call   8ae3750 <_Unwind_Resume>
 816ea14:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816ea17:	89 04 24             	mov    %eax,(%esp)
 816ea1a:	e8 b3 de 4a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 816ea1f:	85 db                	test   %ebx,%ebx
 816ea21:	74 3d                	je     816ea60 <_ZN22ServiceRestrictManager10savePolicyEv+0x192>
 816ea23:	8d 45 dc             	lea    -0x24(%ebp),%eax
 816ea26:	89 04 24             	mov    %eax,(%esp)
 816ea29:	e8 08 07 00 00       	call   816f136 <_ZNSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEppEv>
 816ea2e:	8b 55 08             	mov    0x8(%ebp),%edx
 816ea31:	8d 45 e0             	lea    -0x20(%ebp),%eax
 816ea34:	89 54 24 04          	mov    %edx,0x4(%esp)
 816ea38:	89 04 24             	mov    %eax,(%esp)
 816ea3b:	e8 88 06 00 00       	call   816f0c8 <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEE3endEv>
 816ea40:	83 ec 04             	sub    $0x4,%esp
 816ea43:	8d 45 e0             	lea    -0x20(%ebp),%eax
 816ea46:	89 44 24 04          	mov    %eax,0x4(%esp)
 816ea4a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 816ea4d:	89 04 24             	mov    %eax,(%esp)
 816ea50:	e8 99 06 00 00       	call   816f0ee <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEneERKS7_>
 816ea55:	84 c0                	test   %al,%al
 816ea57:	0f 85 a5 fe ff ff    	jne    816e902 <_ZN22ServiceRestrictManager10savePolicyEv+0x34>
 816ea5d:	eb 01                	jmp    816ea60 <_ZN22ServiceRestrictManager10savePolicyEv+0x192>
 816ea5f:	90                   	nop
 816ea60:	8d 65 f8             	lea    -0x8(%ebp),%esp
 816ea63:	83 c4 00             	add    $0x0,%esp
 816ea66:	5b                   	pop    %ebx
 816ea67:	5e                   	pop    %esi
 816ea68:	5d                   	pop    %ebp
 816ea69:	c3                   	ret

```

```c
// ServiceRestrictManager::savePolicy @ 0x816e8ce

/* ServiceRestrictManager::savePolicy() */

void __thiscall ServiceRestrictManager::savePolicy(ServiceRestrictManager *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *this_00;
  int iVar3;
  bool bVar4;
  CStreamGuard local_30 [8];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_28 [4];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_24 [4];
  cMyTrace local_20 [16];
  SigLoadRestrictPolicy *local_10;
  
  if (this[0x19] == (ServiceRestrictManager)0x1) {
    std::
    map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
      ::end(local_24);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
              operator!=((_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>
                          *)local_28,(_Rb_tree_iterator *)local_24);
      if (cVar1 == '\0') break;
      pSVar2 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,
                                   "localtaiwan/System/ServiceRestrictManager.cpp",0x1de);
      CStreamGuard::CStreamGuard(local_30,pSVar2,true);
                    /* try { // try from 0816e94c to 0816e9f1 has its CatchHandler @ 0816e9f9 */
      Taiwan::internal_stream(local_30,2,0xffffffff);
      this_00 = (CStreamGuard *)CStreamGuard::operator->(local_30);
      local_10 = CStreamGuard::GetInBuffer<Taiwan::SigLoadRestrictPolicy>(this_00);
      bVar4 = local_10 != (SigLoadRestrictPolicy *)0x0;
      if (bVar4) {
        Taiwan::SigLoadRestrictPolicy::init(local_10);
        iVar3 = std::
                _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
                operator->((_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>
                            *)local_28);
        (**(code **)(**(int **)(iVar3 + 4) + 0x1c))(*(int **)(iVar3 + 4),local_10);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_30);
      }
      else {
        cMyTrace::cMyTrace(local_20,"void ServiceRestrictManager::savePolicy()",0x1e3,5);
        cMyTrace::operator()(local_20,"[Taiwan, Restrict] SigSaveRestrictPolicy is null.");
      }
      CStreamGuard::~CStreamGuard(local_30);
      if (!bVar4) {
        return;
      }
      std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
      operator++((_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>
                  *)local_28);
    }
  }
  return;
}

```

---

## serviceRestrictStringQuery

```asm
// === 0816e0ac ServiceRestrictManager::serviceRestrictStringQuery  [0x0816e0ac-0x816e271] ===
 816e0ac:	55                   	push   %ebp
 816e0ad:	89 e5                	mov    %esp,%ebp
 816e0af:	56                   	push   %esi
 816e0b0:	53                   	push   %ebx
 816e0b1:	81 ec d0 00 00 00    	sub    $0xd0,%esp
 816e0b7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 816e0ba:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 816e0c1:	00 
 816e0c2:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 816e0c8:	89 04 24             	mov    %eax,(%esp)
 816e0cb:	e8 e0 34 59 00       	call   87015b0 <_ZNSt19basic_ostringstreamIcSt11char_traitsIcESaIcEEC1ESt13_Ios_Openmode>
 816e0d0:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 816e0d7:	e9 8c 00 00 00       	jmp    816e168 <_ZN22ServiceRestrictManager26serviceRestrictStringQueryEv+0xbc>
 816e0dc:	c7 44 24 04 04 1d b8 	movl   $0x8b81d04,0x4(%esp)
 816e0e3:	08 
 816e0e4:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 816e0ea:	89 04 24             	mov    %eax,(%esp)
 816e0ed:	e8 0e f2 58 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 816e0f2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 816e0f9:	00 
 816e0fa:	89 04 24             	mov    %eax,(%esp)
 816e0fd:	e8 3e 1f 59 00       	call   8700040 <_ZNSolsEi>
 816e102:	c7 44 24 04 06 1d b8 	movl   $0x8b81d06,0x4(%esp)
 816e109:	08 
 816e10a:	89 04 24             	mov    %eax,(%esp)
 816e10d:	e8 ee f1 58 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 816e112:	8b 55 f0             	mov    -0x10(%ebp),%edx
 816e115:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e119:	89 04 24             	mov    %eax,(%esp)
 816e11c:	e8 1f 1f 59 00       	call   8700040 <_ZNSolsEi>
 816e121:	c7 44 24 04 06 1d b8 	movl   $0x8b81d06,0x4(%esp)
 816e128:	08 
 816e129:	89 04 24             	mov    %eax,(%esp)
 816e12c:	e8 cf f1 58 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 816e131:	8b 45 f0             	mov    -0x10(%ebp),%eax
 816e134:	89 04 24             	mov    %eax,(%esp)
 816e137:	e8 27 f3 ff ff       	call   816d463 <_ZN14MobileRestrict12enumToStringENS_4EnumE>
 816e13c:	89 44 24 04          	mov    %eax,0x4(%esp)
 816e140:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 816e146:	89 04 24             	mov    %eax,(%esp)
 816e149:	e8 b2 f1 58 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 816e14e:	c7 44 24 04 08 1d b8 	movl   $0x8b81d08,0x4(%esp)
 816e155:	08 
 816e156:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 816e15c:	89 04 24             	mov    %eax,(%esp)
 816e15f:	e8 9c f1 58 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 816e164:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 816e168:	83 7d f0 21          	cmpl   $0x21,-0x10(%ebp)
 816e16c:	0f 9e c0             	setle  %al
 816e16f:	84 c0                	test   %al,%al
 816e171:	0f 85 65 ff ff ff    	jne    816e0dc <_ZN22ServiceRestrictManager26serviceRestrictStringQueryEv+0x30>
 816e177:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 816e17e:	e9 8c 00 00 00       	jmp    816e20f <_ZN22ServiceRestrictManager26serviceRestrictStringQueryEv+0x163>
 816e183:	c7 44 24 04 04 1d b8 	movl   $0x8b81d04,0x4(%esp)
 816e18a:	08 
 816e18b:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 816e191:	89 04 24             	mov    %eax,(%esp)
 816e194:	e8 67 f1 58 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 816e199:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 816e1a0:	00 
 816e1a1:	89 04 24             	mov    %eax,(%esp)
 816e1a4:	e8 97 1e 59 00       	call   8700040 <_ZNSolsEi>
 816e1a9:	c7 44 24 04 06 1d b8 	movl   $0x8b81d06,0x4(%esp)
 816e1b0:	08 
 816e1b1:	89 04 24             	mov    %eax,(%esp)
 816e1b4:	e8 47 f1 58 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 816e1b9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 816e1bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e1c0:	89 04 24             	mov    %eax,(%esp)
 816e1c3:	e8 78 1e 59 00       	call   8700040 <_ZNSolsEi>
 816e1c8:	c7 44 24 04 06 1d b8 	movl   $0x8b81d06,0x4(%esp)
 816e1cf:	08 
 816e1d0:	89 04 24             	mov    %eax,(%esp)
 816e1d3:	e8 28 f1 58 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 816e1d8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816e1db:	89 04 24             	mov    %eax,(%esp)
 816e1de:	e8 8f f2 ff ff       	call   816d472 <_ZN17CharacterRestrict12enumToStringENS_4EnumE>
 816e1e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 816e1e7:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 816e1ed:	89 04 24             	mov    %eax,(%esp)
 816e1f0:	e8 0b f1 58 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 816e1f5:	c7 44 24 04 08 1d b8 	movl   $0x8b81d08,0x4(%esp)
 816e1fc:	08 
 816e1fd:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 816e203:	89 04 24             	mov    %eax,(%esp)
 816e206:	e8 f5 f0 58 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 816e20b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 816e20f:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 816e213:	0f 9e c0             	setle  %al
 816e216:	84 c0                	test   %al,%al
 816e218:	0f 85 65 ff ff ff    	jne    816e183 <_ZN22ServiceRestrictManager26serviceRestrictStringQueryEv+0xd7>
 816e21e:	89 d8                	mov    %ebx,%eax
 816e220:	8d 95 3c ff ff ff    	lea    -0xc4(%ebp),%edx
 816e226:	89 54 24 04          	mov    %edx,0x4(%esp)
 816e22a:	89 04 24             	mov    %eax,(%esp)
 816e22d:	e8 3e 6b 59 00       	call   8704d70 <_ZNKSt19basic_ostringstreamIcSt11char_traitsIcESaIcEE3strEv>
 816e232:	83 ec 04             	sub    $0x4,%esp
 816e235:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 816e23b:	89 04 24             	mov    %eax,(%esp)
 816e23e:	e8 cd 61 59 00       	call   8704410 <_ZNSt19basic_ostringstreamIcSt11char_traitsIcESaIcEED1Ev>
 816e243:	89 d8                	mov    %ebx,%eax
 816e245:	89 d8                	mov    %ebx,%eax
 816e247:	8d 65 f8             	lea    -0x8(%ebp),%esp
 816e24a:	83 c4 00             	add    $0x0,%esp
 816e24d:	5b                   	pop    %ebx
 816e24e:	5e                   	pop    %esi
 816e24f:	5d                   	pop    %ebp
 816e250:	c2 04 00             	ret    $0x4
 816e253:	89 d3                	mov    %edx,%ebx
 816e255:	89 c6                	mov    %eax,%esi
 816e257:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 816e25d:	89 04 24             	mov    %eax,(%esp)
 816e260:	e8 ab 61 59 00       	call   8704410 <_ZNSt19basic_ostringstreamIcSt11char_traitsIcESaIcEED1Ev>
 816e265:	89 f0                	mov    %esi,%eax
 816e267:	89 da                	mov    %ebx,%edx
 816e269:	89 04 24             	mov    %eax,(%esp)
 816e26c:	e8 df 54 97 00       	call   8ae3750 <_Unwind_Resume>
 816e271:	90                   	nop

```

```c
// ServiceRestrictManager::serviceRestrictStringQuery @ 0x816e0ac

/* ServiceRestrictManager::serviceRestrictStringQuery() */

ServiceRestrictManager * __thiscall
ServiceRestrictManager::serviceRestrictStringQuery(ServiceRestrictManager *this)

{
  ostream *poVar1;
  char *pcVar2;
  ostringstream local_c8 [180];
  int local_14;
  int local_10;
  
  std::ostringstream::ostringstream(local_c8,_S_out);
  for (local_14 = 0; local_14 < 0x22; local_14 = local_14 + 1) {
                    /* try { // try from 0816e0ed to 0816e231 has its CatchHandler @ 0816e253 */
    poVar1 = std::operator<<((ostream *)local_c8,"(");
    poVar1 = (ostream *)std::ostream::operator<<(poVar1,1);
    poVar1 = std::operator<<(poVar1,",");
    poVar1 = (ostream *)std::ostream::operator<<(poVar1,local_14);
    std::operator<<(poVar1,",");
    pcVar2 = (char *)MobileRestrict::enumToString(local_14);
    std::operator<<((ostream *)local_c8,pcVar2);
    std::operator<<((ostream *)local_c8,")");
  }
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    poVar1 = std::operator<<((ostream *)local_c8,"(");
    poVar1 = (ostream *)std::ostream::operator<<(poVar1,2);
    poVar1 = std::operator<<(poVar1,",");
    poVar1 = (ostream *)std::ostream::operator<<(poVar1,local_10);
    std::operator<<(poVar1,",");
    pcVar2 = (char *)CharacterRestrict::enumToString(local_10);
    std::operator<<((ostream *)local_c8,pcVar2);
    std::operator<<((ostream *)local_c8,")");
  }
  std::ostringstream::str();
  std::ostringstream::~ostringstream(local_c8);
  return this;
}

```

---

## updatePolicy

```asm
// === 0816eb62 ServiceRestrictManager::updatePolicy  [0x0816eb62-0x816ecd1] ===
 816eb62:	55                   	push   %ebp
 816eb63:	89 e5                	mov    %esp,%ebp
 816eb65:	56                   	push   %esi
 816eb66:	53                   	push   %ebx
 816eb67:	83 ec 40             	sub    $0x40,%esp
 816eb6a:	8b 55 08             	mov    0x8(%ebp),%edx
 816eb6d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 816eb70:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 816eb73:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 816eb77:	89 54 24 04          	mov    %edx,0x4(%esp)
 816eb7b:	89 04 24             	mov    %eax,(%esp)
 816eb7e:	e8 19 05 00 00       	call   816f09c <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEE4findERS7_>
 816eb83:	83 ec 04             	sub    $0x4,%esp
 816eb86:	8b 55 08             	mov    0x8(%ebp),%edx
 816eb89:	8d 45 e0             	lea    -0x20(%ebp),%eax
 816eb8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 816eb90:	89 04 24             	mov    %eax,(%esp)
 816eb93:	e8 30 05 00 00       	call   816f0c8 <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEE3endEv>
 816eb98:	83 ec 04             	sub    $0x4,%esp
 816eb9b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 816eb9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 816eba2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 816eba5:	89 04 24             	mov    %eax,(%esp)
 816eba8:	e8 41 05 00 00       	call   816f0ee <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEneERKS7_>
 816ebad:	84 c0                	test   %al,%al
 816ebaf:	0f 84 13 01 00 00    	je     816ecc8 <_ZN22ServiceRestrictManager12updatePolicyEN16RestrictCategory4EnumE+0x166>
 816ebb5:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 816ebba:	c7 44 24 08 fd 01 00 	movl   $0x1fd,0x8(%esp)
 816ebc1:	00 
 816ebc2:	c7 44 24 04 98 1b b8 	movl   $0x8b81b98,0x4(%esp)
 816ebc9:	08 
 816ebca:	89 04 24             	mov    %eax,(%esp)
 816ebcd:	e8 b4 0e 12 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 816ebd2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 816ebd9:	00 
 816ebda:	89 44 24 04          	mov    %eax,0x4(%esp)
 816ebde:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816ebe1:	89 04 24             	mov    %eax,(%esp)
 816ebe4:	e8 3d a0 f5 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 816ebe9:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 816ebf0:	ff 
 816ebf1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 816ebf8:	00 
 816ebf9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816ebfc:	89 04 24             	mov    %eax,(%esp)
 816ebff:	e8 4c 4d ff ff       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 816ec04:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816ec07:	89 04 24             	mov    %eax,(%esp)
 816ec0a:	e8 3f a0 f5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 816ec0f:	89 04 24             	mov    %eax,(%esp)
 816ec12:	e8 8b fd fe ff       	call   815e9a2 <_ZN12CStreamGuard11GetInBufferIN6Taiwan21SigLoadRestrictPolicyEEEPT_v>
 816ec17:	89 45 f4             	mov    %eax,-0xc(%ebp)
 816ec1a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 816ec1e:	75 38                	jne    816ec58 <_ZN22ServiceRestrictManager12updatePolicyEN16RestrictCategory4EnumE+0xf6>
 816ec20:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 816ec27:	00 
 816ec28:	c7 44 24 08 02 02 00 	movl   $0x202,0x8(%esp)
 816ec2f:	00 
 816ec30:	c7 44 24 04 c0 2a b8 	movl   $0x8b82ac0,0x4(%esp)
 816ec37:	08 
 816ec38:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 816ec3b:	89 04 24             	mov    %eax,(%esp)
 816ec3e:	e8 d5 0a 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 816ec43:	c7 44 24 04 20 1e b8 	movl   $0x8b81e20,0x4(%esp)
 816ec4a:	08 
 816ec4b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 816ec4e:	89 04 24             	mov    %eax,(%esp)
 816ec51:	e8 32 0b 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816ec56:	eb 65                	jmp    816ecbd <_ZN22ServiceRestrictManager12updatePolicyEN16RestrictCategory4EnumE+0x15b>
 816ec58:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816ec5b:	89 04 24             	mov    %eax,(%esp)
 816ec5e:	e8 45 f1 fe ff       	call   815dda8 <_ZN6Taiwan21SigLoadRestrictPolicy4initEv>
 816ec63:	8d 45 dc             	lea    -0x24(%ebp),%eax
 816ec66:	89 04 24             	mov    %eax,(%esp)
 816ec69:	e8 94 04 00 00       	call   816f102 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN16RestrictCategory4EnumEP22InterfaceServicePolicyEEptEv>
 816ec6e:	8b 40 04             	mov    0x4(%eax),%eax
 816ec71:	8b 10                	mov    (%eax),%edx
 816ec73:	83 c2 1c             	add    $0x1c,%edx
 816ec76:	8b 0a                	mov    (%edx),%ecx
 816ec78:	8b 55 f4             	mov    -0xc(%ebp),%edx
 816ec7b:	89 54 24 04          	mov    %edx,0x4(%esp)
 816ec7f:	89 04 24             	mov    %eax,(%esp)
 816ec82:	ff d1                	call   *%ecx
 816ec84:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 816ec89:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 816ec8c:	89 54 24 08          	mov    %edx,0x8(%esp)
 816ec90:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 816ec97:	00 
 816ec98:	89 04 24             	mov    %eax,(%esp)
 816ec9b:	e8 3e 23 40 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 816eca0:	eb 1b                	jmp    816ecbd <_ZN22ServiceRestrictManager12updatePolicyEN16RestrictCategory4EnumE+0x15b>
 816eca2:	89 d3                	mov    %edx,%ebx
 816eca4:	89 c6                	mov    %eax,%esi
 816eca6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816eca9:	89 04 24             	mov    %eax,(%esp)
 816ecac:	e8 21 dc 4a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 816ecb1:	89 f0                	mov    %esi,%eax
 816ecb3:	89 da                	mov    %ebx,%edx
 816ecb5:	89 04 24             	mov    %eax,(%esp)
 816ecb8:	e8 93 4a 97 00       	call   8ae3750 <_Unwind_Resume>
 816ecbd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816ecc0:	89 04 24             	mov    %eax,(%esp)
 816ecc3:	e8 0a dc 4a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 816ecc8:	8d 65 f8             	lea    -0x8(%ebp),%esp
 816eccb:	83 c4 00             	add    $0x0,%esp
 816ecce:	5b                   	pop    %ebx
 816eccf:	5e                   	pop    %esi
 816ecd0:	5d                   	pop    %ebp
 816ecd1:	c3                   	ret

```

```c
// ServiceRestrictManager::updatePolicy @ 0x816eb62

/* ServiceRestrictManager::updatePolicy(RestrictCategory::Enum) */

void ServiceRestrictManager::updatePolicy(void)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *this;
  int iVar3;
  CStreamGuard local_30 [8];
  _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>> local_28 [4];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_24 [4];
  cMyTrace local_20 [16];
  SigLoadRestrictPolicy *local_10;
  
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::find(local_28);
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
          operator!=(local_28,(_Rb_tree_iterator *)local_24);
  if (cVar1 != '\0') {
    pSVar2 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localtaiwan/System/ServiceRestrictManager.cpp",0x1fd);
    CStreamGuard::CStreamGuard(local_30,pSVar2,true);
                    /* try { // try from 0816ebff to 0816ec9f has its CatchHandler @ 0816eca2 */
    Taiwan::internal_stream(local_30,2,0xffffffff);
    this = (CStreamGuard *)CStreamGuard::operator->(local_30);
    local_10 = CStreamGuard::GetInBuffer<Taiwan::SigLoadRestrictPolicy>(this);
    if (local_10 == (SigLoadRestrictPolicy *)0x0) {
      cMyTrace::cMyTrace(local_20,
                         "void ServiceRestrictManager::updatePolicy(RestrictCategory::Enum)",0x202,5
                        );
      cMyTrace::operator()(local_20,"[Taiwan, Restrict] SigSaveRestrictPolicy is null.");
    }
    else {
      Taiwan::SigLoadRestrictPolicy::init(local_10);
      iVar3 = std::
              _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
              operator->(local_28);
      (**(code **)(**(int **)(iVar3 + 4) + 0x1c))(*(int **)(iVar3 + 4),local_10);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_30);
    }
    CStreamGuard::~CStreamGuard(local_30);
  }
  return;
}

```

---

## ~ServiceRestrictManager

```asm
// === 0816e29e ServiceRestrictManager::~ServiceRestrictManager  [0x0816e29e-0x816e2b1] ===
 816e29e:	55                   	push   %ebp
 816e29f:	89 e5                	mov    %esp,%ebp
 816e2a1:	83 ec 18             	sub    $0x18,%esp
 816e2a4:	8b 45 08             	mov    0x8(%ebp),%eax
 816e2a7:	89 04 24             	mov    %eax,(%esp)
 816e2aa:	e8 7d 0b 00 00       	call   816ee2c <_ZNSt3mapIN16RestrictCategory4EnumEP22InterfaceServicePolicySt4lessIS1_ESaISt4pairIKS1_S3_EEED1Ev>
 816e2af:	c9                   	leave
 816e2b0:	c3                   	ret
 816e2b1:	90                   	nop

```

```c
// ServiceRestrictManager::~ServiceRestrictManager @ 0x816e29e

/* ServiceRestrictManager::~ServiceRestrictManager() */

void __thiscall ServiceRestrictManager::~ServiceRestrictManager(ServiceRestrictManager *this)

{
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::~map((map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
          *)this);
  return;
}

```

