# FindGoods

`_ZNK12CDataManager9FindGoodsEi`

`CDataManager::FindGoods(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fde4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fde4  _ZNK12CDataManager9FindGoodsEi
#           CDataManager::FindGoods(int) const
# range [0x0835fde4, 0x0835fe01]
0835fde4 +0x00:  push   %ebp
0835fde5 +0x01:  mov    %esp,%ebp
0835fde7 +0x03:  sub    $0x18,%esp
0835fdea +0x06:  mov    0x8(%ebp),%eax
0835fded +0x09:  mov    0xc(%eax),%eax
0835fdf0 +0x0c:  mov    0xc(%ebp),%edx
0835fdf3 +0x0f:  mov    %edx,0x4(%esp)
0835fdf7 +0x13:  mov    %eax,(%esp)
0835fdfa +0x16:  call   08512358 <_ZN9CItemList9FindGoodsEi>  ; CItemList::FindGoods(int)
0835fdff +0x1b:  leave
0835fe00 +0x1c:  ret
0835fe01 +0x1d:  nop
```

## 反编译 C

```c
// CDataManager::FindGoods @ 0x835fde4

/* CDataManager::FindGoods(int) const */

void CDataManager::FindGoods(int param_1)

{
  CItemList::FindGoods(*(int *)(param_1 + 0xc));
  return;
}
```
