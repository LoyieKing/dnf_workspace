# DB_UpdateLimitItemUsage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843f022 DB_UpdateLimitItemUsage::dispatch  [0x0843f022-0x843f02f] ===
 843f022:	55                   	push   %ebp
 843f023:	89 e5                	mov    %esp,%ebp
 843f025:	83 ec 20             	sub    $0x20,%esp
 843f028:	b8 01 00 00 00       	mov    $0x1,%eax
 843f02d:	c9                   	leave
 843f02e:	c3                   	ret
 843f02f:	90                   	nop

```

```c
// DB_UpdateLimitItemUsage::dispatch @ 0x843f022

/* DB_UpdateLimitItemUsage::dispatch(int, int, Stream*) */

undefined4 DB_UpdateLimitItemUsage::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

---

## makeRequest

```asm
// === 0843f030 DB_UpdateLimitItemUsage::makeRequest  [0x0843f030-0x843f037] ===
 843f030:	55                   	push   %ebp
 843f031:	89 e5                	mov    %esp,%ebp
 843f033:	83 ec 10             	sub    $0x10,%esp
 843f036:	c9                   	leave
 843f037:	c3                   	ret

```

```c
// DB_UpdateLimitItemUsage::makeRequest @ 0x843f030

/* DB_UpdateLimitItemUsage::makeRequest(int, int, int, int, long) */

void DB_UpdateLimitItemUsage::makeRequest
               (int param_1,int param_2,int param_3,int param_4,long param_5)

{
  return;
}

```

