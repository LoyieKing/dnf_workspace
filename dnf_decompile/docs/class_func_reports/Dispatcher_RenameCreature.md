# Dispatcher_RenameCreature

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081cd254 Dispatcher_RenameCreature::check_error  [0x081cd254-0x81cd3ad] ===
 81cd254:	55                   	push   %ebp
 81cd255:	89 e5                	mov    %esp,%ebp
 81cd257:	56                   	push   %esi
 81cd258:	53                   	push   %ebx
 81cd259:	83 ec 20             	sub    $0x20,%esp
 81cd25c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd25f:	89 04 24             	mov    %eax,(%esp)
 81cd262:	e8 25 d1 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cd267:	83 f8 03             	cmp    $0x3,%eax
 81cd26a:	75 0f                	jne    81cd27b <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE+0x27>
 81cd26c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd26f:	89 04 24             	mov    %eax,(%esp)
 81cd272:	e8 bb 31 f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81cd277:	85 c0                	test   %eax,%eax
 81cd279:	75 07                	jne    81cd282 <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE+0x2e>
 81cd27b:	b8 01 00 00 00       	mov    $0x1,%eax
 81cd280:	eb 05                	jmp    81cd287 <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE+0x33>
 81cd282:	b8 00 00 00 00       	mov    $0x0,%eax
 81cd287:	84 c0                	test   %al,%al
 81cd289:	74 0a                	je     81cd295 <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE+0x41>
 81cd28b:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 81cd290:	e9 0f 01 00 00       	jmp    81cd3a4 <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE+0x150>
 81cd295:	8b 45 10             	mov    0x10(%ebp),%eax
 81cd298:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cd29b:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81cd29e:	89 04 24             	mov    %eax,(%esp)
 81cd2a1:	e8 2a 2e 51 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81cd2a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cd2a9:	8d 50 14             	lea    0x14(%eax),%edx
 81cd2ac:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81cd2af:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cd2b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cd2b7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81cd2ba:	89 04 24             	mov    %eax,(%esp)
 81cd2bd:	e8 6e a3 53 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81cd2c2:	eb 1b                	jmp    81cd2df <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE+0x8b>
 81cd2c4:	89 d3                	mov    %edx,%ebx
 81cd2c6:	89 c6                	mov    %eax,%esi
 81cd2c8:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81cd2cb:	89 04 24             	mov    %eax,(%esp)
 81cd2ce:	e8 1d 2e 51 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81cd2d3:	89 f0                	mov    %esi,%eax
 81cd2d5:	89 da                	mov    %ebx,%edx
 81cd2d7:	89 04 24             	mov    %eax,(%esp)
 81cd2da:	e8 71 64 91 00       	call   8ae3750 <_Unwind_Resume>
 81cd2df:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81cd2e2:	89 04 24             	mov    %eax,(%esp)
 81cd2e5:	e8 06 2e 51 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81cd2ea:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81cd2ed:	89 04 24             	mov    %eax,(%esp)
 81cd2f0:	e8 fb 91 53 00       	call   87064f0 <_ZNKSs5c_strEv>
 81cd2f5:	89 04 24             	mov    %eax,(%esp)
 81cd2f8:	e8 6f 5a 8f 00       	call   8ac2d6c <_ZN23restrict_inputting_name23isUtf8StrInUnicodeRangeEPKc>
 81cd2fd:	83 f0 01             	xor    $0x1,%eax
 81cd300:	84 c0                	test   %al,%al
 81cd302:	74 0a                	je     81cd30e <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE+0xba>
 81cd304:	bb 9f 00 00 00       	mov    $0x9f,%ebx
 81cd309:	e9 8b 00 00 00       	jmp    81cd399 <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE+0x145>
 81cd30e:	e8 ee 7c 06 00       	call   8235001 <_ZN16CSyncSlangFilter11GetInstanceEv>
 81cd313:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81cd316:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cd31a:	89 04 24             	mov    %eax,(%esp)
 81cd31d:	e8 4c 0e 46 00       	call   862e16e <_ZN16CSyncSlangFilter12HasSlangNameERKSs>
 81cd322:	84 c0                	test   %al,%al
 81cd324:	75 1b                	jne    81cd341 <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE+0xed>
 81cd326:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cd329:	8d 58 14             	lea    0x14(%eax),%ebx
 81cd32c:	e8 6a ee ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81cd331:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cd335:	89 04 24             	mov    %eax,(%esp)
 81cd338:	e8 03 5e 19 00       	call   8363140 <_ZN12CDataManager19hasSpecialCharacterEPKc>
 81cd33d:	84 c0                	test   %al,%al
 81cd33f:	74 07                	je     81cd348 <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE+0xf4>
 81cd341:	b8 01 00 00 00       	mov    $0x1,%eax
 81cd346:	eb 05                	jmp    81cd34d <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE+0xf9>
 81cd348:	b8 00 00 00 00       	mov    $0x0,%eax
 81cd34d:	84 c0                	test   %al,%al
 81cd34f:	74 07                	je     81cd358 <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE+0x104>
 81cd351:	bb 9f 00 00 00       	mov    $0x9f,%ebx
 81cd356:	eb 41                	jmp    81cd399 <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE+0x145>
 81cd358:	e8 a4 7c 06 00       	call   8235001 <_ZN16CSyncSlangFilter11GetInstanceEv>
 81cd35d:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81cd360:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cd364:	89 04 24             	mov    %eax,(%esp)
 81cd367:	e8 b6 12 46 00       	call   862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>
 81cd36c:	84 c0                	test   %al,%al
 81cd36e:	74 07                	je     81cd377 <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE+0x123>
 81cd370:	bb 9f 00 00 00       	mov    $0x9f,%ebx
 81cd375:	eb 22                	jmp    81cd399 <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE+0x145>
 81cd377:	bb 00 00 00 00       	mov    $0x0,%ebx
 81cd37c:	eb 1b                	jmp    81cd399 <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE+0x145>
 81cd37e:	89 d3                	mov    %edx,%ebx
 81cd380:	89 c6                	mov    %eax,%esi
 81cd382:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81cd385:	89 04 24             	mov    %eax,(%esp)
 81cd388:	e8 53 a8 53 00       	call   8707be0 <_ZNSsD1Ev>
 81cd38d:	89 f0                	mov    %esi,%eax
 81cd38f:	89 da                	mov    %ebx,%edx
 81cd391:	89 04 24             	mov    %eax,(%esp)
 81cd394:	e8 b7 63 91 00       	call   8ae3750 <_Unwind_Resume>
 81cd399:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81cd39c:	89 04 24             	mov    %eax,(%esp)
 81cd39f:	e8 3c a8 53 00       	call   8707be0 <_ZNSsD1Ev>
 81cd3a4:	89 d8                	mov    %ebx,%eax
 81cd3a6:	83 c4 20             	add    $0x20,%esp
 81cd3a9:	5b                   	pop    %ebx
 81cd3aa:	5e                   	pop    %esi
 81cd3ab:	5d                   	pop    %ebp
 81cd3ac:	c3                   	ret
 81cd3ad:	90                   	nop

