# GlobalScriptTutorial

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## GlobalScriptTutorial

```asm
// === 08ab8d8a GlobalScriptTutorial::GlobalScriptTutorial  [0x08ab8d8a-0x8ab8e09] ===
 8ab8d8a:	55                   	push   %ebp
 8ab8d8b:	89 e5                	mov    %esp,%ebp
 8ab8d8d:	57                   	push   %edi
 8ab8d8e:	56                   	push   %esi
 8ab8d8f:	53                   	push   %ebx
 8ab8d90:	83 ec 2c             	sub    $0x2c,%esp
 8ab8d93:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ab8d96:	89 df                	mov    %ebx,%edi
 8ab8d98:	be 0a 00 00 00       	mov    $0xa,%esi
 8ab8d9d:	eb 11                	jmp    8ab8db0 <_ZN20GlobalScriptTutorialC1Ev+0x26>
 8ab8d9f:	89 3c 24             	mov    %edi,(%esp)
 8ab8da2:	e8 a5 f0 ff ff       	call   8ab7e4c <_ZN12TutorialDataC1Ev>
 8ab8da7:	81 c7 48 01 00 00    	add    $0x148,%edi
 8ab8dad:	83 ee 01             	sub    $0x1,%esi
 8ab8db0:	83 fe ff             	cmp    $0xffffffff,%esi
 8ab8db3:	0f 95 c0             	setne  %al
 8ab8db6:	84 c0                	test   %al,%al
 8ab8db8:	75 e5                	jne    8ab8d9f <_ZN20GlobalScriptTutorialC1Ev+0x15>
 8ab8dba:	eb 3a                	jmp    8ab8df6 <_ZN20GlobalScriptTutorialC1Ev+0x6c>
 8ab8dbc:	89 d7                	mov    %edx,%edi
 8ab8dbe:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ab8dc1:	85 db                	test   %ebx,%ebx
 8ab8dc3:	74 24                	je     8ab8de9 <_ZN20GlobalScriptTutorialC1Ev+0x5f>
 8ab8dc5:	b8 0a 00 00 00       	mov    $0xa,%eax
 8ab8dca:	29 f0                	sub    %esi,%eax
 8ab8dcc:	69 c0 48 01 00 00    	imul   $0x148,%eax,%eax
 8ab8dd2:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 8ab8dd5:	39 de                	cmp    %ebx,%esi
 8ab8dd7:	74 10                	je     8ab8de9 <_ZN20GlobalScriptTutorialC1Ev+0x5f>
 8ab8dd9:	81 ee 48 01 00 00    	sub    $0x148,%esi
 8ab8ddf:	89 34 24             	mov    %esi,(%esp)
 8ab8de2:	e8 07 f3 ff ff       	call   8ab80ee <_ZN12TutorialDataD1Ev>
 8ab8de7:	eb ec                	jmp    8ab8dd5 <_ZN20GlobalScriptTutorialC1Ev+0x4b>
 8ab8de9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ab8dec:	89 fa                	mov    %edi,%edx
 8ab8dee:	89 04 24             	mov    %eax,(%esp)
 8ab8df1:	e8 5a a9 02 00       	call   8ae3750 <_Unwind_Resume>
 8ab8df6:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8df9:	89 04 24             	mov    %eax,(%esp)
 8ab8dfc:	e8 17 09 00 00       	call   8ab9718 <_ZN20GlobalScriptTutorial11clearScriptEv>
 8ab8e01:	83 c4 2c             	add    $0x2c,%esp
 8ab8e04:	5b                   	pop    %ebx
 8ab8e05:	5e                   	pop    %esi
 8ab8e06:	5f                   	pop    %edi
 8ab8e07:	5d                   	pop    %ebp
 8ab8e08:	c3                   	ret
 8ab8e09:	90                   	nop

```

```c
// GlobalScriptTutorial::GlobalScriptTutorial @ 0x8ab8d8a

/* GlobalScriptTutorial::GlobalScriptTutorial() */

void __thiscall GlobalScriptTutorial::GlobalScriptTutorial(GlobalScriptTutorial *this)

{
  int iVar1;
  
  for (iVar1 = 10; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08ab8da2 to 08ab8da6 has its CatchHandler @ 08ab8dbc */
    TutorialData::TutorialData((TutorialData *)this);
    this = this + 0x148;
  }
  clearScript();
  return;
}

```

---

## IsGlobalTutorialDungeon

```asm
// === 08ab976a GlobalScriptTutorial::IsGlobalTutorialDungeon  [0x08ab976a-0x8ab9784] ===
 8ab976a:	55                   	push   %ebp
 8ab976b:	89 e5                	mov    %esp,%ebp
 8ab976d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab9770:	3d b2 0d 00 00       	cmp    $0xdb2,%eax
 8ab9775:	75 07                	jne    8ab977e <_ZN20GlobalScriptTutorial23IsGlobalTutorialDungeonEj+0x14>
 8ab9777:	b8 01 00 00 00       	mov    $0x1,%eax
 8ab977c:	eb 05                	jmp    8ab9783 <_ZN20GlobalScriptTutorial23IsGlobalTutorialDungeonEj+0x19>
 8ab977e:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab9783:	5d                   	pop    %ebp
 8ab9784:	c3                   	ret

```

```c
// GlobalScriptTutorial::IsGlobalTutorialDungeon @ 0x8ab976a

/* GlobalScriptTutorial::IsGlobalTutorialDungeon(unsigned int) */

bool GlobalScriptTutorial::IsGlobalTutorialDungeon(uint param_1)

{
  return param_1 == 0xdb2;
}

```

---

## LoadAvatarTag

```asm
// === 08ab930a GlobalScriptTutorial::LoadAvatarTag  [0x08ab930a-0x8ab9379] ===
 8ab930a:	55                   	push   %ebp
 8ab930b:	89 e5                	mov    %esp,%ebp
 8ab930d:	83 ec 28             	sub    $0x28,%esp
 8ab9310:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab9313:	8b 00                	mov    (%eax),%eax
 8ab9315:	83 f8 0b             	cmp    $0xb,%eax
 8ab9318:	74 5a                	je     8ab9374 <_ZN20GlobalScriptTutorial13LoadAvatarTagER17ENUM_CHARACTERJOB+0x6a>
 8ab931a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab931d:	89 04 24             	mov    %eax,(%esp)
 8ab9320:	e8 ff 30 e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab9325:	83 f0 01             	xor    $0x1,%eax
 8ab9328:	84 c0                	test   %al,%al
 8ab932a:	75 12                	jne    8ab933e <_ZN20GlobalScriptTutorial13LoadAvatarTagER17ENUM_CHARACTERJOB+0x34>
 8ab932c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab932f:	89 04 24             	mov    %eax,(%esp)
 8ab9332:	e8 ed 30 e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab9337:	83 f0 01             	xor    $0x1,%eax
 8ab933a:	84 c0                	test   %al,%al
 8ab933c:	74 07                	je     8ab9345 <_ZN20GlobalScriptTutorial13LoadAvatarTagER17ENUM_CHARACTERJOB+0x3b>
 8ab933e:	b8 01 00 00 00       	mov    $0x1,%eax
 8ab9343:	eb 05                	jmp    8ab934a <_ZN20GlobalScriptTutorial13LoadAvatarTagER17ENUM_CHARACTERJOB+0x40>
 8ab9345:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab934a:	84 c0                	test   %al,%al
 8ab934c:	75 29                	jne    8ab9377 <_ZN20GlobalScriptTutorial13LoadAvatarTagER17ENUM_CHARACTERJOB+0x6d>
 8ab934e:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8ab9351:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8ab9354:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab9357:	8b 00                	mov    (%eax),%eax
 8ab9359:	69 c0 48 01 00 00    	imul   $0x148,%eax,%eax
 8ab935f:	03 45 08             	add    0x8(%ebp),%eax
 8ab9362:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ab9366:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab936a:	89 04 24             	mov    %eax,(%esp)
 8ab936d:	e8 18 f3 ff ff       	call   8ab868a <_ZN12TutorialData14addAvatarIndexEii>
 8ab9372:	eb a6                	jmp    8ab931a <_ZN20GlobalScriptTutorial13LoadAvatarTagER17ENUM_CHARACTERJOB+0x10>
 8ab9374:	90                   	nop
 8ab9375:	eb 01                	jmp    8ab9378 <_ZN20GlobalScriptTutorial13LoadAvatarTagER17ENUM_CHARACTERJOB+0x6e>
 8ab9377:	90                   	nop
 8ab9378:	c9                   	leave
 8ab9379:	c3                   	ret

```

```c
// GlobalScriptTutorial::LoadAvatarTag @ 0x8ab930a

/* GlobalScriptTutorial::LoadAvatarTag(ENUM_CHARACTERJOB&) */

void __thiscall
GlobalScriptTutorial::LoadAvatarTag(GlobalScriptTutorial *this,ENUM_CHARACTERJOB *param_1)

{
  bool bVar1;
  char cVar2;
  int local_14;
  int local_10 [3];
  
  if (*(int *)param_1 != 0xb) {
    while( true ) {
      cVar2 = ScanInt(local_10);
      if ((cVar2 == '\x01') && (cVar2 = ScanInt(&local_14), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) break;
      TutorialData::addAvatarIndex((int)(this + *(int *)param_1 * 0x148),local_10[0]);
    }
  }
  return;
}

```

---

## LoadDialogTag

