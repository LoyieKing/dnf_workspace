# Inter_NoticeGuildNameOnGuildCreate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d39ae Inter_NoticeGuildNameOnGuildCreate::dispatch_sig  [0x084d39ae-0x84d3a21] ===
 84d39ae:	55                   	push   %ebp
 84d39af:	89 e5                	mov    %esp,%ebp
 84d39b1:	53                   	push   %ebx
 84d39b2:	83 ec 34             	sub    $0x34,%esp
 84d39b5:	8b 45 10             	mov    0x10(%ebp),%eax
 84d39b8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d39bb:	8d 45 da             	lea    -0x26(%ebp),%eax
 84d39be:	89 04 24             	mov    %eax,(%esp)
 84d39c1:	e8 18 0b d6 ff       	call   82344de <_ZN12STGuildProxyC1Ev>
 84d39c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d39c9:	83 c0 16             	add    $0x16,%eax
 84d39cc:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 84d39d3:	00 
 84d39d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d39d8:	8d 45 da             	lea    -0x26(%ebp),%eax
 84d39db:	89 04 24             	mov    %eax,(%esp)
 84d39de:	e8 bd 9e ba ff       	call   807d8a0 <memcpy@plt>
 84d39e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d39e6:	8b 58 12             	mov    0x12(%eax),%ebx
 84d39e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d39ec:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 84d39f0:	0f b6 d0             	movzbl %al,%edx
 84d39f3:	a1 2c be 40 09       	mov    0x940be2c,%eax
 84d39f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d39fc:	89 04 24             	mov    %eax,(%esp)
 84d39ff:	e8 b4 99 c4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84d3a04:	8d 55 da             	lea    -0x26(%ebp),%edx
 84d3a07:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d3a0b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d3a0f:	89 04 24             	mov    %eax,(%esp)
 84d3a12:	e8 71 b2 f9 ff       	call   846ec88 <_ZN17CGuildServerProxy20InsertGuildInfoProxyEjR12STGuildProxy>
 84d3a17:	b8 00 00 00 00       	mov    $0x0,%eax
 84d3a1c:	83 c4 34             	add    $0x34,%esp
 84d3a1f:	5b                   	pop    %ebx
 84d3a20:	5d                   	pop    %ebp
 84d3a21:	c3                   	ret

```

```c
// Inter_NoticeGuildNameOnGuildCreate::dispatch_sig @ 0x84d39ae

/* Inter_NoticeGuildNameOnGuildCreate::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_NoticeGuildNameOnGuildCreate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  CGuildServerProxy *this;
  STGuildProxy local_2a [26];
  int local_10;
  
  local_10 = param_3;
  STGuildProxy::STGuildProxy(local_2a);
  memcpy(local_2a,(void *)(local_10 + 0x16),0x16);
  uVar1 = *(uint *)(local_10 + 0x12);
  this = (CGuildServerProxy *)
         CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                   (GlobalData::s_guild_proxy_mgr,*(undefined1 *)(local_10 + 0x2d));
  CGuildServerProxy::InsertGuildInfoProxy(this,uVar1,local_2a);
  return 0;
}

```

