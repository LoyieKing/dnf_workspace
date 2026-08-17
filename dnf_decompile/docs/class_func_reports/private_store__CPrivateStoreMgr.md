# private_store__CPrivateStoreMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## CPrivateStoreMgr

```asm
// === 085ca3d6 private_store::CPrivateStoreMgr::CPrivateStoreMgr  [0x085ca3d6-0x85ca4fd] ===
 85ca3d6:	55                   	push   %ebp
 85ca3d7:	89 e5                	mov    %esp,%ebp
 85ca3d9:	56                   	push   %esi
 85ca3da:	53                   	push   %ebx
 85ca3db:	83 ec 10             	sub    $0x10,%esp
 85ca3de:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca3e1:	89 04 24             	mov    %eax,(%esp)
 85ca3e4:	e8 53 15 00 00       	call   85cb93c <_ZN13private_store8IUserPosC1Ev>
 85ca3e9:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca3ec:	c7 00 40 eb cb 08    	movl   $0x8cbeb40,(%eax)
 85ca3f2:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca3f5:	83 c0 04             	add    $0x4,%eax
 85ca3f8:	89 04 24             	mov    %eax,(%esp)
 85ca3fb:	e8 10 a9 ff ff       	call   85c4d10 <_ZN13private_store13CPrivateStoreC1Ev>
 85ca400:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca403:	83 c0 68             	add    $0x68,%eax
 85ca406:	89 04 24             	mov    %eax,(%esp)
 85ca409:	e8 e0 27 00 00       	call   85ccbee <_ZN10StaticPoolIN13private_store13CPrivateStoreELi300EEC1Ev>
 85ca40e:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca411:	05 98 00 00 00       	add    $0x98,%eax
 85ca416:	89 04 24             	mov    %eax,(%esp)
 85ca419:	e8 f4 29 00 00       	call   85cce12 <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEEC1Ev>
 85ca41e:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca421:	05 b0 00 00 00       	add    $0xb0,%eax
 85ca426:	89 04 24             	mov    %eax,(%esp)
 85ca429:	e8 e4 29 00 00       	call   85cce12 <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEEC1Ev>
 85ca42e:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca431:	05 c8 00 00 00       	add    $0xc8,%eax
 85ca436:	89 04 24             	mov    %eax,(%esp)
 85ca439:	e8 4e 2a 00 00       	call   85cce8c <_ZNSt3mapIN13private_store16PrivateStoreZoneEPSt4listIPNS0_13CPrivateStoreESaIS4_EESt4lessIS1_ESaISt4pairIKS1_S7_EEEC1Ev>
 85ca43e:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca441:	05 98 00 00 00       	add    $0x98,%eax
 85ca446:	89 04 24             	mov    %eax,(%esp)
 85ca449:	e8 1a 30 00 00       	call   85cd468 <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEE5clearEv>
 85ca44e:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca451:	05 b0 00 00 00       	add    $0xb0,%eax
 85ca456:	89 04 24             	mov    %eax,(%esp)
 85ca459:	e8 0a 30 00 00       	call   85cd468 <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEE5clearEv>
 85ca45e:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca461:	05 c8 00 00 00       	add    $0xc8,%eax
 85ca466:	89 04 24             	mov    %eax,(%esp)
 85ca469:	e8 0e 30 00 00       	call   85cd47c <_ZNSt3mapIN13private_store16PrivateStoreZoneEPSt4listIPNS0_13CPrivateStoreESaIS4_EESt4lessIS1_ESaISt4pairIKS1_S7_EEE5clearEv>
 85ca46e:	e9 84 00 00 00       	jmp    85ca4f7 <_ZN13private_store16CPrivateStoreMgrC1Ev+0x121>
 85ca473:	89 d3                	mov    %edx,%ebx
 85ca475:	89 c6                	mov    %eax,%esi
 85ca477:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca47a:	05 c8 00 00 00       	add    $0xc8,%eax
 85ca47f:	89 04 24             	mov    %eax,(%esp)
 85ca482:	e8 d7 14 00 00       	call   85cb95e <_ZNSt3mapIN13private_store16PrivateStoreZoneEPSt4listIPNS0_13CPrivateStoreESaIS4_EESt4lessIS1_ESaISt4pairIKS1_S7_EEED1Ev>
 85ca487:	89 f0                	mov    %esi,%eax
 85ca489:	89 da                	mov    %ebx,%edx
 85ca48b:	eb 00                	jmp    85ca48d <_ZN13private_store16CPrivateStoreMgrC1Ev+0xb7>
 85ca48d:	89 d3                	mov    %edx,%ebx
 85ca48f:	89 c6                	mov    %eax,%esi
 85ca491:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca494:	05 b0 00 00 00       	add    $0xb0,%eax
 85ca499:	89 04 24             	mov    %eax,(%esp)
 85ca49c:	e8 a9 14 00 00       	call   85cb94a <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEED1Ev>
 85ca4a1:	89 f0                	mov    %esi,%eax
 85ca4a3:	89 da                	mov    %ebx,%edx
 85ca4a5:	eb 00                	jmp    85ca4a7 <_ZN13private_store16CPrivateStoreMgrC1Ev+0xd1>
 85ca4a7:	89 d3                	mov    %edx,%ebx
 85ca4a9:	89 c6                	mov    %eax,%esi
 85ca4ab:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca4ae:	05 98 00 00 00       	add    $0x98,%eax
 85ca4b3:	89 04 24             	mov    %eax,(%esp)
 85ca4b6:	e8 8f 14 00 00       	call   85cb94a <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEED1Ev>
 85ca4bb:	89 f0                	mov    %esi,%eax
 85ca4bd:	89 da                	mov    %ebx,%edx
 85ca4bf:	eb 00                	jmp    85ca4c1 <_ZN13private_store16CPrivateStoreMgrC1Ev+0xeb>
 85ca4c1:	89 d3                	mov    %edx,%ebx
 85ca4c3:	89 c6                	mov    %eax,%esi
 85ca4c5:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca4c8:	83 c0 68             	add    $0x68,%eax
 85ca4cb:	89 04 24             	mov    %eax,(%esp)
 85ca4ce:	e8 bd 28 00 00       	call   85ccd90 <_ZN10StaticPoolIN13private_store13CPrivateStoreELi300EED1Ev>
 85ca4d3:	89 f0                	mov    %esi,%eax
 85ca4d5:	89 da                	mov    %ebx,%edx
 85ca4d7:	eb 00                	jmp    85ca4d9 <_ZN13private_store16CPrivateStoreMgrC1Ev+0x103>
 85ca4d9:	89 d3                	mov    %edx,%ebx
 85ca4db:	89 c6                	mov    %eax,%esi
 85ca4dd:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca4e0:	83 c0 04             	add    $0x4,%eax
 85ca4e3:	89 04 24             	mov    %eax,(%esp)
 85ca4e6:	e8 e1 a9 ff ff       	call   85c4ecc <_ZN13private_store13CPrivateStoreD1Ev>
 85ca4eb:	89 f0                	mov    %esi,%eax
 85ca4ed:	89 da                	mov    %ebx,%edx
 85ca4ef:	89 04 24             	mov    %eax,(%esp)
 85ca4f2:	e8 59 92 51 00       	call   8ae3750 <_Unwind_Resume>
 85ca4f7:	83 c4 10             	add    $0x10,%esp
 85ca4fa:	5b                   	pop    %ebx
 85ca4fb:	5e                   	pop    %esi
 85ca4fc:	5d                   	pop    %ebp
 85ca4fd:	c3                   	ret

```

```c
// private_store::CPrivateStoreMgr::CPrivateStoreMgr @ 0x85ca3d6

/* private_store::CPrivateStoreMgr::CPrivateStoreMgr() */

void __thiscall private_store::CPrivateStoreMgr::CPrivateStoreMgr(CPrivateStoreMgr *this)

{
  IUserPos::IUserPos((IUserPos *)this);
  *(undefined ***)this = &PTR_Exit_08cbeb40;
  CPrivateStore::CPrivateStore((CPrivateStore *)(this + 4));
                    /* try { // try from 085ca409 to 085ca40d has its CatchHandler @ 085ca4d9 */
  StaticPool<private_store::CPrivateStore,300>::StaticPool
            ((StaticPool<private_store::CPrivateStore,300> *)(this + 0x68));
                    /* try { // try from 085ca419 to 085ca41d has its CatchHandler @ 085ca4c1 */
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::map((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
         *)(this + 0x98));
                    /* try { // try from 085ca429 to 085ca42d has its CatchHandler @ 085ca4a7 */
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::map((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
         *)(this + 0xb0));
                    /* try { // try from 085ca439 to 085ca43d has its CatchHandler @ 085ca48d */
  std::
  map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
  ::map((map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
         *)(this + 200));
                    /* try { // try from 085ca449 to 085ca46d has its CatchHandler @ 085ca473 */
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::clear((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
           *)(this + 0x98));
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::clear((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
           *)(this + 0xb0));
  std::
  map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
  ::clear((map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
           *)(this + 200));
  return;
}

```

---

## Enter

