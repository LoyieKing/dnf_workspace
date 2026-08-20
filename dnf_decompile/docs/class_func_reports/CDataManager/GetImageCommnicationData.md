# GetImageCommnicationData

`_ZN12CDataManager24GetImageCommnicationDataEv`

`CDataManager::GetImageCommnicationData()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0836541e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836541e  _ZN12CDataManager24GetImageCommnicationDataEv
#           CDataManager::GetImageCommnicationData()
# range [0x0836541e, 0x0836542b]
0836541e +0x00:  push   %ebp
0836541f +0x01:  mov    %esp,%ebp
08365421 +0x03:  mov    0x8(%ebp),%eax
08365424 +0x06:  add    $0xb4c4,%eax
08365429 +0x0b:  pop    %ebp
0836542a +0x0c:  ret
0836542b +0x0d:  nop
```

## 反编译 C

```c
// CDataManager::GetImageCommnicationData @ 0x836541e

/* CDataManager::GetImageCommnicationData() */

CDataManager * __thiscall CDataManager::GetImageCommnicationData(CDataManager *this)

{
  return this + 0xb4c4;
}
```
