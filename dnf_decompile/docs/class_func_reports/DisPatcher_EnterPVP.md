# DisPatcher_EnterPVP

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081ed6c8 DisPatcher_EnterPVP::dispatch_sig  [0x081ed6c8-0x81ed947] ===
 81ed6c8:	55                   	push   %ebp
 81ed6c9:	89 e5                	mov    %esp,%ebp
 81ed6cb:	56                   	push   %esi
 81ed6cc:	53                   	push   %ebx
 81ed6cd:	83 ec 40             	sub    $0x40,%esp
 81ed6d0:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 81ed6d3:	83 c0 0d             	add    $0xd,%eax
 81ed6d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ed6da:	8b 45 10             	mov    0x10(%ebp),%eax
 81ed6dd:	89 04 24             	mov    %eax,(%esp)
 81ed6e0:	e8 db f8 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81ed6e5:	83 f0 01             	xor    $0x1,%eax
 81ed6e8:	84 c0                	test   %al,%al
 81ed6ea:	74 2b                	je     81ed717 <_ZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBuf+0x4f>
 81ed6ec:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ed6f3:	00 
 81ed6f4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ed6fb:	00 
 81ed6fc:	c7 44 24 04 e0 04 bd 	movl   $0x8bd04e0,0x4(%esp)
 81ed703:	08 
 81ed704:	c7 04 24 c7 6f 00 00 	movl   $0x6fc7,(%esp)
 81ed70b:	e8 c7 31 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ed710:	89 c3                	mov    %eax,%ebx
 81ed712:	e9 27 02 00 00       	jmp    81ed93e <_ZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBuf+0x276>
 81ed717:	c6 45 e4 00          	movb   $0x0,-0x1c(%ebp)
 81ed71b:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81ed722:	c7 45 d7 00 00 00 00 	movl   $0x0,-0x29(%ebp)
 81ed729:	c7 45 db 00 00 00 00 	movl   $0x0,-0x25(%ebp)
 81ed730:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 81ed734:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ed737:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ed73b:	8b 45 10             	mov    0x10(%ebp),%eax
 81ed73e:	89 04 24             	mov    %eax,(%esp)
 81ed741:	e8 dc f7 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81ed746:	83 f0 01             	xor    $0x1,%eax
 81ed749:	84 c0                	test   %al,%al
 81ed74b:	74 2b                	je     81ed778 <_ZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBuf+0xb0>
 81ed74d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ed754:	00 
 81ed755:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ed75c:	00 
 81ed75d:	c7 44 24 04 e0 04 bd 	movl   $0x8bd04e0,0x4(%esp)
 81ed764:	08 
 81ed765:	c7 04 24 ce 6f 00 00 	movl   $0x6fce,(%esp)
 81ed76c:	e8 66 31 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ed771:	89 c3                	mov    %eax,%ebx
 81ed773:	e9 c6 01 00 00       	jmp    81ed93e <_ZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBuf+0x276>
 81ed778:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 81ed77c:	3c 01                	cmp    $0x1,%al
 81ed77e:	0f 85 c2 00 00 00    	jne    81ed846 <_ZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBuf+0x17e>
 81ed784:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ed787:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ed78b:	8b 45 10             	mov    0x10(%ebp),%eax
 81ed78e:	89 04 24             	mov    %eax,(%esp)
 81ed791:	e8 5a f9 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81ed796:	83 f0 01             	xor    $0x1,%eax
 81ed799:	84 c0                	test   %al,%al
 81ed79b:	74 2b                	je     81ed7c8 <_ZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBuf+0x100>
 81ed79d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ed7a4:	00 
 81ed7a5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ed7ac:	00 
 81ed7ad:	c7 44 24 04 e0 04 bd 	movl   $0x8bd04e0,0x4(%esp)
 81ed7b4:	08 
 81ed7b5:	c7 04 24 d2 6f 00 00 	movl   $0x6fd2,(%esp)
 81ed7bc:	e8 16 31 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ed7c1:	89 c3                	mov    %eax,%ebx
 81ed7c3:	e9 76 01 00 00       	jmp    81ed93e <_ZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBuf+0x276>
 81ed7c8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ed7cb:	83 f8 0a             	cmp    $0xa,%eax
 81ed7ce:	7e 2b                	jle    81ed7fb <_ZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBuf+0x133>
 81ed7d0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ed7d7:	00 
 81ed7d8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ed7df:	00 
 81ed7e0:	c7 44 24 04 e0 04 bd 	movl   $0x8bd04e0,0x4(%esp)
 81ed7e7:	08 
 81ed7e8:	c7 04 24 d4 6f 00 00 	movl   $0x6fd4,(%esp)
 81ed7ef:	e8 e3 30 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ed7f4:	89 c3                	mov    %eax,%ebx
 81ed7f6:	e9 43 01 00 00       	jmp    81ed93e <_ZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBuf+0x276>
 81ed7fb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ed7fe:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ed802:	8d 45 d7             	lea    -0x29(%ebp),%eax
 81ed805:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ed809:	8b 45 10             	mov    0x10(%ebp),%eax
 81ed80c:	89 04 24             	mov    %eax,(%esp)
 81ed80f:	e8 9e fb 39 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 81ed814:	83 f0 01             	xor    $0x1,%eax
 81ed817:	84 c0                	test   %al,%al
 81ed819:	74 2b                	je     81ed846 <_ZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBuf+0x17e>
 81ed81b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ed822:	00 
 81ed823:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ed82a:	00 
 81ed82b:	c7 44 24 04 e0 04 bd 	movl   $0x8bd04e0,0x4(%esp)
 81ed832:	08 
 81ed833:	c7 04 24 d7 6f 00 00 	movl   $0x6fd7,(%esp)
 81ed83a:	e8 98 30 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ed83f:	89 c3                	mov    %eax,%ebx
 81ed841:	e9 f8 00 00 00       	jmp    81ed93e <_ZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBuf+0x276>
 81ed846:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
 81ed84a:	0f bf d8             	movswl %ax,%ebx
 81ed84d:	e8 3c e9 ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81ed852:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ed859:	00 
 81ed85a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ed85d:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ed861:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ed865:	89 04 24             	mov    %eax,(%esp)
 81ed868:	e8 99 79 0a 00       	call   8295206 <_ZN12CGameManager6GetPvpEiP5CUseri>
 81ed86d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ed870:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ed874:	0f 85 9e 00 00 00    	jne    81ed918 <_ZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBuf+0x250>
 81ed87a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81ed87d:	89 04 24             	mov    %eax,(%esp)
 81ed880:	e8 c7 04 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81ed885:	c7 44 24 08 36 00 00 	movl   $0x36,0x8(%esp)
 81ed88c:	00 
 81ed88d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ed894:	00 
 81ed895:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81ed898:	89 04 24             	mov    %eax,(%esp)
 81ed89b:	e8 5c e0 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81ed8a0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ed8a7:	00 
 81ed8a8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81ed8ab:	89 04 24             	mov    %eax,(%esp)
 81ed8ae:	e8 6d e0 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ed8b3:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 81ed8ba:	00 
 81ed8bb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81ed8be:	89 04 24             	mov    %eax,(%esp)
 81ed8c1:	e8 5a e0 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ed8c6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ed8cd:	00 
 81ed8ce:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81ed8d1:	89 04 24             	mov    %eax,(%esp)
 81ed8d4:	e8 7f e0 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81ed8d9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81ed8dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ed8e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ed8e3:	89 04 24             	mov    %eax,(%esp)
 81ed8e6:	e8 cf ac 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81ed8eb:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ed8f0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81ed8f3:	89 04 24             	mov    %eax,(%esp)
 81ed8f6:	e8 85 05 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ed8fb:	eb 41                	jmp    81ed93e <_ZN19DisPatcher_EnterPVP12dispatch_sigEP5CUserR9PacketBuf+0x276>
 81ed8fd:	89 d3                	mov    %edx,%ebx
 81ed8ff:	89 c6                	mov    %eax,%esi
 81ed901:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81ed904:	89 04 24             	mov    %eax,(%esp)
 81ed907:	e8 74 05 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ed90c:	89 f0                	mov    %esi,%eax
 81ed90e:	89 da                	mov    %ebx,%edx
 81ed910:	89 04 24             	mov    %eax,(%esp)
 81ed913:	e8 38 5e 8f 00       	call   8ae3750 <_Unwind_Resume>
 81ed918:	8d 45 d7             	lea    -0x29(%ebp),%eax
 81ed91b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ed91f:	c7 44 24 08 36 00 00 	movl   $0x36,0x8(%esp)
 81ed926:	00 
 81ed927:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ed92a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ed92e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ed931:	89 04 24             	mov    %eax,(%esp)
 81ed934:	e8 61 f7 ff ff       	call   81ed09a <_Z12EnterPVPRoomP5CUserP8PvP_Room14ENUM_CMDPACKETPKc>
 81ed939:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ed93e:	89 d8                	mov    %ebx,%eax
 81ed940:	83 c4 40             	add    $0x40,%esp
 81ed943:	5b                   	pop    %ebx
 81ed944:	5e                   	pop    %esi
 81ed945:	5d                   	pop    %ebp
 81ed946:	c3                   	ret
 81ed947:	90                   	nop

