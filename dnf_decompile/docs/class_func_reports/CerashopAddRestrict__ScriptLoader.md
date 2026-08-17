# CerashopAddRestrict__ScriptLoader

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## ClearScript

```asm
// === 08abf704 CerashopAddRestrict::ScriptLoader::ClearScript  [0x08abf704-0x8abf709] ===
 8abf704:	55                   	push   %ebp
 8abf705:	89 e5                	mov    %esp,%ebp
 8abf707:	5d                   	pop    %ebp
 8abf708:	c3                   	ret
 8abf709:	90                   	nop

```

```c
// CerashopAddRestrict::ScriptLoader::ClearScript @ 0x8abf704

/* CerashopAddRestrict::ScriptLoader::ClearScript() */

void CerashopAddRestrict::ScriptLoader::ClearScript(void)

{
  return;
}

```

---

## FindIpgNo

```asm
// === 08abf70a CerashopAddRestrict::ScriptLoader::FindIpgNo  [0x08abf70a-0x8abf765] ===
 8abf70a:	55                   	push   %ebp
 8abf70b:	89 e5                	mov    %esp,%ebp
 8abf70d:	83 ec 28             	sub    $0x28,%esp
 8abf710:	8b 55 08             	mov    0x8(%ebp),%edx
 8abf713:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8abf716:	89 54 24 04          	mov    %edx,0x4(%esp)
 8abf71a:	89 04 24             	mov    %eax,(%esp)
 8abf71d:	e8 74 01 00 00       	call   8abf896 <_ZNSt3mapIjPN19CerashopAddRestrict9InfoDailyESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 8abf722:	83 ec 04             	sub    $0x4,%esp
 8abf725:	8b 55 08             	mov    0x8(%ebp),%edx
 8abf728:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8abf72b:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 8abf72e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8abf732:	89 54 24 04          	mov    %edx,0x4(%esp)
 8abf736:	89 04 24             	mov    %eax,(%esp)
 8abf739:	e8 2c 01 00 00       	call   8abf86a <_ZNSt3mapIjPN19CerashopAddRestrict9InfoDailyESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 8abf73e:	83 ec 04             	sub    $0x4,%esp
 8abf741:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8abf744:	89 44 24 04          	mov    %eax,0x4(%esp)
 8abf748:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8abf74b:	89 04 24             	mov    %eax,(%esp)
 8abf74e:	e8 69 01 00 00       	call   8abf8bc <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN19CerashopAddRestrict9InfoDailyEEEeqERKS6_>
 8abf753:	84 c0                	test   %al,%al
 8abf755:	74 07                	je     8abf75e <_ZN19CerashopAddRestrict12ScriptLoader9FindIpgNoEj+0x54>
 8abf757:	b8 00 00 00 00       	mov    $0x0,%eax
 8abf75c:	eb 05                	jmp    8abf763 <_ZN19CerashopAddRestrict12ScriptLoader9FindIpgNoEj+0x59>
 8abf75e:	b8 01 00 00 00       	mov    $0x1,%eax
 8abf763:	c9                   	leave
 8abf764:	c3                   	ret
 8abf765:	90                   	nop

```

```c
// CerashopAddRestrict::ScriptLoader::FindIpgNo @ 0x8abf70a

/* CerashopAddRestrict::ScriptLoader::FindIpgNo(unsigned int) */

bool CerashopAddRestrict::ScriptLoader::FindIpgNo(uint param_1)

{
  char cVar1;
  map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
  local_14 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>> local_10 [12];
  
  std::
  map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
  ::end(local_14);
  std::
  map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
  ::find((uint *)local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>::
          operator==(local_10,(_Rb_tree_iterator *)local_14);
  return cVar1 == '\0';
}

```

---

## GetRestrictInfo

