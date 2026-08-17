# Dispatcher_RequestIngameAdvertisement

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## check_error

```asm
// === 081e4662 Dispatcher_RequestIngameAdvertisement::check_error  [0x081e4662-0x81e46c7] ===
 81e4662:	55                   	push   %ebp
 81e4663:	89 e5                	mov    %esp,%ebp
 81e4665:	83 ec 28             	sub    $0x28,%esp
 81e4668:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e466c:	75 07                	jne    81e4675 <_ZN37Dispatcher_RequestIngameAdvertisement11check_errorEP5CUserR8MSG_BASE+0x13>
 81e466e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e4673:	eb 50                	jmp    81e46c5 <_ZN37Dispatcher_RequestIngameAdvertisement11check_errorEP5CUserR8MSG_BASE+0x63>
 81e4675:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4678:	89 04 24             	mov    %eax,(%esp)
 81e467b:	e8 0c 5d ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e4680:	83 f8 01             	cmp    $0x1,%eax
 81e4683:	0f 9e c0             	setle  %al
 81e4686:	84 c0                	test   %al,%al
 81e4688:	74 07                	je     81e4691 <_ZN37Dispatcher_RequestIngameAdvertisement11check_errorEP5CUserR8MSG_BASE+0x2f>
 81e468a:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81e468f:	eb 34                	jmp    81e46c5 <_ZN37Dispatcher_RequestIngameAdvertisement11check_errorEP5CUserR8MSG_BASE+0x63>
 81e4691:	8b 45 10             	mov    0x10(%ebp),%eax
 81e4694:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e4697:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e469a:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81e469e:	66 83 f8 06          	cmp    $0x6,%ax
 81e46a2:	75 1c                	jne    81e46c0 <_ZN37Dispatcher_RequestIngameAdvertisement11check_errorEP5CUserR8MSG_BASE+0x5e>
 81e46a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e46a7:	89 04 24             	mov    %eax,(%esp)
 81e46aa:	e8 43 b6 04 00       	call   822fcf2 <_ZN5CUser30get_multiboxLotteryItemFailCntEv>
 81e46af:	83 f8 02             	cmp    $0x2,%eax
 81e46b2:	0f 9e c0             	setle  %al
 81e46b5:	84 c0                	test   %al,%al
 81e46b7:	74 07                	je     81e46c0 <_ZN37Dispatcher_RequestIngameAdvertisement11check_errorEP5CUserR8MSG_BASE+0x5e>
 81e46b9:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 81e46be:	eb 05                	jmp    81e46c5 <_ZN37Dispatcher_RequestIngameAdvertisement11check_errorEP5CUserR8MSG_BASE+0x63>
 81e46c0:	b8 00 00 00 00       	mov    $0x0,%eax
 81e46c5:	c9                   	leave
 81e46c6:	c3                   	ret
 81e46c7:	90                   	nop

```

