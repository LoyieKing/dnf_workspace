# DIspatcher_OneDayLetheTicket

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821b106 DIspatcher_OneDayLetheTicket::dispatch_sig  [0x0821b106-0x821b255] ===
 821b106:	55                   	push   %ebp
 821b107:	89 e5                	mov    %esp,%ebp
 821b109:	83 ec 38             	sub    $0x38,%esp
 821b10c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821b113:	00 
 821b114:	c7 44 24 08 aa ce 00 	movl   $0xceaa,0x8(%esp)
 821b11b:	00 
 821b11c:	c7 44 24 04 a0 d6 bc 	movl   $0x8bcd6a0,0x4(%esp)
 821b123:	08 
 821b124:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 821b127:	89 04 24             	mov    %eax,(%esp)
 821b12a:	e8 e9 45 33 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 821b12f:	c7 44 24 04 c4 33 bc 	movl   $0x8bc33c4,0x4(%esp)
 821b136:	08 
 821b137:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 821b13a:	89 04 24             	mov    %eax,(%esp)
 821b13d:	e8 46 46 33 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 821b142:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 821b146:	75 0a                	jne    821b152 <_ZN28DIspatcher_OneDayLetheTicket12dispatch_sigEP5CUserR9PacketBuf+0x4c>
 821b148:	b8 00 00 00 00       	mov    $0x0,%eax
 821b14d:	e9 02 01 00 00       	jmp    821b254 <_ZN28DIspatcher_OneDayLetheTicket12dispatch_sigEP5CUserR9PacketBuf+0x14e>
 821b152:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b155:	89 04 24             	mov    %eax,(%esp)
 821b158:	e8 2f f2 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821b15d:	83 f8 03             	cmp    $0x3,%eax
 821b160:	0f 95 c0             	setne  %al
 821b163:	84 c0                	test   %al,%al
 821b165:	74 25                	je     821b18c <_ZN28DIspatcher_OneDayLetheTicket12dispatch_sigEP5CUserR9PacketBuf+0x86>
 821b167:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 821b16e:	00 
 821b16f:	c7 44 24 04 d5 00 00 	movl   $0xd5,0x4(%esp)
 821b176:	00 
 821b177:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b17a:	89 04 24             	mov    %eax,(%esp)
 821b17d:	e8 c0 0d 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821b182:	b8 00 00 00 00       	mov    $0x0,%eax
 821b187:	e9 c8 00 00 00       	jmp    821b254 <_ZN28DIspatcher_OneDayLetheTicket12dispatch_sigEP5CUserR9PacketBuf+0x14e>
 821b18c:	e8 16 f2 eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 821b191:	89 04 24             	mov    %eax,(%esp)
 821b194:	e8 4f 73 f2 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 821b199:	84 c0                	test   %al,%al
 821b19b:	74 1b                	je     821b1b8 <_ZN28DIspatcher_OneDayLetheTicket12dispatch_sigEP5CUserR9PacketBuf+0xb2>
 821b19d:	e8 05 f2 eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 821b1a2:	89 04 24             	mov    %eax,(%esp)
 821b1a5:	e8 74 92 01 00       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 821b1aa:	83 f0 01             	xor    $0x1,%eax
 821b1ad:	84 c0                	test   %al,%al
 821b1af:	74 07                	je     821b1b8 <_ZN28DIspatcher_OneDayLetheTicket12dispatch_sigEP5CUserR9PacketBuf+0xb2>
 821b1b1:	b8 01 00 00 00       	mov    $0x1,%eax
 821b1b6:	eb 05                	jmp    821b1bd <_ZN28DIspatcher_OneDayLetheTicket12dispatch_sigEP5CUserR9PacketBuf+0xb7>
 821b1b8:	b8 00 00 00 00       	mov    $0x0,%eax
 821b1bd:	84 c0                	test   %al,%al
 821b1bf:	74 22                	je     821b1e3 <_ZN28DIspatcher_OneDayLetheTicket12dispatch_sigEP5CUserR9PacketBuf+0xdd>
 821b1c1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 821b1c8:	00 
 821b1c9:	c7 44 24 04 d5 00 00 	movl   $0xd5,0x4(%esp)
 821b1d0:	00 
 821b1d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b1d4:	89 04 24             	mov    %eax,(%esp)
 821b1d7:	e8 66 0d 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821b1dc:	b8 00 00 00 00       	mov    $0x0,%eax
 821b1e1:	eb 71                	jmp    821b254 <_ZN28DIspatcher_OneDayLetheTicket12dispatch_sigEP5CUserR9PacketBuf+0x14e>
 821b1e3:	e8 a6 0f eb ff       	call   80cc18e <_Z14G_CGameManagerv>
 821b1e8:	89 04 24             	mov    %eax,(%esp)
 821b1eb:	e8 98 dc 07 00       	call   8298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>
 821b1f0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 821b1f3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 821b1f7:	75 22                	jne    821b21b <_ZN28DIspatcher_OneDayLetheTicket12dispatch_sigEP5CUserR9PacketBuf+0x115>
 821b1f9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 821b200:	00 
 821b201:	c7 44 24 04 d5 00 00 	movl   $0xd5,0x4(%esp)
 821b208:	00 
 821b209:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b20c:	89 04 24             	mov    %eax,(%esp)
 821b20f:	e8 2e 0d 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821b214:	b8 00 00 00 00       	mov    $0x0,%eax
 821b219:	eb 39                	jmp    821b254 <_ZN28DIspatcher_OneDayLetheTicket12dispatch_sigEP5CUserR9PacketBuf+0x14e>
 821b21b:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b21e:	89 44 24 04          	mov    %eax,0x4(%esp)
 821b222:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821b225:	89 04 24             	mov    %eax,(%esp)
 821b228:	e8 e7 8a 3a 00       	call   85c3d14 <_ZN20CPremiumLetheManager13ResetSkillReqEP5CUser>
 821b22d:	83 f0 01             	xor    $0x1,%eax
 821b230:	84 c0                	test   %al,%al
 821b232:	74 1b                	je     821b24f <_ZN28DIspatcher_OneDayLetheTicket12dispatch_sigEP5CUserR9PacketBuf+0x149>
 821b234:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 821b23b:	00 
 821b23c:	c7 44 24 04 d5 00 00 	movl   $0xd5,0x4(%esp)
 821b243:	00 
 821b244:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b247:	89 04 24             	mov    %eax,(%esp)
 821b24a:	e8 f3 0c 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821b24f:	b8 00 00 00 00       	mov    $0x0,%eax
 821b254:	c9                   	leave
 821b255:	c3                   	ret

