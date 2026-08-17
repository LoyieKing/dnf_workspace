# Inter_GuildExpBookDelete

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e2f1e Inter_GuildExpBookDelete::dispatch_sig  [0x084e2f1e-0x84e3081] ===
 84e2f1e:	55                   	push   %ebp
 84e2f1f:	89 e5                	mov    %esp,%ebp
 84e2f21:	56                   	push   %esi
 84e2f22:	53                   	push   %ebx
 84e2f23:	83 ec 50             	sub    $0x50,%esp
 84e2f26:	8b 45 10             	mov    0x10(%ebp),%eax
 84e2f29:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e2f2c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e2f2f:	8b 58 0a             	mov    0xa(%eax),%ebx
 84e2f32:	e8 57 92 be ff       	call   80cc18e <_Z14G_CGameManagerv>
 84e2f37:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84e2f3e:	00 
 84e2f3f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e2f43:	89 04 24             	mov    %eax,(%esp)
 84e2f46:	e8 59 18 db ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 84e2f4b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e2f4e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84e2f52:	75 73                	jne    84e2fc7 <_ZN24Inter_GuildExpBookDelete12dispatch_sigEP5CUserPci+0xa9>
 84e2f54:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e2f57:	8b 50 16             	mov    0x16(%eax),%edx
 84e2f5a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e2f5d:	8b 40 0e             	mov    0xe(%eax),%eax
 84e2f60:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e2f64:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e2f6b:	00 
 84e2f6c:	89 04 24             	mov    %eax,(%esp)
 84e2f6f:	e8 94 94 f5 ff       	call   843c408 <_ZN21DB_GuildExpBookDelete11makeRequestEji17ENUM_SERVER_GROUP>
 84e2f74:	8d 45 da             	lea    -0x26(%ebp),%eax
 84e2f77:	89 04 24             	mov    %eax,(%esp)
 84e2f7a:	e8 8b 65 00 00       	call   84e950a <_ZN15Packet_No_CacheC1Ev>
 84e2f7f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e2f82:	8b 40 16             	mov    0x16(%eax),%eax
 84e2f85:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84e2f88:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e2f8b:	8b 40 12             	mov    0x12(%eax),%eax
 84e2f8e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84e2f91:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
 84e2f95:	0f b7 f0             	movzwl %ax,%esi
 84e2f98:	8d 5d da             	lea    -0x26(%ebp),%ebx
 84e2f9b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e2f9e:	8b 50 16             	mov    0x16(%eax),%edx
 84e2fa1:	a1 28 be 40 09       	mov    0x940be28,%eax
 84e2fa6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e2faa:	89 04 24             	mov    %eax,(%esp)
 84e2fad:	e8 d8 f0 c2 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84e2fb2:	89 74 24 08          	mov    %esi,0x8(%esp)
 84e2fb6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e2fba:	89 04 24             	mov    %eax,(%esp)
 84e2fbd:	e8 32 de f8 ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 84e2fc2:	e9 af 00 00 00       	jmp    84e3076 <_ZN24Inter_GuildExpBookDelete12dispatch_sigEP5CUserPci+0x158>
 84e2fc7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e2fca:	89 04 24             	mov    %eax,(%esp)
 84e2fcd:	e8 60 d4 c3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84e2fd2:	85 c0                	test   %eax,%eax
 84e2fd4:	0f 94 c0             	sete   %al
 84e2fd7:	84 c0                	test   %al,%al
 84e2fd9:	74 70                	je     84e304b <_ZN24Inter_GuildExpBookDelete12dispatch_sigEP5CUserPci+0x12d>
 84e2fdb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e2fde:	8b 50 16             	mov    0x16(%eax),%edx
 84e2fe1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e2fe4:	8b 40 0e             	mov    0xe(%eax),%eax
 84e2fe7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e2feb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e2ff2:	00 
 84e2ff3:	89 04 24             	mov    %eax,(%esp)
 84e2ff6:	e8 0d 94 f5 ff       	call   843c408 <_ZN21DB_GuildExpBookDelete11makeRequestEji17ENUM_SERVER_GROUP>
 84e2ffb:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84e2ffe:	89 04 24             	mov    %eax,(%esp)
 84e3001:	e8 04 65 00 00       	call   84e950a <_ZN15Packet_No_CacheC1Ev>
 84e3006:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3009:	8b 40 16             	mov    0x16(%eax),%eax
 84e300c:	89 45 d2             	mov    %eax,-0x2e(%ebp)
 84e300f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3012:	8b 40 12             	mov    0x12(%eax),%eax
 84e3015:	89 45 ce             	mov    %eax,-0x32(%ebp)
 84e3018:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 84e301c:	0f b7 f0             	movzwl %ax,%esi
 84e301f:	8d 5d c4             	lea    -0x3c(%ebp),%ebx
 84e3022:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3025:	8b 50 16             	mov    0x16(%eax),%edx
 84e3028:	a1 28 be 40 09       	mov    0x940be28,%eax
 84e302d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e3031:	89 04 24             	mov    %eax,(%esp)
 84e3034:	e8 51 f0 c2 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84e3039:	89 74 24 08          	mov    %esi,0x8(%esp)
 84e303d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e3041:	89 04 24             	mov    %eax,(%esp)
 84e3044:	e8 ab dd f8 ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 84e3049:	eb 2b                	jmp    84e3076 <_ZN24Inter_GuildExpBookDelete12dispatch_sigEP5CUserPci+0x158>
 84e304b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e304e:	8b 50 16             	mov    0x16(%eax),%edx
 84e3051:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3054:	8b 40 0e             	mov    0xe(%eax),%eax
 84e3057:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e305b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e3062:	00 
 84e3063:	89 04 24             	mov    %eax,(%esp)
 84e3066:	e8 9d 93 f5 ff       	call   843c408 <_ZN21DB_GuildExpBookDelete11makeRequestEji17ENUM_SERVER_GROUP>
 84e306b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e306e:	89 04 24             	mov    %eax,(%esp)
 84e3071:	e8 22 b8 19 00       	call   867e898 <_ZN5CUser18deleteGuildExpBookEv>
 84e3076:	b8 00 00 00 00       	mov    $0x0,%eax
 84e307b:	83 c4 50             	add    $0x50,%esp
 84e307e:	5b                   	pop    %ebx
 84e307f:	5e                   	pop    %esi
 84e3080:	5d                   	pop    %ebp
 84e3081:	c3                   	ret

