# Inter_Monitor_MegaphoneMsg

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d09aa Inter_Monitor_MegaphoneMsg::dispatch_sig  [0x084d09aa-0x84d0b39] ===
 84d09aa:	55                   	push   %ebp
 84d09ab:	89 e5                	mov    %esp,%ebp
 84d09ad:	56                   	push   %esi
 84d09ae:	53                   	push   %ebx
 84d09af:	83 ec 20             	sub    $0x20,%esp
 84d09b2:	8b 45 10             	mov    0x10(%ebp),%eax
 84d09b5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d09b8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d09bb:	89 04 24             	mov    %eax,(%esp)
 84d09be:	e8 89 d3 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d09c3:	c7 44 24 08 76 00 00 	movl   $0x76,0x8(%esp)
 84d09ca:	00 
 84d09cb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d09d2:	00 
 84d09d3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d09d6:	89 04 24             	mov    %eax,(%esp)
 84d09d9:	e8 1e af bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d09de:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d09e1:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 84d09e5:	0f b6 c0             	movzbl %al,%eax
 84d09e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d09ec:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d09ef:	89 04 24             	mov    %eax,(%esp)
 84d09f2:	e8 29 af bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d09f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d09fa:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84d09fe:	0f b6 c0             	movzbl %al,%eax
 84d0a01:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0a05:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0a08:	89 04 24             	mov    %eax,(%esp)
 84d0a0b:	e8 10 af bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d0a10:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0a13:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 84d0a17:	0f b7 c0             	movzwl %ax,%eax
 84d0a1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0a1e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0a21:	89 04 24             	mov    %eax,(%esp)
 84d0a24:	e8 7b 94 c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84d0a29:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0a2c:	83 c0 0f             	add    $0xf,%eax
 84d0a2f:	89 04 24             	mov    %eax,(%esp)
 84d0a32:	e8 79 d9 ba ff       	call   807e3b0 <strlen@plt>
 84d0a37:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0a3b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0a3e:	89 04 24             	mov    %eax,(%esp)
 84d0a41:	e8 f6 ae bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d0a46:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0a49:	83 c0 0f             	add    $0xf,%eax
 84d0a4c:	89 04 24             	mov    %eax,(%esp)
 84d0a4f:	e8 5c d9 ba ff       	call   807e3b0 <strlen@plt>
 84d0a54:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d0a57:	83 c2 0f             	add    $0xf,%edx
 84d0a5a:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d0a5e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d0a62:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0a65:	89 04 24             	mov    %eax,(%esp)
 84d0a68:	e8 77 69 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d0a6d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0a70:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 84d0a74:	0f b6 c0             	movzbl %al,%eax
 84d0a77:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0a7b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0a7e:	89 04 24             	mov    %eax,(%esp)
 84d0a81:	e8 b6 ae bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d0a86:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0a89:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 84d0a8d:	0f b6 c0             	movzbl %al,%eax
 84d0a90:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d0a93:	83 c2 2e             	add    $0x2e,%edx
 84d0a96:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d0a9a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d0a9e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0aa1:	89 04 24             	mov    %eax,(%esp)
 84d0aa4:	e8 3b 69 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d0aa9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d0ab0:	00 
 84d0ab1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0ab4:	89 04 24             	mov    %eax,(%esp)
 84d0ab7:	e8 9c ae bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d0abc:	e8 e6 98 c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d0ac1:	89 04 24             	mov    %eax,(%esp)
 84d0ac4:	e8 55 08 c2 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84d0ac9:	84 c0                	test   %al,%al
 84d0acb:	74 24                	je     84d0af1 <_ZN26Inter_Monitor_MegaphoneMsg12dispatch_sigEP5CUserPci+0x147>
 84d0acd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0ad0:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84d0ad4:	0f be d8             	movsbl %al,%ebx
 84d0ad7:	e8 cb 98 c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d0adc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d0ae0:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84d0ae3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d0ae7:	89 04 24             	mov    %eax,(%esp)
 84d0aea:	e8 bf 85 1f 00       	call   86c90ae <_ZN9GameWorld17send_server_groupER11PacketGuardc>
 84d0aef:	eb 14                	jmp    84d0b05 <_ZN26Inter_Monitor_MegaphoneMsg12dispatch_sigEP5CUserPci+0x15b>
 84d0af1:	e8 b1 98 c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d0af6:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84d0af9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d0afd:	89 04 24             	mov    %eax,(%esp)
 84d0b00:	e8 0f 81 1f 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84d0b05:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d0b0a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0b0d:	89 04 24             	mov    %eax,(%esp)
 84d0b10:	e8 6b d3 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d0b15:	89 d8                	mov    %ebx,%eax
 84d0b17:	83 c4 20             	add    $0x20,%esp
 84d0b1a:	5b                   	pop    %ebx
 84d0b1b:	5e                   	pop    %esi
 84d0b1c:	5d                   	pop    %ebp
 84d0b1d:	c3                   	ret
 84d0b1e:	89 d3                	mov    %edx,%ebx
 84d0b20:	89 c6                	mov    %eax,%esi
 84d0b22:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0b25:	89 04 24             	mov    %eax,(%esp)
 84d0b28:	e8 53 d3 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d0b2d:	89 f0                	mov    %esi,%eax
 84d0b2f:	89 da                	mov    %ebx,%edx
 84d0b31:	89 04 24             	mov    %eax,(%esp)
 84d0b34:	e8 17 2c 61 00       	call   8ae3750 <_Unwind_Resume>
 84d0b39:	90                   	nop

```

```c
// Inter_Monitor_MegaphoneMsg::dispatch_sig @ 0x84d09aa

/* Inter_Monitor_MegaphoneMsg::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Monitor_MegaphoneMsg::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  size_t sVar2;
  GameWorld *pGVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d09d9 to 084d0b04 has its CatchHandler @ 084d0b1e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x76);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0xe));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0xb));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 0xc));
  sVar2 = strlen((char *)(local_10 + 0xf));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,sVar2);
  sVar2 = strlen((char *)(local_10 + 0xf));
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_1c,(char *)(local_10 + 0xf),sVar2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x2d));
  InterfacePacketBuf::put_str
            ((InterfacePacketBuf *)local_1c,(char *)(local_10 + 0x2e),
             (uint)*(byte *)(local_10 + 0x2d));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  pGVar3 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsIntegratedPvPBaseChannel(pGVar3);
  if (cVar1 == '\0') {
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar3,local_1c);
  }
  else {
    cVar1 = *(char *)(local_10 + 10);
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::send_server_group(pGVar3,local_1c,cVar1);
  }
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}

```