```asm
// === 085caa8a private_store::CPrivateStoreMgr::Enter  [0x085caa8a-0x85caaa9] ===
 85caa8a:	55                   	push   %ebp
 85caa8b:	89 e5                	mov    %esp,%ebp
 85caa8d:	83 ec 18             	sub    $0x18,%esp
 85caa90:	8b 45 0c             	mov    0xc(%ebp),%eax
 85caa93:	89 44 24 04          	mov    %eax,0x4(%esp)
 85caa97:	8b 45 08             	mov    0x8(%ebp),%eax
 85caa9a:	89 04 24             	mov    %eax,(%esp)
 85caa9d:	e8 82 00 00 00       	call   85cab24 <_ZN13private_store16CPrivateStoreMgr16LoadPrivateStoreEP5CUser>
 85caaa2:	b8 01 00 00 00       	mov    $0x1,%eax
 85caaa7:	c9                   	leave
 85caaa8:	c3                   	ret
 85caaa9:	90                   	nop

```

```c
// private_store::CPrivateStoreMgr::Enter @ 0x85caa8a

/* private_store::CPrivateStoreMgr::Enter(CUser*) */

undefined4 __thiscall private_store::CPrivateStoreMgr::Enter(CPrivateStoreMgr *this,CUser *param_1)

{
  LoadPrivateStore(this,param_1);
  return 1;
}

```

---

## Exit

```asm
// === 085ca994 private_store::CPrivateStoreMgr::Exit  [0x085ca994-0x85caa89] ===
 85ca994:	55                   	push   %ebp
 85ca995:	89 e5                	mov    %esp,%ebp
 85ca997:	83 ec 28             	sub    $0x28,%esp
 85ca99a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85ca99e:	75 0a                	jne    85ca9aa <_ZN13private_store16CPrivateStoreMgr4ExitEP5CUser+0x16>
 85ca9a0:	b8 00 00 00 00       	mov    $0x0,%eax
 85ca9a5:	e9 dd 00 00 00       	jmp    85caa87 <_ZN13private_store16CPrivateStoreMgr4ExitEP5CUser+0xf3>
 85ca9aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ca9ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca9b1:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca9b4:	89 04 24             	mov    %eax,(%esp)
 85ca9b7:	e8 1e f9 ff ff       	call   85ca2da <_ZN13private_store16CPrivateStoreMgr14FindStoreBuyerEP5CUser>
 85ca9bc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ca9bf:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85ca9c3:	0f 95 c0             	setne  %al
 85ca9c6:	84 c0                	test   %al,%al
 85ca9c8:	74 4c                	je     85caa16 <_ZN13private_store16CPrivateStoreMgr4ExitEP5CUser+0x82>
 85ca9ca:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85ca9d1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85ca9d8:	00 
 85ca9d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ca9dc:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ca9e0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ca9e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca9e7:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca9ea:	89 04 24             	mov    %eax,(%esp)
 85ca9ed:	e8 c6 fd ff ff       	call   85ca7b8 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_>
 85ca9f2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85ca9f5:	8b 00                	mov    (%eax),%eax
 85ca9f7:	83 c0 0c             	add    $0xc,%eax
 85ca9fa:	8b 10                	mov    (%eax),%edx
 85ca9fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85ca9ff:	89 04 24             	mov    %eax,(%esp)
 85caa02:	ff d2                	call   *%edx
 85caa04:	8b 45 0c             	mov    0xc(%ebp),%eax
 85caa07:	89 44 24 04          	mov    %eax,0x4(%esp)
 85caa0b:	8b 45 08             	mov    0x8(%ebp),%eax
 85caa0e:	89 04 24             	mov    %eax,(%esp)
 85caa11:	e8 fe fe ff ff       	call   85ca914 <_ZN13private_store16CPrivateStoreMgr14FreeStoreBuyerEP5CUser>
 85caa16:	8b 45 0c             	mov    0xc(%ebp),%eax
 85caa19:	89 44 24 04          	mov    %eax,0x4(%esp)
 85caa1d:	8b 45 08             	mov    0x8(%ebp),%eax
 85caa20:	89 04 24             	mov    %eax,(%esp)
 85caa23:	e8 30 f9 ff ff       	call   85ca358 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser>
 85caa28:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85caa2b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85caa2f:	0f 95 c0             	setne  %al
 85caa32:	84 c0                	test   %al,%al
 85caa34:	74 4c                	je     85caa82 <_ZN13private_store16CPrivateStoreMgr4ExitEP5CUser+0xee>
 85caa36:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85caa3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85caa40:	89 44 24 08          	mov    %eax,0x8(%esp)
 85caa44:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85caa47:	89 44 24 04          	mov    %eax,0x4(%esp)
 85caa4b:	8b 45 08             	mov    0x8(%ebp),%eax
 85caa4e:	89 04 24             	mov    %eax,(%esp)
 85caa51:	e8 42 fc ff ff       	call   85ca698 <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser>
 85caa56:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85caa59:	8b 00                	mov    (%eax),%eax
 85caa5b:	83 c0 04             	add    $0x4,%eax
 85caa5e:	8b 10                	mov    (%eax),%edx
 85caa60:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85caa63:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85caa6a:	00 
 85caa6b:	89 04 24             	mov    %eax,(%esp)
 85caa6e:	ff d2                	call   *%edx
 85caa70:	8b 45 0c             	mov    0xc(%ebp),%eax
 85caa73:	89 44 24 04          	mov    %eax,0x4(%esp)
 85caa77:	8b 45 08             	mov    0x8(%ebp),%eax
 85caa7a:	89 04 24             	mov    %eax,(%esp)
 85caa7d:	e8 f2 fd ff ff       	call   85ca874 <_ZN13private_store16CPrivateStoreMgr15FreeStoreSellerEP5CUser>
 85caa82:	b8 01 00 00 00       	mov    $0x1,%eax
 85caa87:	c9                   	leave
 85caa88:	c3                   	ret
 85caa89:	90                   	nop

```

```c
// private_store::CPrivateStoreMgr::Exit @ 0x85ca994

/* private_store::CPrivateStoreMgr::Exit(CUser*) */

undefined4 __thiscall private_store::CPrivateStoreMgr::Exit(CPrivateStoreMgr *this,CUser *param_1)

{
  undefined4 uVar1;
  ISeller *local_18;
  IBuyer *local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0;
  }
  else {
    local_10 = FindStoreBuyer(this,param_1);
    if (local_10 != 0) {
      local_14 = (IBuyer *)0x0;
      GetStoreBuyer(this,&local_14,param_1,(CUser *)0x0);
      (**(code **)(*(int *)local_14 + 0xc))(local_14);
      FreeStoreBuyer((CUser *)this);
    }
    local_10 = FindStoreSeller(this,param_1);
    if (local_10 != 0) {
      local_18 = (ISeller *)0x0;
      GetStoreSeller(this,&local_18,param_1);
      (**(code **)(*(int *)local_18 + 4))(local_18,1);
      FreeStoreSeller((CUser *)this);
    }
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## FindStoreBuyer

```asm
// === 085ca2da private_store::CPrivateStoreMgr::FindStoreBuyer  [0x085ca2da-0x85ca357] ===
 85ca2da:	55                   	push   %ebp
 85ca2db:	89 e5                	mov    %esp,%ebp
 85ca2dd:	83 ec 28             	sub    $0x28,%esp
 85ca2e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ca2e3:	85 c0                	test   %eax,%eax
 85ca2e5:	75 07                	jne    85ca2ee <_ZN13private_store16CPrivateStoreMgr14FindStoreBuyerEP5CUser+0x14>
 85ca2e7:	b8 00 00 00 00       	mov    $0x0,%eax
 85ca2ec:	eb 68                	jmp    85ca356 <_ZN13private_store16CPrivateStoreMgr14FindStoreBuyerEP5CUser+0x7c>
 85ca2ee:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca2f1:	8d 88 b0 00 00 00    	lea    0xb0(%eax),%ecx
 85ca2f7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ca2fa:	8d 55 0c             	lea    0xc(%ebp),%edx
 85ca2fd:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ca301:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85ca305:	89 04 24             	mov    %eax,(%esp)
 85ca308:	e8 e7 30 00 00       	call   85cd3f4 <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEE4findERS8_>
 85ca30d:	83 ec 04             	sub    $0x4,%esp
 85ca310:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca313:	8d 90 b0 00 00 00    	lea    0xb0(%eax),%edx
 85ca319:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85ca31c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ca320:	89 04 24             	mov    %eax,(%esp)
 85ca323:	e8 f8 30 00 00       	call   85cd420 <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEE3endEv>
 85ca328:	83 ec 04             	sub    $0x4,%esp
 85ca32b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85ca32e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca332:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ca335:	89 04 24             	mov    %eax,(%esp)
 85ca338:	e8 09 31 00 00       	call   85cd446 <_ZNKSt17_Rb_tree_iteratorISt4pairIKP5CUserPN13private_store13CPrivateStoreEEEneERKS8_>
 85ca33d:	84 c0                	test   %al,%al
 85ca33f:	74 10                	je     85ca351 <_ZN13private_store16CPrivateStoreMgr14FindStoreBuyerEP5CUser+0x77>
 85ca341:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ca344:	89 04 24             	mov    %eax,(%esp)
 85ca347:	e8 0e 31 00 00       	call   85cd45a <_ZNKSt17_Rb_tree_iteratorISt4pairIKP5CUserPN13private_store13CPrivateStoreEEEptEv>
 85ca34c:	8b 40 04             	mov    0x4(%eax),%eax
 85ca34f:	eb 05                	jmp    85ca356 <_ZN13private_store16CPrivateStoreMgr14FindStoreBuyerEP5CUser+0x7c>
 85ca351:	b8 00 00 00 00       	mov    $0x0,%eax
 85ca356:	c9                   	leave
 85ca357:	c3                   	ret

```

```c
// private_store::CPrivateStoreMgr::FindStoreBuyer @ 0x85ca2da

