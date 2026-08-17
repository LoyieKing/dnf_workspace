# CGM_Manager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## CGM_Manager

```asm
// === 082990d0 CGM_Manager::CGM_Manager  [0x082990d0-0x8299159] ===
 82990d0:	55                   	push   %ebp
 82990d1:	89 e5                	mov    %esp,%ebp
 82990d3:	56                   	push   %esi
 82990d4:	53                   	push   %ebx
 82990d5:	83 ec 10             	sub    $0x10,%esp
 82990d8:	8b 45 08             	mov    0x8(%ebp),%eax
 82990db:	89 04 24             	mov    %eax,(%esp)
 82990de:	e8 df 9b 01 00       	call   82b2cc2 <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEEC1Ev>
 82990e3:	8b 45 08             	mov    0x8(%ebp),%eax
 82990e6:	83 c0 1c             	add    $0x1c,%eax
 82990e9:	89 04 24             	mov    %eax,(%esp)
 82990ec:	e8 57 ab 00 00       	call   82a3c48 <_ZN6rwLockC1Ev>
 82990f1:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 82990f6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82990fd:	00 
 82990fe:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8299105:	00 
 8299106:	89 04 24             	mov    %eax,(%esp)
 8299109:	e8 30 c1 15 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 829910e:	8b 55 08             	mov    0x8(%ebp),%edx
 8299111:	89 42 18             	mov    %eax,0x18(%edx)
 8299114:	8b 45 08             	mov    0x8(%ebp),%eax
 8299117:	89 04 24             	mov    %eax,(%esp)
 829911a:	e8 11 04 00 00       	call   8299530 <_ZN11CGM_Manager16LoadGmListFromDbEv>
 829911f:	eb 31                	jmp    8299152 <_ZN11CGM_ManagerC1Ev+0x82>
 8299121:	89 d3                	mov    %edx,%ebx
 8299123:	89 c6                	mov    %eax,%esi
 8299125:	8b 45 08             	mov    0x8(%ebp),%eax
 8299128:	83 c0 1c             	add    $0x1c,%eax
 829912b:	89 04 24             	mov    %eax,(%esp)
 829912e:	e8 31 ab 00 00       	call   82a3c64 <_ZN6rwLockD1Ev>
 8299133:	89 f0                	mov    %esi,%eax
 8299135:	89 da                	mov    %ebx,%edx
 8299137:	89 d3                	mov    %edx,%ebx
 8299139:	89 c6                	mov    %eax,%esi
 829913b:	8b 45 08             	mov    0x8(%ebp),%eax
 829913e:	89 04 24             	mov    %eax,(%esp)
 8299141:	e8 e0 16 01 00       	call   82aa826 <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEED1Ev>
 8299146:	89 f0                	mov    %esi,%eax
 8299148:	89 da                	mov    %ebx,%edx
 829914a:	89 04 24             	mov    %eax,(%esp)
 829914d:	e8 fe a5 84 00       	call   8ae3750 <_Unwind_Resume>
 8299152:	83 c4 10             	add    $0x10,%esp
 8299155:	5b                   	pop    %ebx
 8299156:	5e                   	pop    %esi
 8299157:	5d                   	pop    %ebp
 8299158:	c3                   	ret
 8299159:	90                   	nop

```

```c
// CGM_Manager::CGM_Manager @ 0x82990d0

/* CGM_Manager::CGM_Manager() */

void __thiscall CGM_Manager::CGM_Manager(CGM_Manager *this)

{
  undefined4 uVar1;
  
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::map((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
         *)this);
  rwLock::rwLock((rwLock *)(this + 0x1c));
                    /* try { // try from 08299109 to 0829911e has its CatchHandler @ 08299121 */
  uVar1 = DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  *(undefined4 *)(this + 0x18) = uVar1;
  LoadGmListFromDb(this);
  return;
}

```

---

## GetCurrentGmMode

```asm
// === 08299276 CGM_Manager::GetCurrentGmMode  [0x08299276-0x8299329] ===
 8299276:	55                   	push   %ebp
 8299277:	89 e5                	mov    %esp,%ebp
 8299279:	56                   	push   %esi
 829927a:	53                   	push   %ebx
 829927b:	83 ec 20             	sub    $0x20,%esp
 829927e:	8b 45 08             	mov    0x8(%ebp),%eax
 8299281:	83 c0 1c             	add    $0x1c,%eax
 8299284:	89 44 24 04          	mov    %eax,0x4(%esp)
 8299288:	8d 45 f0             	lea    -0x10(%ebp),%eax
 829928b:	89 04 24             	mov    %eax,(%esp)
 829928e:	e8 a9 9a 01 00       	call   82b2d3c <_ZN9readGuardI6rwLockEC1EPS0_>
 8299293:	8b 55 08             	mov    0x8(%ebp),%edx
 8299296:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8299299:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 829929c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82992a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 82992a4:	89 04 24             	mov    %eax,(%esp)
 82992a7:	e8 c2 9a 01 00       	call   82b2d6e <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 82992ac:	83 ec 04             	sub    $0x4,%esp
 82992af:	8b 55 08             	mov    0x8(%ebp),%edx
 82992b2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82992b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 82992b9:	89 04 24             	mov    %eax,(%esp)
 82992bc:	e8 d9 9a 01 00       	call   82b2d9a <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 82992c1:	83 ec 04             	sub    $0x4,%esp
 82992c4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82992c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82992cb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82992ce:	89 04 24             	mov    %eax,(%esp)
 82992d1:	e8 ea 9a 01 00       	call   82b2dc0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj9CGMRecordEEeqERKS4_>
 82992d6:	84 c0                	test   %al,%al
 82992d8:	74 07                	je     82992e1 <_ZN11CGM_Manager16GetCurrentGmModeEj+0x6b>
 82992da:	bb 00 00 00 00       	mov    $0x0,%ebx
 82992df:	eb 32                	jmp    8299313 <_ZN11CGM_Manager16GetCurrentGmModeEj+0x9d>
 82992e1:	8b 45 08             	mov    0x8(%ebp),%eax
 82992e4:	8d 55 0c             	lea    0xc(%ebp),%edx
 82992e7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82992eb:	89 04 24             	mov    %eax,(%esp)
 82992ee:	e8 f7 9a 01 00       	call   82b2dea <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEEixERS4_>
 82992f3:	0f b6 18             	movzbl (%eax),%ebx
 82992f6:	eb 1b                	jmp    8299313 <_ZN11CGM_Manager16GetCurrentGmModeEj+0x9d>
 82992f8:	89 d3                	mov    %edx,%ebx
 82992fa:	89 c6                	mov    %eax,%esi
 82992fc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82992ff:	89 04 24             	mov    %eax,(%esp)
 8299302:	e8 51 9a 01 00       	call   82b2d58 <_ZN9readGuardI6rwLockED1Ev>
 8299307:	89 f0                	mov    %esi,%eax
 8299309:	89 da                	mov    %ebx,%edx
 829930b:	89 04 24             	mov    %eax,(%esp)
 829930e:	e8 3d a4 84 00       	call   8ae3750 <_Unwind_Resume>
 8299313:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8299316:	89 04 24             	mov    %eax,(%esp)
 8299319:	e8 3a 9a 01 00       	call   82b2d58 <_ZN9readGuardI6rwLockED1Ev>
 829931e:	89 d8                	mov    %ebx,%eax
 8299320:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8299323:	83 c4 00             	add    $0x0,%esp
 8299326:	5b                   	pop    %ebx
 8299327:	5e                   	pop    %esi
 8299328:	5d                   	pop    %ebp
 8299329:	c3                   	ret

```

