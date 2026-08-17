# TimerSaveLogGamechannel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08635a2c TimerSaveLogGamechannel::dispatch_sig  [0x08635a2c-0x8635a5f] ===
 8635a2c:	55                   	push   %ebp
 8635a2d:	89 e5                	mov    %esp,%ebp
 8635a2f:	83 ec 18             	sub    $0x18,%esp
 8635a32:	a1 40 f7 41 09       	mov    0x941f740,%eax
 8635a37:	89 04 24             	mov    %eax,(%esp)
 8635a3a:	e8 17 aa f1 ff       	call   8550456 <_ZN8WongWork15CLogGameChannel10ReqSaveLogEv>
 8635a3f:	a1 40 f7 41 09       	mov    0x941f740,%eax
 8635a44:	89 04 24             	mov    %eax,(%esp)
 8635a47:	e8 7a ac f1 ff       	call   85506c6 <_ZN8WongWork15CLogGameChannel14ResetInOutUserEv>
 8635a4c:	a1 40 f7 41 09       	mov    0x941f740,%eax
 8635a51:	89 04 24             	mov    %eax,(%esp)
 8635a54:	e8 a5 a9 f1 ff       	call   85503fe <_ZN8WongWork15CLogGameChannel15SetNextLogTimerEv>
 8635a59:	b8 01 00 00 00       	mov    $0x1,%eax
 8635a5e:	c9                   	leave
 8635a5f:	c3                   	ret

```

```c
// TimerSaveLogGamechannel::dispatch_sig @ 0x8635a2c

/* TimerSaveLogGamechannel::dispatch_sig(int, int, unsigned int) */

undefined4 TimerSaveLogGamechannel::dispatch_sig(int param_1,int param_2,uint param_3)

{
  WongWork::CLogGameChannel::ReqSaveLog(GlobalData::s_pLogGameChannel);
  WongWork::CLogGameChannel::ResetInOutUser(GlobalData::s_pLogGameChannel);
  WongWork::CLogGameChannel::SetNextLogTimer(GlobalData::s_pLogGameChannel);
  return 1;
}

```

