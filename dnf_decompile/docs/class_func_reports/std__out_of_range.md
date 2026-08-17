# std__out_of_range

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## out_of_range

```asm
// === 086dd290 std::out_of_range::out_of_range  [0x086dd290-0x86dd2bf] ===
 86dd290:	55                   	push   %ebp
 86dd291:	89 e5                	mov    %esp,%ebp
 86dd293:	53                   	push   %ebx
 86dd294:	83 ec 14             	sub    $0x14,%esp
 86dd297:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dd29a:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dd29d:	89 1c 24             	mov    %ebx,(%esp)
 86dd2a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dd2a4:	e8 a7 ff ff ff       	call   86dd250 <_ZNSt11logic_errorC1ERKSs>
 86dd2a9:	c7 03 18 7f b2 08    	movl   $0x8b27f18,(%ebx)
 86dd2af:	83 c4 14             	add    $0x14,%esp
 86dd2b2:	5b                   	pop    %ebx
 86dd2b3:	5d                   	pop    %ebp
 86dd2b4:	c3                   	ret
 86dd2b5:	90                   	nop
 86dd2b6:	90                   	nop
 86dd2b7:	90                   	nop
 86dd2b8:	90                   	nop
 86dd2b9:	90                   	nop
 86dd2ba:	90                   	nop
 86dd2bb:	90                   	nop
 86dd2bc:	90                   	nop
 86dd2bd:	90                   	nop
 86dd2be:	90                   	nop
 86dd2bf:	90                   	nop

```

```c
// std::out_of_range::out_of_range @ 0x86dd290

/* std::out_of_range::out_of_range(std::string const&) */

void __thiscall std::out_of_range::out_of_range(out_of_range *this,string *param_1)

{
  logic_error::logic_error((logic_error *)this,param_1);
  *(undefined ***)this = &PTR__out_of_range_08b27f18;
  return;
}

```