```c
// CGM_Manager::GetCurrentGmMode @ 0x8299276

/* CGM_Manager::GetCurrentGmMode(unsigned int) */

undefined1 CGM_Manager::GetCurrentGmMode(uint param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>> local_18 [4];
  readGuard<rwLock> local_14 [4];
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  local_10 [4];
  
  readGuard<rwLock>::readGuard(local_14,(rwLock *)(param_1 + 0x1c));
                    /* try { // try from 082992a7 to 082992f2 has its CatchHandler @ 082992f8 */
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    puVar2 = (undefined1 *)
             std::
             map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
             ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                           *)param_1,(uint *)&stack0x00000008);
    uVar3 = *puVar2;
  }
  else {
    uVar3 = 0;
  }
  readGuard<rwLock>::~readGuard(local_14);
  return uVar3;
}

```

---

## GetGmLevel

```asm
// === 082993d8 CGM_Manager::GetGmLevel  [0x082993d8-0x829948b] ===
 82993d8:	55                   	push   %ebp
 82993d9:	89 e5                	mov    %esp,%ebp
 82993db:	56                   	push   %esi
 82993dc:	53                   	push   %ebx
 82993dd:	83 ec 20             	sub    $0x20,%esp
 82993e0:	8b 45 08             	mov    0x8(%ebp),%eax
 82993e3:	83 c0 1c             	add    $0x1c,%eax
 82993e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82993ea:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82993ed:	89 04 24             	mov    %eax,(%esp)
 82993f0:	e8 47 99 01 00       	call   82b2d3c <_ZN9readGuardI6rwLockEC1EPS0_>
 82993f5:	8b 55 08             	mov    0x8(%ebp),%edx
 82993f8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82993fb:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 82993fe:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8299402:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299406:	89 04 24             	mov    %eax,(%esp)
 8299409:	e8 60 99 01 00       	call   82b2d6e <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 829940e:	83 ec 04             	sub    $0x4,%esp
 8299411:	8b 55 08             	mov    0x8(%ebp),%edx
 8299414:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8299417:	89 54 24 04          	mov    %edx,0x4(%esp)
 829941b:	89 04 24             	mov    %eax,(%esp)
 829941e:	e8 77 99 01 00       	call   82b2d9a <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 8299423:	83 ec 04             	sub    $0x4,%esp
 8299426:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8299429:	89 44 24 04          	mov    %eax,0x4(%esp)
 829942d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8299430:	89 04 24             	mov    %eax,(%esp)
 8299433:	e8 88 99 01 00       	call   82b2dc0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj9CGMRecordEEeqERKS4_>
 8299438:	84 c0                	test   %al,%al
 829943a:	74 07                	je     8299443 <_ZN11CGM_Manager10GetGmLevelEj+0x6b>
 829943c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8299441:	eb 32                	jmp    8299475 <_ZN11CGM_Manager10GetGmLevelEj+0x9d>
 8299443:	8b 45 08             	mov    0x8(%ebp),%eax
 8299446:	8d 55 0c             	lea    0xc(%ebp),%edx
 8299449:	89 54 24 04          	mov    %edx,0x4(%esp)
 829944d:	89 04 24             	mov    %eax,(%esp)
 8299450:	e8 95 99 01 00       	call   82b2dea <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEEixERS4_>
 8299455:	8b 58 04             	mov    0x4(%eax),%ebx
 8299458:	eb 1b                	jmp    8299475 <_ZN11CGM_Manager10GetGmLevelEj+0x9d>
 829945a:	89 d3                	mov    %edx,%ebx
 829945c:	89 c6                	mov    %eax,%esi
 829945e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8299461:	89 04 24             	mov    %eax,(%esp)
 8299464:	e8 ef 98 01 00       	call   82b2d58 <_ZN9readGuardI6rwLockED1Ev>
 8299469:	89 f0                	mov    %esi,%eax
 829946b:	89 da                	mov    %ebx,%edx
 829946d:	89 04 24             	mov    %eax,(%esp)
 8299470:	e8 db a2 84 00       	call   8ae3750 <_Unwind_Resume>
 8299475:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8299478:	89 04 24             	mov    %eax,(%esp)
 829947b:	e8 d8 98 01 00       	call   82b2d58 <_ZN9readGuardI6rwLockED1Ev>
 8299480:	89 d8                	mov    %ebx,%eax
 8299482:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8299485:	83 c4 00             	add    $0x0,%esp
 8299488:	5b                   	pop    %ebx
 8299489:	5e                   	pop    %esi
 829948a:	5d                   	pop    %ebp
 829948b:	c3                   	ret

```

```c
// CGM_Manager::GetGmLevel @ 0x82993d8

/* CGM_Manager::GetGmLevel(unsigned int) */

undefined4 CGM_Manager::GetGmLevel(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>> local_18 [4];
  readGuard<rwLock> local_14 [4];
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  local_10 [4];
  
  readGuard<rwLock>::readGuard(local_14,(rwLock *)(param_1 + 0x1c));
                    /* try { // try from 08299409 to 08299454 has its CatchHandler @ 0829945a */
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = std::
            map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
            ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                          *)param_1,(uint *)&stack0x00000008);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  else {
    uVar3 = 0;
  }
  readGuard<rwLock>::~readGuard(local_14);
  return uVar3;
}

```

---

## IsGm

