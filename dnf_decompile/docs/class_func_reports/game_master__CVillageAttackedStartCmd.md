# game_master__CVillageAttackedStartCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084aa144 game_master::CVillageAttackedStartCmd::execute  [0x084aa144-0x84aa1db] ===
 84aa144:	55                   	push   %ebp
 84aa145:	89 e5                	mov    %esp,%ebp
 84aa147:	53                   	push   %ebx
 84aa148:	83 ec 34             	sub    $0x34,%esp
 84aa14b:	8d 45 de             	lea    -0x22(%ebp),%eax
 84aa14e:	89 04 24             	mov    %eax,(%esp)
 84aa151:	e8 32 1f d8 ff       	call   822c088 <_ZN31Packet_VillageAttackedGMCommandC1Ev>
 84aa156:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa159:	89 04 24             	mov    %eax,(%esp)
 84aa15c:	e8 59 9e 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aa161:	89 04 24             	mov    %eax,(%esp)
 84aa164:	e8 2d eb c1 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84aa169:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84aa16c:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa16f:	89 04 24             	mov    %eax,(%esp)
 84aa172:	e8 43 9e 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aa177:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84aa17e:	ff 
 84aa17f:	89 04 24             	mov    %eax,(%esp)
 84aa182:	e8 19 3e 1a 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84aa187:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84aa18a:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa18d:	8b 40 08             	mov    0x8(%eax),%eax
 84aa190:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84aa193:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84aa19a:	8d 5d de             	lea    -0x22(%ebp),%ebx
 84aa19d:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa1a0:	89 04 24             	mov    %eax,(%esp)
 84aa1a3:	e8 12 9e 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aa1a8:	89 04 24             	mov    %eax,(%esp)
 84aa1ab:	e8 e0 1a c2 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84aa1b0:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84aa1b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aa1ba:	89 14 24             	mov    %edx,(%esp)
 84aa1bd:	e8 c8 7e c6 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84aa1c2:	c7 44 24 08 1a 00 00 	movl   $0x1a,0x8(%esp)
 84aa1c9:	00 
 84aa1ca:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84aa1ce:	89 04 24             	mov    %eax,(%esp)
 84aa1d1:	e8 6e 6c fc ff       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 84aa1d6:	83 c4 34             	add    $0x34,%esp
 84aa1d9:	5b                   	pop    %ebx
 84aa1da:	5d                   	pop    %ebp
 84aa1db:	c3                   	ret

```

```c
// game_master::CVillageAttackedStartCmd::execute @ 0x84aa144

/* game_master::CVillageAttackedStartCmd::execute() */

void __thiscall game_master::CVillageAttackedStartCmd::execute(CVillageAttackedStartCmd *this)

{
  CUser *pCVar1;
  undefined4 uVar2;
  CMonitorServerProxy *this_00;
  Packet_VillageAttackedGMCommand local_26 [10];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  Packet_VillageAttackedGMCommand::Packet_VillageAttackedGMCommand(local_26);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  local_1c = CUser::GetUID(pCVar1);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  local_18 = CUser::get_charac_no(pCVar1,-1);
  local_14 = *(undefined4 *)(this + 8);
  local_10 = 0;
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  uVar2 = CUser::GetServerGroup(pCVar1);
  this_00 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,uVar2);
  CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_26,0x1a);
  return;
}

```

---

## parse

```asm
// === 084aa10c game_master::CVillageAttackedStartCmd::parse  [0x084aa10c-0x84aa143] ===
 84aa10c:	55                   	push   %ebp
 84aa10d:	89 e5                	mov    %esp,%ebp
 84aa10f:	83 ec 18             	sub    $0x18,%esp
 84aa112:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa115:	8b 40 04             	mov    0x4(%eax),%eax
 84aa118:	83 c0 0c             	add    $0xc,%eax
 84aa11b:	89 04 24             	mov    %eax,(%esp)
 84aa11e:	e8 45 4f df ff       	call   829f068 <_Z4trimRSs>
 84aa123:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa126:	8b 40 04             	mov    0x4(%eax),%eax
 84aa129:	83 c0 0c             	add    $0xc,%eax
 84aa12c:	89 04 24             	mov    %eax,(%esp)
 84aa12f:	e8 bc c3 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84aa134:	89 04 24             	mov    %eax,(%esp)
 84aa137:	e8 b4 45 bd ff       	call   807e6f0 <atoi@plt>
 84aa13c:	8b 55 08             	mov    0x8(%ebp),%edx
 84aa13f:	89 42 08             	mov    %eax,0x8(%edx)
 84aa142:	c9                   	leave
 84aa143:	c3                   	ret

```

```c
// game_master::CVillageAttackedStartCmd::parse @ 0x84aa10c

/* game_master::CVillageAttackedStartCmd::parse() */

void __thiscall game_master::CVillageAttackedStartCmd::parse(CVillageAttackedStartCmd *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}

```

