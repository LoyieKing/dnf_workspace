# std__hash_lt_std__string_gt_

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## operator

```asm
// === 086d9eb0 std::hash<std::string>::operator  [0x086d9eb0-0x86d9edf] ===
 86d9eb0:	55                   	push   %ebp
 86d9eb1:	31 d2                	xor    %edx,%edx
 86d9eb3:	89 e5                	mov    %esp,%ebp
 86d9eb5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86d9eb8:	56                   	push   %esi
 86d9eb9:	53                   	push   %ebx
 86d9eba:	8b 30                	mov    (%eax),%esi
 86d9ebc:	b8 c5 9d 1c 81       	mov    $0x811c9dc5,%eax
 86d9ec1:	8b 5e f4             	mov    -0xc(%esi),%ebx
 86d9ec4:	85 db                	test   %ebx,%ebx
 86d9ec6:	74 13                	je     86d9edb <_ZNKSt4hashISsEclESs+0x2b>
 86d9ec8:	0f be 0c 16          	movsbl (%esi,%edx,1),%ecx
 86d9ecc:	83 c2 01             	add    $0x1,%edx
 86d9ecf:	31 c1                	xor    %eax,%ecx
 86d9ed1:	69 c1 93 01 00 01    	imul   $0x1000193,%ecx,%eax
 86d9ed7:	39 d3                	cmp    %edx,%ebx
 86d9ed9:	75 ed                	jne    86d9ec8 <_ZNKSt4hashISsEclESs+0x18>
 86d9edb:	5b                   	pop    %ebx
 86d9edc:	5e                   	pop    %esi
 86d9edd:	5d                   	pop    %ebp
 86d9ede:	c3                   	ret
 86d9edf:	90                   	nop

```

```c
// std::hash<std::string>::operator @ 0x86d9eb0

/* std::hash<std::string >::TEMPNAMEPLACEHOLDERVALUE(std::string) const */

uint __thiscall std::hash<std::string>::operator()(hash<std::string> *this,string param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar3 = 0x811c9dc5;
  iVar2 = *(int *)(*(int *)param_1._M_dataplus._M_p + -0xc);
  if (iVar2 != 0) {
    do {
      pcVar1 = (char *)(*(int *)param_1._M_dataplus._M_p + iVar4);
      iVar4 = iVar4 + 1;
      uVar3 = ((int)*pcVar1 ^ uVar3) * 0x1000193;
    } while (iVar2 != iVar4);
  }
  return uVar3;
}

```

