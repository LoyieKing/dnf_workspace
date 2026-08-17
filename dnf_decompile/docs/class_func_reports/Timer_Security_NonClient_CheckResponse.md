# Timer_Security_NonClient_CheckResponse

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086394f0 Timer_Security_NonClient_CheckResponse::dispatch_sig  [0x086394f0-0x8639511] ===
 86394f0:	55                   	push   %ebp
 86394f1:	89 e5                	mov    %esp,%ebp
 86394f3:	83 ec 18             	sub    $0x18,%esp
 86394f6:	8b 45 14             	mov    0x14(%ebp),%eax
 86394f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 86394fd:	8b 45 10             	mov    0x10(%ebp),%eax
 8639500:	89 44 24 04          	mov    %eax,0x4(%esp)
 8639504:	8b 45 0c             	mov    0xc(%ebp),%eax
 8639507:	89 04 24             	mov    %eax,(%esp)
 863950a:	e8 3f b9 c3 ff       	call   8274e4e <_Z27_NS_NonClient_CheckResponseiii>
 863950f:	c9                   	leave
 8639510:	c3                   	ret
 8639511:	90                   	nop

```

```c
// Timer_Security_NonClient_CheckResponse::dispatch_sig @ 0x86394f0

/* Timer_Security_NonClient_CheckResponse::dispatch_sig(int, int, unsigned int) */

void __thiscall
Timer_Security_NonClient_CheckResponse::dispatch_sig
          (Timer_Security_NonClient_CheckResponse *this,int param_1,int param_2,uint param_3)

{
  _NS_NonClient_CheckResponse(param_1,param_2,param_3);
  return;
}

```

