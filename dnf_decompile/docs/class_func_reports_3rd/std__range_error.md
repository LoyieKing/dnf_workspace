# std__range_error

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## range_error

```asm
// === 086dd220 std::range_error::range_error  [0x086dd220-0x86dd24f] ===
 86dd220:	55                   	push   %ebp
 86dd221:	89 e5                	mov    %esp,%ebp
 86dd223:	53                   	push   %ebx
 86dd224:	83 ec 14             	sub    $0x14,%esp
 86dd227:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dd22a:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dd22d:	89 1c 24             	mov    %ebx,(%esp)
 86dd230:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dd234:	e8 47 ff ff ff       	call   86dd180 <_ZNSt13runtime_errorC1ERKSs>
 86dd239:	c7 03 70 da cf 08    	movl   $0x8cfda70,(%ebx)
 86dd23f:	83 c4 14             	add    $0x14,%esp
 86dd242:	5b                   	pop    %ebx
 86dd243:	5d                   	pop    %ebp
 86dd244:	c3                   	ret
 86dd245:	90                   	nop
 86dd246:	90                   	nop
 86dd247:	90                   	nop
 86dd248:	90                   	nop
 86dd249:	90                   	nop
 86dd24a:	90                   	nop
 86dd24b:	90                   	nop
 86dd24c:	90                   	nop
 86dd24d:	90                   	nop
 86dd24e:	90                   	nop
 86dd24f:	90                   	nop

```

```c
// std::range_error::range_error @ 0x86dd220

/* std::range_error::range_error(std::string const&) */

void __thiscall std::range_error::range_error(range_error *this,string *param_1)

{
  runtime_error::runtime_error((runtime_error *)this,param_1);
  *(undefined ***)this = &PTR__range_error_08cfda70;
  return;
}

```

