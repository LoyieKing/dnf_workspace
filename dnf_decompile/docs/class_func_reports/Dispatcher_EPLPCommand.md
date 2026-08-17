# Dispatcher_EPLPCommand

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## _BroadCastPacket

```asm
// === 081fee14 Dispatcher_EPLPCommand::_BroadCastPacket  [0x081fee14-0x81feedb] ===
 81fee14:	55                   	push   %ebp
 81fee15:	89 e5                	mov    %esp,%ebp
 81fee17:	56                   	push   %esi
 81fee18:	53                   	push   %ebx
 81fee19:	83 ec 20             	sub    $0x20,%esp
 81fee1c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fee1f:	89 04 24             	mov    %eax,(%esp)
 81fee22:	e8 25 ef 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81fee27:	c7 44 24 08 4b 00 00 	movl   $0x4b,0x8(%esp)
 81fee2e:	00 
 81fee2f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fee36:	00 
 81fee37:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fee3a:	89 04 24             	mov    %eax,(%esp)
 81fee3d:	e8 ba ca ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81fee42:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fee49:	00 
 81fee4a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fee4d:	89 04 24             	mov    %eax,(%esp)
 81fee50:	e8 cb ca ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81fee55:	8b 45 10             	mov    0x10(%ebp),%eax
 81fee58:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81fee5c:	0f b6 c0             	movzbl %al,%eax
 81fee5f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fee63:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fee66:	89 04 24             	mov    %eax,(%esp)
 81fee69:	e8 b2 ca ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81fee6e:	8b 45 10             	mov    0x10(%ebp),%eax
 81fee71:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81fee75:	0f b6 c0             	movzbl %al,%eax
 81fee78:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fee7c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fee7f:	89 04 24             	mov    %eax,(%esp)
 81fee82:	e8 99 ca ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81fee87:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fee8e:	00 
 81fee8f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fee92:	89 04 24             	mov    %eax,(%esp)
 81fee95:	e8 be ca ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81fee9a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fee9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81feea1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81feea4:	89 04 24             	mov    %eax,(%esp)
 81feea7:	e8 a2 e2 39 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81feeac:	eb 1b                	jmp    81feec9 <_ZN22Dispatcher_EPLPCommand16_BroadCastPacketEP6CPartyR16MSG_EPLP_COMMAND+0xb5>
 81feeae:	89 d3                	mov    %edx,%ebx
 81feeb0:	89 c6                	mov    %eax,%esi
 81feeb2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81feeb5:	89 04 24             	mov    %eax,(%esp)
 81feeb8:	e8 c3 ef 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81feebd:	89 f0                	mov    %esi,%eax
 81feebf:	89 da                	mov    %ebx,%edx
 81feec1:	89 04 24             	mov    %eax,(%esp)
 81feec4:	e8 87 48 8e 00       	call   8ae3750 <_Unwind_Resume>
 81feec9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81feecc:	89 04 24             	mov    %eax,(%esp)
 81feecf:	e8 ac ef 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81feed4:	83 c4 20             	add    $0x20,%esp
 81feed7:	5b                   	pop    %ebx
 81feed8:	5e                   	pop    %esi
 81feed9:	5d                   	pop    %ebp
 81feeda:	c3                   	ret
 81feedb:	90                   	nop

```