```asm
// === 08ab9226 GlobalScriptTutorial::LoadDialogTag  [0x08ab9226-0x8ab9309] ===
 8ab9226:	55                   	push   %ebp
 8ab9227:	89 e5                	mov    %esp,%ebp
 8ab9229:	56                   	push   %esi
 8ab922a:	53                   	push   %ebx
 8ab922b:	83 ec 20             	sub    $0x20,%esp
 8ab922e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab9231:	8b 00                	mov    (%eax),%eax
 8ab9233:	83 f8 0b             	cmp    $0xb,%eax
 8ab9236:	0f 84 c5 00 00 00    	je     8ab9301 <_ZN20GlobalScriptTutorial13LoadDialogTagER17ENUM_CHARACTERJOB+0xdb>
 8ab923c:	eb 01                	jmp    8ab923f <_ZN20GlobalScriptTutorial13LoadDialogTagER17ENUM_CHARACTERJOB+0x19>
 8ab923e:	90                   	nop
 8ab923f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab9242:	89 04 24             	mov    %eax,(%esp)
 8ab9245:	e8 86 d3 c4 ff       	call   87065d0 <_ZNSsC1Ev>
 8ab924a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab924d:	89 04 24             	mov    %eax,(%esp)
 8ab9250:	e8 cf 31 e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab9255:	83 f0 01             	xor    $0x1,%eax
 8ab9258:	84 c0                	test   %al,%al
 8ab925a:	75 24                	jne    8ab9280 <_ZN20GlobalScriptTutorial13LoadDialogTagER17ENUM_CHARACTERJOB+0x5a>
 8ab925c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab925f:	89 04 24             	mov    %eax,(%esp)
 8ab9262:	e8 bd 31 e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab9267:	83 f0 01             	xor    $0x1,%eax
 8ab926a:	84 c0                	test   %al,%al
 8ab926c:	75 12                	jne    8ab9280 <_ZN20GlobalScriptTutorial13LoadDialogTagER17ENUM_CHARACTERJOB+0x5a>
 8ab926e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab9271:	89 04 24             	mov    %eax,(%esp)
 8ab9274:	e8 29 35 e0 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8ab9279:	83 f0 01             	xor    $0x1,%eax
 8ab927c:	84 c0                	test   %al,%al
 8ab927e:	74 07                	je     8ab9287 <_ZN20GlobalScriptTutorial13LoadDialogTagER17ENUM_CHARACTERJOB+0x61>
 8ab9280:	b8 01 00 00 00       	mov    $0x1,%eax
 8ab9285:	eb 05                	jmp    8ab928c <_ZN20GlobalScriptTutorial13LoadDialogTagER17ENUM_CHARACTERJOB+0x66>
 8ab9287:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab928c:	84 c0                	test   %al,%al
 8ab928e:	74 07                	je     8ab9297 <_ZN20GlobalScriptTutorial13LoadDialogTagER17ENUM_CHARACTERJOB+0x71>
 8ab9290:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ab9295:	eb 55                	jmp    8ab92ec <_ZN20GlobalScriptTutorial13LoadDialogTagER17ENUM_CHARACTERJOB+0xc6>
 8ab9297:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab929a:	89 04 24             	mov    %eax,(%esp)
 8ab929d:	e8 4e d2 c4 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ab92a2:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8ab92a5:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8ab92a8:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ab92ab:	8b 12                	mov    (%edx),%edx
 8ab92ad:	69 d2 48 01 00 00    	imul   $0x148,%edx,%edx
 8ab92b3:	03 55 08             	add    0x8(%ebp),%edx
 8ab92b6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ab92ba:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ab92be:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab92c2:	89 14 24             	mov    %edx,(%esp)
 8ab92c5:	e8 12 f0 ff ff       	call   8ab82dc <_ZN12TutorialData13addDialogDataEiiPKc>
 8ab92ca:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ab92cf:	eb 1b                	jmp    8ab92ec <_ZN20GlobalScriptTutorial13LoadDialogTagER17ENUM_CHARACTERJOB+0xc6>
 8ab92d1:	89 d3                	mov    %edx,%ebx
 8ab92d3:	89 c6                	mov    %eax,%esi
 8ab92d5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab92d8:	89 04 24             	mov    %eax,(%esp)
 8ab92db:	e8 00 e9 c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab92e0:	89 f0                	mov    %esi,%eax
 8ab92e2:	89 da                	mov    %ebx,%edx
 8ab92e4:	89 04 24             	mov    %eax,(%esp)
 8ab92e7:	e8 64 a4 02 00       	call   8ae3750 <_Unwind_Resume>
 8ab92ec:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab92ef:	89 04 24             	mov    %eax,(%esp)
 8ab92f2:	e8 e9 e8 c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab92f7:	85 db                	test   %ebx,%ebx
 8ab92f9:	0f 85 3f ff ff ff    	jne    8ab923e <_ZN20GlobalScriptTutorial13LoadDialogTagER17ENUM_CHARACTERJOB+0x18>
 8ab92ff:	eb 01                	jmp    8ab9302 <_ZN20GlobalScriptTutorial13LoadDialogTagER17ENUM_CHARACTERJOB+0xdc>
 8ab9301:	90                   	nop
 8ab9302:	83 c4 20             	add    $0x20,%esp
 8ab9305:	5b                   	pop    %ebx
 8ab9306:	5e                   	pop    %esi
 8ab9307:	5d                   	pop    %ebp
 8ab9308:	c3                   	ret
 8ab9309:	90                   	nop

```

```c
// GlobalScriptTutorial::LoadDialogTag @ 0x8ab9226

/* GlobalScriptTutorial::LoadDialogTag(ENUM_CHARACTERJOB&) */

void __thiscall
GlobalScriptTutorial::LoadDialogTag(GlobalScriptTutorial *this,ENUM_CHARACTERJOB *param_1)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  string local_18 [4];
  int local_14;
  int local_10;
  
  if (*(int *)param_1 != 0xb) {
    do {
      std::string::string(local_18);
                    /* try { // try from 08ab9250 to 08ab92c9 has its CatchHandler @ 08ab92d1 */
      cVar2 = ScanInt(&local_10);
      if (((cVar2 == '\x01') && (cVar2 = ScanInt(&local_14), cVar2 == '\x01')) &&
         (cVar2 = ScanStr(local_18), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        pcVar3 = (char *)std::string::c_str(local_18);
        TutorialData::addDialogData
                  ((TutorialData *)(this + *(int *)param_1 * 0x148),local_10,local_14,pcVar3);
      }
      std::string::~string(local_18);
    } while (!bVar1);
  }
  return;
}

```

---

## LoadDungeonIndex

```asm
// === 08ab9562 GlobalScriptTutorial::LoadDungeonIndex  [0x08ab9562-0x8ab95ab] ===
 8ab9562:	55                   	push   %ebp
 8ab9563:	89 e5                	mov    %esp,%ebp
 8ab9565:	83 ec 28             	sub    $0x28,%esp
 8ab9568:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab956b:	8b 00                	mov    (%eax),%eax
 8ab956d:	83 f8 0b             	cmp    $0xb,%eax
 8ab9570:	74 33                	je     8ab95a5 <_ZN20GlobalScriptTutorial16LoadDungeonIndexER17ENUM_CHARACTERJOB+0x43>
 8ab9572:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab9575:	89 04 24             	mov    %eax,(%esp)
 8ab9578:	e8 a7 2e e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab957d:	83 f0 01             	xor    $0x1,%eax
 8ab9580:	84 c0                	test   %al,%al
 8ab9582:	75 24                	jne    8ab95a8 <_ZN20GlobalScriptTutorial16LoadDungeonIndexER17ENUM_CHARACTERJOB+0x46>
 8ab9584:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ab9587:	89 c2                	mov    %eax,%edx
 8ab9589:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab958c:	8b 00                	mov    (%eax),%eax
 8ab958e:	69 c0 48 01 00 00    	imul   $0x148,%eax,%eax
 8ab9594:	03 45 08             	add    0x8(%ebp),%eax
 8ab9597:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab959b:	89 04 24             	mov    %eax,(%esp)
 8ab959e:	e8 21 ed ff ff       	call   8ab82c4 <_ZN12TutorialData15setDungeonIndexEj>
 8ab95a3:	eb cd                	jmp    8ab9572 <_ZN20GlobalScriptTutorial16LoadDungeonIndexER17ENUM_CHARACTERJOB+0x10>
 8ab95a5:	90                   	nop
 8ab95a6:	eb 01                	jmp    8ab95a9 <_ZN20GlobalScriptTutorial16LoadDungeonIndexER17ENUM_CHARACTERJOB+0x47>
 8ab95a8:	90                   	nop
 8ab95a9:	c9                   	leave
 8ab95aa:	c3                   	ret
 8ab95ab:	90                   	nop

```

```c
// GlobalScriptTutorial::LoadDungeonIndex @ 0x8ab9562

/* GlobalScriptTutorial::LoadDungeonIndex(ENUM_CHARACTERJOB&) */

void __thiscall
GlobalScriptTutorial::LoadDungeonIndex(GlobalScriptTutorial *this,ENUM_CHARACTERJOB *param_1)

{
  char cVar1;
  uint local_10 [3];
  
  if (*(int *)param_1 != 0xb) {
    while (cVar1 = ScanInt((int *)local_10), cVar1 == '\x01') {
      TutorialData::setDungeonIndex((TutorialData *)(this + *(int *)param_1 * 0x148),local_10[0]);
    }
  }
  return;
}

```

---

## LoadEquipmentTag

