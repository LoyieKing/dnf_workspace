# DisPatcher_PvpHeartBeat

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08204458 DisPatcher_PvpHeartBeat::dispatch_sig  [0x08204458-0x82044af] ===
 8204458:	55                   	push   %ebp
 8204459:	89 e5                	mov    %esp,%ebp
 820445b:	83 ec 18             	sub    $0x18,%esp
 820445e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204461:	89 04 24             	mov    %eax,(%esp)
 8204464:	e8 23 5f ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8204469:	83 f8 01             	cmp    $0x1,%eax
 820446c:	7e 0f                	jle    820447d <_ZN23DisPatcher_PvpHeartBeat12dispatch_sigEP5CUserR9PacketBuf+0x25>
 820446e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204471:	89 04 24             	mov    %eax,(%esp)
 8204474:	e8 b9 bf f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8204479:	85 c0                	test   %eax,%eax
 820447b:	75 07                	jne    8204484 <_ZN23DisPatcher_PvpHeartBeat12dispatch_sigEP5CUserR9PacketBuf+0x2c>
 820447d:	b8 01 00 00 00       	mov    $0x1,%eax
 8204482:	eb 05                	jmp    8204489 <_ZN23DisPatcher_PvpHeartBeat12dispatch_sigEP5CUserR9PacketBuf+0x31>
 8204484:	b8 00 00 00 00       	mov    $0x0,%eax
 8204489:	84 c0                	test   %al,%al
 820448b:	74 07                	je     8204494 <_ZN23DisPatcher_PvpHeartBeat12dispatch_sigEP5CUserR9PacketBuf+0x3c>
 820448d:	b8 00 00 00 00       	mov    $0x0,%eax
 8204492:	eb 19                	jmp    82044ad <_ZN23DisPatcher_PvpHeartBeat12dispatch_sigEP5CUserR9PacketBuf+0x55>
 8204494:	e8 46 04 03 00       	call   82348df <_ZN19disconnect_detecter29GetInstanceDisconnectDetecterEv>
 8204499:	8b 55 0c             	mov    0xc(%ebp),%edx
 820449c:	89 54 24 04          	mov    %edx,0x4(%esp)
 82044a0:	89 04 24             	mov    %eax,(%esp)
 82044a3:	e8 60 df 26 00       	call   8472408 <_ZN19disconnect_detecter19CDisconnectDetecter15RefreshRecvTimeEP5CUser>
 82044a8:	b8 00 00 00 00       	mov    $0x0,%eax
 82044ad:	c9                   	leave
 82044ae:	c3                   	ret
 82044af:	90                   	nop

```

```c
// DisPatcher_PvpHeartBeat::dispatch_sig @ 0x8204458

/* DisPatcher_PvpHeartBeat::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DisPatcher_PvpHeartBeat::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  CDisconnectDetecter *this;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((iVar2 < 2) ||
     (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar2 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    this = (CDisconnectDetecter *)disconnect_detecter::GetInstanceDisconnectDetecter();
    disconnect_detecter::CDisconnectDetecter::RefreshRecvTime(this,(CUser *)param_2);
  }
  return 0;
}

```

