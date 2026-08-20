# CraneMinigameManager

`_ZN20CraneMinigameManagerC1Ev`

`CraneMinigameManager::CraneMinigameManager()`

| 类 | 地址 |
|---|---|
| `CraneMinigameManager` | `0x080ebc40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ebc40  _ZN20CraneMinigameManagerC1Ev
#           CraneMinigameManager::CraneMinigameManager()
# range [0x080ebc40, 0x080ebc59]
080ebc40 +0x00:  push   %ebp
080ebc41 +0x01:  mov    %esp,%ebp
080ebc43 +0x03:  sub    $0x18,%esp
080ebc46 +0x06:  mov    0x8(%ebp),%eax
080ebc49 +0x09:  mov    %eax,(%esp)
080ebc4c +0x0c:  call   088e3736 <_ZN19CraneMinigameScriptC1Ev>  ; CraneMinigameScript::CraneMinigameScript()
080ebc51 +0x11:  mov    0x8(%ebp),%eax
080ebc54 +0x14:  movb   $0x0,0x68(%eax)
080ebc58 +0x18:  leave
080ebc59 +0x19:  ret
```

## 反编译 C

```c
// CraneMinigameManager::CraneMinigameManager @ 0x80ebc40

/* CraneMinigameManager::CraneMinigameManager() */

void __thiscall CraneMinigameManager::CraneMinigameManager(CraneMinigameManager *this)

{
  CraneMinigameScript::CraneMinigameScript((CraneMinigameScript *)this);
  this[0x68] = (CraneMinigameManager)0x0;
  return;
}
```