```asm
// === 08ab937a GlobalScriptTutorial::LoadEquipmentTag  [0x08ab937a-0x8ab9407] ===
 8ab937a:	55                   	push   %ebp
 8ab937b:	89 e5                	mov    %esp,%ebp
 8ab937d:	53                   	push   %ebx
 8ab937e:	83 ec 24             	sub    $0x24,%esp
 8ab9381:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab9384:	8b 00                	mov    (%eax),%eax
 8ab9386:	83 f8 0b             	cmp    $0xb,%eax
 8ab9389:	74 73                	je     8ab93fe <_ZN20GlobalScriptTutorial16LoadEquipmentTagER17ENUM_CHARACTERJOB+0x84>
 8ab938b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab938e:	89 04 24             	mov    %eax,(%esp)
 8ab9391:	e8 8e 30 e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab9396:	83 f0 01             	xor    $0x1,%eax
 8ab9399:	84 c0                	test   %al,%al
 8ab939b:	75 24                	jne    8ab93c1 <_ZN20GlobalScriptTutorial16LoadEquipmentTagER17ENUM_CHARACTERJOB+0x47>
 8ab939d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab93a0:	89 04 24             	mov    %eax,(%esp)
 8ab93a3:	e8 7c 30 e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab93a8:	83 f0 01             	xor    $0x1,%eax
 8ab93ab:	84 c0                	test   %al,%al
 8ab93ad:	75 12                	jne    8ab93c1 <_ZN20GlobalScriptTutorial16LoadEquipmentTagER17ENUM_CHARACTERJOB+0x47>
 8ab93af:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab93b2:	89 04 24             	mov    %eax,(%esp)
 8ab93b5:	e8 6a 30 e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab93ba:	83 f0 01             	xor    $0x1,%eax
 8ab93bd:	84 c0                	test   %al,%al
 8ab93bf:	74 07                	je     8ab93c8 <_ZN20GlobalScriptTutorial16LoadEquipmentTagER17ENUM_CHARACTERJOB+0x4e>
 8ab93c1:	b8 01 00 00 00       	mov    $0x1,%eax
 8ab93c6:	eb 05                	jmp    8ab93cd <_ZN20GlobalScriptTutorial16LoadEquipmentTagER17ENUM_CHARACTERJOB+0x53>
 8ab93c8:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab93cd:	84 c0                	test   %al,%al
 8ab93cf:	75 30                	jne    8ab9401 <_ZN20GlobalScriptTutorial16LoadEquipmentTagER17ENUM_CHARACTERJOB+0x87>
 8ab93d1:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ab93d4:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8ab93d7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8ab93da:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab93dd:	8b 00                	mov    (%eax),%eax
 8ab93df:	69 c0 48 01 00 00    	imul   $0x148,%eax,%eax
 8ab93e5:	03 45 08             	add    0x8(%ebp),%eax
 8ab93e8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8ab93ec:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ab93f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab93f4:	89 04 24             	mov    %eax,(%esp)
 8ab93f7:	e8 e4 f2 ff ff       	call   8ab86e0 <_ZN12TutorialData17addEquipmentIndexEiii>
 8ab93fc:	eb 8d                	jmp    8ab938b <_ZN20GlobalScriptTutorial16LoadEquipmentTagER17ENUM_CHARACTERJOB+0x11>
 8ab93fe:	90                   	nop
 8ab93ff:	eb 01                	jmp    8ab9402 <_ZN20GlobalScriptTutorial16LoadEquipmentTagER17ENUM_CHARACTERJOB+0x88>
 8ab9401:	90                   	nop
 8ab9402:	83 c4 24             	add    $0x24,%esp
 8ab9405:	5b                   	pop    %ebx
 8ab9406:	5d                   	pop    %ebp
 8ab9407:	c3                   	ret

```

```c
// GlobalScriptTutorial::LoadEquipmentTag @ 0x8ab937a

/* GlobalScriptTutorial::LoadEquipmentTag(ENUM_CHARACTERJOB&) */

void __thiscall
GlobalScriptTutorial::LoadEquipmentTag(GlobalScriptTutorial *this,ENUM_CHARACTERJOB *param_1)

{
  bool bVar1;
  char cVar2;
  int local_18;
  int local_14;
  int local_10 [2];
  
  if (*(int *)param_1 != 0xb) {
    while( true ) {
      cVar2 = ScanInt(local_10);
      if (((cVar2 == '\x01') && (cVar2 = ScanInt(&local_14), cVar2 == '\x01')) &&
         (cVar2 = ScanInt(&local_18), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) break;
      TutorialData::addEquipmentIndex((int)(this + *(int *)param_1 * 0x148),local_14,local_18);
    }
  }
  return;
}

```

---

## LoadItem

```asm
// === 08ab96a8 GlobalScriptTutorial::LoadItem  [0x08ab96a8-0x8ab9717] ===
 8ab96a8:	55                   	push   %ebp
 8ab96a9:	89 e5                	mov    %esp,%ebp
 8ab96ab:	83 ec 28             	sub    $0x28,%esp
 8ab96ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab96b1:	8b 00                	mov    (%eax),%eax
 8ab96b3:	83 f8 0b             	cmp    $0xb,%eax
 8ab96b6:	74 5a                	je     8ab9712 <_ZN20GlobalScriptTutorial8LoadItemER17ENUM_CHARACTERJOB+0x6a>
 8ab96b8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab96bb:	89 04 24             	mov    %eax,(%esp)
 8ab96be:	e8 61 2d e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab96c3:	83 f0 01             	xor    $0x1,%eax
 8ab96c6:	84 c0                	test   %al,%al
 8ab96c8:	75 12                	jne    8ab96dc <_ZN20GlobalScriptTutorial8LoadItemER17ENUM_CHARACTERJOB+0x34>
 8ab96ca:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab96cd:	89 04 24             	mov    %eax,(%esp)
 8ab96d0:	e8 4f 2d e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab96d5:	83 f0 01             	xor    $0x1,%eax
 8ab96d8:	84 c0                	test   %al,%al
 8ab96da:	74 07                	je     8ab96e3 <_ZN20GlobalScriptTutorial8LoadItemER17ENUM_CHARACTERJOB+0x3b>
 8ab96dc:	b8 01 00 00 00       	mov    $0x1,%eax
 8ab96e1:	eb 05                	jmp    8ab96e8 <_ZN20GlobalScriptTutorial8LoadItemER17ENUM_CHARACTERJOB+0x40>
 8ab96e3:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab96e8:	84 c0                	test   %al,%al
 8ab96ea:	75 29                	jne    8ab9715 <_ZN20GlobalScriptTutorial8LoadItemER17ENUM_CHARACTERJOB+0x6d>
 8ab96ec:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8ab96ef:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8ab96f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab96f5:	8b 00                	mov    (%eax),%eax
 8ab96f7:	69 c0 48 01 00 00    	imul   $0x148,%eax,%eax
 8ab96fd:	03 45 08             	add    0x8(%ebp),%eax
 8ab9700:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ab9704:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab9708:	89 04 24             	mov    %eax,(%esp)
 8ab970b:	e8 0c f6 ff ff       	call   8ab8d1c <_ZN12TutorialData7addItemEii>
 8ab9710:	eb a6                	jmp    8ab96b8 <_ZN20GlobalScriptTutorial8LoadItemER17ENUM_CHARACTERJOB+0x10>
 8ab9712:	90                   	nop
 8ab9713:	eb 01                	jmp    8ab9716 <_ZN20GlobalScriptTutorial8LoadItemER17ENUM_CHARACTERJOB+0x6e>
 8ab9715:	90                   	nop
 8ab9716:	c9                   	leave
 8ab9717:	c3                   	ret

```

```c
// GlobalScriptTutorial::LoadItem @ 0x8ab96a8

/* GlobalScriptTutorial::LoadItem(ENUM_CHARACTERJOB&) */

void __thiscall
GlobalScriptTutorial::LoadItem(GlobalScriptTutorial *this,ENUM_CHARACTERJOB *param_1)

{
  bool bVar1;
  char cVar2;
  int local_14;
  int local_10 [3];
  
  if (*(int *)param_1 != 0xb) {
    while( true ) {
      cVar2 = ScanInt(local_10);
      if ((cVar2 == '\x01') && (cVar2 = ScanInt(&local_14), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) break;
      TutorialData::addItem((TutorialData *)(this + *(int *)param_1 * 0x148),local_10[0],local_14);
    }
  }
  return;
}

```

---

## LoadPassiveSkilltag

