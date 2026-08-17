# Inter_LoadKillMonsterInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e4ee4 Inter_LoadKillMonsterInfo::dispatch_sig  [0x084e4ee4-0x84e4f55] ===
 84e4ee4:	55                   	push   %ebp
 84e4ee5:	89 e5                	mov    %esp,%ebp
 84e4ee7:	83 ec 28             	sub    $0x28,%esp
 84e4eea:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e4eed:	89 04 24             	mov    %eax,(%esp)
 84e4ef0:	e8 97 54 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e4ef5:	85 c0                	test   %eax,%eax
 84e4ef7:	0f 94 c0             	sete   %al
 84e4efa:	84 c0                	test   %al,%al
 84e4efc:	74 07                	je     84e4f05 <_ZN25Inter_LoadKillMonsterInfo12dispatch_sigEP5CUserPci+0x21>
 84e4efe:	b8 48 62 00 00       	mov    $0x6248,%eax
 84e4f03:	eb 4e                	jmp    84e4f53 <_ZN25Inter_LoadKillMonsterInfo12dispatch_sigEP5CUserPci+0x6f>
 84e4f05:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 84e4f0c:	00 
 84e4f0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e4f10:	89 04 24             	mov    %eax,(%esp)
 84e4f13:	e8 6c 86 bf ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84e4f18:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e4f1b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4f1e:	8b 00                	mov    (%eax),%eax
 84e4f20:	83 c0 04             	add    $0x4,%eax
 84e4f23:	8b 10                	mov    (%eax),%edx
 84e4f25:	8b 45 10             	mov    0x10(%ebp),%eax
 84e4f28:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e4f2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e4f2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4f33:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4f36:	89 04 24             	mov    %eax,(%esp)
 84e4f39:	ff d2                	call   *%edx
 84e4f3b:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 84e4f42:	00 
 84e4f43:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e4f46:	89 04 24             	mov    %eax,(%esp)
 84e4f49:	e8 a6 04 c4 ff       	call   81253f4 <_ZN5CUser16EnableCharacInfoE13CACHE_SECTION>
 84e4f4e:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4f53:	c9                   	leave
 84e4f54:	c3                   	ret
 84e4f55:	90                   	nop

```

```c
// Inter_LoadKillMonsterInfo::dispatch_sig @ 0x84e4ee4

/* Inter_LoadKillMonsterInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadKillMonsterInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 0) {
    uVar2 = 0x6248;
  }
  else {
    piVar3 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0xc);
    (**(code **)(*piVar3 + 4))(piVar3,param_2,param_3);
    CUser::EnableCharacInfo((CUser *)param_2,9);
    uVar2 = 0;
  }
  return uVar2;
}

```

