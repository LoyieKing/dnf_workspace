# Dispatcher_ExpertExtraction

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d962e Dispatcher_ExpertExtraction::check_error  [0x081d962e-0x81d96ff] ===
 81d962e:	55                   	push   %ebp
 81d962f:	89 e5                	mov    %esp,%ebp
 81d9631:	53                   	push   %ebx
 81d9632:	83 ec 34             	sub    $0x34,%esp
 81d9635:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81d9639:	75 0a                	jne    81d9645 <_ZN27Dispatcher_ExpertExtraction11check_errorEP5CUserR8MSG_BASE+0x17>
 81d963b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d9640:	e9 b4 00 00 00       	jmp    81d96f9 <_ZN27Dispatcher_ExpertExtraction11check_errorEP5CUserR8MSG_BASE+0xcb>
 81d9645:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9648:	89 04 24             	mov    %eax,(%esp)
 81d964b:	e8 3c 0d f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d9650:	83 f8 02             	cmp    $0x2,%eax
 81d9653:	0f 9e c0             	setle  %al
 81d9656:	84 c0                	test   %al,%al
 81d9658:	74 0a                	je     81d9664 <_ZN27Dispatcher_ExpertExtraction11check_errorEP5CUserR8MSG_BASE+0x36>
 81d965a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d965f:	e9 95 00 00 00       	jmp    81d96f9 <_ZN27Dispatcher_ExpertExtraction11check_errorEP5CUserR8MSG_BASE+0xcb>
 81d9664:	8b 45 10             	mov    0x10(%ebp),%eax
 81d9667:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d966a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d966d:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d9671:	0f be c0             	movsbl %al,%eax
 81d9674:	89 04 24             	mov    %eax,(%esp)
 81d9677:	e8 88 92 2c 00       	call   84a2904 <_ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE>
 81d967c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d967f:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 81d9683:	75 07                	jne    81d968c <_ZN27Dispatcher_ExpertExtraction11check_errorEP5CUserR8MSG_BASE+0x5e>
 81d9685:	b8 01 00 00 00       	mov    $0x1,%eax
 81d968a:	eb 6d                	jmp    81d96f9 <_ZN27Dispatcher_ExpertExtraction11check_errorEP5CUserR8MSG_BASE+0xcb>
 81d968c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81d968f:	a1 00 f8 41 09       	mov    0x941f800,%eax
 81d9694:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d9698:	89 04 24             	mov    %eax,(%esp)
 81d969b:	e8 c6 9a 2c 00       	call   84a3166 <_ZN17expert_extraction14CExtractionMgr13get_extracterEj>
 81d96a0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d96a3:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81d96a7:	75 07                	jne    81d96b0 <_ZN27Dispatcher_ExpertExtraction11check_errorEP5CUserR8MSG_BASE+0x82>
 81d96a9:	b8 01 00 00 00       	mov    $0x1,%eax
 81d96ae:	eb 49                	jmp    81d96f9 <_ZN27Dispatcher_ExpertExtraction11check_errorEP5CUserR8MSG_BASE+0xcb>
 81d96b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d96b3:	8b 00                	mov    (%eax),%eax
 81d96b5:	83 c0 0c             	add    $0xc,%eax
 81d96b8:	8b 18                	mov    (%eax),%ebx
 81d96ba:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d96bd:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81d96c1:	0f bf c8             	movswl %ax,%ecx
 81d96c4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d96c7:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81d96cb:	0f bf d0             	movswl %ax,%edx
 81d96ce:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d96d1:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d96d5:	0f be c0             	movsbl %al,%eax
 81d96d8:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81d96dc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d96e0:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d96e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d96e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d96eb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d96ee:	89 04 24             	mov    %eax,(%esp)
 81d96f1:	ff d3                	call   *%ebx
 81d96f3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d96f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d96f9:	83 c4 34             	add    $0x34,%esp
 81d96fc:	5b                   	pop    %ebx
 81d96fd:	5d                   	pop    %ebp
 81d96fe:	c3                   	ret
 81d96ff:	90                   	nop

