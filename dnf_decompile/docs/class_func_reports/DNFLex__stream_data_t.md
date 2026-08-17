# DNFLex__stream_data_t

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## clear

```asm
// === 08acd140 DNFLex::stream_data_t::clear  [0x08acd140-0x8acd15f] ===
 8acd140:	55                   	push   %ebp
 8acd141:	89 e5                	mov    %esp,%ebp
 8acd143:	8b 45 08             	mov    0x8(%ebp),%eax
 8acd146:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8acd14c:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8acd153:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8acd15a:	5d                   	pop    %ebp
 8acd15b:	c3                   	ret
 8acd15c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// DNFLex::stream_data_t::clear @ 0x8acd140

/* DWARF original prototype: void clear(stream_data_t * this) */

void __thiscall DNFLex::stream_data_t::clear(stream_data_t *this)

{
  this->stream = (istream *)0x0;
  this->size = 0;
  this->buffer = (char *)0x0;
  return;
}

```

---

## destroy

```asm
// === 08acd450 DNFLex::stream_data_t::destroy  [0x08acd450-0x8acd48f] ===
 8acd450:	55                   	push   %ebp
 8acd451:	89 e5                	mov    %esp,%ebp
 8acd453:	53                   	push   %ebx
 8acd454:	83 ec 14             	sub    $0x14,%esp
 8acd457:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acd45a:	8b 03                	mov    (%ebx),%eax
 8acd45c:	85 c0                	test   %eax,%eax
 8acd45e:	74 0e                	je     8acd46e <_ZN6DNFLex13stream_data_t7destroyEv+0x1e>
 8acd460:	8b 10                	mov    (%eax),%edx
 8acd462:	89 04 24             	mov    %eax,(%esp)
 8acd465:	ff 52 04             	call   *0x4(%edx)
 8acd468:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
 8acd46e:	8b 43 08             	mov    0x8(%ebx),%eax
 8acd471:	85 c0                	test   %eax,%eax
 8acd473:	74 0f                	je     8acd484 <_ZN6DNFLex13stream_data_t7destroyEv+0x34>
 8acd475:	89 04 24             	mov    %eax,(%esp)
 8acd478:	e8 33 77 c5 ff       	call   8724bb0 <_ZdaPv>
 8acd47d:	c7 43 08 00 00 00 00 	movl   $0x0,0x8(%ebx)
 8acd484:	83 c4 14             	add    $0x14,%esp
 8acd487:	5b                   	pop    %ebx
 8acd488:	5d                   	pop    %ebp
 8acd489:	c3                   	ret
 8acd48a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// DNFLex::stream_data_t::destroy @ 0x8acd450

/* DWARF original prototype: void destroy(stream_data_t * this) */

void __thiscall DNFLex::stream_data_t::destroy(stream_data_t *this)

{
  istream *piVar1;
  
  piVar1 = this->stream;
  if (piVar1 != (istream *)0x0) {
    (**(code **)(*(int *)piVar1 + 4))(piVar1);
    this->stream = (istream *)0x0;
  }
  if (this->buffer != (char *)0x0) {
    operator_delete__(this->buffer);
    this->buffer = (char *)0x0;
  }
  return;
}

```

