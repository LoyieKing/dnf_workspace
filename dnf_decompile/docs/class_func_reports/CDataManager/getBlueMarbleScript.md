# getBlueMarbleScript

`_ZN12CDataManager19getBlueMarbleScriptEv`

`CDataManager::getBlueMarbleScript()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365eea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365eea  _ZN12CDataManager19getBlueMarbleScriptEv
#           CDataManager::getBlueMarbleScript()
# range [0x08365eea, 0x08365ef7]
08365eea +0x00:  push   %ebp
08365eeb +0x01:  mov    %esp,%ebp
08365eed +0x03:  mov    0x8(%ebp),%eax
08365ef0 +0x06:  mov    0xb4a8(%eax),%eax
08365ef6 +0x0c:  pop    %ebp
08365ef7 +0x0d:  ret
```

## 反编译 C

```c
// CDataManager::getBlueMarbleScript @ 0x8365eea

/* CDataManager::getBlueMarbleScript() */

undefined4 __thiscall CDataManager::getBlueMarbleScript(CDataManager *this)

{
  return *(undefined4 *)(this + 0xb4a8);
}
```