```

```c
// Dispatcher_RenameCreature::check_error @ 0x81cd254

/* Dispatcher_RenameCreature::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RenameCreature::check_error
          (Dispatcher_RenameCreature *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_BASE *pMVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  CSyncSlangFilter *pCVar6;
  CDataManager *this_00;
  undefined4 uVar7;
  string local_18;
  allocator<char> local_11;
  MSG_BASE *local_10;
  
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 == 3) &&
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return 0xffffffff;
  }
  local_10 = param_2;
  std::allocator<char>::allocator();
                    /* try { // try from 081cd2bd to 081cd2c1 has its CatchHandler @ 081cd2c4 */
  std::string::string((string *)&local_18,(char *)(local_10 + 0x14),(allocator *)&local_11);
  std::allocator<char>::~allocator(&local_11);
                    /* try { // try from 081cd2f0 to 081cd36b has its CatchHandler @ 081cd37e */
  pcVar5 = (char *)std::string::c_str((string *)&local_18);
  cVar3 = restrict_inputting_name::isUtf8StrInUnicodeRange(pcVar5);
  if (cVar3 != '\x01') {
    uVar7 = 0x9f;
    goto LAB_081cd399;
  }
  pCVar6 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  cVar3 = CSyncSlangFilter::HasSlangName(pCVar6,&local_18);
  if (cVar3 == '\0') {
    pMVar1 = local_10 + 0x14;
    this_00 = (CDataManager *)G_CDataManager();
    cVar3 = CDataManager::hasSpecialCharacter(this_00,(char *)pMVar1);
    if (cVar3 != '\0') goto LAB_081cd341;
    bVar2 = false;
  }
  else {
LAB_081cd341:
    bVar2 = true;
  }
  if (bVar2) {
    uVar7 = 0x9f;
  }
  else {
    pCVar6 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
    cVar3 = CSyncSlangFilter::HasSlang(pCVar6,&local_18);
    if (cVar3 == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x9f;
    }
  }