```asm
// === 08ab94d4 GlobalScriptTutorial::LoadPassiveSkilltag  [0x08ab94d4-0x8ab9561] ===
 8ab94d4:	55                   	push   %ebp
 8ab94d5:	89 e5                	mov    %esp,%ebp
 8ab94d7:	53                   	push   %ebx
 8ab94d8:	83 ec 24             	sub    $0x24,%esp
 8ab94db:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab94de:	8b 00                	mov    (%eax),%eax
 8ab94e0:	83 f8 0b             	cmp    $0xb,%eax
 8ab94e3:	74 73                	je     8ab9558 <_ZN20GlobalScriptTutorial19LoadPassiveSkilltagER17ENUM_CHARACTERJOB+0x84>
 8ab94e5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab94e8:	89 04 24             	mov    %eax,(%esp)
 8ab94eb:	e8 34 2f e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab94f0:	83 f0 01             	xor    $0x1,%eax
 8ab94f3:	84 c0                	test   %al,%al
 8ab94f5:	75 24                	jne    8ab951b <_ZN20GlobalScriptTutorial19LoadPassiveSkilltagER17ENUM_CHARACTERJOB+0x47>
 8ab94f7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab94fa:	89 04 24             	mov    %eax,(%esp)
 8ab94fd:	e8 22 2f e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab9502:	83 f0 01             	xor    $0x1,%eax
 8ab9505:	84 c0                	test   %al,%al
 8ab9507:	75 12                	jne    8ab951b <_ZN20GlobalScriptTutorial19LoadPassiveSkilltagER17ENUM_CHARACTERJOB+0x47>
 8ab9509:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab950c:	89 04 24             	mov    %eax,(%esp)
 8ab950f:	e8 10 2f e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab9514:	83 f0 01             	xor    $0x1,%eax
 8ab9517:	84 c0                	test   %al,%al
 8ab9519:	74 07                	je     8ab9522 <_ZN20GlobalScriptTutorial19LoadPassiveSkilltagER17ENUM_CHARACTERJOB+0x4e>
 8ab951b:	b8 01 00 00 00       	mov    $0x1,%eax
 8ab9520:	eb 05                	jmp    8ab9527 <_ZN20GlobalScriptTutorial19LoadPassiveSkilltagER17ENUM_CHARACTERJOB+0x53>
 8ab9522:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab9527:	84 c0                	test   %al,%al
 8ab9529:	75 30                	jne    8ab955b <_ZN20GlobalScriptTutorial19LoadPassiveSkilltagER17ENUM_CHARACTERJOB+0x87>
 8ab952b:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8ab952e:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8ab9531:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8ab9534:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab9537:	8b 00                	mov    (%eax),%eax
 8ab9539:	69 c0 48 01 00 00    	imul   $0x148,%eax,%eax
 8ab953f:	03 45 08             	add    0x8(%ebp),%eax
 8ab9542:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8ab9546:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ab954a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab954e:	89 04 24             	mov    %eax,(%esp)
 8ab9551:	e8 ee f3 ff ff       	call   8ab8944 <_ZN12TutorialData19addPassiveSkillDataEiii>
 8ab9556:	eb 8d                	jmp    8ab94e5 <_ZN20GlobalScriptTutorial19LoadPassiveSkilltagER17ENUM_CHARACTERJOB+0x11>
 8ab9558:	90                   	nop
 8ab9559:	eb 01                	jmp    8ab955c <_ZN20GlobalScriptTutorial19LoadPassiveSkilltagER17ENUM_CHARACTERJOB+0x88>
 8ab955b:	90                   	nop
 8ab955c:	83 c4 24             	add    $0x24,%esp
 8ab955f:	5b                   	pop    %ebx
 8ab9560:	5d                   	pop    %ebp
 8ab9561:	c3                   	ret

```

```c
// GlobalScriptTutorial::LoadPassiveSkilltag @ 0x8ab94d4

/* GlobalScriptTutorial::LoadPassiveSkilltag(ENUM_CHARACTERJOB&) */

void __thiscall
GlobalScriptTutorial::LoadPassiveSkilltag(GlobalScriptTutorial *this,ENUM_CHARACTERJOB *param_1)

{
  bool bVar1;
  char cVar2;
  int local_18;
  int local_14;
  int local_10 [2];
  
  if (*(int *)param_1 != 0xb) {
    while( true ) {
      cVar2 = ScanInt(local_10);
      if (((cVar2 == '\x01') && (cVar2 = ScanInt(&local_14), cVar2 == '\x01')) &&
         (cVar2 = ScanInt(&local_18), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) break;
      TutorialData::addPassiveSkillData
                ((TutorialData *)(this + *(int *)param_1 * 0x148),local_10[0],local_14,local_18);
    }
  }
  return;
}

```

---

## LoadSkillTag

```asm
// === 08ab9408 GlobalScriptTutorial::LoadSkillTag  [0x08ab9408-0x8ab94d3] ===
 8ab9408:	55                   	push   %ebp
 8ab9409:	89 e5                	mov    %esp,%ebp
 8ab940b:	57                   	push   %edi
 8ab940c:	56                   	push   %esi
 8ab940d:	53                   	push   %ebx
 8ab940e:	83 ec 4c             	sub    $0x4c,%esp
 8ab9411:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab9414:	8b 00                	mov    (%eax),%eax
 8ab9416:	83 f8 0b             	cmp    $0xb,%eax
 8ab9419:	0f 84 a8 00 00 00    	je     8ab94c7 <_ZN20GlobalScriptTutorial12LoadSkillTagER17ENUM_CHARACTERJOB+0xbf>
 8ab941f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ab9422:	89 04 24             	mov    %eax,(%esp)
 8ab9425:	e8 fa 2f e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab942a:	83 f0 01             	xor    $0x1,%eax
 8ab942d:	84 c0                	test   %al,%al
 8ab942f:	75 48                	jne    8ab9479 <_ZN20GlobalScriptTutorial12LoadSkillTagER17ENUM_CHARACTERJOB+0x71>
 8ab9431:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ab9434:	89 04 24             	mov    %eax,(%esp)
 8ab9437:	e8 e8 2f e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab943c:	83 f0 01             	xor    $0x1,%eax
 8ab943f:	84 c0                	test   %al,%al
 8ab9441:	75 36                	jne    8ab9479 <_ZN20GlobalScriptTutorial12LoadSkillTagER17ENUM_CHARACTERJOB+0x71>
 8ab9443:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8ab9446:	89 04 24             	mov    %eax,(%esp)
 8ab9449:	e8 d6 2f e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab944e:	83 f0 01             	xor    $0x1,%eax
 8ab9451:	84 c0                	test   %al,%al
 8ab9453:	75 24                	jne    8ab9479 <_ZN20GlobalScriptTutorial12LoadSkillTagER17ENUM_CHARACTERJOB+0x71>
 8ab9455:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ab9458:	89 04 24             	mov    %eax,(%esp)
 8ab945b:	e8 c4 2f e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab9460:	83 f0 01             	xor    $0x1,%eax
 8ab9463:	84 c0                	test   %al,%al
 8ab9465:	75 12                	jne    8ab9479 <_ZN20GlobalScriptTutorial12LoadSkillTagER17ENUM_CHARACTERJOB+0x71>
 8ab9467:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ab946a:	89 04 24             	mov    %eax,(%esp)
 8ab946d:	e8 b2 2f e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab9472:	83 f0 01             	xor    $0x1,%eax
 8ab9475:	84 c0                	test   %al,%al
 8ab9477:	74 07                	je     8ab9480 <_ZN20GlobalScriptTutorial12LoadSkillTagER17ENUM_CHARACTERJOB+0x78>
 8ab9479:	b8 01 00 00 00       	mov    $0x1,%eax
 8ab947e:	eb 05                	jmp    8ab9485 <_ZN20GlobalScriptTutorial12LoadSkillTagER17ENUM_CHARACTERJOB+0x7d>
 8ab9480:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab9485:	84 c0                	test   %al,%al
 8ab9487:	75 41                	jne    8ab94ca <_ZN20GlobalScriptTutorial12LoadSkillTagER17ENUM_CHARACTERJOB+0xc2>
 8ab9489:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 8ab948c:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8ab948f:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8ab9492:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8ab9495:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8ab9498:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab949b:	8b 00                	mov    (%eax),%eax
 8ab949d:	69 c0 48 01 00 00    	imul   $0x148,%eax,%eax
 8ab94a3:	03 45 08             	add    0x8(%ebp),%eax
 8ab94a6:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8ab94aa:	89 74 24 10          	mov    %esi,0x10(%esp)
 8ab94ae:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8ab94b2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ab94b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab94ba:	89 04 24             	mov    %eax,(%esp)
 8ab94bd:	e8 c6 f3 ff ff       	call   8ab8888 <_ZN12TutorialData13addSkillIndexEiiiii>
 8ab94c2:	e9 58 ff ff ff       	jmp    8ab941f <_ZN20GlobalScriptTutorial12LoadSkillTagER17ENUM_CHARACTERJOB+0x17>
 8ab94c7:	90                   	nop
 8ab94c8:	eb 01                	jmp    8ab94cb <_ZN20GlobalScriptTutorial12LoadSkillTagER17ENUM_CHARACTERJOB+0xc3>
 8ab94ca:	90                   	nop
 8ab94cb:	83 c4 4c             	add    $0x4c,%esp
 8ab94ce:	5b                   	pop    %ebx
 8ab94cf:	5e                   	pop    %esi
 8ab94d0:	5f                   	pop    %edi
 8ab94d1:	5d                   	pop    %ebp
 8ab94d2:	c3                   	ret
 8ab94d3:	90                   	nop

```

```c
// GlobalScriptTutorial::LoadSkillTag @ 0x8ab9408

/* GlobalScriptTutorial::LoadSkillTag(ENUM_CHARACTERJOB&) */

void __thiscall
GlobalScriptTutorial::LoadSkillTag(GlobalScriptTutorial *this,ENUM_CHARACTERJOB *param_1)

{
  bool bVar1;
  char cVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20 [4];
  
  if (*(int *)param_1 != 0xb) {
    while( true ) {
      cVar2 = ScanInt(local_20);
      if ((((cVar2 == '\x01') && (cVar2 = ScanInt(&local_24), cVar2 == '\x01')) &&
          (cVar2 = ScanInt(&local_28), cVar2 == '\x01')) &&
         ((cVar2 = ScanInt(&local_2c), cVar2 == '\x01' &&
          (cVar2 = ScanInt(&local_30), cVar2 == '\x01')))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) break;
      TutorialData::addSkillIndex
                ((TutorialData *)(this + *(int *)param_1 * 0x148),local_20[0],local_24,local_28,
                 local_2c,local_30);
    }
  }
  return;
}

```

