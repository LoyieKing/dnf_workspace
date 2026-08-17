# std__collate_lt_char_gt_

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## _M_compare

```asm
// === 0871f980 std::collate<char>::_M_compare  [0x0871f980-0x871f9bf] ===
 871f980:	55                   	push   %ebp
 871f981:	89 e5                	mov    %esp,%ebp
 871f983:	83 ec 18             	sub    $0x18,%esp
 871f986:	8b 45 08             	mov    0x8(%ebp),%eax
 871f989:	8b 40 08             	mov    0x8(%eax),%eax
 871f98c:	89 44 24 08          	mov    %eax,0x8(%esp)
 871f990:	8b 45 10             	mov    0x10(%ebp),%eax
 871f993:	89 44 24 04          	mov    %eax,0x4(%esp)
 871f997:	8b 45 0c             	mov    0xc(%ebp),%eax
 871f99a:	89 04 24             	mov    %eax,(%esp)
 871f99d:	e8 9e ec 95 ff       	call   807e640 <__strcoll_l@plt>
 871f9a2:	c9                   	leave
 871f9a3:	89 c2                	mov    %eax,%edx
 871f9a5:	31 c0                	xor    %eax,%eax
 871f9a7:	85 d2                	test   %edx,%edx
 871f9a9:	0f 95 c0             	setne  %al
 871f9ac:	c1 fa 1e             	sar    $0x1e,%edx
 871f9af:	09 d0                	or     %edx,%eax
 871f9b1:	c3                   	ret
 871f9b2:	90                   	nop
 871f9b3:	90                   	nop
 871f9b4:	90                   	nop
 871f9b5:	90                   	nop
 871f9b6:	90                   	nop
 871f9b7:	90                   	nop
 871f9b8:	90                   	nop
 871f9b9:	90                   	nop
 871f9ba:	90                   	nop
 871f9bb:	90                   	nop
 871f9bc:	90                   	nop
 871f9bd:	90                   	nop
 871f9be:	90                   	nop
 871f9bf:	90                   	nop

```

```c
// std::collate<char>::_M_compare @ 0x871f980

/* std::collate<char>::_M_compare(char const*, char const*) const */

uint __thiscall std::collate<char>::_M_compare(collate<char> *this,char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = __strcoll_l(param_1,param_2,*(undefined4 *)(this + 8));
  return (uint)(iVar1 != 0) | iVar1 >> 0x1e;
}

```

---

## _M_transform

```asm
// === 0871f950 std::collate<char>::_M_transform  [0x0871f950-0x871f97f] ===
 871f950:	55                   	push   %ebp
 871f951:	89 e5                	mov    %esp,%ebp
 871f953:	53                   	push   %ebx
 871f954:	83 ec 04             	sub    $0x4,%esp
 871f957:	8b 5d 08             	mov    0x8(%ebp),%ebx
 871f95a:	8b 45 0c             	mov    0xc(%ebp),%eax
 871f95d:	8b 55 10             	mov    0x10(%ebp),%edx
 871f960:	8b 4d 14             	mov    0x14(%ebp),%ecx
 871f963:	8b 5b 08             	mov    0x8(%ebx),%ebx
 871f966:	89 45 08             	mov    %eax,0x8(%ebp)
 871f969:	89 55 0c             	mov    %edx,0xc(%ebp)
 871f96c:	89 4d 10             	mov    %ecx,0x10(%ebp)
 871f96f:	89 5d 14             	mov    %ebx,0x14(%ebp)
 871f972:	83 c4 04             	add    $0x4,%esp
 871f975:	5b                   	pop    %ebx
 871f976:	5d                   	pop    %ebp
 871f977:	e9 84 e9 95 ff       	jmp    807e300 <__strxfrm_l@plt>
 871f97c:	90                   	nop
 871f97d:	90                   	nop
 871f97e:	90                   	nop
 871f97f:	90                   	nop

```

```c
// std::collate<char>::_M_transform @ 0x871f950

/* std::collate<char>::_M_transform(char*, char const*, unsigned int) const */

void std::collate<char>::_M_transform(char *param_1,char *param_2,uint param_3)

{
  undefined4 uStack00000010;
  
  uStack00000010 = *(undefined4 *)(param_1 + 8);
  __strxfrm_l();
  return;
}

```

