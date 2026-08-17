# Dispatcher_ReportAbuseUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821ef48 Dispatcher_ReportAbuseUser::dispatch_sig  [0x0821ef48-0x821efeb] ===
 821ef48:	55                   	push   %ebp
 821ef49:	89 e5                	mov    %esp,%ebp
 821ef4b:	83 ec 18             	sub    $0x18,%esp
 821ef4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ef51:	89 04 24             	mov    %eax,(%esp)
 821ef54:	e8 33 b4 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821ef59:	83 f8 02             	cmp    $0x2,%eax
 821ef5c:	7e 0f                	jle    821ef6d <_ZN26Dispatcher_ReportAbuseUser12dispatch_sigEP5CUserR9PacketBuf+0x25>
 821ef5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ef61:	89 04 24             	mov    %eax,(%esp)
 821ef64:	e8 c9 14 f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 821ef69:	85 c0                	test   %eax,%eax
 821ef6b:	75 07                	jne    821ef74 <_ZN26Dispatcher_ReportAbuseUser12dispatch_sigEP5CUserR9PacketBuf+0x2c>
 821ef6d:	b8 01 00 00 00       	mov    $0x1,%eax
 821ef72:	eb 05                	jmp    821ef79 <_ZN26Dispatcher_ReportAbuseUser12dispatch_sigEP5CUserR9PacketBuf+0x31>
 821ef74:	b8 00 00 00 00       	mov    $0x0,%eax
 821ef79:	84 c0                	test   %al,%al
 821ef7b:	74 26                	je     821efa3 <_ZN26Dispatcher_ReportAbuseUser12dispatch_sigEP5CUserR9PacketBuf+0x5b>
 821ef7d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821ef84:	00 
 821ef85:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ef8c:	00 
 821ef8d:	c7 44 24 04 a0 d0 bc 	movl   $0x8bcd0a0,0x4(%esp)
 821ef94:	08 
 821ef95:	c7 04 24 a1 d7 00 00 	movl   $0xd7a1,(%esp)
 821ef9c:	e8 36 19 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821efa1:	eb 46                	jmp    821efe9 <_ZN26Dispatcher_ReportAbuseUser12dispatch_sigEP5CUserR9PacketBuf+0xa1>
 821efa3:	e8 f8 60 01 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 821efa8:	8b 55 0c             	mov    0xc(%ebp),%edx
 821efab:	89 54 24 04          	mov    %edx,0x4(%esp)
 821efaf:	89 04 24             	mov    %eax,(%esp)
 821efb2:	e8 9d 0c 0d 00       	call   82efc54 <_ZN11pvp_assault11CAssaultMgr11OnAbuseUserEP5CUser>
 821efb7:	83 f0 01             	xor    $0x1,%eax
 821efba:	84 c0                	test   %al,%al
 821efbc:	74 26                	je     821efe4 <_ZN26Dispatcher_ReportAbuseUser12dispatch_sigEP5CUserR9PacketBuf+0x9c>
 821efbe:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821efc5:	00 
 821efc6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821efcd:	00 
 821efce:	c7 44 24 04 a0 d0 bc 	movl   $0x8bcd0a0,0x4(%esp)
 821efd5:	08 
 821efd6:	c7 04 24 b1 d7 00 00 	movl   $0xd7b1,(%esp)
 821efdd:	e8 f5 18 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821efe2:	eb 05                	jmp    821efe9 <_ZN26Dispatcher_ReportAbuseUser12dispatch_sigEP5CUserR9PacketBuf+0xa1>
 821efe4:	b8 00 00 00 00       	mov    $0x0,%eax
 821efe9:	c9                   	leave
 821efea:	c3                   	ret
 821efeb:	90                   	nop

```

```c
// Dispatcher_ReportAbuseUser::dispatch_sig @ 0x821ef48

/* Dispatcher_ReportAbuseUser::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_ReportAbuseUser::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CAssaultMgr *this;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (2 < iVar3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_0821ef79;
    }
  }
  bVar1 = true;
LAB_0821ef79:
  if (bVar1) {
    uVar4 = LineFunc(0xd7a1,
                     "virtual int Dispatcher_ReportAbuseUser::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  else {
    this = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    cVar2 = pvp_assault::CAssaultMgr::OnAbuseUser(this,(CUser *)param_2);
    if (cVar2 == '\x01') {
      uVar4 = 0;
    }
    else {
      uVar4 = LineFunc(0xd7b1,
                       "virtual int Dispatcher_ReportAbuseUser::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  return uVar4;
}

```