---

## LoadTutorialNotice

```asm
// === 08ab95ac GlobalScriptTutorial::LoadTutorialNotice  [0x08ab95ac-0x8ab96a7] ===
 8ab95ac:	55                   	push   %ebp
 8ab95ad:	89 e5                	mov    %esp,%ebp
 8ab95af:	56                   	push   %esi
 8ab95b0:	53                   	push   %ebx
 8ab95b1:	83 ec 30             	sub    $0x30,%esp
 8ab95b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab95b7:	8b 00                	mov    (%eax),%eax
 8ab95b9:	83 f8 0b             	cmp    $0xb,%eax
 8ab95bc:	0f 84 de 00 00 00    	je     8ab96a0 <_ZN20GlobalScriptTutorial18LoadTutorialNoticeER17ENUM_CHARACTERJOB+0xf4>
 8ab95c2:	eb 01                	jmp    8ab95c5 <_ZN20GlobalScriptTutorial18LoadTutorialNoticeER17ENUM_CHARACTERJOB+0x19>
 8ab95c4:	90                   	nop
 8ab95c5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab95c8:	89 04 24             	mov    %eax,(%esp)
 8ab95cb:	e8 00 d0 c4 ff       	call   87065d0 <_ZNSsC1Ev>
 8ab95d0:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab95d3:	89 04 24             	mov    %eax,(%esp)
 8ab95d6:	e8 49 2e e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab95db:	83 f0 01             	xor    $0x1,%eax
 8ab95de:	84 c0                	test   %al,%al
 8ab95e0:	75 36                	jne    8ab9618 <_ZN20GlobalScriptTutorial18LoadTutorialNoticeER17ENUM_CHARACTERJOB+0x6c>
 8ab95e2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab95e5:	89 04 24             	mov    %eax,(%esp)
 8ab95e8:	e8 37 2e e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab95ed:	83 f0 01             	xor    $0x1,%eax
 8ab95f0:	84 c0                	test   %al,%al
 8ab95f2:	75 24                	jne    8ab9618 <_ZN20GlobalScriptTutorial18LoadTutorialNoticeER17ENUM_CHARACTERJOB+0x6c>
 8ab95f4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ab95f7:	89 04 24             	mov    %eax,(%esp)
 8ab95fa:	e8 25 2e e0 ff       	call   88bc424 <_Z7ScanIntPi>
 8ab95ff:	83 f0 01             	xor    $0x1,%eax
 8ab9602:	84 c0                	test   %al,%al
 8ab9604:	75 12                	jne    8ab9618 <_ZN20GlobalScriptTutorial18LoadTutorialNoticeER17ENUM_CHARACTERJOB+0x6c>
 8ab9606:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab9609:	89 04 24             	mov    %eax,(%esp)
 8ab960c:	e8 91 31 e0 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8ab9611:	83 f0 01             	xor    $0x1,%eax
 8ab9614:	84 c0                	test   %al,%al
 8ab9616:	74 07                	je     8ab961f <_ZN20GlobalScriptTutorial18LoadTutorialNoticeER17ENUM_CHARACTERJOB+0x73>
 8ab9618:	b8 01 00 00 00       	mov    $0x1,%eax
 8ab961d:	eb 05                	jmp    8ab9624 <_ZN20GlobalScriptTutorial18LoadTutorialNoticeER17ENUM_CHARACTERJOB+0x78>
 8ab961f:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab9624:	84 c0                	test   %al,%al
 8ab9626:	74 07                	je     8ab962f <_ZN20GlobalScriptTutorial18LoadTutorialNoticeER17ENUM_CHARACTERJOB+0x83>
 8ab9628:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ab962d:	eb 5c                	jmp    8ab968b <_ZN20GlobalScriptTutorial18LoadTutorialNoticeER17ENUM_CHARACTERJOB+0xdf>
 8ab962f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab9632:	89 04 24             	mov    %eax,(%esp)
 8ab9635:	e8 b6 ce c4 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ab963a:	8b 75 ec             	mov    -0x14(%ebp),%esi
 8ab963d:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8ab9640:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8ab9643:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ab9646:	8b 12                	mov    (%edx),%edx
 8ab9648:	69 d2 48 01 00 00    	imul   $0x148,%edx,%edx
 8ab964e:	03 55 08             	add    0x8(%ebp),%edx
 8ab9651:	89 44 24 10          	mov    %eax,0x10(%esp)
 8ab9655:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8ab9659:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ab965d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab9661:	89 14 24             	mov    %edx,(%esp)
 8ab9664:	e8 1d f4 ff ff       	call   8ab8a86 <_ZN12TutorialData17addTutorialNoticeEiiiPKc>
 8ab9669:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ab966e:	eb 1b                	jmp    8ab968b <_ZN20GlobalScriptTutorial18LoadTutorialNoticeER17ENUM_CHARACTERJOB+0xdf>
 8ab9670:	89 d3                	mov    %edx,%ebx
 8ab9672:	89 c6                	mov    %eax,%esi
 8ab9674:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab9677:	89 04 24             	mov    %eax,(%esp)
 8ab967a:	e8 61 e5 c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab967f:	89 f0                	mov    %esi,%eax
 8ab9681:	89 da                	mov    %ebx,%edx
 8ab9683:	89 04 24             	mov    %eax,(%esp)
 8ab9686:	e8 c5 a0 02 00       	call   8ae3750 <_Unwind_Resume>
 8ab968b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab968e:	89 04 24             	mov    %eax,(%esp)
 8ab9691:	e8 4a e5 c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab9696:	85 db                	test   %ebx,%ebx
 8ab9698:	0f 85 26 ff ff ff    	jne    8ab95c4 <_ZN20GlobalScriptTutorial18LoadTutorialNoticeER17ENUM_CHARACTERJOB+0x18>
 8ab969e:	eb 01                	jmp    8ab96a1 <_ZN20GlobalScriptTutorial18LoadTutorialNoticeER17ENUM_CHARACTERJOB+0xf5>
 8ab96a0:	90                   	nop
 8ab96a1:	83 c4 30             	add    $0x30,%esp
 8ab96a4:	5b                   	pop    %ebx
 8ab96a5:	5e                   	pop    %esi
 8ab96a6:	5d                   	pop    %ebp
 8ab96a7:	c3                   	ret

```

```c
// GlobalScriptTutorial::LoadTutorialNotice @ 0x8ab95ac

/* GlobalScriptTutorial::LoadTutorialNotice(ENUM_CHARACTERJOB&) */

void __thiscall
GlobalScriptTutorial::LoadTutorialNotice(GlobalScriptTutorial *this,ENUM_CHARACTERJOB *param_1)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  string local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)param_1 != 0xb) {
    do {
      std::string::string(local_1c);
                    /* try { // try from 08ab95d6 to 08ab9668 has its CatchHandler @ 08ab9670 */
      cVar2 = ScanInt(&local_10);
      if ((((cVar2 == '\x01') && (cVar2 = ScanInt(&local_14), cVar2 == '\x01')) &&
          (cVar2 = ScanInt(&local_18), cVar2 == '\x01')) &&
         (cVar2 = ScanStr(local_1c), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        pcVar3 = (char *)std::string::c_str(local_1c);
        TutorialData::addTutorialNotice
                  ((TutorialData *)(this + *(int *)param_1 * 0x148),local_10,local_14,local_18,
                   pcVar3);
      }
      std::string::~string(local_1c);
    } while (!bVar1);
  }
  return;
}

```

---

## clearScript

```asm
// === 08ab9718 GlobalScriptTutorial::clearScript  [0x08ab9718-0x8ab971d] ===
 8ab9718:	55                   	push   %ebp
 8ab9719:	89 e5                	mov    %esp,%ebp
 8ab971b:	5d                   	pop    %ebp
 8ab971c:	c3                   	ret
 8ab971d:	90                   	nop

```

```c
// GlobalScriptTutorial::clearScript @ 0x8ab9718

/* GlobalScriptTutorial::clearScript() */

void GlobalScriptTutorial::clearScript(void)

{
  return;
}

```

---

## getData

```asm
// === 08ab971e GlobalScriptTutorial::getData  [0x08ab971e-0x8ab9769] ===
 8ab971e:	55                   	push   %ebp
 8ab971f:	89 e5                	mov    %esp,%ebp
 8ab9721:	83 ec 04             	sub    $0x4,%esp
 8ab9724:	83 7d 0c 0a          	cmpl   $0xa,0xc(%ebp)
 8ab9728:	7f 06                	jg     8ab9730 <_ZN20GlobalScriptTutorial7getDataEi+0x12>
 8ab972a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ab972e:	79 07                	jns    8ab9737 <_ZN20GlobalScriptTutorial7getDataEi+0x19>
 8ab9730:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab9735:	eb 30                	jmp    8ab9767 <_ZN20GlobalScriptTutorial7getDataEi+0x49>
 8ab9737:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab973a:	69 c0 48 01 00 00    	imul   $0x148,%eax,%eax
 8ab9740:	03 45 08             	add    0x8(%ebp),%eax
 8ab9743:	89 04 24             	mov    %eax,(%esp)
 8ab9746:	e8 87 eb ff ff       	call   8ab82d2 <_ZN12TutorialData15getDungeonIndexEv>
 8ab974b:	85 c0                	test   %eax,%eax
 8ab974d:	0f 94 c0             	sete   %al
 8ab9750:	84 c0                	test   %al,%al
 8ab9752:	74 07                	je     8ab975b <_ZN20GlobalScriptTutorial7getDataEi+0x3d>
 8ab9754:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab9759:	eb 0c                	jmp    8ab9767 <_ZN20GlobalScriptTutorial7getDataEi+0x49>
 8ab975b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab975e:	69 c0 48 01 00 00    	imul   $0x148,%eax,%eax
 8ab9764:	03 45 08             	add    0x8(%ebp),%eax
 8ab9767:	c9                   	leave
 8ab9768:	c3                   	ret
 8ab9769:	90                   	nop

```