```

```c
// Dispatcher_ExpertExtraction::check_error @ 0x81d962e

/* Dispatcher_ExpertExtraction::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ExpertExtraction::check_error
          (Dispatcher_ExpertExtraction *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 3) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar3 = expert_extraction::GetExtracterType((int)(char)param_2[0xd]);
      if (uVar3 == 3) {
        uVar1 = 1;
      }
      else {
        piVar4 = (int *)expert_extraction::CExtractionMgr::get_extracter
                                  (GlobalData::g_ExtractionMgr,uVar3);
        if (piVar4 == (int *)0x0) {
          uVar1 = 1;
        }
        else {
          uVar1 = (**(code **)(*piVar4 + 0xc))
                            (piVar4,param_1,(int)(char)param_2[0xd],(int)*(short *)(param_2 + 0xe),
                             (int)*(short *)(param_2 + 0x10));
        }
      }
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081d9412 Dispatcher_ExpertExtraction::process  [0x081d9412-0x81d962d] ===
 81d9412:	55                   	push   %ebp
 81d9413:	89 e5                	mov    %esp,%ebp
 81d9415:	56                   	push   %esi
 81d9416:	53                   	push   %ebx
 81d9417:	83 ec 50             	sub    $0x50,%esp
 81d941a:	8b 45 14             	mov    0x14(%ebp),%eax
 81d941d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d9420:	8b 45 10             	mov    0x10(%ebp),%eax
 81d9423:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d9427:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d942a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d942e:	8b 45 08             	mov    0x8(%ebp),%eax
 81d9431:	89 04 24             	mov    %eax,(%esp)
 81d9434:	e8 f5 01 00 00       	call   81d962e <_ZN27Dispatcher_ExpertExtraction11check_errorEP5CUserR8MSG_BASE>
 81d9439:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81d943c:	89 42 04             	mov    %eax,0x4(%edx)
 81d943f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d9442:	8b 40 04             	mov    0x4(%eax),%eax
 81d9445:	85 c0                	test   %eax,%eax
 81d9447:	7e 0a                	jle    81d9453 <_ZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBase+0x41>
 81d9449:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d944e:	e9 d1 01 00 00       	jmp    81d9624 <_ZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBase+0x212>
 81d9453:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d9456:	8b 40 04             	mov    0x4(%eax),%eax
 81d9459:	85 c0                	test   %eax,%eax
 81d945b:	79 2d                	jns    81d948a <_ZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBase+0x78>
 81d945d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d9460:	8b 40 04             	mov    0x4(%eax),%eax
 81d9463:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d946a:	00 
 81d946b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d946f:	c7 44 24 04 c0 24 bd 	movl   $0x8bd24c0,0x4(%esp)
 81d9476:	08 
 81d9477:	c7 04 24 bf 45 00 00 	movl   $0x45bf,(%esp)
 81d947e:	e8 54 74 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d9483:	89 c3                	mov    %eax,%ebx
 81d9485:	e9 9a 01 00 00       	jmp    81d9624 <_ZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBase+0x212>
 81d948a:	8b 45 10             	mov    0x10(%ebp),%eax
 81d948d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d9490:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d9493:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d9497:	0f be c0             	movsbl %al,%eax
 81d949a:	89 04 24             	mov    %eax,(%esp)
 81d949d:	e8 62 94 2c 00       	call   84a2904 <_ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE>
 81d94a2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d94a5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81d94a8:	a1 00 f8 41 09       	mov    0x941f800,%eax
 81d94ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d94b1:	89 04 24             	mov    %eax,(%esp)
 81d94b4:	e8 ad 9c 2c 00       	call   84a3166 <_ZN17expert_extraction14CExtractionMgr13get_extracterEj>
 81d94b9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d94bc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d94c0:	75 32                	jne    81d94f4 <_ZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBase+0xe2>
 81d94c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d94c5:	89 04 24             	mov    %eax,(%esp)
 81d94c8:	e8 a1 0e f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d94cd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d94d1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d94d8:	00 
 81d94d9:	c7 44 24 04 c0 24 bd 	movl   $0x8bd24c0,0x4(%esp)
 81d94e0:	08 
 81d94e1:	c7 04 24 cb 45 00 00 	movl   $0x45cb,(%esp)
 81d94e8:	e8 ea 73 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d94ed:	89 c3                	mov    %eax,%ebx
 81d94ef:	e9 30 01 00 00       	jmp    81d9624 <_ZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBase+0x212>
 81d94f4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d94f7:	89 04 24             	mov    %eax,(%esp)
 81d94fa:	e8 d7 b4 f5 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 81d94ff:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d9502:	89 04 24             	mov    %eax,(%esp)
 81d9505:	e8 38 0e fa ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 81d950a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d950d:	8b 00                	mov    (%eax),%eax
 81d950f:	83 c0 08             	add    $0x8,%eax
 81d9512:	8b 08                	mov    (%eax),%ecx
 81d9514:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d9517:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81d951b:	98                   	cwtl
 81d951c:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81d951f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d9523:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d9527:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d952a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d952e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d9531:	89 04 24             	mov    %eax,(%esp)
 81d9534:	ff d1                	call   *%ecx
 81d9536:	83 f0 01             	xor    $0x1,%eax
 81d9539:	84 c0                	test   %al,%al
 81d953b:	74 14                	je     81d9551 <_ZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBase+0x13f>
 81d953d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d9540:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 81d9547:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d954c:	e9 c8 00 00 00       	jmp    81d9619 <_ZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBase+0x207>
 81d9551:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81d9554:	89 04 24             	mov    %eax,(%esp)
 81d9557:	e8 50 4c eb ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 81d955c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81d955f:	89 04 24             	mov    %eax,(%esp)
 81d9562:	e8 07 d6 eb ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 81d9567:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d956a:	8b 00                	mov    (%eax),%eax
 81d956c:	83 c0 10             	add    $0x10,%eax
 81d956f:	8b 08                	mov    (%eax),%ecx
 81d9571:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d9574:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81d9578:	98                   	cwtl
 81d9579:	8d 55 d0             	lea    -0x30(%ebp),%edx
 81d957c:	89 54 24 10          	mov    %edx,0x10(%esp)
 81d9580:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81d9583:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d9587:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d958b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d958e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d9592:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d9595:	89 04 24             	mov    %eax,(%esp)
 81d9598:	ff d1                	call   *%ecx
 81d959a:	83 f0 01             	xor    $0x1,%eax
 81d959d:	84 c0                	test   %al,%al
 81d959f:	74 11                	je     81d95b2 <_ZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBase+0x1a0>
 81d95a1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d95a4:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81d95ab:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d95b0:	eb 3f                	jmp    81d95f1 <_ZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBase+0x1df>
 81d95b2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d95b5:	0f b7 50 10          	movzwl 0x10(%eax),%edx
 81d95b9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d95bc:	66 89 50 08          	mov    %dx,0x8(%eax)
 81d95c0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d95c3:	8d 50 0c             	lea    0xc(%eax),%edx
 81d95c6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81d95c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d95cd:	89 14 24             	mov    %edx,(%esp)
 81d95d0:	e8 fd 39 ef ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 81d95d5:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d95da:	eb 15                	jmp    81d95f1 <_ZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBase+0x1df>
 81d95dc:	89 d3                	mov    %edx,%ebx
 81d95de:	89 c6                	mov    %eax,%esi
 81d95e0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81d95e3:	89 04 24             	mov    %eax,(%esp)
 81d95e6:	e8 ef a7 ea ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 81d95eb:	89 f0                	mov    %esi,%eax
 81d95ed:	89 da                	mov    %ebx,%edx
 81d95ef:	eb 0d                	jmp    81d95fe <_ZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBase+0x1ec>
 81d95f1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81d95f4:	89 04 24             	mov    %eax,(%esp)
 81d95f7:	e8 de a7 ea ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 81d95fc:	eb 1b                	jmp    81d9619 <_ZN27Dispatcher_ExpertExtraction7processEP5CUserR8MSG_BASER9ParamBase+0x207>
 81d95fe:	89 d3                	mov    %edx,%ebx
 81d9600:	89 c6                	mov    %eax,%esi
 81d9602:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d9605:	89 04 24             	mov    %eax,(%esp)
 81d9608:	e8 dd b3 f5 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 81d960d:	89 f0                	mov    %esi,%eax
 81d960f:	89 da                	mov    %ebx,%edx
 81d9611:	89 04 24             	mov    %eax,(%esp)
 81d9614:	e8 37 a1 90 00       	call   8ae3750 <_Unwind_Resume>
 81d9619:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d961c:	89 04 24             	mov    %eax,(%esp)
 81d961f:	e8 c6 b3 f5 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 81d9624:	89 d8                	mov    %ebx,%eax
 81d9626:	83 c4 50             	add    $0x50,%esp
 81d9629:	5b                   	pop    %ebx
 81d962a:	5e                   	pop    %esi
 81d962b:	5d                   	pop    %ebp
 81d962c:	c3                   	ret
 81d962d:	90                   	nop

```

```c
// Dispatcher_ExpertExtraction::process @ 0x81d9412

/* Dispatcher_ExpertExtraction::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ExpertExtraction::process
          (Dispatcher_ExpertExtraction *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  vector<int,std::allocator<int>> local_34 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_28 [12];
  ParamBase *local_1c;
  MSG_BASE *local_18;
  uint local_14;
  int *local_10;
  
  local_1c = param_3;
  uVar2 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_1c + 4) = uVar2;
  if (*(int *)(local_1c + 4) < 1) {
    if (*(int *)(local_1c + 4) < 0) {
      uVar2 = LineFunc(0x45bf,
                       "virtual int Dispatcher_ExpertExtraction::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_1c + 4),0);
    }
    else {
      local_18 = param_2;
      local_14 = expert_extraction::GetExtracterType((int)(char)param_2[0xd]);
      local_10 = (int *)expert_extraction::CExtractionMgr::get_extracter
                                  (GlobalData::g_ExtractionMgr,local_14);
      if (local_10 == (int *)0x0) {
        uVar3 = CUser::get_acc_id(param_1);
        uVar2 = LineFunc(0x45cb,
                         "virtual int Dispatcher_ExpertExtraction::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar3);
      }
      else {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_28);
                    /* try { // try from 081d9505 to 081d955b has its CatchHandler @ 081d95fe */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(local_28);
        cVar1 = (**(code **)(*local_10 + 8))
                          (local_10,param_1,(int)*(short *)(local_18 + 0x10),local_28);
        if (cVar1 == '\x01') {
          std::vector<int,std::allocator<int>>::vector(local_34);
                    /* try { // try from 081d9562 to 081d95d4 has its CatchHandler @ 081d95dc */
          std::vector<int,std::allocator<int>>::clear(local_34);
          cVar1 = (**(code **)(*local_10 + 0x10))
                            (local_10,param_1,(int)*(short *)(local_18 + 0x10),local_28,local_34);
          if (cVar1 == '\x01') {
            *(undefined2 *)(local_1c + 8) = *(undefined2 *)(local_18 + 0x10);
            std::vector<int,std::allocator<int>>::operator=
                      ((vector<int,std::allocator<int>> *)(local_1c + 0xc),(vector *)local_34);
          }
          else {
            *(undefined4 *)(local_1c + 4) = 0x11;
          }
                    /* try { // try from 081d95f7 to 081d95fb has its CatchHandler @ 081d95fe */
          std::vector<int,std::allocator<int>>::~vector(local_34);
        }
        else {
          *(undefined4 *)(local_1c + 4) = 1;
        }
        uVar2 = 0;
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_28);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## read

