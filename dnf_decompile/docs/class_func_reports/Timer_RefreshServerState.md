# Timer_RefreshServerState

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863b90e Timer_RefreshServerState::dispatch_sig  [0x0863b90e-0x863b927] ===
 863b90e:	55                   	push   %ebp
 863b90f:	89 e5                	mov    %esp,%ebp
 863b911:	83 ec 18             	sub    $0x18,%esp
 863b914:	a1 f0 f7 41 09       	mov    0x941f7f0,%eax
 863b919:	89 04 24             	mov    %eax,(%esp)
 863b91c:	e8 bb dc b6 ff       	call   81a95dc <_ZN4ARAD23Arad_ServerStateManager13checkContinusEv>
 863b921:	b8 01 00 00 00       	mov    $0x1,%eax
 863b926:	c9                   	leave
 863b927:	c3                   	ret

```

```c
// Timer_RefreshServerState::dispatch_sig @ 0x863b90e

/* Timer_RefreshServerState::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_RefreshServerState::dispatch_sig(int param_1,int param_2,uint param_3)

{
  ARAD::Arad_ServerStateManager::checkContinus(GlobalData::s_serverStateManager_);
  return 1;
}

```