/* private_store::CPrivateStoreMgr::FindStoreBuyer(CUser*) */

undefined4 __thiscall
private_store::CPrivateStoreMgr::FindStoreBuyer(CPrivateStoreMgr *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>> local_14 [4];
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  local_10 [12];
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    std::
    map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
    ::find((CUser **)local_14);
    std::
    map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>>::operator!=
                      (local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      iVar3 = std::_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>>::
              operator->(local_14);
      uVar2 = *(undefined4 *)(iVar3 + 4);
    }
  }
  return uVar2;
}

```

---

## FindStoreSeller

```asm
// === 085ca358 private_store::CPrivateStoreMgr::FindStoreSeller  [0x085ca358-0x85ca3d5] ===
 85ca358:	55                   	push   %ebp
 85ca359:	89 e5                	mov    %esp,%ebp
 85ca35b:	83 ec 28             	sub    $0x28,%esp
 85ca35e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ca361:	85 c0                	test   %eax,%eax
 85ca363:	75 07                	jne    85ca36c <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser+0x14>
 85ca365:	b8 00 00 00 00       	mov    $0x0,%eax
 85ca36a:	eb 68                	jmp    85ca3d4 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser+0x7c>
 85ca36c:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca36f:	8d 88 98 00 00 00    	lea    0x98(%eax),%ecx
 85ca375:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ca378:	8d 55 0c             	lea    0xc(%ebp),%edx
 85ca37b:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ca37f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85ca383:	89 04 24             	mov    %eax,(%esp)
 85ca386:	e8 69 30 00 00       	call   85cd3f4 <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEE4findERS8_>
 85ca38b:	83 ec 04             	sub    $0x4,%esp
 85ca38e:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca391:	8d 90 98 00 00 00    	lea    0x98(%eax),%edx
 85ca397:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85ca39a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ca39e:	89 04 24             	mov    %eax,(%esp)
 85ca3a1:	e8 7a 30 00 00       	call   85cd420 <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEE3endEv>
 85ca3a6:	83 ec 04             	sub    $0x4,%esp
 85ca3a9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85ca3ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca3b0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ca3b3:	89 04 24             	mov    %eax,(%esp)
 85ca3b6:	e8 8b 30 00 00       	call   85cd446 <_ZNKSt17_Rb_tree_iteratorISt4pairIKP5CUserPN13private_store13CPrivateStoreEEEneERKS8_>
 85ca3bb:	84 c0                	test   %al,%al
 85ca3bd:	74 10                	je     85ca3cf <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser+0x77>
 85ca3bf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ca3c2:	89 04 24             	mov    %eax,(%esp)
 85ca3c5:	e8 90 30 00 00       	call   85cd45a <_ZNKSt17_Rb_tree_iteratorISt4pairIKP5CUserPN13private_store13CPrivateStoreEEEptEv>
 85ca3ca:	8b 40 04             	mov    0x4(%eax),%eax
 85ca3cd:	eb 05                	jmp    85ca3d4 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser+0x7c>
 85ca3cf:	b8 00 00 00 00       	mov    $0x0,%eax
 85ca3d4:	c9                   	leave
 85ca3d5:	c3                   	ret

```

```c
// private_store::CPrivateStoreMgr::FindStoreSeller @ 0x85ca358

/* private_store::CPrivateStoreMgr::FindStoreSeller(CUser*) */

undefined4 __thiscall
private_store::CPrivateStoreMgr::FindStoreSeller(CPrivateStoreMgr *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>> local_14 [4];
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  local_10 [12];
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    std::
    map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
    ::find((CUser **)local_14);
    std::
    map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>>::operator!=
                      (local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      iVar3 = std::_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>>::
              operator->(local_14);
      uVar2 = *(undefined4 *)(iVar3 + 4);
    }
  }
  return uVar2;
}

```

---

## FreeStoreBuyer

```asm
// === 085ca914 private_store::CPrivateStoreMgr::FreeStoreBuyer  [0x085ca914-0x85ca993] ===
 85ca914:	55                   	push   %ebp
 85ca915:	89 e5                	mov    %esp,%ebp
 85ca917:	83 ec 28             	sub    $0x28,%esp
 85ca91a:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca91d:	8d 88 b0 00 00 00    	lea    0xb0(%eax),%ecx
 85ca923:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ca926:	8d 55 0c             	lea    0xc(%ebp),%edx
 85ca929:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ca92d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85ca931:	89 04 24             	mov    %eax,(%esp)
 85ca934:	e8 bb 2a 00 00       	call   85cd3f4 <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEE4findERS8_>
 85ca939:	83 ec 04             	sub    $0x4,%esp
 85ca93c:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca93f:	8d 90 b0 00 00 00    	lea    0xb0(%eax),%edx
 85ca945:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85ca948:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ca94c:	89 04 24             	mov    %eax,(%esp)
 85ca94f:	e8 cc 2a 00 00       	call   85cd420 <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEE3endEv>
 85ca954:	83 ec 04             	sub    $0x4,%esp
 85ca957:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85ca95a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca95e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ca961:	89 04 24             	mov    %eax,(%esp)
 85ca964:	e8 dd 2a 00 00       	call   85cd446 <_ZNKSt17_Rb_tree_iteratorISt4pairIKP5CUserPN13private_store13CPrivateStoreEEEneERKS8_>
 85ca969:	84 c0                	test   %al,%al
 85ca96b:	74 1f                	je     85ca98c <_ZN13private_store16CPrivateStoreMgr14FreeStoreBuyerEP5CUser+0x78>
 85ca96d:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca970:	8d 90 b0 00 00 00    	lea    0xb0(%eax),%edx
 85ca976:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85ca979:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca97d:	89 14 24             	mov    %edx,(%esp)
 85ca980:	e8 65 2f 00 00       	call   85cd8ea <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEE5eraseESt17_Rb_tree_iteratorIS9_E>
 85ca985:	b8 01 00 00 00       	mov    $0x1,%eax
 85ca98a:	eb 05                	jmp    85ca991 <_ZN13private_store16CPrivateStoreMgr14FreeStoreBuyerEP5CUser+0x7d>
 85ca98c:	b8 00 00 00 00       	mov    $0x0,%eax
 85ca991:	c9                   	leave
 85ca992:	c3                   	ret
 85ca993:	90                   	nop

```

```c
// private_store::CPrivateStoreMgr::FreeStoreBuyer @ 0x85ca914

/* private_store::CPrivateStoreMgr::FreeStoreBuyer(CUser*) */

bool private_store::CPrivateStoreMgr::FreeStoreBuyer(CUser *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  CUser *local_14;
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  local_10 [12];
  
  puVar2 = &stack0x00000008;
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::find(&local_14);
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>> *)
                     &local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    std::
    map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
    ::erase((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
             *)(param_1 + 0xb0),local_14,puVar2);
  }
  return cVar1 != '\0';
}

```

---

## FreeStoreSeller

```asm
// === 085ca874 private_store::CPrivateStoreMgr::FreeStoreSeller  [0x085ca874-0x85ca913] ===
 85ca874:	55                   	push   %ebp
 85ca875:	89 e5                	mov    %esp,%ebp
 85ca877:	83 ec 28             	sub    $0x28,%esp
 85ca87a:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca87d:	8d 88 98 00 00 00    	lea    0x98(%eax),%ecx
 85ca883:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ca886:	8d 55 0c             	lea    0xc(%ebp),%edx
 85ca889:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ca88d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85ca891:	89 04 24             	mov    %eax,(%esp)
 85ca894:	e8 5b 2b 00 00       	call   85cd3f4 <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEE4findERS8_>
 85ca899:	83 ec 04             	sub    $0x4,%esp
 85ca89c:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca89f:	8d 90 98 00 00 00    	lea    0x98(%eax),%edx
 85ca8a5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85ca8a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ca8ac:	89 04 24             	mov    %eax,(%esp)
 85ca8af:	e8 6c 2b 00 00       	call   85cd420 <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEE3endEv>
 85ca8b4:	83 ec 04             	sub    $0x4,%esp
 85ca8b7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85ca8ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca8be:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ca8c1:	89 04 24             	mov    %eax,(%esp)
 85ca8c4:	e8 7d 2b 00 00       	call   85cd446 <_ZNKSt17_Rb_tree_iteratorISt4pairIKP5CUserPN13private_store13CPrivateStoreEEEneERKS8_>
 85ca8c9:	84 c0                	test   %al,%al
 85ca8cb:	74 3f                	je     85ca90c <_ZN13private_store16CPrivateStoreMgr15FreeStoreSellerEP5CUser+0x98>
 85ca8cd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ca8d0:	89 04 24             	mov    %eax,(%esp)
 85ca8d3:	e8 82 2b 00 00       	call   85cd45a <_ZNKSt17_Rb_tree_iteratorISt4pairIKP5CUserPN13private_store13CPrivateStoreEEEptEv>
 85ca8d8:	8b 40 04             	mov    0x4(%eax),%eax
 85ca8db:	8b 55 08             	mov    0x8(%ebp),%edx
 85ca8de:	83 c2 68             	add    $0x68,%edx
 85ca8e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca8e5:	89 14 24             	mov    %edx,(%esp)
 85ca8e8:	e8 b7 2e 00 00       	call   85cd7a4 <_ZN10StaticPoolIN13private_store13CPrivateStoreELi300EE4FreeEPS1_>
 85ca8ed:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca8f0:	8d 90 98 00 00 00    	lea    0x98(%eax),%edx
 85ca8f6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85ca8f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca8fd:	89 14 24             	mov    %edx,(%esp)
 85ca900:	e8 e5 2f 00 00       	call   85cd8ea <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEE5eraseESt17_Rb_tree_iteratorIS9_E>
 85ca905:	b8 01 00 00 00       	mov    $0x1,%eax
 85ca90a:	eb 05                	jmp    85ca911 <_ZN13private_store16CPrivateStoreMgr15FreeStoreSellerEP5CUser+0x9d>
 85ca90c:	b8 00 00 00 00       	mov    $0x0,%eax
 85ca911:	c9                   	leave
 85ca912:	c3                   	ret
 85ca913:	90                   	nop