```asm
// === 081d9336 Dispatcher_ExpertExtraction::read  [0x081d9336-0x81d9411] ===
 81d9336:	55                   	push   %ebp
 81d9337:	89 e5                	mov    %esp,%ebp
 81d9339:	83 ec 28             	sub    $0x28,%esp
 81d933c:	8b 45 10             	mov    0x10(%ebp),%eax
 81d933f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d9342:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d9345:	83 c0 0d             	add    $0xd,%eax
 81d9348:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d934c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d934f:	89 04 24             	mov    %eax,(%esp)
 81d9352:	e8 cb 3b 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d9357:	83 f0 01             	xor    $0x1,%eax
 81d935a:	84 c0                	test   %al,%al
 81d935c:	74 29                	je     81d9387 <_ZN27Dispatcher_ExpertExtraction4readER9PacketBufR8MSG_BASE+0x51>
 81d935e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d9365:	00 
 81d9366:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d936d:	00 
 81d936e:	c7 44 24 04 20 25 bd 	movl   $0x8bd2520,0x4(%esp)
 81d9375:	08 
 81d9376:	c7 04 24 ac 45 00 00 	movl   $0x45ac,(%esp)
 81d937d:	e8 55 75 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d9382:	e9 89 00 00 00       	jmp    81d9410 <_ZN27Dispatcher_ExpertExtraction4readER9PacketBufR8MSG_BASE+0xda>
 81d9387:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d938a:	83 c0 0e             	add    $0xe,%eax
 81d938d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d9391:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9394:	89 04 24             	mov    %eax,(%esp)
 81d9397:	e8 24 3c 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d939c:	83 f0 01             	xor    $0x1,%eax
 81d939f:	84 c0                	test   %al,%al
 81d93a1:	74 26                	je     81d93c9 <_ZN27Dispatcher_ExpertExtraction4readER9PacketBufR8MSG_BASE+0x93>
 81d93a3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d93aa:	00 
 81d93ab:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d93b2:	00 
 81d93b3:	c7 44 24 04 20 25 bd 	movl   $0x8bd2520,0x4(%esp)
 81d93ba:	08 
 81d93bb:	c7 04 24 ae 45 00 00 	movl   $0x45ae,(%esp)
 81d93c2:	e8 10 75 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d93c7:	eb 47                	jmp    81d9410 <_ZN27Dispatcher_ExpertExtraction4readER9PacketBufR8MSG_BASE+0xda>
 81d93c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d93cc:	83 c0 10             	add    $0x10,%eax
 81d93cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d93d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d93d6:	89 04 24             	mov    %eax,(%esp)
 81d93d9:	e8 e2 3b 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d93de:	83 f0 01             	xor    $0x1,%eax
 81d93e1:	84 c0                	test   %al,%al
 81d93e3:	74 26                	je     81d940b <_ZN27Dispatcher_ExpertExtraction4readER9PacketBufR8MSG_BASE+0xd5>
 81d93e5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d93ec:	00 
 81d93ed:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d93f4:	00 
 81d93f5:	c7 44 24 04 20 25 bd 	movl   $0x8bd2520,0x4(%esp)
 81d93fc:	08 
 81d93fd:	c7 04 24 b0 45 00 00 	movl   $0x45b0,(%esp)
 81d9404:	e8 ce 74 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d9409:	eb 05                	jmp    81d9410 <_ZN27Dispatcher_ExpertExtraction4readER9PacketBufR8MSG_BASE+0xda>
 81d940b:	b8 00 00 00 00       	mov    $0x0,%eax
 81d9410:	c9                   	leave
 81d9411:	c3                   	ret

```

