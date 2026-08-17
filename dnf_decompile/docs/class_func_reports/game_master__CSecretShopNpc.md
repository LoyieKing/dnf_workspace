# game_master__CSecretShopNpc

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084aba12 game_master::CSecretShopNpc::execute  [0x084aba12-0x84abcaf] ===
 84aba12:	55                   	push   %ebp
 84aba13:	89 e5                	mov    %esp,%ebp
 84aba15:	57                   	push   %edi
 84aba16:	56                   	push   %esi
 84aba17:	53                   	push   %ebx
 84aba18:	81 ec 6c 01 00 00    	sub    $0x16c,%esp
 84aba1e:	8b 45 08             	mov    0x8(%ebp),%eax
 84aba21:	89 04 24             	mov    %eax,(%esp)
 84aba24:	e8 91 85 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aba29:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84aba2c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84aba2f:	89 04 24             	mov    %eax,(%esp)
 84aba32:	e8 55 e9 c2 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84aba37:	83 f8 05             	cmp    $0x5,%eax
 84aba3a:	0f 95 c0             	setne  %al
 84aba3d:	84 c0                	test   %al,%al
 84aba3f:	0f 85 55 02 00 00    	jne    84abc9a <_ZN11game_master14CSecretShopNpc7executeEv+0x288>
 84aba45:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84aba48:	89 04 24             	mov    %eax,(%esp)
 84aba4b:	e8 fc 96 1a 00       	call   865514c <_ZN5CUser8GetPartyEv>
 84aba50:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84aba53:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84aba56:	89 04 24             	mov    %eax,(%esp)
 84aba59:	e8 48 cb 1d 00       	call   86885a6 <_ZN5CUser17GetSecretShopDataEv>
 84aba5e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84aba61:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84aba65:	0f 84 32 02 00 00    	je     84abc9d <_ZN11game_master14CSecretShopNpc7executeEv+0x28b>
 84aba6b:	8b 45 08             	mov    0x8(%ebp),%eax
 84aba6e:	8b 40 08             	mov    0x8(%eax),%eax
 84aba71:	3d e8 03 00 00       	cmp    $0x3e8,%eax
 84aba76:	74 2b                	je     84abaa3 <_ZN11game_master14CSecretShopNpc7executeEv+0x91>
 84aba78:	8b 45 08             	mov    0x8(%ebp),%eax
 84aba7b:	8b 40 08             	mov    0x8(%eax),%eax
 84aba7e:	3d ea 03 00 00       	cmp    $0x3ea,%eax
 84aba83:	74 1e                	je     84abaa3 <_ZN11game_master14CSecretShopNpc7executeEv+0x91>
 84aba85:	8b 45 08             	mov    0x8(%ebp),%eax
 84aba88:	8b 40 08             	mov    0x8(%eax),%eax
 84aba8b:	3d eb 03 00 00       	cmp    $0x3eb,%eax
 84aba90:	74 11                	je     84abaa3 <_ZN11game_master14CSecretShopNpc7executeEv+0x91>
 84aba92:	8b 45 08             	mov    0x8(%ebp),%eax
 84aba95:	8b 40 08             	mov    0x8(%eax),%eax
 84aba98:	3d ec 03 00 00       	cmp    $0x3ec,%eax
 84aba9d:	0f 85 fd 01 00 00    	jne    84abca0 <_ZN11game_master14CSecretShopNpc7executeEv+0x28e>
 84abaa3:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 84abaa7:	74 24                	je     84abacd <_ZN11game_master14CSecretShopNpc7executeEv+0xbb>
 84abaa9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84abaac:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 84abab2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84abab5:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84abab9:	74 12                	je     84abacd <_ZN11game_master14CSecretShopNpc7executeEv+0xbb>
 84ababb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ababe:	0f b6 80 9f 08 00 00 	movzbl 0x89f(%eax),%eax
 84abac5:	84 c0                	test   %al,%al
 84abac7:	0f 8f d6 01 00 00    	jg     84abca3 <_ZN11game_master14CSecretShopNpc7executeEv+0x291>
 84abacd:	8b 45 08             	mov    0x8(%ebp),%eax
 84abad0:	8b 50 08             	mov    0x8(%eax),%edx
 84abad3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84abad6:	89 10                	mov    %edx,(%eax)
 84abad8:	8d 9d b0 fe ff ff    	lea    -0x150(%ebp),%ebx
 84abade:	b8 00 00 00 00       	mov    $0x0,%eax
 84abae3:	ba 40 00 00 00       	mov    $0x40,%edx
 84abae8:	89 df                	mov    %ebx,%edi
 84abaea:	89 d1                	mov    %edx,%ecx
 84abaec:	f3 ab                	rep stos %eax,%es:(%edi)
 84abaee:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84abaf1:	8b 00                	mov    (%eax),%eax
 84abaf3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84abaf7:	c7 44 24 04 78 fc c7 	movl   $0x8c7fc78,0x4(%esp)
 84abafe:	08 
 84abaff:	8d 85 b0 fe ff ff    	lea    -0x150(%ebp),%eax
 84abb05:	89 04 24             	mov    %eax,(%esp)
 84abb08:	e8 33 29 bd ff       	call   807e440 <sprintf@plt>
 84abb0d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84abb10:	8b 30                	mov    (%eax),%esi
 84abb12:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84abb15:	89 04 24             	mov    %eax,(%esp)
 84abb18:	e8 0b 55 c5 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 84abb1d:	89 c3                	mov    %eax,%ebx
 84abb1f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84abb26:	00 
 84abb27:	c7 44 24 08 3f 07 00 	movl   $0x73f,0x8(%esp)
 84abb2e:	00 
 84abb2f:	c7 44 24 04 00 13 c8 	movl   $0x8c81300,0x4(%esp)
 84abb36:	08 
 84abb37:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84abb3a:	89 04 24             	mov    %eax,(%esp)
 84abb3d:	e8 d6 3b 0a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84abb42:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84abb46:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84abb4a:	c7 44 24 04 9c fc c7 	movl   $0x8c7fc9c,0x4(%esp)
 84abb51:	08 
 84abb52:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84abb55:	89 04 24             	mov    %eax,(%esp)
 84abb58:	e8 2b 3c 0a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84abb5d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84abb60:	89 04 24             	mov    %eax,(%esp)
 84abb63:	e8 e4 21 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84abb68:	8d 85 b0 fe ff ff    	lea    -0x150(%ebp),%eax
 84abb6e:	89 04 24             	mov    %eax,(%esp)
 84abb71:	e8 3a 28 bd ff       	call   807e3b0 <strlen@plt>
 84abb76:	89 c3                	mov    %eax,%ebx
 84abb78:	e8 2a e8 c2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84abb7d:	c7 44 24 18 0c 00 00 	movl   $0xc,0x18(%esp)
 84abb84:	00 
 84abb85:	c7 44 24 14 02 00 00 	movl   $0x2,0x14(%esp)
 84abb8c:	00 
 84abb8d:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84abb91:	8d 95 b0 fe ff ff    	lea    -0x150(%ebp),%edx
 84abb97:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84abb9b:	8b 55 d8             	mov    -0x28(%ebp),%edx
 84abb9e:	89 54 24 08          	mov    %edx,0x8(%esp)
 84abba2:	8d 55 bc             	lea    -0x44(%ebp),%edx
 84abba5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84abba9:	89 04 24             	mov    %eax,(%esp)
 84abbac:	e8 9b d9 21 00       	call   86c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>
 84abbb1:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84abbb4:	89 04 24             	mov    %eax,(%esp)
 84abbb7:	e8 90 21 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84abbbc:	c7 44 24 08 14 01 00 	movl   $0x114,0x8(%esp)
 84abbc3:	00 
 84abbc4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84abbcb:	00 
 84abbcc:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84abbcf:	89 04 24             	mov    %eax,(%esp)
 84abbd2:	e8 25 fd c1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84abbd7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84abbda:	8b 00                	mov    (%eax),%eax
 84abbdc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84abbe0:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84abbe3:	89 04 24             	mov    %eax,(%esp)
 84abbe6:	e8 51 fd c1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84abbeb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84abbf2:	00 
 84abbf3:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84abbf6:	89 04 24             	mov    %eax,(%esp)
 84abbf9:	e8 5a fd c1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84abbfe:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 84abc02:	74 26                	je     84abc2a <_ZN11game_master14CSecretShopNpc7executeEv+0x218>
 84abc04:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84abc07:	89 44 24 04          	mov    %eax,0x4(%esp)
 84abc0b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84abc0e:	89 04 24             	mov    %eax,(%esp)
 84abc11:	e8 38 15 0f 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 84abc16:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84abc19:	89 44 24 04          	mov    %eax,0x4(%esp)
 84abc1d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84abc20:	89 04 24             	mov    %eax,(%esp)
 84abc23:	e8 26 15 0f 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 84abc28:	eb 3b                	jmp    84abc65 <_ZN11game_master14CSecretShopNpc7executeEv+0x253>
 84abc2a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84abc2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84abc31:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84abc34:	89 04 24             	mov    %eax,(%esp)
 84abc37:	e8 7e c9 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84abc3c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84abc3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84abc43:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84abc46:	89 04 24             	mov    %eax,(%esp)
 84abc49:	e8 6c c9 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84abc4e:	eb 15                	jmp    84abc65 <_ZN11game_master14CSecretShopNpc7executeEv+0x253>
 84abc50:	89 d3                	mov    %edx,%ebx
 84abc52:	89 c6                	mov    %eax,%esi
 84abc54:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84abc57:	89 04 24             	mov    %eax,(%esp)
 84abc5a:	e8 21 22 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84abc5f:	89 f0                	mov    %esi,%eax
 84abc61:	89 da                	mov    %ebx,%edx
 84abc63:	eb 0d                	jmp    84abc72 <_ZN11game_master14CSecretShopNpc7executeEv+0x260>
 84abc65:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84abc68:	89 04 24             	mov    %eax,(%esp)
 84abc6b:	e8 10 22 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84abc70:	eb 1b                	jmp    84abc8d <_ZN11game_master14CSecretShopNpc7executeEv+0x27b>
 84abc72:	89 d3                	mov    %edx,%ebx
 84abc74:	89 c6                	mov    %eax,%esi
 84abc76:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84abc79:	89 04 24             	mov    %eax,(%esp)
 84abc7c:	e8 ff 21 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84abc81:	89 f0                	mov    %esi,%eax
 84abc83:	89 da                	mov    %ebx,%edx
 84abc85:	89 04 24             	mov    %eax,(%esp)
 84abc88:	e8 c3 7a 63 00       	call   8ae3750 <_Unwind_Resume>
 84abc8d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84abc90:	89 04 24             	mov    %eax,(%esp)
 84abc93:	e8 e8 21 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84abc98:	eb 0a                	jmp    84abca4 <_ZN11game_master14CSecretShopNpc7executeEv+0x292>
 84abc9a:	90                   	nop
 84abc9b:	eb 07                	jmp    84abca4 <_ZN11game_master14CSecretShopNpc7executeEv+0x292>
 84abc9d:	90                   	nop
 84abc9e:	eb 04                	jmp    84abca4 <_ZN11game_master14CSecretShopNpc7executeEv+0x292>
 84abca0:	90                   	nop
 84abca1:	eb 01                	jmp    84abca4 <_ZN11game_master14CSecretShopNpc7executeEv+0x292>
 84abca3:	90                   	nop
 84abca4:	81 c4 6c 01 00 00    	add    $0x16c,%esp
 84abcaa:	5b                   	pop    %ebx
 84abcab:	5e                   	pop    %esi
 84abcac:	5f                   	pop    %edi
 84abcad:	5d                   	pop    %ebp
 84abcae:	c3                   	ret
 84abcaf:	90                   	nop