```

```c
// private_store::CPrivateStoreMgr::FreeStoreSeller @ 0x85ca874

/* private_store::CPrivateStoreMgr::FreeStoreSeller(CUser*) */

bool private_store::CPrivateStoreMgr::FreeStoreSeller(CUser *param_1)

{
  char cVar1;
  int iVar2;
  CUser *local_14;
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  local_10 [12];
  
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::find(&local_14);
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>> *)
                     &local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>>::operator->
                      ((_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>> *)
                       &local_14);
    StaticPool<private_store::CPrivateStore,300>::Free
              ((StaticPool<private_store::CPrivateStore,300> *)(param_1 + 0x68),
               *(CPrivateStore **)(iVar2 + 4));
    std::
    map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
    ::erase((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
             *)(param_1 + 0x98),local_14);
  }
  return cVar1 != '\0';
}

```

---

## GetStoreBuyer

```asm
// === 085ca760 private_store::CPrivateStoreMgr::GetStoreBuyer  [0x085ca760-0x85ca7b7] ===
 85ca760:	55                   	push   %ebp
 85ca761:	89 e5                	mov    %esp,%ebp
 85ca763:	53                   	push   %ebx
 85ca764:	83 ec 34             	sub    $0x34,%esp
 85ca767:	8b 45 14             	mov    0x14(%ebp),%eax
 85ca76a:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 85ca76e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85ca775:	0f b7 5d e4          	movzwl -0x1c(%ebp),%ebx
 85ca779:	e8 29 fc b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85ca77e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85ca782:	89 04 24             	mov    %eax,(%esp)
 85ca785:	e8 12 a4 0f 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 85ca78a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ca78d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85ca791:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ca794:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85ca798:	8b 45 10             	mov    0x10(%ebp),%eax
 85ca79b:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ca79f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ca7a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca7a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca7a9:	89 04 24             	mov    %eax,(%esp)
 85ca7ac:	e8 07 00 00 00       	call   85ca7b8 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_>
 85ca7b1:	83 c4 34             	add    $0x34,%esp
 85ca7b4:	5b                   	pop    %ebx
 85ca7b5:	5d                   	pop    %ebp
 85ca7b6:	c3                   	ret
 85ca7b7:	90                   	nop

```

```c
// private_store::CPrivateStoreMgr::GetStoreBuyer @ 0x85ca760

/* private_store::CPrivateStoreMgr::GetStoreBuyer(private_store::IBuyer**, CUser*, unsigned short)
    */

void __thiscall
private_store::CPrivateStoreMgr::GetStoreBuyer
          (CPrivateStoreMgr *this,IBuyer **param_1,CUser *param_2,ushort param_3)

{
  GameWorld *this_00;
  CUser *pCVar1;
  
  this_00 = (GameWorld *)G_GameWorld();
  pCVar1 = (CUser *)GameWorld::find_from_world(this_00,param_3);
  GetStoreBuyer(this,param_1,param_2,pCVar1);
  return;
}

```

---

## GetStoreBuyer_085ca7b8

```asm
// === 085ca7b8 private_store::CPrivateStoreMgr::GetStoreBuyer  [0x085ca7b8-0x85ca873] ===
 85ca7b8:	55                   	push   %ebp
 85ca7b9:	89 e5                	mov    %esp,%ebp
 85ca7bb:	83 ec 28             	sub    $0x28,%esp
 85ca7be:	8b 45 10             	mov    0x10(%ebp),%eax
 85ca7c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca7c5:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca7c8:	89 04 24             	mov    %eax,(%esp)
 85ca7cb:	e8 0a fb ff ff       	call   85ca2da <_ZN13private_store16CPrivateStoreMgr14FindStoreBuyerEP5CUser>
 85ca7d0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ca7d3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85ca7d7:	0f 94 c0             	sete   %al
 85ca7da:	84 c0                	test   %al,%al
 85ca7dc:	74 64                	je     85ca842 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_+0x8a>
 85ca7de:	8b 45 14             	mov    0x14(%ebp),%eax
 85ca7e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca7e5:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca7e8:	89 04 24             	mov    %eax,(%esp)
 85ca7eb:	e8 68 fb ff ff       	call   85ca358 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser>
 85ca7f0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ca7f3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85ca7f7:	0f 94 c0             	sete   %al
 85ca7fa:	84 c0                	test   %al,%al
 85ca7fc:	74 27                	je     85ca825 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_+0x6d>
 85ca7fe:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca801:	8d 50 08             	lea    0x8(%eax),%edx
 85ca804:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ca807:	89 10                	mov    %edx,(%eax)
 85ca809:	8b 45 10             	mov    0x10(%ebp),%eax
 85ca80c:	8b 55 08             	mov    0x8(%ebp),%edx
 85ca80f:	83 c2 04             	add    $0x4,%edx
 85ca812:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca816:	89 14 24             	mov    %edx,(%esp)
 85ca819:	e8 9a 10 00 00       	call   85cb8b8 <_ZN13private_store13CPrivateStore8SetBuyerEP5CUser>
 85ca81e:	b8 00 00 00 00       	mov    $0x0,%eax
 85ca823:	eb 4c                	jmp    85ca871 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_+0xb9>
 85ca825:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca828:	8d 90 b0 00 00 00    	lea    0xb0(%eax),%edx
 85ca82e:	8d 45 10             	lea    0x10(%ebp),%eax
 85ca831:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca835:	89 14 24             	mov    %edx,(%esp)
 85ca838:	e8 71 2e 00 00       	call   85cd6ae <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEEixERS8_>
 85ca83d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85ca840:	89 10                	mov    %edx,(%eax)
 85ca842:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85ca846:	74 08                	je     85ca850 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_+0x98>
 85ca848:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ca84b:	83 c0 04             	add    $0x4,%eax
 85ca84e:	eb 05                	jmp    85ca855 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_+0x9d>
 85ca850:	b8 00 00 00 00       	mov    $0x0,%eax
 85ca855:	8b 55 0c             	mov    0xc(%ebp),%edx
 85ca858:	89 02                	mov    %eax,(%edx)
 85ca85a:	8b 45 10             	mov    0x10(%ebp),%eax
 85ca85d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca861:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ca864:	89 04 24             	mov    %eax,(%esp)
 85ca867:	e8 4c 10 00 00       	call   85cb8b8 <_ZN13private_store13CPrivateStore8SetBuyerEP5CUser>
 85ca86c:	b8 01 00 00 00       	mov    $0x1,%eax
 85ca871:	c9                   	leave
 85ca872:	c3                   	ret
 85ca873:	90                   	nop

```

```c
// private_store::CPrivateStoreMgr::GetStoreBuyer @ 0x85ca7b8

/* private_store::CPrivateStoreMgr::GetStoreBuyer(private_store::IBuyer**, CUser*, CUser*) */

undefined4 __thiscall
private_store::CPrivateStoreMgr::GetStoreBuyer
          (CPrivateStoreMgr *this,IBuyer **param_1,CUser *param_2,CUser *param_3)

{
  int *piVar1;
  IBuyer *pIVar2;
  CPrivateStore *local_10;
  
  local_10 = (CPrivateStore *)FindStoreBuyer(this,param_2);
  if (local_10 == (CPrivateStore *)0x0) {
    local_10 = (CPrivateStore *)FindStoreSeller(this,param_3);
    if (local_10 == (CPrivateStore *)0x0) {
      *param_1 = (IBuyer *)(this + 8);
      CPrivateStore::SetBuyer((CPrivateStore *)(this + 4),param_2);
      return 0;
    }
    piVar1 = (int *)std::
                    map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
                    ::operator[]((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
                                  *)(this + 0xb0),&param_2);
    *piVar1 = (int)local_10;
  }
  if (local_10 == (CPrivateStore *)0x0) {
    pIVar2 = (IBuyer *)0x0;
  }
  else {
    pIVar2 = (IBuyer *)(local_10 + 4);
  }
  *param_1 = pIVar2;
  CPrivateStore::SetBuyer(local_10,param_2);
  return 1;
}

