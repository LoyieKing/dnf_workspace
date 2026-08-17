# Dispatcher_GoldTakeIncreasingAmount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d5656 Dispatcher_GoldTakeIncreasingAmount::check_error  [0x081d5656-0x81d56ab] ===
 81d5656:	55                   	push   %ebp
 81d5657:	89 e5                	mov    %esp,%ebp
 81d5659:	83 ec 18             	sub    $0x18,%esp
 81d565c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81d5660:	75 26                	jne    81d5688 <_ZN35Dispatcher_GoldTakeIncreasingAmount11check_errorEP5CUserR8MSG_BASE+0x32>
 81d5662:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d5669:	00 
 81d566a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5671:	00 
 81d5672:	c7 44 24 04 c0 2f bd 	movl   $0x8bd2fc0,0x4(%esp)
 81d5679:	08 
 81d567a:	c7 04 24 03 39 00 00 	movl   $0x3903,(%esp)
 81d5681:	e8 51 b2 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d5686:	eb 21                	jmp    81d56a9 <_ZN35Dispatcher_GoldTakeIncreasingAmount11check_errorEP5CUserR8MSG_BASE+0x53>
 81d5688:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d568b:	89 04 24             	mov    %eax,(%esp)
 81d568e:	e8 f9 4c f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d5693:	83 f8 05             	cmp    $0x5,%eax
 81d5696:	0f 95 c0             	setne  %al
 81d5699:	84 c0                	test   %al,%al
 81d569b:	74 07                	je     81d56a4 <_ZN35Dispatcher_GoldTakeIncreasingAmount11check_errorEP5CUserR8MSG_BASE+0x4e>
 81d569d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d56a2:	eb 05                	jmp    81d56a9 <_ZN35Dispatcher_GoldTakeIncreasingAmount11check_errorEP5CUserR8MSG_BASE+0x53>
 81d56a4:	b8 00 00 00 00       	mov    $0x0,%eax
 81d56a9:	c9                   	leave
 81d56aa:	c3                   	ret
 81d56ab:	90                   	nop

```

```c
// Dispatcher_GoldTakeIncreasingAmount::check_error @ 0x81d5656