```

```c
// game_master::CSecretShopNpc::execute @ 0x84aba12

/* game_master::CSecretShopNpc::execute() */

void __thiscall game_master::CSecretShopNpc::execute(CSecretShopNpc *this)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  GameWorld *pGVar4;
  char *pcVar5;
  byte bVar6;
  char local_154 [256];
  PacketGuard local_54 [12];
  PacketGuard local_48 [12];
  cMyTrace local_3c [16];
  CUser *local_2c;
  CParty *local_28;
  int *local_24;
  int local_20;
  
  bVar6 = 0;
  local_2c = (CUser *)CCommand::GetUser((CCommand *)this);
  iVar1 = CUser::get_state(local_2c);
  if (iVar1 == 5) {
    local_28 = (CParty *)CUser::GetParty(local_2c);
    local_24 = (int *)CUser::GetSecretShopData(local_2c);
    if (((local_24 != (int *)0x0) &&
        ((((*(int *)(this + 8) == 1000 || (*(int *)(this + 8) == 0x3ea)) ||
          (*(int *)(this + 8) == 0x3eb)) || (*(int *)(this + 8) == 0x3ec)))) &&
       (((local_28 == (CParty *)0x0 || (local_20 = *(int *)(local_28 + 0xcac), local_20 == 0)) ||
        (*(char *)(local_20 + 0x89f) < '\x01')))) {
      *local_24 = *(int *)(this + 8);
      pcVar5 = local_154;
      for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
      }
      sprintf(local_154,&DAT_08c7fc78,*local_24);
      iVar1 = *local_24;
      uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_2c);
      cMyTrace::cMyTrace(local_3c,"virtual void game_master::CSecretShopNpc::execute()",0x73f,0);
      cMyTrace::operator()(local_3c,"[SECRETSHOP] change npc(%s, %d)",uVar2,iVar1);
      PacketGuard::PacketGuard(local_48);
      sVar3 = strlen(local_154);
                    /* try { // try from 084abb78 to 084abbbb has its CatchHandler @ 084abc72 */
      pGVar4 = (GameWorld *)G_GameWorld();
      GameWorld::make_packet_chat_msg(pGVar4,local_48,local_2c,local_154,sVar3,2,0xc);
      PacketGuard::PacketGuard(local_54);
                    /* try { // try from 084abbd2 to 084abc4d has its CatchHandler @ 084abc50 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_54,0,0x114);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_54,*local_24);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_54,true);
      if (local_28 == (CParty *)0x0) {
        CUser::Send(local_2c,local_48);
        CUser::Send(local_2c,local_54);
      }
      else {
        CParty::send_to_party(local_28,local_48);
        CParty::send_to_party(local_28,local_54);
      }
                    /* try { // try from 084abc6b to 084abc6f has its CatchHandler @ 084abc72 */
      PacketGuard::~PacketGuard(local_54);
      PacketGuard::~PacketGuard(local_48);
    }
  }
  return;
}