```asm
// === 08abf766 CerashopAddRestrict::ScriptLoader::GetRestrictInfo  [0x08abf766-0x8abf7c9] ===
 8abf766:	55                   	push   %ebp
 8abf767:	89 e5                	mov    %esp,%ebp
 8abf769:	83 ec 28             	sub    $0x28,%esp
 8abf76c:	8b 55 08             	mov    0x8(%ebp),%edx
 8abf76f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8abf772:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 8abf775:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8abf779:	89 54 24 04          	mov    %edx,0x4(%esp)
 8abf77d:	89 04 24             	mov    %eax,(%esp)
 8abf780:	e8 e5 00 00 00       	call   8abf86a <_ZNSt3mapIjPN19CerashopAddRestrict9InfoDailyESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 8abf785:	83 ec 04             	sub    $0x4,%esp
 8abf788:	8b 55 08             	mov    0x8(%ebp),%edx
 8abf78b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8abf78e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8abf792:	89 04 24             	mov    %eax,(%esp)
 8abf795:	e8 fc 00 00 00       	call   8abf896 <_ZNSt3mapIjPN19CerashopAddRestrict9InfoDailyESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 8abf79a:	83 ec 04             	sub    $0x4,%esp
 8abf79d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8abf7a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8abf7a4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8abf7a7:	89 04 24             	mov    %eax,(%esp)
 8abf7aa:	e8 7b 01 00 00       	call   8abf92a <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN19CerashopAddRestrict9InfoDailyEEEneERKS6_>
 8abf7af:	84 c0                	test   %al,%al
 8abf7b1:	74 10                	je     8abf7c3 <_ZN19CerashopAddRestrict12ScriptLoader15GetRestrictInfoEj+0x5d>
 8abf7b3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8abf7b6:	89 04 24             	mov    %eax,(%esp)
 8abf7b9:	e8 80 01 00 00       	call   8abf93e <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN19CerashopAddRestrict9InfoDailyEEEptEv>
 8abf7be:	8b 40 04             	mov    0x4(%eax),%eax
 8abf7c1:	eb 05                	jmp    8abf7c8 <_ZN19CerashopAddRestrict12ScriptLoader15GetRestrictInfoEj+0x62>
 8abf7c3:	b8 00 00 00 00       	mov    $0x0,%eax
 8abf7c8:	c9                   	leave
 8abf7c9:	c3                   	ret

```

