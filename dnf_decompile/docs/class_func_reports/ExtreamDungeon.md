# ExtreamDungeon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## BindTable_Predicate

```asm
// === 0832c3cc ExtreamDungeon::BindTable_Predicate  [0x0832c3cc-0x832c401] ===
 832c3cc:	55                   	push   %ebp
 832c3cd:	89 e5                	mov    %esp,%ebp
 832c3cf:	8b 45 08             	mov    0x8(%ebp),%eax
 832c3d2:	8b 10                	mov    (%eax),%edx
 832c3d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 832c3d7:	8b 00                	mov    (%eax),%eax
 832c3d9:	39 c2                	cmp    %eax,%edx
 832c3db:	75 13                	jne    832c3f0 <_ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x24>
 832c3dd:	8b 45 08             	mov    0x8(%ebp),%eax
 832c3e0:	8b 50 04             	mov    0x4(%eax),%edx
 832c3e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 832c3e6:	8b 40 04             	mov    0x4(%eax),%eax
 832c3e9:	39 c2                	cmp    %eax,%edx
 832c3eb:	0f 9c c0             	setl   %al
 832c3ee:	eb 0f                	jmp    832c3ff <_ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x33>
 832c3f0:	8b 45 08             	mov    0x8(%ebp),%eax
 832c3f3:	8b 10                	mov    (%eax),%edx
 832c3f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 832c3f8:	8b 00                	mov    (%eax),%eax
 832c3fa:	39 c2                	cmp    %eax,%edx
 832c3fc:	0f 9c c0             	setl   %al
 832c3ff:	5d                   	pop    %ebp
 832c400:	c3                   	ret
 832c401:	90                   	nop

```

```c
// ExtreamDungeon::BindTable_Predicate @ 0x832c3cc

/* ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&,
   ExtreamDungeon::OUTPUT_ITEM_STR const&) */

undefined4 ExtreamDungeon::BindTable_Predicate(OUTPUT_ITEM_STR *param_1,OUTPUT_ITEM_STR *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)param_1 == *(int *)param_2) {
    uVar1 = CONCAT31((int3)((uint)*(int *)(param_2 + 4) >> 8),
                     *(int *)(param_1 + 4) < *(int *)(param_2 + 4));
  }
  else {
    uVar1 = CONCAT31((int3)((uint)*(int *)param_2 >> 8),*(int *)param_1 < *(int *)param_2);
  }
  return uVar1;
}

```

