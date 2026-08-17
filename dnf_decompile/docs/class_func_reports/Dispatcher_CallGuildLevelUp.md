# Dispatcher_CallGuildLevelUp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 082001f0 Dispatcher_CallGuildLevelUp::dispatch_sig  [0x082001f0-0x8200447] ===
 82001f0:	55                   	push   %ebp
 82001f1:	89 e5                	mov    %esp,%ebp
 82001f3:	57                   	push   %edi
 82001f4:	56                   	push   %esi
 82001f5:	53                   	push   %ebx
 82001f6:	83 ec 6c             	sub    $0x6c,%esp
 82001f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82001fc:	89 04 24             	mov    %eax,(%esp)
 82001ff:	e8 88 a1 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8200204:	83 f8 02             	cmp    $0x2,%eax
 8200207:	7e 0f                	jle    8200218 <_ZN27Dispatcher_CallGuildLevelUp12dispatch_sigEP5CUserR9PacketBuf+0x28>
 8200209:	8b 45 0c             	mov    0xc(%ebp),%eax
 820020c:	89 04 24             	mov    %eax,(%esp)
 820020f:	e8 1e 02 f2 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8200214:	85 c0                	test   %eax,%eax
 8200216:	75 07                	jne    820021f <_ZN27Dispatcher_CallGuildLevelUp12dispatch_sigEP5CUserR9PacketBuf+0x2f>
 8200218:	b8 01 00 00 00       	mov    $0x1,%eax
 820021d:	eb 05                	jmp    8200224 <_ZN27Dispatcher_CallGuildLevelUp12dispatch_sigEP5CUserR9PacketBuf+0x34>
 820021f:	b8 00 00 00 00       	mov    $0x0,%eax
 8200224:	84 c0                	test   %al,%al
 8200226:	74 29                	je     8200251 <_ZN27Dispatcher_CallGuildLevelUp12dispatch_sigEP5CUserR9PacketBuf+0x61>
 8200228:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820022f:	00 
 8200230:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8200237:	00 
 8200238:	c7 44 24 04 80 f7 bc 	movl   $0x8bcf780,0x4(%esp)
 820023f:	08 
 8200240:	c7 04 24 7f 94 00 00 	movl   $0x947f,(%esp)
 8200247:	e8 8b 06 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 820024c:	e9 ef 01 00 00       	jmp    8200440 <_ZN27Dispatcher_CallGuildLevelUp12dispatch_sigEP5CUserR9PacketBuf+0x250>
 8200251:	e8 90 23 f6 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 8200256:	c7 44 24 0c 1d 00 00 	movl   $0x1d,0xc(%esp)
 820025d:	00 
 820025e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8200265:	00 
 8200266:	8b 55 0c             	mov    0xc(%ebp),%edx
 8200269:	89 54 24 04          	mov    %edx,0x4(%esp)
 820026d:	89 04 24             	mov    %eax,(%esp)
 8200270:	e8 43 e4 f6 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 8200275:	84 c0                	test   %al,%al
 8200277:	74 24                	je     820029d <_ZN27Dispatcher_CallGuildLevelUp12dispatch_sigEP5CUserR9PacketBuf+0xad>
 8200279:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 8200280:	00 
 8200281:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200284:	89 44 24 04          	mov    %eax,0x4(%esp)
 8200288:	8b 45 08             	mov    0x8(%ebp),%eax
 820028b:	89 04 24             	mov    %eax,(%esp)
 820028e:	e8 93 fe ff ff       	call   8200126 <_ZN27Dispatcher_CallGuildLevelUp25send_packet_guild_levelupEP5CUserh>
 8200293:	b8 00 00 00 00       	mov    $0x0,%eax
 8200298:	e9 a3 01 00 00       	jmp    8200440 <_ZN27Dispatcher_CallGuildLevelUp12dispatch_sigEP5CUserR9PacketBuf+0x250>
 820029d:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 82002a2:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 82002a9:	00 
 82002aa:	8b 55 0c             	mov    0xc(%ebp),%edx
 82002ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 82002b1:	89 04 24             	mov    %eax,(%esp)
 82002b4:	e8 49 87 08 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 82002b9:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82002bc:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 82002c0:	74 26                	je     82002e8 <_ZN27Dispatcher_CallGuildLevelUp12dispatch_sigEP5CUserR9PacketBuf+0xf8>
 82002c2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82002c5:	0f b6 c0             	movzbl %al,%eax
 82002c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 82002cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82002cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 82002d3:	8b 45 08             	mov    0x8(%ebp),%eax
 82002d6:	89 04 24             	mov    %eax,(%esp)
 82002d9:	e8 48 fe ff ff       	call   8200126 <_ZN27Dispatcher_CallGuildLevelUp25send_packet_guild_levelupEP5CUserh>
 82002de:	b8 00 00 00 00       	mov    $0x0,%eax
 82002e3:	e9 58 01 00 00       	jmp    8200440 <_ZN27Dispatcher_CallGuildLevelUp12dispatch_sigEP5CUserR9PacketBuf+0x250>
 82002e8:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 82002ef:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82002f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82002f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82002f9:	89 04 24             	mov    %eax,(%esp)
 82002fc:	e8 7d bf 46 00       	call   866c27e <_ZN5CUser17CheckGuildLevelUpERj>
 8200301:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8200304:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8200308:	74 26                	je     8200330 <_ZN27Dispatcher_CallGuildLevelUp12dispatch_sigEP5CUserR9PacketBuf+0x140>
 820030a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 820030d:	0f b6 c0             	movzbl %al,%eax
 8200310:	89 44 24 08          	mov    %eax,0x8(%esp)
 8200314:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200317:	89 44 24 04          	mov    %eax,0x4(%esp)
 820031b:	8b 45 08             	mov    0x8(%ebp),%eax
 820031e:	89 04 24             	mov    %eax,(%esp)
 8200321:	e8 00 fe ff ff       	call   8200126 <_ZN27Dispatcher_CallGuildLevelUp25send_packet_guild_levelupEP5CUserh>
 8200326:	b8 00 00 00 00       	mov    $0x0,%eax
 820032b:	e9 10 01 00 00       	jmp    8200440 <_ZN27Dispatcher_CallGuildLevelUp12dispatch_sigEP5CUserR9PacketBuf+0x250>
 8200330:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8200333:	0f b6 c0             	movzbl %al,%eax
 8200336:	89 44 24 08          	mov    %eax,0x8(%esp)
 820033a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820033d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8200341:	8b 45 08             	mov    0x8(%ebp),%eax
 8200344:	89 04 24             	mov    %eax,(%esp)
 8200347:	e8 da fd ff ff       	call   8200126 <_ZN27Dispatcher_CallGuildLevelUp25send_packet_guild_levelupEP5CUserh>
 820034c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 820034f:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8200352:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200355:	89 04 24             	mov    %eax,(%esp)
 8200358:	e8 0f f1 02 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 820035d:	89 c7                	mov    %eax,%edi
 820035f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200362:	89 04 24             	mov    %eax,(%esp)
 8200365:	e8 e4 b8 ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 820036a:	89 c6                	mov    %eax,%esi
 820036c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820036f:	89 04 24             	mov    %eax,(%esp)
 8200372:	e8 1f 89 ec ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8200377:	89 c3                	mov    %eax,%ebx
 8200379:	8b 45 0c             	mov    0xc(%ebp),%eax
 820037c:	89 04 24             	mov    %eax,(%esp)
 820037f:	e8 0c b9 ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8200384:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 820038a:	89 44 24 04          	mov    %eax,0x4(%esp)
 820038e:	89 14 24             	mov    %edx,(%esp)
 8200391:	e8 22 d0 f1 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8200396:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8200399:	89 54 24 10          	mov    %edx,0x10(%esp)
 820039d:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 82003a1:	89 74 24 08          	mov    %esi,0x8(%esp)
 82003a5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82003a9:	89 04 24             	mov    %eax,(%esp)
 82003ac:	e8 d9 d9 26 00       	call   846dd8a <_ZN17CGuildServerProxy16SendGuildLevelupEijjj>
 82003b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82003b4:	89 04 24             	mov    %eax,(%esp)
 82003b7:	e8 a8 fd 02 00       	call   8230164 <_ZN5CUser14GetGuildDBInfoEv>
 82003bc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82003bf:	8d 45 be             	lea    -0x42(%ebp),%eax
 82003c2:	89 04 24             	mov    %eax,(%esp)
 82003c5:	e8 14 41 03 00       	call   82344de <_ZN12STGuildProxyC1Ev>
 82003ca:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82003cd:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 82003d1:	83 c0 01             	add    $0x1,%eax
 82003d4:	88 45 d5             	mov    %al,-0x2b(%ebp)
 82003d7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82003da:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 82003e1:	00 
 82003e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82003e6:	8d 45 be             	lea    -0x42(%ebp),%eax
 82003e9:	89 04 24             	mov    %eax,(%esp)
 82003ec:	e8 af d4 e7 ff       	call   807d8a0 <memcpy@plt>
 82003f1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82003f4:	0f b6 80 95 00 00 00 	movzbl 0x95(%eax),%eax
 82003fb:	88 45 d6             	mov    %al,-0x2a(%ebp)
 82003fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200401:	89 04 24             	mov    %eax,(%esp)
 8200404:	e8 63 f0 02 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 8200409:	89 c3                	mov    %eax,%ebx
 820040b:	8b 45 0c             	mov    0xc(%ebp),%eax
 820040e:	89 04 24             	mov    %eax,(%esp)
 8200411:	e8 7a b8 ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8200416:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 820041c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8200420:	89 14 24             	mov    %edx,(%esp)
 8200423:	e8 90 cf f1 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8200428:	8d 55 be             	lea    -0x42(%ebp),%edx
 820042b:	89 54 24 08          	mov    %edx,0x8(%esp)
 820042f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8200433:	89 04 24             	mov    %eax,(%esp)
 8200436:	e8 23 e5 26 00       	call   846e95e <_ZN17CGuildServerProxy20ModifyGuildInfoProxyEjR12STGuildProxy>
 820043b:	b8 00 00 00 00       	mov    $0x0,%eax
 8200440:	83 c4 6c             	add    $0x6c,%esp
 8200443:	5b                   	pop    %ebx
 8200444:	5e                   	pop    %esi
 8200445:	5f                   	pop    %edi
 8200446:	5d                   	pop    %ebp
 8200447:	c3                   	ret

