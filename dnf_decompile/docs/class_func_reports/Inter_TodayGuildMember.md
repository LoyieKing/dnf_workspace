# Inter_TodayGuildMember

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e358a Inter_TodayGuildMember::dispatch_sig  [0x084e358a-0x84e378f] ===
 84e358a:	55                   	push   %ebp
 84e358b:	89 e5                	mov    %esp,%ebp
 84e358d:	56                   	push   %esi
 84e358e:	53                   	push   %ebx
 84e358f:	83 ec 30             	sub    $0x30,%esp
 84e3592:	8b 45 10             	mov    0x10(%ebp),%eax
 84e3595:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e3598:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e359b:	89 04 24             	mov    %eax,(%esp)
 84e359e:	e8 e9 6d bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e35a3:	83 f8 02             	cmp    $0x2,%eax
 84e35a6:	0f 9e c0             	setle  %al
 84e35a9:	84 c0                	test   %al,%al
 84e35ab:	74 0a                	je     84e35b7 <_ZN22Inter_TodayGuildMember12dispatch_sigEP5CUserPci+0x2d>
 84e35ad:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e35b2:	e9 d0 01 00 00       	jmp    84e3787 <_ZN22Inter_TodayGuildMember12dispatch_sigEP5CUserPci+0x1fd>
 84e35b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e35ba:	8b 58 0e             	mov    0xe(%eax),%ebx
 84e35bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e35c0:	89 04 24             	mov    %eax,(%esp)
 84e35c3:	e8 86 86 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e35c8:	39 c3                	cmp    %eax,%ebx
 84e35ca:	0f 95 c0             	setne  %al
 84e35cd:	84 c0                	test   %al,%al
 84e35cf:	74 0a                	je     84e35db <_ZN22Inter_TodayGuildMember12dispatch_sigEP5CUserPci+0x51>
 84e35d1:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e35d6:	e9 ac 01 00 00       	jmp    84e3787 <_ZN22Inter_TodayGuildMember12dispatch_sigEP5CUserPci+0x1fd>
 84e35db:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e35de:	8b 40 16             	mov    0x16(%eax),%eax
 84e35e1:	85 c0                	test   %eax,%eax
 84e35e3:	74 1c                	je     84e3601 <_ZN22Inter_TodayGuildMember12dispatch_sigEP5CUserPci+0x77>
 84e35e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e35e8:	8b 58 16             	mov    0x16(%eax),%ebx
 84e35eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e35ee:	89 04 24             	mov    %eax,(%esp)
 84e35f1:	e8 58 86 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e35f6:	39 c3                	cmp    %eax,%ebx
 84e35f8:	75 07                	jne    84e3601 <_ZN22Inter_TodayGuildMember12dispatch_sigEP5CUserPci+0x77>
 84e35fa:	b8 01 00 00 00       	mov    $0x1,%eax
 84e35ff:	eb 05                	jmp    84e3606 <_ZN22Inter_TodayGuildMember12dispatch_sigEP5CUserPci+0x7c>
 84e3601:	b8 00 00 00 00       	mov    $0x0,%eax
 84e3606:	84 c0                	test   %al,%al
 84e3608:	74 13                	je     84e361d <_ZN22Inter_TodayGuildMember12dispatch_sigEP5CUserPci+0x93>
 84e360a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e3611:	00 
 84e3612:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e3615:	89 04 24             	mov    %eax,(%esp)
 84e3618:	e8 f3 98 00 00       	call   84ecf10 <_ZN5CUser19SetTodayGuildMemberEb>
 84e361d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3620:	89 04 24             	mov    %eax,(%esp)
 84e3623:	e8 24 a7 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e3628:	c7 44 24 08 30 01 00 	movl   $0x130,0x8(%esp)
 84e362f:	00 
 84e3630:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e3637:	00 
 84e3638:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e363b:	89 04 24             	mov    %eax,(%esp)
 84e363e:	e8 b9 82 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e3643:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3646:	8b 40 16             	mov    0x16(%eax),%eax
 84e3649:	85 c0                	test   %eax,%eax
 84e364b:	0f 84 d1 00 00 00    	je     84e3722 <_ZN22Inter_TodayGuildMember12dispatch_sigEP5CUserPci+0x198>
 84e3651:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e3658:	00 
 84e3659:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e365c:	89 04 24             	mov    %eax,(%esp)
 84e365f:	e8 bc 82 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e3664:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3667:	83 c0 1a             	add    $0x1a,%eax
 84e366a:	89 04 24             	mov    %eax,(%esp)
 84e366d:	e8 3e ad b9 ff       	call   807e3b0 <strlen@plt>
 84e3672:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e3675:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3678:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e367c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e367f:	89 04 24             	mov    %eax,(%esp)
 84e3682:	e8 b5 82 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3687:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e368a:	8d 50 1a             	lea    0x1a(%eax),%edx
 84e368d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3690:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e3694:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e3698:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e369b:	89 04 24             	mov    %eax,(%esp)
 84e369e:	e8 41 3d cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e36a3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e36a6:	0f b6 40 38          	movzbl 0x38(%eax),%eax
 84e36aa:	0f be c0             	movsbl %al,%eax
 84e36ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e36b1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e36b4:	89 04 24             	mov    %eax,(%esp)
 84e36b7:	e8 64 82 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e36bc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e36bf:	0f b6 40 39          	movzbl 0x39(%eax),%eax
 84e36c3:	0f be c0             	movsbl %al,%eax
 84e36c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e36ca:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e36cd:	89 04 24             	mov    %eax,(%esp)
 84e36d0:	e8 4b 82 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e36d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e36d8:	0f b6 40 3a          	movzbl 0x3a(%eax),%eax
 84e36dc:	0f be c0             	movsbl %al,%eax
 84e36df:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e36e3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e36e6:	89 04 24             	mov    %eax,(%esp)
 84e36e9:	e8 32 82 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e36ee:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e36f1:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 84e36f5:	0f be c0             	movsbl %al,%eax
 84e36f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e36fc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e36ff:	89 04 24             	mov    %eax,(%esp)
 84e3702:	e8 19 82 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e3707:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e370a:	0f b6 40 3b          	movzbl 0x3b(%eax),%eax
 84e370e:	0f be c0             	movsbl %al,%eax
 84e3711:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3715:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3718:	89 04 24             	mov    %eax,(%esp)
 84e371b:	e8 00 82 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e3720:	eb 13                	jmp    84e3735 <_ZN22Inter_TodayGuildMember12dispatch_sigEP5CUserPci+0x1ab>
 84e3722:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e3729:	00 
 84e372a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e372d:	89 04 24             	mov    %eax,(%esp)
 84e3730:	e8 eb 81 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e3735:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e373c:	00 
 84e373d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3740:	89 04 24             	mov    %eax,(%esp)
 84e3743:	e8 10 82 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e3748:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e374b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e374f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e3752:	89 04 24             	mov    %eax,(%esp)
 84e3755:	e8 60 4e 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e375a:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e375f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3762:	89 04 24             	mov    %eax,(%esp)
 84e3765:	e8 16 a7 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e376a:	eb 1b                	jmp    84e3787 <_ZN22Inter_TodayGuildMember12dispatch_sigEP5CUserPci+0x1fd>
 84e376c:	89 d3                	mov    %edx,%ebx
 84e376e:	89 c6                	mov    %eax,%esi
 84e3770:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3773:	89 04 24             	mov    %eax,(%esp)
 84e3776:	e8 05 a7 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e377b:	89 f0                	mov    %esi,%eax
 84e377d:	89 da                	mov    %ebx,%edx
 84e377f:	89 04 24             	mov    %eax,(%esp)
 84e3782:	e8 c9 ff 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e3787:	89 d8                	mov    %ebx,%eax
 84e3789:	83 c4 30             	add    $0x30,%esp
 84e378c:	5b                   	pop    %ebx
 84e378d:	5e                   	pop    %esi
 84e378e:	5d                   	pop    %ebp
 84e378f:	c3                   	ret

```

```c
// Inter_TodayGuildMember::dispatch_sig @ 0x84e358a

/* Inter_TodayGuildMember::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_TodayGuildMember::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  local_14 = param_3;
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar2) &&
     (iVar2 = *(int *)(local_14 + 0xe),
     iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar2 == iVar3)) {
    if ((*(int *)(local_14 + 0x16) == 0) ||
       (iVar2 = *(int *)(local_14 + 0x16),
       iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar2 != iVar3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      CUser::SetTodayGuildMember((CUser *)param_2,true);
    }
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e363e to 084e3759 has its CatchHandler @ 084e376c */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x130);
    if (*(int *)(local_14 + 0x16) == 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      local_10 = strlen((char *)(local_14 + 0x1a));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x1a),local_10)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x38));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x39));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x3a));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x3c));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x3b));
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}

```

