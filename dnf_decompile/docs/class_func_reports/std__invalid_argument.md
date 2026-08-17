# std__invalid_argument

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## invalid_argument

```asm
// === 086dd2f0 std::invalid_argument::invalid_argument  [0x086dd2f0-0x86dd31f] ===
 86dd2f0:	55                   	push   %ebp
 86dd2f1:	89 e5                	mov    %esp,%ebp
 86dd2f3:	53                   	push   %ebx
 86dd2f4:	83 ec 14             	sub    $0x14,%esp
 86dd2f7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dd2fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dd2fd:	89 1c 24             	mov    %ebx,(%esp)
 86dd300:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dd304:	e8 47 ff ff ff       	call   86dd250 <_ZNSt11logic_errorC1ERKSs>
 86dd309:	c7 03 80 41 bb 08    	movl   $0x8bb4180,(%ebx)
 86dd30f:	83 c4 14             	add    $0x14,%esp
 86dd312:	5b                   	pop    %ebx
 86dd313:	5d                   	pop    %ebp
 86dd314:	c3                   	ret
 86dd315:	90                   	nop
 86dd316:	90                   	nop
 86dd317:	90                   	nop
 86dd318:	90                   	nop
 86dd319:	90                   	nop
 86dd31a:	90                   	nop
 86dd31b:	90                   	nop
 86dd31c:	90                   	nop
 86dd31d:	90                   	nop
 86dd31e:	90                   	nop
 86dd31f:	90                   	nop

```

```c
// std::invalid_argument::invalid_argument @ 0x86dd2f0

/* std::invalid_argument::invalid_argument(std::string const&) */

void __thiscall std::invalid_argument::invalid_argument(invalid_argument *this,string *param_1)

{
  logic_error::logic_error((logic_error *)this,param_1);
  *(undefined ***)this = &PTR__invalid_argument_08bb4180;
  return;
}

```

