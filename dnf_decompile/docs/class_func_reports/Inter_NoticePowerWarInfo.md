# Inter_NoticePowerWarInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d4e18 Inter_NoticePowerWarInfo::dispatch_sig  [0x084d4e18-0x84d4f45] ===
 84d4e18:	55                   	push   %ebp
 84d4e19:	89 e5                	mov    %esp,%ebp
 84d4e1b:	56                   	push   %esi
 84d4e1c:	53                   	push   %ebx
 84d4e1d:	83 ec 20             	sub    $0x20,%esp
 84d4e20:	8b 45 10             	mov    0x10(%ebp),%eax
 84d4e23:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d4e26:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4e29:	8b 58 0e             	mov    0xe(%eax),%ebx
 84d4e2c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4e2f:	8b 48 0a             	mov    0xa(%eax),%ecx
 84d4e32:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4e35:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84d4e39:	0f be d0             	movsbl %al,%edx
 84d4e3c:	a1 50 be 40 09       	mov    0x940be50,%eax
 84d4e41:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d4e45:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84d4e49:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d4e4d:	89 04 24             	mov    %eax,(%esp)
 84d4e50:	e8 21 9d fa ff       	call   847eb76 <_ZN13CPowerManager12SetPowerInfoEcii>
 84d4e55:	e8 4d 55 c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d4e5a:	89 04 24             	mov    %eax,(%esp)
 84d4e5d:	e8 bc c4 c1 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84d4e62:	84 c0                	test   %al,%al
 84d4e64:	74 0a                	je     84d4e70 <_ZN24Inter_NoticePowerWarInfo12dispatch_sigEP5CUserPci+0x58>
 84d4e66:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d4e6b:	e9 cd 00 00 00       	jmp    84d4f3d <_ZN24Inter_NoticePowerWarInfo12dispatch_sigEP5CUserPci+0x125>
 84d4e70:	e8 0c 73 bf ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84d4e75:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 84d4e7b:	83 f8 01             	cmp    $0x1,%eax
 84d4e7e:	74 10                	je     84d4e90 <_ZN24Inter_NoticePowerWarInfo12dispatch_sigEP5CUserPci+0x78>
 84d4e80:	e8 fc 72 bf ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84d4e85:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 84d4e8b:	83 f8 02             	cmp    $0x2,%eax
 84d4e8e:	75 07                	jne    84d4e97 <_ZN24Inter_NoticePowerWarInfo12dispatch_sigEP5CUserPci+0x7f>
 84d4e90:	b8 01 00 00 00       	mov    $0x1,%eax
 84d4e95:	eb 05                	jmp    84d4e9c <_ZN24Inter_NoticePowerWarInfo12dispatch_sigEP5CUserPci+0x84>
 84d4e97:	b8 00 00 00 00       	mov    $0x0,%eax
 84d4e9c:	84 c0                	test   %al,%al
 84d4e9e:	74 0a                	je     84d4eaa <_ZN24Inter_NoticePowerWarInfo12dispatch_sigEP5CUserPci+0x92>
 84d4ea0:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d4ea5:	e9 93 00 00 00       	jmp    84d4f3d <_ZN24Inter_NoticePowerWarInfo12dispatch_sigEP5CUserPci+0x125>
 84d4eaa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4ead:	89 04 24             	mov    %eax,(%esp)
 84d4eb0:	e8 97 8e 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d4eb5:	c7 44 24 08 bc 00 00 	movl   $0xbc,0x8(%esp)
 84d4ebc:	00 
 84d4ebd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d4ec4:	00 
 84d4ec5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4ec8:	89 04 24             	mov    %eax,(%esp)
 84d4ecb:	e8 2c 6a bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d4ed0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4ed3:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84d4ed7:	0f be c0             	movsbl %al,%eax
 84d4eda:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4ede:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4ee1:	89 04 24             	mov    %eax,(%esp)
 84d4ee4:	e8 37 6a bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d4ee9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d4ef0:	00 
 84d4ef1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4ef4:	89 04 24             	mov    %eax,(%esp)
 84d4ef7:	e8 5c 6a bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d4efc:	e8 a6 54 c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d4f01:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84d4f04:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d4f08:	89 04 24             	mov    %eax,(%esp)
 84d4f0b:	e8 04 3d 1f 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84d4f10:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d4f15:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4f18:	89 04 24             	mov    %eax,(%esp)
 84d4f1b:	e8 60 8f 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d4f20:	eb 1b                	jmp    84d4f3d <_ZN24Inter_NoticePowerWarInfo12dispatch_sigEP5CUserPci+0x125>
 84d4f22:	89 d3                	mov    %edx,%ebx
 84d4f24:	89 c6                	mov    %eax,%esi
 84d4f26:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4f29:	89 04 24             	mov    %eax,(%esp)
 84d4f2c:	e8 4f 8f 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d4f31:	89 f0                	mov    %esi,%eax
 84d4f33:	89 da                	mov    %ebx,%edx
 84d4f35:	89 04 24             	mov    %eax,(%esp)
 84d4f38:	e8 13 e8 60 00       	call   8ae3750 <_Unwind_Resume>
 84d4f3d:	89 d8                	mov    %ebx,%eax
 84d4f3f:	83 c4 20             	add    $0x20,%esp
 84d4f42:	5b                   	pop    %ebx
 84d4f43:	5e                   	pop    %esi
 84d4f44:	5d                   	pop    %ebp
 84d4f45:	c3                   	ret

```

```c
// Inter_NoticePowerWarInfo::dispatch_sig @ 0x84d4e18

/* Inter_NoticePowerWarInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticePowerWarInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  GameWorld *pGVar3;
  int iVar4;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  CPowerManager::SetPowerInfo
            (GlobalData::s_power_manager,*(char *)(param_3 + 0x12),*(int *)(param_3 + 10),
             *(int *)(param_3 + 0xe));
  pGVar3 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar3);
  if (cVar2 == '\0') {
    iVar4 = G_CEnvironment();
    if ((*(int *)(iVar4 + 0x1a8) == 1) || (iVar4 = G_CEnvironment(), *(int *)(iVar4 + 0x1a8) == 2))
    {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d4ecb to 084d4f0f has its CatchHandler @ 084d4f22 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xbc);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)*(char *)(local_10 + 0x12));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      pGVar3 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar3,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}

```

