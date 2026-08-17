# Inter_BroadcastMsg

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e4c2a Inter_BroadcastMsg::dispatch_sig  [0x084e4c2a-0x84e4d4d] ===
 84e4c2a:	55                   	push   %ebp
 84e4c2b:	89 e5                	mov    %esp,%ebp
 84e4c2d:	56                   	push   %esi
 84e4c2e:	53                   	push   %ebx
 84e4c2f:	83 ec 30             	sub    $0x30,%esp
 84e4c32:	8b 45 10             	mov    0x10(%ebp),%eax
 84e4c35:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e4c38:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4c3b:	8b 40 0a             	mov    0xa(%eax),%eax
 84e4c3e:	85 c0                	test   %eax,%eax
 84e4c40:	0f 85 fc 00 00 00    	jne    84e4d42 <_ZN18Inter_BroadcastMsg12dispatch_sigEP5CUserPci+0x118>
 84e4c46:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4c49:	89 04 24             	mov    %eax,(%esp)
 84e4c4c:	e8 fb 90 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e4c51:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 84e4c58:	00 
 84e4c59:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e4c60:	00 
 84e4c61:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4c64:	89 04 24             	mov    %eax,(%esp)
 84e4c67:	e8 90 6c be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e4c6c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e4c73:	00 
 84e4c74:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4c77:	89 04 24             	mov    %eax,(%esp)
 84e4c7a:	e8 a1 6c be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e4c7f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e4c86:	00 
 84e4c87:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4c8a:	89 04 24             	mov    %eax,(%esp)
 84e4c8d:	e8 12 52 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84e4c92:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e4c99:	00 
 84e4c9a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4c9d:	89 04 24             	mov    %eax,(%esp)
 84e4ca0:	e8 7b 6c be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e4ca5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4ca8:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 84e4cac:	0f b6 c0             	movzbl %al,%eax
 84e4caf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4cb3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4cb6:	89 04 24             	mov    %eax,(%esp)
 84e4cb9:	e8 7e 6c be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e4cbe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4cc1:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 84e4cc5:	0f b6 c0             	movzbl %al,%eax
 84e4cc8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e4ccb:	83 c2 0f             	add    $0xf,%edx
 84e4cce:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e4cd2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e4cd6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4cd9:	89 04 24             	mov    %eax,(%esp)
 84e4cdc:	e8 03 27 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e4ce1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e4ce8:	00 
 84e4ce9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4cec:	89 04 24             	mov    %eax,(%esp)
 84e4cef:	e8 64 6c be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e4cf4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e4cf7:	89 04 24             	mov    %eax,(%esp)
 84e4cfa:	e8 d1 ba 00 00       	call   84f07d0 <_ZN9CUserTeenC1Ev>
 84e4cff:	e8 a3 56 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e4d04:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84e4d07:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e4d0b:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84e4d0e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e4d12:	89 04 24             	mov    %eax,(%esp)
 84e4d15:	e8 1a 45 1e 00       	call   86c9234 <_ZN9GameWorld10send_groupER11PacketGuardP7CBelong>
 84e4d1a:	eb 1b                	jmp    84e4d37 <_ZN18Inter_BroadcastMsg12dispatch_sigEP5CUserPci+0x10d>
 84e4d1c:	89 d3                	mov    %edx,%ebx
 84e4d1e:	89 c6                	mov    %eax,%esi
 84e4d20:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4d23:	89 04 24             	mov    %eax,(%esp)
 84e4d26:	e8 55 91 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e4d2b:	89 f0                	mov    %esi,%eax
 84e4d2d:	89 da                	mov    %ebx,%edx
 84e4d2f:	89 04 24             	mov    %eax,(%esp)
 84e4d32:	e8 19 ea 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e4d37:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4d3a:	89 04 24             	mov    %eax,(%esp)
 84e4d3d:	e8 3e 91 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e4d42:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4d47:	83 c4 30             	add    $0x30,%esp
 84e4d4a:	5b                   	pop    %ebx
 84e4d4b:	5e                   	pop    %esi
 84e4d4c:	5d                   	pop    %ebp
 84e4d4d:	c3                   	ret

```

```c
// Inter_BroadcastMsg::dispatch_sig @ 0x84e4c2a

/* Inter_BroadcastMsg::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_BroadcastMsg::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  CUserTeen local_20 [4];
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  if (*(int *)(param_3 + 10) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e4c67 to 084e4d19 has its CatchHandler @ 084e4d1c */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0xe));
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)local_1c,(char *)(local_10 + 0xf),
               (uint)*(byte *)(local_10 + 0xe));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUserTeen::CUserTeen(local_20);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_group(this,local_1c,(CBelong *)local_20);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```