```c
// CerashopAddRestrict::ScriptLoader::GetRestrictInfo @ 0x8abf766

/* CerashopAddRestrict::ScriptLoader::GetRestrictInfo(unsigned int) */

undefined4 CerashopAddRestrict::ScriptLoader::GetRestrictInfo(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>> local_14 [4];
  map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
  local_10 [12];
  
  std::
  map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>::
            operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## LoadScript

```asm
// === 08abf3cc CerashopAddRestrict::ScriptLoader::LoadScript  [0x08abf3cc-0x8abf4dd] ===
 8abf3cc:	55                   	push   %ebp
 8abf3cd:	89 e5                	mov    %esp,%ebp
 8abf3cf:	56                   	push   %esi
 8abf3d0:	53                   	push   %ebx
 8abf3d1:	83 ec 20             	sub    $0x20,%esp
 8abf3d4:	c7 44 24 04 b1 d4 e2 	movl   $0x8e2d4b1,0x4(%esp)
 8abf3db:	08 
 8abf3dc:	c7 04 24 ca d4 e2 08 	movl   $0x8e2d4ca,(%esp)
 8abf3e3:	e8 41 c9 df ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 8abf3e8:	83 f0 01             	xor    $0x1,%eax
 8abf3eb:	84 c0                	test   %al,%al
 8abf3ed:	74 0a                	je     8abf3f9 <_ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv+0x2d>
 8abf3ef:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8abf3f4:	e9 dc 00 00 00       	jmp    8abf4d5 <_ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv+0x109>
 8abf3f9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8abf3fc:	89 04 24             	mov    %eax,(%esp)
 8abf3ff:	e8 cc 71 c4 ff       	call   87065d0 <_ZNSsC1Ev>
 8abf404:	c6 45 f5 00          	movb   $0x0,-0xb(%ebp)
 8abf408:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
 8abf40c:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8abf410:	eb 07                	jmp    8abf419 <_ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv+0x4d>
 8abf412:	90                   	nop
 8abf413:	eb 04                	jmp    8abf419 <_ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv+0x4d>
 8abf415:	90                   	nop
 8abf416:	eb 01                	jmp    8abf419 <_ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv+0x4d>
 8abf418:	90                   	nop
 8abf419:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8abf420:	00 
 8abf421:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8abf424:	89 04 24             	mov    %eax,(%esp)
 8abf427:	e8 33 d4 df ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8abf42c:	83 f0 01             	xor    $0x1,%eax
 8abf42f:	84 c0                	test   %al,%al
 8abf431:	75 74                	jne    8abf4a7 <_ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv+0xdb>
 8abf433:	c7 44 24 04 cf d4 e2 	movl   $0x8e2d4cf,0x4(%esp)
 8abf43a:	08 
 8abf43b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8abf43e:	89 04 24             	mov    %eax,(%esp)
 8abf441:	e8 5b 15 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8abf446:	84 c0                	test   %al,%al
 8abf448:	74 21                	je     8abf46b <_ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv+0x9f>
 8abf44a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8abf451:	00 
 8abf452:	8b 45 08             	mov    0x8(%ebp),%eax
 8abf455:	89 04 24             	mov    %eax,(%esp)
 8abf458:	e8 81 00 00 00       	call   8abf4de <_ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE>
 8abf45d:	c1 e8 1f             	shr    $0x1f,%eax
 8abf460:	84 c0                	test   %al,%al
 8abf462:	74 ae                	je     8abf412 <_ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv+0x46>
 8abf464:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8abf469:	eb 5f                	jmp    8abf4ca <_ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv+0xfe>
 8abf46b:	c7 44 24 04 e2 d4 e2 	movl   $0x8e2d4e2,0x4(%esp)
 8abf472:	08 
 8abf473:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8abf476:	89 04 24             	mov    %eax,(%esp)
 8abf479:	e8 23 15 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8abf47e:	84 c0                	test   %al,%al
 8abf480:	74 93                	je     8abf415 <_ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv+0x49>
 8abf482:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8abf489:	00 
 8abf48a:	8b 45 08             	mov    0x8(%ebp),%eax
 8abf48d:	89 04 24             	mov    %eax,(%esp)
 8abf490:	e8 49 00 00 00       	call   8abf4de <_ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE>
 8abf495:	c1 e8 1f             	shr    $0x1f,%eax
 8abf498:	84 c0                	test   %al,%al
 8abf49a:	0f 84 78 ff ff ff    	je     8abf418 <_ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv+0x4c>
 8abf4a0:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8abf4a5:	eb 23                	jmp    8abf4ca <_ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv+0xfe>
 8abf4a7:	90                   	nop
 8abf4a8:	bb 00 00 00 00       	mov    $0x0,%ebx
 8abf4ad:	eb 1b                	jmp    8abf4ca <_ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv+0xfe>
 8abf4af:	89 d3                	mov    %edx,%ebx
 8abf4b1:	89 c6                	mov    %eax,%esi
 8abf4b3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8abf4b6:	89 04 24             	mov    %eax,(%esp)
 8abf4b9:	e8 22 87 c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8abf4be:	89 f0                	mov    %esi,%eax
 8abf4c0:	89 da                	mov    %ebx,%edx
 8abf4c2:	89 04 24             	mov    %eax,(%esp)
 8abf4c5:	e8 86 42 02 00       	call   8ae3750 <_Unwind_Resume>
 8abf4ca:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8abf4cd:	89 04 24             	mov    %eax,(%esp)
 8abf4d0:	e8 0b 87 c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8abf4d5:	89 d8                	mov    %ebx,%eax
 8abf4d7:	83 c4 20             	add    $0x20,%esp
 8abf4da:	5b                   	pop    %ebx
 8abf4db:	5e                   	pop    %esi
 8abf4dc:	5d                   	pop    %ebp
 8abf4dd:	c3                   	ret

```

```c
// CerashopAddRestrict::ScriptLoader::LoadScript @ 0x8abf3cc

/* CerashopAddRestrict::ScriptLoader::LoadScript() */

undefined4 __thiscall CerashopAddRestrict::ScriptLoader::LoadScript(ScriptLoader *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  string local_14;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  
  cVar1 = loadRDARScriptFile("Etc/","NewCashShop_Restrict.etc");
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_14);
    local_f = 0;
    local_e = 0;
    local_d = 0;
    do {
      while( true ) {
                    /* try { // try from 08abf427 to 08abf494 has its CatchHandler @ 08abf4af */
        cVar1 = ScanType((string *)&local_14,true);
        if (cVar1 != '\x01') {
          uVar4 = 0;
          goto LAB_08abf4ca;
        }
        bVar2 = std::operator==(&local_14,"[account restrict]");
        if (!bVar2) break;
        iVar3 = LoadScriptDaily(this,0);
        if (iVar3 < 0) {
          uVar4 = 0xffffffff;
          goto LAB_08abf4ca;
        }
      }
      bVar2 = std::operator==(&local_14,"[character restrict]");
    } while ((!bVar2) || (iVar3 = LoadScriptDaily(this,1), -1 < iVar3));
    uVar4 = 0xffffffff;
