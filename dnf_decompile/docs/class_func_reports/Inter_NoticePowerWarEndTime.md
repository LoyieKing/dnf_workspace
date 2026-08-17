# Inter_NoticePowerWarEndTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d4d46 Inter_NoticePowerWarEndTime::dispatch_sig  [0x084d4d46-0x84d4e17] ===
 84d4d46:	55                   	push   %ebp
 84d4d47:	89 e5                	mov    %esp,%ebp
 84d4d49:	56                   	push   %esi
 84d4d4a:	53                   	push   %ebx
 84d4d4b:	83 ec 20             	sub    $0x20,%esp
 84d4d4e:	8b 45 10             	mov    0x10(%ebp),%eax
 84d4d51:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d4d54:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4d57:	89 04 24             	mov    %eax,(%esp)
 84d4d5a:	e8 ed 8f 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d4d5f:	c7 44 24 08 a2 00 00 	movl   $0xa2,0x8(%esp)
 84d4d66:	00 
 84d4d67:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d4d6e:	00 
 84d4d6f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4d72:	89 04 24             	mov    %eax,(%esp)
 84d4d75:	e8 82 6b bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d4d7a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4d7d:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84d4d81:	0f b6 c0             	movzbl %al,%eax
 84d4d84:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4d88:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4d8b:	89 04 24             	mov    %eax,(%esp)
 84d4d8e:	e8 8d 6b bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d4d93:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4d96:	8b 40 0b             	mov    0xb(%eax),%eax
 84d4d99:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4d9d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4da0:	89 04 24             	mov    %eax,(%esp)
 84d4da3:	e8 94 6b bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d4da8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4dab:	8b 40 0f             	mov    0xf(%eax),%eax
 84d4dae:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4db2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4db5:	89 04 24             	mov    %eax,(%esp)
 84d4db8:	e8 7f 6b bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d4dbd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d4dc4:	00 
 84d4dc5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4dc8:	89 04 24             	mov    %eax,(%esp)
 84d4dcb:	e8 88 6b bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d4dd0:	e8 d2 55 c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d4dd5:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84d4dd8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d4ddc:	89 04 24             	mov    %eax,(%esp)
 84d4ddf:	e8 30 3e 1f 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84d4de4:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d4de9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4dec:	89 04 24             	mov    %eax,(%esp)
 84d4def:	e8 8c 90 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d4df4:	89 d8                	mov    %ebx,%eax
 84d4df6:	83 c4 20             	add    $0x20,%esp
 84d4df9:	5b                   	pop    %ebx
 84d4dfa:	5e                   	pop    %esi
 84d4dfb:	5d                   	pop    %ebp
 84d4dfc:	c3                   	ret
 84d4dfd:	89 d3                	mov    %edx,%ebx
 84d4dff:	89 c6                	mov    %eax,%esi
 84d4e01:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4e04:	89 04 24             	mov    %eax,(%esp)
 84d4e07:	e8 74 90 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d4e0c:	89 f0                	mov    %esi,%eax
 84d4e0e:	89 da                	mov    %ebx,%edx
 84d4e10:	89 04 24             	mov    %eax,(%esp)
 84d4e13:	e8 38 e9 60 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_NoticePowerWarEndTime::dispatch_sig @ 0x84d4d46

/* Inter_NoticePowerWarEndTime::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticePowerWarEndTime::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d4d75 to 084d4de3 has its CatchHandler @ 084d4dfd */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xa2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 10));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xb));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xf));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}

```

