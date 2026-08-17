# Dispatcher_UseCraneStart

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821d2c4 Dispatcher_UseCraneStart::dispatch_sig  [0x0821d2c4-0x821d507] ===
 821d2c4:	55                   	push   %ebp
 821d2c5:	89 e5                	mov    %esp,%ebp
 821d2c7:	56                   	push   %esi
 821d2c8:	53                   	push   %ebx
 821d2c9:	83 c4 80             	add    $0xffffff80,%esp
 821d2cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d2cf:	89 04 24             	mov    %eax,(%esp)
 821d2d2:	e8 b5 d0 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821d2d7:	83 f8 03             	cmp    $0x3,%eax
 821d2da:	0f 95 c0             	setne  %al
 821d2dd:	84 c0                	test   %al,%al
 821d2df:	74 0a                	je     821d2eb <_ZN24Dispatcher_UseCraneStart12dispatch_sigEP5CUserR9PacketBuf+0x27>
 821d2e1:	bb 00 00 00 00       	mov    $0x0,%ebx
 821d2e6:	e9 11 02 00 00       	jmp    821d4fc <_ZN24Dispatcher_UseCraneStart12dispatch_sigEP5CUserR9PacketBuf+0x238>
 821d2eb:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 821d2f2:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 821d2f9:	66 c7 45 e2 ff ff    	movw   $0xffff,-0x1e(%ebp)
 821d2ff:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 821d302:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d306:	8b 45 10             	mov    0x10(%ebp),%eax
 821d309:	89 04 24             	mov    %eax,(%esp)
 821d30c:	e8 af fc 36 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 821d311:	83 f0 01             	xor    $0x1,%eax
 821d314:	84 c0                	test   %al,%al
 821d316:	74 2b                	je     821d343 <_ZN24Dispatcher_UseCraneStart12dispatch_sigEP5CUserR9PacketBuf+0x7f>
 821d318:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821d31f:	00 
 821d320:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821d327:	00 
 821d328:	c7 44 24 04 80 d5 bc 	movl   $0x8bcd580,0x4(%esp)
 821d32f:	08 
 821d330:	c7 04 24 e8 d0 00 00 	movl   $0xd0e8,(%esp)
 821d337:	e8 9b 35 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821d33c:	89 c3                	mov    %eax,%ebx
 821d33e:	e9 b9 01 00 00       	jmp    821d4fc <_ZN24Dispatcher_UseCraneStart12dispatch_sigEP5CUserR9PacketBuf+0x238>
 821d343:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 821d34a:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 821d34e:	0f bf d8             	movswl %ax,%ebx
 821d351:	e8 38 ee ea ff       	call   80cc18e <_Z14G_CGameManagerv>
 821d356:	89 04 24             	mov    %eax,(%esp)
 821d359:	e8 48 bd 07 00       	call   82990a6 <_ZN12CGameManager23GetCraneMinigameManagerEv>
 821d35e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 821d362:	8b 55 0c             	mov    0xc(%ebp),%edx
 821d365:	89 54 24 04          	mov    %edx,0x4(%esp)
 821d369:	89 04 24             	mov    %eax,(%esp)
 821d36c:	e8 95 ea ec ff       	call   80ebe06 <_ZN20CraneMinigameManager16startUseMaterialEP5CUseri>
 821d371:	89 45 f0             	mov    %eax,-0x10(%ebp)
 821d374:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 821d378:	74 2b                	je     821d3a5 <_ZN24Dispatcher_UseCraneStart12dispatch_sigEP5CUserR9PacketBuf+0xe1>
 821d37a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 821d381:	e8 7a 84 50 00       	call   8725800 <__cxa_allocate_exception>
 821d386:	89 c2                	mov    %eax,%edx
 821d388:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 821d38b:	89 0a                	mov    %ecx,(%edx)
 821d38d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821d394:	00 
 821d395:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821d39c:	08 
 821d39d:	89 04 24             	mov    %eax,(%esp)
 821d3a0:	e8 ab 78 50 00       	call   8724c50 <__cxa_throw>
 821d3a5:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 821d3a9:	0f bf d8             	movswl %ax,%ebx
 821d3ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d3af:	89 04 24             	mov    %eax,(%esp)
 821d3b2:	e8 c7 ce eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 821d3b7:	8d 55 97             	lea    -0x69(%ebp),%edx
 821d3ba:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 821d3be:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 821d3c5:	00 
 821d3c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d3ca:	89 14 24             	mov    %edx,(%esp)
 821d3cd:	e8 46 e5 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 821d3d2:	83 ec 04             	sub    $0x4,%esp
 821d3d5:	8b 45 9e             	mov    -0x62(%ebp),%eax
 821d3d8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 821d3db:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821d3e2:	00 
 821d3e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d3e6:	89 04 24             	mov    %eax,(%esp)
 821d3e9:	e8 2a 09 47 00       	call   868dd18 <_ZN5CUser16setUseCraneStartEb>
 821d3ee:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821d3f1:	89 04 24             	mov    %eax,(%esp)
 821d3f4:	e8 53 09 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 821d3f9:	c7 44 24 08 e6 01 00 	movl   $0x1e6,0x8(%esp)
 821d400:	00 
 821d401:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821d408:	00 
 821d409:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821d40c:	89 04 24             	mov    %eax,(%esp)
 821d40f:	e8 e8 e4 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 821d414:	eb 5b                	jmp    821d471 <_ZN24Dispatcher_UseCraneStart12dispatch_sigEP5CUserR9PacketBuf+0x1ad>
 821d416:	83 fa 01             	cmp    $0x1,%edx
 821d419:	74 08                	je     821d423 <_ZN24Dispatcher_UseCraneStart12dispatch_sigEP5CUserR9PacketBuf+0x15f>
 821d41b:	89 04 24             	mov    %eax,(%esp)
 821d41e:	e8 2d 63 8c 00       	call   8ae3750 <_Unwind_Resume>
 821d423:	89 04 24             	mov    %eax,(%esp)
 821d426:	e8 b5 88 50 00       	call   8725ce0 <__cxa_begin_catch>
 821d42b:	8b 00                	mov    (%eax),%eax
 821d42d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 821d430:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821d433:	0f b6 c0             	movzbl %al,%eax
 821d436:	89 44 24 08          	mov    %eax,0x8(%esp)
 821d43a:	c7 44 24 04 e6 01 00 	movl   $0x1e6,0x4(%esp)
 821d441:	00 
 821d442:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d445:	89 04 24             	mov    %eax,(%esp)
 821d448:	e8 f5 ea 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821d44d:	bb 00 00 00 00       	mov    $0x0,%ebx
 821d452:	e8 d9 87 50 00       	call   8725c30 <__cxa_end_catch>
 821d457:	e9 a0 00 00 00       	jmp    821d4fc <_ZN24Dispatcher_UseCraneStart12dispatch_sigEP5CUserR9PacketBuf+0x238>
 821d45c:	89 d3                	mov    %edx,%ebx
 821d45e:	89 c6                	mov    %eax,%esi
 821d460:	e8 cb 87 50 00       	call   8725c30 <__cxa_end_catch>
 821d465:	89 f0                	mov    %esi,%eax
 821d467:	89 da                	mov    %ebx,%edx
 821d469:	89 04 24             	mov    %eax,(%esp)
 821d46c:	e8 df 62 8c 00       	call   8ae3750 <_Unwind_Resume>
 821d471:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821d478:	00 
 821d479:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821d47c:	89 04 24             	mov    %eax,(%esp)
 821d47f:	e8 9c e4 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821d484:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 821d488:	98                   	cwtl
 821d489:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d48d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821d490:	89 04 24             	mov    %eax,(%esp)
 821d493:	e8 0c ca eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 821d498:	8b 45 ec             	mov    -0x14(%ebp),%eax
 821d49b:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d49f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821d4a2:	89 04 24             	mov    %eax,(%esp)
 821d4a5:	e8 92 e4 ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 821d4aa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821d4b1:	00 
 821d4b2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821d4b5:	89 04 24             	mov    %eax,(%esp)
 821d4b8:	e8 9b e4 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821d4bd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821d4c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d4c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d4c7:	89 04 24             	mov    %eax,(%esp)
 821d4ca:	e8 eb b0 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 821d4cf:	bb 00 00 00 00       	mov    $0x0,%ebx
 821d4d4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821d4d7:	89 04 24             	mov    %eax,(%esp)
 821d4da:	e8 a1 09 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821d4df:	eb 1b                	jmp    821d4fc <_ZN24Dispatcher_UseCraneStart12dispatch_sigEP5CUserR9PacketBuf+0x238>
 821d4e1:	89 d3                	mov    %edx,%ebx
 821d4e3:	89 c6                	mov    %eax,%esi
 821d4e5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821d4e8:	89 04 24             	mov    %eax,(%esp)
 821d4eb:	e8 90 09 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821d4f0:	89 f0                	mov    %esi,%eax
 821d4f2:	89 da                	mov    %ebx,%edx
 821d4f4:	89 04 24             	mov    %eax,(%esp)
 821d4f7:	e8 54 62 8c 00       	call   8ae3750 <_Unwind_Resume>
 821d4fc:	89 d8                	mov    %ebx,%eax
 821d4fe:	8d 65 f8             	lea    -0x8(%ebp),%esp
 821d501:	83 c4 00             	add    $0x0,%esp
 821d504:	5b                   	pop    %ebx
 821d505:	5e                   	pop    %esi
 821d506:	5d                   	pop    %ebp
 821d507:	c3                   	ret

