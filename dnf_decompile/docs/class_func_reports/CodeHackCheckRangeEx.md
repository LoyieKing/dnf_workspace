# CodeHackCheckRangeEx

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## CodeHackCheckRangeEx

```asm
// === 0808a966 CodeHackCheckRangeEx::CodeHackCheckRangeEx  [0x0808a966-0x808a9a9] ===
 808a966:	55                   	push   %ebp
 808a967:	89 e5                	mov    %esp,%ebp
 808a969:	83 ec 18             	sub    $0x18,%esp
 808a96c:	8b 45 08             	mov    0x8(%ebp),%eax
 808a96f:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 808a976:	00 
 808a977:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 808a97e:	00 
 808a97f:	89 04 24             	mov    %eax,(%esp)
 808a982:	e8 39 33 ff ff       	call   807dcc0 <memset@plt>
 808a987:	8b 45 08             	mov    0x8(%ebp),%eax
 808a98a:	05 04 01 00 00       	add    $0x104,%eax
 808a98f:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 808a996:	00 
 808a997:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 808a99e:	00 
 808a99f:	89 04 24             	mov    %eax,(%esp)
 808a9a2:	e8 19 33 ff ff       	call   807dcc0 <memset@plt>
 808a9a7:	c9                   	leave
 808a9a8:	c3                   	ret
 808a9a9:	90                   	nop

```

```c
// CodeHackCheckRangeEx::CodeHackCheckRangeEx @ 0x808a966

/* CodeHackCheckRangeEx::CodeHackCheckRangeEx() */

void __thiscall CodeHackCheckRangeEx::CodeHackCheckRangeEx(CodeHackCheckRangeEx *this)

{
  memset(this,0,0x20);
  memset(this + 0x104,0,8);
  return;
}

```

---

## GetFileName

```asm
// === 0808a9c4 CodeHackCheckRangeEx::GetFileName  [0x0808a9c4-0x808a9cb] ===
 808a9c4:	55                   	push   %ebp
 808a9c5:	89 e5                	mov    %esp,%ebp
 808a9c7:	8b 45 08             	mov    0x8(%ebp),%eax
 808a9ca:	5d                   	pop    %ebp
 808a9cb:	c3                   	ret

```

```c
// CodeHackCheckRangeEx::GetFileName @ 0x808a9c4

/* CodeHackCheckRangeEx::GetFileName() const */

CodeHackCheckRangeEx * __thiscall CodeHackCheckRangeEx::GetFileName(CodeHackCheckRangeEx *this)

{
  return this;
}

```

---

## SetFileName

```asm
// === 0808a9aa CodeHackCheckRangeEx::SetFileName  [0x0808a9aa-0x808a9c3] ===
 808a9aa:	55                   	push   %ebp
 808a9ab:	89 e5                	mov    %esp,%ebp
 808a9ad:	83 ec 18             	sub    $0x18,%esp
 808a9b0:	8b 45 08             	mov    0x8(%ebp),%eax
 808a9b3:	8b 55 0c             	mov    0xc(%ebp),%edx
 808a9b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 808a9ba:	89 04 24             	mov    %eax,(%esp)
 808a9bd:	e8 1b fc ff ff       	call   808a5dd <_Z13StrCpyMaxPathPcPKc>
 808a9c2:	c9                   	leave
 808a9c3:	c3                   	ret

```

```c
// CodeHackCheckRangeEx::SetFileName @ 0x808a9aa

/* CodeHackCheckRangeEx::SetFileName(char const*) */

void __thiscall CodeHackCheckRangeEx::SetFileName(CodeHackCheckRangeEx *this,char *param_1)

{
  StrCpyMaxPath((char *)this,param_1);
  return;
}

```

---

## setData

```asm
// === 0808a9cc CodeHackCheckRangeEx::setData  [0x0808a9cc-0x808aa36] ===
 808a9cc:	55                   	push   %ebp
 808a9cd:	89 e5                	mov    %esp,%ebp
 808a9cf:	53                   	push   %ebx
 808a9d0:	83 ec 24             	sub    $0x24,%esp
 808a9d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a9d6:	0f b6 00             	movzbl (%eax),%eax
 808a9d9:	0f be c0             	movsbl %al,%eax
 808a9dc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 808a9df:	83 45 0c 04          	addl   $0x4,0xc(%ebp)
 808a9e3:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 808a9e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a9e9:	89 04 24             	mov    %eax,(%esp)
 808a9ec:	e8 84 41 a5 00       	call   8adeb75 <_Z9toTStringPKc>
 808a9f1:	8b 55 08             	mov    0x8(%ebp),%edx
 808a9f4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 808a9f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 808a9fc:	89 14 24             	mov    %edx,(%esp)
 808a9ff:	e8 cc 2e ff ff       	call   807d8d0 <strncpy@plt>
 808aa04:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808aa07:	01 45 0c             	add    %eax,0xc(%ebp)
 808aa0a:	8b 45 08             	mov    0x8(%ebp),%eax
 808aa0d:	8d 90 04 01 00 00    	lea    0x104(%eax),%edx
 808aa13:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 808aa1a:	00 
 808aa1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 808aa1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 808aa22:	89 14 24             	mov    %edx,(%esp)
 808aa25:	e8 76 2e ff ff       	call   807d8a0 <memcpy@plt>
 808aa2a:	83 45 0c 08          	addl   $0x8,0xc(%ebp)
 808aa2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 808aa31:	83 c4 24             	add    $0x24,%esp
 808aa34:	5b                   	pop    %ebx
 808aa35:	5d                   	pop    %ebp
 808aa36:	c3                   	ret

```

```c
// CodeHackCheckRangeEx::setData @ 0x808a9cc

/* CodeHackCheckRangeEx::setData(char const*) */

char * __thiscall CodeHackCheckRangeEx::setData(CodeHackCheckRangeEx *this,char *param_1)

{
  char *pszSrc;
  char cVar1;
  TCHAR *__src;
  
  cVar1 = *param_1;
  pszSrc = param_1 + 4;
  __src = toTString(pszSrc);
  strncpy((char *)this,__src,(int)cVar1);
  memcpy(this + 0x104,pszSrc + cVar1,8);
  return pszSrc + cVar1 + 8;
}

```

