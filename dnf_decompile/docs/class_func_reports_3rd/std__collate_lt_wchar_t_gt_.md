# std__collate_lt_wchar_t_gt_

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## _M_compare

```asm
// === 0871f910 std::collate<wchar_t>::_M_compare  [0x0871f910-0x871f94f] ===
 871f910:	55                   	push   %ebp
 871f911:	89 e5                	mov    %esp,%ebp
 871f913:	83 ec 18             	sub    $0x18,%esp
 871f916:	8b 45 08             	mov    0x8(%ebp),%eax
 871f919:	8b 40 08             	mov    0x8(%eax),%eax
 871f91c:	89 44 24 08          	mov    %eax,0x8(%esp)
 871f920:	8b 45 10             	mov    0x10(%ebp),%eax
 871f923:	89 44 24 04          	mov    %eax,0x4(%esp)
 871f927:	8b 45 0c             	mov    0xc(%ebp),%eax
 871f92a:	89 04 24             	mov    %eax,(%esp)
 871f92d:	e8 5e e2 95 ff       	call   807db90 <__wcscoll_l@plt>
 871f932:	c9                   	leave
 871f933:	89 c2                	mov    %eax,%edx
 871f935:	31 c0                	xor    %eax,%eax
 871f937:	85 d2                	test   %edx,%edx
 871f939:	0f 95 c0             	setne  %al
 871f93c:	c1 fa 1e             	sar    $0x1e,%edx
 871f93f:	09 d0                	or     %edx,%eax
 871f941:	c3                   	ret
 871f942:	90                   	nop
 871f943:	90                   	nop
 871f944:	90                   	nop
 871f945:	90                   	nop
 871f946:	90                   	nop
 871f947:	90                   	nop
 871f948:	90                   	nop
 871f949:	90                   	nop
 871f94a:	90                   	nop
 871f94b:	90                   	nop
 871f94c:	90                   	nop
 871f94d:	90                   	nop
 871f94e:	90                   	nop
 871f94f:	90                   	nop

```

```c
// std::collate<wchar_t>::_M_compare @ 0x871f910

/* std::collate<wchar_t>::_M_compare(wchar_t const*, wchar_t const*) const */

uint __thiscall
std::collate<wchar_t>::_M_compare(collate<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = __wcscoll_l(param_1,param_2,*(undefined4 *)(this + 8));
  return (uint)(iVar1 != 0) | iVar1 >> 0x1e;
}

```

---

## _M_transform

```asm
// === 0871f8e0 std::collate<wchar_t>::_M_transform  [0x0871f8e0-0x871f90f] ===
 871f8e0:	55                   	push   %ebp
 871f8e1:	89 e5                	mov    %esp,%ebp
 871f8e3:	53                   	push   %ebx
 871f8e4:	83 ec 04             	sub    $0x4,%esp
 871f8e7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 871f8ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 871f8ed:	8b 55 10             	mov    0x10(%ebp),%edx
 871f8f0:	8b 4d 14             	mov    0x14(%ebp),%ecx
 871f8f3:	8b 5b 08             	mov    0x8(%ebx),%ebx
 871f8f6:	89 45 08             	mov    %eax,0x8(%ebp)
 871f8f9:	89 55 0c             	mov    %edx,0xc(%ebp)
 871f8fc:	89 4d 10             	mov    %ecx,0x10(%ebp)
 871f8ff:	89 5d 14             	mov    %ebx,0x14(%ebp)
 871f902:	83 c4 04             	add    $0x4,%esp
 871f905:	5b                   	pop    %ebx
 871f906:	5d                   	pop    %ebp
 871f907:	e9 c4 e6 95 ff       	jmp    807dfd0 <__wcsxfrm_l@plt>
 871f90c:	90                   	nop
 871f90d:	90                   	nop
 871f90e:	90                   	nop
 871f90f:	90                   	nop

```

```c
// std::collate<wchar_t>::_M_transform @ 0x871f8e0

/* std::collate<wchar_t>::_M_transform(wchar_t*, wchar_t const*, unsigned int) const */

void std::collate<wchar_t>::_M_transform(wchar_t *param_1,wchar_t *param_2,uint param_3)

{
  wchar_t wStack00000010;
  
  wStack00000010 = param_1[2];
  __wcsxfrm_l();
  return;
}

```

