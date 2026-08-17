# Inter_SetFactoryHubUserNotConn

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dd0c4 Inter_SetFactoryHubUserNotConn::dispatch_sig  [0x084dd0c4-0x84dd12d] ===
 84dd0c4:	55                   	push   %ebp
 84dd0c5:	89 e5                	mov    %esp,%ebp
 84dd0c7:	53                   	push   %ebx
 84dd0c8:	83 ec 34             	sub    $0x34,%esp
 84dd0cb:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84dd0cf:	74 51                	je     84dd122 <_ZN30Inter_SetFactoryHubUserNotConn12dispatch_sigEP5CUserPci+0x5e>
 84dd0d1:	8b 45 10             	mov    0x10(%ebp),%eax
 84dd0d4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84dd0d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd0da:	89 04 24             	mov    %eax,(%esp)
 84dd0dd:	e8 78 c8 c1 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 84dd0e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd0e5:	89 04 24             	mov    %eax,(%esp)
 84dd0e8:	e8 81 d2 bf ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84dd0ed:	89 c3                	mov    %eax,%ebx
 84dd0ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dd0f2:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84dd0f6:	0f b7 c8             	movzwl %ax,%ecx
 84dd0f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dd0fc:	8b 40 04             	mov    0x4(%eax),%eax
 84dd0ff:	89 c2                	mov    %eax,%edx
 84dd101:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dd104:	8b 00                	mov    (%eax),%eax
 84dd106:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 84dd10d:	00 
 84dd10e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84dd112:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84dd116:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dd11a:	89 04 24             	mov    %eax,(%esp)
 84dd11d:	e8 40 be c1 ff       	call   80f8f62 <_ZN8WongWork13CHackAnalyzer17ReqDBSaveHackInfoEjjtii>
 84dd122:	b8 00 00 00 00       	mov    $0x0,%eax
 84dd127:	83 c4 34             	add    $0x34,%esp
 84dd12a:	5b                   	pop    %ebx
 84dd12b:	5d                   	pop    %ebp
 84dd12c:	c3                   	ret
 84dd12d:	90                   	nop

```

```c
// Inter_SetFactoryHubUserNotConn::dispatch_sig @ 0x84dd0c4

/* Inter_SetFactoryHubUserNotConn::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SetFactoryHubUserNotConn::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != (char *)0x0) {
    CUser::getHackAnalyzer((CUser *)param_2);
    iVar1 = CUser::get_acc_id((CUser *)param_2);
    WongWork::CHackAnalyzer::ReqDBSaveHackInfo
              (*(uint *)param_3,*(uint *)(param_3 + 4),*(ushort *)(param_3 + 8),iVar1,1);
  }
  return 0;
}

```

