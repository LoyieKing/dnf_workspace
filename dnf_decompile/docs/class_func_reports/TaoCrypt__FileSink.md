# TaoCrypt__FileSink

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## FileSink

```asm
// === 08758900 TaoCrypt::FileSink::FileSink  [0x08758900-0x875894f] ===
 8758900:	55                   	push   %ebp
 8758901:	89 e5                	mov    %esp,%ebp
 8758903:	83 ec 18             	sub    $0x18,%esp
 8758906:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8758909:	e8 ea a4 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875890e:	81 c3 8a 42 c1 00    	add    $0xc1428a,%ebx
 8758914:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8758917:	8b 75 08             	mov    0x8(%ebp),%esi
 875891a:	8d 83 c3 4a 99 ff    	lea    -0x66b53d(%ebx),%eax
 8758920:	89 44 24 04          	mov    %eax,0x4(%esp)
 8758924:	8b 45 0c             	mov    0xc(%ebp),%eax
 8758927:	89 04 24             	mov    %eax,(%esp)
 875892a:	e8 41 5e 92 ff       	call   807e770 <fopen@plt>
 875892f:	85 c0                	test   %eax,%eax
 8758931:	89 06                	mov    %eax,(%esi)
 8758933:	74 0f                	je     8758944 <_ZN8TaoCrypt8FileSinkC1EPKcRNS_6SourceE+0x44>
 8758935:	8b 45 10             	mov    0x10(%ebp),%eax
 8758938:	89 34 24             	mov    %esi,(%esp)
 875893b:	89 44 24 04          	mov    %eax,0x4(%esp)
 875893f:	e8 1c ff ff ff       	call   8758860 <_ZN8TaoCrypt8FileSink3putERNS_6SourceE>
 8758944:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8758947:	8b 75 fc             	mov    -0x4(%ebp),%esi
 875894a:	89 ec                	mov    %ebp,%esp
 875894c:	5d                   	pop    %ebp
 875894d:	c3                   	ret
 875894e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::FileSink::FileSink @ 0x8758900

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::FileSink::FileSink(char const*, TaoCrypt::Source&) */

void __thiscall TaoCrypt::FileSink::FileSink(FileSink *this,char *param_1,Source *param_2)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(param_1,"wb");
  *(FILE **)this = pFVar1;
  if (pFVar1 != (FILE *)0x0) {
    put(this,param_2);
  }
  return;
}

```

---

## put

```asm
// === 08758860 TaoCrypt::FileSink::put  [0x08758860-0x875889f] ===
 8758860:	55                   	push   %ebp
 8758861:	89 e5                	mov    %esp,%ebp
 8758863:	53                   	push   %ebx
 8758864:	83 ec 14             	sub    $0x14,%esp
 8758867:	8b 55 08             	mov    0x8(%ebp),%edx
 875886a:	8b 45 0c             	mov    0xc(%ebp),%eax
 875886d:	e8 86 a5 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8758872:	81 c3 26 43 c1 00    	add    $0xc14326,%ebx
 8758878:	8b 12                	mov    (%edx),%edx
 875887a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875887e:	8b 10                	mov    (%eax),%edx
 8758880:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8758887:	00 
 8758888:	89 54 24 08          	mov    %edx,0x8(%esp)
 875888c:	8b 40 04             	mov    0x4(%eax),%eax
 875888f:	89 04 24             	mov    %eax,(%esp)
 8758892:	e8 89 5a 92 ff       	call   807e320 <fwrite@plt>
 8758897:	83 c4 14             	add    $0x14,%esp
 875889a:	5b                   	pop    %ebx
 875889b:	5d                   	pop    %ebp
 875889c:	c3                   	ret
 875889d:	90                   	nop
 875889e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::FileSink::put @ 0x8758860

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::FileSink::put(TaoCrypt::Source&) */

void __thiscall TaoCrypt::FileSink::put(FileSink *this,Source *param_1)

{
  fwrite(*(void **)(param_1 + 4),1,*(size_t *)param_1,*(FILE **)this);
  return;
}

```

---

## ~FileSink

```asm
// === 087588a0 TaoCrypt::FileSink::~FileSink  [0x087588a0-0x87588cf] ===
 87588a0:	55                   	push   %ebp
 87588a1:	89 e5                	mov    %esp,%ebp
 87588a3:	53                   	push   %ebx
 87588a4:	83 ec 14             	sub    $0x14,%esp
 87588a7:	8b 45 08             	mov    0x8(%ebp),%eax
 87588aa:	e8 49 a5 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87588af:	81 c3 e9 42 c1 00    	add    $0xc142e9,%ebx
 87588b5:	8b 00                	mov    (%eax),%eax
 87588b7:	85 c0                	test   %eax,%eax
 87588b9:	74 08                	je     87588c3 <_ZN8TaoCrypt8FileSinkD1Ev+0x23>
 87588bb:	89 04 24             	mov    %eax,(%esp)
 87588be:	e8 dd 55 92 ff       	call   807dea0 <fclose@plt>
 87588c3:	83 c4 14             	add    $0x14,%esp
 87588c6:	5b                   	pop    %ebx
 87588c7:	5d                   	pop    %ebp
 87588c8:	c3                   	ret
 87588c9:	90                   	nop
 87588ca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::FileSink::~FileSink @ 0x87588a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::FileSink::~FileSink() */

void __thiscall TaoCrypt::FileSink::~FileSink(FileSink *this)

{
  if (*(FILE **)this != (FILE *)0x0) {
    fclose(*(FILE **)this);
  }
  return;
}

```

