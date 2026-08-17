# game_master__CMoveCharacCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084a8d02 game_master::CMoveCharacCmd::execute  [0x084a8d02-0x84a8f69] ===
 84a8d02:	55                   	push   %ebp
 84a8d03:	89 e5                	mov    %esp,%ebp
 84a8d05:	56                   	push   %esi
 84a8d06:	53                   	push   %ebx
 84a8d07:	83 ec 50             	sub    $0x50,%esp
 84a8d0a:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8d0d:	83 c0 08             	add    $0x8,%eax
 84a8d10:	89 04 24             	mov    %eax,(%esp)
 84a8d13:	e8 d8 d7 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84a8d18:	89 c3                	mov    %eax,%ebx
 84a8d1a:	e8 88 16 c3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84a8d1f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a8d23:	89 04 24             	mov    %eax,(%esp)
 84a8d26:	e8 39 07 22 00       	call   86c9464 <_ZN9GameWorld24find_user_by_charac_nameEPKc>
 84a8d2b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84a8d2e:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84a8d32:	0f 84 2a 02 00 00    	je     84a8f62 <_ZN11game_master14CMoveCharacCmd7executeEv+0x260>
 84a8d38:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a8d3b:	89 04 24             	mov    %eax,(%esp)
 84a8d3e:	e8 ef 76 c7 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84a8d43:	85 c0                	test   %eax,%eax
 84a8d45:	0f 95 c0             	setne  %al
 84a8d48:	84 c0                	test   %al,%al
 84a8d4a:	0f 84 12 02 00 00    	je     84a8f62 <_ZN11game_master14CMoveCharacCmd7executeEv+0x260>
 84a8d50:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a8d53:	89 04 24             	mov    %eax,(%esp)
 84a8d56:	e8 09 c8 19 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 84a8d5b:	0f be c0             	movsbl %al,%eax
 84a8d5e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84a8d61:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a8d68:	00 
 84a8d69:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a8d6c:	89 04 24             	mov    %eax,(%esp)
 84a8d6f:	e8 4a 86 1d 00       	call   86813be <_ZN5CUser8get_areaEb>
 84a8d74:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84a8d77:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a8d7a:	89 04 24             	mov    %eax,(%esp)
 84a8d7d:	e8 aa bb c8 ff       	call   813492c <_ZN5CUser8get_posXEv>
 84a8d82:	0f b7 c0             	movzwl %ax,%eax
 84a8d85:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a8d88:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a8d8b:	89 04 24             	mov    %eax,(%esp)
 84a8d8e:	e8 a9 bb c8 ff       	call   813493c <_ZN5CUser8get_posYEv>
 84a8d93:	0f b7 c0             	movzwl %ax,%eax
 84a8d96:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a8d99:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8d9c:	89 04 24             	mov    %eax,(%esp)
 84a8d9f:	e8 16 b2 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a8da4:	89 04 24             	mov    %eax,(%esp)
 84a8da7:	e8 b8 c7 19 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 84a8dac:	0f be c0             	movsbl %al,%eax
 84a8daf:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 84a8db2:	75 20                	jne    84a8dd4 <_ZN11game_master14CMoveCharacCmd7executeEv+0xd2>
 84a8db4:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8db7:	89 04 24             	mov    %eax,(%esp)
 84a8dba:	e8 fb b1 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a8dbf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a8dc6:	00 
 84a8dc7:	89 04 24             	mov    %eax,(%esp)
 84a8dca:	e8 ef 85 1d 00       	call   86813be <_ZN5CUser8get_areaEb>
 84a8dcf:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 84a8dd2:	74 07                	je     84a8ddb <_ZN11game_master14CMoveCharacCmd7executeEv+0xd9>
 84a8dd4:	b8 01 00 00 00       	mov    $0x1,%eax
 84a8dd9:	eb 05                	jmp    84a8de0 <_ZN11game_master14CMoveCharacCmd7executeEv+0xde>
 84a8ddb:	b8 00 00 00 00       	mov    $0x0,%eax
 84a8de0:	84 c0                	test   %al,%al
 84a8de2:	74 64                	je     84a8e48 <_ZN11game_master14CMoveCharacCmd7executeEv+0x146>
 84a8de4:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8de7:	89 04 24             	mov    %eax,(%esp)
 84a8dea:	e8 cb b1 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a8def:	89 c3                	mov    %eax,%ebx
 84a8df1:	e8 b1 15 c3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84a8df6:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 84a8dfd:	00 
 84a8dfe:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84a8e05:	00 
 84a8e06:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84a8e0d:	00 
 84a8e0e:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 84a8e15:	00 
 84a8e16:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84a8e1d:	00 
 84a8e1e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84a8e21:	89 54 24 14          	mov    %edx,0x14(%esp)
 84a8e25:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84a8e28:	89 54 24 10          	mov    %edx,0x10(%esp)
 84a8e2c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84a8e2f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84a8e33:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84a8e36:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a8e3a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a8e3e:	89 04 24             	mov    %eax,(%esp)
 84a8e41:	e8 3e cc 21 00       	call   86c5a84 <_ZN9GameWorld9move_areaEP5CUseriiiiibiii>
 84a8e46:	eb 2f                	jmp    84a8e77 <_ZN11game_master14CMoveCharacCmd7executeEv+0x175>
 84a8e48:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a8e4b:	0f b7 f0             	movzwl %ax,%esi
 84a8e4e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a8e51:	0f b7 d8             	movzwl %ax,%ebx
 84a8e54:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8e57:	89 04 24             	mov    %eax,(%esp)
 84a8e5a:	e8 5b b1 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a8e5f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84a8e66:	00 
 84a8e67:	89 74 24 08          	mov    %esi,0x8(%esp)
 84a8e6b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a8e6f:	89 04 24             	mov    %eax,(%esp)
 84a8e72:	e8 b3 7f e4 ff       	call   82f0e2a <_ZN5CUser12set_positionEttc>
 84a8e77:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a8e7a:	89 04 24             	mov    %eax,(%esp)
 84a8e7d:	e8 ca 4e 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84a8e82:	c7 44 24 08 8a 00 00 	movl   $0x8a,0x8(%esp)
 84a8e89:	00 
 84a8e8a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a8e91:	00 
 84a8e92:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a8e95:	89 04 24             	mov    %eax,(%esp)
 84a8e98:	e8 5f 2a c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84a8e9d:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8ea0:	89 04 24             	mov    %eax,(%esp)
 84a8ea3:	e8 12 b1 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a8ea8:	89 04 24             	mov    %eax,(%esp)
 84a8eab:	e8 cc 14 c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 84a8eb0:	0f b7 c0             	movzwl %ax,%eax
 84a8eb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a8eb7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a8eba:	89 04 24             	mov    %eax,(%esp)
 84a8ebd:	e8 e2 0f c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84a8ec2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a8ec5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a8ec9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a8ecc:	89 04 24             	mov    %eax,(%esp)
 84a8ecf:	e8 d0 0f c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84a8ed4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a8ed7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a8edb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a8ede:	89 04 24             	mov    %eax,(%esp)
 84a8ee1:	e8 be 0f c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84a8ee6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a8eed:	00 
 84a8eee:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a8ef1:	89 04 24             	mov    %eax,(%esp)
 84a8ef4:	e8 27 2a c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84a8ef9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a8f00:	00 
 84a8f01:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a8f04:	89 04 24             	mov    %eax,(%esp)
 84a8f07:	e8 4c 2a c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84a8f0c:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 84a8f10:	75 06                	jne    84a8f18 <_ZN11game_master14CMoveCharacCmd7executeEv+0x216>
 84a8f12:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 84a8f16:	74 22                	je     84a8f3a <_ZN11game_master14CMoveCharacCmd7executeEv+0x238>
 84a8f18:	e8 8a 14 c3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84a8f1d:	8d 55 d8             	lea    -0x28(%ebp),%edx
 84a8f20:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84a8f24:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84a8f27:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a8f2b:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84a8f2e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a8f32:	89 04 24             	mov    %eax,(%esp)
 84a8f35:	e8 2e f2 21 00       	call   86c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>
 84a8f3a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a8f3d:	89 04 24             	mov    %eax,(%esp)
 84a8f40:	e8 3b 4f 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84a8f45:	eb 1b                	jmp    84a8f62 <_ZN11game_master14CMoveCharacCmd7executeEv+0x260>
 84a8f47:	89 d3                	mov    %edx,%ebx
 84a8f49:	89 c6                	mov    %eax,%esi
 84a8f4b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84a8f4e:	89 04 24             	mov    %eax,(%esp)
 84a8f51:	e8 2a 4f 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84a8f56:	89 f0                	mov    %esi,%eax
 84a8f58:	89 da                	mov    %ebx,%edx
 84a8f5a:	89 04 24             	mov    %eax,(%esp)
 84a8f5d:	e8 ee a7 63 00       	call   8ae3750 <_Unwind_Resume>
 84a8f62:	83 c4 50             	add    $0x50,%esp
 84a8f65:	5b                   	pop    %ebx
 84a8f66:	5e                   	pop    %esi
 84a8f67:	5d                   	pop    %ebp
 84a8f68:	c3                   	ret
 84a8f69:	90                   	nop

