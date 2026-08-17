# Inter_LoadOnlinePreliminaryTeamMatchList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e2790 Inter_LoadOnlinePreliminaryTeamMatchList::dispatch_sig  [0x084e2790-0x84e27b7] ===
 84e2790:	55                   	push   %ebp
 84e2791:	89 e5                	mov    %esp,%ebp
 84e2793:	83 ec 18             	sub    $0x18,%esp
 84e2796:	a1 88 f7 41 09       	mov    0x941f788,%eax
 84e279b:	8b 55 10             	mov    0x10(%ebp),%edx
 84e279e:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e27a2:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e27a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e27a9:	89 04 24             	mov    %eax,(%esp)
 84e27ac:	e8 33 64 0a 00       	call   8588be4 <_ZN18online_preliminary25COnlinePreliminaryTeamMgr14OnLoadTeamInfoEP5CUserPc>
 84e27b1:	b8 00 00 00 00       	mov    $0x0,%eax
 84e27b6:	c9                   	leave
 84e27b7:	c3                   	ret

```

```c
// Inter_LoadOnlinePreliminaryTeamMatchList::dispatch_sig @ 0x84e2790

/* Inter_LoadOnlinePreliminaryTeamMatchList::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_LoadOnlinePreliminaryTeamMatchList::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  online_preliminary::COnlinePreliminaryTeamMgr::OnLoadTeamInfo
            (GlobalData::s_onlinePreliminaryTeamMgr,(CUser *)param_2,(char *)param_3);
  return 0;
}

```