```

```c
// Dispatcher_UseCraneStart::dispatch_sig @ 0x821d2c4

/* Dispatcher_UseCraneStart::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UseCraneStart::dispatch_sig
          (Dispatcher_UseCraneStart *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  CGameManager *this_00;
  CraneMinigameManager *this_01;
  int *piVar3;
  undefined4 uVar4;
  undefined1 local_6d [7];
  int local_66;
  PacketGuard local_30 [14];
  short local_22 [5];
  int local_18;
  int local_14;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 3) {
    local_22[1] = 0;
    local_22[2] = 0;
    local_22[3] = 0;
    local_22[4] = 0;
    local_22[0] = -1;
    cVar1 = PacketBuf::get_short(param_2,local_22);
    if (cVar1 == '\x01') {
      local_18 = 0;
      iVar2 = (int)local_22[0];
                    /* try { // try from 0821d351 to 0821d3d1 has its CatchHandler @ 0821d416 */
      this_00 = (CGameManager *)G_CGameManager();
      this_01 = (CraneMinigameManager *)CGameManager::GetCraneMinigameManager(this_00);
      local_14 = CraneMinigameManager::startUseMaterial(this_01,param_1,iVar2);
      if (local_14 != 0) {
        piVar3 = (int *)__cxa_allocate_exception(4);
        *piVar3 = local_14;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(piVar3,&ENUM_ERROR::typeinfo,0);
      }
      iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_6d,iVar2);
      local_18 = local_66;
      CUser::setUseCraneStart(param_1,true);
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0821d40f to 0821d413 has its CatchHandler @ 0821d4e1 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x1e6);
                    /* try { // try from 0821d47f to 0821d4ce has its CatchHandler @ 0821d4e1 */
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,(int)local_22[0]);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_18);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send(param_1,local_30);
      uVar4 = 0;
      PacketGuard::~PacketGuard(local_30);
    }
    else {
      uVar4 = LineFunc(0xd0e8,
                       "virtual int Dispatcher_UseCraneStart::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

