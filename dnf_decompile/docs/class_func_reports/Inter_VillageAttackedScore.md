# Inter_VillageAttackedScore

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dfd16 Inter_VillageAttackedScore::dispatch_sig  [0x084dfd16-0x84dfea5] ===
 84dfd16:	55                   	push   %ebp
 84dfd17:	89 e5                	mov    %esp,%ebp
 84dfd19:	56                   	push   %esi
 84dfd1a:	53                   	push   %ebx
 84dfd1b:	83 ec 20             	sub    $0x20,%esp
 84dfd1e:	e8 84 a6 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84dfd23:	89 04 24             	mov    %eax,(%esp)
 84dfd26:	e8 f3 15 c1 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84dfd2b:	84 c0                	test   %al,%al
 84dfd2d:	74 0a                	je     84dfd39 <_ZN26Inter_VillageAttackedScore12dispatch_sigEP5CUserPci+0x23>
 84dfd2f:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dfd34:	e9 63 01 00 00       	jmp    84dfe9c <_ZN26Inter_VillageAttackedScore12dispatch_sigEP5CUserPci+0x186>
 84dfd39:	e8 43 c4 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84dfd3e:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 84dfd44:	83 f8 01             	cmp    $0x1,%eax
 84dfd47:	74 10                	je     84dfd59 <_ZN26Inter_VillageAttackedScore12dispatch_sigEP5CUserPci+0x43>
 84dfd49:	e8 33 c4 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84dfd4e:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 84dfd54:	83 f8 02             	cmp    $0x2,%eax
 84dfd57:	75 07                	jne    84dfd60 <_ZN26Inter_VillageAttackedScore12dispatch_sigEP5CUserPci+0x4a>
 84dfd59:	b8 01 00 00 00       	mov    $0x1,%eax
 84dfd5e:	eb 05                	jmp    84dfd65 <_ZN26Inter_VillageAttackedScore12dispatch_sigEP5CUserPci+0x4f>
 84dfd60:	b8 00 00 00 00       	mov    $0x0,%eax
 84dfd65:	84 c0                	test   %al,%al
 84dfd67:	74 0a                	je     84dfd73 <_ZN26Inter_VillageAttackedScore12dispatch_sigEP5CUserPci+0x5d>
 84dfd69:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dfd6e:	e9 29 01 00 00       	jmp    84dfe9c <_ZN26Inter_VillageAttackedScore12dispatch_sigEP5CUserPci+0x186>
 84dfd73:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dfd76:	89 04 24             	mov    %eax,(%esp)
 84dfd79:	e8 b4 06 c4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84dfd7e:	85 c0                	test   %eax,%eax
 84dfd80:	0f 94 c0             	sete   %al
 84dfd83:	84 c0                	test   %al,%al
 84dfd85:	74 0a                	je     84dfd91 <_ZN26Inter_VillageAttackedScore12dispatch_sigEP5CUserPci+0x7b>
 84dfd87:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dfd8c:	e9 0b 01 00 00       	jmp    84dfe9c <_ZN26Inter_VillageAttackedScore12dispatch_sigEP5CUserPci+0x186>
 84dfd91:	8b 45 10             	mov    0x10(%ebp),%eax
 84dfd94:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84dfd97:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84dfd9e:	ff 
 84dfd9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dfda2:	89 04 24             	mov    %eax,(%esp)
 84dfda5:	e8 f6 e1 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84dfdaa:	89 c2                	mov    %eax,%edx
 84dfdac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dfdaf:	8b 40 0e             	mov    0xe(%eax),%eax
 84dfdb2:	39 c2                	cmp    %eax,%edx
 84dfdb4:	0f 95 c0             	setne  %al
 84dfdb7:	84 c0                	test   %al,%al
 84dfdb9:	74 0a                	je     84dfdc5 <_ZN26Inter_VillageAttackedScore12dispatch_sigEP5CUserPci+0xaf>
 84dfdbb:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dfdc0:	e9 d7 00 00 00       	jmp    84dfe9c <_ZN26Inter_VillageAttackedScore12dispatch_sigEP5CUserPci+0x186>
 84dfdc5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfdc8:	89 04 24             	mov    %eax,(%esp)
 84dfdcb:	e8 7c df 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dfdd0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfdd3:	89 04 24             	mov    %eax,(%esp)
 84dfdd6:	e8 0b bb be ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84dfddb:	c7 44 24 08 f8 00 00 	movl   $0xf8,0x8(%esp)
 84dfde2:	00 
 84dfde3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dfdea:	00 
 84dfdeb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfdee:	89 04 24             	mov    %eax,(%esp)
 84dfdf1:	e8 06 bb be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dfdf6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dfdf9:	8b 40 12             	mov    0x12(%eax),%eax
 84dfdfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dfe00:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfe03:	89 04 24             	mov    %eax,(%esp)
 84dfe06:	e8 31 bb be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dfe0b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dfe0e:	8b 40 16             	mov    0x16(%eax),%eax
 84dfe11:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dfe15:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfe18:	89 04 24             	mov    %eax,(%esp)
 84dfe1b:	e8 1c bb be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dfe20:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dfe23:	8b 40 1a             	mov    0x1a(%eax),%eax
 84dfe26:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dfe2a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfe2d:	89 04 24             	mov    %eax,(%esp)
 84dfe30:	e8 07 bb be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dfe35:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dfe38:	8b 40 1e             	mov    0x1e(%eax),%eax
 84dfe3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dfe3f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfe42:	89 04 24             	mov    %eax,(%esp)
 84dfe45:	e8 f2 ba be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dfe4a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dfe51:	00 
 84dfe52:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfe55:	89 04 24             	mov    %eax,(%esp)
 84dfe58:	e8 fb ba be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dfe5d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfe60:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dfe64:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dfe67:	89 04 24             	mov    %eax,(%esp)
 84dfe6a:	e8 4b 87 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84dfe6f:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dfe74:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfe77:	89 04 24             	mov    %eax,(%esp)
 84dfe7a:	e8 01 e0 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dfe7f:	eb 1b                	jmp    84dfe9c <_ZN26Inter_VillageAttackedScore12dispatch_sigEP5CUserPci+0x186>
 84dfe81:	89 d3                	mov    %edx,%ebx
 84dfe83:	89 c6                	mov    %eax,%esi
 84dfe85:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dfe88:	89 04 24             	mov    %eax,(%esp)
 84dfe8b:	e8 f0 df 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dfe90:	89 f0                	mov    %esi,%eax
 84dfe92:	89 da                	mov    %ebx,%edx
 84dfe94:	89 04 24             	mov    %eax,(%esp)
 84dfe97:	e8 b4 38 60 00       	call   8ae3750 <_Unwind_Resume>
 84dfe9c:	89 d8                	mov    %ebx,%eax
 84dfe9e:	83 c4 20             	add    $0x20,%esp
 84dfea1:	5b                   	pop    %ebx
 84dfea2:	5e                   	pop    %esi
 84dfea3:	5d                   	pop    %ebp
 84dfea4:	c3                   	ret
 84dfea5:	90                   	nop

```

```c
// Inter_VillageAttackedScore::dispatch_sig @ 0x84dfd16

/* Inter_VillageAttackedScore::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_VillageAttackedScore::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  GameWorld *this;
  int iVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  this = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this);
  if (cVar2 == '\0') {
    iVar3 = G_CEnvironment();
    if ((*(int *)(iVar3 + 0x1a8) == 1) || (iVar3 = G_CEnvironment(), *(int *)(iVar3 + 0x1a8) == 2))
    {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((!bVar1) && (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 != 0)
       ) {
      local_10 = param_3;
      iVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar3 == *(int *)(local_10 + 0xe)) {
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084dfdd6 to 084dfe6e has its CatchHandler @ 084dfe81 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xf8);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x16));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x1a));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x1e));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send((CUser *)param_2,local_1c);
        PacketGuard::~PacketGuard(local_1c);
      }
    }
  }
  return 0;
}

```

