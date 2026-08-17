# Inter_VillageAttackedCountdown

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dfae0 Inter_VillageAttackedCountdown::dispatch_sig  [0x084dfae0-0x84dfbe5] ===
 84dfae0:	55                   	push   %ebp
 84dfae1:	89 e5                	mov    %esp,%ebp
 84dfae3:	56                   	push   %esi
 84dfae4:	53                   	push   %ebx
 84dfae5:	83 ec 20             	sub    $0x20,%esp
 84dfae8:	e8 ba a8 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84dfaed:	89 04 24             	mov    %eax,(%esp)
 84dfaf0:	e8 29 18 c1 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84dfaf5:	84 c0                	test   %al,%al
 84dfaf7:	74 0a                	je     84dfb03 <_ZN30Inter_VillageAttackedCountdown12dispatch_sigEP5CUserPci+0x23>
 84dfaf9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dfafe:	e9 da 00 00 00       	jmp    84dfbdd <_ZN30Inter_VillageAttackedCountdown12dispatch_sigEP5CUserPci+0xfd>
 84dfb03:	e8 79 c6 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84dfb08:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 84dfb0e:	83 f8 01             	cmp    $0x1,%eax
 84dfb11:	74 10                	je     84dfb23 <_ZN30Inter_VillageAttackedCountdown12dispatch_sigEP5CUserPci+0x43>
 84dfb13:	e8 69 c6 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84dfb18:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 84dfb1e:	83 f8 02             	cmp    $0x2,%eax
 84dfb21:	75 07                	jne    84dfb2a <_ZN30Inter_VillageAttackedCountdown12dispatch_sigEP5CUserPci+0x4a>
 84dfb23:	b8 01 00 00 00       	mov    $0x1,%eax
 84dfb28:	eb 05                	jmp    84dfb2f <_ZN30Inter_VillageAttackedCountdown12dispatch_sigEP5CUserPci+0x4f>
 84dfb2a:	b8 00 00 00 00       	mov    $0x0,%eax
 84dfb2f:	84 c0                	test   %al,%al
 84dfb31:	74 0a                	je     84dfb3d <_ZN30Inter_VillageAttackedCountdown12dispatch_sigEP5CUserPci+0x5d>
 84dfb33:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dfb38:	e9 a0 00 00 00       	jmp    84dfbdd <_ZN30Inter_VillageAttackedCountdown12dispatch_sigEP5CUserPci+0xfd>
 84dfb3d:	8b 45 10             	mov    0x10(%ebp),%eax
 84dfb40:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84dfb43:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfb46:	89 04 24             	mov    %eax,(%esp)
 84dfb49:	e8 fe e1 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dfb4e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfb51:	89 04 24             	mov    %eax,(%esp)
 84dfb54:	e8 8d bd be ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84dfb59:	c7 44 24 08 f1 00 00 	movl   $0xf1,0x8(%esp)
 84dfb60:	00 
 84dfb61:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dfb68:	00 
 84dfb69:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfb6c:	89 04 24             	mov    %eax,(%esp)
 84dfb6f:	e8 88 bd be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dfb74:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dfb77:	8b 40 0a             	mov    0xa(%eax),%eax
 84dfb7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dfb7e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfb81:	89 04 24             	mov    %eax,(%esp)
 84dfb84:	e8 b3 bd be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dfb89:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dfb90:	00 
 84dfb91:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfb94:	89 04 24             	mov    %eax,(%esp)
 84dfb97:	e8 bc bd be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dfb9c:	e8 06 a8 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84dfba1:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84dfba4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dfba8:	89 04 24             	mov    %eax,(%esp)
 84dfbab:	e8 64 90 1e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84dfbb0:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dfbb5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfbb8:	89 04 24             	mov    %eax,(%esp)
 84dfbbb:	e8 c0 e2 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dfbc0:	eb 1b                	jmp    84dfbdd <_ZN30Inter_VillageAttackedCountdown12dispatch_sigEP5CUserPci+0xfd>
 84dfbc2:	89 d3                	mov    %edx,%ebx
 84dfbc4:	89 c6                	mov    %eax,%esi
 84dfbc6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfbc9:	89 04 24             	mov    %eax,(%esp)
 84dfbcc:	e8 af e2 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dfbd1:	89 f0                	mov    %esi,%eax
 84dfbd3:	89 da                	mov    %ebx,%edx
 84dfbd5:	89 04 24             	mov    %eax,(%esp)
 84dfbd8:	e8 73 3b 60 00       	call   8ae3750 <_Unwind_Resume>
 84dfbdd:	89 d8                	mov    %ebx,%eax
 84dfbdf:	83 c4 20             	add    $0x20,%esp
 84dfbe2:	5b                   	pop    %ebx
 84dfbe3:	5e                   	pop    %esi
 84dfbe4:	5d                   	pop    %ebp
 84dfbe5:	c3                   	ret

```

```c
// Inter_VillageAttackedCountdown::dispatch_sig @ 0x84dfae0

/* Inter_VillageAttackedCountdown::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_VillageAttackedCountdown::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084dfb54 to 084dfbaf has its CatchHandler @ 084dfbc2 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xf1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 10));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      pGVar3 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar3,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}

```

