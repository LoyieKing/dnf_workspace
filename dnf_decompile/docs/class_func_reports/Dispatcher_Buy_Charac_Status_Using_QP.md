# Dispatcher_Buy_Charac_Status_Using_QP

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d63e6 Dispatcher_Buy_Charac_Status_Using_QP::check_error  [0x081d63e6-0x81d641b] ===
 81d63e6:	55                   	push   %ebp
 81d63e7:	89 e5                	mov    %esp,%ebp
 81d63e9:	83 ec 18             	sub    $0x18,%esp
 81d63ec:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81d63f0:	75 07                	jne    81d63f9 <_ZN37Dispatcher_Buy_Charac_Status_Using_QP11check_errorEP5CUserR8MSG_BASE+0x13>
 81d63f2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d63f7:	eb 21                	jmp    81d641a <_ZN37Dispatcher_Buy_Charac_Status_Using_QP11check_errorEP5CUserR8MSG_BASE+0x34>
 81d63f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d63fc:	89 04 24             	mov    %eax,(%esp)
 81d63ff:	e8 88 3f f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d6404:	83 f8 03             	cmp    $0x3,%eax
 81d6407:	0f 95 c0             	setne  %al
 81d640a:	84 c0                	test   %al,%al
 81d640c:	74 07                	je     81d6415 <_ZN37Dispatcher_Buy_Charac_Status_Using_QP11check_errorEP5CUserR8MSG_BASE+0x2f>
 81d640e:	b8 63 00 00 00       	mov    $0x63,%eax
 81d6413:	eb 05                	jmp    81d641a <_ZN37Dispatcher_Buy_Charac_Status_Using_QP11check_errorEP5CUserR8MSG_BASE+0x34>
 81d6415:	b8 00 00 00 00       	mov    $0x0,%eax
 81d641a:	c9                   	leave
 81d641b:	c3                   	ret

```

```c
// Dispatcher_Buy_Charac_Status_Using_QP::check_error @ 0x81d63e6

