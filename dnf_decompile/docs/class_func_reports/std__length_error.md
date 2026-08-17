# std__length_error

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## length_error

```asm
// === 086dd2c0 std::length_error::length_error  [0x086dd2c0-0x86dd2ef] ===
 86dd2c0:	55                   	push   %ebp
 86dd2c1:	89 e5                	mov    %esp,%ebp
 86dd2c3:	53                   	push   %ebx
 86dd2c4:	83 ec 14             	sub    $0x14,%esp
 86dd2c7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dd2ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dd2cd:	89 1c 24             	mov    %ebx,(%esp)
 86dd2d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dd2d4:	e8 77 ff ff ff       	call   86dd250 <_ZNSt11logic_errorC1ERKSs>
 86dd2d9:	c7 03 a8 da cf 08    	movl   $0x8cfdaa8,(%ebx)
 86dd2df:	83 c4 14             	add    $0x14,%esp
 86dd2e2:	5b                   	pop    %ebx
 86dd2e3:	5d                   	pop    %ebp
 86dd2e4:	c3                   	ret
 86dd2e5:	90                   	nop
 86dd2e6:	90                   	nop
 86dd2e7:	90                   	nop
 86dd2e8:	90                   	nop
 86dd2e9:	90                   	nop
 86dd2ea:	90                   	nop
 86dd2eb:	90                   	nop
 86dd2ec:	90                   	nop
 86dd2ed:	90                   	nop
 86dd2ee:	90                   	nop
 86dd2ef:	90                   	nop

```

```c
// std::length_error::length_error @ 0x86dd2c0

/* std::length_error::length_error(std::string const&) */

void __thiscall std::length_error::length_error(length_error *this,string *param_1)

{
  logic_error::logic_error((logic_error *)this,param_1);
  *(undefined ***)this = &PTR__length_error_08cfdaa8;
  return;
}

```