```c
// Dispatcher_RequestIngameAdvertisement::check_error @ 0x81e4662

/* Dispatcher_RequestIngameAdvertisement::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RequestIngameAdvertisement::check_error
          (Dispatcher_RequestIngameAdvertisement *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 2) {
      uVar1 = 0x7fffffff;
    }
    else {
      if ((*(short *)(param_2 + 0xd) == 6) &&
         (iVar2 = CUser::get_multiboxLotteryItemFailCnt(param_1), iVar2 < 3)) {
        return 0xfffffffe;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081e43a2 Dispatcher_RequestIngameAdvertisement::process  [0x081e43a2-0x81e4661] ===
 81e43a2:	55                   	push   %ebp
 81e43a3:	89 e5                	mov    %esp,%ebp
 81e43a5:	57                   	push   %edi
 81e43a6:	56                   	push   %esi
 81e43a7:	53                   	push   %ebx
 81e43a8:	83 ec 3c             	sub    $0x3c,%esp
 81e43ab:	8b 45 14             	mov    0x14(%ebp),%eax
 81e43ae:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81e43b1:	8b 45 10             	mov    0x10(%ebp),%eax
 81e43b4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e43b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e43bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e43bf:	8b 45 08             	mov    0x8(%ebp),%eax
 81e43c2:	89 04 24             	mov    %eax,(%esp)
 81e43c5:	e8 98 02 00 00       	call   81e4662 <_ZN37Dispatcher_RequestIngameAdvertisement11check_errorEP5CUserR8MSG_BASE>
 81e43ca:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81e43cd:	89 82 40 06 00 00    	mov    %eax,0x640(%edx)
 81e43d3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e43d6:	8b 80 40 06 00 00    	mov    0x640(%eax),%eax
 81e43dc:	85 c0                	test   %eax,%eax
 81e43de:	7e 0a                	jle    81e43ea <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x48>
 81e43e0:	b8 00 00 00 00       	mov    $0x0,%eax
 81e43e5:	e9 6f 02 00 00       	jmp    81e4659 <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x2b7>
 81e43ea:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e43ed:	8b 80 40 06 00 00    	mov    0x640(%eax),%eax
 81e43f3:	85 c0                	test   %eax,%eax
 81e43f5:	79 2e                	jns    81e4425 <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x83>
 81e43f7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e43fa:	8b 80 40 06 00 00    	mov    0x640(%eax),%eax
 81e4400:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e4407:	00 
 81e4408:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e440c:	c7 44 24 04 00 11 bd 	movl   $0x8bd1100,0x4(%esp)
 81e4413:	08 
 81e4414:	c7 04 24 20 5c 00 00 	movl   $0x5c20,(%esp)
 81e441b:	e8 b7 c4 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e4420:	e9 34 02 00 00       	jmp    81e4659 <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x2b7>
 81e4425:	8b 45 10             	mov    0x10(%ebp),%eax
 81e4428:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81e442b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e442e:	0f b7 50 0d          	movzwl 0xd(%eax),%edx
 81e4432:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e4435:	66 89 90 44 06 00 00 	mov    %dx,0x644(%eax)
 81e443c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e443f:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81e4443:	0f bf d8             	movswl %ax,%ebx
 81e4446:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e4449:	8d 70 04             	lea    0x4(%eax),%esi
 81e444c:	e8 98 85 f1 ff       	call   80fc9e9 <_Z23InGameADManagerInstancev>
 81e4451:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e4455:	89 74 24 08          	mov    %esi,0x8(%esp)
 81e4459:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e445c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e4460:	89 04 24             	mov    %eax,(%esp)
 81e4463:	e8 40 8b f1 ff       	call   80fcfa8 <_ZN27CInGameAdvertisementManager33CheckIngameAdvertisementConditionEP5CUserR20stNotifyIngameADInfoi>
 81e4468:	83 f0 01             	xor    $0x1,%eax
 81e446b:	84 c0                	test   %al,%al
 81e446d:	74 12                	je     81e4481 <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0xdf>
 81e446f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e4472:	c7 80 40 06 00 00 04 	movl   $0x4,0x640(%eax)
 81e4479:	00 00 00 
 81e447c:	e9 d3 01 00 00       	jmp    81e4654 <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x2b2>
 81e4481:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e4484:	0f b6 80 3b 03 00 00 	movzbl 0x33b(%eax),%eax
 81e448b:	3c 04                	cmp    $0x4,%al
 81e448d:	0f 85 6e 01 00 00    	jne    81e4601 <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x25f>
 81e4493:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4496:	89 04 24             	mov    %eax,(%esp)
 81e4499:	e8 54 b8 04 00       	call   822fcf2 <_ZN5CUser30get_multiboxLotteryItemFailCntEv>
 81e449e:	83 f8 02             	cmp    $0x2,%eax
 81e44a1:	0f 9f c0             	setg   %al
 81e44a4:	84 c0                	test   %al,%al
 81e44a6:	0f 84 55 01 00 00    	je     81e4601 <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x25f>
 81e44ac:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e44af:	0f b6 80 3d 03 00 00 	movzbl 0x33d(%eax),%eax
 81e44b6:	84 c0                	test   %al,%al
 81e44b8:	0f 84 94 00 00 00    	je     81e4552 <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x1b0>
 81e44be:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e44c1:	8b 80 38 02 00 00    	mov    0x238(%eax),%eax
 81e44c7:	85 c0                	test   %eax,%eax
 81e44c9:	0f 84 83 00 00 00    	je     81e4552 <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x1b0>
 81e44cf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e44d2:	8b 80 38 02 00 00    	mov    0x238(%eax),%eax
 81e44d8:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81e44df:	00 
 81e44e0:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e44e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e44e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e44eb:	8b 45 08             	mov    0x8(%ebp),%eax
 81e44ee:	89 04 24             	mov    %eax,(%esp)
 81e44f1:	e8 76 06 00 00       	call   81e4b6c <_ZN37Dispatcher_RequestIngameAdvertisement24sendRewardItemSystemMailEP5CUsermi>
 81e44f6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e44f9:	0f b6 80 3c 03 00 00 	movzbl 0x33c(%eax),%eax
 81e4500:	84 c0                	test   %al,%al
 81e4502:	0f 84 e5 00 00 00    	je     81e45ed <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x24b>
 81e4508:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e450b:	8b 78 04             	mov    0x4(%eax),%edi
 81e450e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e4511:	0f b6 80 3b 03 00 00 	movzbl 0x33b(%eax),%eax
 81e4518:	0f be f0             	movsbl %al,%esi
 81e451b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e451e:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81e4522:	0f bf d8             	movswl %ax,%ebx
 81e4525:	e8 bf 84 f1 ff       	call   80fc9e9 <_Z23InGameADManagerInstancev>
 81e452a:	89 7c 24 14          	mov    %edi,0x14(%esp)
 81e452e:	89 74 24 10          	mov    %esi,0x10(%esp)
 81e4532:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e4536:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 81e453d:	00 
 81e453e:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e4541:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e4545:	89 04 24             	mov    %eax,(%esp)
 81e4548:	e8 09 95 f1 ff       	call   80fda56 <_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj>
 81e454d:	e9 9c 00 00 00       	jmp    81e45ee <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x24c>
 81e4552:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e4555:	0f b6 80 3d 03 00 00 	movzbl 0x33d(%eax),%eax
 81e455c:	84 c0                	test   %al,%al
 81e455e:	0f 85 8a 00 00 00    	jne    81e45ee <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x24c>
 81e4564:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e4567:	8b 80 3c 05 00 00    	mov    0x53c(%eax),%eax
 81e456d:	85 c0                	test   %eax,%eax
 81e456f:	74 7d                	je     81e45ee <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x24c>
 81e4571:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e4574:	8b 80 3c 05 00 00    	mov    0x53c(%eax),%eax
 81e457a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81e4581:	00 
 81e4582:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e4586:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4589:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e458d:	8b 45 08             	mov    0x8(%ebp),%eax
 81e4590:	89 04 24             	mov    %eax,(%esp)
 81e4593:	e8 d4 05 00 00       	call   81e4b6c <_ZN37Dispatcher_RequestIngameAdvertisement24sendRewardItemSystemMailEP5CUsermi>
 81e4598:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e459b:	0f b6 80 3c 03 00 00 	movzbl 0x33c(%eax),%eax
 81e45a2:	84 c0                	test   %al,%al
 81e45a4:	74 48                	je     81e45ee <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x24c>
 81e45a6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e45a9:	8b 78 04             	mov    0x4(%eax),%edi
 81e45ac:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e45af:	0f b6 80 3b 03 00 00 	movzbl 0x33b(%eax),%eax
 81e45b6:	0f be f0             	movsbl %al,%esi
 81e45b9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e45bc:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81e45c0:	0f bf d8             	movswl %ax,%ebx
 81e45c3:	e8 21 84 f1 ff       	call   80fc9e9 <_Z23InGameADManagerInstancev>
 81e45c8:	89 7c 24 14          	mov    %edi,0x14(%esp)
 81e45cc:	89 74 24 10          	mov    %esi,0x10(%esp)
 81e45d0:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e45d4:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 81e45db:	00 
 81e45dc:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e45df:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e45e3:	89 04 24             	mov    %eax,(%esp)
 81e45e6:	e8 6b 94 f1 ff       	call   80fda56 <_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj>
 81e45eb:	eb 01                	jmp    81e45ee <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x24c>
 81e45ed:	90                   	nop
 81e45ee:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e45f5:	00 
 81e45f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e45f9:	89 04 24             	mov    %eax,(%esp)
 81e45fc:	e8 43 99 f1 ff       	call   80fdf44 <_ZN5CUser30set_multiboxLotteryItemFailCntEi>
 81e4601:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e4604:	0f b6 80 3c 03 00 00 	movzbl 0x33c(%eax),%eax
 81e460b:	84 c0                	test   %al,%al
 81e460d:	74 45                	je     81e4654 <_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase+0x2b2>
 81e460f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e4612:	8b 78 04             	mov    0x4(%eax),%edi
 81e4615:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e4618:	0f b6 80 3b 03 00 00 	movzbl 0x33b(%eax),%eax
 81e461f:	0f be f0             	movsbl %al,%esi
 81e4622:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e4625:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81e4629:	0f bf d8             	movswl %ax,%ebx
 81e462c:	e8 b8 83 f1 ff       	call   80fc9e9 <_Z23InGameADManagerInstancev>
 81e4631:	89 7c 24 14          	mov    %edi,0x14(%esp)
 81e4635:	89 74 24 10          	mov    %esi,0x10(%esp)
 81e4639:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e463d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e4644:	00 
 81e4645:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e4648:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e464c:	89 04 24             	mov    %eax,(%esp)
 81e464f:	e8 02 94 f1 ff       	call   80fda56 <_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj>
 81e4654:	b8 00 00 00 00       	mov    $0x0,%eax
 81e4659:	83 c4 3c             	add    $0x3c,%esp
 81e465c:	5b                   	pop    %ebx
 81e465d:	5e                   	pop    %esi
 81e465e:	5f                   	pop    %edi
 81e465f:	5d                   	pop    %ebp
 81e4660:	c3                   	ret
 81e4661:	90                   	nop

```