LAB_08abf4ca:
    std::string::~string((string *)&local_14);
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

```

---

## LoadScriptDaily

```asm
// === 08abf4de CerashopAddRestrict::ScriptLoader::LoadScriptDaily  [0x08abf4de-0x8abf703] ===
 8abf4de:	55                   	push   %ebp
 8abf4df:	89 e5                	mov    %esp,%ebp
 8abf4e1:	57                   	push   %edi
 8abf4e2:	56                   	push   %esi
 8abf4e3:	53                   	push   %ebx
 8abf4e4:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 8abf4ea:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8abf4ed:	89 04 24             	mov    %eax,(%esp)
 8abf4f0:	e8 db 70 c4 ff       	call   87065d0 <_ZNSsC1Ev>
 8abf4f5:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 8abf4f9:	c6 45 ba 00          	movb   $0x0,-0x46(%ebp)
 8abf4fd:	c6 45 db 00          	movb   $0x0,-0x25(%ebp)
 8abf501:	c7 45 b2 00 00 00 00 	movl   $0x0,-0x4e(%ebp)
 8abf508:	c7 45 b6 00 00 00 00 	movl   $0x0,-0x4a(%ebp)
 8abf50f:	c7 45 aa 00 00 00 00 	movl   $0x0,-0x56(%ebp)
 8abf516:	c7 45 ae 00 00 00 00 	movl   $0x0,-0x52(%ebp)
 8abf51d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8abf524:	00 
 8abf525:	8d 45 ba             	lea    -0x46(%ebp),%eax
 8abf528:	89 44 24 08          	mov    %eax,0x8(%esp)
 8abf52c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8abf52f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8abf533:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8abf536:	89 04 24             	mov    %eax,(%esp)
 8abf539:	e8 71 d9 df ff       	call   88bceaf <_Z13ScanTypeOrIntRbRSsS_b>
 8abf53e:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8abf541:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 8abf545:	84 c0                	test   %al,%al
 8abf547:	0f 85 79 01 00 00    	jne    8abf6c6 <_ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE+0x1e8>
 8abf54d:	0f b6 45 ba          	movzbl -0x46(%ebp),%eax
 8abf551:	83 f0 01             	xor    $0x1,%eax
 8abf554:	84 c0                	test   %al,%al
 8abf556:	0f 85 6d 01 00 00    	jne    8abf6c9 <_ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE+0x1eb>
 8abf55c:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8abf563:	e8 13 ce df ff       	call   88bc37b <_Z7ScanIntPb>
 8abf568:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8abf56b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8abf572:	e8 04 ce df ff       	call   88bc37b <_Z7ScanIntPb>
 8abf577:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8abf57a:	8d 45 b2             	lea    -0x4e(%ebp),%eax
 8abf57d:	89 04 24             	mov    %eax,(%esp)
 8abf580:	e8 df fb ff ff       	call   8abf164 <_ZN19CerashopAddRestrict8readTimeEPs>
 8abf585:	83 f0 01             	xor    $0x1,%eax
 8abf588:	84 c0                	test   %al,%al
 8abf58a:	74 0a                	je     8abf596 <_ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE+0xb8>
 8abf58c:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8abf591:	e9 56 01 00 00       	jmp    8abf6ec <_ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE+0x20e>
 8abf596:	8d 45 aa             	lea    -0x56(%ebp),%eax
 8abf599:	89 04 24             	mov    %eax,(%esp)
 8abf59c:	e8 c3 fb ff ff       	call   8abf164 <_ZN19CerashopAddRestrict8readTimeEPs>
 8abf5a1:	83 f0 01             	xor    $0x1,%eax
 8abf5a4:	84 c0                	test   %al,%al
 8abf5a6:	74 0a                	je     8abf5b2 <_ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE+0xd4>
 8abf5a8:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8abf5ad:	e9 3a 01 00 00       	jmp    8abf6ec <_ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE+0x20e>
 8abf5b2:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8abf5b9:	e8 bd cd df ff       	call   88bc37b <_Z7ScanIntPb>
 8abf5be:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8abf5c1:	8b 55 08             	mov    0x8(%ebp),%edx
 8abf5c4:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8abf5c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8abf5cb:	89 04 24             	mov    %eax,(%esp)
 8abf5ce:	e8 c3 02 00 00       	call   8abf896 <_ZNSt3mapIjPN19CerashopAddRestrict9InfoDailyESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 8abf5d3:	83 ec 04             	sub    $0x4,%esp
 8abf5d6:	8b 55 08             	mov    0x8(%ebp),%edx
 8abf5d9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8abf5dc:	8d 4d a4             	lea    -0x5c(%ebp),%ecx
 8abf5df:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8abf5e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8abf5e7:	89 04 24             	mov    %eax,(%esp)
 8abf5ea:	e8 7b 02 00 00       	call   8abf86a <_ZNSt3mapIjPN19CerashopAddRestrict9InfoDailyESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 8abf5ef:	83 ec 04             	sub    $0x4,%esp
 8abf5f2:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8abf5f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8abf5f9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8abf5fc:	89 04 24             	mov    %eax,(%esp)
 8abf5ff:	e8 b8 02 00 00       	call   8abf8bc <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN19CerashopAddRestrict9InfoDailyEEEeqERKS6_>
 8abf604:	84 c0                	test   %al,%al
 8abf606:	0f 84 a0 00 00 00    	je     8abf6ac <_ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE+0x1ce>
 8abf60c:	8d 45 b2             	lea    -0x4e(%ebp),%eax
 8abf60f:	89 04 24             	mov    %eax,(%esp)
 8abf612:	e8 28 fd ff ff       	call   8abf33f <_ZN19CerashopAddRestrict10uint32TimeEPs>
 8abf617:	89 c7                	mov    %eax,%edi
 8abf619:	8d 45 aa             	lea    -0x56(%ebp),%eax
 8abf61c:	89 04 24             	mov    %eax,(%esp)
 8abf61f:	e8 1b fd ff ff       	call   8abf33f <_ZN19CerashopAddRestrict10uint32TimeEPs>
 8abf624:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8abf627:	c7 04 24 1c 00 00 00 	movl   $0x1c,(%esp)
 8abf62e:	e8 1d 4e c6 ff       	call   8724450 <_Znwj>
 8abf633:	89 c3                	mov    %eax,%ebx
 8abf635:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8abf638:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 8abf63b:	89 da                	mov    %ebx,%edx
 8abf63d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8abf640:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8abf644:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8abf647:	89 44 24 18          	mov    %eax,0x18(%esp)
 8abf64b:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8abf64e:	89 44 24 14          	mov    %eax,0x14(%esp)
 8abf652:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8abf656:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8abf65a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8abf65e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8abf661:	89 44 24 04          	mov    %eax,0x4(%esp)
 8abf665:	89 14 24             	mov    %edx,(%esp)
 8abf668:	e8 b9 01 00 00       	call   8abf826 <_ZN19CerashopAddRestrict9InfoDailyC1ENS_12RestrictType1TEjjllii>
 8abf66d:	89 d8                	mov    %ebx,%eax
 8abf66f:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8abf672:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8abf675:	89 44 24 08          	mov    %eax,0x8(%esp)
 8abf679:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8abf67c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8abf680:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8abf683:	89 04 24             	mov    %eax,(%esp)
 8abf686:	e8 45 02 00 00       	call   8abf8d0 <_ZNSt4pairIKjPN19CerashopAddRestrict9InfoDailyEEC1IRjRS3_EEOT_OT0_>
 8abf68b:	8b 55 08             	mov    0x8(%ebp),%edx
 8abf68e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8abf691:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 8abf694:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8abf698:	89 54 24 04          	mov    %edx,0x4(%esp)
 8abf69c:	89 04 24             	mov    %eax,(%esp)
 8abf69f:	e8 5a 02 00 00       	call   8abf8fe <_ZNSt3mapIjPN19CerashopAddRestrict9InfoDailyESt4lessIjESaISt4pairIKjS2_EEE6insertERKS7_>
 8abf6a4:	83 ec 04             	sub    $0x4,%esp
 8abf6a7:	e9 55 fe ff ff       	jmp    8abf501 <_ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE+0x23>
 8abf6ac:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8abf6af:	89 44 24 04          	mov    %eax,0x4(%esp)
 8abf6b3:	c7 04 24 f7 d4 e2 08 	movl   $0x8e2d4f7,(%esp)
 8abf6ba:	e8 a1 e4 5b ff       	call   807db60 <printf@plt>
 8abf6bf:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8abf6c4:	eb 26                	jmp    8abf6ec <_ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE+0x20e>
 8abf6c6:	90                   	nop
 8abf6c7:	eb 01                	jmp    8abf6ca <_ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE+0x1ec>
 8abf6c9:	90                   	nop
 8abf6ca:	bb 00 00 00 00       	mov    $0x0,%ebx
 8abf6cf:	eb 1b                	jmp    8abf6ec <_ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE+0x20e>
 8abf6d1:	89 d3                	mov    %edx,%ebx
 8abf6d3:	89 c6                	mov    %eax,%esi
 8abf6d5:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8abf6d8:	89 04 24             	mov    %eax,(%esp)
 8abf6db:	e8 00 85 c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8abf6e0:	89 f0                	mov    %esi,%eax
 8abf6e2:	89 da                	mov    %ebx,%edx
 8abf6e4:	89 04 24             	mov    %eax,(%esp)
 8abf6e7:	e8 64 40 02 00       	call   8ae3750 <_Unwind_Resume>
 8abf6ec:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8abf6ef:	89 04 24             	mov    %eax,(%esp)
 8abf6f2:	e8 e9 84 c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8abf6f7:	89 d8                	mov    %ebx,%eax
 8abf6f9:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8abf6fc:	83 c4 00             	add    $0x0,%esp
 8abf6ff:	5b                   	pop    %ebx
 8abf700:	5e                   	pop    %esi
 8abf701:	5f                   	pop    %edi
 8abf702:	5d                   	pop    %ebp
 8abf703:	c3                   	ret

