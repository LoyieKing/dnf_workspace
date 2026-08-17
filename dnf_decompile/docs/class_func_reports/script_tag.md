# script_tag

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## isCloseString

```asm
// === 08a0c8b2 script_tag::isCloseString  [0x08a0c8b2-0x8a0c8f9] ===
 8a0c8b2:	55                   	push   %ebp
 8a0c8b3:	89 e5                	mov    %esp,%ebp
 8a0c8b5:	83 ec 28             	sub    $0x28,%esp
 8a0c8b8:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8a0c8bc:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0c8bf:	89 04 24             	mov    %eax,(%esp)
 8a0c8c2:	e8 99 9d cf ff       	call   8706660 <_ZNKSs4sizeEv>
 8a0c8c7:	83 f8 02             	cmp    $0x2,%eax
 8a0c8ca:	0f 97 c0             	seta   %al
 8a0c8cd:	84 c0                	test   %al,%al
 8a0c8cf:	74 23                	je     8a0c8f4 <_ZN10script_tag13isCloseStringERSs+0x42>
 8a0c8d1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8a0c8d8:	00 
 8a0c8d9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0c8dc:	89 04 24             	mov    %eax,(%esp)
 8a0c8df:	e8 8c c5 cf ff       	call   8708e70 <_ZNSs2atEj>
 8a0c8e4:	0f b6 00             	movzbl (%eax),%eax
 8a0c8e7:	3c 2f                	cmp    $0x2f,%al
 8a0c8e9:	0f 94 c0             	sete   %al
 8a0c8ec:	84 c0                	test   %al,%al
 8a0c8ee:	74 04                	je     8a0c8f4 <_ZN10script_tag13isCloseStringERSs+0x42>
 8a0c8f0:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 8a0c8f4:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8a0c8f8:	c9                   	leave
 8a0c8f9:	c3                   	ret

```

```c
// script_tag::isCloseString @ 0x8a0c8b2

/* script_tag::isCloseString(std::string&) */

undefined1 script_tag::isCloseString(string *param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined1 local_d;
  
  local_d = 0;
  uVar1 = std::string::size(param_1);
  if (2 < uVar1) {
    pcVar2 = (char *)std::string::at(param_1,1);
    if (*pcVar2 == '/') {
      local_d = 1;
    }
  }
  return local_d;
}

```

---

## isTypeString

```asm
// === 08a0c8fa script_tag::isTypeString  [0x08a0c8fa-0x8a0c941] ===
 8a0c8fa:	55                   	push   %ebp
 8a0c8fb:	89 e5                	mov    %esp,%ebp
 8a0c8fd:	83 ec 28             	sub    $0x28,%esp
 8a0c900:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8a0c904:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0c907:	89 04 24             	mov    %eax,(%esp)
 8a0c90a:	e8 51 9d cf ff       	call   8706660 <_ZNKSs4sizeEv>
 8a0c90f:	83 f8 01             	cmp    $0x1,%eax
 8a0c912:	0f 97 c0             	seta   %al
 8a0c915:	84 c0                	test   %al,%al
 8a0c917:	74 23                	je     8a0c93c <_ZN10script_tag12isTypeStringERSs+0x42>
 8a0c919:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8a0c920:	00 
 8a0c921:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0c924:	89 04 24             	mov    %eax,(%esp)
 8a0c927:	e8 44 c5 cf ff       	call   8708e70 <_ZNSs2atEj>
 8a0c92c:	0f b6 00             	movzbl (%eax),%eax
 8a0c92f:	3c 5b                	cmp    $0x5b,%al
 8a0c931:	0f 94 c0             	sete   %al
 8a0c934:	84 c0                	test   %al,%al
 8a0c936:	74 04                	je     8a0c93c <_ZN10script_tag12isTypeStringERSs+0x42>
 8a0c938:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 8a0c93c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8a0c940:	c9                   	leave
 8a0c941:	c3                   	ret

```

```c
// script_tag::isTypeString @ 0x8a0c8fa

/* script_tag::isTypeString(std::string&) */

undefined1 script_tag::isTypeString(string *param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined1 local_d;
  
  local_d = 0;
  uVar1 = std::string::size(param_1);
  if (1 < uVar1) {
    pcVar2 = (char *)std::string::at(param_1,0);
    if (*pcVar2 == '[') {
      local_d = 1;
    }
  }
  return local_d;
}

```