```c
// Dispatcher_RequestIngameAdvertisement::process @ 0x81e43a2

/* Dispatcher_RequestIngameAdvertisement::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RequestIngameAdvertisement::process
          (Dispatcher_RequestIngameAdvertisement *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  ParamBase PVar1;
  short sVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  CInGameAdvertisementManager *pCVar6;
  int iVar7;
  
  uVar5 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 0x640) = uVar5;
  if (*(int *)(param_3 + 0x640) < 1) {
    if (*(int *)(param_3 + 0x640) < 0) {
      uVar5 = LineFunc(0x5c20,
                       "virtual int Dispatcher_RequestIngameAdvertisement::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 0x640),0);
    }
    else {
      *(undefined2 *)(param_3 + 0x644) = *(undefined2 *)(param_2 + 0xd);
      sVar2 = *(short *)(param_2 + 0xd);
      pCVar6 = (CInGameAdvertisementManager *)InGameADManagerInstance();
      cVar4 = CInGameAdvertisementManager::CheckIngameAdvertisementCondition
                        (pCVar6,param_1,(stNotifyIngameADInfo *)(param_3 + 4),(int)sVar2);
      if (cVar4 == '\x01') {
        if (param_3[0x33b] == (ParamBase)0x4) {
          iVar7 = CUser::get_multiboxLotteryItemFailCnt(param_1);
          if (2 < iVar7) {
            if ((param_3[0x33d] == (ParamBase)0x0) || (*(int *)(param_3 + 0x238) == 0)) {
              if ((param_3[0x33d] == (ParamBase)0x0) && (*(int *)(param_3 + 0x53c) != 0)) {
                sendRewardItemSystemMail(this,param_1,*(ulong *)(param_3 + 0x53c),1);
                if (param_3[0x33c] != (ParamBase)0x0) {
                  uVar3 = *(uint *)(param_3 + 4);
                  PVar1 = param_3[0x33b];
                  sVar2 = *(short *)(param_2 + 0xd);
                  pCVar6 = (CInGameAdvertisementManager *)InGameADManagerInstance();
                  CInGameAdvertisementManager::WriteLog
                            (pCVar6,param_1,'\x03',sVar2,(char)PVar1,uVar3);
                }
              }
            }
            else {
              sendRewardItemSystemMail(this,param_1,*(ulong *)(param_3 + 0x238),1);
              if (param_3[0x33c] != (ParamBase)0x0) {
                uVar3 = *(uint *)(param_3 + 4);
                PVar1 = param_3[0x33b];
                sVar2 = *(short *)(param_2 + 0xd);
                pCVar6 = (CInGameAdvertisementManager *)InGameADManagerInstance();
                CInGameAdvertisementManager::WriteLog(pCVar6,param_1,'\x03',sVar2,(char)PVar1,uVar3)
                ;
              }
            }
            CUser::set_multiboxLotteryItemFailCnt(param_1,0);
          }
        }
        if (param_3[0x33c] != (ParamBase)0x0) {
          uVar3 = *(uint *)(param_3 + 4);
          PVar1 = param_3[0x33b];
          sVar2 = *(short *)(param_2 + 0xd);
          pCVar6 = (CInGameAdvertisementManager *)InGameADManagerInstance();
          CInGameAdvertisementManager::WriteLog(pCVar6,param_1,'\0',sVar2,(char)PVar1,uVar3);
        }
      }
      else {
        *(undefined4 *)(param_3 + 0x640) = 4;
      }
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## read

```asm
// === 081e434c Dispatcher_RequestIngameAdvertisement::read  [0x081e434c-0x81e43a1] ===
 81e434c:	55                   	push   %ebp
 81e434d:	89 e5                	mov    %esp,%ebp
 81e434f:	83 ec 28             	sub    $0x28,%esp
 81e4352:	8b 45 10             	mov    0x10(%ebp),%eax
 81e4355:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e4358:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e435b:	83 c0 0d             	add    $0xd,%eax
 81e435e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4362:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4365:	89 04 24             	mov    %eax,(%esp)
 81e4368:	e8 53 8c 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e436d:	83 f0 01             	xor    $0x1,%eax
 81e4370:	84 c0                	test   %al,%al
 81e4372:	74 26                	je     81e439a <_ZN37Dispatcher_RequestIngameAdvertisement4readER9PacketBufR8MSG_BASE+0x4e>
 81e4374:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e437b:	00 
 81e437c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e4383:	00 
 81e4384:	c7 44 24 04 60 11 bd 	movl   $0x8bd1160,0x4(%esp)
 81e438b:	08 
 81e438c:	c7 04 24 10 5c 00 00 	movl   $0x5c10,(%esp)
 81e4393:	e8 3f c5 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e4398:	eb 05                	jmp    81e439f <_ZN37Dispatcher_RequestIngameAdvertisement4readER9PacketBufR8MSG_BASE+0x53>
 81e439a:	b8 00 00 00 00       	mov    $0x0,%eax
 81e439f:	c9                   	leave
 81e43a0:	c3                   	ret
 81e43a1:	90                   	nop

