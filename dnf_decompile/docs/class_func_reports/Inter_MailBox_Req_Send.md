# Inter_MailBox_Req_Send

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d0130 Inter_MailBox_Req_Send::dispatch_sig  [0x084d0130-0x84d017b] ===
 84d0130:	55                   	push   %ebp
 84d0131:	89 e5                	mov    %esp,%ebp
 84d0133:	53                   	push   %ebx
 84d0134:	83 ec 24             	sub    $0x24,%esp
 84d0137:	8b 45 10             	mov    0x10(%ebp),%eax
 84d013a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d013d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0140:	8b 00                	mov    (%eax),%eax
 84d0142:	85 c0                	test   %eax,%eax
 84d0144:	75 2b                	jne    84d0171 <_ZN22Inter_MailBox_Req_Send12dispatch_sigEP5CUserPci+0x41>
 84d0146:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0149:	8b 58 04             	mov    0x4(%eax),%ebx
 84d014c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d014f:	8b 40 08             	mov    0x8(%eax),%eax
 84d0152:	89 c2                	mov    %eax,%edx
 84d0154:	a1 28 be 40 09       	mov    0x940be28,%eax
 84d0159:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d015d:	89 04 24             	mov    %eax,(%esp)
 84d0160:	e8 25 1f c4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84d0165:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d0169:	89 04 24             	mov    %eax,(%esp)
 84d016c:	e8 01 0f fa ff       	call   8471072 <_ZN19CMonitorServerProxy17SendNotifyNewMailEj>
 84d0171:	b8 00 00 00 00       	mov    $0x0,%eax
 84d0176:	83 c4 24             	add    $0x24,%esp
 84d0179:	5b                   	pop    %ebx
 84d017a:	5d                   	pop    %ebp
 84d017b:	c3                   	ret

```

```c
// Inter_MailBox_Req_Send::dispatch_sig @ 0x84d0130

/* Inter_MailBox_Req_Send::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MailBox_Req_Send::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  CMonitorServerProxy *this;
  
  if (*(int *)param_3 == 0) {
    uVar1 = *(uint *)(param_3 + 4);
    this = (CMonitorServerProxy *)
           CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                     (GlobalData::s_monitor_proxy_mgr,*(undefined4 *)(param_3 + 8));
    CMonitorServerProxy::SendNotifyNewMail(this,uVar1);
  }
  return 0;
}

```