```

---

## GetStoreSeller

```asm
// === 085ca698 private_store::CPrivateStoreMgr::GetStoreSeller  [0x085ca698-0x85ca75f] ===
 85ca698:	55                   	push   %ebp
 85ca699:	89 e5                	mov    %esp,%ebp
 85ca69b:	83 ec 28             	sub    $0x28,%esp
 85ca69e:	8b 45 10             	mov    0x10(%ebp),%eax
 85ca6a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca6a5:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca6a8:	89 04 24             	mov    %eax,(%esp)
 85ca6ab:	e8 a8 fc ff ff       	call   85ca358 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser>
 85ca6b0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ca6b3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85ca6b7:	0f 94 c0             	sete   %al
 85ca6ba:	84 c0                	test   %al,%al
 85ca6bc:	0f 84 8f 00 00 00    	je     85ca751 <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser+0xb9>
 85ca6c2:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca6c5:	83 c0 68             	add    $0x68,%eax
 85ca6c8:	89 04 24             	mov    %eax,(%esp)
 85ca6cb:	e8 c2 2e 00 00       	call   85cd592 <_ZN10StaticPoolIN13private_store13CPrivateStoreELi300EE7AcquireEv>
 85ca6d0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ca6d3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85ca6d7:	0f 94 c0             	sete   %al
 85ca6da:	84 c0                	test   %al,%al
 85ca6dc:	74 27                	je     85ca705 <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser+0x6d>
 85ca6de:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca6e1:	8d 50 04             	lea    0x4(%eax),%edx
 85ca6e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ca6e7:	89 10                	mov    %edx,(%eax)
 85ca6e9:	8b 45 10             	mov    0x10(%ebp),%eax
 85ca6ec:	8b 55 08             	mov    0x8(%ebp),%edx
 85ca6ef:	83 c2 04             	add    $0x4,%edx
 85ca6f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca6f6:	89 14 24             	mov    %edx,(%esp)
 85ca6f9:	e8 ac 11 00 00       	call   85cb8aa <_ZN13private_store13CPrivateStore9SetSellerEP5CUser>
 85ca6fe:	b8 00 00 00 00       	mov    $0x0,%eax
 85ca703:	eb 59                	jmp    85ca75e <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser+0xc6>
 85ca705:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ca708:	89 04 24             	mov    %eax,(%esp)
 85ca70b:	e8 60 a7 ff ff       	call   85c4e70 <_ZN13private_store13CPrivateStore5ClearEv>
 85ca710:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca713:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca717:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ca71a:	89 04 24             	mov    %eax,(%esp)
 85ca71d:	e8 a4 11 00 00       	call   85cb8c6 <_ZN13private_store13CPrivateStore9SetParentEPNS_16CPrivateStoreMgrE>
 85ca722:	8b 45 10             	mov    0x10(%ebp),%eax
 85ca725:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca729:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ca72c:	89 04 24             	mov    %eax,(%esp)
 85ca72f:	e8 76 11 00 00       	call   85cb8aa <_ZN13private_store13CPrivateStore9SetSellerEP5CUser>
 85ca734:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca737:	8d 90 98 00 00 00    	lea    0x98(%eax),%edx
 85ca73d:	8d 45 10             	lea    0x10(%ebp),%eax
 85ca740:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca744:	89 14 24             	mov    %edx,(%esp)
 85ca747:	e8 62 2f 00 00       	call   85cd6ae <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEEixERS8_>
 85ca74c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85ca74f:	89 10                	mov    %edx,(%eax)
 85ca751:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85ca754:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ca757:	89 10                	mov    %edx,(%eax)
 85ca759:	b8 01 00 00 00       	mov    $0x1,%eax
 85ca75e:	c9                   	leave
 85ca75f:	c3                   	ret

```

```c
// private_store::CPrivateStoreMgr::GetStoreSeller @ 0x85ca698

/* private_store::CPrivateStoreMgr::GetStoreSeller(private_store::ISeller**, CUser*) */

undefined4 __thiscall
private_store::CPrivateStoreMgr::GetStoreSeller
          (CPrivateStoreMgr *this,ISeller **param_1,CUser *param_2)

{
  undefined4 *puVar1;
  CPrivateStore *local_10;
  
  local_10 = (CPrivateStore *)FindStoreSeller(this,param_2);
  if (local_10 == (CPrivateStore *)0x0) {
    local_10 = (CPrivateStore *)
               StaticPool<private_store::CPrivateStore,300>::Acquire
                         ((StaticPool<private_store::CPrivateStore,300> *)(this + 0x68));
    if (local_10 == (CPrivateStore *)0x0) {
      *param_1 = (ISeller *)(this + 4);
      CPrivateStore::SetSeller((CPrivateStore *)(this + 4),param_2);
      return 0;
    }
    CPrivateStore::Clear(local_10);
    CPrivateStore::SetParent(local_10,this);
    CPrivateStore::SetSeller(local_10,param_2);
    puVar1 = (undefined4 *)
             std::
             map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
             ::operator[]((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
                           *)(this + 0x98),&param_2);
    *puVar1 = local_10;
  }
  *param_1 = (ISeller *)local_10;
  return 1;
}

```

---

## HandleError

```asm
// === 085caaaa private_store::CPrivateStoreMgr::HandleError  [0x085caaaa-0x85cab23] ===
 85caaaa:	55                   	push   %ebp
 85caaab:	89 e5                	mov    %esp,%ebp
 85caaad:	56                   	push   %esi
 85caaae:	53                   	push   %ebx
 85caaaf:	83 ec 20             	sub    $0x20,%esp
 85caab2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85caab5:	89 04 24             	mov    %eax,(%esp)
 85caab8:	e8 b5 0e 00 00       	call   85cb972 <_ZN13private_store17CPacketBufPrivateC1Ev>
 85caabd:	8b 45 18             	mov    0x18(%ebp),%eax
 85caac0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85caac4:	8b 45 14             	mov    0x14(%ebp),%eax
 85caac7:	89 44 24 08          	mov    %eax,0x8(%esp)
 85caacb:	8b 45 10             	mov    0x10(%ebp),%eax
 85caace:	89 44 24 04          	mov    %eax,0x4(%esp)
 85caad2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85caad5:	89 04 24             	mov    %eax,(%esp)
 85caad8:	e8 53 1d 00 00       	call   85cc830 <_ZN13private_store17CPacketBufPrivate21MakeErrorReturnPacketEiii>
 85caadd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85caae0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85caae4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85caae7:	89 04 24             	mov    %eax,(%esp)
 85caaea:	e8 cb da 07 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85caaef:	bb 00 00 00 00       	mov    $0x0,%ebx
 85caaf4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85caaf7:	89 04 24             	mov    %eax,(%esp)
 85caafa:	e8 ad 1f 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85caaff:	89 d8                	mov    %ebx,%eax
 85cab01:	83 c4 20             	add    $0x20,%esp
 85cab04:	5b                   	pop    %ebx
 85cab05:	5e                   	pop    %esi
 85cab06:	5d                   	pop    %ebp
 85cab07:	c3                   	ret
 85cab08:	89 d3                	mov    %edx,%ebx
 85cab0a:	89 c6                	mov    %eax,%esi
 85cab0c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85cab0f:	89 04 24             	mov    %eax,(%esp)
 85cab12:	e8 95 1f 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85cab17:	89 f0                	mov    %esi,%eax
 85cab19:	89 da                	mov    %ebx,%edx
 85cab1b:	89 04 24             	mov    %eax,(%esp)
 85cab1e:	e8 2d 8c 51 00       	call   8ae3750 <_Unwind_Resume>
 85cab23:	90                   	nop

```

```c
// private_store::CPrivateStoreMgr::HandleError @ 0x85caaaa

/* private_store::CPrivateStoreMgr::HandleError(CUser*, int, int, int) */

undefined4 __thiscall
private_store::CPrivateStoreMgr::HandleError
          (CPrivateStoreMgr *this,CUser *param_1,int param_2,int param_3,int param_4)

{
  CPacketBufPrivate local_18 [12];
  
  CPacketBufPrivate::CPacketBufPrivate(local_18);
                    /* try { // try from 085caad8 to 085caaee has its CatchHandler @ 085cab08 */
  CPacketBufPrivate::MakeErrorReturnPacket(local_18,param_2,param_3,param_4);
  CUser::Send(param_1,(PacketGuard *)local_18);
  CPacketBufPrivate::~CPacketBufPrivate(local_18);
  return 0;
}

```

---

## IsBusyPrivateStore

```asm
// === 085cad5e private_store::CPrivateStoreMgr::IsBusyPrivateStore  [0x085cad5e-0x85cadf5] ===
 85cad5e:	55                   	push   %ebp
 85cad5f:	89 e5                	mov    %esp,%ebp
 85cad61:	83 ec 28             	sub    $0x28,%esp
 85cad64:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85cad6b:	e8 78 9e ff ff       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 85cad70:	8b 55 0c             	mov    0xc(%ebp),%edx
 85cad73:	89 54 24 04          	mov    %edx,0x4(%esp)
 85cad77:	89 04 24             	mov    %eax,(%esp)
 85cad7a:	e8 d9 f5 ff ff       	call   85ca358 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser>
 85cad7f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85cad82:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85cad86:	74 25                	je     85cadad <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser+0x4f>
 85cad88:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85cad8b:	89 04 24             	mov    %eax,(%esp)
 85cad8e:	e8 45 98 c6 ff       	call   82345d8 <_ZN13private_store13CPrivateStore8GetStateEv>
 85cad93:	3c 01                	cmp    $0x1,%al
 85cad95:	74 0f                	je     85cada6 <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser+0x48>
 85cad97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85cad9a:	89 04 24             	mov    %eax,(%esp)
 85cad9d:	e8 36 98 c6 ff       	call   82345d8 <_ZN13private_store13CPrivateStore8GetStateEv>
 85cada2:	3c 02                	cmp    $0x2,%al
 85cada4:	75 07                	jne    85cadad <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser+0x4f>
 85cada6:	b8 01 00 00 00       	mov    $0x1,%eax
 85cadab:	eb 05                	jmp    85cadb2 <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser+0x54>
 85cadad:	b8 00 00 00 00       	mov    $0x0,%eax
 85cadb2:	84 c0                	test   %al,%al
 85cadb4:	74 38                	je     85cadee <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser+0x90>
 85cadb6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85cadb9:	89 04 24             	mov    %eax,(%esp)
 85cadbc:	e8 23 98 c6 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 85cadc1:	84 c0                	test   %al,%al
 85cadc3:	74 22                	je     85cade7 <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser+0x89>
 85cadc5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85cadc8:	89 04 24             	mov    %eax,(%esp)
 85cadcb:	e8 08 98 c6 ff       	call   82345d8 <_ZN13private_store13CPrivateStore8GetStateEv>
 85cadd0:	3c 01                	cmp    $0x1,%al
 85cadd2:	0f 94 c0             	sete   %al
 85cadd5:	84 c0                	test   %al,%al
 85cadd7:	74 07                	je     85cade0 <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser+0x82>
 85cadd9:	b8 01 00 00 00       	mov    $0x1,%eax
 85cadde:	eb 13                	jmp    85cadf3 <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser+0x95>
 85cade0:	b8 00 00 00 00       	mov    $0x0,%eax
 85cade5:	eb 0c                	jmp    85cadf3 <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser+0x95>
 85cade7:	b8 01 00 00 00       	mov    $0x1,%eax
 85cadec:	eb 05                	jmp    85cadf3 <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser+0x95>
 85cadee:	b8 00 00 00 00       	mov    $0x0,%eax
 85cadf3:	c9                   	leave
 85cadf4:	c3                   	ret
 85cadf5:	90                   	nop