```

```c
// Dispatcher_RequestIngameAdvertisement::read @ 0x81e434c

/* Dispatcher_RequestIngameAdvertisement::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RequestIngameAdvertisement::read
          (Dispatcher_RequestIngameAdvertisement *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x5c10,
                     "virtual int Dispatcher_RequestIngameAdvertisement::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e46c8 Dispatcher_RequestIngameAdvertisement::send  [0x081e46c8-0x81e4b6b] ===
 81e46c8:	55                   	push   %ebp
 81e46c9:	89 e5                	mov    %esp,%ebp
 81e46cb:	56                   	push   %esi
 81e46cc:	53                   	push   %ebx
 81e46cd:	83 ec 40             	sub    $0x40,%esp
 81e46d0:	8b 45 10             	mov    0x10(%ebp),%eax
 81e46d3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e46d6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e46d9:	8b 80 40 06 00 00    	mov    0x640(%eax),%eax
 81e46df:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81e46e4:	0f 84 79 04 00 00    	je     81e4b63 <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x49b>
 81e46ea:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e46ed:	8b 80 40 06 00 00    	mov    0x640(%eax),%eax
 81e46f3:	85 c0                	test   %eax,%eax
 81e46f5:	0f 85 a3 03 00 00    	jne    81e4a9e <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x3d6>
 81e46fb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e46fe:	89 04 24             	mov    %eax,(%esp)
 81e4701:	e8 46 96 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e4706:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e4709:	89 04 24             	mov    %eax,(%esp)
 81e470c:	e8 d5 71 ee ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81e4711:	c7 44 24 08 e9 01 00 	movl   $0x1e9,0x8(%esp)
 81e4718:	00 
 81e4719:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e4720:	00 
 81e4721:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e4724:	89 04 24             	mov    %eax,(%esp)
 81e4727:	e8 d0 71 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e472c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e4733:	00 
 81e4734:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e4737:	89 04 24             	mov    %eax,(%esp)
 81e473a:	e8 e1 71 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e473f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e4742:	83 c0 04             	add    $0x4,%eax
 81e4745:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e4748:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e474b:	8b 00                	mov    (%eax),%eax
 81e474d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4751:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e4754:	89 04 24             	mov    %eax,(%esp)
 81e4757:	e8 e0 71 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e475c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e475f:	0f b7 80 44 06 00 00 	movzwl 0x644(%eax),%eax
 81e4766:	98                   	cwtl
 81e4767:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e476b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e476e:	89 04 24             	mov    %eax,(%esp)
 81e4771:	e8 2e 57 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e4776:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e4779:	0f b6 80 37 03 00 00 	movzbl 0x337(%eax),%eax
 81e4780:	0f be c0             	movsbl %al,%eax
 81e4783:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4787:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e478a:	89 04 24             	mov    %eax,(%esp)
 81e478d:	e8 8e 71 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e4792:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e4795:	83 c0 04             	add    $0x4,%eax
 81e4798:	89 04 24             	mov    %eax,(%esp)
 81e479b:	e8 10 9c e9 ff       	call   807e3b0 <strlen@plt>
 81e47a0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e47a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e47a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e47aa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e47ad:	89 04 24             	mov    %eax,(%esp)
 81e47b0:	e8 87 71 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e47b5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e47b8:	8d 50 04             	lea    0x4(%eax),%edx
 81e47bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e47be:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e47c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e47c6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e47c9:	89 04 24             	mov    %eax,(%esp)
 81e47cc:	e8 13 2c fd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81e47d1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e47d4:	0f b6 80 39 03 00 00 	movzbl 0x339(%eax),%eax
 81e47db:	0f be c0             	movsbl %al,%eax
 81e47de:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e47e2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e47e5:	89 04 24             	mov    %eax,(%esp)
 81e47e8:	e8 33 71 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e47ed:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e47f0:	0f b6 80 39 03 00 00 	movzbl 0x339(%eax),%eax
 81e47f7:	84 c0                	test   %al,%al
 81e47f9:	0f 85 21 01 00 00    	jne    81e4920 <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x258>
 81e47ff:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e4802:	05 3a 03 00 00       	add    $0x33a,%eax
 81e4807:	89 04 24             	mov    %eax,(%esp)
 81e480a:	e8 a1 9b e9 ff       	call   807e3b0 <strlen@plt>
 81e480f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e4812:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4815:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4819:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e481c:	89 04 24             	mov    %eax,(%esp)
 81e481f:	e8 18 71 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e4824:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e4827:	8d 90 3a 03 00 00    	lea    0x33a(%eax),%edx
 81e482d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4830:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e4834:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e4838:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e483b:	89 04 24             	mov    %eax,(%esp)
 81e483e:	e8 a1 2b fd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81e4843:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e4846:	0f b6 80 37 03 00 00 	movzbl 0x337(%eax),%eax
 81e484d:	84 c0                	test   %al,%al
 81e484f:	75 1d                	jne    81e486e <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x1a6>
 81e4851:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e4854:	8b 80 38 05 00 00    	mov    0x538(%eax),%eax
 81e485a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e485e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e4861:	89 04 24             	mov    %eax,(%esp)
 81e4864:	e8 d3 70 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e4869:	e9 c2 01 00 00       	jmp    81e4a30 <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x368>
 81e486e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e4871:	0f b6 80 37 03 00 00 	movzbl 0x337(%eax),%eax
 81e4878:	3c 01                	cmp    $0x1,%al
 81e487a:	75 49                	jne    81e48c5 <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x1fd>
 81e487c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e487f:	05 39 04 00 00       	add    $0x439,%eax
 81e4884:	89 04 24             	mov    %eax,(%esp)
 81e4887:	e8 24 9b e9 ff       	call   807e3b0 <strlen@plt>
 81e488c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e488f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4892:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4896:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e4899:	89 04 24             	mov    %eax,(%esp)
 81e489c:	e8 9b 70 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e48a1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e48a4:	8d 90 39 04 00 00    	lea    0x439(%eax),%edx
 81e48aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e48ad:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e48b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e48b5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e48b8:	89 04 24             	mov    %eax,(%esp)
 81e48bb:	e8 24 2b fd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81e48c0:	e9 6b 01 00 00       	jmp    81e4a30 <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x368>
 81e48c5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e48c8:	0f b6 80 37 03 00 00 	movzbl 0x337(%eax),%eax
 81e48cf:	3c 03                	cmp    $0x3,%al
 81e48d1:	0f 85 59 01 00 00    	jne    81e4a30 <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x368>
 81e48d7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e48da:	05 3c 05 00 00       	add    $0x53c,%eax
 81e48df:	89 04 24             	mov    %eax,(%esp)
 81e48e2:	e8 c9 9a e9 ff       	call   807e3b0 <strlen@plt>
 81e48e7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e48ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e48ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e48f1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e48f4:	89 04 24             	mov    %eax,(%esp)
 81e48f7:	e8 40 70 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e48fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e48ff:	8d 90 3c 05 00 00    	lea    0x53c(%eax),%edx
 81e4905:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4908:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e490c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e4910:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e4913:	89 04 24             	mov    %eax,(%esp)
 81e4916:	e8 c9 2a fd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81e491b:	e9 10 01 00 00       	jmp    81e4a30 <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x368>
 81e4920:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e4923:	83 c0 36             	add    $0x36,%eax
 81e4926:	89 04 24             	mov    %eax,(%esp)
 81e4929:	e8 82 9a e9 ff       	call   807e3b0 <strlen@plt>
 81e492e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e4931:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4934:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4938:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e493b:	89 04 24             	mov    %eax,(%esp)
 81e493e:	e8 f9 6f ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e4943:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e4946:	8d 50 36             	lea    0x36(%eax),%edx
 81e4949:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e494c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e4950:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e4954:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e4957:	89 04 24             	mov    %eax,(%esp)
 81e495a:	e8 85 2a fd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81e495f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e4962:	0f b6 80 37 03 00 00 	movzbl 0x337(%eax),%eax
 81e4969:	84 c0                	test   %al,%al
 81e496b:	75 1d                	jne    81e498a <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x2c2>
 81e496d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e4970:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 81e4976:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e497a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e497d:	89 04 24             	mov    %eax,(%esp)
 81e4980:	e8 b7 6f ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e4985:	e9 a6 00 00 00       	jmp    81e4a30 <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x368>
 81e498a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e498d:	0f b6 80 37 03 00 00 	movzbl 0x337(%eax),%eax
 81e4994:	3c 01                	cmp    $0x1,%al
 81e4996:	75 46                	jne    81e49de <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x316>
 81e4998:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e499b:	05 35 01 00 00       	add    $0x135,%eax
 81e49a0:	89 04 24             	mov    %eax,(%esp)
 81e49a3:	e8 08 9a e9 ff       	call   807e3b0 <strlen@plt>
 81e49a8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e49ab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e49ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e49b2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e49b5:	89 04 24             	mov    %eax,(%esp)
 81e49b8:	e8 7f 6f ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e49bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e49c0:	8d 90 35 01 00 00    	lea    0x135(%eax),%edx
 81e49c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e49c9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e49cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e49d1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e49d4:	89 04 24             	mov    %eax,(%esp)
 81e49d7:	e8 08 2a fd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81e49dc:	eb 52                	jmp    81e4a30 <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x368>
 81e49de:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e49e1:	0f b6 80 37 03 00 00 	movzbl 0x337(%eax),%eax
 81e49e8:	3c 03                	cmp    $0x3,%al
 81e49ea:	75 44                	jne    81e4a30 <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x368>
 81e49ec:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e49ef:	05 38 02 00 00       	add    $0x238,%eax
 81e49f4:	89 04 24             	mov    %eax,(%esp)
 81e49f7:	e8 b4 99 e9 ff       	call   807e3b0 <strlen@plt>
 81e49fc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e49ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4a02:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4a06:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e4a09:	89 04 24             	mov    %eax,(%esp)
 81e4a0c:	e8 2b 6f ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e4a11:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e4a14:	8d 90 38 02 00 00    	lea    0x238(%eax),%edx
 81e4a1a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4a1d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e4a21:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e4a25:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e4a28:	89 04 24             	mov    %eax,(%esp)
 81e4a2b:	e8 b4 29 fd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81e4a30:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e4a33:	0f b6 80 38 03 00 00 	movzbl 0x338(%eax),%eax
 81e4a3a:	0f be c0             	movsbl %al,%eax
 81e4a3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4a41:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e4a44:	89 04 24             	mov    %eax,(%esp)
 81e4a47:	e8 d4 6e ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e4a4c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e4a53:	00 
 81e4a54:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e4a57:	89 04 24             	mov    %eax,(%esp)
 81e4a5a:	e8 f9 6e ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e4a5f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e4a62:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4a66:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4a69:	89 04 24             	mov    %eax,(%esp)
 81e4a6c:	e8 49 3b 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e4a71:	eb 1b                	jmp    81e4a8e <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x3c6>
 81e4a73:	89 d3                	mov    %edx,%ebx
 81e4a75:	89 c6                	mov    %eax,%esi
 81e4a77:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e4a7a:	89 04 24             	mov    %eax,(%esp)
 81e4a7d:	e8 fe 93 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e4a82:	89 f0                	mov    %esi,%eax
 81e4a84:	89 da                	mov    %ebx,%edx
 81e4a86:	89 04 24             	mov    %eax,(%esp)
 81e4a89:	e8 c2 ec 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e4a8e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e4a91:	89 04 24             	mov    %eax,(%esp)
 81e4a94:	e8 e7 93 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e4a99:	e9 c6 00 00 00       	jmp    81e4b64 <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x49c>
 81e4a9e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81e4aa1:	89 04 24             	mov    %eax,(%esp)
 81e4aa4:	e8 a3 92 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e4aa9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81e4aac:	89 04 24             	mov    %eax,(%esp)
 81e4aaf:	e8 32 6e ee ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81e4ab4:	c7 44 24 08 e9 01 00 	movl   $0x1e9,0x8(%esp)
 81e4abb:	00 
 81e4abc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e4ac3:	00 
 81e4ac4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81e4ac7:	89 04 24             	mov    %eax,(%esp)
 81e4aca:	e8 2d 6e ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e4acf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e4ad6:	00 
 81e4ad7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81e4ada:	89 04 24             	mov    %eax,(%esp)
 81e4add:	e8 3e 6e ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e4ae2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e4ae5:	8b 80 40 06 00 00    	mov    0x640(%eax),%eax
 81e4aeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4aef:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81e4af2:	89 04 24             	mov    %eax,(%esp)
 81e4af5:	e8 26 6e ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e4afa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e4afd:	0f b7 80 44 06 00 00 	movzwl 0x644(%eax),%eax
 81e4b04:	98                   	cwtl
 81e4b05:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4b09:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81e4b0c:	89 04 24             	mov    %eax,(%esp)
 81e4b0f:	e8 90 53 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e4b14:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e4b1b:	00 
 81e4b1c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81e4b1f:	89 04 24             	mov    %eax,(%esp)
 81e4b22:	e8 31 6e ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e4b27:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81e4b2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4b2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4b31:	89 04 24             	mov    %eax,(%esp)
 81e4b34:	e8 81 3a 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e4b39:	eb 1b                	jmp    81e4b56 <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x48e>
 81e4b3b:	89 d3                	mov    %edx,%ebx
 81e4b3d:	89 c6                	mov    %eax,%esi
 81e4b3f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81e4b42:	89 04 24             	mov    %eax,(%esp)
 81e4b45:	e8 36 93 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e4b4a:	89 f0                	mov    %esi,%eax
 81e4b4c:	89 da                	mov    %ebx,%edx
 81e4b4e:	89 04 24             	mov    %eax,(%esp)
 81e4b51:	e8 fa eb 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e4b56:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81e4b59:	89 04 24             	mov    %eax,(%esp)
 81e4b5c:	e8 1f 93 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e4b61:	eb 01                	jmp    81e4b64 <_ZN37Dispatcher_RequestIngameAdvertisement4sendEP5CUserR9ParamBase+0x49c>
 81e4b63:	90                   	nop
 81e4b64:	83 c4 40             	add    $0x40,%esp
 81e4b67:	5b                   	pop    %ebx
 81e4b68:	5e                   	pop    %esi
 81e4b69:	5d                   	pop    %ebp
 81e4b6a:	c3                   	ret
 81e4b6b:	90                   	nop

```

```c
// Dispatcher_RequestIngameAdvertisement::send @ 0x81e46c8

/* Dispatcher_RequestIngameAdvertisement::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_RequestIngameAdvertisement::send
          (Dispatcher_RequestIngameAdvertisement *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_30 [12];
  PacketGuard local_24 [12];
  ParamBase *local_18;
  ParamBase *local_14;
  size_t local_10;
  
  local_18 = param_2;
  if (*(int *)(param_2 + 0x640) != 0x7fffffff) {
    if (*(int *)(param_2 + 0x640) == 0) {
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 081e470c to 081e4a70 has its CatchHandler @ 081e4a73 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x1e9);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
      local_14 = local_18 + 4;
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)local_14);
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_24,(int)*(short *)(local_18 + 0x644));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)(char)local_14[0x337]);
      local_10 = strlen((char *)(local_14 + 4));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_24,(char *)(local_14 + 4),local_10);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)(char)local_14[0x339]);
      if (local_14[0x339] == (ParamBase)0x0) {
        local_10 = strlen((char *)(local_14 + 0x33a));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_14 + 0x33a),local_10);
        if (local_14[0x337] == (ParamBase)0x0) {
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(local_14 + 0x538));
        }
        else if (local_14[0x337] == (ParamBase)0x1) {
          local_10 = strlen((char *)(local_14 + 0x439));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_24,(char *)(local_14 + 0x439),local_10);
        }
        else if (local_14[0x337] == (ParamBase)0x3) {
          local_10 = strlen((char *)(local_14 + 0x53c));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_24,(char *)(local_14 + 0x53c),local_10);
        }
      }
      else {
        local_10 = strlen((char *)(local_14 + 0x36));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_14 + 0x36),local_10);
        if (local_14[0x337] == (ParamBase)0x0) {
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(local_14 + 0x234));
        }
        else if (local_14[0x337] == (ParamBase)0x1) {
          local_10 = strlen((char *)(local_14 + 0x135));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_24,(char *)(local_14 + 0x135),local_10);
        }
        else if (local_14[0x337] == (ParamBase)0x3) {
          local_10 = strlen((char *)(local_14 + 0x238));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_24,(char *)(local_14 + 0x238),local_10);
        }
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)(char)local_14[0x338]);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send(param_1,local_24);
      PacketGuard::~PacketGuard(local_24);
    }
    else {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 081e4aaf to 081e4b38 has its CatchHandler @ 081e4b3b */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x1e9);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,*(int *)(local_18 + 0x640));
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_30,(int)*(short *)(local_18 + 0x644));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send(param_1,local_30);
      PacketGuard::~PacketGuard(local_30);
    }
  }
  return;
}

