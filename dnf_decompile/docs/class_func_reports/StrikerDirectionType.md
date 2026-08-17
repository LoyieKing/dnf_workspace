# StrikerDirectionType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## StrikerDirectionType

```asm
// === 08a9d7ec StrikerDirectionType::StrikerDirectionType  [0x08a9d7ec-0x8a9d7f9] ===
 8a9d7ec:	55                   	push   %ebp
 8a9d7ed:	89 e5                	mov    %esp,%ebp
 8a9d7ef:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d7f2:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8a9d7f8:	5d                   	pop    %ebp
 8a9d7f9:	c3                   	ret

```

```c
// StrikerDirectionType::StrikerDirectionType @ 0x8a9d7ec

/* StrikerDirectionType::StrikerDirectionType() */

void __thiscall StrikerDirectionType::StrikerDirectionType(StrikerDirectionType *this)

{
  *(undefined4 *)this = 0;
  return;
}

```

---

## isType

```asm
// === 08a9d81a StrikerDirectionType::isType  [0x08a9d81a-0x8a9d835] ===
 8a9d81a:	55                   	push   %ebp
 8a9d81b:	89 e5                	mov    %esp,%ebp
 8a9d81d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d820:	8b 00                	mov    (%eax),%eax
 8a9d822:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8a9d825:	75 07                	jne    8a9d82e <_ZN20StrikerDirectionType6isTypeENS_1TE+0x14>
 8a9d827:	b8 01 00 00 00       	mov    $0x1,%eax
 8a9d82c:	eb 05                	jmp    8a9d833 <_ZN20StrikerDirectionType6isTypeENS_1TE+0x19>
 8a9d82e:	b8 00 00 00 00       	mov    $0x0,%eax
 8a9d833:	5d                   	pop    %ebp
 8a9d834:	c3                   	ret
 8a9d835:	90                   	nop

```

```c
// StrikerDirectionType::isType @ 0x8a9d81a

/* StrikerDirectionType::isType(StrikerDirectionType::T) */

bool __thiscall StrikerDirectionType::isType(StrikerDirectionType *this,int param_2)

{
  return *(int *)this == param_2;
}

```

---

## setType

```asm
// === 08a9d7fa StrikerDirectionType::setType  [0x08a9d7fa-0x8a9d819] ===
 8a9d7fa:	55                   	push   %ebp
 8a9d7fb:	89 e5                	mov    %esp,%ebp
 8a9d7fd:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8a9d801:	78 10                	js     8a9d813 <_ZN20StrikerDirectionType7setTypeEi+0x19>
 8a9d803:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 8a9d807:	7f 0d                	jg     8a9d816 <_ZN20StrikerDirectionType7setTypeEi+0x1c>
 8a9d809:	8b 55 0c             	mov    0xc(%ebp),%edx
 8a9d80c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a9d80f:	89 10                	mov    %edx,(%eax)
 8a9d811:	eb 04                	jmp    8a9d817 <_ZN20StrikerDirectionType7setTypeEi+0x1d>
 8a9d813:	90                   	nop
 8a9d814:	eb 01                	jmp    8a9d817 <_ZN20StrikerDirectionType7setTypeEi+0x1d>
 8a9d816:	90                   	nop
 8a9d817:	5d                   	pop    %ebp
 8a9d818:	c3                   	ret
 8a9d819:	90                   	nop

```

```c
// StrikerDirectionType::setType @ 0x8a9d7fa

/* StrikerDirectionType::setType(int) */

void __thiscall StrikerDirectionType::setType(StrikerDirectionType *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 2)) {
    *(int *)this = param_1;
  }
  return;
}

```