```

```c
// Dispatcher_CallGuildLevelUp::dispatch_sig @ 0x82001f0

/* Dispatcher_CallGuildLevelUp::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_CallGuildLevelUp::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ServiceRestrictManager *pSVar5;
  uint uVar6;
  uint uVar7;
  CGuildServerProxy *pCVar8;
  uint uVar9;
  STGuildProxy local_46 [23];
  char local_2f;
  undefined1 local_2e;
  uint local_2c;
  int local_28;
  int local_24;
  void *local_20;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (2 < iVar3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_08200224;
    }
  }
  bVar1 = true;
LAB_08200224:
  if (bVar1) {
    uVar4 = LineFunc(0x947f,
                     "virtual int Dispatcher_CallGuildLevelUp::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
  }
  else {
    pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar2 = ServiceRestrictManager::isRestricted(pSVar5,param_2,1,0x1d);
    if (cVar2 == '\0') {
      local_28 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,7);
      if (local_28 == 0) {
        local_2c = 0;
        local_24 = CUser::CheckGuildLevelUp((CUser *)param_2,&local_2c);
        if (local_24 == 0) {
          send_packet_guild_levelup((Dispatcher_CallGuildLevelUp *)param_1,(CUser *)param_2,'\0');
          uVar9 = local_2c;
          uVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
          uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          iVar3 = CUser::GetUID((CUser *)param_2);
          uVar4 = CUser::GetServerGroup((CUser *)param_2);
          pCVar8 = (CGuildServerProxy *)
                   CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                             (GlobalData::s_guild_proxy_mgr,uVar4);
          CGuildServerProxy::SendGuildLevelup(pCVar8,iVar3,uVar7,uVar6,uVar9);
          local_20 = (void *)CUser::GetGuildDBInfo((CUser *)param_2);
          STGuildProxy::STGuildProxy(local_46);
          local_2f = *(char *)((int)local_20 + 0x1b) + '\x01';
          memcpy(local_46,local_20,0x16);
          local_2e = *(undefined1 *)((int)local_20 + 0x95);
          uVar9 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
          uVar4 = CUser::GetServerGroup((CUser *)param_2);
          pCVar8 = (CGuildServerProxy *)
                   CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                             (GlobalData::s_guild_proxy_mgr,uVar4);
          CGuildServerProxy::ModifyGuildInfoProxy(pCVar8,uVar9,local_46);
          uVar4 = 0;
        }
        else {
          send_packet_guild_levelup
                    ((Dispatcher_CallGuildLevelUp *)param_1,(CUser *)param_2,(uchar)local_24);
          uVar4 = 0;
        }
      }
      else {
        send_packet_guild_levelup
                  ((Dispatcher_CallGuildLevelUp *)param_1,(CUser *)param_2,(uchar)local_28);
        uVar4 = 0;
      }
    }
    else {
      send_packet_guild_levelup((Dispatcher_CallGuildLevelUp *)param_1,(CUser *)param_2,0xd1);
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

---

## send_packet_guild_levelup

```asm
// === 08200126 Dispatcher_CallGuildLevelUp::send_packet_guild_levelup  [0x08200126-0x82001ef] ===
 8200126:	55                   	push   %ebp
 8200127:	89 e5                	mov    %esp,%ebp
 8200129:	56                   	push   %esi
 820012a:	53                   	push   %ebx
 820012b:	83 ec 30             	sub    $0x30,%esp
 820012e:	8b 45 10             	mov    0x10(%ebp),%eax
 8200131:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8200134:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8200137:	89 04 24             	mov    %eax,(%esp)
 820013a:	e8 0d dc 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 820013f:	c7 44 24 08 4c 00 00 	movl   $0x4c,0x8(%esp)
 8200146:	00 
 8200147:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820014e:	00 
 820014f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8200152:	89 04 24             	mov    %eax,(%esp)
 8200155:	e8 a2 b7 ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 820015a:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 820015e:	75 15                	jne    8200175 <_ZN27Dispatcher_CallGuildLevelUp25send_packet_guild_levelupEP5CUserh+0x4f>
 8200160:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8200167:	00 
 8200168:	8d 45 ec             	lea    -0x14(%ebp),%eax
 820016b:	89 04 24             	mov    %eax,(%esp)
 820016e:	e8 ad b7 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8200173:	eb 13                	jmp    8200188 <_ZN27Dispatcher_CallGuildLevelUp25send_packet_guild_levelupEP5CUserh+0x62>
 8200175:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820017c:	00 
 820017d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8200180:	89 04 24             	mov    %eax,(%esp)
 8200183:	e8 98 b7 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8200188:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 820018c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8200190:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8200193:	89 04 24             	mov    %eax,(%esp)
 8200196:	e8 85 b7 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820019b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82001a2:	00 
 82001a3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82001a6:	89 04 24             	mov    %eax,(%esp)
 82001a9:	e8 aa b7 ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82001ae:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82001b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82001b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82001b8:	89 04 24             	mov    %eax,(%esp)
 82001bb:	e8 fa 83 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82001c0:	eb 1b                	jmp    82001dd <_ZN27Dispatcher_CallGuildLevelUp25send_packet_guild_levelupEP5CUserh+0xb7>
 82001c2:	89 d3                	mov    %edx,%ebx
 82001c4:	89 c6                	mov    %eax,%esi
 82001c6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82001c9:	89 04 24             	mov    %eax,(%esp)
 82001cc:	e8 af dc 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82001d1:	89 f0                	mov    %esi,%eax
 82001d3:	89 da                	mov    %ebx,%edx
 82001d5:	89 04 24             	mov    %eax,(%esp)
 82001d8:	e8 73 35 8e 00       	call   8ae3750 <_Unwind_Resume>
 82001dd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82001e0:	89 04 24             	mov    %eax,(%esp)
 82001e3:	e8 98 dc 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82001e8:	83 c4 30             	add    $0x30,%esp
 82001eb:	5b                   	pop    %ebx
 82001ec:	5e                   	pop    %esi
 82001ed:	5d                   	pop    %ebp
 82001ee:	c3                   	ret
 82001ef:	90                   	nop

```

```c
// Dispatcher_CallGuildLevelUp::send_packet_guild_levelup @ 0x8200126

/* Dispatcher_CallGuildLevelUp::send_packet_guild_levelup(CUser*, unsigned char) */

void __thiscall
Dispatcher_CallGuildLevelUp::send_packet_guild_levelup
          (Dispatcher_CallGuildLevelUp *this,CUser *param_1,uchar param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08200155 to 082001bf has its CatchHandler @ 082001c2 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x4c);
  if (param_2 == '\0') {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

