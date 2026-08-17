# CCommonStatisticsMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## IncreaseQuantity

```asm
// === 0860e838 CCommonStatisticsMgr::IncreaseQuantity  [0x0860e838-0x860e86d] ===
 860e838:	55                   	push   %ebp
 860e839:	89 e5                	mov    %esp,%ebp
 860e83b:	83 ec 18             	sub    $0x18,%esp
 860e83e:	8b 45 0c             	mov    0xc(%ebp),%eax
 860e841:	85 c0                	test   %eax,%eax
 860e843:	78 22                	js     860e867 <_ZN20CCommonStatisticsMgr16IncreaseQuantityENS_24ENUM_STATISTIC_CONTAINEREi+0x2f>
 860e845:	8b 45 0c             	mov    0xc(%ebp),%eax
 860e848:	83 f8 02             	cmp    $0x2,%eax
 860e84b:	7f 1d                	jg     860e86a <_ZN20CCommonStatisticsMgr16IncreaseQuantityENS_24ENUM_STATISTIC_CONTAINEREi+0x32>
 860e84d:	8b 55 0c             	mov    0xc(%ebp),%edx
 860e850:	8b 45 08             	mov    0x8(%ebp),%eax
 860e853:	8b 04 90             	mov    (%eax,%edx,4),%eax
 860e856:	8b 55 10             	mov    0x10(%ebp),%edx
 860e859:	89 54 24 04          	mov    %edx,0x4(%esp)
 860e85d:	89 04 24             	mov    %eax,(%esp)
 860e860:	e8 93 ff ff ff       	call   860e7f8 <_ZN19CStatisticContainer16IncreaseQuantityEi>
 860e865:	eb 04                	jmp    860e86b <_ZN20CCommonStatisticsMgr16IncreaseQuantityENS_24ENUM_STATISTIC_CONTAINEREi+0x33>
 860e867:	90                   	nop
 860e868:	eb 01                	jmp    860e86b <_ZN20CCommonStatisticsMgr16IncreaseQuantityENS_24ENUM_STATISTIC_CONTAINEREi+0x33>
 860e86a:	90                   	nop
 860e86b:	c9                   	leave
 860e86c:	c3                   	ret
 860e86d:	90                   	nop

```

```c
// CCommonStatisticsMgr::IncreaseQuantity @ 0x860e838

/* CCommonStatisticsMgr::IncreaseQuantity(CCommonStatisticsMgr::ENUM_STATISTIC_CONTAINER, int) */

void CCommonStatisticsMgr::IncreaseQuantity(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 3)) {
    CStatisticContainer::IncreaseQuantity(*(int *)(param_1 + param_2 * 4));
  }
  return;
}

```

---

## InsertDatabase

```asm
// === 0860e86e CCommonStatisticsMgr::InsertDatabase  [0x0860e86e-0x860e8a9] ===
 860e86e:	55                   	push   %ebp
 860e86f:	89 e5                	mov    %esp,%ebp
 860e871:	83 ec 28             	sub    $0x28,%esp
 860e874:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 860e87b:	eb 1f                	jmp    860e89c <_ZN20CCommonStatisticsMgr14InsertDatabaseEv+0x2e>
 860e87d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 860e880:	8b 45 08             	mov    0x8(%ebp),%eax
 860e883:	8b 04 90             	mov    (%eax,%edx,4),%eax
 860e886:	8b 00                	mov    (%eax),%eax
 860e888:	8b 08                	mov    (%eax),%ecx
 860e88a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 860e88d:	8b 45 08             	mov    0x8(%ebp),%eax
 860e890:	8b 04 90             	mov    (%eax,%edx,4),%eax
 860e893:	89 04 24             	mov    %eax,(%esp)
 860e896:	ff d1                	call   *%ecx
 860e898:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 860e89c:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 860e8a0:	0f 9e c0             	setle  %al
 860e8a3:	84 c0                	test   %al,%al
 860e8a5:	75 d6                	jne    860e87d <_ZN20CCommonStatisticsMgr14InsertDatabaseEv+0xf>
 860e8a7:	c9                   	leave
 860e8a8:	c3                   	ret
 860e8a9:	90                   	nop

```

```c
// CCommonStatisticsMgr::InsertDatabase @ 0x860e86e

/* CCommonStatisticsMgr::InsertDatabase() */

void __thiscall CCommonStatisticsMgr::InsertDatabase(CCommonStatisticsMgr *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    (**(code **)**(undefined4 **)(this + local_10 * 4))(*(undefined4 *)(this + local_10 * 4));
  }
  return;
}

```

