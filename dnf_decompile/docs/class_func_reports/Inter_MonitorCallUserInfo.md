# Inter_MonitorCallUserInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c89b2 Inter_MonitorCallUserInfo::dispatch_sig  [0x084c89b2-0x84c8a6f] ===
 84c89b2:	55                   	push   %ebp
 84c89b3:	89 e5                	mov    %esp,%ebp
 84c89b5:	53                   	push   %ebx
 84c89b6:	83 ec 44             	sub    $0x44,%esp
 84c89b9:	e8 d0 37 c0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 84c89be:	85 c0                	test   %eax,%eax
 84c89c0:	0f 94 c0             	sete   %al
 84c89c3:	84 c0                	test   %al,%al
 84c89c5:	74 38                	je     84c89ff <_ZN25Inter_MonitorCallUserInfo12dispatch_sigEP5CUserPci+0x4d>
 84c89c7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84c89ce:	00 
 84c89cf:	c7 44 24 08 20 22 00 	movl   $0x2220,0x8(%esp)
 84c89d6:	00 
 84c89d7:	c7 44 24 04 c0 dd c8 	movl   $0x8c8ddc0,0x4(%esp)
 84c89de:	08 
 84c89df:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c89e2:	89 04 24             	mov    %eax,(%esp)
 84c89e5:	e8 2e 6d 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c89ea:	c7 44 24 04 10 78 c8 	movl   $0x8c87810,0x4(%esp)
 84c89f1:	08 
 84c89f2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c89f5:	89 04 24             	mov    %eax,(%esp)
 84c89f8:	e8 8b 6d 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c89fd:	eb 65                	jmp    84c8a64 <_ZN25Inter_MonitorCallUserInfo12dispatch_sigEP5CUserPci+0xb2>
 84c89ff:	8b 45 10             	mov    0x10(%ebp),%eax
 84c8a02:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c8a05:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c8a08:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84c8a0c:	0f b6 d8             	movzbl %al,%ebx
 84c8a0f:	e8 7a 37 c0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 84c8a14:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c8a18:	89 04 24             	mov    %eax,(%esp)
 84c8a1b:	e8 9e d7 dc ff       	call   82961be <_ZN12CGameManager30Send_userinfos_to_upper_serverEh>
 84c8a20:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c8a23:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84c8a27:	0f b6 d8             	movzbl %al,%ebx
 84c8a2a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c8a31:	00 
 84c8a32:	c7 44 24 08 30 22 00 	movl   $0x2230,0x8(%esp)
 84c8a39:	00 
 84c8a3a:	c7 44 24 04 c0 dd c8 	movl   $0x8c8ddc0,0x4(%esp)
 84c8a41:	08 
 84c8a42:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c8a45:	89 04 24             	mov    %eax,(%esp)
 84c8a48:	e8 cb 6c 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c8a4d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c8a51:	c7 44 24 04 54 78 c8 	movl   $0x8c87854,0x4(%esp)
 84c8a58:	08 
 84c8a59:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c8a5c:	89 04 24             	mov    %eax,(%esp)
 84c8a5f:	e8 24 6d 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c8a64:	b8 00 00 00 00       	mov    $0x0,%eax
 84c8a69:	83 c4 44             	add    $0x44,%esp
 84c8a6c:	5b                   	pop    %ebx
 84c8a6d:	5d                   	pop    %ebp
 84c8a6e:	c3                   	ret
 84c8a6f:	90                   	nop

```

```c
// Inter_MonitorCallUserInfo::dispatch_sig @ 0x84c89b2

/* Inter_MonitorCallUserInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorCallUserInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uchar uVar1;
  byte bVar2;
  int iVar3;
  CGameManager *this;
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  int local_10;
  
  iVar3 = G_CGameManager();
  if (iVar3 == 0) {
    cMyTrace::cMyTrace(local_30,
                       "virtual int Inter_MonitorCallUserInfo::dispatch_sig(CUser*, char*, int)",
                       0x2220,5);
    cMyTrace::operator()
              (local_30,"Inter_MonitorCallUserInfo::dispatch_sig()  G_CGameManager() is null");
  }
  else {
    local_10 = param_3;
    uVar1 = *(uchar *)(param_3 + 10);
    this = (CGameManager *)G_CGameManager();
    CGameManager::Send_userinfos_to_upper_server(this,uVar1);
    bVar2 = *(byte *)(local_10 + 10);
    cMyTrace::cMyTrace(local_20,
                       "virtual int Inter_MonitorCallUserInfo::dispatch_sig(CUser*, char*, int)",
                       0x2230,0);
    cMyTrace::operator()(local_20,"%d Server Call UserInfo Arrived\n",(uint)bVar2);
  }
  return 0;
}

```