```

```c
// game_master::CMoveCharacCmd::execute @ 0x84a8d02

/* game_master::CMoveCharacCmd::execute() */

void __thiscall game_master::CMoveCharacCmd::execute(CMoveCharacCmd *this)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  GameWorld *pGVar5;
  int iVar6;
  CUserCharacInfo *this_00;
  CUser *pCVar7;
  uint uVar8;
  PacketGuard local_2c [12];
  CUserCharacInfo *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  
  pcVar4 = (char *)std::string::c_str((string *)(this + 8));
  pGVar5 = (GameWorld *)G_GameWorld();
  local_20 = (CUserCharacInfo *)GameWorld::find_user_by_charac_name(pGVar5,pcVar4);
  if (local_20 == (CUserCharacInfo *)0x0) {
    return;
  }
  iVar6 = CUserCharacInfo::getCurCharacR(local_20);
  if (iVar6 == 0) {
    return;
  }
  cVar3 = CUserCharacInfo::getCurCharacVill(local_20);
  local_1c = (int)cVar3;
  local_18 = CUser::get_area((CUser *)local_20,false);
  local_14 = CUser::get_posX((CUser *)local_20);
  local_14 = local_14 & 0xffff;
  local_10 = CUser::get_posY((CUser *)local_20);
  local_10 = local_10 & 0xffff;
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  cVar3 = CUserCharacInfo::getCurCharacVill(this_00);
  if (cVar3 == local_1c) {
    pCVar7 = (CUser *)CCommand::GetUser((CCommand *)this);
    iVar6 = CUser::get_area(pCVar7,false);
    if (iVar6 == local_18) {
      bVar1 = false;
      goto LAB_084a8de0;
    }
  }
  bVar1 = true;
