# CraneItemInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## operator=

```asm
// === 088e3708 CraneItemInfo::operator=  [0x088e3708-0x88e3735] ===
 88e3708:	55                   	push   %ebp
 88e3709:	89 e5                	mov    %esp,%ebp
 88e370b:	8b 45 0c             	mov    0xc(%ebp),%eax
 88e370e:	0f b7 10             	movzwl (%eax),%edx
 88e3711:	8b 45 08             	mov    0x8(%ebp),%eax
 88e3714:	66 89 10             	mov    %dx,(%eax)
 88e3717:	8b 45 0c             	mov    0xc(%ebp),%eax
 88e371a:	8b 50 04             	mov    0x4(%eax),%edx
 88e371d:	8b 45 08             	mov    0x8(%ebp),%eax
 88e3720:	89 50 04             	mov    %edx,0x4(%eax)
 88e3723:	8b 45 0c             	mov    0xc(%ebp),%eax
 88e3726:	0f b7 50 08          	movzwl 0x8(%eax),%edx
 88e372a:	8b 45 08             	mov    0x8(%ebp),%eax
 88e372d:	66 89 50 08          	mov    %dx,0x8(%eax)
 88e3731:	8b 45 08             	mov    0x8(%ebp),%eax
 88e3734:	5d                   	pop    %ebp
 88e3735:	c3                   	ret

```

```c
// CraneItemInfo::operator= @ 0x88e3708

/* CraneItemInfo::TEMPNAMEPLACEHOLDERVALUE(CraneItemInfo const&) */

CraneItemInfo * __thiscall CraneItemInfo::operator=(CraneItemInfo *this,CraneItemInfo *param_1)

{
  *(undefined2 *)this = *(undefined2 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined2 *)(this + 8) = *(undefined2 *)(param_1 + 8);
  return this;
}

```

