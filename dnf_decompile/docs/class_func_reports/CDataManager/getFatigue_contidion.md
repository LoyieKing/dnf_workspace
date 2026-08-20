# getFatigue_contidion

`_ZN12CDataManager20getFatigue_contidionEv`

`CDataManager::getFatigue_contidion()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365528` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365528  _ZN12CDataManager20getFatigue_contidionEv
#           CDataManager::getFatigue_contidion()
# range [0x08365528, 0x08365535]
08365528 +0x00:  push   %ebp
08365529 +0x01:  mov    %esp,%ebp
0836552b +0x03:  mov    0x8(%ebp),%eax
0836552e +0x06:  mov    0x4ba4(%eax),%eax
08365534 +0x0c:  pop    %ebp
08365535 +0x0d:  ret
```

## 反编译 C

```c
// CDataManager::getFatigue_contidion @ 0x8365528

/* CDataManager::getFatigue_contidion() */

undefined4 __thiscall CDataManager::getFatigue_contidion(CDataManager *this)

{
  return *(undefined4 *)(this + 0x4ba4);
}
```
