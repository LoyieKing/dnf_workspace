# std__overflow_error

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## overflow_error

```asm
// === 086dd1f0 std::overflow_error::overflow_error  [0x086dd1f0-0x86dd21f] ===
 86dd1f0:	55                   	push   %ebp
 86dd1f1:	89 e5                	mov    %esp,%ebp
 86dd1f3:	53                   	push   %ebx
 86dd1f4:	83 ec 14             	sub    $0x14,%esp
 86dd1f7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dd1fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dd1fd:	89 1c 24             	mov    %ebx,(%esp)
 86dd200:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dd204:	e8 77 ff ff ff       	call   86dd180 <_ZNSt13runtime_errorC1ERKSs>
 86dd209:	c7 03 40 da cf 08    	movl   $0x8cfda40,(%ebx)
 86dd20f:	83 c4 14             	add    $0x14,%esp
 86dd212:	5b                   	pop    %ebx
 86dd213:	5d                   	pop    %ebp
 86dd214:	c3                   	ret
 86dd215:	90                   	nop
 86dd216:	90                   	nop
 86dd217:	90                   	nop
 86dd218:	90                   	nop
 86dd219:	90                   	nop
 86dd21a:	90                   	nop
 86dd21b:	90                   	nop
 86dd21c:	90                   	nop
 86dd21d:	90                   	nop
 86dd21e:	90                   	nop
 86dd21f:	90                   	nop

```

```c
// std::overflow_error::overflow_error @ 0x86dd1f0

/* std::overflow_error::overflow_error(std::string const&) */

void __thiscall std::overflow_error::overflow_error(overflow_error *this,string *param_1)

{
  runtime_error::runtime_error((runtime_error *)this,param_1);
  *(undefined ***)this = &PTR__overflow_error_08cfda40;
  return;
}

```

