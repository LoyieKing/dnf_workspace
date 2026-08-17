# Dispatcher_GiveupExpertJob

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821eed2 Dispatcher_GiveupExpertJob::dispatch_sig  [0x0821eed2-0x821ef47] ===
 821eed2:	55                   	push   %ebp
 821eed3:	89 e5                	mov    %esp,%ebp
 821eed5:	83 ec 18             	sub    $0x18,%esp
 821eed8:	8b 45 0c             	mov    0xc(%ebp),%eax
 821eedb:	89 04 24             	mov    %eax,(%esp)
 821eede:	e8 a9 b4 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821eee3:	83 f8 02             	cmp    $0x2,%eax
 821eee6:	7e 0f                	jle    821eef7 <_ZN26Dispatcher_GiveupExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x25>
 821eee8:	8b 45 0c             	mov    0xc(%ebp),%eax
 821eeeb:	89 04 24             	mov    %eax,(%esp)
 821eeee:	e8 3f 15 f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 821eef3:	85 c0                	test   %eax,%eax
 821eef5:	75 07                	jne    821eefe <_ZN26Dispatcher_GiveupExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x2c>
 821eef7:	b8 01 00 00 00       	mov    $0x1,%eax
 821eefc:	eb 05                	jmp    821ef03 <_ZN26Dispatcher_GiveupExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x31>
 821eefe:	b8 00 00 00 00       	mov    $0x0,%eax
 821ef03:	84 c0                	test   %al,%al
 821ef05:	74 26                	je     821ef2d <_ZN26Dispatcher_GiveupExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x5b>
 821ef07:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821ef0e:	00 
 821ef0f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ef16:	00 
 821ef17:	c7 44 24 04 00 d1 bc 	movl   $0x8bcd100,0x4(%esp)
 821ef1e:	08 
 821ef1f:	c7 04 24 97 d7 00 00 	movl   $0xd797,(%esp)
 821ef26:	e8 ac 19 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821ef2b:	eb 19                	jmp    821ef46 <_ZN26Dispatcher_GiveupExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x74>
 821ef2d:	a1 68 f7 41 09       	mov    0x941f768,%eax
 821ef32:	8b 55 0c             	mov    0xc(%ebp),%edx
 821ef35:	89 54 24 04          	mov    %edx,0x4(%esp)
 821ef39:	89 04 24             	mov    %eax,(%esp)
 821ef3c:	e8 cb f6 27 00       	call   849e60c <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser>
 821ef41:	b8 00 00 00 00       	mov    $0x0,%eax
 821ef46:	c9                   	leave
 821ef47:	c3                   	ret

```

```c
// Dispatcher_GiveupExpertJob::dispatch_sig @ 0x821eed2

/* Dispatcher_GiveupExpertJob::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_GiveupExpertJob::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_0821ef03;
    }
  }
  bVar1 = true;
LAB_0821ef03:
  if (bVar1) {
    uVar3 = LineFunc(0xd797,
                     "virtual int Dispatcher_GiveupExpertJob::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  else {
    expert_job::CExpertJobMgr::OnGiveup(GlobalData::s_ExpertJobMgr,(CUser *)param_2);
    uVar3 = 0;
  }
  return uVar3;
}

```

