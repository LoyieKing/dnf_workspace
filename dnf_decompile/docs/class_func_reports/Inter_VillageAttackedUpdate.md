# Inter_VillageAttackedUpdate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dfbe6 Inter_VillageAttackedUpdate::dispatch_sig  [0x084dfbe6-0x84dfd15] ===
 84dfbe6:	55                   	push   %ebp
 84dfbe7:	89 e5                	mov    %esp,%ebp
 84dfbe9:	56                   	push   %esi
 84dfbea:	53                   	push   %ebx
 84dfbeb:	83 ec 20             	sub    $0x20,%esp
 84dfbee:	e8 b4 a7 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84dfbf3:	89 04 24             	mov    %eax,(%esp)
 84dfbf6:	e8 23 17 c1 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84dfbfb:	84 c0                	test   %al,%al
 84dfbfd:	74 0a                	je     84dfc09 <_ZN27Inter_VillageAttackedUpdate12dispatch_sigEP5CUserPci+0x23>
 84dfbff:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dfc04:	e9 04 01 00 00       	jmp    84dfd0d <_ZN27Inter_VillageAttackedUpdate12dispatch_sigEP5CUserPci+0x127>
 84dfc09:	e8 73 c5 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84dfc0e:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 84dfc14:	83 f8 01             	cmp    $0x1,%eax
 84dfc17:	74 10                	je     84dfc29 <_ZN27Inter_VillageAttackedUpdate12dispatch_sigEP5CUserPci+0x43>
 84dfc19:	e8 63 c5 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84dfc1e:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 84dfc24:	83 f8 02             	cmp    $0x2,%eax
 84dfc27:	75 07                	jne    84dfc30 <_ZN27Inter_VillageAttackedUpdate12dispatch_sigEP5CUserPci+0x4a>
 84dfc29:	b8 01 00 00 00       	mov    $0x1,%eax
 84dfc2e:	eb 05                	jmp    84dfc35 <_ZN27Inter_VillageAttackedUpdate12dispatch_sigEP5CUserPci+0x4f>
 84dfc30:	b8 00 00 00 00       	mov    $0x0,%eax
 84dfc35:	84 c0                	test   %al,%al
 84dfc37:	74 0a                	je     84dfc43 <_ZN27Inter_VillageAttackedUpdate12dispatch_sigEP5CUserPci+0x5d>
 84dfc39:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dfc3e:	e9 ca 00 00 00       	jmp    84dfd0d <_ZN27Inter_VillageAttackedUpdate12dispatch_sigEP5CUserPci+0x127>
 84dfc43:	8b 45 10             	mov    0x10(%ebp),%eax
 84dfc46:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84dfc49:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfc4c:	89 04 24             	mov    %eax,(%esp)
 84dfc4f:	e8 f8 e0 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dfc54:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfc57:	89 04 24             	mov    %eax,(%esp)
 84dfc5a:	e8 87 bc be ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84dfc5f:	c7 44 24 08 f7 00 00 	movl   $0xf7,0x8(%esp)
 84dfc66:	00 
 84dfc67:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dfc6e:	00 
 84dfc6f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfc72:	89 04 24             	mov    %eax,(%esp)
 84dfc75:	e8 82 bc be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dfc7a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dfc7d:	8b 40 0a             	mov    0xa(%eax),%eax
 84dfc80:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dfc84:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfc87:	89 04 24             	mov    %eax,(%esp)
 84dfc8a:	e8 ad bc be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dfc8f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dfc92:	8b 40 0e             	mov    0xe(%eax),%eax
 84dfc95:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dfc99:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfc9c:	89 04 24             	mov    %eax,(%esp)
 84dfc9f:	e8 98 bc be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dfca4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dfca7:	8b 40 12             	mov    0x12(%eax),%eax
 84dfcaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dfcae:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfcb1:	89 04 24             	mov    %eax,(%esp)
 84dfcb4:	e8 83 bc be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dfcb9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dfcc0:	00 
 84dfcc1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfcc4:	89 04 24             	mov    %eax,(%esp)
 84dfcc7:	e8 8c bc be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dfccc:	e8 d6 a6 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84dfcd1:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84dfcd4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dfcd8:	89 04 24             	mov    %eax,(%esp)
 84dfcdb:	e8 34 8f 1e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84dfce0:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dfce5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfce8:	89 04 24             	mov    %eax,(%esp)
 84dfceb:	e8 90 e1 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dfcf0:	eb 1b                	jmp    84dfd0d <_ZN27Inter_VillageAttackedUpdate12dispatch_sigEP5CUserPci+0x127>
 84dfcf2:	89 d3                	mov    %edx,%ebx
 84dfcf4:	89 c6                	mov    %eax,%esi
 84dfcf6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfcf9:	89 04 24             	mov    %eax,(%esp)
 84dfcfc:	e8 7f e1 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dfd01:	89 f0                	mov    %esi,%eax
 84dfd03:	89 da                	mov    %ebx,%edx
 84dfd05:	89 04 24             	mov    %eax,(%esp)
 84dfd08:	e8 43 3a 60 00       	call   8ae3750 <_Unwind_Resume>
 84dfd0d:	89 d8                	mov    %ebx,%eax
 84dfd0f:	83 c4 20             	add    $0x20,%esp
 84dfd12:	5b                   	pop    %ebx
 84dfd13:	5e                   	pop    %esi
 84dfd14:	5d                   	pop    %ebp
 84dfd15:	c3                   	ret

```

```c
// Inter_VillageAttackedUpdate::dispatch_sig @ 0x84dfbe6

/* Inter_VillageAttackedUpdate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_VillageAttackedUpdate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  GameWorld *pGVar3;
  int iVar4;
  PacketGuard local_1c [12];
  int local_10;
  
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
      local_10 = param_3;
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084dfc5a to 084dfcdf has its CatchHandler @ 084dfcf2 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xf7);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 10));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xe));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      pGVar3 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar3,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}

```

