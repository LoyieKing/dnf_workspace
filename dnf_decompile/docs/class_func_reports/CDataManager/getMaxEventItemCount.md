# getMaxEventItemCount

`_ZN12CDataManager20getMaxEventItemCountEv`

`CDataManager::getMaxEventItemCount()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0836551a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836551a  _ZN12CDataManager20getMaxEventItemCountEv
#           CDataManager::getMaxEventItemCount()
# range [0x0836551a, 0x08365527]
0836551a +0x00:  push   %ebp
0836551b +0x01:  mov    %esp,%ebp
0836551d +0x03:  mov    0x8(%ebp),%eax
08365520 +0x06:  mov    0x4b7c(%eax),%eax
08365526 +0x0c:  pop    %ebp
08365527 +0x0d:  ret
```

## 反编译 C

```c
// CDataManager::getMaxEventItemCount @ 0x836551a

/* CDataManager::getMaxEventItemCount() */

undefined4 __thiscall CDataManager::getMaxEventItemCount(CDataManager *this)

{
  return *(undefined4 *)(this + 0x4b7c);
}
```
