# Inter_GenCeraTicket

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084ceea2 Inter_GenCeraTicket::dispatch_sig  [0x084ceea2-0x84cefd1] ===
 84ceea2:	55                   	push   %ebp
 84ceea3:	89 e5                	mov    %esp,%ebp
 84ceea5:	56                   	push   %esi
 84ceea6:	53                   	push   %ebx
 84ceea7:	83 ec 40             	sub    $0x40,%esp
 84ceeaa:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84ceeae:	75 0a                	jne    84ceeba <_ZN19Inter_GenCeraTicket12dispatch_sigEP5CUserPci+0x18>
 84ceeb0:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ceeb5:	e9 0f 01 00 00       	jmp    84cefc9 <_ZN19Inter_GenCeraTicket12dispatch_sigEP5CUserPci+0x127>
 84ceeba:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 84ceec1:	00 
 84ceec2:	8b 45 10             	mov    0x10(%ebp),%eax
 84ceec5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ceec9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84ceecc:	89 04 24             	mov    %eax,(%esp)
 84ceecf:	e8 cc e9 ba ff       	call   807d8a0 <memcpy@plt>
 84ceed4:	8b 45 10             	mov    0x10(%ebp),%eax
 84ceed7:	83 c0 04             	add    $0x4,%eax
 84ceeda:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 84ceee1:	00 
 84ceee2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ceee6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ceee9:	89 04 24             	mov    %eax,(%esp)
 84ceeec:	e8 df e9 ba ff       	call   807d8d0 <strncpy@plt>
 84ceef1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ceef4:	89 04 24             	mov    %eax,(%esp)
 84ceef7:	e8 50 ee 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84ceefc:	c7 44 24 08 44 00 00 	movl   $0x44,0x8(%esp)
 84cef03:	00 
 84cef04:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cef0b:	00 
 84cef0c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cef0f:	89 04 24             	mov    %eax,(%esp)
 84cef12:	e8 e5 c9 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cef17:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cef1e:	00 
 84cef1f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cef22:	89 04 24             	mov    %eax,(%esp)
 84cef25:	e8 f6 c9 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cef2a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84cef2d:	89 04 24             	mov    %eax,(%esp)
 84cef30:	e8 7b f4 ba ff       	call   807e3b0 <strlen@plt>
 84cef35:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cef39:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cef3c:	89 04 24             	mov    %eax,(%esp)
 84cef3f:	e8 f8 c9 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cef44:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84cef47:	89 04 24             	mov    %eax,(%esp)
 84cef4a:	e8 61 f4 ba ff       	call   807e3b0 <strlen@plt>
 84cef4f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cef53:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84cef56:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cef5a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cef5d:	89 04 24             	mov    %eax,(%esp)
 84cef60:	e8 7f 84 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cef65:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cef68:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cef6c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cef6f:	89 04 24             	mov    %eax,(%esp)
 84cef72:	e8 c5 c9 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cef77:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cef7e:	00 
 84cef7f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cef82:	89 04 24             	mov    %eax,(%esp)
 84cef85:	e8 ce c9 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cef8a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cef8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cef91:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cef94:	89 04 24             	mov    %eax,(%esp)
 84cef97:	e8 1e 96 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cef9c:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cefa1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cefa4:	89 04 24             	mov    %eax,(%esp)
 84cefa7:	e8 d4 ee 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cefac:	eb 1b                	jmp    84cefc9 <_ZN19Inter_GenCeraTicket12dispatch_sigEP5CUserPci+0x127>
 84cefae:	89 d3                	mov    %edx,%ebx
 84cefb0:	89 c6                	mov    %eax,%esi
 84cefb2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cefb5:	89 04 24             	mov    %eax,(%esp)
 84cefb8:	e8 c3 ee 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cefbd:	89 f0                	mov    %esi,%eax
 84cefbf:	89 da                	mov    %ebx,%edx
 84cefc1:	89 04 24             	mov    %eax,(%esp)
 84cefc4:	e8 87 47 61 00       	call   8ae3750 <_Unwind_Resume>
 84cefc9:	89 d8                	mov    %ebx,%eax
 84cefcb:	83 c4 40             	add    $0x40,%esp
 84cefce:	5b                   	pop    %ebx
 84cefcf:	5e                   	pop    %esi
 84cefd0:	5d                   	pop    %ebp
 84cefd1:	c3                   	ret

```

```c
// Inter_GenCeraTicket::dispatch_sig @ 0x84ceea2

/* Inter_GenCeraTicket::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GenCeraTicket::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  char local_3c [32];
  PacketGuard local_1c [12];
  int local_10;
  
  if (param_2 != (char *)0x0) {
    memcpy(&local_10,(void *)param_3,4);
    strncpy(local_3c,(char *)(param_3 + 4),0x20);
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084cef12 to 084cef9b has its CatchHandler @ 084cefae */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x44);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    sVar1 = strlen(local_3c);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,sVar1);
    sVar1 = strlen(local_3c);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_1c,local_3c,sVar1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```