/* Dispatcher_GoldTakeIncreasingAmount::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_GoldTakeIncreasingAmount::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x3903,
                     "int Dispatcher_GoldTakeIncreasingAmount::check_error(CUser*, MSG_BASE&)",0,0);
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 5) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081d55a4 Dispatcher_GoldTakeIncreasingAmount::process  [0x081d55a4-0x81d5655] ===
 81d55a4:	55                   	push   %ebp
 81d55a5:	89 e5                	mov    %esp,%ebp
 81d55a7:	53                   	push   %ebx
 81d55a8:	83 ec 24             	sub    $0x24,%esp
 81d55ab:	8b 45 10             	mov    0x10(%ebp),%eax
 81d55ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d55b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d55b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d55b9:	8b 45 08             	mov    0x8(%ebp),%eax
 81d55bc:	89 04 24             	mov    %eax,(%esp)
 81d55bf:	e8 92 00 00 00       	call   81d5656 <_ZN35Dispatcher_GoldTakeIncreasingAmount11check_errorEP5CUserR8MSG_BASE>
 81d55c4:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d55c7:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81d55cb:	7e 05                	jle    81d55d2 <_ZN35Dispatcher_GoldTakeIncreasingAmount7processEP5CUserR8MSG_BASER9ParamBase+0x2e>
 81d55cd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d55d0:	eb 7e                	jmp    81d5650 <_ZN35Dispatcher_GoldTakeIncreasingAmount7processEP5CUserR8MSG_BASER9ParamBase+0xac>
 81d55d2:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81d55d6:	79 07                	jns    81d55df <_ZN35Dispatcher_GoldTakeIncreasingAmount7processEP5CUserR8MSG_BASER9ParamBase+0x3b>
 81d55d8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d55dd:	eb 71                	jmp    81d5650 <_ZN35Dispatcher_GoldTakeIncreasingAmount7processEP5CUserR8MSG_BASER9ParamBase+0xac>
 81d55df:	8b 45 10             	mov    0x10(%ebp),%eax
 81d55e2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d55e5:	8b 45 14             	mov    0x14(%ebp),%eax
 81d55e8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d55eb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d55ee:	8b 50 0d             	mov    0xd(%eax),%edx
 81d55f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d55f4:	89 50 04             	mov    %edx,0x4(%eax)
 81d55f7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d55fa:	8b 40 04             	mov    0x4(%eax),%eax
 81d55fd:	3d 8a f6 00 00       	cmp    $0xf68a,%eax
 81d5602:	75 40                	jne    81d5644 <_ZN35Dispatcher_GoldTakeIncreasingAmount7processEP5CUserR8MSG_BASER9ParamBase+0xa0>
 81d5604:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d5607:	8d 58 04             	lea    0x4(%eax),%ebx
 81d560a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d560d:	89 04 24             	mov    %eax,(%esp)
 81d5610:	e8 79 4c f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81d5615:	89 04 24             	mov    %eax,(%esp)
 81d5618:	e8 4b 7f f0 ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 81d561d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d5621:	89 04 24             	mov    %eax,(%esp)
 81d5624:	e8 f5 6d 16 00       	call   833c41e <_ZN13user_creature12CCreatureMgr16SetOverSkillTimeERKi>
 81d5629:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d562c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d5630:	75 09                	jne    81d563b <_ZN35Dispatcher_GoldTakeIncreasingAmount7processEP5CUserR8MSG_BASER9ParamBase+0x97>
 81d5632:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d5635:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 81d5639:	eb 10                	jmp    81d564b <_ZN35Dispatcher_GoldTakeIncreasingAmount7processEP5CUserR8MSG_BASER9ParamBase+0xa7>
 81d563b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d563e:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 81d5642:	eb 07                	jmp    81d564b <_ZN35Dispatcher_GoldTakeIncreasingAmount7processEP5CUserR8MSG_BASER9ParamBase+0xa7>
 81d5644:	b8 15 00 00 00       	mov    $0x15,%eax
 81d5649:	eb 05                	jmp    81d5650 <_ZN35Dispatcher_GoldTakeIncreasingAmount7processEP5CUserR8MSG_BASER9ParamBase+0xac>
 81d564b:	b8 00 00 00 00       	mov    $0x0,%eax
 81d5650:	83 c4 24             	add    $0x24,%esp
 81d5653:	5b                   	pop    %ebx
 81d5654:	5d                   	pop    %ebp
 81d5655:	c3                   	ret

```

```c
// Dispatcher_GoldTakeIncreasingAmount::process @ 0x81d55a4

/* Dispatcher_GoldTakeIncreasingAmount::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_GoldTakeIncreasingAmount::process
          (Dispatcher_GoldTakeIncreasingAmount *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  int iVar1;
  CInventory *this_00;
  CCreatureMgr *this_01;
  
  iVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 0xd);
      if (*(int *)(param_3 + 4) == 0xf68a) {
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this_00);
        iVar1 = user_creature::CCreatureMgr::SetOverSkillTime(this_01,(int *)(param_3 + 4));
        if (iVar1 == 0) {
          param_3[8] = (ParamBase)0x1;
        }
        else {
          param_3[8] = (ParamBase)0x0;
        }
        iVar1 = 0;
      }
      else {
        iVar1 = 0x15;
      }
    }
  }
  return iVar1;
}

```

---

## read

```asm
// === 081d554e Dispatcher_GoldTakeIncreasingAmount::read  [0x081d554e-0x81d55a3] ===
 81d554e:	55                   	push   %ebp
 81d554f:	89 e5                	mov    %esp,%ebp
 81d5551:	83 ec 28             	sub    $0x28,%esp
 81d5554:	8b 45 10             	mov    0x10(%ebp),%eax
 81d5557:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d555a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d555d:	83 c0 0d             	add    $0xd,%eax
 81d5560:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5564:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5567:	89 04 24             	mov    %eax,(%esp)
 81d556a:	e8 81 7b 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d556f:	83 f0 01             	xor    $0x1,%eax
 81d5572:	84 c0                	test   %al,%al
 81d5574:	74 26                	je     81d559c <_ZN35Dispatcher_GoldTakeIncreasingAmount4readER9PacketBufR8MSG_BASE+0x4e>
 81d5576:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d557d:	00 
 81d557e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5585:	00 
 81d5586:	c7 44 24 04 20 30 bd 	movl   $0x8bd3020,0x4(%esp)
 81d558d:	08 
 81d558e:	c7 04 24 d6 38 00 00 	movl   $0x38d6,(%esp)
 81d5595:	e8 3d b3 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d559a:	eb 05                	jmp    81d55a1 <_ZN35Dispatcher_GoldTakeIncreasingAmount4readER9PacketBufR8MSG_BASE+0x53>
 81d559c:	b8 00 00 00 00       	mov    $0x0,%eax
 81d55a1:	c9                   	leave
 81d55a2:	c3                   	ret
 81d55a3:	90                   	nop

```

```c
// Dispatcher_GoldTakeIncreasingAmount::read @ 0x81d554e

/* Dispatcher_GoldTakeIncreasingAmount::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GoldTakeIncreasingAmount::read
          (Dispatcher_GoldTakeIncreasingAmount *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x38d6,
                     "virtual int Dispatcher_GoldTakeIncreasingAmount::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d56ac Dispatcher_GoldTakeIncreasingAmount::send  [0x081d56ac-0x81d574d] ===
 81d56ac:	55                   	push   %ebp
 81d56ad:	89 e5                	mov    %esp,%ebp
 81d56af:	56                   	push   %esi
 81d56b0:	53                   	push   %ebx
 81d56b1:	83 ec 20             	sub    $0x20,%esp
 81d56b4:	8b 45 10             	mov    0x10(%ebp),%eax
 81d56b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d56ba:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d56bd:	89 04 24             	mov    %eax,(%esp)
 81d56c0:	e8 87 86 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d56c5:	c7 44 24 08 74 01 00 	movl   $0x174,0x8(%esp)
 81d56cc:	00 
 81d56cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d56d4:	00 
 81d56d5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d56d8:	89 04 24             	mov    %eax,(%esp)
 81d56db:	e8 1c 62 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d56e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d56e3:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81d56e7:	0f b6 c0             	movzbl %al,%eax
 81d56ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d56ee:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d56f1:	89 04 24             	mov    %eax,(%esp)
 81d56f4:	e8 27 62 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d56f9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d5700:	00 
 81d5701:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d5704:	89 04 24             	mov    %eax,(%esp)
 81d5707:	e8 4c 62 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d570c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d570f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5713:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5716:	89 04 24             	mov    %eax,(%esp)
 81d5719:	e8 9c 2e 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d571e:	eb 1b                	jmp    81d573b <_ZN35Dispatcher_GoldTakeIncreasingAmount4sendEP5CUserR9ParamBase+0x8f>
 81d5720:	89 d3                	mov    %edx,%ebx
 81d5722:	89 c6                	mov    %eax,%esi
 81d5724:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d5727:	89 04 24             	mov    %eax,(%esp)
 81d572a:	e8 51 87 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d572f:	89 f0                	mov    %esi,%eax
 81d5731:	89 da                	mov    %ebx,%edx
 81d5733:	89 04 24             	mov    %eax,(%esp)
 81d5736:	e8 15 e0 90 00       	call   8ae3750 <_Unwind_Resume>
 81d573b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d573e:	89 04 24             	mov    %eax,(%esp)
 81d5741:	e8 3a 87 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d5746:	83 c4 20             	add    $0x20,%esp
 81d5749:	5b                   	pop    %ebx
 81d574a:	5e                   	pop    %esi
 81d574b:	5d                   	pop    %ebp
 81d574c:	c3                   	ret
 81d574d:	90                   	nop

```

```c
// Dispatcher_GoldTakeIncreasingAmount::send @ 0x81d56ac

/* Dispatcher_GoldTakeIncreasingAmount::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GoldTakeIncreasingAmount::send
          (Dispatcher_GoldTakeIncreasingAmount *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d56db to 081d571d has its CatchHandler @ 081d5720 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x174);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[8]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

