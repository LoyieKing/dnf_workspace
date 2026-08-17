# stNPCCommonData_t

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## clear

```asm
// === 089fae9e stNPCCommonData_t::clear  [0x089fae9e-0x89faeed] ===
 89fae9e:	55                   	push   %ebp
 89fae9f:	89 e5                	mov    %esp,%ebp
 89faea1:	83 ec 10             	sub    $0x10,%esp
 89faea4:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 89faeab:	eb 11                	jmp    89faebe <_ZN17stNPCCommonData_t5clearEv+0x20>
 89faead:	8b 55 fc             	mov    -0x4(%ebp),%edx
 89faeb0:	8b 45 08             	mov    0x8(%ebp),%eax
 89faeb3:	66 c7 44 50 02 00 00 	movw   $0x0,0x2(%eax,%edx,2)
 89faeba:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 89faebe:	83 7d fc 09          	cmpl   $0x9,-0x4(%ebp)
 89faec2:	0f 9e c0             	setle  %al
 89faec5:	84 c0                	test   %al,%al
 89faec7:	75 e4                	jne    89faead <_ZN17stNPCCommonData_t5clearEv+0xf>
 89faec9:	8b 45 08             	mov    0x8(%ebp),%eax
 89faecc:	66 c7 00 00 00       	movw   $0x0,(%eax)
 89faed1:	8b 45 08             	mov    0x8(%ebp),%eax
 89faed4:	66 c7 40 34 00 00    	movw   $0x0,0x34(%eax)
 89faeda:	8b 45 08             	mov    0x8(%ebp),%eax
 89faedd:	66 c7 40 30 00 00    	movw   $0x0,0x30(%eax)
 89faee3:	8b 45 08             	mov    0x8(%ebp),%eax
 89faee6:	66 c7 40 32 00 00    	movw   $0x0,0x32(%eax)
 89faeec:	c9                   	leave
 89faeed:	c3                   	ret

```

```c
// stNPCCommonData_t::clear @ 0x89fae9e

/* stNPCCommonData_t::clear() */

void __thiscall stNPCCommonData_t::clear(stNPCCommonData_t *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    *(undefined2 *)(this + local_8 * 2 + 2) = 0;
  }
  *(undefined2 *)this = 0;
  *(undefined2 *)(this + 0x34) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0x32) = 0;
  return;
}

```

---

## getIllustIndex

```asm
// === 089faeee stNPCCommonData_t::getIllustIndex  [0x089faeee-0x89faf45] ===
 89faeee:	55                   	push   %ebp
 89faeef:	89 e5                	mov    %esp,%ebp
 89faef1:	83 ec 28             	sub    $0x28,%esp
 89faef4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 89faefb:	eb 2a                	jmp    89faf27 <_ZN17stNPCCommonData_t14getIllustIndexEi+0x39>
 89faefd:	8b 45 08             	mov    0x8(%ebp),%eax
 89faf00:	8d 50 24             	lea    0x24(%eax),%edx
 89faf03:	8b 45 f4             	mov    -0xc(%ebp),%eax
 89faf06:	89 44 24 04          	mov    %eax,0x4(%esp)
 89faf0a:	89 14 24             	mov    %edx,(%esp)
 89faf0d:	e8 60 bd 69 ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 89faf12:	8b 00                	mov    (%eax),%eax
 89faf14:	3b 45 0c             	cmp    0xc(%ebp),%eax
 89faf17:	0f 94 c0             	sete   %al
 89faf1a:	84 c0                	test   %al,%al
 89faf1c:	74 05                	je     89faf23 <_ZN17stNPCCommonData_t14getIllustIndexEi+0x35>
 89faf1e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 89faf21:	eb 21                	jmp    89faf44 <_ZN17stNPCCommonData_t14getIllustIndexEi+0x56>
 89faf23:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 89faf27:	8b 45 08             	mov    0x8(%ebp),%eax
 89faf2a:	83 c0 24             	add    $0x24,%eax
 89faf2d:	89 04 24             	mov    %eax,(%esp)
 89faf30:	e8 8b 32 69 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 89faf35:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 89faf38:	0f 97 c0             	seta   %al
 89faf3b:	84 c0                	test   %al,%al
 89faf3d:	75 be                	jne    89faefd <_ZN17stNPCCommonData_t14getIllustIndexEi+0xf>
 89faf3f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 89faf44:	c9                   	leave
 89faf45:	c3                   	ret

```

```c
// stNPCCommonData_t::getIllustIndex @ 0x89faeee

/* stNPCCommonData_t::getIllustIndex(int) */

uint __thiscall stNPCCommonData_t::getIllustIndex(stNPCCommonData_t *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar2 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(this + 0x24));
    if (uVar2 <= local_10) {
      return 0xffffffff;
    }
    piVar1 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(this + 0x24),local_10);
    if (*piVar1 == param_1) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}

```

