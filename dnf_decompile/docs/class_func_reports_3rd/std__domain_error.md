# std__domain_error

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## domain_error

```asm
// === 086dd320 std::domain_error::domain_error  [0x086dd320-0x86dd34f] ===
 86dd320:	55                   	push   %ebp
 86dd321:	89 e5                	mov    %esp,%ebp
 86dd323:	53                   	push   %ebx
 86dd324:	83 ec 14             	sub    $0x14,%esp
 86dd327:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dd32a:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dd32d:	89 1c 24             	mov    %ebx,(%esp)
 86dd330:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dd334:	e8 17 ff ff ff       	call   86dd250 <_ZNSt11logic_errorC1ERKSs>
 86dd339:	c7 03 e0 da cf 08    	movl   $0x8cfdae0,(%ebx)
 86dd33f:	83 c4 14             	add    $0x14,%esp
 86dd342:	5b                   	pop    %ebx
 86dd343:	5d                   	pop    %ebp
 86dd344:	c3                   	ret
 86dd345:	90                   	nop
 86dd346:	90                   	nop
 86dd347:	90                   	nop
 86dd348:	90                   	nop
 86dd349:	90                   	nop
 86dd34a:	90                   	nop
 86dd34b:	90                   	nop
 86dd34c:	90                   	nop
 86dd34d:	90                   	nop
 86dd34e:	90                   	nop
 86dd34f:	90                   	nop

```

```c
// std::domain_error::domain_error @ 0x86dd320

/* std::domain_error::domain_error(std::string const&) */

void __thiscall std::domain_error::domain_error(domain_error *this,string *param_1)

{
  logic_error::logic_error((logic_error *)this,param_1);
  *(undefined ***)this = &PTR__domain_error_08cfdae0;
  return;
}

```

