# Dispatcher_Change_PartyMemberPosition

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0822759c Dispatcher_Change_PartyMemberPosition::dispatch_sig  [0x0822759c-0x8227861] ===
 822759c:	55                   	push   %ebp
 822759d:	89 e5                	mov    %esp,%ebp
 822759f:	56                   	push   %esi
 82275a0:	53                   	push   %ebx
 82275a1:	83 ec 30             	sub    $0x30,%esp
 82275a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82275a7:	89 04 24             	mov    %eax,(%esp)
 82275aa:	e8 dd 2d eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82275af:	83 f8 03             	cmp    $0x3,%eax
 82275b2:	75 0f                	jne    82275c3 <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x27>
 82275b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82275b7:	89 04 24             	mov    %eax,(%esp)
 82275ba:	e8 73 8e ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82275bf:	85 c0                	test   %eax,%eax
 82275c1:	75 07                	jne    82275ca <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 82275c3:	b8 01 00 00 00       	mov    $0x1,%eax
 82275c8:	eb 05                	jmp    82275cf <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x33>
 82275ca:	b8 00 00 00 00       	mov    $0x0,%eax
 82275cf:	84 c0                	test   %al,%al
 82275d1:	74 0a                	je     82275dd <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x41>
 82275d3:	bb 00 00 00 00       	mov    $0x0,%ebx
 82275d8:	e9 7b 02 00 00       	jmp    8227858 <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x2bc>
 82275dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 82275e0:	89 04 24             	mov    %eax,(%esp)
 82275e3:	e8 64 db 42 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82275e8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82275eb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82275ef:	75 0a                	jne    82275fb <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x5f>
 82275f1:	bb 00 00 00 00       	mov    $0x0,%ebx
 82275f6:	e9 5d 02 00 00       	jmp    8227858 <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x2bc>
 82275fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82275fe:	89 04 24             	mov    %eax,(%esp)
 8227601:	e8 7a e1 f1 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 8227606:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8227609:	0f 95 c0             	setne  %al
 822760c:	84 c0                	test   %al,%al
 822760e:	74 0a                	je     822761a <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x7e>
 8227610:	bb 00 00 00 00       	mov    $0x0,%ebx
 8227615:	e9 3e 02 00 00       	jmp    8227858 <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x2bc>
 822761a:	c6 45 f3 04          	movb   $0x4,-0xd(%ebp)
 822761e:	c6 45 f2 00          	movb   $0x0,-0xe(%ebp)
 8227622:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8227625:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227629:	8b 45 10             	mov    0x10(%ebp),%eax
 822762c:	89 04 24             	mov    %eax,(%esp)
 822762f:	e8 ee 58 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8227634:	83 f0 01             	xor    $0x1,%eax
 8227637:	84 c0                	test   %al,%al
 8227639:	74 2b                	je     8227666 <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0xca>
 822763b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8227642:	00 
 8227643:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822764a:	00 
 822764b:	c7 44 24 04 00 c2 bc 	movl   $0x8bcc200,0x4(%esp)
 8227652:	08 
 8227653:	c7 04 24 84 e3 00 00 	movl   $0xe384,(%esp)
 822765a:	e8 78 92 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822765f:	89 c3                	mov    %eax,%ebx
 8227661:	e9 f2 01 00 00       	jmp    8227858 <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x2bc>
 8227666:	8d 45 f2             	lea    -0xe(%ebp),%eax
 8227669:	89 44 24 04          	mov    %eax,0x4(%esp)
 822766d:	8b 45 10             	mov    0x10(%ebp),%eax
 8227670:	89 04 24             	mov    %eax,(%esp)
 8227673:	e8 aa 58 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8227678:	83 f0 01             	xor    $0x1,%eax
 822767b:	84 c0                	test   %al,%al
 822767d:	74 2b                	je     82276aa <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x10e>
 822767f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8227686:	00 
 8227687:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822768e:	00 
 822768f:	c7 44 24 04 00 c2 bc 	movl   $0x8bcc200,0x4(%esp)
 8227696:	08 
 8227697:	c7 04 24 85 e3 00 00 	movl   $0xe385,(%esp)
 822769e:	e8 34 92 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82276a3:	89 c3                	mov    %eax,%ebx
 82276a5:	e9 ae 01 00 00       	jmp    8227858 <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x2bc>
 82276aa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82276ad:	89 04 24             	mov    %eax,(%esp)
 82276b0:	e8 97 66 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82276b5:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 82276b9:	84 c0                	test   %al,%al
 82276bb:	0f 88 eb 00 00 00    	js     82277ac <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x210>
 82276c1:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 82276c5:	3c 03                	cmp    $0x3,%al
 82276c7:	0f 8f df 00 00 00    	jg     82277ac <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x210>
 82276cd:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
 82276d1:	3c 03                	cmp    $0x3,%al
 82276d3:	74 0c                	je     82276e1 <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x145>
 82276d5:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
 82276d9:	3c 01                	cmp    $0x1,%al
 82276db:	0f 85 cb 00 00 00    	jne    82277ac <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x210>
 82276e1:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 82276e5:	89 c2                	mov    %eax,%edx
 82276e7:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
 82276eb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 82276ee:	83 e0 03             	and    $0x3,%eax
 82276f1:	88 45 f2             	mov    %al,-0xe(%ebp)
 82276f4:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
 82276f8:	0f be d0             	movsbl %al,%edx
 82276fb:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 82276ff:	0f be c0             	movsbl %al,%eax
 8227702:	89 54 24 08          	mov    %edx,0x8(%esp)
 8227706:	89 44 24 04          	mov    %eax,0x4(%esp)
 822770a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 822770d:	89 04 24             	mov    %eax,(%esp)
 8227710:	e8 6b 2f 39 00       	call   85ba680 <_ZN6CParty13switchPostionEcc>
 8227715:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8227718:	89 04 24             	mov    %eax,(%esp)
 822771b:	e8 04 56 37 00       	call   859cd24 <_ZN6CParty24send_party_realtime_infoEv>
 8227720:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8227723:	89 04 24             	mov    %eax,(%esp)
 8227726:	e8 77 57 37 00       	call   859cea2 <_ZN6CParty17send_party_ipinfoEv>
 822772b:	c7 44 24 08 50 01 00 	movl   $0x150,0x8(%esp)
 8227732:	00 
 8227733:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822773a:	00 
 822773b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 822773e:	89 04 24             	mov    %eax,(%esp)
 8227741:	e8 b6 41 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8227746:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822774d:	00 
 822774e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8227751:	89 04 24             	mov    %eax,(%esp)
 8227754:	e8 c7 41 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8227759:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 822775d:	0f be c0             	movsbl %al,%eax
 8227760:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227764:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8227767:	89 04 24             	mov    %eax,(%esp)
 822776a:	e8 b1 41 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 822776f:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
 8227773:	0f be c0             	movsbl %al,%eax
 8227776:	89 44 24 04          	mov    %eax,0x4(%esp)
 822777a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 822777d:	89 04 24             	mov    %eax,(%esp)
 8227780:	e8 9b 41 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8227785:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822778c:	00 
 822778d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8227790:	89 04 24             	mov    %eax,(%esp)
 8227793:	e8 c0 41 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8227798:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 822779b:	89 44 24 04          	mov    %eax,0x4(%esp)
 822779f:	8b 45 0c             	mov    0xc(%ebp),%eax
 82277a2:	89 04 24             	mov    %eax,(%esp)
 82277a5:	e8 10 0e 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82277aa:	eb 7f                	jmp    822782b <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x28f>
 82277ac:	c7 44 24 08 50 01 00 	movl   $0x150,0x8(%esp)
 82277b3:	00 
 82277b4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82277bb:	00 
 82277bc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82277bf:	89 04 24             	mov    %eax,(%esp)
 82277c2:	e8 35 41 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82277c7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82277ce:	00 
 82277cf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82277d2:	89 04 24             	mov    %eax,(%esp)
 82277d5:	e8 46 41 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82277da:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 82277de:	0f be c0             	movsbl %al,%eax
 82277e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82277e5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82277e8:	89 04 24             	mov    %eax,(%esp)
 82277eb:	e8 30 41 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82277f0:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
 82277f4:	0f be c0             	movsbl %al,%eax
 82277f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82277fb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82277fe:	89 04 24             	mov    %eax,(%esp)
 8227801:	e8 1a 41 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8227806:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822780d:	00 
 822780e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8227811:	89 04 24             	mov    %eax,(%esp)
 8227814:	e8 3f 41 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8227819:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 822781c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227820:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227823:	89 04 24             	mov    %eax,(%esp)
 8227826:	e8 8f 0d 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 822782b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8227830:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8227833:	89 04 24             	mov    %eax,(%esp)
 8227836:	e8 45 66 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 822783b:	eb 1b                	jmp    8227858 <_ZN37Dispatcher_Change_PartyMemberPosition12dispatch_sigEP5CUserR9PacketBuf+0x2bc>
 822783d:	89 d3                	mov    %edx,%ebx
 822783f:	89 c6                	mov    %eax,%esi
 8227841:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8227844:	89 04 24             	mov    %eax,(%esp)
 8227847:	e8 34 66 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 822784c:	89 f0                	mov    %esi,%eax
 822784e:	89 da                	mov    %ebx,%edx
 8227850:	89 04 24             	mov    %eax,(%esp)
 8227853:	e8 f8 be 8b 00       	call   8ae3750 <_Unwind_Resume>
 8227858:	89 d8                	mov    %ebx,%eax
 822785a:	83 c4 30             	add    $0x30,%esp
 822785d:	5b                   	pop    %ebx
 822785e:	5e                   	pop    %esi
 822785f:	5d                   	pop    %ebp
 8227860:	c3                   	ret
 8227861:	90                   	nop