LAB_081cd399:
  std::string::~string((string *)&local_18);
  return uVar7;
}

```

---

## process

```asm
// === 081cd110 Dispatcher_RenameCreature::process  [0x081cd110-0x81cd21b] ===
 81cd110:	55                   	push   %ebp
 81cd111:	89 e5                	mov    %esp,%ebp
 81cd113:	57                   	push   %edi
 81cd114:	56                   	push   %esi
 81cd115:	53                   	push   %ebx
 81cd116:	83 ec 2c             	sub    $0x2c,%esp
 81cd119:	8b 45 14             	mov    0x14(%ebp),%eax
 81cd11c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81cd11f:	8b 45 10             	mov    0x10(%ebp),%eax
 81cd122:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cd126:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd129:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cd12d:	8b 45 08             	mov    0x8(%ebp),%eax
 81cd130:	89 04 24             	mov    %eax,(%esp)
 81cd133:	e8 1c 01 00 00       	call   81cd254 <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE>
 81cd138:	89 c2                	mov    %eax,%edx
 81cd13a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81cd13d:	89 50 04             	mov    %edx,0x4(%eax)
 81cd140:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81cd143:	8b 40 04             	mov    0x4(%eax),%eax
 81cd146:	85 c0                	test   %eax,%eax
 81cd148:	7e 0a                	jle    81cd154 <_ZN25Dispatcher_RenameCreature7processEP5CUserR8MSG_BASER9ParamBase+0x44>
 81cd14a:	b8 00 00 00 00       	mov    $0x0,%eax
 81cd14f:	e9 c0 00 00 00       	jmp    81cd214 <_ZN25Dispatcher_RenameCreature7processEP5CUserR8MSG_BASER9ParamBase+0x104>
 81cd154:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81cd157:	8b 40 04             	mov    0x4(%eax),%eax
 81cd15a:	85 c0                	test   %eax,%eax
 81cd15c:	79 32                	jns    81cd190 <_ZN25Dispatcher_RenameCreature7processEP5CUserR8MSG_BASER9ParamBase+0x80>
 81cd15e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd161:	89 04 24             	mov    %eax,(%esp)
 81cd164:	e8 05 d2 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cd169:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81cd16c:	8b 52 04             	mov    0x4(%edx),%edx
 81cd16f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cd173:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cd177:	c7 44 24 04 c0 49 bd 	movl   $0x8bd49c0,0x4(%esp)
 81cd17e:	08 
 81cd17f:	c7 04 24 d3 24 00 00 	movl   $0x24d3,(%esp)
 81cd186:	e8 4c 37 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cd18b:	e9 84 00 00 00       	jmp    81cd214 <_ZN25Dispatcher_RenameCreature7processEP5CUserR8MSG_BASER9ParamBase+0x104>
 81cd190:	8b 45 10             	mov    0x10(%ebp),%eax
 81cd193:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81cd196:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81cd199:	83 c0 14             	add    $0x14,%eax
 81cd19c:	c7 44 24 04 bf 17 bc 	movl   $0x8bc17bf,0x4(%esp)
 81cd1a3:	08 
 81cd1a4:	89 04 24             	mov    %eax,(%esp)
 81cd1a7:	e8 34 13 eb ff       	call   807e4e0 <strcmp@plt>
 81cd1ac:	85 c0                	test   %eax,%eax
 81cd1ae:	75 1e                	jne    81cd1ce <_ZN25Dispatcher_RenameCreature7processEP5CUserR8MSG_BASER9ParamBase+0xbe>
 81cd1b0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81cd1b3:	83 c0 14             	add    $0x14,%eax
 81cd1b6:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 81cd1bd:	00 
 81cd1be:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81cd1c5:	00 
 81cd1c6:	89 04 24             	mov    %eax,(%esp)
 81cd1c9:	e8 f2 0a eb ff       	call   807dcc0 <memset@plt>
 81cd1ce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81cd1d1:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81cd1d5:	0f be f0             	movsbl %al,%esi
 81cd1d8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81cd1db:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81cd1df:	0f bf d8             	movswl %ax,%ebx
 81cd1e2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81cd1e5:	8d 78 14             	lea    0x14(%eax),%edi
 81cd1e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd1eb:	89 04 24             	mov    %eax,(%esp)
 81cd1ee:	e8 9b d0 f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81cd1f3:	89 04 24             	mov    %eax,(%esp)
 81cd1f6:	e8 6d 03 f1 ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 81cd1fb:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81cd1ff:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81cd203:	89 7c 24 04          	mov    %edi,0x4(%esp)
 81cd207:	89 04 24             	mov    %eax,(%esp)
 81cd20a:	e8 5f c9 16 00       	call   8339b6e <_ZN13user_creature12CCreatureMgr14RenameCreatureEPKcii>
 81cd20f:	b8 00 00 00 00       	mov    $0x0,%eax
 81cd214:	83 c4 2c             	add    $0x2c,%esp
 81cd217:	5b                   	pop    %ebx
 81cd218:	5e                   	pop    %esi
 81cd219:	5f                   	pop    %edi
 81cd21a:	5d                   	pop    %ebp
 81cd21b:	c3                   	ret