```asm
// === 0829948c CGM_Manager::IsGm  [0x0829948c-0x829952f] ===
 829948c:	55                   	push   %ebp
 829948d:	89 e5                	mov    %esp,%ebp
 829948f:	56                   	push   %esi
 8299490:	53                   	push   %ebx
 8299491:	83 ec 20             	sub    $0x20,%esp
 8299494:	8b 45 08             	mov    0x8(%ebp),%eax
 8299497:	83 c0 1c             	add    $0x1c,%eax
 829949a:	89 44 24 04          	mov    %eax,0x4(%esp)
 829949e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82994a1:	89 04 24             	mov    %eax,(%esp)
 82994a4:	e8 93 98 01 00       	call   82b2d3c <_ZN9readGuardI6rwLockEC1EPS0_>
 82994a9:	8b 55 08             	mov    0x8(%ebp),%edx
 82994ac:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82994af:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 82994b2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82994b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82994ba:	89 04 24             	mov    %eax,(%esp)
 82994bd:	e8 ac 98 01 00       	call   82b2d6e <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 82994c2:	83 ec 04             	sub    $0x4,%esp
 82994c5:	8b 55 08             	mov    0x8(%ebp),%edx
 82994c8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82994cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 82994cf:	89 04 24             	mov    %eax,(%esp)
 82994d2:	e8 c3 98 01 00       	call   82b2d9a <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 82994d7:	83 ec 04             	sub    $0x4,%esp
 82994da:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82994dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82994e1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82994e4:	89 04 24             	mov    %eax,(%esp)
 82994e7:	e8 d4 98 01 00       	call   82b2dc0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj9CGMRecordEEeqERKS4_>
 82994ec:	84 c0                	test   %al,%al
 82994ee:	74 07                	je     82994f7 <_ZN11CGM_Manager4IsGmEj+0x6b>
 82994f0:	bb 00 00 00 00       	mov    $0x0,%ebx
 82994f5:	eb 22                	jmp    8299519 <_ZN11CGM_Manager4IsGmEj+0x8d>
 82994f7:	bb 01 00 00 00       	mov    $0x1,%ebx
 82994fc:	eb 1b                	jmp    8299519 <_ZN11CGM_Manager4IsGmEj+0x8d>
 82994fe:	89 d3                	mov    %edx,%ebx
 8299500:	89 c6                	mov    %eax,%esi
 8299502:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8299505:	89 04 24             	mov    %eax,(%esp)
 8299508:	e8 4b 98 01 00       	call   82b2d58 <_ZN9readGuardI6rwLockED1Ev>
 829950d:	89 f0                	mov    %esi,%eax
 829950f:	89 da                	mov    %ebx,%edx
 8299511:	89 04 24             	mov    %eax,(%esp)
 8299514:	e8 37 a2 84 00       	call   8ae3750 <_Unwind_Resume>
 8299519:	8d 45 f0             	lea    -0x10(%ebp),%eax
 829951c:	89 04 24             	mov    %eax,(%esp)
 829951f:	e8 34 98 01 00       	call   82b2d58 <_ZN9readGuardI6rwLockED1Ev>
 8299524:	89 d8                	mov    %ebx,%eax
 8299526:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8299529:	83 c4 00             	add    $0x0,%esp
 829952c:	5b                   	pop    %ebx
 829952d:	5e                   	pop    %esi
 829952e:	5d                   	pop    %ebp
 829952f:	c3                   	ret

```

```c
// CGM_Manager::IsGm @ 0x829948c

/* CGM_Manager::IsGm(unsigned int) */

bool CGM_Manager::IsGm(uint param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>> local_18 [4];
  readGuard<rwLock> local_14 [4];
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  local_10 [4];
  
  readGuard<rwLock>::readGuard(local_14,(rwLock *)(param_1 + 0x1c));
                    /* try { // try from 082994bd to 082994d6 has its CatchHandler @ 082994fe */
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_10);
  readGuard<rwLock>::~readGuard(local_14);
  return cVar1 == '\0';
}

```

---

## LoadGmDataFromDb

