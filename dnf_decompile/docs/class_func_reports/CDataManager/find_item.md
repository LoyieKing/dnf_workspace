# find_item

`_ZNK12CDataManager9find_itemEi`

`CDataManager::find_item(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fa32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fa32  _ZNK12CDataManager9find_itemEi
#           CDataManager::find_item(int) const
# range [0x0835fa32, 0x0835fa67]
0835fa32 +0x00:  push   %ebp
0835fa33 +0x01:  mov    %esp,%ebp
0835fa35 +0x03:  sub    $0x18,%esp
0835fa38 +0x06:  cmpl   $0x0,0xc(%ebp)
0835fa3c +0x0a:  je     0835fa4a <+0x18>
0835fa3e +0x0c:  cmpl   $0x1,0xc(%ebp)
0835fa42 +0x10:  je     0835fa4a <+0x18>
0835fa44 +0x12:  cmpl   $0x2,0xc(%ebp)
0835fa48 +0x16:  jne    0835fa51 <+0x1f>
0835fa4a +0x18:  mov    $0x0,%eax
0835fa4f +0x1d:  jmp    0835fa66 <+0x34>
0835fa51 +0x1f:  mov    0x8(%ebp),%eax
0835fa54 +0x22:  mov    0xc(%eax),%eax
0835fa57 +0x25:  mov    0xc(%ebp),%edx
0835fa5a +0x28:  mov    %edx,0x4(%esp)
0835fa5e +0x2c:  mov    %eax,(%esp)
0835fa61 +0x2f:  call   08511e8a <_ZN9CItemList9find_itemEi>  ; CItemList::find_item(int)
0835fa66 +0x34:  leave
0835fa67 +0x35:  ret
```

## 反编译 C

```c
// CDataManager::find_item @ 0x835fa32

/* CDataManager::find_item(int) const */

undefined4 __thiscall CDataManager::find_item(CDataManager *this,int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CItemList::find_item(*(CItemList **)(this + 0xc),param_1);
  }
  return uVar1;
}
```
