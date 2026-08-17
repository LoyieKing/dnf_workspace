# Dispatcer_polic_one_to_one_chat_disable

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082272ce Dispatcer_polic_one_to_one_chat_disable::dispatch_sig  [0x082272ce-0x82273ad] ===
 82272ce:	55                   	push   %ebp
 82272cf:	89 e5                	mov    %esp,%ebp
 82272d1:	53                   	push   %ebx
 82272d2:	83 ec 44             	sub    $0x44,%esp
 82272d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82272d8:	89 04 24             	mov    %eax,(%esp)
 82272db:	e8 ac 30 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82272e0:	83 f8 02             	cmp    $0x2,%eax
 82272e3:	7e 0f                	jle    82272f4 <_ZN39Dispatcer_polic_one_to_one_chat_disable12dispatch_sigEP5CUserR9PacketBuf+0x26>
 82272e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82272e8:	89 04 24             	mov    %eax,(%esp)
 82272eb:	e8 42 91 ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82272f0:	85 c0                	test   %eax,%eax
 82272f2:	75 07                	jne    82272fb <_ZN39Dispatcer_polic_one_to_one_chat_disable12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 82272f4:	b8 01 00 00 00       	mov    $0x1,%eax
 82272f9:	eb 05                	jmp    8227300 <_ZN39Dispatcer_polic_one_to_one_chat_disable12dispatch_sigEP5CUserR9PacketBuf+0x32>
 82272fb:	b8 00 00 00 00       	mov    $0x0,%eax
 8227300:	84 c0                	test   %al,%al
 8227302:	74 0a                	je     822730e <_ZN39Dispatcer_polic_one_to_one_chat_disable12dispatch_sigEP5CUserR9PacketBuf+0x40>
 8227304:	b8 00 00 00 00       	mov    $0x0,%eax
 8227309:	e9 9a 00 00 00       	jmp    82273a8 <_ZN39Dispatcer_polic_one_to_one_chat_disable12dispatch_sigEP5CUserR9PacketBuf+0xda>
 822730e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8227311:	89 04 24             	mov    %eax,(%esp)
 8227314:	e8 7d 4f 00 00       	call   822c296 <_ZN39Packet_Disable_User_OneToOneChat_PoliceC1Ev>
 8227319:	8d 45 c8             	lea    -0x38(%ebp),%eax
 822731c:	83 c0 0e             	add    $0xe,%eax
 822731f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227323:	8b 45 10             	mov    0x10(%ebp),%eax
 8227326:	89 04 24             	mov    %eax,(%esp)
 8227329:	e8 12 5f 36 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 822732e:	8b 45 d6             	mov    -0x2a(%ebp),%eax
 8227331:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8227335:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 822733c:	00 
 822733d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8227340:	83 c0 12             	add    $0x12,%eax
 8227343:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227347:	8b 45 10             	mov    0x10(%ebp),%eax
 822734a:	89 04 24             	mov    %eax,(%esp)
 822734d:	e8 6a 5f 36 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8227352:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227355:	89 04 24             	mov    %eax,(%esp)
 8227358:	e8 3f e5 f1 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 822735d:	84 c0                	test   %al,%al
 822735f:	74 42                	je     82273a3 <_ZN39Dispatcer_polic_one_to_one_chat_disable12dispatch_sigEP5CUserR9PacketBuf+0xd5>
 8227361:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227364:	89 04 24             	mov    %eax,(%esp)
 8227367:	e8 e2 48 ea ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 822736c:	89 45 d2             	mov    %eax,-0x2e(%ebp)
 822736f:	8d 5d c8             	lea    -0x38(%ebp),%ebx
 8227372:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227375:	89 04 24             	mov    %eax,(%esp)
 8227378:	e8 13 49 ea ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 822737d:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 8227383:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227387:	89 14 24             	mov    %edx,(%esp)
 822738a:	e8 fb ac ee ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 822738f:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8227396:	00 
 8227397:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 822739b:	89 04 24             	mov    %eax,(%esp)
 822739e:	e8 a1 9a 24 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 82273a3:	b8 00 00 00 00       	mov    $0x0,%eax
 82273a8:	83 c4 44             	add    $0x44,%esp
 82273ab:	5b                   	pop    %ebx
 82273ac:	5d                   	pop    %ebp
 82273ad:	c3                   	ret

```

```c
// Dispatcer_polic_one_to_one_chat_disable::dispatch_sig @ 0x82272ce

/* Dispatcer_polic_one_to_one_chat_disable::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcer_polic_one_to_one_chat_disable::dispatch_sig
          (Dispatcer_polic_one_to_one_chat_disable *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CMonitorServerProxy *this_00;
  Packet_Disable_User_OneToOneChat_Police local_3c [10];
  undefined4 local_32;
  uint local_2e;
  char acStack_2a [34];
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    Packet_Disable_User_OneToOneChat_Police::Packet_Disable_User_OneToOneChat_Police(local_3c);
    PacketBuf::get_int(param_2,&local_2e);
    PacketBuf::get_str(param_2,acStack_2a,0x1e,local_2e);
    cVar2 = CUser::isGMUser(param_1);
    if (cVar2 != '\0') {
      local_32 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar4 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar4);
      CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_3c,0x30);
    }
  }
  return 0;
}

```