```c
// Dispatcher_ExpertExtraction::read @ 0x81d9336

/* Dispatcher_ExpertExtraction::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ExpertExtraction::read
          (Dispatcher_ExpertExtraction *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x45b0,
                         "virtual int Dispatcher_ExpertExtraction::read(PacketBuf&, MSG_BASE&)",0,0)
        ;
      }
    }
    else {
      uVar2 = LineFunc(0x45ae,"virtual int Dispatcher_ExpertExtraction::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x45ac,"virtual int Dispatcher_ExpertExtraction::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d9700 Dispatcher_ExpertExtraction::send  [0x081d9700-0x81d98c3] ===
 81d9700:	55                   	push   %ebp
 81d9701:	89 e5                	mov    %esp,%ebp
 81d9703:	56                   	push   %esi
 81d9704:	53                   	push   %ebx
 81d9705:	83 ec 40             	sub    $0x40,%esp
 81d9708:	8b 45 10             	mov    0x10(%ebp),%eax
 81d970b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d970e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d9711:	8b 40 04             	mov    0x4(%eax),%eax
 81d9714:	85 c0                	test   %eax,%eax
 81d9716:	0f 85 81 01 00 00    	jne    81d989d <_ZN27Dispatcher_ExpertExtraction4sendEP5CUserR9ParamBase+0x19d>
 81d971c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d971f:	89 04 24             	mov    %eax,(%esp)
 81d9722:	e8 25 46 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d9727:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d972a:	89 04 24             	mov    %eax,(%esp)
 81d972d:	e8 b4 21 ef ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81d9732:	c7 44 24 08 a0 01 00 	movl   $0x1a0,0x8(%esp)
 81d9739:	00 
 81d973a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d9741:	00 
 81d9742:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d9745:	89 04 24             	mov    %eax,(%esp)
 81d9748:	e8 af 21 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d974d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d9754:	00 
 81d9755:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d9758:	89 04 24             	mov    %eax,(%esp)
 81d975b:	e8 c0 21 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d9760:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d9763:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81d9767:	98                   	cwtl
 81d9768:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d976c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d976f:	89 04 24             	mov    %eax,(%esp)
 81d9772:	e8 2d 07 f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d9777:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d977a:	83 c0 0c             	add    $0xc,%eax
 81d977d:	89 04 24             	mov    %eax,(%esp)
 81d9780:	e8 3b 4a eb ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 81d9785:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81d9788:	ba ab aa aa aa       	mov    $0xaaaaaaab,%edx
 81d978d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81d9790:	f7 e2                	mul    %edx
 81d9792:	89 d0                	mov    %edx,%eax
 81d9794:	d1 e8                	shr    $1,%eax
 81d9796:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d9799:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d979c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d97a0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d97a3:	89 04 24             	mov    %eax,(%esp)
 81d97a6:	e8 75 21 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d97ab:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d97ae:	83 c0 0c             	add    $0xc,%eax
 81d97b1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d97b4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81d97bb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81d97c2:	eb 79                	jmp    81d983d <_ZN27Dispatcher_ExpertExtraction4sendEP5CUserR9ParamBase+0x13d>
 81d97c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d97c7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81d97cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d97cf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d97d2:	89 04 24             	mov    %eax,(%esp)
 81d97d5:	e8 02 4a eb ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 81d97da:	8b 00                	mov    (%eax),%eax
 81d97dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d97e0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d97e3:	89 04 24             	mov    %eax,(%esp)
 81d97e6:	e8 b9 06 f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d97eb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d97ee:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81d97f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d97f6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d97f9:	89 04 24             	mov    %eax,(%esp)
 81d97fc:	e8 db 49 eb ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 81d9801:	8b 00                	mov    (%eax),%eax
 81d9803:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d9807:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d980a:	89 04 24             	mov    %eax,(%esp)
 81d980d:	e8 2a 21 ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d9812:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d9815:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81d9819:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d981d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d9820:	89 04 24             	mov    %eax,(%esp)
 81d9823:	e8 b4 49 eb ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 81d9828:	8b 00                	mov    (%eax),%eax
 81d982a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d982e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d9831:	89 04 24             	mov    %eax,(%esp)
 81d9834:	e8 03 21 ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d9839:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81d983d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d9840:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 81d9843:	0f 9c c0             	setl   %al
 81d9846:	84 c0                	test   %al,%al
 81d9848:	0f 85 76 ff ff ff    	jne    81d97c4 <_ZN27Dispatcher_ExpertExtraction4sendEP5CUserR9ParamBase+0xc4>
 81d984e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d9855:	00 
 81d9856:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d9859:	89 04 24             	mov    %eax,(%esp)
 81d985c:	e8 f7 20 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d9861:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d9864:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d9868:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d986b:	89 04 24             	mov    %eax,(%esp)
 81d986e:	e8 47 ed 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d9873:	eb 1b                	jmp    81d9890 <_ZN27Dispatcher_ExpertExtraction4sendEP5CUserR9ParamBase+0x190>
 81d9875:	89 d3                	mov    %edx,%ebx
 81d9877:	89 c6                	mov    %eax,%esi
 81d9879:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d987c:	89 04 24             	mov    %eax,(%esp)
 81d987f:	e8 fc 45 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d9884:	89 f0                	mov    %esi,%eax
 81d9886:	89 da                	mov    %ebx,%edx
 81d9888:	89 04 24             	mov    %eax,(%esp)
 81d988b:	e8 c0 9e 90 00       	call   8ae3750 <_Unwind_Resume>
 81d9890:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d9893:	89 04 24             	mov    %eax,(%esp)
 81d9896:	e8 e5 45 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d989b:	eb 20                	jmp    81d98bd <_ZN27Dispatcher_ExpertExtraction4sendEP5CUserR9ParamBase+0x1bd>
 81d989d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d98a0:	8b 40 04             	mov    0x4(%eax),%eax
 81d98a3:	0f b6 c0             	movzbl %al,%eax
 81d98a6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d98aa:	c7 44 24 04 a0 01 00 	movl   $0x1a0,0x4(%esp)
 81d98b1:	00 
 81d98b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d98b5:	89 04 24             	mov    %eax,(%esp)
 81d98b8:	e8 85 26 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d98bd:	83 c4 40             	add    $0x40,%esp
 81d98c0:	5b                   	pop    %ebx
 81d98c1:	5e                   	pop    %esi
 81d98c2:	5d                   	pop    %ebp
 81d98c3:	c3                   	ret

```

