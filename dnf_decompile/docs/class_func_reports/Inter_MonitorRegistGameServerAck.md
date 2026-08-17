# Inter_MonitorRegistGameServerAck

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e2dee Inter_MonitorRegistGameServerAck::dispatch_sig  [0x084e2dee-0x84e2f1d] ===
 84e2dee:	55                   	push   %ebp
 84e2def:	89 e5                	mov    %esp,%ebp
 84e2df1:	56                   	push   %esi
 84e2df2:	53                   	push   %ebx
 84e2df3:	83 ec 60             	sub    $0x60,%esp
 84e2df6:	8b 45 10             	mov    0x10(%ebp),%eax
 84e2df9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e2dfc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e2dff:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84e2e03:	3c 01                	cmp    $0x1,%al
 84e2e05:	75 65                	jne    84e2e6c <_ZN32Inter_MonitorRegistGameServerAck12dispatch_sigEP5CUserPci+0x7e>
 84e2e07:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e2e0a:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84e2e0e:	0f b6 f0             	movzbl %al,%esi
 84e2e11:	e8 6b 93 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2e16:	8b 98 b0 01 00 00    	mov    0x1b0(%eax),%ebx
 84e2e1c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84e2e23:	00 
 84e2e24:	c7 44 24 08 08 53 00 	movl   $0x5308,0x8(%esp)
 84e2e2b:	00 
 84e2e2c:	c7 44 24 04 60 b8 c8 	movl   $0x8c8b860,0x4(%esp)
 84e2e33:	08 
 84e2e34:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84e2e37:	89 04 24             	mov    %eax,(%esp)
 84e2e3a:	e8 d9 c8 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e2e3f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e2e43:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e2e47:	c7 44 24 04 7c 9f c8 	movl   $0x8c89f7c,0x4(%esp)
 84e2e4e:	08 
 84e2e4f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84e2e52:	89 04 24             	mov    %eax,(%esp)
 84e2e55:	e8 2e c9 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e2e5a:	e8 5c 41 dc ff       	call   82a6fbb <_Z25GetInstanceShutdowManagerv>
 84e2e5f:	89 04 24             	mov    %eax,(%esp)
 84e2e62:	e8 3f 07 dc ff       	call   82a35a6 <_ZN15CShutdowManager18SendShutdownSignalEv>
 84e2e67:	e9 a6 00 00 00       	jmp    84e2f12 <_ZN32Inter_MonitorRegistGameServerAck12dispatch_sigEP5CUserPci+0x124>
 84e2e6c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e2e6f:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84e2e73:	0f b6 c0             	movzbl %al,%eax
 84e2e76:	85 c0                	test   %eax,%eax
 84e2e78:	74 0a                	je     84e2e84 <_ZN32Inter_MonitorRegistGameServerAck12dispatch_sigEP5CUserPci+0x96>
 84e2e7a:	83 f8 01             	cmp    $0x1,%eax
 84e2e7d:	74 4d                	je     84e2ecc <_ZN32Inter_MonitorRegistGameServerAck12dispatch_sigEP5CUserPci+0xde>
 84e2e7f:	e9 8e 00 00 00       	jmp    84e2f12 <_ZN32Inter_MonitorRegistGameServerAck12dispatch_sigEP5CUserPci+0x124>
 84e2e84:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 84e2e8b:	00 
 84e2e8c:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 84e2e93:	00 
 84e2e94:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 84e2e9b:	00 
 84e2e9c:	c7 44 24 08 12 53 00 	movl   $0x5312,0x8(%esp)
 84e2ea3:	00 
 84e2ea4:	c7 44 24 04 60 b8 c8 	movl   $0x8c8b860,0x4(%esp)
 84e2eab:	08 
 84e2eac:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84e2eaf:	89 04 24             	mov    %eax,(%esp)
 84e2eb2:	e8 8f c8 06 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 84e2eb7:	c7 44 24 04 c9 9f c8 	movl   $0x8c89fc9,0x4(%esp)
 84e2ebe:	08 
 84e2ebf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84e2ec2:	89 04 24             	mov    %eax,(%esp)
 84e2ec5:	e8 be c8 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e2eca:	eb 46                	jmp    84e2f12 <_ZN32Inter_MonitorRegistGameServerAck12dispatch_sigEP5CUserPci+0x124>
 84e2ecc:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 84e2ed3:	00 
 84e2ed4:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 84e2edb:	00 
 84e2edc:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 84e2ee3:	00 
 84e2ee4:	c7 44 24 08 17 53 00 	movl   $0x5317,0x8(%esp)
 84e2eeb:	00 
 84e2eec:	c7 44 24 04 60 b8 c8 	movl   $0x8c8b860,0x4(%esp)
 84e2ef3:	08 
 84e2ef4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e2ef7:	89 04 24             	mov    %eax,(%esp)
 84e2efa:	e8 47 c8 06 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 84e2eff:	c7 44 24 04 e6 9f c8 	movl   $0x8c89fe6,0x4(%esp)
 84e2f06:	08 
 84e2f07:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e2f0a:	89 04 24             	mov    %eax,(%esp)
 84e2f0d:	e8 76 c8 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e2f12:	b8 00 00 00 00       	mov    $0x0,%eax
 84e2f17:	83 c4 60             	add    $0x60,%esp
 84e2f1a:	5b                   	pop    %ebx
 84e2f1b:	5e                   	pop    %esi
 84e2f1c:	5d                   	pop    %ebp
 84e2f1d:	c3                   	ret

```

```c
// Inter_MonitorRegistGameServerAck::dispatch_sig @ 0x84e2dee

/* Inter_MonitorRegistGameServerAck::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorRegistGameServerAck::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  int local_10;
  
  local_10 = param_3;
  if (*(char *)(param_3 + 0xb) == '\x01') {
    bVar1 = *(byte *)(param_3 + 10);
    iVar3 = G_CEnvironment();
    uVar2 = *(undefined4 *)(iVar3 + 0x1b0);
    cMyTrace::cMyTrace(local_40,
                       "virtual int Inter_MonitorRegistGameServerAck::dispatch_sig(CUser*, char*, int)"
                       ,0x5308,5);
    cMyTrace::operator()
              (local_40,
               "Channel NO %d is already registerd(server type : %d). use another channel NO",uVar2,
               (uint)bVar1);
    GetInstanceShutdowManager();
    CShutdowManager::SendShutdownSignal();
  }
  else if (*(char *)(param_3 + 10) == '\0') {
    cMyTrace::cMyTrace(local_30,
                       "virtual int Inter_MonitorRegistGameServerAck::dispatch_sig(CUser*, char*, int)"
                       ,0x5312,9,true,true);
    cMyTrace::operator()(local_30,"[!] Monitor Server Connected");
  }
  else if (*(char *)(param_3 + 10) == '\x01') {
    cMyTrace::cMyTrace(local_20,
                       "virtual int Inter_MonitorRegistGameServerAck::dispatch_sig(CUser*, char*, int)"
                       ,0x5317,9,true,true);
    cMyTrace::operator()(local_20,"[!] Guild Server Connected");
  }
  return 0;
}

```