```

---

## sendRewardItemSystemMail

```asm
// === 081e4b6c Dispatcher_RequestIngameAdvertisement::sendRewardItemSystemMail  [0x081e4b6c-0x81e4ccf] ===
 81e4b6c:	55                   	push   %ebp
 81e4b6d:	89 e5                	mov    %esp,%ebp
 81e4b6f:	56                   	push   %esi
 81e4b70:	53                   	push   %ebx
 81e4b71:	81 ec 90 01 00 00    	sub    $0x190,%esp
 81e4b77:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e4b7b:	0f 84 43 01 00 00    	je     81e4cc4 <_ZN37Dispatcher_RequestIngameAdvertisement24sendRewardItemSystemMailEP5CUsermi+0x158>
 81e4b81:	8b 5d 10             	mov    0x10(%ebp),%ebx
 81e4b84:	e8 12 76 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e4b89:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e4b8d:	89 04 24             	mov    %eax,(%esp)
 81e4b90:	e8 9d ae 17 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81e4b95:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e4b98:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e4b9c:	0f 84 23 01 00 00    	je     81e4cc5 <_ZN37Dispatcher_RequestIngameAdvertisement24sendRewardItemSystemMailEP5CUsermi+0x159>
 81e4ba2:	8d 45 99             	lea    -0x67(%ebp),%eax
 81e4ba5:	89 04 24             	mov    %eax,(%esp)
 81e4ba8:	e8 a7 6c ee ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81e4bad:	8b 45 10             	mov    0x10(%ebp),%eax
 81e4bb0:	89 45 9b             	mov    %eax,-0x65(%ebp)
 81e4bb3:	e8 e3 75 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e4bb8:	8b 40 0c             	mov    0xc(%eax),%eax
 81e4bbb:	8b 55 14             	mov    0x14(%ebp),%edx
 81e4bbe:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81e4bc2:	8d 55 99             	lea    -0x67(%ebp),%edx
 81e4bc5:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e4bc9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e4bd0:	00 
 81e4bd1:	89 04 24             	mov    %eax,(%esp)
 81e4bd4:	e8 df d3 32 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 81e4bd9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e4be0:	00 
 81e4be1:	c7 44 24 08 b9 1b bc 	movl   $0x8bc1bb9,0x8(%esp)
 81e4be8:	08 
 81e4be9:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81e4bf0:	00 
 81e4bf1:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81e4bf8:	e8 01 0c 8c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81e4bfd:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 81e4c04:	00 
 81e4c05:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4c09:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 81e4c0c:	89 04 24             	mov    %eax,(%esp)
 81e4c0f:	e8 bc 8c e9 ff       	call   807d8d0 <strncpy@plt>
 81e4c14:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e4c1b:	00 
 81e4c1c:	c7 44 24 08 cd 1b bc 	movl   $0x8bc1bcd,0x8(%esp)
 81e4c23:	08 
 81e4c24:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81e4c2b:	00 
 81e4c2c:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81e4c33:	e8 c6 0b 8c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81e4c38:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 81e4c3f:	00 
 81e4c40:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4c44:	8d 85 99 fe ff ff    	lea    -0x167(%ebp),%eax
 81e4c4a:	89 04 24             	mov    %eax,(%esp)
 81e4c4d:	e8 7e 8c e9 ff       	call   807d8d0 <strncpy@plt>
 81e4c52:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4c55:	89 04 24             	mov    %eax,(%esp)
 81e4c58:	e8 33 70 ee ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81e4c5d:	89 c3                	mov    %eax,%ebx
 81e4c5f:	8d 85 99 fe ff ff    	lea    -0x167(%ebp),%eax
 81e4c65:	89 04 24             	mov    %eax,(%esp)
 81e4c68:	e8 43 97 e9 ff       	call   807e3b0 <strlen@plt>
 81e4c6d:	89 c6                	mov    %eax,%esi
 81e4c6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4c72:	89 04 24             	mov    %eax,(%esp)
 81e4c75:	e8 d4 6f ee ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81e4c7a:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 81e4c81:	00 
 81e4c82:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 81e4c89:	00 
 81e4c8a:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 81e4c8e:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 81e4c95:	00 
 81e4c96:	89 74 24 14          	mov    %esi,0x14(%esp)
 81e4c9a:	8d 95 99 fe ff ff    	lea    -0x167(%ebp),%edx
 81e4ca0:	89 54 24 10          	mov    %edx,0x10(%esp)
 81e4ca4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e4ca8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e4caf:	00 
 81e4cb0:	8d 45 99             	lea    -0x67(%ebp),%eax
 81e4cb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4cb7:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 81e4cba:	89 04 24             	mov    %eax,(%esp)
 81e4cbd:	e8 26 09 37 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 81e4cc2:	eb 01                	jmp    81e4cc5 <_ZN37Dispatcher_RequestIngameAdvertisement24sendRewardItemSystemMailEP5CUsermi+0x159>
 81e4cc4:	90                   	nop
 81e4cc5:	81 c4 90 01 00 00    	add    $0x190,%esp
 81e4ccb:	5b                   	pop    %ebx
 81e4ccc:	5e                   	pop    %esi
 81e4ccd:	5d                   	pop    %ebp
 81e4cce:	c3                   	ret
 81e4ccf:	90                   	nop