```c
// Dispatcher_ExpertExtraction::send @ 0x81d9700

/* Dispatcher_ExpertExtraction::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ExpertExtraction::send
          (Dispatcher_ExpertExtraction *this,CUser *param_1,ParamBase *param_2)

{
  uint uVar1;
  int *piVar2;
  PacketGuard local_2c [12];
  ParamBase *local_20;
  uint local_1c;
  vector<int,std::allocator<int>> *local_18;
  uint local_14;
  int local_10;
  
  local_20 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 081d972d to 081d9872 has its CatchHandler @ 081d9875 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x1a0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(int)*(short *)(local_20 + 8));
    local_1c = std::vector<int,std::allocator<int>>::size
                         ((vector<int,std::allocator<int>> *)(local_20 + 0xc));
    local_1c = local_1c / 3;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,local_1c);
    local_18 = (vector<int,std::allocator<int>> *)(local_20 + 0xc);
    local_14 = 0;
    for (local_10 = 0; uVar1 = local_14, local_10 < (int)local_1c; local_10 = local_10 + 1) {
      local_14 = local_14 + 1;
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[](local_18,uVar1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,*piVar2);
      uVar1 = local_14;
      local_14 = local_14 + 1;
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[](local_18,uVar1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*piVar2);
      uVar1 = local_14;
      local_14 = local_14 + 1;
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[](local_18,uVar1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*piVar2);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
    CUser::Send(param_1,local_2c);
    PacketGuard::~PacketGuard(local_2c);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1a0,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

