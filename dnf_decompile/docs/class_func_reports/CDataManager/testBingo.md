# testBingo

`_ZN12CDataManager9testBingoEv`

`CDataManager::testBingo()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365ef8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365ef8  _ZN12CDataManager9testBingoEv
#           CDataManager::testBingo()
# range [0x08365ef8, 0x08365eff]
08365ef8 +0x00:  push   %ebp
08365ef9 +0x01:  mov    %esp,%ebp
08365efb +0x03:  sub    $0x20,%esp
08365efe +0x06:  leave
08365eff +0x07:  ret
```

## 反编译 C

```c
// CDataManager::testBingo @ 0x8365ef8

/* CDataManager::testBingo() */

void CDataManager::testBingo(void)

{
  return;
}
```