```

```c
// Dispatcher_RequestIngameAdvertisement::sendRewardItemSystemMail @ 0x81e4b6c

/* Dispatcher_RequestIngameAdvertisement::sendRewardItemSystemMail(CUser*, unsigned long, int) */

void __thiscall
Dispatcher_RequestIngameAdvertisement::sendRewardItemSystemMail
          (Dispatcher_RequestIngameAdvertisement *this,CUser *param_1,ulong param_2,int param_3)

{
  CDataManager *this_00;
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  char local_16b [256];
  Inven_Item local_6b [2];
  ulong local_69;
  char local_2e [30];
  int local_10;
  
  if (param_1 != (CUser *)0x0) {
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = CDataManager::find_item(this_00,param_2);
    if (local_10 != 0) {
      Inven_Item::Inven_Item(local_6b);
      local_69 = param_2;
      iVar1 = G_CDataManager();
      CItemList::create_item(*(CItemList **)(iVar1 + 0xc),0,local_6b,param_3);
      pcVar2 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_295",(bool *)0x0);
      strncpy(local_2e,pcVar2,0x1d);
      pcVar2 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_296",(bool *)0x0);
      strncpy(local_16b,pcVar2,0xff);
      uVar3 = CUser::GetServerGroup(param_1);
      sVar4 = strlen(local_16b);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (local_2e,local_6b,0,uVar5,local_16b,sVar4,0,uVar3,0,0);
    }
  }
  return;
}

```