```

---

## parse

```asm
// === 084ab9da game_master::CSecretShopNpc::parse  [0x084ab9da-0x84aba11] ===
 84ab9da:	55                   	push   %ebp
 84ab9db:	89 e5                	mov    %esp,%ebp
 84ab9dd:	83 ec 18             	sub    $0x18,%esp
 84ab9e0:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab9e3:	8b 40 04             	mov    0x4(%eax),%eax
 84ab9e6:	83 c0 0c             	add    $0xc,%eax
 84ab9e9:	89 04 24             	mov    %eax,(%esp)
 84ab9ec:	e8 77 36 df ff       	call   829f068 <_Z4trimRSs>
 84ab9f1:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab9f4:	8b 40 04             	mov    0x4(%eax),%eax
 84ab9f7:	83 c0 0c             	add    $0xc,%eax
 84ab9fa:	89 04 24             	mov    %eax,(%esp)
 84ab9fd:	e8 ee aa 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84aba02:	89 04 24             	mov    %eax,(%esp)
 84aba05:	e8 e6 2c bd ff       	call   807e6f0 <atoi@plt>
 84aba0a:	8b 55 08             	mov    0x8(%ebp),%edx
 84aba0d:	89 42 08             	mov    %eax,0x8(%edx)
 84aba10:	c9                   	leave
 84aba11:	c3                   	ret

```

```c
// game_master::CSecretShopNpc::parse @ 0x84ab9da

/* game_master::CSecretShopNpc::parse() */

void __thiscall game_master::CSecretShopNpc::parse(CSecretShopNpc *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}

```