```asm
// === 08299740 CGM_Manager::LoadGmDataFromDb  [0x08299740-0x8299911] ===
 8299740:	55                   	push   %ebp
 8299741:	89 e5                	mov    %esp,%ebp
 8299743:	56                   	push   %esi
 8299744:	53                   	push   %ebx
 8299745:	83 ec 40             	sub    $0x40,%esp
 8299748:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 829974c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8299753:	8b 45 0c             	mov    0xc(%ebp),%eax
 8299756:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 829975d:	00 
 829975e:	89 04 24             	mov    %eax,(%esp)
 8299761:	e8 e5 f8 e6 ff       	call   810904b <_Z14NumberToStringji>
 8299766:	8b 55 08             	mov    0x8(%ebp),%edx
 8299769:	8b 52 18             	mov    0x18(%edx),%edx
 829976c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8299770:	c7 44 24 04 90 71 c1 	movl   $0x8c17190,0x4(%esp)
 8299777:	08 
 8299778:	89 14 24             	mov    %edx,(%esp)
 829977b:	e8 40 aa 15 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8299780:	8b 45 08             	mov    0x8(%ebp),%eax
 8299783:	8b 40 18             	mov    0x18(%eax),%eax
 8299786:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 829978d:	00 
 829978e:	89 04 24             	mov    %eax,(%esp)
 8299791:	e8 90 ab 15 00       	call   83f4326 <_ZN5MySQL4execEb>
 8299796:	88 45 f3             	mov    %al,-0xd(%ebp)
 8299799:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 829979d:	83 f0 01             	xor    $0x1,%eax
 82997a0:	84 c0                	test   %al,%al
 82997a2:	74 40                	je     82997e4 <_ZN11CGM_Manager16LoadGmDataFromDbEj+0xa4>
 82997a4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82997ab:	00 
 82997ac:	c7 44 24 08 a2 15 00 	movl   $0x15a2,0x8(%esp)
 82997b3:	00 
 82997b4:	c7 44 24 04 20 b2 c1 	movl   $0x8c1b220,0x4(%esp)
 82997bb:	08 
 82997bc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82997bf:	89 04 24             	mov    %eax,(%esp)
 82997c2:	e8 51 5f 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82997c7:	c7 44 24 04 2c 71 c1 	movl   $0x8c1712c,0x4(%esp)
 82997ce:	08 
 82997cf:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82997d2:	89 04 24             	mov    %eax,(%esp)
 82997d5:	e8 ae 5f 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82997da:	bb 00 00 00 00       	mov    $0x0,%ebx
 82997df:	e9 24 01 00 00       	jmp    8299908 <_ZN11CGM_Manager16LoadGmDataFromDbEj+0x1c8>
 82997e4:	8b 45 08             	mov    0x8(%ebp),%eax
 82997e7:	8b 40 18             	mov    0x18(%eax),%eax
 82997ea:	89 04 24             	mov    %eax,(%esp)
 82997ed:	e8 7a 8b e4 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 82997f2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82997f5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82997f9:	75 0a                	jne    8299805 <_ZN11CGM_Manager16LoadGmDataFromDbEj+0xc5>
 82997fb:	bb 00 00 00 00       	mov    $0x0,%ebx
 8299800:	e9 03 01 00 00       	jmp    8299908 <_ZN11CGM_Manager16LoadGmDataFromDbEj+0x1c8>
 8299805:	8b 45 08             	mov    0x8(%ebp),%eax
 8299808:	83 c0 1c             	add    $0x1c,%eax
 829980b:	89 44 24 04          	mov    %eax,0x4(%esp)
 829980f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8299812:	89 04 24             	mov    %eax,(%esp)
 8299815:	e8 1c 97 01 00       	call   82b2f36 <_ZN10writeGuardI6rwLockEC1EPS0_>
 829981a:	8b 45 08             	mov    0x8(%ebp),%eax
 829981d:	8b 40 18             	mov    0x18(%eax),%eax
 8299820:	89 04 24             	mov    %eax,(%esp)
 8299823:	e8 94 ac 15 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 8299828:	8b 45 08             	mov    0x8(%ebp),%eax
 829982b:	8d 55 0c             	lea    0xc(%ebp),%edx
 829982e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299832:	89 04 24             	mov    %eax,(%esp)
 8299835:	e8 b0 95 01 00       	call   82b2dea <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEEixERS4_>
 829983a:	8d 50 04             	lea    0x4(%eax),%edx
 829983d:	8b 45 08             	mov    0x8(%ebp),%eax
 8299840:	8b 40 18             	mov    0x18(%eax),%eax
 8299843:	89 54 24 08          	mov    %edx,0x8(%esp)
 8299847:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 829984e:	00 
 829984f:	89 04 24             	mov    %eax,(%esp)
 8299852:	e8 d5 d0 e7 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8299857:	88 45 f3             	mov    %al,-0xd(%ebp)
 829985a:	8b 45 08             	mov    0x8(%ebp),%eax
 829985d:	8d 55 0c             	lea    0xc(%ebp),%edx
 8299860:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299864:	89 04 24             	mov    %eax,(%esp)
 8299867:	e8 7e 95 01 00       	call   82b2dea <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEEixERS4_>
 829986c:	8b 40 04             	mov    0x4(%eax),%eax
 829986f:	85 c0                	test   %eax,%eax
 8299871:	0f 94 c0             	sete   %al
 8299874:	84 c0                	test   %al,%al
 8299876:	74 5b                	je     82998d3 <_ZN11CGM_Manager16LoadGmDataFromDbEj+0x193>
 8299878:	8b 45 0c             	mov    0xc(%ebp),%eax
 829987b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8299882:	00 
 8299883:	89 04 24             	mov    %eax,(%esp)
 8299886:	e8 c0 f7 e6 ff       	call   810904b <_Z14NumberToStringji>
 829988b:	89 c3                	mov    %eax,%ebx
 829988d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8299894:	00 
 8299895:	c7 44 24 08 b4 15 00 	movl   $0x15b4,0x8(%esp)
 829989c:	00 
 829989d:	c7 44 24 04 20 b2 c1 	movl   $0x8c1b220,0x4(%esp)
 82998a4:	08 
 82998a5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82998a8:	89 04 24             	mov    %eax,(%esp)
 82998ab:	e8 68 5e 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82998b0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82998b4:	c7 44 24 04 c0 71 c1 	movl   $0x8c171c0,0x4(%esp)
 82998bb:	08 
 82998bc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82998bf:	89 04 24             	mov    %eax,(%esp)
 82998c2:	e8 c1 5e 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82998c7:	bb 00 00 00 00       	mov    $0x0,%ebx
 82998cc:	be 00 00 00 00       	mov    $0x0,%esi
 82998d1:	eb 22                	jmp    82998f5 <_ZN11CGM_Manager16LoadGmDataFromDbEj+0x1b5>
 82998d3:	be 01 00 00 00       	mov    $0x1,%esi
 82998d8:	eb 1b                	jmp    82998f5 <_ZN11CGM_Manager16LoadGmDataFromDbEj+0x1b5>
 82998da:	89 d3                	mov    %edx,%ebx
 82998dc:	89 c6                	mov    %eax,%esi
 82998de:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82998e1:	89 04 24             	mov    %eax,(%esp)
 82998e4:	e8 69 96 01 00       	call   82b2f52 <_ZN10writeGuardI6rwLockED1Ev>
 82998e9:	89 f0                	mov    %esi,%eax
 82998eb:	89 da                	mov    %ebx,%edx
 82998ed:	89 04 24             	mov    %eax,(%esp)
 82998f0:	e8 5b 9e 84 00       	call   8ae3750 <_Unwind_Resume>
 82998f5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82998f8:	89 04 24             	mov    %eax,(%esp)
 82998fb:	e8 52 96 01 00       	call   82b2f52 <_ZN10writeGuardI6rwLockED1Ev>
 8299900:	85 f6                	test   %esi,%esi
 8299902:	74 04                	je     8299908 <_ZN11CGM_Manager16LoadGmDataFromDbEj+0x1c8>
 8299904:	0f b6 5d f3          	movzbl -0xd(%ebp),%ebx
 8299908:	89 d8                	mov    %ebx,%eax
 829990a:	83 c4 40             	add    $0x40,%esp
 829990d:	5b                   	pop    %ebx
 829990e:	5e                   	pop    %esi
 829990f:	5d                   	pop    %ebp
 8299910:	c3                   	ret
 8299911:	90                   	nop

```

