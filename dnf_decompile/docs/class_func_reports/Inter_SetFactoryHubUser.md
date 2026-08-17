# Inter_SetFactoryHubUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dcfec Inter_SetFactoryHubUser::dispatch_sig  [0x084dcfec-0x84dd0c3] ===
 84dcfec:	55                   	push   %ebp
 84dcfed:	89 e5                	mov    %esp,%ebp
 84dcfef:	56                   	push   %esi
 84dcff0:	53                   	push   %ebx
 84dcff1:	83 ec 50             	sub    $0x50,%esp
 84dcff4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84dcff8:	0f 84 b9 00 00 00    	je     84dd0b7 <_ZN23Inter_SetFactoryHubUser12dispatch_sigEP5CUserPci+0xcb>
 84dcffe:	8b 45 10             	mov    0x10(%ebp),%eax
 84dd001:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84dd004:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dd007:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 84dd00b:	84 c0                	test   %al,%al
 84dd00d:	74 63                	je     84dd072 <_ZN23Inter_SetFactoryHubUser12dispatch_sigEP5CUserPci+0x86>
 84dd00f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dd012:	8b 40 30             	mov    0x30(%eax),%eax
 84dd015:	89 c2                	mov    %eax,%edx
 84dd017:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dd01a:	0f b7 40 2e          	movzwl 0x2e(%eax),%eax
 84dd01e:	98                   	cwtl
 84dd01f:	89 54 24 08          	mov    %edx,0x8(%esp)
 84dd023:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd027:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd02a:	89 04 24             	mov    %eax,(%esp)
 84dd02d:	e8 36 c9 c1 ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 84dd032:	89 c6                	mov    %eax,%esi
 84dd034:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dd037:	0f b7 40 2e          	movzwl 0x2e(%eax),%eax
 84dd03b:	0f b7 d8             	movzwl %ax,%ebx
 84dd03e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd041:	89 04 24             	mov    %eax,(%esp)
 84dd044:	e8 11 c9 c1 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 84dd049:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84dd050:	00 
 84dd051:	89 74 24 10          	mov    %esi,0x10(%esp)
 84dd055:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84dd05c:	00 
 84dd05d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84dd061:	8b 55 0c             	mov    0xc(%ebp),%edx
 84dd064:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dd068:	89 04 24             	mov    %eax,(%esp)
 84dd06b:	e8 0e bc c1 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 84dd070:	eb 45                	jmp    84dd0b7 <_ZN23Inter_SetFactoryHubUser12dispatch_sigEP5CUserPci+0xcb>
 84dd072:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dd075:	83 c0 0f             	add    $0xf,%eax
 84dd078:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 84dd07f:	00 
 84dd080:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd084:	8d 45 d7             	lea    -0x29(%ebp),%eax
 84dd087:	89 04 24             	mov    %eax,(%esp)
 84dd08a:	e8 41 08 ba ff       	call   807d8d0 <strncpy@plt>
 84dd08f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dd092:	0f b7 40 2e          	movzwl 0x2e(%eax),%eax
 84dd096:	0f b7 d8             	movzwl %ax,%ebx
 84dd099:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd09c:	89 04 24             	mov    %eax,(%esp)
 84dd09f:	e8 f2 bb be ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84dd0a4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84dd0a8:	8d 55 d7             	lea    -0x29(%ebp),%edx
 84dd0ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dd0af:	89 04 24             	mov    %eax,(%esp)
 84dd0b2:	e8 99 ab f5 ff       	call   8437c50 <_ZN24DB_Find_Factory_Hub_User11makeRequestEjPct>
 84dd0b7:	b8 00 00 00 00       	mov    $0x0,%eax
 84dd0bc:	83 c4 50             	add    $0x50,%esp
 84dd0bf:	5b                   	pop    %ebx
 84dd0c0:	5e                   	pop    %esi
 84dd0c1:	5d                   	pop    %ebp
 84dd0c2:	c3                   	ret
 84dd0c3:	90                   	nop

```

```c
// Inter_SetFactoryHubUser::dispatch_sig @ 0x84dcfec

/* Inter_SetFactoryHubUser::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SetFactoryHubUser::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  CHackAnalyzer *pCVar4;
  uint uVar5;
  char local_2d [29];
  int local_10;
  
  if (param_2 != (char *)0x0) {
    local_10 = param_3;
    if (*(char *)(param_3 + 0x2d) == '\0') {
      strncpy(local_2d,(char *)(param_3 + 0xf),0x1d);
      uVar2 = *(ushort *)(local_10 + 0x2e);
      uVar5 = CUser::GetUID((CUser *)param_2);
      DB_Find_Factory_Hub_User::makeRequest(uVar5,local_2d,uVar2);
    }
    else {
      uVar3 = CUser::SetETC((CUser *)param_2,*(short *)(param_3 + 0x2e),*(int *)(param_3 + 0x30));
      uVar1 = *(undefined2 *)(local_10 + 0x2e);
      pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_2,uVar1,1,uVar3,0);
    }
  }
  return 0;
}

```