```

```c
// Dispatcher_Change_PartyMemberPosition::dispatch_sig @ 0x822759c

/* Dispatcher_Change_PartyMemberPosition::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Change_PartyMemberPosition::dispatch_sig
          (Dispatcher_Change_PartyMemberPosition *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CUser *pCVar4;
  undefined4 uVar5;
  PacketGuard local_20 [14];
  byte local_12;
  char local_11;
  CParty *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 == 3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_082275cf;
    }
  }
  bVar1 = true;
LAB_082275cf:
  if (bVar1) {
    uVar5 = 0;
  }
  else {
    local_10 = (CParty *)CUser::GetParty(param_1);
    if (local_10 == (CParty *)0x0) {
      uVar5 = 0;
    }
    else {
      pCVar4 = (CUser *)CParty::getManager(local_10);
      if (pCVar4 == param_1) {
        local_11 = '\x04';
        local_12 = 0;
        cVar2 = PacketBuf::get_byte(param_2,&local_11);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_byte(param_2,(char *)&local_12);
          if (cVar2 == '\x01') {
            PacketGuard::PacketGuard(local_20);
            if (((local_11 < '\0') || ('\x03' < local_11)) || ((local_12 != 3 && (local_12 != 1))))
            {
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x150);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)local_11);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)(char)local_12);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
              CUser::Send(param_1,local_20);
            }
            else {
              local_12 = local_11 + local_12 & 3;
                    /* try { // try from 08227710 to 0822782a has its CatchHandler @ 0822783d */
              CParty::switchPostion(local_10,local_11,local_12);
              CParty::send_party_realtime_info(local_10);
              CParty::send_party_ipinfo(local_10);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x150);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)local_11);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)(char)local_12);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
              CUser::Send(param_1,local_20);
            }
            uVar5 = 0;
            PacketGuard::~PacketGuard(local_20);
          }
          else {
            uVar5 = LineFunc(0xe385,
                             "virtual int Dispatcher_Change_PartyMemberPosition::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar5 = LineFunc(0xe384,
                           "virtual int Dispatcher_Change_PartyMemberPosition::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}

```