```c
// CGM_Manager::LoadGmDataFromDb @ 0x8299740

/* CGM_Manager::LoadGmDataFromDb(unsigned int) */

uint __thiscall CGM_Manager::LoadGmDataFromDb(CGM_Manager *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint unaff_EBX;
  bool bVar3;
  writeGuard<rwLock> local_38 [4];
  cMyTrace local_34 [16];
  cMyTrace local_24 [19];
  byte local_11;
  int local_10;
  
  local_11 = 0;
  local_10 = 0;
  uVar1 = NumberToString(param_1,0);
  MySQL::set_query(*(MySQL **)(this + 0x18),"seLect level from gm_manifest where m_id = %s",uVar1);
  local_11 = MySQL::exec(*(MySQL **)(this + 0x18),true);
  if (local_11 == '\x01') {
    local_10 = MySQL::get_n_rows(*(MySQL **)(this + 0x18));
    if (local_10 == 0) {
      unaff_EBX = 0;
    }
    else {
      writeGuard<rwLock>::writeGuard(local_38,(rwLock *)(this + 0x1c));
                    /* try { // try from 08299823 to 082998c6 has its CatchHandler @ 082998da */
      MySQL::fetch(*(MySQL **)(this + 0x18));
      iVar2 = std::
              map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
              ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                            *)this,&param_1);
      local_11 = MySQL::get_int(*(MySQL **)(this + 0x18),0,(int *)(iVar2 + 4));
      iVar2 = std::
              map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
              ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                            *)this,&param_1);
      bVar3 = *(int *)(iVar2 + 4) != 0;
      if (!bVar3) {
        uVar1 = NumberToString(param_1,0);
        cMyTrace::cMyTrace(local_24,
                           "bool CGM_Manager::LoadGmDataFromDb(memberIdentificationNumber_t)",0x15b4
                           ,0);
        cMyTrace::operator()
                  (local_24,"GM: %s exists in GM manifest but doen\'t have proper level. check DB",
                   uVar1);
        unaff_EBX = 0;
      }
      writeGuard<rwLock>::~writeGuard(local_38);
      if (bVar3) {
        unaff_EBX = (uint)local_11;
      }
    }
  }
  else {
    cMyTrace::cMyTrace(local_34,"bool CGM_Manager::LoadGmDataFromDb(memberIdentificationNumber_t)",
                       0x15a2,0);
    cMyTrace::operator()(local_34,"Failed to get GM list from DB.");
    unaff_EBX = 0;
  }
  return unaff_EBX;
}

```

---

## LoadGmListFromDb

```asm
// === 08299530 CGM_Manager::LoadGmListFromDb  [0x08299530-0x829973f] ===
 8299530:	55                   	push   %ebp
 8299531:	89 e5                	mov    %esp,%ebp
 8299533:	56                   	push   %esi
 8299534:	53                   	push   %ebx
 8299535:	83 ec 60             	sub    $0x60,%esp
 8299538:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 829953c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8299543:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 829954a:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8299551:	8b 45 08             	mov    0x8(%ebp),%eax
 8299554:	8b 40 18             	mov    0x18(%eax),%eax
 8299557:	c7 44 24 04 08 71 c1 	movl   $0x8c17108,0x4(%esp)
 829955e:	08 
 829955f:	89 04 24             	mov    %eax,(%esp)
 8299562:	e8 59 ac 15 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8299567:	8b 45 08             	mov    0x8(%ebp),%eax
 829956a:	8b 40 18             	mov    0x18(%eax),%eax
 829956d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8299574:	00 
 8299575:	89 04 24             	mov    %eax,(%esp)
 8299578:	e8 a9 ad 15 00       	call   83f4326 <_ZN5MySQL4execEb>
 829957d:	88 45 ef             	mov    %al,-0x11(%ebp)
 8299580:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8299584:	83 f0 01             	xor    $0x1,%eax
 8299587:	84 c0                	test   %al,%al
 8299589:	74 40                	je     82995cb <_ZN11CGM_Manager16LoadGmListFromDbEv+0x9b>
 829958b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8299592:	00 
 8299593:	c7 44 24 08 79 15 00 	movl   $0x1579,0x8(%esp)
 829959a:	00 
 829959b:	c7 44 24 04 80 b2 c1 	movl   $0x8c1b280,0x4(%esp)
 82995a2:	08 
 82995a3:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82995a6:	89 04 24             	mov    %eax,(%esp)
 82995a9:	e8 6a 61 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82995ae:	c7 44 24 04 2c 71 c1 	movl   $0x8c1712c,0x4(%esp)
 82995b5:	08 
 82995b6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82995b9:	89 04 24             	mov    %eax,(%esp)
 82995bc:	e8 c7 61 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82995c1:	bb 00 00 00 00       	mov    $0x0,%ebx
 82995c6:	e9 6c 01 00 00       	jmp    8299737 <_ZN11CGM_Manager16LoadGmListFromDbEv+0x207>
 82995cb:	8b 45 08             	mov    0x8(%ebp),%eax
 82995ce:	83 c0 1c             	add    $0x1c,%eax
 82995d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82995d5:	8d 45 b0             	lea    -0x50(%ebp),%eax
 82995d8:	89 04 24             	mov    %eax,(%esp)
 82995db:	e8 56 99 01 00       	call   82b2f36 <_ZN10writeGuardI6rwLockEC1EPS0_>
 82995e0:	8b 45 08             	mov    0x8(%ebp),%eax
 82995e3:	8b 40 18             	mov    0x18(%eax),%eax
 82995e6:	89 04 24             	mov    %eax,(%esp)
 82995e9:	e8 7e 8d e4 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 82995ee:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82995f1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82995f8:	e9 fd 00 00 00       	jmp    82996fa <_ZN11CGM_Manager16LoadGmListFromDbEv+0x1ca>
 82995fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8299600:	8b 40 18             	mov    0x18(%eax),%eax
 8299603:	89 04 24             	mov    %eax,(%esp)
 8299606:	e8 b1 ae 15 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 829960b:	8b 45 08             	mov    0x8(%ebp),%eax
 829960e:	8b 40 18             	mov    0x18(%eax),%eax
 8299611:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8299614:	89 54 24 08          	mov    %edx,0x8(%esp)
 8299618:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 829961f:	00 
 8299620:	89 04 24             	mov    %eax,(%esp)
 8299623:	e8 86 8c e4 ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 8299628:	88 45 ef             	mov    %al,-0x11(%ebp)
 829962b:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 829962f:	83 f0 01             	xor    $0x1,%eax
 8299632:	84 c0                	test   %al,%al
 8299634:	74 40                	je     8299676 <_ZN11CGM_Manager16LoadGmListFromDbEv+0x146>
 8299636:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 829963d:	00 
 829963e:	c7 44 24 08 88 15 00 	movl   $0x1588,0x8(%esp)
 8299645:	00 
 8299646:	c7 44 24 04 80 b2 c1 	movl   $0x8c1b280,0x4(%esp)
 829964d:	08 
 829964e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8299651:	89 04 24             	mov    %eax,(%esp)
 8299654:	e8 bf 60 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8299659:	c7 44 24 04 4c 71 c1 	movl   $0x8c1714c,0x4(%esp)
 8299660:	08 
 8299661:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8299664:	89 04 24             	mov    %eax,(%esp)
 8299667:	e8 1c 61 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 829966c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8299671:	e9 b6 00 00 00       	jmp    829972c <_ZN11CGM_Manager16LoadGmListFromDbEv+0x1fc>
 8299676:	8b 45 08             	mov    0x8(%ebp),%eax
 8299679:	8b 40 18             	mov    0x18(%eax),%eax
 829967c:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 829967f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8299683:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 829968a:	00 
 829968b:	89 04 24             	mov    %eax,(%esp)
 829968e:	e8 99 d2 e7 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8299693:	88 45 ef             	mov    %al,-0x11(%ebp)
 8299696:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 829969a:	83 f0 01             	xor    $0x1,%eax
 829969d:	84 c0                	test   %al,%al
 829969f:	74 3d                	je     82996de <_ZN11CGM_Manager16LoadGmListFromDbEv+0x1ae>
 82996a1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82996a8:	00 
 82996a9:	c7 44 24 08 8e 15 00 	movl   $0x158e,0x8(%esp)
 82996b0:	00 
 82996b1:	c7 44 24 04 80 b2 c1 	movl   $0x8c1b280,0x4(%esp)
 82996b8:	08 
 82996b9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82996bc:	89 04 24             	mov    %eax,(%esp)
 82996bf:	e8 54 60 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82996c4:	c7 44 24 04 70 71 c1 	movl   $0x8c17170,0x4(%esp)
 82996cb:	08 
 82996cc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82996cf:	89 04 24             	mov    %eax,(%esp)
 82996d2:	e8 b1 60 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82996d7:	bb 00 00 00 00       	mov    $0x0,%ebx
 82996dc:	eb 4e                	jmp    829972c <_ZN11CGM_Manager16LoadGmListFromDbEv+0x1fc>
 82996de:	8b 45 08             	mov    0x8(%ebp),%eax
 82996e1:	8d 55 b8             	lea    -0x48(%ebp),%edx
 82996e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 82996e8:	89 04 24             	mov    %eax,(%esp)
 82996eb:	e8 fa 96 01 00       	call   82b2dea <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEEixERS4_>
 82996f0:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 82996f3:	89 50 04             	mov    %edx,0x4(%eax)
 82996f6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82996fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82996fd:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8299700:	0f 9c c0             	setl   %al
 8299703:	84 c0                	test   %al,%al
 8299705:	0f 85 f2 fe ff ff    	jne    82995fd <_ZN11CGM_Manager16LoadGmListFromDbEv+0xcd>
 829970b:	0f b6 5d ef          	movzbl -0x11(%ebp),%ebx
 829970f:	eb 1b                	jmp    829972c <_ZN11CGM_Manager16LoadGmListFromDbEv+0x1fc>
 8299711:	89 d3                	mov    %edx,%ebx
 8299713:	89 c6                	mov    %eax,%esi
 8299715:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8299718:	89 04 24             	mov    %eax,(%esp)
 829971b:	e8 32 98 01 00       	call   82b2f52 <_ZN10writeGuardI6rwLockED1Ev>
 8299720:	89 f0                	mov    %esi,%eax
 8299722:	89 da                	mov    %ebx,%edx
 8299724:	89 04 24             	mov    %eax,(%esp)
 8299727:	e8 24 a0 84 00       	call   8ae3750 <_Unwind_Resume>
 829972c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 829972f:	89 04 24             	mov    %eax,(%esp)
 8299732:	e8 1b 98 01 00       	call   82b2f52 <_ZN10writeGuardI6rwLockED1Ev>
 8299737:	89 d8                	mov    %ebx,%eax
 8299739:	83 c4 60             	add    $0x60,%esp
 829973c:	5b                   	pop    %ebx
 829973d:	5e                   	pop    %esi
 829973e:	5d                   	pop    %ebp
 829973f:	c3                   	ret

```

