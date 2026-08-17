# Inter_ReplyGuildLetter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d28ca Inter_ReplyGuildLetter::dispatch_sig  [0x084d28ca-0x84d2a25] ===
 84d28ca:	55                   	push   %ebp
 84d28cb:	89 e5                	mov    %esp,%ebp
 84d28cd:	56                   	push   %esi
 84d28ce:	53                   	push   %ebx
 84d28cf:	83 ec 30             	sub    $0x30,%esp
 84d28d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d28d5:	89 04 24             	mov    %eax,(%esp)
 84d28d8:	e8 af 7a c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d28dd:	85 c0                	test   %eax,%eax
 84d28df:	0f 94 c0             	sete   %al
 84d28e2:	84 c0                	test   %al,%al
 84d28e4:	74 0a                	je     84d28f0 <_ZN22Inter_ReplyGuildLetter12dispatch_sigEP5CUserPci+0x26>
 84d28e6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d28eb:	e9 2c 01 00 00       	jmp    84d2a1c <_ZN22Inter_ReplyGuildLetter12dispatch_sigEP5CUserPci+0x152>
 84d28f0:	8b 45 10             	mov    0x10(%ebp),%eax
 84d28f3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d28f6:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d28fd:	ff 
 84d28fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2901:	89 04 24             	mov    %eax,(%esp)
 84d2904:	e8 97 b6 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d2909:	89 c2                	mov    %eax,%edx
 84d290b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d290e:	8b 40 0a             	mov    0xa(%eax),%eax
 84d2911:	39 c2                	cmp    %eax,%edx
 84d2913:	0f 95 c0             	setne  %al
 84d2916:	84 c0                	test   %al,%al
 84d2918:	74 57                	je     84d2971 <_ZN22Inter_ReplyGuildLetter12dispatch_sigEP5CUserPci+0xa7>
 84d291a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d291d:	8b 58 0a             	mov    0xa(%eax),%ebx
 84d2920:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d2927:	ff 
 84d2928:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d292b:	89 04 24             	mov    %eax,(%esp)
 84d292e:	e8 6d b6 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d2933:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84d2937:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d293b:	c7 44 24 10 b0 8c c8 	movl   $0x8c88cb0,0x10(%esp)
 84d2942:	08 
 84d2943:	c7 44 24 0c 40 33 00 	movl   $0x3340,0xc(%esp)
 84d294a:	00 
 84d294b:	c7 44 24 08 40 cb c8 	movl   $0x8c8cb40,0x8(%esp)
 84d2952:	08 
 84d2953:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d295a:	08 
 84d295b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d2962:	e8 a3 12 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d2967:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d296c:	e9 ab 00 00 00       	jmp    84d2a1c <_ZN22Inter_ReplyGuildLetter12dispatch_sigEP5CUserPci+0x152>
 84d2971:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2974:	89 04 24             	mov    %eax,(%esp)
 84d2977:	e8 d0 b3 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d297c:	c7 44 24 08 61 00 00 	movl   $0x61,0x8(%esp)
 84d2983:	00 
 84d2984:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d298b:	00 
 84d298c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d298f:	89 04 24             	mov    %eax,(%esp)
 84d2992:	e8 65 8f bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d2997:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d299a:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84d299e:	84 c0                	test   %al,%al
 84d29a0:	75 15                	jne    84d29b7 <_ZN22Inter_ReplyGuildLetter12dispatch_sigEP5CUserPci+0xed>
 84d29a2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d29a9:	00 
 84d29aa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d29ad:	89 04 24             	mov    %eax,(%esp)
 84d29b0:	e8 6b 8f bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d29b5:	eb 13                	jmp    84d29ca <_ZN22Inter_ReplyGuildLetter12dispatch_sigEP5CUserPci+0x100>
 84d29b7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d29be:	00 
 84d29bf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d29c2:	89 04 24             	mov    %eax,(%esp)
 84d29c5:	e8 56 8f bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d29ca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d29d1:	00 
 84d29d2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d29d5:	89 04 24             	mov    %eax,(%esp)
 84d29d8:	e8 7b 8f bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d29dd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d29e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d29e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d29e7:	89 04 24             	mov    %eax,(%esp)
 84d29ea:	e8 cb 5b 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d29ef:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d29f4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d29f7:	89 04 24             	mov    %eax,(%esp)
 84d29fa:	e8 81 b4 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d29ff:	eb 1b                	jmp    84d2a1c <_ZN22Inter_ReplyGuildLetter12dispatch_sigEP5CUserPci+0x152>
 84d2a01:	89 d3                	mov    %edx,%ebx
 84d2a03:	89 c6                	mov    %eax,%esi
 84d2a05:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2a08:	89 04 24             	mov    %eax,(%esp)
 84d2a0b:	e8 70 b4 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d2a10:	89 f0                	mov    %esi,%eax
 84d2a12:	89 da                	mov    %ebx,%edx
 84d2a14:	89 04 24             	mov    %eax,(%esp)
 84d2a17:	e8 34 0d 61 00       	call   8ae3750 <_Unwind_Resume>
 84d2a1c:	89 d8                	mov    %ebx,%eax
 84d2a1e:	83 c4 30             	add    $0x30,%esp
 84d2a21:	5b                   	pop    %ebx
 84d2a22:	5e                   	pop    %esi
 84d2a23:	5d                   	pop    %ebp
 84d2a24:	c3                   	ret
 84d2a25:	90                   	nop

```

```c
// Inter_ReplyGuildLetter::dispatch_sig @ 0x84d28ca

/* Inter_ReplyGuildLetter::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReplyGuildLetter::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_10 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_10 + 10)) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d2992 to 084d29ee has its CatchHandler @ 084d2a01 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x61);
      if (*(char *)(local_10 + 0x12) == '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      uVar1 = *(undefined4 *)(local_10 + 10);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_ReplyGuildLetter::dispatch_sig(CUser*, char*, int)",0x3340,
                 "MEMBER : Inter_ReplyGuildLetter::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

