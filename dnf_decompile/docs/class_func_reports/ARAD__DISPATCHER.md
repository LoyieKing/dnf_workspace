# ARAD__DISPATCHER

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## make_cmd_packetheader_jpn

```asm
// === 08197812 ARAD::DISPATCHER::make_cmd_packetheader_jpn  [0x08197812-0x8197861] ===
 8197812:	55                   	push   %ebp
 8197813:	89 e5                	mov    %esp,%ebp
 8197815:	83 ec 38             	sub    $0x38,%esp
 8197818:	8b 45 10             	mov    0x10(%ebp),%eax
 819781b:	88 45 e4             	mov    %al,-0x1c(%ebp)
 819781e:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8197822:	74 07                	je     819782b <_ZN4ARAD10DISPATCHER25make_cmd_packetheader_jpnER11PacketGuard14ENUM_CMDPACKETb+0x19>
 8197824:	b8 01 00 00 00       	mov    $0x1,%eax
 8197829:	eb 05                	jmp    8197830 <_ZN4ARAD10DISPATCHER25make_cmd_packetheader_jpnER11PacketGuard14ENUM_CMDPACKETb+0x1e>
 819782b:	b8 00 00 00 00       	mov    $0x0,%eax
 8197830:	88 45 f7             	mov    %al,-0x9(%ebp)
 8197833:	8b 55 0c             	mov    0xc(%ebp),%edx
 8197836:	8b 45 08             	mov    0x8(%ebp),%eax
 8197839:	89 54 24 08          	mov    %edx,0x8(%esp)
 819783d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8197844:	00 
 8197845:	89 04 24             	mov    %eax,(%esp)
 8197848:	e8 af 40 f3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 819784d:	0f be 55 f7          	movsbl -0x9(%ebp),%edx
 8197851:	8b 45 08             	mov    0x8(%ebp),%eax
 8197854:	89 54 24 04          	mov    %edx,0x4(%esp)
 8197858:	89 04 24             	mov    %eax,(%esp)
 819785b:	e8 c0 40 f3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8197860:	c9                   	leave
 8197861:	c3                   	ret

```

```c
// ARAD::DISPATCHER::make_cmd_packetheader_jpn @ 0x8197812

/* ARAD::DISPATCHER::make_cmd_packetheader_jpn(PacketGuard&, ENUM_CMDPACKET, bool) */

void ARAD::DISPATCHER::make_cmd_packetheader_jpn
               (InterfacePacketBuf *param_1,int param_2,char param_3)

{
  InterfacePacketBuf::put_header(param_1,1,param_2);
  InterfacePacketBuf::put_byte(param_1,(int)(param_3 != '\0'));
  return;
}

```

---

## make_internal_stream_jpn

```asm
// === 081977b6 ARAD::DISPATCHER::make_internal_stream_jpn  [0x081977b6-0x8197811] ===
 81977b6:	55                   	push   %ebp
 81977b7:	89 e5                	mov    %esp,%ebp
 81977b9:	53                   	push   %ebx
 81977ba:	83 ec 14             	sub    $0x14,%esp
 81977bd:	8b 45 08             	mov    0x8(%ebp),%eax
 81977c0:	89 04 24             	mov    %eax,(%esp)
 81977c3:	e8 7e 14 f3 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81977c8:	c7 44 24 04 dc 02 00 	movl   $0x2dc,0x4(%esp)
 81977cf:	00 
 81977d0:	89 04 24             	mov    %eax,(%esp)
 81977d3:	e8 7e 14 f3 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81977d8:	8b 45 08             	mov    0x8(%ebp),%eax
 81977db:	89 04 24             	mov    %eax,(%esp)
 81977de:	e8 63 14 f3 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81977e3:	8b 55 10             	mov    0x10(%ebp),%edx
 81977e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81977ea:	89 04 24             	mov    %eax,(%esp)
 81977ed:	e8 64 14 f3 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81977f2:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 81977f5:	8b 45 08             	mov    0x8(%ebp),%eax
 81977f8:	89 04 24             	mov    %eax,(%esp)
 81977fb:	e8 46 14 f3 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8197800:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8197804:	89 04 24             	mov    %eax,(%esp)
 8197807:	e8 4a 14 f3 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 819780c:	83 c4 14             	add    $0x14,%esp
 819780f:	5b                   	pop    %ebx
 8197810:	5d                   	pop    %ebp
 8197811:	c3                   	ret

```

```c
// ARAD::DISPATCHER::make_internal_stream_jpn @ 0x81977b6

/* ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int) */

void ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard *param_1,int param_2,int param_3)

{
  CStreamGuard *pCVar1;
  
  pCVar1 = (CStreamGuard *)CStreamGuard::operator*(param_1);
  CStreamGuard::operator<<(pCVar1,0x2dc);
  pCVar1 = (CStreamGuard *)CStreamGuard::operator*(param_1);
  CStreamGuard::operator<<(pCVar1,param_3);
  pCVar1 = (CStreamGuard *)CStreamGuard::operator*(param_1);
  CStreamGuard::operator<<(pCVar1,param_2);
  return;
}

```

---

## make_noti_packetheader_jpn

```asm
// === 08197862 ARAD::DISPATCHER::make_noti_packetheader_jpn  [0x08197862-0x81978b1] ===
 8197862:	55                   	push   %ebp
 8197863:	89 e5                	mov    %esp,%ebp
 8197865:	83 ec 38             	sub    $0x38,%esp
 8197868:	8b 45 10             	mov    0x10(%ebp),%eax
 819786b:	88 45 e4             	mov    %al,-0x1c(%ebp)
 819786e:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8197872:	74 07                	je     819787b <_ZN4ARAD10DISPATCHER26make_noti_packetheader_jpnER11PacketGuard15ENUM_NOTIPACKETb+0x19>
 8197874:	b8 01 00 00 00       	mov    $0x1,%eax
 8197879:	eb 05                	jmp    8197880 <_ZN4ARAD10DISPATCHER26make_noti_packetheader_jpnER11PacketGuard15ENUM_NOTIPACKETb+0x1e>
 819787b:	b8 00 00 00 00       	mov    $0x0,%eax
 8197880:	88 45 f7             	mov    %al,-0x9(%ebp)
 8197883:	8b 55 0c             	mov    0xc(%ebp),%edx
 8197886:	8b 45 08             	mov    0x8(%ebp),%eax
 8197889:	89 54 24 08          	mov    %edx,0x8(%esp)
 819788d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8197894:	00 
 8197895:	89 04 24             	mov    %eax,(%esp)
 8197898:	e8 5f 40 f3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 819789d:	0f be 55 f7          	movsbl -0x9(%ebp),%edx
 81978a1:	8b 45 08             	mov    0x8(%ebp),%eax
 81978a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81978a8:	89 04 24             	mov    %eax,(%esp)
 81978ab:	e8 70 40 f3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81978b0:	c9                   	leave
 81978b1:	c3                   	ret

```

```c
// ARAD::DISPATCHER::make_noti_packetheader_jpn @ 0x8197862

/* ARAD::DISPATCHER::make_noti_packetheader_jpn(PacketGuard&, ENUM_NOTIPACKET, bool) */

void ARAD::DISPATCHER::make_noti_packetheader_jpn
               (InterfacePacketBuf *param_1,int param_2,char param_3)

{
  InterfacePacketBuf::put_header(param_1,0,param_2);
  InterfacePacketBuf::put_byte(param_1,(int)(param_3 != '\0'));
  return;
}

```