```

```c
// DisPatcher_EnterPVP::dispatch_sig @ 0x81ed6c8

/* DisPatcher_EnterPVP::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_EnterPVP::dispatch_sig(DisPatcher_EnterPVP *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CGameManager *this_00;
  PacketGuard local_3c [15];
  char local_2d [9];
  int local_24;
  char local_20 [14];
  short local_12;
  int local_10;
  
  cVar1 = PacketBuf::get_short(param_2,&local_12);
  if (cVar1 == '\x01') {
    local_20[0] = '\0';
    local_24 = 0;
    local_2d[0] = '\0';
    local_2d[1] = '\0';
    local_2d[2] = '\0';
    local_2d[3] = '\0';
    local_2d[4] = '\0';
    local_2d[5] = '\0';
    local_2d[6] = '\0';
    local_2d[7] = '\0';
    local_2d[8] = 0;
    cVar1 = PacketBuf::get_byte(param_2,local_20);
    if (cVar1 == '\x01') {
      if (local_20[0] == '\x01') {
        cVar1 = PacketBuf::get_int(param_2,&local_24);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0x6fd2,
                           "virtual int DisPatcher_EnterPVP::dispatch_sig(CUser*, PacketBuf&)",0,0);
          return uVar2;
        }
        if (10 < local_24) {
          uVar2 = LineFunc(0x6fd4,
                           "virtual int DisPatcher_EnterPVP::dispatch_sig(CUser*, PacketBuf&)",0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_binary(param_2,local_2d,local_24);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0x6fd7,
                           "virtual int DisPatcher_EnterPVP::dispatch_sig(CUser*, PacketBuf&)",0,0);
          return uVar2;
        }
      }
      this_00 = (CGameManager *)G_CGameManager();
      local_10 = CGameManager::GetPvp(this_00,(int)local_12,param_1,0);
      if (local_10 == 0) {
        PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 081ed89b to 081ed8ea has its CatchHandler @ 081ed8fd */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,0x36);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0x16);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
        CUser::Send(param_1,local_3c);
        uVar2 = 0;
        PacketGuard::~PacketGuard(local_3c);
      }
      else {
        EnterPVPRoom(param_1,local_10,0x36,local_2d);
        uVar2 = 0;
      }
    }
    else {
      uVar2 = LineFunc(0x6fce,"virtual int DisPatcher_EnterPVP::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x6fc7,"virtual int DisPatcher_EnterPVP::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  return uVar2;
}

```

