# Inter_CheckJoinGuild

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e3790 Inter_CheckJoinGuild::dispatch_sig  [0x084e3790-0x84e3923] ===
 84e3790:	55                   	push   %ebp
 84e3791:	89 e5                	mov    %esp,%ebp
 84e3793:	56                   	push   %esi
 84e3794:	53                   	push   %ebx
 84e3795:	83 ec 30             	sub    $0x30,%esp
 84e3798:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e379b:	89 04 24             	mov    %eax,(%esp)
 84e379e:	e8 e9 6b bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e37a3:	83 f8 02             	cmp    $0x2,%eax
 84e37a6:	0f 9e c0             	setle  %al
 84e37a9:	84 c0                	test   %al,%al
 84e37ab:	74 0a                	je     84e37b7 <_ZN20Inter_CheckJoinGuild12dispatch_sigEP5CUserPci+0x27>
 84e37ad:	b8 00 00 00 00       	mov    $0x0,%eax
 84e37b2:	e9 66 01 00 00       	jmp    84e391d <_ZN20Inter_CheckJoinGuild12dispatch_sigEP5CUserPci+0x18d>
 84e37b7:	8b 45 10             	mov    0x10(%ebp),%eax
 84e37ba:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e37bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e37c0:	8b 00                	mov    (%eax),%eax
 84e37c2:	85 c0                	test   %eax,%eax
 84e37c4:	74 24                	je     84e37ea <_ZN20Inter_CheckJoinGuild12dispatch_sigEP5CUserPci+0x5a>
 84e37c6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e37c9:	8b 00                	mov    (%eax),%eax
 84e37cb:	0f b6 c0             	movzbl %al,%eax
 84e37ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e37d2:	c7 44 24 04 5c 01 00 	movl   $0x15c,0x4(%esp)
 84e37d9:	00 
 84e37da:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e37dd:	89 04 24             	mov    %eax,(%esp)
 84e37e0:	e8 5d 87 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e37e5:	e9 2e 01 00 00       	jmp    84e3918 <_ZN20Inter_CheckJoinGuild12dispatch_sigEP5CUserPci+0x188>
 84e37ea:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e37ed:	89 04 24             	mov    %eax,(%esp)
 84e37f0:	e8 57 a5 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e37f5:	c7 44 24 08 5c 01 00 	movl   $0x15c,0x8(%esp)
 84e37fc:	00 
 84e37fd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e3804:	00 
 84e3805:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3808:	89 04 24             	mov    %eax,(%esp)
 84e380b:	e8 ec 80 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e3810:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e3817:	00 
 84e3818:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e381b:	89 04 24             	mov    %eax,(%esp)
 84e381e:	e8 fd 80 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e3823:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3826:	83 c0 22             	add    $0x22,%eax
 84e3829:	89 04 24             	mov    %eax,(%esp)
 84e382c:	e8 7f ab b9 ff       	call   807e3b0 <strlen@plt>
 84e3831:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e3834:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3837:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e383b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e383e:	89 04 24             	mov    %eax,(%esp)
 84e3841:	e8 f6 80 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3846:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3849:	8d 50 22             	lea    0x22(%eax),%edx
 84e384c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e384f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e3853:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e3857:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e385a:	89 04 24             	mov    %eax,(%esp)
 84e385d:	e8 82 3b cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e3862:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3865:	83 c0 04             	add    $0x4,%eax
 84e3868:	89 04 24             	mov    %eax,(%esp)
 84e386b:	e8 40 ab b9 ff       	call   807e3b0 <strlen@plt>
 84e3870:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e3873:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3876:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e387a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e387d:	89 04 24             	mov    %eax,(%esp)
 84e3880:	e8 b7 80 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3885:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3888:	8d 50 04             	lea    0x4(%eax),%edx
 84e388b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e388e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e3892:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e3896:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3899:	89 04 24             	mov    %eax,(%esp)
 84e389c:	e8 43 3b cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e38a1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e38a4:	8b 40 3c             	mov    0x3c(%eax),%eax
 84e38a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e38ab:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e38ae:	89 04 24             	mov    %eax,(%esp)
 84e38b1:	e8 86 80 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e38b6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e38b9:	8b 40 40             	mov    0x40(%eax),%eax
 84e38bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e38c0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e38c3:	89 04 24             	mov    %eax,(%esp)
 84e38c6:	e8 71 80 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e38cb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e38d2:	00 
 84e38d3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e38d6:	89 04 24             	mov    %eax,(%esp)
 84e38d9:	e8 7a 80 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e38de:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e38e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e38e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e38e8:	89 04 24             	mov    %eax,(%esp)
 84e38eb:	e8 ca 4c 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e38f0:	eb 1b                	jmp    84e390d <_ZN20Inter_CheckJoinGuild12dispatch_sigEP5CUserPci+0x17d>
 84e38f2:	89 d3                	mov    %edx,%ebx
 84e38f4:	89 c6                	mov    %eax,%esi
 84e38f6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e38f9:	89 04 24             	mov    %eax,(%esp)
 84e38fc:	e8 7f a5 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e3901:	89 f0                	mov    %esi,%eax
 84e3903:	89 da                	mov    %ebx,%edx
 84e3905:	89 04 24             	mov    %eax,(%esp)
 84e3908:	e8 43 fe 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e390d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3910:	89 04 24             	mov    %eax,(%esp)
 84e3913:	e8 68 a5 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e3918:	b8 00 00 00 00       	mov    $0x0,%eax
 84e391d:	83 c4 30             	add    $0x30,%esp
 84e3920:	5b                   	pop    %ebx
 84e3921:	5e                   	pop    %esi
 84e3922:	5d                   	pop    %ebp
 84e3923:	c3                   	ret

```

```c
// Inter_CheckJoinGuild::dispatch_sig @ 0x84e3790

/* Inter_CheckJoinGuild::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CheckJoinGuild::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_14 = param_3;
    if (*(int *)param_3 == 0) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e380b to 084e38ef has its CatchHandler @ 084e38f2 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x15c);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      local_10 = strlen((char *)(local_14 + 0x22));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x22),local_10)
      ;
      local_10 = strlen((char *)(local_14 + 4));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 4),local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x3c));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x40));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x15c,*(uint *)param_3 & 0xff);
    }
  }
  return 0;
}

```

