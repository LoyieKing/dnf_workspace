# Inter_NoCache

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e3082 Inter_NoCache::dispatch_sig  [0x084e3082-0x84e3129] ===
 84e3082:	55                   	push   %ebp
 84e3083:	89 e5                	mov    %esp,%ebp
 84e3085:	56                   	push   %esi
 84e3086:	53                   	push   %ebx
 84e3087:	83 ec 20             	sub    $0x20,%esp
 84e308a:	8b 45 10             	mov    0x10(%ebp),%eax
 84e308d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e3090:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3093:	8b 40 12             	mov    0x12(%eax),%eax
 84e3096:	85 c0                	test   %eax,%eax
 84e3098:	74 0b                	je     84e30a5 <_ZN13Inter_NoCache12dispatch_sigEP5CUserPci+0x23>
 84e309a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e309d:	8b 40 12             	mov    0x12(%eax),%eax
 84e30a0:	83 f8 01             	cmp    $0x1,%eax
 84e30a3:	75 30                	jne    84e30d5 <_ZN13Inter_NoCache12dispatch_sigEP5CUserPci+0x53>
 84e30a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e30a8:	8b 40 0a             	mov    0xa(%eax),%eax
 84e30ab:	85 c0                	test   %eax,%eax
 84e30ad:	75 0f                	jne    84e30be <_ZN13Inter_NoCache12dispatch_sigEP5CUserPci+0x3c>
 84e30af:	e8 f3 72 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e30b4:	89 04 24             	mov    %eax,(%esp)
 84e30b7:	e8 c8 c5 1e 00       	call   86cf684 <_ZN9GameWorld25ResetCacheCharactorMemoryEv>
 84e30bc:	eb 17                	jmp    84e30d5 <_ZN13Inter_NoCache12dispatch_sigEP5CUserPci+0x53>
 84e30be:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e30c1:	8b 58 0a             	mov    0xa(%eax),%ebx
 84e30c4:	e8 de 72 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e30c9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e30cd:	89 04 24             	mov    %eax,(%esp)
 84e30d0:	e8 71 c6 1e 00       	call   86cf746 <_ZN9GameWorld25ResetCacheCharactorMemoryEj>
 84e30d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e30d8:	8b 40 12             	mov    0x12(%eax),%eax
 84e30db:	85 c0                	test   %eax,%eax
 84e30dd:	74 0b                	je     84e30ea <_ZN13Inter_NoCache12dispatch_sigEP5CUserPci+0x68>
 84e30df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e30e2:	8b 40 12             	mov    0x12(%eax),%eax
 84e30e5:	83 f8 02             	cmp    $0x2,%eax
 84e30e8:	75 34                	jne    84e311e <_ZN13Inter_NoCache12dispatch_sigEP5CUserPci+0x9c>
 84e30ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e30ed:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84e30f1:	0f b7 f0             	movzwl %ax,%esi
 84e30f4:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 84e30f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e30fa:	8b 50 0e             	mov    0xe(%eax),%edx
 84e30fd:	a1 28 be 40 09       	mov    0x940be28,%eax
 84e3102:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e3106:	89 04 24             	mov    %eax,(%esp)
 84e3109:	e8 7c ef c2 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84e310e:	89 74 24 08          	mov    %esi,0x8(%esp)
 84e3112:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e3116:	89 04 24             	mov    %eax,(%esp)
 84e3119:	e8 d6 dc f8 ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 84e311e:	b8 00 00 00 00       	mov    $0x0,%eax
 84e3123:	83 c4 20             	add    $0x20,%esp
 84e3126:	5b                   	pop    %ebx
 84e3127:	5e                   	pop    %esi
 84e3128:	5d                   	pop    %ebp
 84e3129:	c3                   	ret

```

```c
// Inter_NoCache::dispatch_sig @ 0x84e3082

/* Inter_NoCache::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoCache::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  CMonitorServerProxy *this;
  
  if ((*(int *)(param_3 + 0x12) == 0) || (*(int *)(param_3 + 0x12) == 1)) {
    if (*(int *)(param_3 + 10) == 0) {
      G_GameWorld();
      GameWorld::ResetCacheCharactorMemory();
    }
    else {
      uVar2 = G_GameWorld();
      GameWorld::ResetCacheCharactorMemory(uVar2);
    }
  }
  if ((*(int *)(param_3 + 0x12) == 0) || (*(int *)(param_3 + 0x12) == 2)) {
    uVar1 = *(ushort *)(param_3 + 2);
    this = (CMonitorServerProxy *)
           CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                     (GlobalData::s_monitor_proxy_mgr,*(undefined4 *)(param_3 + 0xe));
    CMonitorServerProxy::SendPacket(this,(char *)param_3,(uint)uVar1);
  }
  return 0;
}

```