```

```c
// Inter_GuildExpBookDelete::dispatch_sig @ 0x84e2f1e

/* Inter_GuildExpBookDelete::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildExpBookDelete::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  CMonitorServerProxy *pCVar2;
  int iVar3;
  Packet_No_Cache local_40 [2];
  ushort local_3e;
  undefined4 local_36;
  undefined4 local_32;
  Packet_No_Cache local_2a [2];
  ushort local_28;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  CUserCharacInfo *local_10;
  
  local_14 = param_3;
  iVar3 = *(int *)(param_3 + 10);
  iVar1 = G_CGameManager();
  local_10 = (CUserCharacInfo *)CGameManager::getUser(iVar1,iVar3);
  if (local_10 == (CUserCharacInfo *)0x0) {
    DB_GuildExpBookDelete::makeRequest
              (*(undefined4 *)(local_14 + 0xe),1,*(undefined4 *)(local_14 + 0x16));
    Packet_No_Cache::Packet_No_Cache(local_2a);
    local_1c = *(undefined4 *)(local_14 + 0x16);
    local_20 = *(undefined4 *)(local_14 + 0x12);
    pCVar2 = (CMonitorServerProxy *)
             CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                       (GlobalData::s_monitor_proxy_mgr,*(undefined4 *)(local_14 + 0x16));
    CMonitorServerProxy::SendPacket(pCVar2,(char *)local_2a,(uint)local_28);
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacR(local_10);
    if (iVar3 == 0) {
      DB_GuildExpBookDelete::makeRequest
                (*(undefined4 *)(local_14 + 0xe),1,*(undefined4 *)(local_14 + 0x16));
      Packet_No_Cache::Packet_No_Cache(local_40);
      local_32 = *(undefined4 *)(local_14 + 0x16);
      local_36 = *(undefined4 *)(local_14 + 0x12);
      pCVar2 = (CMonitorServerProxy *)
               CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                         (GlobalData::s_monitor_proxy_mgr,*(undefined4 *)(local_14 + 0x16));
      CMonitorServerProxy::SendPacket(pCVar2,(char *)local_40,(uint)local_3e);
    }
    else {
      DB_GuildExpBookDelete::makeRequest
                (*(undefined4 *)(local_14 + 0xe),0,*(undefined4 *)(local_14 + 0x16));
      CUser::deleteGuildExpBook((CUser *)local_10);
    }
  }
  return 0;
}

```