```c
// CGM_Manager::LoadGmListFromDb @ 0x8299530

/* CGM_Manager::LoadGmListFromDb() */

char __thiscall CGM_Manager::LoadGmListFromDb(CGM_Manager *this)

{
  int iVar1;
  char cVar2;
  writeGuard<rwLock> local_54 [4];
  int local_50 [2];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [19];
  char local_15;
  int local_14;
  int local_10;
  
  local_15 = 0;
  local_14 = 0;
  local_50[1] = 0;
  local_50[0] = 0;
  MySQL::set_query(*(MySQL **)(this + 0x18),"seLect m_id, level from gm_manifest");
  local_15 = MySQL::exec(*(MySQL **)(this + 0x18),true);
  if (local_15 == '\x01') {
    writeGuard<rwLock>::writeGuard(local_54,(rwLock *)(this + 0x1c));
    local_14 = MySQL::get_n_rows(*(MySQL **)(this + 0x18));
    for (local_10 = 0; cVar2 = local_15, local_10 < local_14; local_10 = local_10 + 1) {
                    /* try { // try from 08299606 to 082996ef has its CatchHandler @ 08299711 */
      MySQL::fetch(*(MySQL **)(this + 0x18));
      local_15 = MySQL::get_int(*(MySQL **)(this + 0x18),0,(uint *)(local_50 + 1));
      if (local_15 != '\x01') {
        cMyTrace::cMyTrace(local_38,"bool CGM_Manager::LoadGmListFromDb()",0x1588,0);
        cMyTrace::operator()(local_38,"Failed to get GM\'s m_id from DB.");
        cVar2 = '\0';
        break;
      }
      local_15 = MySQL::get_int(*(MySQL **)(this + 0x18),1,local_50);
      if (local_15 != '\x01') {
        cMyTrace::cMyTrace(local_28,"bool CGM_Manager::LoadGmListFromDb()",0x158e,0);
        cMyTrace::operator()(local_28,"Failed to get GM\'s lv from DB.");
        cVar2 = '\0';
        break;
      }
      iVar1 = std::
              map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
              ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                            *)this,(uint *)(local_50 + 1));
      *(int *)(iVar1 + 4) = local_50[0];
    }
    writeGuard<rwLock>::~writeGuard(local_54);
  }
  else {
    cMyTrace::cMyTrace(local_48,"bool CGM_Manager::LoadGmListFromDb()",0x1579,0);
    cMyTrace::operator()(local_48,"Failed to get GM list from DB.");
    cVar2 = '\0';
  }
  return cVar2;
}

```

