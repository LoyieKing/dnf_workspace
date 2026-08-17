# DB_UpdateClientCrashDownLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08427bce DB_UpdateClientCrashDownLog::dispatch  [0x08427bce-0x8427c05] ===
 8427bce:	55                   	push   %ebp
 8427bcf:	89 e5                	mov    %esp,%ebp
 8427bd1:	53                   	push   %ebx
 8427bd2:	83 ec 24             	sub    $0x24,%esp
 8427bd5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8427bd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8427bdc:	8b 45 14             	mov    0x14(%ebp),%eax
 8427bdf:	89 04 24             	mov    %eax,(%esp)
 8427be2:	e8 dd 49 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 8427be7:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8427bea:	e8 b6 53 1e 00       	call   860cfa5 <_Z38GetInstanceClientCrashDownLogStatisticv>
 8427bef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8427bf3:	89 04 24             	mov    %eax,(%esp)
 8427bf6:	e8 3d 54 1e 00       	call   860d038 <_ZN28CClientCrashDownLogStatistic23RegisterClientCrashDownEi>
 8427bfb:	b8 01 00 00 00       	mov    $0x1,%eax
 8427c00:	83 c4 24             	add    $0x24,%esp
 8427c03:	5b                   	pop    %ebx
 8427c04:	5d                   	pop    %ebp
 8427c05:	c3                   	ret

```

```c
// DB_UpdateClientCrashDownLog::dispatch @ 0x8427bce

/* DB_UpdateClientCrashDownLog::dispatch(int, int, Stream*) */

undefined4 DB_UpdateClientCrashDownLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  Stream *in_stack_00000010;
  int local_10 [2];
  
  Stream::operator>>(in_stack_00000010,local_10);
  iVar1 = GetInstanceClientCrashDownLogStatistic();
  CClientCrashDownLogStatistic::RegisterClientCrashDown(iVar1);
  return 1;
}

```