```

```c
// private_store::CPrivateStoreMgr::IsBusyPrivateStore @ 0x85cad5e

/* private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*) */

undefined4 __thiscall
private_store::CPrivateStoreMgr::IsBusyPrivateStore(CPrivateStoreMgr *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  CPrivateStoreMgr *this_00;
  CPrivateStore *this_01;
  undefined4 uVar3;
  
  this_00 = (CPrivateStoreMgr *)GetInstancePrivateStoreMgr();
  this_01 = (CPrivateStore *)FindStoreSeller(this_00,param_1);
  if (this_01 == (CPrivateStore *)0x0) {
LAB_085cadad:
    bVar1 = false;
  }
  else {
    cVar2 = CPrivateStore::GetState(this_01);
    if (cVar2 != '\x01') {
      cVar2 = CPrivateStore::GetState(this_01);
      if (cVar2 != '\x02') goto LAB_085cadad;
    }
    bVar1 = true;
  }
  if (bVar1) {
    cVar2 = CPrivateStore::isDollCreated(this_01);
    if (cVar2 == '\0') {
      uVar3 = 1;
    }
    else {
      cVar2 = CPrivateStore::GetState(this_01);
      if (cVar2 == '\x01') {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## LoadPrivateStore

```asm
// === 085cab24 private_store::CPrivateStoreMgr::LoadPrivateStore  [0x085cab24-0x85cac15] ===
 85cab24:	55                   	push   %ebp
 85cab25:	89 e5                	mov    %esp,%ebp
 85cab27:	56                   	push   %esi
 85cab28:	53                   	push   %ebx
 85cab29:	83 ec 20             	sub    $0x20,%esp
 85cab2c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 85cab31:	c7 44 24 08 b9 0c 00 	movl   $0xcb9,0x8(%esp)
 85cab38:	00 
 85cab39:	c7 44 24 04 5a d1 cb 	movl   $0x8cbd15a,0x4(%esp)
 85cab40:	08 
 85cab41:	89 04 24             	mov    %eax,(%esp)
 85cab44:	e8 3d 4f cc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 85cab49:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85cab50:	00 
 85cab51:	89 44 24 04          	mov    %eax,0x4(%esp)
 85cab55:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85cab58:	89 04 24             	mov    %eax,(%esp)
 85cab5b:	e8 c6 e0 af ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 85cab60:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85cab63:	89 04 24             	mov    %eax,(%esp)
 85cab66:	e8 db e0 af ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85cab6b:	c7 44 24 04 78 00 00 	movl   $0x78,0x4(%esp)
 85cab72:	00 
 85cab73:	89 04 24             	mov    %eax,(%esp)
 85cab76:	e8 db e0 af ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85cab7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cab7e:	89 04 24             	mov    %eax,(%esp)
 85cab81:	e8 10 e1 af ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 85cab86:	89 c3                	mov    %eax,%ebx
 85cab88:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85cab8b:	89 04 24             	mov    %eax,(%esp)
 85cab8e:	e8 b3 e0 af ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85cab93:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85cab97:	89 04 24             	mov    %eax,(%esp)
 85cab9a:	e8 b7 e0 af ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85cab9f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85caba6:	ff 
 85caba7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cabaa:	89 04 24             	mov    %eax,(%esp)
 85cabad:	e8 ee 33 08 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 85cabb2:	89 c3                	mov    %eax,%ebx
 85cabb4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85cabb7:	89 04 24             	mov    %eax,(%esp)
 85cabba:	e8 87 e0 af ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85cabbf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85cabc3:	89 04 24             	mov    %eax,(%esp)
 85cabc6:	e8 8b e0 af ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85cabcb:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 85cabd0:	8d 55 f0             	lea    -0x10(%ebp),%edx
 85cabd3:	89 54 24 08          	mov    %edx,0x8(%esp)
 85cabd7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85cabde:	00 
 85cabdf:	89 04 24             	mov    %eax,(%esp)
 85cabe2:	e8 f7 63 fa ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 85cabe7:	eb 1b                	jmp    85cac04 <_ZN13private_store16CPrivateStoreMgr16LoadPrivateStoreEP5CUser+0xe0>
 85cabe9:	89 d3                	mov    %edx,%ebx
 85cabeb:	89 c6                	mov    %eax,%esi
 85cabed:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85cabf0:	89 04 24             	mov    %eax,(%esp)
 85cabf3:	e8 da 1c 05 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85cabf8:	89 f0                	mov    %esi,%eax
 85cabfa:	89 da                	mov    %ebx,%edx
 85cabfc:	89 04 24             	mov    %eax,(%esp)
 85cabff:	e8 4c 8b 51 00       	call   8ae3750 <_Unwind_Resume>
 85cac04:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85cac07:	89 04 24             	mov    %eax,(%esp)
 85cac0a:	e8 c3 1c 05 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85cac0f:	83 c4 20             	add    $0x20,%esp
 85cac12:	5b                   	pop    %ebx
 85cac13:	5e                   	pop    %esi
 85cac14:	5d                   	pop    %ebp
 85cac15:	c3                   	ret

```

```c
// private_store::CPrivateStoreMgr::LoadPrivateStore @ 0x85cab24

/* private_store::CPrivateStoreMgr::LoadPrivateStore(CUser*) */

void __thiscall
private_store::CPrivateStoreMgr::LoadPrivateStore(CPrivateStoreMgr *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"PrivateStore.cpp",0xcb9);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 085cab76 to 085cabe6 has its CatchHandler @ 085cabe9 */
  CStreamGuard::operator<<(pCVar2,0x78);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  iVar3 = CUser::get_charac_no(param_1,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

---

## LoadPrivateStoreResponse

```asm
// === 085cac16 private_store::CPrivateStoreMgr::LoadPrivateStoreResponse  [0x085cac16-0x85cad5d] ===
 85cac16:	55                   	push   %ebp
 85cac17:	89 e5                	mov    %esp,%ebp
 85cac19:	56                   	push   %esi
 85cac1a:	53                   	push   %ebx
 85cac1b:	83 ec 30             	sub    $0x30,%esp
 85cac1e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85cac25:	8b 45 10             	mov    0x10(%ebp),%eax
 85cac28:	8b 80 30 04 00 00    	mov    0x430(%eax),%eax
 85cac2e:	83 f8 01             	cmp    $0x1,%eax
 85cac31:	75 7f                	jne    85cacb2 <_ZN13private_store16CPrivateStoreMgr24LoadPrivateStoreResponseEP5CUserPNS_17SIG_PRIVATE_STOREE+0x9c>
 85cac33:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cac36:	89 44 24 08          	mov    %eax,0x8(%esp)
 85cac3a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85cac3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85cac41:	8b 45 08             	mov    0x8(%ebp),%eax
 85cac44:	89 04 24             	mov    %eax,(%esp)
 85cac47:	e8 4c fa ff ff       	call   85ca698 <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser>
 85cac4c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85cac4f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85cac52:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85cac55:	89 04 24             	mov    %eax,(%esp)
 85cac58:	e8 f5 a2 ff ff       	call   85c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>
 85cac5d:	8b 45 10             	mov    0x10(%ebp),%eax
 85cac60:	83 c0 08             	add    $0x8,%eax
 85cac63:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 85cac6a:	00 
 85cac6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85cac6f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85cac72:	89 04 24             	mov    %eax,(%esp)
 85cac75:	e8 22 a3 ff ff       	call   85c4f9c <_ZN13private_store13CPrivateStore9CopyItemsEPNS_16PrivateStoreItemEi>
 85cac7a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85cac7d:	89 04 24             	mov    %eax,(%esp)
 85cac80:	e8 67 b0 ff ff       	call   85c5cec <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv>
 85cac85:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85cac88:	89 04 24             	mov    %eax,(%esp)
 85cac8b:	e8 86 f4 ff ff       	call   85ca116 <_ZN13private_store13CPrivateStore16SavePrivateStoreEv>
 85cac90:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85cac93:	89 04 24             	mov    %eax,(%esp)
 85cac96:	e8 d5 a1 ff ff       	call   85c4e70 <_ZN13private_store13CPrivateStore5ClearEv>
 85cac9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cac9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85caca2:	8b 45 08             	mov    0x8(%ebp),%eax
 85caca5:	89 04 24             	mov    %eax,(%esp)
 85caca8:	e8 c7 fb ff ff       	call   85ca874 <_ZN13private_store16CPrivateStoreMgr15FreeStoreSellerEP5CUser>
 85cacad:	e9 a5 00 00 00       	jmp    85cad57 <_ZN13private_store16CPrivateStoreMgr24LoadPrivateStoreResponseEP5CUserPNS_17SIG_PRIVATE_STOREE+0x141>
 85cacb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cacb5:	89 04 24             	mov    %eax,(%esp)
 85cacb8:	e8 9f 19 09 00       	call   865c65c <_ZN5CUser24IsPermissionPrivateStoreEv>
 85cacbd:	84 c0                	test   %al,%al
 85cacbf:	0f 84 92 00 00 00    	je     85cad57 <_ZN13private_store16CPrivateStoreMgr24LoadPrivateStoreResponseEP5CUserPNS_17SIG_PRIVATE_STOREE+0x141>
 85cacc5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85cacc8:	89 04 24             	mov    %eax,(%esp)
 85caccb:	e8 a2 0c 00 00       	call   85cb972 <_ZN13private_store17CPacketBufPrivateC1Ev>
 85cacd0:	8b 45 10             	mov    0x10(%ebp),%eax
 85cacd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85cacd7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85cacda:	89 04 24             	mov    %eax,(%esp)
 85cacdd:	e8 da 18 00 00       	call   85cc5bc <_ZN13private_store17CPacketBufPrivate30MakeNotipacketPrivateStoreInfoEPNS_17SIG_PRIVATE_STOREE>
 85cace2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85cace5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85cace8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85cacec:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cacef:	89 04 24             	mov    %eax,(%esp)
 85cacf2:	e8 c3 d8 07 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85cacf7:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85cacfb:	74 4f                	je     85cad4c <_ZN13private_store16CPrivateStoreMgr24LoadPrivateStoreResponseEP5CUserPNS_17SIG_PRIVATE_STOREE+0x136>
 85cacfd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cad00:	89 44 24 08          	mov    %eax,0x8(%esp)
 85cad04:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85cad07:	89 44 24 04          	mov    %eax,0x4(%esp)
 85cad0b:	8b 45 08             	mov    0x8(%ebp),%eax
 85cad0e:	89 04 24             	mov    %eax,(%esp)
 85cad11:	e8 82 f9 ff ff       	call   85ca698 <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser>
 85cad16:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85cad19:	8b 00                	mov    (%eax),%eax
 85cad1b:	83 c0 14             	add    $0x14,%eax
 85cad1e:	8b 08                	mov    (%eax),%ecx
 85cad20:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85cad23:	8b 55 10             	mov    0x10(%ebp),%edx
 85cad26:	89 54 24 04          	mov    %edx,0x4(%esp)
 85cad2a:	89 04 24             	mov    %eax,(%esp)
 85cad2d:	ff d1                	call   *%ecx
 85cad2f:	eb 1b                	jmp    85cad4c <_ZN13private_store16CPrivateStoreMgr24LoadPrivateStoreResponseEP5CUserPNS_17SIG_PRIVATE_STOREE+0x136>
 85cad31:	89 d3                	mov    %edx,%ebx
 85cad33:	89 c6                	mov    %eax,%esi
 85cad35:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85cad38:	89 04 24             	mov    %eax,(%esp)
 85cad3b:	e8 6c 1d 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85cad40:	89 f0                	mov    %esi,%eax
 85cad42:	89 da                	mov    %ebx,%edx
 85cad44:	89 04 24             	mov    %eax,(%esp)
 85cad47:	e8 04 8a 51 00       	call   8ae3750 <_Unwind_Resume>
 85cad4c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85cad4f:	89 04 24             	mov    %eax,(%esp)
 85cad52:	e8 55 1d 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85cad57:	83 c4 30             	add    $0x30,%esp
 85cad5a:	5b                   	pop    %ebx
 85cad5b:	5e                   	pop    %esi
 85cad5c:	5d                   	pop    %ebp
 85cad5d:	c3                   	ret

```

```c
// private_store::CPrivateStoreMgr::LoadPrivateStoreResponse @ 0x85cac16

/* private_store::CPrivateStoreMgr::LoadPrivateStoreResponse(CUser*,
   private_store::SIG_PRIVATE_STORE*) */

void __thiscall
private_store::CPrivateStoreMgr::LoadPrivateStoreResponse
          (CPrivateStoreMgr *this,CUser *param_1,SIG_PRIVATE_STORE *param_2)

{
  char cVar1;
  ISeller *local_28;
  CPacketBufPrivate local_24 [12];
  CPrivateStore *local_18;
  int local_14;
  CPrivateStore *local_10;
  
  local_14 = 0;
  if (*(int *)(param_2 + 0x430) == 1) {
    GetStoreSeller(this,(ISeller **)&local_18,param_1);
    local_10 = local_18;
    CPrivateStore::ResetItems(local_18);
    CPrivateStore::CopyItems(local_10,(PrivateStoreItem *)(param_2 + 8),0xe);
    CPrivateStore::RecallPrivateStoreItemToMail(local_10);
    CPrivateStore::SavePrivateStore(local_10);
    CPrivateStore::Clear(local_10);
    FreeStoreSeller((CUser *)this);
  }
  else {
    cVar1 = CUser::IsPermissionPrivateStore(param_1);
    if (cVar1 != '\0') {
      CPacketBufPrivate::CPacketBufPrivate(local_24);
                    /* try { // try from 085cacdd to 085cad2e has its CatchHandler @ 085cad31 */
      local_14 = CPacketBufPrivate::MakeNotipacketPrivateStoreInfo(local_24,param_2);
      CUser::Send(param_1,(PacketGuard *)local_24);
      if (local_14 != 0) {
        GetStoreSeller(this,&local_28,param_1);
        (**(code **)(*(int *)local_28 + 0x14))(local_28,param_2);
      }
      CPacketBufPrivate::~CPacketBufPrivate(local_24);
    }
  }
  return;
}

```

---

## ~CPrivateStoreMgr

```asm
// === 085ca4fe private_store::CPrivateStoreMgr::~CPrivateStoreMgr  [0x085ca4fe-0x85ca697] ===
 85ca4fe:	55                   	push   %ebp
 85ca4ff:	89 e5                	mov    %esp,%ebp
 85ca501:	56                   	push   %esi
 85ca502:	53                   	push   %ebx
 85ca503:	83 ec 20             	sub    $0x20,%esp
 85ca506:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca509:	c7 00 40 eb cb 08    	movl   $0x8cbeb40,(%eax)
 85ca50f:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca512:	8d 90 c8 00 00 00    	lea    0xc8(%eax),%edx
 85ca518:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85ca51b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ca51f:	89 04 24             	mov    %eax,(%esp)
 85ca522:	e8 69 2f 00 00       	call   85cd490 <_ZNSt3mapIN13private_store16PrivateStoreZoneEPSt4listIPNS0_13CPrivateStoreESaIS4_EESt4lessIS1_ESaISt4pairIKS1_S7_EEE5beginEv>
 85ca527:	83 ec 04             	sub    $0x4,%esp
 85ca52a:	eb 52                	jmp    85ca57e <_ZN13private_store16CPrivateStoreMgrD1Ev+0x80>
 85ca52c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85ca52f:	89 04 24             	mov    %eax,(%esp)
 85ca532:	e8 f7 2f 00 00       	call   85cd52e <_ZNKSt17_Rb_tree_iteratorISt4pairIKN13private_store16PrivateStoreZoneEPSt4listIPNS1_13CPrivateStoreESaIS6_EEEEptEv>
 85ca537:	8b 40 04             	mov    0x4(%eax),%eax
 85ca53a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ca53d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85ca541:	74 1e                	je     85ca561 <_ZN13private_store16CPrivateStoreMgrD1Ev+0x63>
 85ca543:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85ca546:	85 db                	test   %ebx,%ebx
 85ca548:	74 10                	je     85ca55a <_ZN13private_store16CPrivateStoreMgrD1Ev+0x5c>
 85ca54a:	89 1c 24             	mov    %ebx,(%esp)
 85ca54d:	e8 da 25 00 00       	call   85ccb2c <_ZNSt4listIPN13private_store13CPrivateStoreESaIS2_EED1Ev>
 85ca552:	89 1c 24             	mov    %ebx,(%esp)
 85ca555:	e8 96 9f 15 00       	call   87244f0 <_ZdlPv>
 85ca55a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85ca561:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ca564:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85ca56b:	00 
 85ca56c:	8d 55 e8             	lea    -0x18(%ebp),%edx
 85ca56f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ca573:	89 04 24             	mov    %eax,(%esp)
 85ca576:	e8 75 2f 00 00       	call   85cd4f0 <_ZNSt17_Rb_tree_iteratorISt4pairIKN13private_store16PrivateStoreZoneEPSt4listIPNS1_13CPrivateStoreESaIS6_EEEEppEi>
 85ca57b:	83 ec 04             	sub    $0x4,%esp
 85ca57e:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca581:	8d 90 c8 00 00 00    	lea    0xc8(%eax),%edx
 85ca587:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ca58a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ca58e:	89 04 24             	mov    %eax,(%esp)
 85ca591:	e8 20 2f 00 00       	call   85cd4b6 <_ZNSt3mapIN13private_store16PrivateStoreZoneEPSt4listIPNS0_13CPrivateStoreESaIS4_EESt4lessIS1_ESaISt4pairIKS1_S7_EEE3endEv>
 85ca596:	83 ec 04             	sub    $0x4,%esp
 85ca599:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ca59c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca5a0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85ca5a3:	89 04 24             	mov    %eax,(%esp)
 85ca5a6:	e8 31 2f 00 00       	call   85cd4dc <_ZNKSt17_Rb_tree_iteratorISt4pairIKN13private_store16PrivateStoreZoneEPSt4listIPNS1_13CPrivateStoreESaIS6_EEEEneERKSB_>
 85ca5ab:	84 c0                	test   %al,%al
 85ca5ad:	0f 85 79 ff ff ff    	jne    85ca52c <_ZN13private_store16CPrivateStoreMgrD1Ev+0x2e>
 85ca5b3:	eb 1a                	jmp    85ca5cf <_ZN13private_store16CPrivateStoreMgrD1Ev+0xd1>
 85ca5b5:	89 d3                	mov    %edx,%ebx
 85ca5b7:	89 c6                	mov    %eax,%esi
 85ca5b9:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca5bc:	05 c8 00 00 00       	add    $0xc8,%eax
 85ca5c1:	89 04 24             	mov    %eax,(%esp)
 85ca5c4:	e8 95 13 00 00       	call   85cb95e <_ZNSt3mapIN13private_store16PrivateStoreZoneEPSt4listIPNS0_13CPrivateStoreESaIS4_EESt4lessIS1_ESaISt4pairIKS1_S7_EEED1Ev>
 85ca5c9:	89 f0                	mov    %esi,%eax
 85ca5cb:	89 da                	mov    %ebx,%edx
 85ca5cd:	eb 12                	jmp    85ca5e1 <_ZN13private_store16CPrivateStoreMgrD1Ev+0xe3>
 85ca5cf:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca5d2:	05 c8 00 00 00       	add    $0xc8,%eax
 85ca5d7:	89 04 24             	mov    %eax,(%esp)
 85ca5da:	e8 7f 13 00 00       	call   85cb95e <_ZNSt3mapIN13private_store16PrivateStoreZoneEPSt4listIPNS0_13CPrivateStoreESaIS4_EESt4lessIS1_ESaISt4pairIKS1_S7_EEED1Ev>
 85ca5df:	eb 1a                	jmp    85ca5fb <_ZN13private_store16CPrivateStoreMgrD1Ev+0xfd>
 85ca5e1:	89 d3                	mov    %edx,%ebx
 85ca5e3:	89 c6                	mov    %eax,%esi
 85ca5e5:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca5e8:	05 b0 00 00 00       	add    $0xb0,%eax
 85ca5ed:	89 04 24             	mov    %eax,(%esp)
 85ca5f0:	e8 55 13 00 00       	call   85cb94a <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEED1Ev>
 85ca5f5:	89 f0                	mov    %esi,%eax
 85ca5f7:	89 da                	mov    %ebx,%edx
 85ca5f9:	eb 12                	jmp    85ca60d <_ZN13private_store16CPrivateStoreMgrD1Ev+0x10f>
 85ca5fb:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca5fe:	05 b0 00 00 00       	add    $0xb0,%eax
 85ca603:	89 04 24             	mov    %eax,(%esp)
 85ca606:	e8 3f 13 00 00       	call   85cb94a <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEED1Ev>
 85ca60b:	eb 1a                	jmp    85ca627 <_ZN13private_store16CPrivateStoreMgrD1Ev+0x129>
 85ca60d:	89 d3                	mov    %edx,%ebx
 85ca60f:	89 c6                	mov    %eax,%esi
 85ca611:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca614:	05 98 00 00 00       	add    $0x98,%eax
 85ca619:	89 04 24             	mov    %eax,(%esp)
 85ca61c:	e8 29 13 00 00       	call   85cb94a <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEED1Ev>
 85ca621:	89 f0                	mov    %esi,%eax
 85ca623:	89 da                	mov    %ebx,%edx
 85ca625:	eb 12                	jmp    85ca639 <_ZN13private_store16CPrivateStoreMgrD1Ev+0x13b>
 85ca627:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca62a:	05 98 00 00 00       	add    $0x98,%eax
 85ca62f:	89 04 24             	mov    %eax,(%esp)
 85ca632:	e8 13 13 00 00       	call   85cb94a <_ZNSt3mapIP5CUserPN13private_store13CPrivateStoreESt4lessIS1_ESaISt4pairIKS1_S4_EEED1Ev>
 85ca637:	eb 18                	jmp    85ca651 <_ZN13private_store16CPrivateStoreMgrD1Ev+0x153>
 85ca639:	89 d3                	mov    %edx,%ebx
 85ca63b:	89 c6                	mov    %eax,%esi
 85ca63d:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca640:	83 c0 68             	add    $0x68,%eax
 85ca643:	89 04 24             	mov    %eax,(%esp)
 85ca646:	e8 45 27 00 00       	call   85ccd90 <_ZN10StaticPoolIN13private_store13CPrivateStoreELi300EED1Ev>
 85ca64b:	89 f0                	mov    %esi,%eax
 85ca64d:	89 da                	mov    %ebx,%edx
 85ca64f:	eb 10                	jmp    85ca661 <_ZN13private_store16CPrivateStoreMgrD1Ev+0x163>
 85ca651:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca654:	83 c0 68             	add    $0x68,%eax
 85ca657:	89 04 24             	mov    %eax,(%esp)
 85ca65a:	e8 31 27 00 00       	call   85ccd90 <_ZN10StaticPoolIN13private_store13CPrivateStoreELi300EED1Ev>
 85ca65f:	eb 1e                	jmp    85ca67f <_ZN13private_store16CPrivateStoreMgrD1Ev+0x181>
 85ca661:	89 d3                	mov    %edx,%ebx
 85ca663:	89 c6                	mov    %eax,%esi
 85ca665:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca668:	83 c0 04             	add    $0x4,%eax
 85ca66b:	89 04 24             	mov    %eax,(%esp)
 85ca66e:	e8 59 a8 ff ff       	call   85c4ecc <_ZN13private_store13CPrivateStoreD1Ev>
 85ca673:	89 f0                	mov    %esi,%eax
 85ca675:	89 da                	mov    %ebx,%edx
 85ca677:	89 04 24             	mov    %eax,(%esp)
 85ca67a:	e8 d1 90 51 00       	call   8ae3750 <_Unwind_Resume>
 85ca67f:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca682:	83 c0 04             	add    $0x4,%eax
 85ca685:	89 04 24             	mov    %eax,(%esp)
 85ca688:	e8 3f a8 ff ff       	call   85c4ecc <_ZN13private_store13CPrivateStoreD1Ev>
 85ca68d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85ca690:	83 c4 00             	add    $0x0,%esp
 85ca693:	5b                   	pop    %ebx
 85ca694:	5e                   	pop    %esi
 85ca695:	5d                   	pop    %ebp
 85ca696:	c3                   	ret
 85ca697:	90                   	nop

```

```c
// private_store::CPrivateStoreMgr::~CPrivateStoreMgr @ 0x85ca4fe

/* private_store::CPrivateStoreMgr::~CPrivateStoreMgr() */

void __thiscall private_store::CPrivateStoreMgr::~CPrivateStoreMgr(CPrivateStoreMgr *this)

{
  list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>> *this_00;
  char cVar1;
  int iVar2;
  map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
  local_1c [4];
  map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>
  local_14 [4];
  list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>> *local_10;
  
  *(undefined ***)this = &PTR_Exit_08cbeb40;
                    /* try { // try from 085ca522 to 085ca595 has its CatchHandler @ 085ca5b5 */
  std::
  map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>
            ::operator!=((_Rb_tree_iterator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>
                          *)local_1c,(_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>
            ::operator->((_Rb_tree_iterator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>
                          *)local_1c);
    this_00 = *(list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>> **
               )(iVar2 + 4);
    local_10 = this_00;
    if (this_00 !=
        (list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>> *)0x0) {
      if (this_00 !=
          (list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>> *)0x0)
      {
        std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>::
        ~list(this_00);
        operator_delete(this_00);
      }
      local_10 = (list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>
                  *)0x0;
    }
    std::
    _Rb_tree_iterator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>
    ::operator++(local_14,(int)local_1c);
  }
                    /* try { // try from 085ca5da to 085ca5de has its CatchHandler @ 085ca5e1 */
  std::
  map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
  ::~map((map<private_store::PrivateStoreZone,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*,std::less<private_store::PrivateStoreZone>,std::allocator<std::pair<private_store::PrivateStoreZone_const,std::list<private_store::CPrivateStore*,std::allocator<private_store::CPrivateStore*>>*>>>
          *)(this + 200));
                    /* try { // try from 085ca606 to 085ca60a has its CatchHandler @ 085ca60d */
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::~map((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
          *)(this + 0xb0));
                    /* try { // try from 085ca632 to 085ca636 has its CatchHandler @ 085ca639 */
  std::
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  ::~map((map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
          *)(this + 0x98));
                    /* try { // try from 085ca65a to 085ca65e has its CatchHandler @ 085ca661 */
  StaticPool<private_store::CPrivateStore,300>::~StaticPool
            ((StaticPool<private_store::CPrivateStore,300> *)(this + 0x68));
  CPrivateStore::~CPrivateStore((CPrivateStore *)(this + 4));
  return;
}

```

