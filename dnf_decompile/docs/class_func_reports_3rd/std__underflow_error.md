# std__underflow_error

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## underflow_error

```asm
// === 086dd1c0 std::underflow_error::underflow_error  [0x086dd1c0-0x86dd1ef] ===
 86dd1c0:	55                   	push   %ebp
 86dd1c1:	89 e5                	mov    %esp,%ebp
 86dd1c3:	53                   	push   %ebx
 86dd1c4:	83 ec 14             	sub    $0x14,%esp
 86dd1c7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dd1ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dd1cd:	89 1c 24             	mov    %ebx,(%esp)
 86dd1d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dd1d4:	e8 a7 ff ff ff       	call   86dd180 <_ZNSt13runtime_errorC1ERKSs>
 86dd1d9:	c7 03 08 da cf 08    	movl   $0x8cfda08,(%ebx)
 86dd1df:	83 c4 14             	add    $0x14,%esp
 86dd1e2:	5b                   	pop    %ebx
 86dd1e3:	5d                   	pop    %ebp
 86dd1e4:	c3                   	ret
 86dd1e5:	90                   	nop
 86dd1e6:	90                   	nop
 86dd1e7:	90                   	nop
 86dd1e8:	90                   	nop
 86dd1e9:	90                   	nop
 86dd1ea:	90                   	nop
 86dd1eb:	90                   	nop
 86dd1ec:	90                   	nop
 86dd1ed:	90                   	nop
 86dd1ee:	90                   	nop
 86dd1ef:	90                   	nop

```

```c
// std::underflow_error::underflow_error @ 0x86dd1c0

/* std::underflow_error::underflow_error(std::string const&) */

void __thiscall std::underflow_error::underflow_error(underflow_error *this,string *param_1)

{
  runtime_error::runtime_error((runtime_error *)this,param_1);
  *(undefined ***)this = &PTR__underflow_error_08cfda08;
  return;
}

```