```c
// GlobalScriptTutorial::getData @ 0x8ab971e

/* GlobalScriptTutorial::getData(int) */

GlobalScriptTutorial * __thiscall
GlobalScriptTutorial::getData(GlobalScriptTutorial *this,int param_1)

{
  GlobalScriptTutorial *pGVar1;
  int iVar2;
  
  if ((param_1 < 0xb) && (-1 < param_1)) {
    iVar2 = TutorialData::getDungeonIndex((TutorialData *)(this + param_1 * 0x148));
    if (iVar2 == 0) {
      pGVar1 = (GlobalScriptTutorial *)0x0;
    }
    else {
      pGVar1 = this + param_1 * 0x148;
    }
  }
  else {
    pGVar1 = (GlobalScriptTutorial *)0x0;
  }
  return pGVar1;
}

```

---

## loadScript

```asm
// === 08ab8e4a GlobalScriptTutorial::loadScript  [0x08ab8e4a-0x8ab8ffd] ===
 8ab8e4a:	55                   	push   %ebp
 8ab8e4b:	89 e5                	mov    %esp,%ebp
 8ab8e4d:	56                   	push   %esi
 8ab8e4e:	53                   	push   %ebx
 8ab8e4f:	83 ec 30             	sub    $0x30,%esp
 8ab8e52:	c7 44 24 04 a0 cf e2 	movl   $0x8e2cfa0,0x4(%esp)
 8ab8e59:	08 
 8ab8e5a:	c7 04 24 b2 cf e2 08 	movl   $0x8e2cfb2,(%esp)
 8ab8e61:	e8 c3 2e e0 ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 8ab8e66:	83 f0 01             	xor    $0x1,%eax
 8ab8e69:	84 c0                	test   %al,%al
 8ab8e6b:	74 0a                	je     8ab8e77 <_ZN20GlobalScriptTutorial10loadScriptEv+0x2d>
 8ab8e6d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ab8e72:	e9 7d 01 00 00       	jmp    8ab8ff4 <_ZN20GlobalScriptTutorial10loadScriptEv+0x1aa>
 8ab8e77:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab8e7a:	89 04 24             	mov    %eax,(%esp)
 8ab8e7d:	e8 de 40 61 ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 8ab8e82:	eb 01                	jmp    8ab8e85 <_ZN20GlobalScriptTutorial10loadScriptEv+0x3b>
 8ab8e84:	90                   	nop
 8ab8e85:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ab8e88:	89 04 24             	mov    %eax,(%esp)
 8ab8e8b:	e8 40 d7 c4 ff       	call   87065d0 <_ZNSsC1Ev>
 8ab8e90:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ab8e97:	00 
 8ab8e98:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ab8e9b:	89 04 24             	mov    %eax,(%esp)
 8ab8e9e:	e8 bc 39 e0 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8ab8ea3:	83 f0 01             	xor    $0x1,%eax
 8ab8ea6:	84 c0                	test   %al,%al
 8ab8ea8:	74 0a                	je     8ab8eb4 <_ZN20GlobalScriptTutorial10loadScriptEv+0x6a>
 8ab8eaa:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ab8eaf:	e9 9a 00 00 00       	jmp    8ab8f4e <_ZN20GlobalScriptTutorial10loadScriptEv+0x104>
 8ab8eb4:	c7 44 24 04 ca cf e2 	movl   $0x8e2cfca,0x4(%esp)
 8ab8ebb:	08 
 8ab8ebc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ab8ebf:	89 04 24             	mov    %eax,(%esp)
 8ab8ec2:	e8 da 7a 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab8ec7:	84 c0                	test   %al,%al
 8ab8ec9:	74 64                	je     8ab8f2f <_ZN20GlobalScriptTutorial10loadScriptEv+0xe5>
 8ab8ecb:	eb 01                	jmp    8ab8ece <_ZN20GlobalScriptTutorial10loadScriptEv+0x84>
 8ab8ecd:	90                   	nop
 8ab8ece:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ab8ed1:	89 04 24             	mov    %eax,(%esp)
 8ab8ed4:	e8 f7 d6 c4 ff       	call   87065d0 <_ZNSsC1Ev>
 8ab8ed9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ab8edc:	89 04 24             	mov    %eax,(%esp)
 8ab8edf:	e8 be 38 e0 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8ab8ee4:	83 f0 01             	xor    $0x1,%eax
 8ab8ee7:	84 c0                	test   %al,%al
 8ab8ee9:	74 07                	je     8ab8ef2 <_ZN20GlobalScriptTutorial10loadScriptEv+0xa8>
 8ab8eeb:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ab8ef0:	eb 2e                	jmp    8ab8f20 <_ZN20GlobalScriptTutorial10loadScriptEv+0xd6>
 8ab8ef2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ab8ef5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8ef9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab8efc:	89 04 24             	mov    %eax,(%esp)
 8ab8eff:	e8 ce 82 b5 ff       	call   86111d2 <_ZNSt6vectorISsSaISsEE9push_backERKSs>
 8ab8f04:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ab8f09:	eb 15                	jmp    8ab8f20 <_ZN20GlobalScriptTutorial10loadScriptEv+0xd6>
 8ab8f0b:	89 d3                	mov    %edx,%ebx
 8ab8f0d:	89 c6                	mov    %eax,%esi
 8ab8f0f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ab8f12:	89 04 24             	mov    %eax,(%esp)
 8ab8f15:	e8 c6 ec c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab8f1a:	89 f0                	mov    %esi,%eax
 8ab8f1c:	89 da                	mov    %ebx,%edx
 8ab8f1e:	eb 16                	jmp    8ab8f36 <_ZN20GlobalScriptTutorial10loadScriptEv+0xec>
 8ab8f20:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ab8f23:	89 04 24             	mov    %eax,(%esp)
 8ab8f26:	e8 b5 ec c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab8f2b:	85 db                	test   %ebx,%ebx
 8ab8f2d:	75 9e                	jne    8ab8ecd <_ZN20GlobalScriptTutorial10loadScriptEv+0x83>
 8ab8f2f:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ab8f34:	eb 18                	jmp    8ab8f4e <_ZN20GlobalScriptTutorial10loadScriptEv+0x104>
 8ab8f36:	89 d3                	mov    %edx,%ebx
 8ab8f38:	89 c6                	mov    %eax,%esi
 8ab8f3a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ab8f3d:	89 04 24             	mov    %eax,(%esp)
 8ab8f40:	e8 9b ec c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab8f45:	89 f0                	mov    %esi,%eax
 8ab8f47:	89 da                	mov    %ebx,%edx
 8ab8f49:	e9 80 00 00 00       	jmp    8ab8fce <_ZN20GlobalScriptTutorial10loadScriptEv+0x184>
 8ab8f4e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ab8f51:	89 04 24             	mov    %eax,(%esp)
 8ab8f54:	e8 87 ec c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab8f59:	85 db                	test   %ebx,%ebx
 8ab8f5b:	0f 85 23 ff ff ff    	jne    8ab8e84 <_ZN20GlobalScriptTutorial10loadScriptEv+0x3a>
 8ab8f61:	e8 ee 30 e0 ff       	call   88bc054 <_Z20unloadRDARScriptFilev>
 8ab8f66:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8ab8f6d:	eb 43                	jmp    8ab8fb2 <_ZN20GlobalScriptTutorial10loadScriptEv+0x168>
 8ab8f6f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ab8f72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab8f76:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab8f79:	89 04 24             	mov    %eax,(%esp)
 8ab8f7c:	e8 4d eb 77 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8ab8f81:	89 04 24             	mov    %eax,(%esp)
 8ab8f84:	e8 67 d5 c4 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ab8f89:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ab8f8d:	c7 44 24 04 b2 cf e2 	movl   $0x8e2cfb2,0x4(%esp)
 8ab8f94:	08 
 8ab8f95:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8f98:	89 04 24             	mov    %eax,(%esp)
 8ab8f9b:	e8 5e 00 00 00       	call   8ab8ffe <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_>
 8ab8fa0:	83 f0 01             	xor    $0x1,%eax
 8ab8fa3:	84 c0                	test   %al,%al
 8ab8fa5:	74 07                	je     8ab8fae <_ZN20GlobalScriptTutorial10loadScriptEv+0x164>
 8ab8fa7:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ab8fac:	eb 3b                	jmp    8ab8fe9 <_ZN20GlobalScriptTutorial10loadScriptEv+0x19f>
 8ab8fae:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8ab8fb2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab8fb5:	89 04 24             	mov    %eax,(%esp)
 8ab8fb8:	e8 d3 ea 77 ff       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 8ab8fbd:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8ab8fc0:	0f 97 c0             	seta   %al
 8ab8fc3:	84 c0                	test   %al,%al
 8ab8fc5:	75 a8                	jne    8ab8f6f <_ZN20GlobalScriptTutorial10loadScriptEv+0x125>
 8ab8fc7:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ab8fcc:	eb 1b                	jmp    8ab8fe9 <_ZN20GlobalScriptTutorial10loadScriptEv+0x19f>
 8ab8fce:	89 d3                	mov    %edx,%ebx
 8ab8fd0:	89 c6                	mov    %eax,%esi
 8ab8fd2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab8fd5:	89 04 24             	mov    %eax,(%esp)
 8ab8fd8:	e8 97 3f 61 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 8ab8fdd:	89 f0                	mov    %esi,%eax
 8ab8fdf:	89 da                	mov    %ebx,%edx
 8ab8fe1:	89 04 24             	mov    %eax,(%esp)
 8ab8fe4:	e8 67 a7 02 00       	call   8ae3750 <_Unwind_Resume>
 8ab8fe9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ab8fec:	89 04 24             	mov    %eax,(%esp)
 8ab8fef:	e8 80 3f 61 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 8ab8ff4:	89 d8                	mov    %ebx,%eax
 8ab8ff6:	83 c4 30             	add    $0x30,%esp
 8ab8ff9:	5b                   	pop    %ebx
 8ab8ffa:	5e                   	pop    %esi
 8ab8ffb:	5d                   	pop    %ebp
 8ab8ffc:	c3                   	ret
 8ab8ffd:	90                   	nop

```

