# GetCraneMinigameManager

`_ZN12CGameManager23GetCraneMinigameManagerEv`

`CGameManager::GetCraneMinigameManager()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082990a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082990a6  _ZN12CGameManager23GetCraneMinigameManagerEv
#           CGameManager::GetCraneMinigameManager()
# range [0x082990a6, 0x082990b3]
082990a6 +0x00:  push   %ebp
082990a7 +0x01:  mov    %esp,%ebp
082990a9 +0x03:  mov    0x8(%ebp),%eax
082990ac +0x06:  mov    0x318(%eax),%eax
082990b2 +0x0c:  pop    %ebp
082990b3 +0x0d:  ret
```

## 反编译 C

```c
// CGameManager::GetCraneMinigameManager @ 0x82990a6

/* CGameManager::GetCraneMinigameManager() */

undefined4 __thiscall CGameManager::GetCraneMinigameManager(CGameManager *this)

{
  return *(undefined4 *)(this + 0x318);
}
```