/* Dispatcher_Buy_Charac_Status_Using_QP::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_Buy_Charac_Status_Using_QP::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 99;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081d64b4 Dispatcher_Buy_Charac_Status_Using_QP::process  [0x081d64b4-0x81d65c1] ===
 81d64b4:	55                   	push   %ebp
 81d64b5:	89 e5                	mov    %esp,%ebp
 81d64b7:	83 ec 48             	sub    $0x48,%esp
 81d64ba:	8b 45 10             	mov    0x10(%ebp),%eax
 81d64bd:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d64c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d64c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d64c8:	8b 45 08             	mov    0x8(%ebp),%eax
 81d64cb:	89 04 24             	mov    %eax,(%esp)
 81d64ce:	e8 13 ff ff ff       	call   81d63e6 <_ZN37Dispatcher_Buy_Charac_Status_Using_QP11check_errorEP5CUserR8MSG_BASE>
 81d64d3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d64d6:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81d64da:	7e 0a                	jle    81d64e6 <_ZN37Dispatcher_Buy_Charac_Status_Using_QP7processEP5CUserR8MSG_BASER9ParamBase+0x32>
 81d64dc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d64e1:	e9 d9 00 00 00       	jmp    81d65bf <_ZN37Dispatcher_Buy_Charac_Status_Using_QP7processEP5CUserR8MSG_BASER9ParamBase+0x10b>
 81d64e6:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81d64ea:	79 29                	jns    81d6515 <_ZN37Dispatcher_Buy_Charac_Status_Using_QP7processEP5CUserR8MSG_BASER9ParamBase+0x61>
 81d64ec:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d64f3:	00 
 81d64f4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d64fb:	00 
 81d64fc:	c7 44 24 04 a0 2a bd 	movl   $0x8bd2aa0,0x4(%esp)
 81d6503:	08 
 81d6504:	c7 04 24 c9 3f 00 00 	movl   $0x3fc9,(%esp)
 81d650b:	e8 c7 a3 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d6510:	e9 aa 00 00 00       	jmp    81d65bf <_ZN37Dispatcher_Buy_Charac_Status_Using_QP7processEP5CUserR8MSG_BASER9ParamBase+0x10b>
 81d6515:	8b 45 14             	mov    0x14(%ebp),%eax
 81d6518:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d651b:	8b 45 10             	mov    0x10(%ebp),%eax
 81d651e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d6521:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81d6528:	00 
 81d6529:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d652c:	89 04 24             	mov    %eax,(%esp)
 81d652f:	e8 50 70 f0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 81d6534:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d6537:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81d653b:	75 11                	jne    81d654e <_ZN37Dispatcher_Buy_Charac_Status_Using_QP7processEP5CUserR8MSG_BASER9ParamBase+0x9a>
 81d653d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d6540:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 81d6547:	b8 00 00 00 00       	mov    $0x0,%eax
 81d654c:	eb 71                	jmp    81d65bf <_ZN37Dispatcher_Buy_Charac_Status_Using_QP7processEP5CUserR8MSG_BASER9ParamBase+0x10b>
 81d654e:	66 c7 45 e2 00 00    	movw   $0x0,-0x1e(%ebp)
 81d6554:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d6557:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81d655b:	0f b6 d0             	movzbl %al,%edx
 81d655e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d6561:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d6565:	0f b6 c0             	movzbl %al,%eax
 81d6568:	8d 4d e2             	lea    -0x1e(%ebp),%ecx
 81d656b:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81d656f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d6573:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d6577:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d657a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d657e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d6581:	89 04 24             	mov    %eax,(%esp)
 81d6584:	e8 7d 8d 41 00       	call   85ef306 <_ZN10CQuestShop9buyStatusEP5CUserhhRs>
 81d6589:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d658c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d6590:	74 10                	je     81d65a2 <_ZN37Dispatcher_Buy_Charac_Status_Using_QP7processEP5CUserR8MSG_BASER9ParamBase+0xee>
 81d6592:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81d6595:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d6598:	89 50 08             	mov    %edx,0x8(%eax)
 81d659b:	b8 00 00 00 00       	mov    $0x0,%eax
 81d65a0:	eb 1d                	jmp    81d65bf <_ZN37Dispatcher_Buy_Charac_Status_Using_QP7processEP5CUserR8MSG_BASER9ParamBase+0x10b>
 81d65a2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d65a5:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81d65a9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d65ac:	88 50 04             	mov    %dl,0x4(%eax)
 81d65af:	0f b7 55 e2          	movzwl -0x1e(%ebp),%edx
 81d65b3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d65b6:	66 89 50 06          	mov    %dx,0x6(%eax)
 81d65ba:	b8 00 00 00 00       	mov    $0x0,%eax
 81d65bf:	c9                   	leave
 81d65c0:	c3                   	ret
 81d65c1:	90                   	nop

```

```c
// Dispatcher_Buy_Charac_Status_Using_QP::process @ 0x81d64b4

/* Dispatcher_Buy_Charac_Status_Using_QP::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Buy_Charac_Status_Using_QP::process
          (Dispatcher_Buy_Charac_Status_Using_QP *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined4 uVar1;
  int iVar2;
  MSG_BASE *pMVar3;
  short local_22;
  int local_20;
  ParamBase *local_1c;
  MSG_BASE *local_18;
  CQuestShop *local_14;
  
  pMVar3 = param_2;
  local_20 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (local_20 < 1) {
    if (local_20 < 0) {
      uVar1 = LineFunc(0x3fc9,
                       "virtual int Dispatcher_Buy_Charac_Status_Using_QP::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0,0);
    }
    else {
      local_1c = param_3;
      local_18 = param_2;
      local_14 = (CQuestShop *)CUser::GetCharacExpandData(param_1,0xb,pMVar3);
      if (local_14 == (CQuestShop *)0x0) {
        *(undefined4 *)(local_1c + 8) = 1;
        uVar1 = 0;
      }
      else {
        local_22 = 0;
        iVar2 = CQuestShop::buyStatus
                          (local_14,param_1,(uchar)local_18[0xd],(uchar)local_18[0xe],&local_22);
        if (iVar2 == 0) {
          *(MSG_BASE *)(local_1c + 4) = local_18[0xd];
          *(short *)(local_1c + 6) = local_22;
          uVar1 = 0;
        }
        else {
          *(int *)(local_1c + 8) = iVar2;
          uVar1 = 0;
        }
      }
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081d641c Dispatcher_Buy_Charac_Status_Using_QP::read  [0x081d641c-0x81d64b3] ===
 81d641c:	55                   	push   %ebp
 81d641d:	89 e5                	mov    %esp,%ebp
 81d641f:	83 ec 28             	sub    $0x28,%esp
 81d6422:	8b 45 10             	mov    0x10(%ebp),%eax
 81d6425:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d6428:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d642b:	83 c0 0d             	add    $0xd,%eax
 81d642e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d6432:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6435:	89 04 24             	mov    %eax,(%esp)
 81d6438:	e8 33 6b 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81d643d:	83 f0 01             	xor    $0x1,%eax
 81d6440:	84 c0                	test   %al,%al
 81d6442:	74 26                	je     81d646a <_ZN37Dispatcher_Buy_Charac_Status_Using_QP4readER9PacketBufR8MSG_BASE+0x4e>
 81d6444:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d644b:	00 
 81d644c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d6453:	00 
 81d6454:	c7 44 24 04 00 2b bd 	movl   $0x8bd2b00,0x4(%esp)
 81d645b:	08 
 81d645c:	c7 04 24 b8 3f 00 00 	movl   $0x3fb8,(%esp)
 81d6463:	e8 6f a4 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d6468:	eb 47                	jmp    81d64b1 <_ZN37Dispatcher_Buy_Charac_Status_Using_QP4readER9PacketBufR8MSG_BASE+0x95>
 81d646a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d646d:	83 c0 0e             	add    $0xe,%eax
 81d6470:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d6474:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6477:	89 04 24             	mov    %eax,(%esp)
 81d647a:	e8 f1 6a 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81d647f:	83 f0 01             	xor    $0x1,%eax
 81d6482:	84 c0                	test   %al,%al
 81d6484:	74 26                	je     81d64ac <_ZN37Dispatcher_Buy_Charac_Status_Using_QP4readER9PacketBufR8MSG_BASE+0x90>
 81d6486:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d648d:	00 
 81d648e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d6495:	00 
 81d6496:	c7 44 24 04 00 2b bd 	movl   $0x8bd2b00,0x4(%esp)
 81d649d:	08 
 81d649e:	c7 04 24 ba 3f 00 00 	movl   $0x3fba,(%esp)
 81d64a5:	e8 2d a4 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d64aa:	eb 05                	jmp    81d64b1 <_ZN37Dispatcher_Buy_Charac_Status_Using_QP4readER9PacketBufR8MSG_BASE+0x95>
 81d64ac:	b8 00 00 00 00       	mov    $0x0,%eax
 81d64b1:	c9                   	leave
 81d64b2:	c3                   	ret
 81d64b3:	90                   	nop

```

```c
// Dispatcher_Buy_Charac_Status_Using_QP::read @ 0x81d641c

/* Dispatcher_Buy_Charac_Status_Using_QP::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Buy_Charac_Status_Using_QP::read
          (Dispatcher_Buy_Charac_Status_Using_QP *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x3fba,
                       "virtual int Dispatcher_Buy_Charac_Status_Using_QP::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x3fb8,
                     "virtual int Dispatcher_Buy_Charac_Status_Using_QP::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d65c2 Dispatcher_Buy_Charac_Status_Using_QP::send  [0x081d65c2-0x81d6745] ===
 81d65c2:	55                   	push   %ebp
 81d65c3:	89 e5                	mov    %esp,%ebp
 81d65c5:	56                   	push   %esi
 81d65c6:	53                   	push   %ebx
 81d65c7:	83 ec 30             	sub    $0x30,%esp
 81d65ca:	8b 45 10             	mov    0x10(%ebp),%eax
 81d65cd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d65d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d65d3:	8b 40 08             	mov    0x8(%eax),%eax
 81d65d6:	85 c0                	test   %eax,%eax
 81d65d8:	0f 85 c6 00 00 00    	jne    81d66a4 <_ZN37Dispatcher_Buy_Charac_Status_Using_QP4sendEP5CUserR9ParamBase+0xe2>
 81d65de:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d65e1:	89 04 24             	mov    %eax,(%esp)
 81d65e4:	e8 63 77 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d65e9:	c7 44 24 08 8f 01 00 	movl   $0x18f,0x8(%esp)
 81d65f0:	00 
 81d65f1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d65f8:	00 
 81d65f9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d65fc:	89 04 24             	mov    %eax,(%esp)
 81d65ff:	e8 f8 52 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d6604:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d660b:	00 
 81d660c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d660f:	89 04 24             	mov    %eax,(%esp)
 81d6612:	e8 09 53 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d6617:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d661a:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81d661e:	0f b6 c0             	movzbl %al,%eax
 81d6621:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d6625:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d6628:	89 04 24             	mov    %eax,(%esp)
 81d662b:	e8 f0 52 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d6630:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d6633:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 81d6637:	98                   	cwtl
 81d6638:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d663c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d663f:	89 04 24             	mov    %eax,(%esp)
 81d6642:	e8 5d 38 f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d6647:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d664e:	00 
 81d664f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d6652:	89 04 24             	mov    %eax,(%esp)
 81d6655:	e8 fe 52 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d665a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d665d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d6661:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6664:	89 04 24             	mov    %eax,(%esp)
 81d6667:	e8 4e 1f 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d666c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d666f:	89 04 24             	mov    %eax,(%esp)
 81d6672:	e8 ad 45 4b 00       	call   868ac24 <_ZN5CUser12sendCharacQpEv>
 81d6677:	eb 1b                	jmp    81d6694 <_ZN37Dispatcher_Buy_Charac_Status_Using_QP4sendEP5CUserR9ParamBase+0xd2>
 81d6679:	89 d3                	mov    %edx,%ebx
 81d667b:	89 c6                	mov    %eax,%esi
 81d667d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d6680:	89 04 24             	mov    %eax,(%esp)
 81d6683:	e8 f8 77 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d6688:	89 f0                	mov    %esi,%eax
 81d668a:	89 da                	mov    %ebx,%edx
 81d668c:	89 04 24             	mov    %eax,(%esp)
 81d668f:	e8 bc d0 90 00       	call   8ae3750 <_Unwind_Resume>
 81d6694:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d6697:	89 04 24             	mov    %eax,(%esp)
 81d669a:	e8 e1 77 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d669f:	e9 9b 00 00 00       	jmp    81d673f <_ZN37Dispatcher_Buy_Charac_Status_Using_QP4sendEP5CUserR9ParamBase+0x17d>
 81d66a4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d66a7:	89 04 24             	mov    %eax,(%esp)
 81d66aa:	e8 9d 76 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d66af:	c7 44 24 08 8f 01 00 	movl   $0x18f,0x8(%esp)
 81d66b6:	00 
 81d66b7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d66be:	00 
 81d66bf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d66c2:	89 04 24             	mov    %eax,(%esp)
 81d66c5:	e8 32 52 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d66ca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d66d1:	00 
 81d66d2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d66d5:	89 04 24             	mov    %eax,(%esp)
 81d66d8:	e8 43 52 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d66dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d66e0:	8b 40 08             	mov    0x8(%eax),%eax
 81d66e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d66e7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d66ea:	89 04 24             	mov    %eax,(%esp)
 81d66ed:	e8 b2 37 f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d66f2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d66f9:	00 
 81d66fa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d66fd:	89 04 24             	mov    %eax,(%esp)
 81d6700:	e8 53 52 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d6705:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d6708:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d670c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d670f:	89 04 24             	mov    %eax,(%esp)
 81d6712:	e8 a3 1e 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d6717:	eb 1b                	jmp    81d6734 <_ZN37Dispatcher_Buy_Charac_Status_Using_QP4sendEP5CUserR9ParamBase+0x172>
 81d6719:	89 d3                	mov    %edx,%ebx
 81d671b:	89 c6                	mov    %eax,%esi
 81d671d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d6720:	89 04 24             	mov    %eax,(%esp)
 81d6723:	e8 58 77 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d6728:	89 f0                	mov    %esi,%eax
 81d672a:	89 da                	mov    %ebx,%edx
 81d672c:	89 04 24             	mov    %eax,(%esp)
 81d672f:	e8 1c d0 90 00       	call   8ae3750 <_Unwind_Resume>
 81d6734:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d6737:	89 04 24             	mov    %eax,(%esp)
 81d673a:	e8 41 77 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d673f:	83 c4 30             	add    $0x30,%esp
 81d6742:	5b                   	pop    %ebx
 81d6743:	5e                   	pop    %esi
 81d6744:	5d                   	pop    %ebp
 81d6745:	c3                   	ret

```

```c
// Dispatcher_Buy_Charac_Status_Using_QP::send @ 0x81d65c2

/* Dispatcher_Buy_Charac_Status_Using_QP::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Buy_Charac_Status_Using_QP::send
          (Dispatcher_Buy_Charac_Status_Using_QP *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 8) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d65ff to 081d6676 has its CatchHandler @ 081d6679 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,399);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[4]);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 6));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    CUser::sendCharacQp(param_1);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081d66c5 to 081d6716 has its CatchHandler @ 081d6719 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,399);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*(int *)(local_10 + 8));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}

```

