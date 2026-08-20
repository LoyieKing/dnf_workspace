# BindTable_Predicate

`_ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_`

`ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon` | `0x0832c3cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832c3cc  _ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_
#           ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)
# range [0x0832c3cc, 0x0832c401]
0832c3cc +0x00:  push   %ebp
0832c3cd +0x01:  mov    %esp,%ebp
0832c3cf +0x03:  mov    0x8(%ebp),%eax
0832c3d2 +0x06:  mov    (%eax),%edx
0832c3d4 +0x08:  mov    0xc(%ebp),%eax
0832c3d7 +0x0b:  mov    (%eax),%eax
0832c3d9 +0x0d:  cmp    %eax,%edx
0832c3db +0x0f:  jne    0832c3f0 <+0x24>
0832c3dd +0x11:  mov    0x8(%ebp),%eax
0832c3e0 +0x14:  mov    0x4(%eax),%edx
0832c3e3 +0x17:  mov    0xc(%ebp),%eax
0832c3e6 +0x1a:  mov    0x4(%eax),%eax
0832c3e9 +0x1d:  cmp    %eax,%edx
0832c3eb +0x1f:  setl   %al
0832c3ee +0x22:  jmp    0832c3ff <+0x33>
0832c3f0 +0x24:  mov    0x8(%ebp),%eax
0832c3f3 +0x27:  mov    (%eax),%edx
0832c3f5 +0x29:  mov    0xc(%ebp),%eax
0832c3f8 +0x2c:  mov    (%eax),%eax
0832c3fa +0x2e:  cmp    %eax,%edx
0832c3fc +0x30:  setl   %al
0832c3ff +0x33:  pop    %ebp
0832c400 +0x34:  ret
0832c401 +0x35:  nop
```

## 反编译 C

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