```c
// GlobalScriptTutorial::loadScript @ 0x8ab8e4a

/* GlobalScriptTutorial::loadScript() */

undefined4 __thiscall GlobalScriptTutorial::loadScript(GlobalScriptTutorial *this)

{
  char cVar1;
  bool bVar2;
  string *this_00;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  string local_24;
  string local_20;
  vector<std::string,std::allocator<std::string>> local_1c [12];
  uint local_10;
  
  cVar1 = loadRDARScriptFile("Etc/GlobalTutorialInfo/","CharacterList.lst");
  if (cVar1 == '\x01') {
    std::vector<std::string,std::allocator<std::string>>::vector(local_1c);
    do {
                    /* try { // try from 08ab8e8b to 08ab8e8f has its CatchHandler @ 08ab8fce */
      std::string::string((string *)&local_20);
                    /* try { // try from 08ab8e9e to 08ab8ed8 has its CatchHandler @ 08ab8f36 */
      cVar1 = ScanType((string *)&local_20,true);
      if (cVar1 == '\x01') {
        bVar2 = std::operator==(&local_20,"[list]");
        if (bVar2) {
          do {
            std::string::string((string *)&local_24);
                    /* try { // try from 08ab8edf to 08ab8f03 has its CatchHandler @ 08ab8f0b */
            cVar1 = ScanStr((string *)&local_24);
            if (cVar1 == '\x01') {
              std::vector<std::string,std::allocator<std::string>>::push_back(local_1c,&local_24);
            }
                    /* try { // try from 08ab8f26 to 08ab8f2a has its CatchHandler @ 08ab8f36 */
            std::string::~string((string *)&local_24);
          } while (cVar1 == '\x01');
        }
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
                    /* try { // try from 08ab8f54 to 08ab8f9f has its CatchHandler @ 08ab8fce */
      std::string::~string((string *)&local_20);
    } while (bVar2);
    unloadRDARScriptFile();
    local_10 = 0;
    while (uVar4 = std::vector<std::string,std::allocator<std::string>>::size(local_1c),
          local_10 < uVar4) {
      this_00 = (string *)
                std::vector<std::string,std::allocator<std::string>>::operator[](local_1c,local_10);
      pcVar3 = (char *)std::string::c_str(this_00);
      cVar1 = loadScript(this,"Etc/GlobalTutorialInfo/",pcVar3);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_08ab8fe9;
      }
      local_10 = local_10 + 1;
    }
    uVar5 = 1;
LAB_08ab8fe9:
    std::vector<std::string,std::allocator<std::string>>::~vector(local_1c);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## loadScript_08ab8ffe

```asm
// === 08ab8ffe GlobalScriptTutorial::loadScript  [0x08ab8ffe-0x8ab9225] ===
 8ab8ffe:	55                   	push   %ebp
 8ab8fff:	89 e5                	mov    %esp,%ebp
 8ab9001:	56                   	push   %esi
 8ab9002:	53                   	push   %ebx
 8ab9003:	83 ec 20             	sub    $0x20,%esp
 8ab9006:	8b 45 10             	mov    0x10(%ebp),%eax
 8ab9009:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab900d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ab9010:	89 04 24             	mov    %eax,(%esp)
 8ab9013:	e8 11 2d e0 ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 8ab9018:	83 f0 01             	xor    $0x1,%eax
 8ab901b:	84 c0                	test   %al,%al
 8ab901d:	74 0a                	je     8ab9029 <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x2b>
 8ab901f:	b8 00 00 00 00       	mov    $0x0,%eax
 8ab9024:	e9 f5 01 00 00       	jmp    8ab921e <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x220>
 8ab9029:	c7 45 f4 0b 00 00 00 	movl   $0xb,-0xc(%ebp)
 8ab9030:	eb 01                	jmp    8ab9033 <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x35>
 8ab9032:	90                   	nop
 8ab9033:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab9036:	89 04 24             	mov    %eax,(%esp)
 8ab9039:	e8 92 d5 c4 ff       	call   87065d0 <_ZNSsC1Ev>
 8ab903e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ab9045:	00 
 8ab9046:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab9049:	89 04 24             	mov    %eax,(%esp)
 8ab904c:	e8 0e 38 e0 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8ab9051:	83 f0 01             	xor    $0x1,%eax
 8ab9054:	84 c0                	test   %al,%al
 8ab9056:	74 0a                	je     8ab9062 <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x64>
 8ab9058:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ab905d:	e9 9f 01 00 00       	jmp    8ab9201 <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x203>
 8ab9062:	c7 44 24 04 d1 cf e2 	movl   $0x8e2cfd1,0x4(%esp)
 8ab9069:	08 
 8ab906a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab906d:	89 04 24             	mov    %eax,(%esp)
 8ab9070:	e8 2c 79 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab9075:	84 c0                	test   %al,%al
 8ab9077:	74 17                	je     8ab9090 <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x92>
 8ab9079:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab907c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab9080:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab9083:	89 04 24             	mov    %eax,(%esp)
 8ab9086:	e8 9b 01 00 00       	call   8ab9226 <_ZN20GlobalScriptTutorial13LoadDialogTagER17ENUM_CHARACTERJOB>
 8ab908b:	e9 4f 01 00 00       	jmp    8ab91df <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x1e1>
 8ab9090:	c7 44 24 04 da cf e2 	movl   $0x8e2cfda,0x4(%esp)
 8ab9097:	08 
 8ab9098:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab909b:	89 04 24             	mov    %eax,(%esp)
 8ab909e:	e8 fe 78 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab90a3:	84 c0                	test   %al,%al
 8ab90a5:	74 17                	je     8ab90be <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0xc0>
 8ab90a7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab90aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab90ae:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab90b1:	89 04 24             	mov    %eax,(%esp)
 8ab90b4:	e8 51 02 00 00       	call   8ab930a <_ZN20GlobalScriptTutorial13LoadAvatarTagER17ENUM_CHARACTERJOB>
 8ab90b9:	e9 21 01 00 00       	jmp    8ab91df <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x1e1>
 8ab90be:	c7 44 24 04 e3 cf e2 	movl   $0x8e2cfe3,0x4(%esp)
 8ab90c5:	08 
 8ab90c6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab90c9:	89 04 24             	mov    %eax,(%esp)
 8ab90cc:	e8 d0 78 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab90d1:	84 c0                	test   %al,%al
 8ab90d3:	74 17                	je     8ab90ec <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0xee>
 8ab90d5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab90d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab90dc:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab90df:	89 04 24             	mov    %eax,(%esp)
 8ab90e2:	e8 93 02 00 00       	call   8ab937a <_ZN20GlobalScriptTutorial16LoadEquipmentTagER17ENUM_CHARACTERJOB>
 8ab90e7:	e9 f3 00 00 00       	jmp    8ab91df <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x1e1>
 8ab90ec:	c7 44 24 04 ef cf e2 	movl   $0x8e2cfef,0x4(%esp)
 8ab90f3:	08 
 8ab90f4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab90f7:	89 04 24             	mov    %eax,(%esp)
 8ab90fa:	e8 a2 78 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab90ff:	84 c0                	test   %al,%al
 8ab9101:	74 17                	je     8ab911a <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x11c>
 8ab9103:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab9106:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab910a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab910d:	89 04 24             	mov    %eax,(%esp)
 8ab9110:	e8 4d 04 00 00       	call   8ab9562 <_ZN20GlobalScriptTutorial16LoadDungeonIndexER17ENUM_CHARACTERJOB>
 8ab9115:	e9 c5 00 00 00       	jmp    8ab91df <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x1e1>
 8ab911a:	c7 44 24 04 fe cf e2 	movl   $0x8e2cffe,0x4(%esp)
 8ab9121:	08 
 8ab9122:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab9125:	89 04 24             	mov    %eax,(%esp)
 8ab9128:	e8 74 78 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab912d:	84 c0                	test   %al,%al
 8ab912f:	74 17                	je     8ab9148 <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x14a>
 8ab9131:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab9134:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab9138:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab913b:	89 04 24             	mov    %eax,(%esp)
 8ab913e:	e8 c5 02 00 00       	call   8ab9408 <_ZN20GlobalScriptTutorial12LoadSkillTagER17ENUM_CHARACTERJOB>
 8ab9143:	e9 97 00 00 00       	jmp    8ab91df <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x1e1>
 8ab9148:	c7 44 24 04 06 d0 e2 	movl   $0x8e2d006,0x4(%esp)
 8ab914f:	08 
 8ab9150:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab9153:	89 04 24             	mov    %eax,(%esp)
 8ab9156:	e8 46 78 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab915b:	84 c0                	test   %al,%al
 8ab915d:	74 14                	je     8ab9173 <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x175>
 8ab915f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab9162:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab9166:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab9169:	89 04 24             	mov    %eax,(%esp)
 8ab916c:	e8 63 03 00 00       	call   8ab94d4 <_ZN20GlobalScriptTutorial19LoadPassiveSkilltagER17ENUM_CHARACTERJOB>
 8ab9171:	eb 6c                	jmp    8ab91df <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x1e1>
 8ab9173:	c7 44 24 04 16 d0 e2 	movl   $0x8e2d016,0x4(%esp)
 8ab917a:	08 
 8ab917b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab917e:	89 04 24             	mov    %eax,(%esp)
 8ab9181:	e8 1b 78 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab9186:	84 c0                	test   %al,%al
 8ab9188:	74 14                	je     8ab919e <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x1a0>
 8ab918a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab918d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab9191:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab9194:	89 04 24             	mov    %eax,(%esp)
 8ab9197:	e8 10 04 00 00       	call   8ab95ac <_ZN20GlobalScriptTutorial18LoadTutorialNoticeER17ENUM_CHARACTERJOB>
 8ab919c:	eb 41                	jmp    8ab91df <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x1e1>
 8ab919e:	c7 44 24 04 28 d0 e2 	movl   $0x8e2d028,0x4(%esp)
 8ab91a5:	08 
 8ab91a6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab91a9:	89 04 24             	mov    %eax,(%esp)
 8ab91ac:	e8 f0 77 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab91b1:	84 c0                	test   %al,%al
 8ab91b3:	74 14                	je     8ab91c9 <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x1cb>
 8ab91b5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab91b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab91bc:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab91bf:	89 04 24             	mov    %eax,(%esp)
 8ab91c2:	e8 e1 04 00 00       	call   8ab96a8 <_ZN20GlobalScriptTutorial8LoadItemER17ENUM_CHARACTERJOB>
 8ab91c7:	eb 16                	jmp    8ab91df <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x1e1>
 8ab91c9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab91cc:	89 04 24             	mov    %eax,(%esp)
 8ab91cf:	e8 1c d3 c4 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ab91d4:	89 04 24             	mov    %eax,(%esp)
 8ab91d7:	e8 a2 53 e0 ff       	call   88be57e <_Z15getCharacterJobPKc>
 8ab91dc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ab91df:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ab91e4:	eb 1b                	jmp    8ab9201 <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x203>
 8ab91e6:	89 d3                	mov    %edx,%ebx
 8ab91e8:	89 c6                	mov    %eax,%esi
 8ab91ea:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab91ed:	89 04 24             	mov    %eax,(%esp)
 8ab91f0:	e8 eb e9 c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab91f5:	89 f0                	mov    %esi,%eax
 8ab91f7:	89 da                	mov    %ebx,%edx
 8ab91f9:	89 04 24             	mov    %eax,(%esp)
 8ab91fc:	e8 4f a5 02 00       	call   8ae3750 <_Unwind_Resume>
 8ab9201:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab9204:	89 04 24             	mov    %eax,(%esp)
 8ab9207:	e8 d4 e9 c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab920c:	85 db                	test   %ebx,%ebx
 8ab920e:	0f 85 1e fe ff ff    	jne    8ab9032 <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_+0x34>
 8ab9214:	e8 3b 2e e0 ff       	call   88bc054 <_Z20unloadRDARScriptFilev>
 8ab9219:	b8 01 00 00 00       	mov    $0x1,%eax
 8ab921e:	83 c4 20             	add    $0x20,%esp
 8ab9221:	5b                   	pop    %ebx
 8ab9222:	5e                   	pop    %esi
 8ab9223:	5d                   	pop    %ebp
 8ab9224:	c3                   	ret
 8ab9225:	90                   	nop

