# DisPatcher_CheckSecurityProtection

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 08264912 DisPatcher_CheckSecurityProtection::check_error  [0x08264912-0x826491b] ===
 8264912:	55                   	push   %ebp
 8264913:	89 e5                	mov    %esp,%ebp
 8264915:	b8 00 00 00 00       	mov    $0x0,%eax
 826491a:	5d                   	pop    %ebp
 826491b:	c3                   	ret

```

```c
// DisPatcher_CheckSecurityProtection::check_error @ 0x8264912

/* DisPatcher_CheckSecurityProtection::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_CheckSecurityProtection::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## process

```asm
// === 0826481a DisPatcher_CheckSecurityProtection::process  [0x0826481a-0x8264851] ===
 826481a:	55                   	push   %ebp
 826481b:	89 e5                	mov    %esp,%ebp
 826481d:	83 ec 28             	sub    $0x28,%esp
 8264820:	8b 45 14             	mov    0x14(%ebp),%eax
 8264823:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8264826:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 826482b:	c7 44 24 08 38 00 00 	movl   $0x38,0x8(%esp)
 8264832:	00 
 8264833:	8b 55 0c             	mov    0xc(%ebp),%edx
 8264836:	89 54 24 04          	mov    %edx,0x4(%esp)
 826483a:	89 04 24             	mov    %eax,(%esp)
 826483d:	e8 c0 41 02 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 8264842:	89 c2                	mov    %eax,%edx
 8264844:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8264847:	88 50 04             	mov    %dl,0x4(%eax)
 826484a:	b8 00 00 00 00       	mov    $0x0,%eax
 826484f:	c9                   	leave
 8264850:	c3                   	ret
 8264851:	90                   	nop

```

```c
// DisPatcher_CheckSecurityProtection::process @ 0x826481a

/* DisPatcher_CheckSecurityProtection::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_CheckSecurityProtection::process
          (DisPatcher_CheckSecurityProtection *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  ParamBase PVar1;
  
  PVar1 = (ParamBase)CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x38);
  param_3[4] = PVar1;
  return 0;
}

```

---

## read

```asm
// === 08264810 DisPatcher_CheckSecurityProtection::read  [0x08264810-0x8264819] ===
 8264810:	55                   	push   %ebp
 8264811:	89 e5                	mov    %esp,%ebp
 8264813:	b8 00 00 00 00       	mov    $0x0,%eax
 8264818:	5d                   	pop    %ebp
 8264819:	c3                   	ret

```

```c
// DisPatcher_CheckSecurityProtection::read @ 0x8264810

/* DisPatcher_CheckSecurityProtection::read(PacketBuf&, MSG_BASE&) */

undefined4 DisPatcher_CheckSecurityProtection::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 08264852 DisPatcher_CheckSecurityProtection::send  [0x08264852-0x8264911] ===
 8264852:	55                   	push   %ebp
 8264853:	89 e5                	mov    %esp,%ebp
 8264855:	56                   	push   %esi
 8264856:	53                   	push   %ebx
 8264857:	83 ec 20             	sub    $0x20,%esp
 826485a:	8b 45 10             	mov    0x10(%ebp),%eax
 826485d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8264860:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8264863:	89 04 24             	mov    %eax,(%esp)
 8264866:	e8 e1 94 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 826486b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826486e:	89 04 24             	mov    %eax,(%esp)
 8264871:	e8 70 70 e6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8264876:	c7 44 24 08 76 01 00 	movl   $0x176,0x8(%esp)
 826487d:	00 
 826487e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8264885:	00 
 8264886:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8264889:	89 04 24             	mov    %eax,(%esp)
 826488c:	e8 6b 70 e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8264891:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8264898:	00 
 8264899:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826489c:	89 04 24             	mov    %eax,(%esp)
 826489f:	e8 7c 70 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82648a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82648a7:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 82648ab:	0f b6 c0             	movzbl %al,%eax
 82648ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 82648b2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82648b5:	89 04 24             	mov    %eax,(%esp)
 82648b8:	e8 63 70 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82648bd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82648c4:	00 
 82648c5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82648c8:	89 04 24             	mov    %eax,(%esp)
 82648cb:	e8 88 70 e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82648d0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82648d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82648d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82648da:	89 04 24             	mov    %eax,(%esp)
 82648dd:	e8 d8 3c 3e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82648e2:	eb 1b                	jmp    82648ff <_ZN34DisPatcher_CheckSecurityProtection4sendEP5CUserR9ParamBase+0xad>
 82648e4:	89 d3                	mov    %edx,%ebx
 82648e6:	89 c6                	mov    %eax,%esi
 82648e8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82648eb:	89 04 24             	mov    %eax,(%esp)
 82648ee:	e8 8d 95 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82648f3:	89 f0                	mov    %esi,%eax
 82648f5:	89 da                	mov    %ebx,%edx
 82648f7:	89 04 24             	mov    %eax,(%esp)
 82648fa:	e8 51 ee 87 00       	call   8ae3750 <_Unwind_Resume>
 82648ff:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8264902:	89 04 24             	mov    %eax,(%esp)
 8264905:	e8 76 95 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 826490a:	83 c4 20             	add    $0x20,%esp
 826490d:	5b                   	pop    %ebx
 826490e:	5e                   	pop    %esi
 826490f:	5d                   	pop    %ebp
 8264910:	c3                   	ret
 8264911:	90                   	nop

```

```c
// DisPatcher_CheckSecurityProtection::send @ 0x8264852

/* DisPatcher_CheckSecurityProtection::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_CheckSecurityProtection::send
          (DisPatcher_CheckSecurityProtection *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08264871 to 082648e1 has its CatchHandler @ 082648e4 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x176);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[4]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

