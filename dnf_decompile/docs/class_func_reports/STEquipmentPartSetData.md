# STEquipmentPartSetData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## ~STEquipmentPartSetData

```asm
// === 08907348 STEquipmentPartSetData::~STEquipmentPartSetData  [0x08907348-0x89073d8] ===
 8907348:	55                   	push   %ebp
 8907349:	89 e5                	mov    %esp,%ebp
 890734b:	56                   	push   %esi
 890734c:	53                   	push   %ebx
 890734d:	83 ec 10             	sub    $0x10,%esp
 8907350:	8b 45 08             	mov    0x8(%ebp),%eax
 8907353:	8b 40 08             	mov    0x8(%eax),%eax
 8907356:	85 c0                	test   %eax,%eax
 8907358:	74 1a                	je     8907374 <_ZN22STEquipmentPartSetDataD1Ev+0x2c>
 890735a:	8b 45 08             	mov    0x8(%ebp),%eax
 890735d:	8b 58 08             	mov    0x8(%eax),%ebx
 8907360:	85 db                	test   %ebx,%ebx
 8907362:	74 10                	je     8907374 <_ZN22STEquipmentPartSetDataD1Ev+0x2c>
 8907364:	89 1c 24             	mov    %ebx,(%esp)
 8907367:	e8 2c 6f 08 00       	call   898e298 <_ZN17STEquipmentScriptD1Ev>
 890736c:	89 1c 24             	mov    %ebx,(%esp)
 890736f:	e8 7c d1 e1 ff       	call   87244f0 <_ZdlPv>
 8907374:	8b 45 08             	mov    0x8(%ebp),%eax
 8907377:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 890737e:	8b 45 08             	mov    0x8(%ebp),%eax
 8907381:	83 c0 0c             	add    $0xc,%eax
 8907384:	89 04 24             	mov    %eax,(%esp)
 8907387:	e8 9a 5e 01 00       	call   891d226 <_ZNSt6vectorI23STEquipmentPartSetPieceSaIS0_EED1Ev>
 890738c:	eb 36                	jmp    89073c4 <_ZN22STEquipmentPartSetDataD1Ev+0x7c>
 890738e:	89 d3                	mov    %edx,%ebx
 8907390:	89 c6                	mov    %eax,%esi
 8907392:	8b 45 08             	mov    0x8(%ebp),%eax
 8907395:	83 c0 0c             	add    $0xc,%eax
 8907398:	89 04 24             	mov    %eax,(%esp)
 890739b:	e8 86 5e 01 00       	call   891d226 <_ZNSt6vectorI23STEquipmentPartSetPieceSaIS0_EED1Ev>
 89073a0:	89 f0                	mov    %esi,%eax
 89073a2:	89 da                	mov    %ebx,%edx
 89073a4:	eb 00                	jmp    89073a6 <_ZN22STEquipmentPartSetDataD1Ev+0x5e>
 89073a6:	89 d3                	mov    %edx,%ebx
 89073a8:	89 c6                	mov    %eax,%esi
 89073aa:	8b 45 08             	mov    0x8(%ebp),%eax
 89073ad:	83 c0 04             	add    $0x4,%eax
 89073b0:	89 04 24             	mov    %eax,(%esp)
 89073b3:	e8 28 08 e0 ff       	call   8707be0 <_ZNSsD1Ev>
 89073b8:	89 f0                	mov    %esi,%eax
 89073ba:	89 da                	mov    %ebx,%edx
 89073bc:	89 04 24             	mov    %eax,(%esp)
 89073bf:	e8 8c c3 1d 00       	call   8ae3750 <_Unwind_Resume>
 89073c4:	8b 45 08             	mov    0x8(%ebp),%eax
 89073c7:	83 c0 04             	add    $0x4,%eax
 89073ca:	89 04 24             	mov    %eax,(%esp)
 89073cd:	e8 0e 08 e0 ff       	call   8707be0 <_ZNSsD1Ev>
 89073d2:	83 c4 10             	add    $0x10,%esp
 89073d5:	5b                   	pop    %ebx
 89073d6:	5e                   	pop    %esi
 89073d7:	5d                   	pop    %ebp
 89073d8:	c3                   	ret

```

```c
// STEquipmentPartSetData::~STEquipmentPartSetData @ 0x8907348

/* STEquipmentPartSetData::~STEquipmentPartSetData() */

void __thiscall STEquipmentPartSetData::~STEquipmentPartSetData(STEquipmentPartSetData *this)

{
  STEquipmentScript *this_00;
  
  if ((*(int *)(this + 8) != 0) &&
     (this_00 = *(STEquipmentScript **)(this + 8), this_00 != (STEquipmentScript *)0x0)) {
                    /* try { // try from 08907367 to 0890736b has its CatchHandler @ 0890738e */
    STEquipmentScript::~STEquipmentScript(this_00);
    operator_delete(this_00);
  }
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 08907387 to 0890738b has its CatchHandler @ 089073a6 */
  std::vector<STEquipmentPartSetPiece,std::allocator<STEquipmentPartSetPiece>>::~vector
            ((vector<STEquipmentPartSetPiece,std::allocator<STEquipmentPartSetPiece>> *)(this + 0xc)
            );
  std::string::~string((string *)(this + 4));
  return;
}

```

