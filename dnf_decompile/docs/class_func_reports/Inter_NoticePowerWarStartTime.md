# Inter_NoticePowerWarStartTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d4bd2 Inter_NoticePowerWarStartTime::dispatch_sig  [0x084d4bd2-0x84d4d45] ===
 84d4bd2:	55                   	push   %ebp
 84d4bd3:	89 e5                	mov    %esp,%ebp
 84d4bd5:	56                   	push   %esi
 84d4bd6:	53                   	push   %ebx
 84d4bd7:	83 ec 30             	sub    $0x30,%esp
 84d4bda:	8b 45 10             	mov    0x10(%ebp),%eax
 84d4bdd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d4be0:	e8 9c 75 bf ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84d4be5:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 84d4beb:	83 f8 01             	cmp    $0x1,%eax
 84d4bee:	74 10                	je     84d4c00 <_ZN29Inter_NoticePowerWarStartTime12dispatch_sigEP5CUserPci+0x2e>
 84d4bf0:	e8 8c 75 bf ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84d4bf5:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 84d4bfb:	83 f8 02             	cmp    $0x2,%eax
 84d4bfe:	75 07                	jne    84d4c07 <_ZN29Inter_NoticePowerWarStartTime12dispatch_sigEP5CUserPci+0x35>
 84d4c00:	b8 01 00 00 00       	mov    $0x1,%eax
 84d4c05:	eb 05                	jmp    84d4c0c <_ZN29Inter_NoticePowerWarStartTime12dispatch_sigEP5CUserPci+0x3a>
 84d4c07:	b8 00 00 00 00       	mov    $0x0,%eax
 84d4c0c:	84 c0                	test   %al,%al
 84d4c0e:	74 0a                	je     84d4c1a <_ZN29Inter_NoticePowerWarStartTime12dispatch_sigEP5CUserPci+0x48>
 84d4c10:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d4c15:	e9 23 01 00 00       	jmp    84d4d3d <_ZN29Inter_NoticePowerWarStartTime12dispatch_sigEP5CUserPci+0x16b>
 84d4c1a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4c1d:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 84d4c21:	0f b6 f0             	movzbl %al,%esi
 84d4c24:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4c27:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 84d4c2b:	0f b6 d8             	movzbl %al,%ebx
 84d4c2e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4c31:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84d4c35:	0f b6 c8             	movzbl %al,%ecx
 84d4c38:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4c3b:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84d4c3f:	0f b6 d0             	movzbl %al,%edx
 84d4c42:	a1 50 be 40 09       	mov    0x940be50,%eax
 84d4c47:	89 74 24 10          	mov    %esi,0x10(%esp)
 84d4c4b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d4c4f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84d4c53:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d4c57:	89 04 24             	mov    %eax,(%esp)
 84d4c5a:	e8 cf ad fa ff       	call   847fa2e <_ZN13CPowerManager20SetPowerWarStartTimeEhhhh>
 84d4c5f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4c62:	89 04 24             	mov    %eax,(%esp)
 84d4c65:	e8 e2 90 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d4c6a:	c7 44 24 08 a1 00 00 	movl   $0xa1,0x8(%esp)
 84d4c71:	00 
 84d4c72:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d4c79:	00 
 84d4c7a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4c7d:	89 04 24             	mov    %eax,(%esp)
 84d4c80:	e8 77 6c bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d4c85:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4c88:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84d4c8c:	0f b6 c0             	movzbl %al,%eax
 84d4c8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4c93:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4c96:	89 04 24             	mov    %eax,(%esp)
 84d4c99:	e8 82 6c bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d4c9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4ca1:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84d4ca5:	0f b6 c0             	movzbl %al,%eax
 84d4ca8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4cac:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4caf:	89 04 24             	mov    %eax,(%esp)
 84d4cb2:	e8 69 6c bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d4cb7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4cba:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 84d4cbe:	0f b6 c0             	movzbl %al,%eax
 84d4cc1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4cc5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4cc8:	89 04 24             	mov    %eax,(%esp)
 84d4ccb:	e8 50 6c bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d4cd0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4cd3:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 84d4cd7:	0f b6 c0             	movzbl %al,%eax
 84d4cda:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4cde:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4ce1:	89 04 24             	mov    %eax,(%esp)
 84d4ce4:	e8 37 6c bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d4ce9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d4cf0:	00 
 84d4cf1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4cf4:	89 04 24             	mov    %eax,(%esp)
 84d4cf7:	e8 5c 6c bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d4cfc:	e8 a6 56 c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d4d01:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84d4d04:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d4d08:	89 04 24             	mov    %eax,(%esp)
 84d4d0b:	e8 04 3f 1f 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84d4d10:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d4d15:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4d18:	89 04 24             	mov    %eax,(%esp)
 84d4d1b:	e8 60 91 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d4d20:	eb 1b                	jmp    84d4d3d <_ZN29Inter_NoticePowerWarStartTime12dispatch_sigEP5CUserPci+0x16b>
 84d4d22:	89 d3                	mov    %edx,%ebx
 84d4d24:	89 c6                	mov    %eax,%esi
 84d4d26:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4d29:	89 04 24             	mov    %eax,(%esp)
 84d4d2c:	e8 4f 91 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d4d31:	89 f0                	mov    %esi,%eax
 84d4d33:	89 da                	mov    %ebx,%edx
 84d4d35:	89 04 24             	mov    %eax,(%esp)
 84d4d38:	e8 13 ea 60 00       	call   8ae3750 <_Unwind_Resume>
 84d4d3d:	89 d8                	mov    %ebx,%eax
 84d4d3f:	83 c4 30             	add    $0x30,%esp
 84d4d42:	5b                   	pop    %ebx
 84d4d43:	5e                   	pop    %esi
 84d4d44:	5d                   	pop    %ebp
 84d4d45:	c3                   	ret

```

```c
// Inter_NoticePowerWarStartTime::dispatch_sig @ 0x84d4bd2

/* Inter_NoticePowerWarStartTime::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticePowerWarStartTime::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar2 = G_CEnvironment();
  if ((*(int *)(iVar2 + 0x1a8) == 1) || (iVar2 = G_CEnvironment(), *(int *)(iVar2 + 0x1a8) == 2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    CPowerManager::SetPowerWarStartTime
              (GlobalData::s_power_manager,*(uchar *)(local_10 + 10),*(uchar *)(local_10 + 0xb),
               *(uchar *)(local_10 + 0xc),*(uchar *)(local_10 + 0xd));
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d4c80 to 084d4d0f has its CatchHandler @ 084d4d22 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xa1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 10));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0xb));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0xc));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0xd));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```