```

```c
// GlobalScriptTutorial::loadScript @ 0x8ab8ffe

/* GlobalScriptTutorial::loadScript(char const*, char const*) */

undefined4 __thiscall
GlobalScriptTutorial::loadScript(GlobalScriptTutorial *this,char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  string local_14;
  undefined4 local_10;
  
  cVar1 = loadRDARScriptFile(param_1,param_2);
  if (cVar1 == '\x01') {
    local_10 = 0xb;
    do {
      std::string::string((string *)&local_14);
                    /* try { // try from 08ab904c to 08ab91db has its CatchHandler @ 08ab91e6 */
      cVar1 = ScanType((string *)&local_14,true);
      if (cVar1 == '\x01') {
        bVar2 = std::operator==(&local_14,"[dialog]");
        if (bVar2) {
          LoadDialogTag(this,(ENUM_CHARACTERJOB *)&local_10);
        }
        else {
          bVar2 = std::operator==(&local_14,"[avatar]");
          if (bVar2) {
            LoadAvatarTag(this,(ENUM_CHARACTERJOB *)&local_10);
          }
          else {
            bVar2 = std::operator==(&local_14,"[equipment]");
            if (bVar2) {
              LoadEquipmentTag(this,(ENUM_CHARACTERJOB *)&local_10);
            }
            else {
              bVar2 = std::operator==(&local_14,"[dungeonindex]");
              if (bVar2) {
                LoadDungeonIndex(this,(ENUM_CHARACTERJOB *)&local_10);
              }
              else {
                bVar2 = std::operator==(&local_14,"[skill]");
                if (bVar2) {
                  LoadSkillTag(this,(ENUM_CHARACTERJOB *)&local_10);
                }
                else {
                  bVar2 = std::operator==(&local_14,"[passive skill]");
                  if (bVar2) {
                    LoadPassiveSkilltag(this,(ENUM_CHARACTERJOB *)&local_10);
                  }
                  else {
                    bVar2 = std::operator==(&local_14,"[tutorial notice]");
                    if (bVar2) {
                      LoadTutorialNotice(this,(ENUM_CHARACTERJOB *)&local_10);
                    }
                    else {
                      bVar2 = std::operator==(&local_14,"[item]");
                      if (bVar2) {
                        LoadItem(this,(ENUM_CHARACTERJOB *)&local_10);
                      }
                      else {
                        pcVar4 = (char *)std::string::c_str((string *)&local_14);
                        local_10 = getCharacterJob(pcVar4);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      std::string::~string((string *)&local_14);
    } while (bVar2);
    unloadRDARScriptFile();
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## ~GlobalScriptTutorial

```asm
// === 08ab8e0a GlobalScriptTutorial::~GlobalScriptTutorial  [0x08ab8e0a-0x8ab8e49] ===
 8ab8e0a:	55                   	push   %ebp
 8ab8e0b:	89 e5                	mov    %esp,%ebp
 8ab8e0d:	53                   	push   %ebx
 8ab8e0e:	83 ec 14             	sub    $0x14,%esp
 8ab8e11:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8e14:	89 04 24             	mov    %eax,(%esp)
 8ab8e17:	e8 fc 08 00 00       	call   8ab9718 <_ZN20GlobalScriptTutorial11clearScriptEv>
 8ab8e1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8e1f:	85 c0                	test   %eax,%eax
 8ab8e21:	74 20                	je     8ab8e43 <_ZN20GlobalScriptTutorialD1Ev+0x39>
 8ab8e23:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8e26:	8d 98 18 0e 00 00    	lea    0xe18(%eax),%ebx
 8ab8e2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab8e2f:	39 c3                	cmp    %eax,%ebx
 8ab8e31:	74 10                	je     8ab8e43 <_ZN20GlobalScriptTutorialD1Ev+0x39>
 8ab8e33:	81 eb 48 01 00 00    	sub    $0x148,%ebx
 8ab8e39:	89 1c 24             	mov    %ebx,(%esp)
 8ab8e3c:	e8 ad f2 ff ff       	call   8ab80ee <_ZN12TutorialDataD1Ev>
 8ab8e41:	eb e9                	jmp    8ab8e2c <_ZN20GlobalScriptTutorialD1Ev+0x22>
 8ab8e43:	83 c4 14             	add    $0x14,%esp
 8ab8e46:	5b                   	pop    %ebx
 8ab8e47:	5d                   	pop    %ebp
 8ab8e48:	c3                   	ret
 8ab8e49:	90                   	nop

```

```c
// GlobalScriptTutorial::~GlobalScriptTutorial @ 0x8ab8e0a

/* GlobalScriptTutorial::~GlobalScriptTutorial() */

void __thiscall GlobalScriptTutorial::~GlobalScriptTutorial(GlobalScriptTutorial *this)

{
  TutorialData *this_00;
  
  clearScript();
  if (this != (GlobalScriptTutorial *)0x0) {
    this_00 = (TutorialData *)(this + 0xe18);
    while (this_00 != (TutorialData *)this) {
      this_00 = this_00 + -0x148;
      TutorialData::~TutorialData(this_00);
    }
  }
  return;
}

```

