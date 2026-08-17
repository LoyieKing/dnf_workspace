# Inter_Terminate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c7dee Inter_Terminate::dispatch_sig  [0x084c7dee-0x84c7e0b] ===
 84c7dee:	55                   	push   %ebp
 84c7def:	89 e5                	mov    %esp,%ebp
 84c7df1:	83 ec 18             	sub    $0x18,%esp
 84c7df4:	c7 04 24 df 76 c8 08 	movl   $0x8c876df,(%esp)
 84c7dfb:	e8 70 67 bb ff       	call   807e570 <puts@plt>
 84c7e00:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 84c7e07:	e8 b4 63 bb ff       	call   807e1c0 <exit@plt>

```

```c
// Inter_Terminate::dispatch_sig @ 0x84c7dee

/* Inter_Terminate::dispatch_sig(CUser*, char*, int) */

void Inter_Terminate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  puts("Game Server is Terminated");
                    /* WARNING: Subroutine does not return */
  exit(0);
}

```