LAB_084a8de0:
  uVar2 = local_10;
  uVar8 = local_14;
  if (bVar1) {
    pCVar7 = (CUser *)CCommand::GetUser((CCommand *)this);
    pGVar5 = (GameWorld *)G_GameWorld();
    GameWorld::move_area(pGVar5,pCVar7,local_1c,local_18,local_14,local_10,0,false,0,0,0);
  }
  else {
    pCVar7 = (CUser *)CCommand::GetUser((CCommand *)this);
    CUser::set_position(pCVar7,(ushort)uVar8,(ushort)uVar2,'\0');
  }
  PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084a8e98 to 084a8f39 has its CatchHandler @ 084a8f47 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x8a);
  pCVar7 = (CUser *)CCommand::GetUser((CCommand *)this);
  uVar8 = CUser::get_unique_id(pCVar7);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,uVar8 & 0xffff);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,local_14);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,local_10);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
  if ((local_1c != 0) || (local_18 != 0)) {
    pGVar5 = (GameWorld *)G_GameWorld();
    GameWorld::send_to_area(pGVar5,local_1c,local_18,local_2c);
  }
  PacketGuard::~PacketGuard(local_2c);
  return;
}

```

---

## parse

```asm
// === 084a8cce game_master::CMoveCharacCmd::parse  [0x084a8cce-0x84a8d01] ===
 84a8cce:	55                   	push   %ebp
 84a8ccf:	89 e5                	mov    %esp,%ebp
 84a8cd1:	83 ec 18             	sub    $0x18,%esp
 84a8cd4:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8cd7:	8b 40 04             	mov    0x4(%eax),%eax
 84a8cda:	83 c0 0c             	add    $0xc,%eax
 84a8cdd:	89 04 24             	mov    %eax,(%esp)
 84a8ce0:	e8 83 63 df ff       	call   829f068 <_Z4trimRSs>
 84a8ce5:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8ce8:	8b 40 04             	mov    0x4(%eax),%eax
 84a8ceb:	8d 50 0c             	lea    0xc(%eax),%edx
 84a8cee:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8cf1:	83 c0 08             	add    $0x8,%eax
 84a8cf4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a8cf8:	89 04 24             	mov    %eax,(%esp)
 84a8cfb:	e8 00 f0 25 00       	call   8707d00 <_ZNSsaSERKSs>
 84a8d00:	c9                   	leave
 84a8d01:	c3                   	ret

```

```c
// game_master::CMoveCharacCmd::parse @ 0x84a8cce

/* game_master::CMoveCharacCmd::parse() */

void __thiscall game_master::CMoveCharacCmd::parse(CMoveCharacCmd *this)

{
  trim((string *)(*(int *)(this + 4) + 0xc));
  std::string::operator=((string *)(this + 8),(string *)(*(int *)(this + 4) + 0xc));
  return;
}

```

