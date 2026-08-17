# game_master__CEnduranceCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084aa858 game_master::CEnduranceCmd::execute  [0x084aa858-0x84aa9c7] ===
 84aa858:	55                   	push   %ebp
 84aa859:	89 e5                	mov    %esp,%ebp
 84aa85b:	56                   	push   %esi
 84aa85c:	53                   	push   %ebx
 84aa85d:	83 ec 30             	sub    $0x30,%esp
 84aa860:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa863:	89 04 24             	mov    %eax,(%esp)
 84aa866:	e8 4f 97 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aa86b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84aa86e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84aa871:	89 04 24             	mov    %eax,(%esp)
 84aa874:	e8 23 b0 c9 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 84aa879:	83 f0 01             	xor    $0x1,%eax
 84aa87c:	84 c0                	test   %al,%al
 84aa87e:	0f 85 33 01 00 00    	jne    84aa9b7 <_ZN11game_master13CEnduranceCmd7executeEv+0x15f>
 84aa884:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa887:	8b 40 08             	mov    0x8(%eax),%eax
 84aa88a:	83 f8 09             	cmp    $0x9,%eax
 84aa88d:	0f 8e 27 01 00 00    	jle    84aa9ba <_ZN11game_master13CEnduranceCmd7executeEv+0x162>
 84aa893:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa896:	8b 40 08             	mov    0x8(%eax),%eax
 84aa899:	83 f8 15             	cmp    $0x15,%eax
 84aa89c:	0f 8f 1b 01 00 00    	jg     84aa9bd <_ZN11game_master13CEnduranceCmd7executeEv+0x165>
 84aa8a2:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa8a5:	8b 58 08             	mov    0x8(%eax),%ebx
 84aa8a8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84aa8ab:	89 04 24             	mov    %eax,(%esp)
 84aa8ae:	e8 db f9 c2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84aa8b3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84aa8b7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aa8be:	00 
 84aa8bf:	89 04 24             	mov    %eax,(%esp)
 84aa8c2:	e8 e7 19 05 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 84aa8c7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84aa8ca:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84aa8ce:	0f 84 ed 00 00 00    	je     84aa9c1 <_ZN11game_master13CEnduranceCmd7executeEv+0x169>
 84aa8d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84aa8d7:	8b 40 02             	mov    0x2(%eax),%eax
 84aa8da:	85 c0                	test   %eax,%eax
 84aa8dc:	0f 84 de 00 00 00    	je     84aa9c0 <_ZN11game_master13CEnduranceCmd7executeEv+0x168>
 84aa8e2:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa8e5:	0f b7 50 0c          	movzwl 0xc(%eax),%edx
 84aa8e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84aa8ec:	66 89 50 0b          	mov    %dx,0xb(%eax)
 84aa8f0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84aa8f3:	89 04 24             	mov    %eax,(%esp)
 84aa8f6:	e8 51 34 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84aa8fb:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 84aa902:	00 
 84aa903:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aa90a:	00 
 84aa90b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84aa90e:	89 04 24             	mov    %eax,(%esp)
 84aa911:	e8 e6 0f c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84aa916:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84aa91d:	00 
 84aa91e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84aa921:	89 04 24             	mov    %eax,(%esp)
 84aa924:	e8 f7 0f c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84aa929:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84aa930:	00 
 84aa931:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84aa934:	89 04 24             	mov    %eax,(%esp)
 84aa937:	e8 68 f5 c2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84aa93c:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa93f:	8b 58 08             	mov    0x8(%eax),%ebx
 84aa942:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84aa945:	89 04 24             	mov    %eax,(%esp)
 84aa948:	e8 31 f9 c2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84aa94d:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84aa950:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84aa954:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84aa958:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aa95f:	00 
 84aa960:	89 04 24             	mov    %eax,(%esp)
 84aa963:	e8 54 1d 05 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 84aa968:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84aa96f:	00 
 84aa970:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84aa973:	89 04 24             	mov    %eax,(%esp)
 84aa976:	e8 dd 0f c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84aa97b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84aa97e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aa982:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84aa985:	89 04 24             	mov    %eax,(%esp)
 84aa988:	e8 2d dc 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84aa98d:	eb 1b                	jmp    84aa9aa <_ZN11game_master13CEnduranceCmd7executeEv+0x152>
 84aa98f:	89 d3                	mov    %edx,%ebx
 84aa991:	89 c6                	mov    %eax,%esi
 84aa993:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84aa996:	89 04 24             	mov    %eax,(%esp)
 84aa999:	e8 e2 34 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84aa99e:	89 f0                	mov    %esi,%eax
 84aa9a0:	89 da                	mov    %ebx,%edx
 84aa9a2:	89 04 24             	mov    %eax,(%esp)
 84aa9a5:	e8 a6 8d 63 00       	call   8ae3750 <_Unwind_Resume>
 84aa9aa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84aa9ad:	89 04 24             	mov    %eax,(%esp)
 84aa9b0:	e8 cb 34 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84aa9b5:	eb 0a                	jmp    84aa9c1 <_ZN11game_master13CEnduranceCmd7executeEv+0x169>
 84aa9b7:	90                   	nop
 84aa9b8:	eb 07                	jmp    84aa9c1 <_ZN11game_master13CEnduranceCmd7executeEv+0x169>
 84aa9ba:	90                   	nop
 84aa9bb:	eb 04                	jmp    84aa9c1 <_ZN11game_master13CEnduranceCmd7executeEv+0x169>
 84aa9bd:	90                   	nop
 84aa9be:	eb 01                	jmp    84aa9c1 <_ZN11game_master13CEnduranceCmd7executeEv+0x169>
 84aa9c0:	90                   	nop
 84aa9c1:	83 c4 30             	add    $0x30,%esp
 84aa9c4:	5b                   	pop    %ebx
 84aa9c5:	5e                   	pop    %esi
 84aa9c6:	5d                   	pop    %ebp
 84aa9c7:	c3                   	ret