```c
// Dispatcher_EPLPCommand::_BroadCastPacket @ 0x81fee14

/* Dispatcher_EPLPCommand::_BroadCastPacket(CParty*, MSG_EPLP_COMMAND&) */

void __thiscall
Dispatcher_EPLPCommand::_BroadCastPacket
          (Dispatcher_EPLPCommand *this,CParty *param_1,MSG_EPLP_COMMAND *param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081fee3d to 081feeab has its CatchHandler @ 081feeae */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x4b);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)(byte)param_2[0xd]);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)(byte)param_2[0xe]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CParty::send_to_party(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## _SendEPLPError

```asm
// === 081fed4c Dispatcher_EPLPCommand::_SendEPLPError  [0x081fed4c-0x81fee13] ===
 81fed4c:	55                   	push   %ebp
 81fed4d:	89 e5                	mov    %esp,%ebp
 81fed4f:	56                   	push   %esi
 81fed50:	53                   	push   %ebx
 81fed51:	83 ec 30             	sub    $0x30,%esp
 81fed54:	8b 55 10             	mov    0x10(%ebp),%edx
 81fed57:	8b 45 14             	mov    0x14(%ebp),%eax
 81fed5a:	88 55 e4             	mov    %dl,-0x1c(%ebp)
 81fed5d:	88 45 e0             	mov    %al,-0x20(%ebp)
 81fed60:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fed63:	89 04 24             	mov    %eax,(%esp)
 81fed66:	e8 e1 ef 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81fed6b:	c7 44 24 08 4b 00 00 	movl   $0x4b,0x8(%esp)
 81fed72:	00 
 81fed73:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fed7a:	00 
 81fed7b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fed7e:	89 04 24             	mov    %eax,(%esp)
 81fed81:	e8 76 cb ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81fed86:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fed8d:	00 
 81fed8e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fed91:	89 04 24             	mov    %eax,(%esp)
 81fed94:	e8 87 cb ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81fed99:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
 81fed9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81feda1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81feda4:	89 04 24             	mov    %eax,(%esp)
 81feda7:	e8 74 cb ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81fedac:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 81fedb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fedb4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fedb7:	89 04 24             	mov    %eax,(%esp)
 81fedba:	e8 61 cb ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81fedbf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fedc6:	00 
 81fedc7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fedca:	89 04 24             	mov    %eax,(%esp)
 81fedcd:	e8 86 cb ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81fedd2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fedd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fedd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81feddc:	89 04 24             	mov    %eax,(%esp)
 81feddf:	e8 6a e3 39 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81fede4:	eb 1b                	jmp    81fee01 <_ZN22Dispatcher_EPLPCommand14_SendEPLPErrorEP6CPartyhh+0xb5>
 81fede6:	89 d3                	mov    %edx,%ebx
 81fede8:	89 c6                	mov    %eax,%esi
 81fedea:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81feded:	89 04 24             	mov    %eax,(%esp)
 81fedf0:	e8 8b f0 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81fedf5:	89 f0                	mov    %esi,%eax
 81fedf7:	89 da                	mov    %ebx,%edx
 81fedf9:	89 04 24             	mov    %eax,(%esp)
 81fedfc:	e8 4f 49 8e 00       	call   8ae3750 <_Unwind_Resume>
 81fee01:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fee04:	89 04 24             	mov    %eax,(%esp)
 81fee07:	e8 74 f0 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81fee0c:	83 c4 30             	add    $0x30,%esp
 81fee0f:	5b                   	pop    %ebx
 81fee10:	5e                   	pop    %esi
 81fee11:	5d                   	pop    %ebp
 81fee12:	c3                   	ret
 81fee13:	90                   	nop

```

```c
// Dispatcher_EPLPCommand::_SendEPLPError @ 0x81fed4c

/* Dispatcher_EPLPCommand::_SendEPLPError(CParty*, unsigned char, unsigned char) */