```

```c
// Dispatcher_RenameCreature::process @ 0x81cd110

/* Dispatcher_RenameCreature::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RenameCreature::process
          (Dispatcher_RenameCreature *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  CInventory *this_00;
  CCreatureMgr *this_01;
  
  uVar3 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar3;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar4 = CUser::get_acc_id(param_1);
      uVar3 = LineFunc(0x24d3,
                       "virtual int Dispatcher_RenameCreature::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar4);
    }
    else {
      iVar5 = strcmp((char *)(param_2 + 0x14),&DAT_08bc17bf);
      if (iVar5 == 0) {
        memset(param_2 + 0x14,0,0xd);
      }
      MVar1 = param_2[0xd];
      sVar2 = *(short *)(param_2 + 0xe);
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this_00);
      user_creature::CCreatureMgr::RenameCreature
                (this_01,(char *)(param_2 + 0x14),(int)sVar2,(int)(char)MVar1);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## read

```asm
// === 081ccfdc Dispatcher_RenameCreature::read  [0x081ccfdc-0x81cd10f] ===
 81ccfdc:	55                   	push   %ebp
 81ccfdd:	89 e5                	mov    %esp,%ebp
 81ccfdf:	83 ec 28             	sub    $0x28,%esp
 81ccfe2:	8b 45 10             	mov    0x10(%ebp),%eax
 81ccfe5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ccfe8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ccfeb:	83 c0 0e             	add    $0xe,%eax
 81ccfee:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ccff2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ccff5:	89 04 24             	mov    %eax,(%esp)
 81ccff8:	e8 c3 ff 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81ccffd:	83 f0 01             	xor    $0x1,%eax
 81cd000:	84 c0                	test   %al,%al
 81cd002:	74 29                	je     81cd02d <_ZN25Dispatcher_RenameCreature4readER9PacketBufR8MSG_BASE+0x51>
 81cd004:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cd00b:	00 
 81cd00c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cd013:	00 
 81cd014:	c7 44 24 04 20 4a bd 	movl   $0x8bd4a20,0x4(%esp)
 81cd01b:	08 
 81cd01c:	c7 04 24 b4 24 00 00 	movl   $0x24b4,(%esp)
 81cd023:	e8 af 38 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cd028:	e9 e0 00 00 00       	jmp    81cd10d <_ZN25Dispatcher_RenameCreature4readER9PacketBufR8MSG_BASE+0x131>
 81cd02d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cd030:	83 c0 0d             	add    $0xd,%eax
 81cd033:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cd037:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd03a:	89 04 24             	mov    %eax,(%esp)
 81cd03d:	e8 e0 fe 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81cd042:	83 f0 01             	xor    $0x1,%eax
 81cd045:	84 c0                	test   %al,%al
 81cd047:	74 29                	je     81cd072 <_ZN25Dispatcher_RenameCreature4readER9PacketBufR8MSG_BASE+0x96>
 81cd049:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cd050:	00 
 81cd051:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cd058:	00 
 81cd059:	c7 44 24 04 20 4a bd 	movl   $0x8bd4a20,0x4(%esp)
 81cd060:	08 
 81cd061:	c7 04 24 b7 24 00 00 	movl   $0x24b7,(%esp)
 81cd068:	e8 6a 38 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cd06d:	e9 9b 00 00 00       	jmp    81cd10d <_ZN25Dispatcher_RenameCreature4readER9PacketBufR8MSG_BASE+0x131>
 81cd072:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cd075:	83 c0 10             	add    $0x10,%eax
 81cd078:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cd07c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd07f:	89 04 24             	mov    %eax,(%esp)
 81cd082:	e8 69 00 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81cd087:	83 f0 01             	xor    $0x1,%eax
 81cd08a:	84 c0                	test   %al,%al
 81cd08c:	74 26                	je     81cd0b4 <_ZN25Dispatcher_RenameCreature4readER9PacketBufR8MSG_BASE+0xd8>
 81cd08e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cd095:	00 
 81cd096:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cd09d:	00 
 81cd09e:	c7 44 24 04 20 4a bd 	movl   $0x8bd4a20,0x4(%esp)
 81cd0a5:	08 
 81cd0a6:	c7 04 24 ba 24 00 00 	movl   $0x24ba,(%esp)
 81cd0ad:	e8 25 38 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cd0b2:	eb 59                	jmp    81cd10d <_ZN25Dispatcher_RenameCreature4readER9PacketBufR8MSG_BASE+0x131>
 81cd0b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cd0b7:	8b 40 10             	mov    0x10(%eax),%eax
 81cd0ba:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cd0bd:	83 c2 14             	add    $0x14,%edx
 81cd0c0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cd0c4:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 81cd0cb:	00 
 81cd0cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cd0d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd0d3:	89 04 24             	mov    %eax,(%esp)
 81cd0d6:	e8 e1 01 3c 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81cd0db:	83 f0 01             	xor    $0x1,%eax
 81cd0de:	84 c0                	test   %al,%al
 81cd0e0:	74 26                	je     81cd108 <_ZN25Dispatcher_RenameCreature4readER9PacketBufR8MSG_BASE+0x12c>
 81cd0e2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cd0e9:	00 
 81cd0ea:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cd0f1:	00 
 81cd0f2:	c7 44 24 04 20 4a bd 	movl   $0x8bd4a20,0x4(%esp)
 81cd0f9:	08 
 81cd0fa:	c7 04 24 bd 24 00 00 	movl   $0x24bd,(%esp)
 81cd101:	e8 d1 37 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cd106:	eb 05                	jmp    81cd10d <_ZN25Dispatcher_RenameCreature4readER9PacketBufR8MSG_BASE+0x131>
 81cd108:	b8 00 00 00 00       	mov    $0x0,%eax
 81cd10d:	c9                   	leave
 81cd10e:	c3                   	ret
 81cd10f:	90                   	nop

```

```c
// Dispatcher_RenameCreature::read @ 0x81ccfdc

/* Dispatcher_RenameCreature::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RenameCreature::read
          (Dispatcher_RenameCreature *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x14),0xd,*(int *)(param_2 + 0x10));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x24bd,
                           "virtual int Dispatcher_RenameCreature::read(PacketBuf&, MSG_BASE&)",0,0)
          ;
        }
      }
      else {
        uVar2 = LineFunc(0x24ba,"virtual int Dispatcher_RenameCreature::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x24b7,"virtual int Dispatcher_RenameCreature::read(PacketBuf&, MSG_BASE&)",0
                       ,0);
    }
  }
  else {
    uVar2 = LineFunc(0x24b4,"virtual int Dispatcher_RenameCreature::read(PacketBuf&, MSG_BASE&)",0,0
                    );
  }
  return uVar2;
}

```

---

## send

```asm
// === 081cd21c Dispatcher_RenameCreature::send  [0x081cd21c-0x81cd253] ===
 81cd21c:	55                   	push   %ebp
 81cd21d:	89 e5                	mov    %esp,%ebp
 81cd21f:	83 ec 28             	sub    $0x28,%esp
 81cd222:	8b 45 10             	mov    0x10(%ebp),%eax
 81cd225:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cd228:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cd22b:	8b 40 04             	mov    0x4(%eax),%eax
 81cd22e:	85 c0                	test   %eax,%eax
 81cd230:	74 20                	je     81cd252 <_ZN25Dispatcher_RenameCreature4sendEP5CUserR9ParamBase+0x36>
 81cd232:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cd235:	8b 40 04             	mov    0x4(%eax),%eax
 81cd238:	0f b6 c0             	movzbl %al,%eax
 81cd23b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cd23f:	c7 44 24 04 67 00 00 	movl   $0x67,0x4(%esp)
 81cd246:	00 
 81cd247:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd24a:	89 04 24             	mov    %eax,(%esp)
 81cd24d:	e8 f0 ec 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81cd252:	c9                   	leave
 81cd253:	c3                   	ret

```

```c
// Dispatcher_RenameCreature::send @ 0x81cd21c

/* Dispatcher_RenameCreature::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_RenameCreature::send(Dispatcher_RenameCreature *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0x67,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

