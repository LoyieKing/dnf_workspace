# checkLimitNpcBuyItemList

`_ZN12CDataManager24checkLimitNpcBuyItemListEjm`

`CDataManager::checkLimitNpcBuyItemList(unsigned int, unsigned long)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083653f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083653f6  _ZN12CDataManager24checkLimitNpcBuyItemListEjm
#           CDataManager::checkLimitNpcBuyItemList(unsigned int, unsigned long)
# range [0x083653f6, 0x0836541d]
083653f6 +0x00:  push   %ebp
083653f7 +0x01:  mov    %esp,%ebp
083653f9 +0x03:  sub    $0x18,%esp
083653fc +0x06:  mov    0x8(%ebp),%eax
083653ff +0x09:  mov    0x8cbc(%eax),%eax
08365405 +0x0f:  mov    0x10(%ebp),%edx
08365408 +0x12:  mov    %edx,0x8(%esp)
0836540c +0x16:  mov    0xc(%ebp),%edx
0836540f +0x19:  mov    %edx,0x4(%esp)
08365413 +0x1d:  mov    %eax,(%esp)
08365416 +0x20:  call   08513580 <_ZN9CItemShop24checkLimitNpcBuyItemListEjm>  ; CItemShop::checkLimitNpcBuyItemList(unsigned int, unsigned long)
0836541b +0x25:  leave
0836541c +0x26:  ret
0836541d +0x27:  nop
```

## 反编译 C

```c
// CDataManager::checkLimitNpcBuyItemList @ 0x83653f6

/* CDataManager::checkLimitNpcBuyItemList(unsigned int, unsigned long) */

void __thiscall
CDataManager::checkLimitNpcBuyItemList(CDataManager *this,uint param_1,ulong param_2)

{
  CItemShop::checkLimitNpcBuyItemList(*(CItemShop **)(this + 0x8cbc),param_1,param_2);
  return;
}
```
