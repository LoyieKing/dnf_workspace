# find_item

`_ZNK12CDataManager9find_itemEPKc`

`CDataManager::find_item(char const*) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fa68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fa68  _ZNK12CDataManager9find_itemEPKc
#           CDataManager::find_item(char const*) const
# range [0x0835fa68, 0x0835fa85]
0835fa68 +0x00:  push   %ebp
0835fa69 +0x01:  mov    %esp,%ebp
0835fa6b +0x03:  sub    $0x18,%esp
0835fa6e +0x06:  mov    0x8(%ebp),%eax
0835fa71 +0x09:  mov    0xc(%eax),%eax
0835fa74 +0x0c:  mov    0xc(%ebp),%edx
0835fa77 +0x0f:  mov    %edx,0x4(%esp)
0835fa7b +0x13:  mov    %eax,(%esp)
0835fa7e +0x16:  call   08511f1e <_ZN9CItemList9find_itemEPKc>  ; CItemList::find_item(char const*)
0835fa83 +0x1b:  leave
0835fa84 +0x1c:  ret
0835fa85 +0x1d:  nop
```

## 反编译 C

```c
// CDataManager::find_item @ 0x835fa68

/* CDataManager::find_item(char const*) const */

void __thiscall CDataManager::find_item(CDataManager *this,char *param_1)

{
  CItemList::find_item(*(CItemList **)(this + 0xc),param_1);
  return;
}
```
