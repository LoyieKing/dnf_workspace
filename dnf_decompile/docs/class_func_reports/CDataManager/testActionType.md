# testActionType

`_ZN12CDataManager14testActionTypeEv`

`CDataManager::testActionType()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365fc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365fc0  _ZN12CDataManager14testActionTypeEv
#           CDataManager::testActionType()
# range [0x08365fc0, 0x08365fca]
08365fc0 +0x00:  push   %ebp
08365fc1 +0x01:  mov    %esp,%ebp
08365fc3 +0x03:  sub    $0x90120,%esp
08365fc9 +0x09:  leave
08365fca +0x0a:  ret
```

## 反编译 C

```c
// CDataManager::testActionType @ 0x8365fc0

/* CDataManager::testActionType() */

void CDataManager::testActionType(void)

{
  return;
}
```