---

## SetGmLevel

```asm
// === 0829932a CGM_Manager::SetGmLevel  [0x0829932a-0x82993d7] ===
 829932a:	55                   	push   %ebp
 829932b:	89 e5                	mov    %esp,%ebp
 829932d:	56                   	push   %esi
 829932e:	53                   	push   %ebx
 829932f:	83 ec 20             	sub    $0x20,%esp
 8299332:	8b 45 08             	mov    0x8(%ebp),%eax
 8299335:	83 c0 1c             	add    $0x1c,%eax
 8299338:	89 44 24 04          	mov    %eax,0x4(%esp)
 829933c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 829933f:	89 04 24             	mov    %eax,(%esp)
 8299342:	e8 ef 9b 01 00       	call   82b2f36 <_ZN10writeGuardI6rwLockEC1EPS0_>
 8299347:	8b 55 08             	mov    0x8(%ebp),%edx
 829934a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 829934d:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 8299350:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8299354:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299358:	89 04 24             	mov    %eax,(%esp)
 829935b:	e8 0e 9a 01 00       	call   82b2d6e <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 8299360:	83 ec 04             	sub    $0x4,%esp
 8299363:	8b 55 08             	mov    0x8(%ebp),%edx
 8299366:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8299369:	89 54 24 04          	mov    %edx,0x4(%esp)
 829936d:	89 04 24             	mov    %eax,(%esp)
 8299370:	e8 25 9a 01 00       	call   82b2d9a <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 8299375:	83 ec 04             	sub    $0x4,%esp
 8299378:	8d 45 f4             	lea    -0xc(%ebp),%eax
 829937b:	89 44 24 04          	mov    %eax,0x4(%esp)
 829937f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8299382:	89 04 24             	mov    %eax,(%esp)
 8299385:	e8 de 9b 01 00       	call   82b2f68 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj9CGMRecordEEneERKS4_>
 829938a:	84 c0                	test   %al,%al
 829938c:	74 35                	je     82993c3 <_ZN11CGM_Manager10SetGmLevelEji+0x99>
 829938e:	8b 45 08             	mov    0x8(%ebp),%eax
 8299391:	8d 55 0c             	lea    0xc(%ebp),%edx
 8299394:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299398:	89 04 24             	mov    %eax,(%esp)
 829939b:	e8 4a 9a 01 00       	call   82b2dea <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEEixERS4_>
 82993a0:	8b 55 10             	mov    0x10(%ebp),%edx
 82993a3:	89 50 04             	mov    %edx,0x4(%eax)
 82993a6:	eb 1b                	jmp    82993c3 <_ZN11CGM_Manager10SetGmLevelEji+0x99>
 82993a8:	89 d3                	mov    %edx,%ebx
 82993aa:	89 c6                	mov    %eax,%esi
 82993ac:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82993af:	89 04 24             	mov    %eax,(%esp)
 82993b2:	e8 9b 9b 01 00       	call   82b2f52 <_ZN10writeGuardI6rwLockED1Ev>
 82993b7:	89 f0                	mov    %esi,%eax
 82993b9:	89 da                	mov    %ebx,%edx
 82993bb:	89 04 24             	mov    %eax,(%esp)
 82993be:	e8 8d a3 84 00       	call   8ae3750 <_Unwind_Resume>
 82993c3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82993c6:	89 04 24             	mov    %eax,(%esp)
 82993c9:	e8 84 9b 01 00       	call   82b2f52 <_ZN10writeGuardI6rwLockED1Ev>
 82993ce:	8d 65 f8             	lea    -0x8(%ebp),%esp
 82993d1:	83 c4 00             	add    $0x0,%esp
 82993d4:	5b                   	pop    %ebx
 82993d5:	5e                   	pop    %esi
 82993d6:	5d                   	pop    %ebp
 82993d7:	c3                   	ret

```

```c
// CGM_Manager::SetGmLevel @ 0x829932a

/* CGM_Manager::SetGmLevel(unsigned int, int) */

void __thiscall CGM_Manager::SetGmLevel(CGM_Manager *this,uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>> local_18 [4];
  writeGuard<rwLock> local_14 [4];
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  local_10 [4];
  
  writeGuard<rwLock>::writeGuard(local_14,(rwLock *)(this + 0x1c));
                    /* try { // try from 0829935b to 0829939f has its CatchHandler @ 082993a8 */
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::
            map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
            ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                          *)this,&param_1);
    *(int *)(iVar2 + 4) = param_2;
  }
  writeGuard<rwLock>::~writeGuard(local_14);
  return;
}

```

---

## TurnGmMode