```

```c
// game_master::CEnduranceCmd::execute @ 0x84aa858

/* game_master::CEnduranceCmd::execute() */

void __thiscall game_master::CEnduranceCmd::execute(CEnduranceCmd *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  CInventory *pCVar4;
  PacketGuard local_20 [12];
  CUserCharacInfo *local_14;
  int local_10;
  
  local_14 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  cVar3 = CUser::isGMUser((CUser *)local_14);
  if (((cVar3 == '\x01') && (9 < *(int *)(this + 8))) && (*(int *)(this + 8) < 0x16)) {
    iVar1 = *(int *)(this + 8);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(local_14);
    local_10 = CInventory::GetInvenRef(pCVar4,0,iVar1);
    if ((local_10 != 0) && (*(int *)(local_10 + 2) != 0)) {
      *(undefined2 *)(local_10 + 0xb) = *(undefined2 *)(this + 0xc);
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084aa911 to 084aa98c has its CatchHandler @ 084aa98f */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xe);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,3);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
      uVar2 = *(undefined4 *)(this + 8);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(local_14);
      CInventory::MakeItemPacket(pCVar4,0,uVar2,local_20);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)local_14,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return;
}

```

---

## parse

```asm
// === 084aa73a game_master::CEnduranceCmd::parse  [0x084aa73a-0x84aa857] ===
 84aa73a:	55                   	push   %ebp
 84aa73b:	89 e5                	mov    %esp,%ebp
 84aa73d:	56                   	push   %esi
 84aa73e:	53                   	push   %ebx
 84aa73f:	83 ec 20             	sub    $0x20,%esp
 84aa742:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa745:	8b 40 04             	mov    0x4(%eax),%eax
 84aa748:	83 c0 0c             	add    $0xc,%eax
 84aa74b:	89 04 24             	mov    %eax,(%esp)
 84aa74e:	e8 15 49 df ff       	call   829f068 <_Z4trimRSs>
 84aa753:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa756:	8b 40 04             	mov    0x4(%eax),%eax
 84aa759:	83 c0 0c             	add    $0xc,%eax
 84aa75c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84aa763:	00 
 84aa764:	c7 44 24 04 72 fa c7 	movl   $0x8c7fa72,0x4(%esp)
 84aa76b:	08 
 84aa76c:	89 04 24             	mov    %eax,(%esp)
 84aa76f:	e8 cc c4 25 00       	call   8706c40 <_ZNKSs4findEPKcj>
 84aa774:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84aa777:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84aa77a:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa77d:	8b 40 04             	mov    0x4(%eax),%eax
 84aa780:	8d 48 0c             	lea    0xc(%eax),%ecx
 84aa783:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84aa786:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84aa78a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84aa791:	00 
 84aa792:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84aa796:	89 04 24             	mov    %eax,(%esp)
 84aa799:	e8 e2 d0 25 00       	call   8707880 <_ZNKSs6substrEjj>
 84aa79e:	83 ec 04             	sub    $0x4,%esp
 84aa7a1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84aa7a4:	83 c0 01             	add    $0x1,%eax
 84aa7a7:	89 c2                	mov    %eax,%edx
 84aa7a9:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa7ac:	8b 40 04             	mov    0x4(%eax),%eax
 84aa7af:	8d 48 0c             	lea    0xc(%eax),%ecx
 84aa7b2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aa7b5:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 84aa7bc:	ff 
 84aa7bd:	89 54 24 08          	mov    %edx,0x8(%esp)
 84aa7c1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84aa7c5:	89 04 24             	mov    %eax,(%esp)
 84aa7c8:	e8 b3 d0 25 00       	call   8707880 <_ZNKSs6substrEjj>
 84aa7cd:	83 ec 04             	sub    $0x4,%esp
 84aa7d0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84aa7d3:	89 04 24             	mov    %eax,(%esp)
 84aa7d6:	e8 15 bd 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84aa7db:	89 04 24             	mov    %eax,(%esp)
 84aa7de:	e8 0d 3f bd ff       	call   807e6f0 <atoi@plt>
 84aa7e3:	8b 55 08             	mov    0x8(%ebp),%edx
 84aa7e6:	89 42 08             	mov    %eax,0x8(%edx)
 84aa7e9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aa7ec:	89 04 24             	mov    %eax,(%esp)
 84aa7ef:	e8 fc bc 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84aa7f4:	89 04 24             	mov    %eax,(%esp)
 84aa7f7:	e8 f4 3e bd ff       	call   807e6f0 <atoi@plt>
 84aa7fc:	89 c2                	mov    %eax,%edx
 84aa7fe:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa801:	66 89 50 0c          	mov    %dx,0xc(%eax)
 84aa805:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aa808:	89 04 24             	mov    %eax,(%esp)
 84aa80b:	e8 d0 d3 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aa810:	eb 30                	jmp    84aa842 <_ZN11game_master13CEnduranceCmd5parseEv+0x108>
 84aa812:	89 d3                	mov    %edx,%ebx
 84aa814:	89 c6                	mov    %eax,%esi
 84aa816:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aa819:	89 04 24             	mov    %eax,(%esp)
 84aa81c:	e8 bf d3 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aa821:	89 f0                	mov    %esi,%eax
 84aa823:	89 da                	mov    %ebx,%edx
 84aa825:	eb 00                	jmp    84aa827 <_ZN11game_master13CEnduranceCmd5parseEv+0xed>
 84aa827:	89 d3                	mov    %edx,%ebx
 84aa829:	89 c6                	mov    %eax,%esi
 84aa82b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84aa82e:	89 04 24             	mov    %eax,(%esp)
 84aa831:	e8 aa d3 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aa836:	89 f0                	mov    %esi,%eax
 84aa838:	89 da                	mov    %ebx,%edx
 84aa83a:	89 04 24             	mov    %eax,(%esp)
 84aa83d:	e8 0e 8f 63 00       	call   8ae3750 <_Unwind_Resume>
 84aa842:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84aa845:	89 04 24             	mov    %eax,(%esp)
 84aa848:	e8 93 d3 25 00       	call   8707be0 <_ZNSsD1Ev>
 84aa84d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84aa850:	83 c4 00             	add    $0x0,%esp
 84aa853:	5b                   	pop    %ebx
 84aa854:	5e                   	pop    %esi
 84aa855:	5d                   	pop    %ebp
 84aa856:	c3                   	ret
 84aa857:	90                   	nop

```

```c
// game_master::CEnduranceCmd::parse @ 0x84aa73a

/* game_master::CEnduranceCmd::parse() */

void __thiscall game_master::CEnduranceCmd::parse(CEnduranceCmd *this)

{
  char *pcVar1;
  int iVar2;
  string local_18 [4];
  string local_14 [4];
  undefined4 local_10;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  local_10 = std::string::find((string *)(*(int *)(this + 4) + 0xc)," ",0);
  std::string::substr((uint)local_14,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084aa7c8 to 084aa7cc has its CatchHandler @ 084aa827 */
  std::string::substr((uint)local_18,*(int *)(this + 4) + 0xc);
                    /* try { // try from 084aa7d6 to 084aa7f3 has its CatchHandler @ 084aa812 */
  pcVar1 = (char *)std::string::c_str(local_14);
  iVar2 = atoi(pcVar1);
  *(int *)(this + 8) = iVar2;
  pcVar1 = (char *)std::string::c_str(local_18);
  iVar2 = atoi(pcVar1);
  *(short *)(this + 0xc) = (short)iVar2;
                    /* try { // try from 084aa80b to 084aa80f has its CatchHandler @ 084aa827 */
  std::string::~string(local_18);
  std::string::~string(local_14);
  return;
}

```