```

```c
// DIspatcher_OneDayLetheTicket::dispatch_sig @ 0x821b106

/* DIspatcher_OneDayLetheTicket::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DIspatcher_OneDayLetheTicket::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  CGameManager *this;
  cMyTrace local_20 [16];
  CPremiumLetheManager *local_10;
  
  cMyTrace::cMyTrace(local_20,
                     "virtual int DIspatcher_OneDayLetheTicket::dispatch_sig(CUser*, PacketBuf&)",
                     0xceaa,0);
  cMyTrace::operator()(local_20,"ONE_DAY_LETHE : SKILL_INIT_PACKET");
  if (param_2 == (PacketBuf *)0x0) {
    return 0;
  }
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 != 3) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xd5,1);
    return 0;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 != '\0') {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsPvPSkilTreeChannel(pGVar4);
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_0821b1bd;
    }
  }
  bVar1 = false;
LAB_0821b1bd:
  if (bVar1) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xd5,1);
  }
  else {
    this = (CGameManager *)G_CGameManager();
    local_10 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(this);
    if (local_10 == (CPremiumLetheManager *)0x0) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xd5,1);
    }
    else {
      cVar2 = CPremiumLetheManager::ResetSkillReq(local_10,(CUser *)param_2);
      if (cVar2 != '\x01') {
        CUser::SendCmdErrorPacket((CUser *)param_2,0xd5,1);
      }
    }
  }
  return 0;
}

```