```asm
// === 0829917c CGM_Manager::TurnGmMode  [0x0829917c-0x8299275] ===
 829917c:	55                   	push   %ebp
 829917d:	89 e5                	mov    %esp,%ebp
 829917f:	56                   	push   %esi
 8299180:	53                   	push   %ebx
 8299181:	83 ec 20             	sub    $0x20,%esp
 8299184:	8b 45 08             	mov    0x8(%ebp),%eax
 8299187:	83 c0 1c             	add    $0x1c,%eax
 829918a:	89 44 24 04          	mov    %eax,0x4(%esp)
 829918e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8299191:	89 04 24             	mov    %eax,(%esp)
 8299194:	e8 a3 9b 01 00       	call   82b2d3c <_ZN9readGuardI6rwLockEC1EPS0_>
 8299199:	8b 55 08             	mov    0x8(%ebp),%edx
 829919c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 829919f:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 82991a2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82991a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82991aa:	89 04 24             	mov    %eax,(%esp)
 82991ad:	e8 bc 9b 01 00       	call   82b2d6e <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 82991b2:	83 ec 04             	sub    $0x4,%esp
 82991b5:	8b 55 08             	mov    0x8(%ebp),%edx
 82991b8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82991bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 82991bf:	89 04 24             	mov    %eax,(%esp)
 82991c2:	e8 d3 9b 01 00       	call   82b2d9a <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 82991c7:	83 ec 04             	sub    $0x4,%esp
 82991ca:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82991cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82991d1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82991d4:	89 04 24             	mov    %eax,(%esp)
 82991d7:	e8 e4 9b 01 00       	call   82b2dc0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj9CGMRecordEEeqERKS4_>
 82991dc:	84 c0                	test   %al,%al
 82991de:	74 07                	je     82991e7 <_ZN11CGM_Manager10TurnGmModeEj+0x6b>
 82991e0:	bb 00 00 00 00       	mov    $0x0,%ebx
 82991e5:	eb 77                	jmp    829925e <_ZN11CGM_Manager10TurnGmModeEj+0xe2>
 82991e7:	8b 45 08             	mov    0x8(%ebp),%eax
 82991ea:	8d 55 0c             	lea    0xc(%ebp),%edx
 82991ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 82991f1:	89 04 24             	mov    %eax,(%esp)
 82991f4:	e8 f1 9b 01 00       	call   82b2dea <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEEixERS4_>
 82991f9:	0f b6 00             	movzbl (%eax),%eax
 82991fc:	84 c0                	test   %al,%al
 82991fe:	74 17                	je     8299217 <_ZN11CGM_Manager10TurnGmModeEj+0x9b>
 8299200:	8b 45 08             	mov    0x8(%ebp),%eax
 8299203:	8d 55 0c             	lea    0xc(%ebp),%edx
 8299206:	89 54 24 04          	mov    %edx,0x4(%esp)
 829920a:	89 04 24             	mov    %eax,(%esp)
 829920d:	e8 d8 9b 01 00       	call   82b2dea <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEEixERS4_>
 8299212:	c6 00 00             	movb   $0x0,(%eax)
 8299215:	eb 15                	jmp    829922c <_ZN11CGM_Manager10TurnGmModeEj+0xb0>
 8299217:	8b 45 08             	mov    0x8(%ebp),%eax
 829921a:	8d 55 0c             	lea    0xc(%ebp),%edx
 829921d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299221:	89 04 24             	mov    %eax,(%esp)
 8299224:	e8 c1 9b 01 00       	call   82b2dea <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEEixERS4_>
 8299229:	c6 00 01             	movb   $0x1,(%eax)
 829922c:	8b 45 08             	mov    0x8(%ebp),%eax
 829922f:	8d 55 0c             	lea    0xc(%ebp),%edx
 8299232:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299236:	89 04 24             	mov    %eax,(%esp)
 8299239:	e8 ac 9b 01 00       	call   82b2dea <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEEixERS4_>
 829923e:	0f b6 18             	movzbl (%eax),%ebx
 8299241:	eb 1b                	jmp    829925e <_ZN11CGM_Manager10TurnGmModeEj+0xe2>
 8299243:	89 d3                	mov    %edx,%ebx
 8299245:	89 c6                	mov    %eax,%esi
 8299247:	8d 45 f0             	lea    -0x10(%ebp),%eax
 829924a:	89 04 24             	mov    %eax,(%esp)
 829924d:	e8 06 9b 01 00       	call   82b2d58 <_ZN9readGuardI6rwLockED1Ev>
 8299252:	89 f0                	mov    %esi,%eax
 8299254:	89 da                	mov    %ebx,%edx
 8299256:	89 04 24             	mov    %eax,(%esp)
 8299259:	e8 f2 a4 84 00       	call   8ae3750 <_Unwind_Resume>
 829925e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8299261:	89 04 24             	mov    %eax,(%esp)
 8299264:	e8 ef 9a 01 00       	call   82b2d58 <_ZN9readGuardI6rwLockED1Ev>
 8299269:	89 d8                	mov    %ebx,%eax
 829926b:	8d 65 f8             	lea    -0x8(%ebp),%esp
 829926e:	83 c4 00             	add    $0x0,%esp
 8299271:	5b                   	pop    %ebx
 8299272:	5e                   	pop    %esi
 8299273:	5d                   	pop    %ebp
 8299274:	c3                   	ret
 8299275:	90                   	nop

```

```c
// CGM_Manager::TurnGmMode @ 0x829917c

/* CGM_Manager::TurnGmMode(unsigned int) */

undefined1 CGM_Manager::TurnGmMode(uint param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>> local_18 [4];
  readGuard<rwLock> local_14 [4];
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  local_10 [4];
  
  readGuard<rwLock>::readGuard(local_14,(rwLock *)(param_1 + 0x1c));
                    /* try { // try from 082991ad to 0829923d has its CatchHandler @ 08299243 */
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGMRecord>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    pcVar2 = (char *)std::
                     map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                     ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                                   *)param_1,(uint *)&stack0x00000008);
    if (*pcVar2 == '\0') {
      puVar3 = (undefined1 *)
               std::
               map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
               ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                             *)param_1,(uint *)&stack0x00000008);
      *puVar3 = 1;
    }
    else {
      puVar3 = (undefined1 *)
               std::
               map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
               ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                             *)param_1,(uint *)&stack0x00000008);
      *puVar3 = 0;
    }
    puVar3 = (undefined1 *)
             std::
             map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
             ::operator[]((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
                           *)param_1,(uint *)&stack0x00000008);
    uVar4 = *puVar3;
  }
  else {
    uVar4 = 0;
  }
  readGuard<rwLock>::~readGuard(local_14);
  return uVar4;
}

```

---

## ~CGM_Manager

```asm
// === 0829915a CGM_Manager::~CGM_Manager  [0x0829915a-0x829917b] ===
 829915a:	55                   	push   %ebp
 829915b:	89 e5                	mov    %esp,%ebp
 829915d:	83 ec 18             	sub    $0x18,%esp
 8299160:	8b 45 08             	mov    0x8(%ebp),%eax
 8299163:	83 c0 1c             	add    $0x1c,%eax
 8299166:	89 04 24             	mov    %eax,(%esp)
 8299169:	e8 f6 aa 00 00       	call   82a3c64 <_ZN6rwLockD1Ev>
 829916e:	8b 45 08             	mov    0x8(%ebp),%eax
 8299171:	89 04 24             	mov    %eax,(%esp)
 8299174:	e8 ad 16 01 00       	call   82aa826 <_ZNSt3mapIj9CGMRecordSt4lessIjESaISt4pairIKjS0_EEED1Ev>
 8299179:	c9                   	leave
 829917a:	c3                   	ret
 829917b:	90                   	nop

```

```c
// CGM_Manager::~CGM_Manager @ 0x829915a

/* CGM_Manager::~CGM_Manager() */

void __thiscall CGM_Manager::~CGM_Manager(CGM_Manager *this)

{
  rwLock::~rwLock((rwLock *)(this + 0x1c));
  std::
  map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
  ::~map((map<unsigned_int,CGMRecord,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGMRecord>>>
          *)this);
  return;
}

```