```

```c
// CerashopAddRestrict::ScriptLoader::LoadScriptDaily @ 0x8abf4de

/* CerashopAddRestrict::ScriptLoader::LoadScriptDaily(CerashopAddRestrict::RestrictType::T) */

undefined4 __thiscall
CerashopAddRestrict::ScriptLoader::LoadScriptDaily(undefined4 this,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  InfoDaily *pIVar3;
  undefined4 uVar4;
  uint *puVar5;
  InfoDaily *local_64;
  uint local_60;
  short local_5a [8];
  bool local_4a;
  bool local_49;
  string local_48 [4];
  map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
  local_44 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>> local_40 [4];
  pair local_3c [8];
  pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*> local_34 [11];
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  std::string::string(local_48);
  local_49 = false;
  local_4a = false;
  local_29 = 0;
  while( true ) {
    local_5a[4] = 0;
    local_5a[5] = 0;
    local_5a[6] = 0;
    local_5a[7] = 0;
    local_5a[0] = 0;
    local_5a[1] = 0;
    local_5a[2] = 0;
    local_5a[3] = 0;
                    /* try { // try from 08abf539 to 08abf6be has its CatchHandler @ 08abf6d1 */
    local_60 = ScanTypeOrInt(&local_49,local_48,&local_4a,true);
    if ((local_49 != false) || (local_4a != true)) break;
    local_28 = ScanInt((bool *)0x0);
    local_24 = ScanInt((bool *)0x0);
    cVar1 = readTime(local_5a + 4);
    if (cVar1 != '\x01') {
      uVar4 = 0xffffffff;
      goto LAB_08abf6ec;
    }
    cVar1 = readTime(local_5a);
    if (cVar1 != '\x01') {
      uVar4 = 0xffffffff;
      goto LAB_08abf6ec;
    }
    local_20 = ScanInt((bool *)0x0);
    std::
    map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
    ::end(local_44);
    puVar5 = &local_60;
    std::
    map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
    ::find((uint *)local_40);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>::
            operator==(local_40,(_Rb_tree_iterator *)local_44);
    if (cVar1 == '\0') {
      printf("already registed ipg_no:%u",local_60,puVar5);
      uVar4 = 0xffffffff;
      goto LAB_08abf6ec;
    }
    uVar4 = uint32Time(local_5a + 4);
    uVar2 = uint32Time(local_5a);
    pIVar3 = operator_new(0x1c);
    InfoDaily::InfoDaily(pIVar3,param_2,local_60,local_28,uVar4,uVar2,local_24,local_20);
    local_64 = pIVar3;
    std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>::
    pair<unsigned_int&,CerashopAddRestrict::InfoDaily*&>(local_34,&local_60,&local_64);
    std::
    map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
    ::insert(local_3c);
  }
  uVar4 = 0;
LAB_08abf6ec:
  std::string::~string(local_48);
  return uVar4;
}

```

