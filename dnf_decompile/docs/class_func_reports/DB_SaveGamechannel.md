# DB_SaveGamechannel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841c428 DB_SaveGamechannel::dispatch  [0x0841c428-0x841c457] ===
 841c428:	55                   	push   %ebp
 841c429:	89 e5                	mov    %esp,%ebp
 841c42b:	83 ec 28             	sub    $0x28,%esp
 841c42e:	8b 45 14             	mov    0x14(%ebp),%eax
 841c431:	89 04 24             	mov    %eax,(%esp)
 841c434:	e8 79 4f 03 00       	call   84513b2 <_ZN6Stream12GetOutBufferI23SIG_SAVE_LOGGAMECHANNELEEPT_v>
 841c439:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841c43c:	a1 40 f7 41 09       	mov    0x941f740,%eax
 841c441:	8b 55 f4             	mov    -0xc(%ebp),%edx
 841c444:	89 54 24 04          	mov    %edx,0x4(%esp)
 841c448:	89 04 24             	mov    %eax,(%esp)
 841c44b:	e8 c2 41 13 00       	call   8550612 <_ZN8WongWork15CLogGameChannel9DoSaveLogEP23SIG_SAVE_LOGGAMECHANNEL>
 841c450:	b8 01 00 00 00       	mov    $0x1,%eax
 841c455:	c9                   	leave
 841c456:	c3                   	ret
 841c457:	90                   	nop

```

```c
// DB_SaveGamechannel::dispatch @ 0x841c428

/* DB_SaveGamechannel::dispatch(int, int, Stream*) */

undefined4 DB_SaveGamechannel::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_SAVE_LOGGAMECHANNEL *pSVar1;
  Stream *in_stack_00000010;
  
  pSVar1 = Stream::GetOutBuffer<SIG_SAVE_LOGGAMECHANNEL>(in_stack_00000010);
  WongWork::CLogGameChannel::DoSaveLog(GlobalData::s_pLogGameChannel,pSVar1);
  return 1;
}

```

