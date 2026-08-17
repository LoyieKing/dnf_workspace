# TaoCrypt__Source

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## reset

```asm
// === 08758830 TaoCrypt::Source::reset  [0x08758830-0x875885f] ===
 8758830:	55                   	push   %ebp
 8758831:	89 e5                	mov    %esp,%ebp
 8758833:	8b 45 08             	mov    0x8(%ebp),%eax
 8758836:	8b 55 0c             	mov    0xc(%ebp),%edx
 8758839:	56                   	push   %esi
 875883a:	8b 08                	mov    (%eax),%ecx
 875883c:	8b 32                	mov    (%edx),%esi
 875883e:	89 30                	mov    %esi,(%eax)
 8758840:	8b 72 04             	mov    0x4(%edx),%esi
 8758843:	89 0a                	mov    %ecx,(%edx)
 8758845:	8b 48 04             	mov    0x4(%eax),%ecx
 8758848:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 875884f:	89 70 04             	mov    %esi,0x4(%eax)
 8758852:	89 4a 04             	mov    %ecx,0x4(%edx)
 8758855:	5e                   	pop    %esi
 8758856:	5d                   	pop    %ebp
 8758857:	c3                   	ret
 8758858:	90                   	nop
 8758859:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Source::reset @ 0x8758830

/* TaoCrypt::Source::reset(TaoCrypt::Block<unsigned char, TaoCrypt::AllocatorWithCleanup<unsigned
   char> >&) */

void __thiscall TaoCrypt::Source::reset(Source *this,Block *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)param_1 = uVar1;
  uVar1 = *(undefined4 *)(this + 4);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

```

