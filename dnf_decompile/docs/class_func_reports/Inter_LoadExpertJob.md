# Inter_LoadExpertJob

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084db200 Inter_LoadExpertJob::dispatch_sig  [0x084db200-0x84db293] ===
 84db200:	55                   	push   %ebp
 84db201:	89 e5                	mov    %esp,%ebp
 84db203:	83 ec 18             	sub    $0x18,%esp
 84db206:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db209:	89 04 24             	mov    %eax,(%esp)
 84db20c:	e8 7b f1 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84db211:	83 f8 01             	cmp    $0x1,%eax
 84db214:	0f 9e c0             	setle  %al
 84db217:	84 c0                	test   %al,%al
 84db219:	74 07                	je     84db222 <_ZN19Inter_LoadExpertJob12dispatch_sigEP5CUserPci+0x22>
 84db21b:	b8 00 00 00 00       	mov    $0x0,%eax
 84db220:	eb 6f                	jmp    84db291 <_ZN19Inter_LoadExpertJob12dispatch_sigEP5CUserPci+0x91>
 84db222:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db225:	89 04 24             	mov    %eax,(%esp)
 84db228:	e8 05 52 c4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84db22d:	85 c0                	test   %eax,%eax
 84db22f:	0f 94 c0             	sete   %al
 84db232:	84 c0                	test   %al,%al
 84db234:	74 07                	je     84db23d <_ZN19Inter_LoadExpertJob12dispatch_sigEP5CUserPci+0x3d>
 84db236:	b8 00 00 00 00       	mov    $0x0,%eax
 84db23b:	eb 54                	jmp    84db291 <_ZN19Inter_LoadExpertJob12dispatch_sigEP5CUserPci+0x91>
 84db23d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84db244:	00 
 84db245:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db248:	89 04 24             	mov    %eax,(%esp)
 84db24b:	e8 34 23 c0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84db250:	8b 10                	mov    (%eax),%edx
 84db252:	83 c2 04             	add    $0x4,%edx
 84db255:	8b 0a                	mov    (%edx),%ecx
 84db257:	8b 55 10             	mov    0x10(%ebp),%edx
 84db25a:	89 54 24 08          	mov    %edx,0x8(%esp)
 84db25e:	8b 55 0c             	mov    0xc(%ebp),%edx
 84db261:	89 54 24 04          	mov    %edx,0x4(%esp)
 84db265:	89 04 24             	mov    %eax,(%esp)
 84db268:	ff d1                	call   *%ecx
 84db26a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84db271:	00 
 84db272:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db275:	89 04 24             	mov    %eax,(%esp)
 84db278:	e8 07 23 c0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84db27d:	8b 55 0c             	mov    0xc(%ebp),%edx
 84db280:	89 54 24 04          	mov    %edx,0x4(%esp)
 84db284:	89 04 24             	mov    %eax,(%esp)
 84db287:	e8 c8 01 e5 ff       	call   832b454 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser>
 84db28c:	b8 00 00 00 00       	mov    $0x0,%eax
 84db291:	c9                   	leave
 84db292:	c3                   	ret
 84db293:	90                   	nop

```

```c
// Inter_LoadExpertJob::dispatch_sig @ 0x84db200

/* Inter_LoadExpertJob::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadExpertJob::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  CCharacExpertJob *this;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((1 < iVar1) &&
     (iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar1 != 0)) {
    piVar2 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0);
    (**(code **)(*piVar2 + 4))(piVar2,param_2,param_3);
    this = (CCharacExpertJob *)CUser::GetCharacExpandData((CUser *)param_2,0);
    expert_job::CCharacExpertJob::SendExpertJobInfo(this,(CUser *)param_2);
  }
  return 0;
}

```

