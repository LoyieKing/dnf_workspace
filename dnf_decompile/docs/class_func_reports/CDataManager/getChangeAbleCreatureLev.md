# getChangeAbleCreatureLev

`_ZN12CDataManager24getChangeAbleCreatureLevEv`

`CDataManager::getChangeAbleCreatureLev()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365b98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365b98  _ZN12CDataManager24getChangeAbleCreatureLevEv
#           CDataManager::getChangeAbleCreatureLev()
# range [0x08365b98, 0x08365ba5]
08365b98 +0x00:  push   %ebp
08365b99 +0x01:  mov    %esp,%ebp
08365b9b +0x03:  mov    0x8(%ebp),%eax
08365b9e +0x06:  mov    0x4c1c(%eax),%eax
08365ba4 +0x0c:  pop    %ebp
08365ba5 +0x0d:  ret
```

## 反编译 C

```c
// CDataManager::getChangeAbleCreatureLev @ 0x8365b98

/* CDataManager::getChangeAbleCreatureLev() */

undefined4 __thiscall CDataManager::getChangeAbleCreatureLev(CDataManager *this)

{
  return *(undefined4 *)(this + 0x4c1c);
}
```