void __thiscall
Dispatcher_EPLPCommand::_SendEPLPError
          (Dispatcher_EPLPCommand *this,CParty *param_1,uchar param_2,uchar param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081fed81 to 081fede3 has its CatchHandler @ 081fede6 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x4b);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CParty::send_to_party(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## dispatch_sig

```asm
// === 081feedc Dispatcher_EPLPCommand::dispatch_sig  [0x081feedc-0x81ff343] ===
 81feedc:	55                   	push   %ebp
 81feedd:	89 e5                	mov    %esp,%ebp
 81feedf:	56                   	push   %esi
 81feee0:	53                   	push   %ebx
 81feee1:	83 ec 50             	sub    $0x50,%esp
 81feee4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81feee7:	89 04 24             	mov    %eax,(%esp)
 81feeea:	e8 9d b4 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81feeef:	89 04 24             	mov    %eax,(%esp)
 81feef2:	e8 f9 77 f4 ff       	call   81466f0 <_ZN6Global11CGlobalFunc15Get_State_CheckE8ch_state>
 81feef7:	83 f0 01             	xor    $0x1,%eax
 81feefa:	84 c0                	test   %al,%al
 81feefc:	74 0a                	je     81fef08 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x2c>
 81feefe:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fef03:	e9 33 04 00 00       	jmp    81ff33b <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x45f>
 81fef08:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 81fef0b:	83 c0 0d             	add    $0xd,%eax
 81fef0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fef12:	8b 45 10             	mov    0x10(%ebp),%eax
 81fef15:	89 04 24             	mov    %eax,(%esp)
 81fef18:	e8 53 e0 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81fef1d:	83 f0 01             	xor    $0x1,%eax
 81fef20:	84 c0                	test   %al,%al
 81fef22:	74 2b                	je     81fef4f <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x73>
 81fef24:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fef2b:	00 
 81fef2c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fef33:	00 
 81fef34:	c7 44 24 04 20 fa bc 	movl   $0x8bcfa20,0x4(%esp)
 81fef3b:	08 
 81fef3c:	c7 04 24 38 92 00 00 	movl   $0x9238,(%esp)
 81fef43:	e8 8f 19 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fef48:	89 c3                	mov    %eax,%ebx
 81fef4a:	e9 ec 03 00 00       	jmp    81ff33b <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x45f>
 81fef4f:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 81fef52:	83 c0 0e             	add    $0xe,%eax
 81fef55:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fef59:	8b 45 10             	mov    0x10(%ebp),%eax
 81fef5c:	89 04 24             	mov    %eax,(%esp)
 81fef5f:	e8 0c e0 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81fef64:	83 f0 01             	xor    $0x1,%eax
 81fef67:	84 c0                	test   %al,%al
 81fef69:	74 2b                	je     81fef96 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0xba>
 81fef6b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fef72:	00 
 81fef73:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fef7a:	00 
 81fef7b:	c7 44 24 04 20 fa bc 	movl   $0x8bcfa20,0x4(%esp)
 81fef82:	08 
 81fef83:	c7 04 24 39 92 00 00 	movl   $0x9239,(%esp)
 81fef8a:	e8 48 19 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fef8f:	89 c3                	mov    %eax,%ebx
 81fef91:	e9 a5 03 00 00       	jmp    81ff33b <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x45f>
 81fef96:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fef99:	89 04 24             	mov    %eax,(%esp)
 81fef9c:	e8 eb b3 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81fefa1:	83 f8 0d             	cmp    $0xd,%eax
 81fefa4:	0f 94 c0             	sete   %al
 81fefa7:	84 c0                	test   %al,%al
 81fefa9:	0f 84 e9 00 00 00    	je     81ff098 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x1bc>
 81fefaf:	e8 36 e0 f2 ff       	call   812cfea <_ZN12advancealtar18isOpenAdvanceAltarEv>
 81fefb4:	88 45 ef             	mov    %al,-0x11(%ebp)
 81fefb7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81fefba:	89 04 24             	mov    %eax,(%esp)
 81fefbd:	e8 8a ed 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81fefc2:	c7 44 24 08 4b 00 00 	movl   $0x4b,0x8(%esp)
 81fefc9:	00 
 81fefca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fefd1:	00 
 81fefd2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81fefd5:	89 04 24             	mov    %eax,(%esp)
 81fefd8:	e8 1f c9 ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81fefdd:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 81fefe1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fefe5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81fefe8:	89 04 24             	mov    %eax,(%esp)
 81fefeb:	e8 30 c9 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81feff0:	0f b6 45 de          	movzbl -0x22(%ebp),%eax
 81feff4:	0f b6 c0             	movzbl %al,%eax
 81feff7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81feffb:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81feffe:	89 04 24             	mov    %eax,(%esp)
 81ff001:	e8 1a c9 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ff006:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 81ff00a:	0f b6 c0             	movzbl %al,%eax
 81ff00d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff011:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81ff014:	89 04 24             	mov    %eax,(%esp)
 81ff017:	e8 04 c9 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ff01c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ff023:	00 
 81ff024:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81ff027:	89 04 24             	mov    %eax,(%esp)
 81ff02a:	e8 29 c9 ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81ff02f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81ff032:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff036:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff039:	89 04 24             	mov    %eax,(%esp)
 81ff03c:	e8 79 95 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81ff041:	0f b6 45 de          	movzbl -0x22(%ebp),%eax
 81ff045:	3c 01                	cmp    $0x1,%al
 81ff047:	74 07                	je     81ff050 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x174>
 81ff049:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff04e:	eb 38                	jmp    81ff088 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x1ac>
 81ff050:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 81ff054:	0f b6 c0             	movzbl %al,%eax
 81ff057:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff05b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff05e:	89 04 24             	mov    %eax,(%esp)
 81ff061:	e8 b8 1f f3 ff       	call   813101e <_ZN12advancealtar7Manager4eplpEP5CUserNS_8EplpType1TE>
 81ff066:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff06b:	eb 1b                	jmp    81ff088 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x1ac>
 81ff06d:	89 d3                	mov    %edx,%ebx
 81ff06f:	89 c6                	mov    %eax,%esi
 81ff071:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81ff074:	89 04 24             	mov    %eax,(%esp)
 81ff077:	e8 04 ee 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ff07c:	89 f0                	mov    %esi,%eax
 81ff07e:	89 da                	mov    %ebx,%edx
 81ff080:	89 04 24             	mov    %eax,(%esp)
 81ff083:	e8 c8 46 8e 00       	call   8ae3750 <_Unwind_Resume>
 81ff088:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81ff08b:	89 04 24             	mov    %eax,(%esp)
 81ff08e:	e8 ed ed 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ff093:	e9 a3 02 00 00       	jmp    81ff33b <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x45f>
 81ff098:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff09b:	89 04 24             	mov    %eax,(%esp)
 81ff09e:	e8 a9 60 45 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81ff0a3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81ff0a6:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81ff0aa:	75 0a                	jne    81ff0b6 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x1da>
 81ff0ac:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff0b1:	e9 85 02 00 00       	jmp    81ff33b <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x45f>
 81ff0b6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ff0b9:	89 04 24             	mov    %eax,(%esp)
 81ff0bc:	e8 bf 66 f4 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 81ff0c1:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81ff0c4:	0f 95 c0             	setne  %al
 81ff0c7:	84 c0                	test   %al,%al
 81ff0c9:	74 2f                	je     81ff0fa <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x21e>
 81ff0cb:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 81ff0cf:	0f b6 c0             	movzbl %al,%eax
 81ff0d2:	c7 44 24 0c 08 00 00 	movl   $0x8,0xc(%esp)
 81ff0d9:	00 
 81ff0da:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ff0de:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ff0e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff0e5:	8b 45 08             	mov    0x8(%ebp),%eax
 81ff0e8:	89 04 24             	mov    %eax,(%esp)
 81ff0eb:	e8 5c fc ff ff       	call   81fed4c <_ZN22Dispatcher_EPLPCommand14_SendEPLPErrorEP6CPartyhh>
 81ff0f0:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff0f5:	e9 41 02 00 00       	jmp    81ff33b <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x45f>
 81ff0fa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ff0fd:	89 04 24             	mov    %eax,(%esp)
 81ff100:	e8 17 67 f4 ff       	call   814581c <_ZN6CParty12GetEPLPStateEv>
 81ff105:	3c 02                	cmp    $0x2,%al
 81ff107:	0f 95 c0             	setne  %al
 81ff10a:	84 c0                	test   %al,%al
 81ff10c:	74 20                	je     81ff12e <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x252>
 81ff10e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff111:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff115:	8b 45 08             	mov    0x8(%ebp),%eax
 81ff118:	89 04 24             	mov    %eax,(%esp)
 81ff11b:	e8 40 06 06 00       	call   825f760 <_ZN22Dispatcher_EPLPCommand16excludeEplpStateEP5CUser>
 81ff120:	84 c0                	test   %al,%al
 81ff122:	74 0a                	je     81ff12e <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x252>
 81ff124:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff129:	e9 0d 02 00 00       	jmp    81ff33b <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x45f>
 81ff12e:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 81ff131:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ff135:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ff138:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff13c:	8b 45 08             	mov    0x8(%ebp),%eax
 81ff13f:	89 04 24             	mov    %eax,(%esp)
 81ff142:	e8 cd fc ff ff       	call   81fee14 <_ZN22Dispatcher_EPLPCommand16_BroadCastPacketEP6CPartyR16MSG_EPLP_COMMAND>
 81ff147:	0f b6 45 de          	movzbl -0x22(%ebp),%eax
 81ff14b:	3c 01                	cmp    $0x1,%al
 81ff14d:	74 0a                	je     81ff159 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x27d>
 81ff14f:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff154:	e9 e2 01 00 00       	jmp    81ff33b <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x45f>
 81ff159:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff15c:	89 04 24             	mov    %eax,(%esp)
 81ff15f:	e8 42 94 48 00       	call   86885a6 <_ZN5CUser17GetSecretShopDataEv>
 81ff164:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81ff167:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81ff16b:	74 16                	je     81ff183 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x2a7>
 81ff16d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ff170:	89 04 24             	mov    %eax,(%esp)
 81ff173:	e8 94 23 8b 00       	call   8ab150c <_ZN10secretshop16SECRET_SHOP_DATA6IsOpenEv>
 81ff178:	84 c0                	test   %al,%al
 81ff17a:	74 07                	je     81ff183 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x2a7>
 81ff17c:	b8 01 00 00 00       	mov    $0x1,%eax
 81ff181:	eb 05                	jmp    81ff188 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x2ac>
 81ff183:	b8 00 00 00 00       	mov    $0x0,%eax
 81ff188:	84 c0                	test   %al,%al
 81ff18a:	74 41                	je     81ff1cd <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x2f1>
 81ff18c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ff18f:	89 04 24             	mov    %eax,(%esp)
 81ff192:	e8 c3 23 8b 00       	call   8ab155a <_ZN10secretshop16SECRET_SHOP_DATA13IsCompleteBuyEv>
 81ff197:	83 f0 01             	xor    $0x1,%eax
 81ff19a:	84 c0                	test   %al,%al
 81ff19c:	74 2f                	je     81ff1cd <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x2f1>
 81ff19e:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 81ff1a2:	0f b6 c0             	movzbl %al,%eax
 81ff1a5:	c7 44 24 0c 85 00 00 	movl   $0x85,0xc(%esp)
 81ff1ac:	00 
 81ff1ad:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ff1b1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ff1b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff1b8:	8b 45 08             	mov    0x8(%ebp),%eax
 81ff1bb:	89 04 24             	mov    %eax,(%esp)
 81ff1be:	e8 89 fb ff ff       	call   81fed4c <_ZN22Dispatcher_EPLPCommand14_SendEPLPErrorEP6CPartyhh>
 81ff1c3:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff1c8:	e9 6e 01 00 00       	jmp    81ff33b <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x45f>
 81ff1cd:	c7 45 e8 03 00 00 00 	movl   $0x3,-0x18(%ebp)
 81ff1d4:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 81ff1d8:	0f b6 c0             	movzbl %al,%eax
 81ff1db:	83 f8 02             	cmp    $0x2,%eax
 81ff1de:	74 12                	je     81ff1f2 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x316>
 81ff1e0:	83 f8 02             	cmp    $0x2,%eax
 81ff1e3:	7f 06                	jg     81ff1eb <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x30f>
 81ff1e5:	85 c0                	test   %eax,%eax
 81ff1e7:	78 2f                	js     81ff218 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x33c>
 81ff1e9:	eb 52                	jmp    81ff23d <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x361>
 81ff1eb:	83 f8 03             	cmp    $0x3,%eax
 81ff1ee:	74 0b                	je     81ff1fb <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x31f>
 81ff1f0:	eb 26                	jmp    81ff218 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x33c>
 81ff1f2:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
 81ff1f9:	eb 42                	jmp    81ff23d <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x361>
 81ff1fb:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81ff202:	00 
 81ff203:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ff206:	89 04 24             	mov    %eax,(%esp)
 81ff209:	e8 1a 66 f4 ff       	call   8145828 <_ZN6CParty18SetSelectedEPLPCmdEc>
 81ff20e:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff213:	e9 23 01 00 00       	jmp    81ff33b <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x45f>
 81ff218:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 81ff21c:	0f b6 c0             	movzbl %al,%eax
 81ff21f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ff226:	00 
 81ff227:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ff22b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ff22e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff232:	8b 45 08             	mov    0x8(%ebp),%eax
 81ff235:	89 04 24             	mov    %eax,(%esp)
 81ff238:	e8 0f fb ff ff       	call   81fed4c <_ZN22Dispatcher_EPLPCommand14_SendEPLPErrorEP6CPartyhh>
 81ff23d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff240:	89 04 24             	mov    %eax,(%esp)
 81ff243:	e8 44 b1 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ff248:	83 f8 0c             	cmp    $0xc,%eax
 81ff24b:	0f 94 c0             	sete   %al
 81ff24e:	84 c0                	test   %al,%al
 81ff250:	74 3e                	je     81ff290 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x3b4>
 81ff252:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff255:	89 04 24             	mov    %eax,(%esp)
 81ff258:	e8 c3 5f 45 00       	call   8655220 <_ZN5CUser12getBossTowerEv>
 81ff25d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ff260:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81ff264:	75 0a                	jne    81ff270 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x394>
 81ff266:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff26b:	e9 cb 00 00 00       	jmp    81ff33b <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x45f>
 81ff270:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 81ff274:	0f b6 c0             	movzbl %al,%eax
 81ff277:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff27b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ff27e:	89 04 24             	mov    %eax,(%esp)
 81ff281:	e8 ec 38 f4 ff       	call   8142b72 <_ZN8WongWork10CBossTower17handleEPLPCommandEi>
 81ff286:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff28b:	e9 ab 00 00 00       	jmp    81ff33b <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x45f>
 81ff290:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff293:	89 04 24             	mov    %eax,(%esp)
 81ff296:	e8 f1 b0 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ff29b:	83 f8 0a             	cmp    $0xa,%eax
 81ff29e:	0f 94 c0             	sete   %al
 81ff2a1:	84 c0                	test   %al,%al
 81ff2a3:	74 5c                	je     81ff301 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x425>
 81ff2a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff2a8:	89 04 24             	mov    %eax,(%esp)
 81ff2ab:	e8 f4 5f 45 00       	call   86552a4 <_ZN5CUser13getDeathTowerEv>
 81ff2b0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ff2b3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ff2b7:	75 28                	jne    81ff2e1 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x405>
 81ff2b9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ff2c0:	00 
 81ff2c1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ff2c8:	00 
 81ff2c9:	c7 44 24 04 20 fa bc 	movl   $0x8bcfa20,0x4(%esp)
 81ff2d0:	08 
 81ff2d1:	c7 04 24 b9 92 00 00 	movl   $0x92b9,(%esp)
 81ff2d8:	e8 fa 15 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ff2dd:	89 c3                	mov    %eax,%ebx
 81ff2df:	eb 5a                	jmp    81ff33b <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x45f>
 81ff2e1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ff2e4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ff2e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff2eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff2ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ff2f2:	89 04 24             	mov    %eax,(%esp)
 81ff2f5:	e8 0e 6f 26 00       	call   8466208 <_ZN8WongWork11CDeathTower23handleSelectEPLPCommandEP5CUseri>
 81ff2fa:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff2ff:	eb 3a                	jmp    81ff33b <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x45f>
 81ff301:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff304:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff308:	8b 45 08             	mov    0x8(%ebp),%eax
 81ff30b:	89 04 24             	mov    %eax,(%esp)
 81ff30e:	e8 e1 04 06 00       	call   825f7f4 <_ZN22Dispatcher_EPLPCommand17isReTurnToVillageEP5CUser>
 81ff313:	84 c0                	test   %al,%al
 81ff315:	74 0d                	je     81ff324 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x448>
 81ff317:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ff31a:	89 04 24             	mov    %eax,(%esp)
 81ff31d:	e8 3e d7 3a 00       	call   85aca60 <_ZN6CParty15ReturnToVillageEv>
 81ff322:	eb 12                	jmp    81ff336 <_ZN22Dispatcher_EPLPCommand12dispatch_sigEP5CUserR9PacketBuf+0x45a>
 81ff324:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ff327:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff32b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ff32e:	89 04 24             	mov    %eax,(%esp)
 81ff331:	e8 72 2f 3a 00       	call   85a22a8 <_ZN6CParty17SelectEPLPCommandEi>
 81ff336:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff33b:	89 d8                	mov    %ebx,%eax
 81ff33d:	83 c4 50             	add    $0x50,%esp
 81ff340:	5b                   	pop    %ebx
 81ff341:	5e                   	pop    %esi
 81ff342:	5d                   	pop    %ebp
 81ff343:	c3                   	ret

```

```c
// Dispatcher_EPLPCommand::dispatch_sig @ 0x81feedc

/* Dispatcher_EPLPCommand::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_EPLPCommand::dispatch_sig(Dispatcher_EPLPCommand *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  CUser *pCVar5;
  PacketGuard local_40 [13];
  MSG_EPLP_COMMAND local_33 [13];
  byte local_26;
  byte local_25;
  CParty *local_24;
  SECRET_SHOP_DATA *local_20;
  int local_1c;
  byte local_15;
  CBossTower *local_14;
  CDeathTower *local_10;
  
  uVar3 = CUser::get_state(param_1);
  cVar2 = Global::CGlobalFunc::Get_State_Check(uVar3);
  if (cVar2 == '\x01') {
    cVar2 = PacketBuf::get_byte(param_2,&local_26);
    if (cVar2 == '\x01') {
      cVar2 = PacketBuf::get_byte(param_2,&local_25);
      if (cVar2 == '\x01') {
        iVar4 = CUser::get_state(param_1);
        if (iVar4 == 0xd) {
          local_15 = advancealtar::isOpenAdvanceAltar();
          PacketGuard::PacketGuard(local_40);
                    /* try { // try from 081fefd8 to 081ff065 has its CatchHandler @ 081ff06d */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,1,0x4b);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(uint)local_15);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(uint)local_26);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(uint)local_25);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
          CUser::Send(param_1,local_40);
          if (local_26 == 1) {
            advancealtar::Manager::eplp(param_1,local_25);
          }
          uVar3 = 0;
          PacketGuard::~PacketGuard(local_40);
        }
        else {
          local_24 = (CParty *)CUser::GetParty(param_1);
          if (local_24 == (CParty *)0x0) {
            uVar3 = 0;
          }
          else {
            pCVar5 = (CUser *)CParty::getManager(local_24);
            if (pCVar5 == param_1) {
              cVar2 = CParty::GetEPLPState(local_24);
              if ((cVar2 == '\x02') || (cVar2 = excludeEplpState(this,param_1), cVar2 == '\0')) {
                _BroadCastPacket(this,local_24,local_33);
                if (local_26 == 1) {
                  local_20 = (SECRET_SHOP_DATA *)CUser::GetSecretShopData(param_1);
                  if ((local_20 == (SECRET_SHOP_DATA *)0x0) ||
                     (cVar2 = secretshop::SECRET_SHOP_DATA::IsOpen(local_20), cVar2 == '\0')) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if ((bVar1) &&
                     (cVar2 = secretshop::SECRET_SHOP_DATA::IsCompleteBuy(local_20), cVar2 != '\x01'
                     )) {
                    _SendEPLPError(this,local_24,local_25,0x85);
                    uVar3 = 0;
                  }
                  else {
                    local_1c = 3;
                    if (local_25 == 2) {
                      local_1c = 1;
                    }
                    else if (2 < local_25) {
                      if (local_25 == 3) {
                        CParty::SetSelectedEPLPCmd(local_24,'\x03');
                        return 0;
                      }
                      _SendEPLPError(this,local_24,local_25,'\x01');
                    }
                    iVar4 = CUser::get_state(param_1);
                    if (iVar4 == 0xc) {
                      local_14 = (CBossTower *)CUser::getBossTower(param_1);
                      if (local_14 == (CBossTower *)0x0) {
                        uVar3 = 0;
                      }
                      else {
                        WongWork::CBossTower::handleEPLPCommand(local_14,(uint)local_25);
                        uVar3 = 0;
                      }
                    }
                    else {
                      iVar4 = CUser::get_state(param_1);
                      if (iVar4 == 10) {
                        local_10 = (CDeathTower *)CUser::getDeathTower(param_1);
                        if (local_10 == (CDeathTower *)0x0) {
                          uVar3 = LineFunc(0x92b9,
                                           "virtual int Dispatcher_EPLPCommand::dispatch_sig(CUser*, PacketBuf&)"
                                           ,0,0);
                        }
                        else {
                          WongWork::CDeathTower::handleSelectEPLPCommand(local_10,param_1,local_1c);
                          uVar3 = 0;
                        }
                      }
                      else {
                        cVar2 = isReTurnToVillage(this,param_1);
                        if (cVar2 == '\0') {
                          CParty::SelectEPLPCommand(local_24,local_1c);
                        }
                        else {
                          CParty::ReturnToVillage(local_24);
                        }
                        uVar3 = 0;
                      }
                    }
                  }
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              _SendEPLPError(this,local_24,local_25,'\b');
              uVar3 = 0;
            }
          }
        }
      }
      else {
        uVar3 = LineFunc(0x9239,
                         "virtual int Dispatcher_EPLPCommand::dispatch_sig(CUser*, PacketBuf&)",0,0)
        ;
      }
    }
    else {
      uVar3 = LineFunc(0x9238,"virtual int Dispatcher_EPLPCommand::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## excludeEplpState

```asm
// === 0825f760 Dispatcher_EPLPCommand::excludeEplpState  [0x0825f760-0x825f7f3] ===
 825f760:	55                   	push   %ebp
 825f761:	89 e5                	mov    %esp,%ebp
 825f763:	83 ec 28             	sub    $0x28,%esp
 825f766:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f769:	89 04 24             	mov    %eax,(%esp)
 825f76c:	e8 db 59 3f 00       	call   865514c <_ZN5CUser8GetPartyEv>
 825f771:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825f774:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 825f778:	75 07                	jne    825f781 <_ZN22Dispatcher_EPLPCommand16excludeEplpStateEP5CUser+0x21>
 825f77a:	b8 00 00 00 00       	mov    $0x0,%eax
 825f77f:	eb 71                	jmp    825f7f2 <_ZN22Dispatcher_EPLPCommand16excludeEplpStateEP5CUser+0x92>
 825f781:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f784:	05 24 0b 00 00       	add    $0xb24,%eax
 825f789:	89 04 24             	mov    %eax,(%esp)
 825f78c:	e8 47 d9 fc ff       	call   822d0d8 <_ZN13CBattle_Field17get_dungeon_indexEv>
 825f791:	8b 15 54 f7 41 09    	mov    0x941f754,%edx
 825f797:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f79b:	89 14 24             	mov    %edx,(%esp)
 825f79e:	e8 cf 4a 3e 00       	call   8644272 <_ZNK17TowerOfDespairMgr31IsTowerOfDespairDungeon_ByIndexEi>
 825f7a3:	84 c0                	test   %al,%al
 825f7a5:	74 07                	je     825f7ae <_ZN22Dispatcher_EPLPCommand16excludeEplpStateEP5CUser+0x4e>
 825f7a7:	b8 00 00 00 00       	mov    $0x0,%eax
 825f7ac:	eb 44                	jmp    825f7f2 <_ZN22Dispatcher_EPLPCommand16excludeEplpStateEP5CUser+0x92>
 825f7ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f7b1:	89 04 24             	mov    %eax,(%esp)
 825f7b4:	e8 11 17 43 00       	call   8690eca <_ZNK5CUser12getMoveSpaceEv>
 825f7b9:	83 f8 01             	cmp    $0x1,%eax
 825f7bc:	0f 94 c0             	sete   %al
 825f7bf:	84 c0                	test   %al,%al
 825f7c1:	74 07                	je     825f7ca <_ZN22Dispatcher_EPLPCommand16excludeEplpStateEP5CUser+0x6a>
 825f7c3:	b8 00 00 00 00       	mov    $0x0,%eax
 825f7c8:	eb 28                	jmp    825f7f2 <_ZN22Dispatcher_EPLPCommand16excludeEplpStateEP5CUser+0x92>
 825f7ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f7cd:	05 24 0b 00 00       	add    $0xb24,%eax
 825f7d2:	89 04 24             	mov    %eax,(%esp)
 825f7d5:	e8 fe d8 fc ff       	call   822d0d8 <_ZN13CBattle_Field17get_dungeon_indexEv>
 825f7da:	89 04 24             	mov    %eax,(%esp)
 825f7dd:	e8 88 9f 85 00       	call   8ab976a <_ZN20GlobalScriptTutorial23IsGlobalTutorialDungeonEj>
 825f7e2:	84 c0                	test   %al,%al
 825f7e4:	74 07                	je     825f7ed <_ZN22Dispatcher_EPLPCommand16excludeEplpStateEP5CUser+0x8d>
 825f7e6:	b8 00 00 00 00       	mov    $0x0,%eax
 825f7eb:	eb 05                	jmp    825f7f2 <_ZN22Dispatcher_EPLPCommand16excludeEplpStateEP5CUser+0x92>
 825f7ed:	b8 01 00 00 00       	mov    $0x1,%eax
 825f7f2:	c9                   	leave
 825f7f3:	c3                   	ret

```

```c
// Dispatcher_EPLPCommand::excludeEplpState @ 0x825f760

/* Dispatcher_EPLPCommand::excludeEplpState(CUser*) */

undefined4 __thiscall
Dispatcher_EPLPCommand::excludeEplpState(Dispatcher_EPLPCommand *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = CUser::GetParty(param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    CBattle_Field::get_dungeon_index((CBattle_Field *)(iVar2 + 0xb24));
    cVar1 = TowerOfDespairMgr::IsTowerOfDespairDungeon_ByIndex(GlobalData::s_pTowerOfDespairMgr);
    if (cVar1 == '\0') {
      iVar4 = CUser::getMoveSpace(param_1);
      if (iVar4 == 1) {
        uVar3 = 0;
      }
      else {
        uVar5 = CBattle_Field::get_dungeon_index((CBattle_Field *)(iVar2 + 0xb24));
        cVar1 = GlobalScriptTutorial::IsGlobalTutorialDungeon(uVar5);
        if (cVar1 == '\0') {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## isReTurnToVillage

```asm
// === 0825f7f4 Dispatcher_EPLPCommand::isReTurnToVillage  [0x0825f7f4-0x825f867] ===
 825f7f4:	55                   	push   %ebp
 825f7f5:	89 e5                	mov    %esp,%ebp
 825f7f7:	83 ec 28             	sub    $0x28,%esp
 825f7fa:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 825f7fe:	75 07                	jne    825f807 <_ZN22Dispatcher_EPLPCommand17isReTurnToVillageEP5CUser+0x13>
 825f800:	b8 00 00 00 00       	mov    $0x0,%eax
 825f805:	eb 5f                	jmp    825f866 <_ZN22Dispatcher_EPLPCommand17isReTurnToVillageEP5CUser+0x72>
 825f807:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f80a:	89 04 24             	mov    %eax,(%esp)
 825f80d:	e8 3a 59 3f 00       	call   865514c <_ZN5CUser8GetPartyEv>
 825f812:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825f815:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 825f819:	75 07                	jne    825f822 <_ZN22Dispatcher_EPLPCommand17isReTurnToVillageEP5CUser+0x2e>
 825f81b:	b8 00 00 00 00       	mov    $0x0,%eax
 825f820:	eb 44                	jmp    825f866 <_ZN22Dispatcher_EPLPCommand17isReTurnToVillageEP5CUser+0x72>
 825f822:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f825:	89 04 24             	mov    %eax,(%esp)
 825f828:	e8 9d 16 43 00       	call   8690eca <_ZNK5CUser12getMoveSpaceEv>
 825f82d:	83 f8 01             	cmp    $0x1,%eax
 825f830:	0f 94 c0             	sete   %al
 825f833:	84 c0                	test   %al,%al
 825f835:	74 07                	je     825f83e <_ZN22Dispatcher_EPLPCommand17isReTurnToVillageEP5CUser+0x4a>
 825f837:	b8 01 00 00 00       	mov    $0x1,%eax
 825f83c:	eb 28                	jmp    825f866 <_ZN22Dispatcher_EPLPCommand17isReTurnToVillageEP5CUser+0x72>
 825f83e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f841:	05 24 0b 00 00       	add    $0xb24,%eax
 825f846:	89 04 24             	mov    %eax,(%esp)
 825f849:	e8 8a d8 fc ff       	call   822d0d8 <_ZN13CBattle_Field17get_dungeon_indexEv>
 825f84e:	89 04 24             	mov    %eax,(%esp)
 825f851:	e8 14 9f 85 00       	call   8ab976a <_ZN20GlobalScriptTutorial23IsGlobalTutorialDungeonEj>
 825f856:	84 c0                	test   %al,%al
 825f858:	74 07                	je     825f861 <_ZN22Dispatcher_EPLPCommand17isReTurnToVillageEP5CUser+0x6d>
 825f85a:	b8 01 00 00 00       	mov    $0x1,%eax
 825f85f:	eb 05                	jmp    825f866 <_ZN22Dispatcher_EPLPCommand17isReTurnToVillageEP5CUser+0x72>
 825f861:	b8 00 00 00 00       	mov    $0x0,%eax
 825f866:	c9                   	leave
 825f867:	c3                   	ret

```

```c
// Dispatcher_EPLPCommand::isReTurnToVillage @ 0x825f7f4

/* Dispatcher_EPLPCommand::isReTurnToVillage(CUser*) */

undefined4 __thiscall
Dispatcher_EPLPCommand::isReTurnToVillage(Dispatcher_EPLPCommand *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar3 = CUser::GetParty(param_1);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      iVar4 = CUser::getMoveSpace(param_1);
      if (iVar4 == 1) {
        uVar2 = 1;
      }
      else {
        uVar5 = CBattle_Field::get_dungeon_index((CBattle_Field *)(iVar3 + 0xb24));
        cVar1 = GlobalScriptTutorial::IsGlobalTutorialDungeon(uVar5);
        if (cVar1 == '\0') {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}

```

