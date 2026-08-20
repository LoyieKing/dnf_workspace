# ~CraneMinigameManager

`_ZN20CraneMinigameManagerD1Ev`

`CraneMinigameManager::~CraneMinigameManager()`

| 类 | 地址 |
|---|---|
| `CraneMinigameManager` | `0x080ebc5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ebc5a  _ZN20CraneMinigameManagerD1Ev
#           CraneMinigameManager::~CraneMinigameManager()
# range [0x080ebc5a, 0x080ebc6d]
080ebc5a +0x00:  push   %ebp
080ebc5b +0x01:  mov    %esp,%ebp
080ebc5d +0x03:  sub    $0x18,%esp
080ebc60 +0x06:  mov    0x8(%ebp),%eax
080ebc63 +0x09:  mov    %eax,(%esp)
080ebc66 +0x0c:  call   088e37a8 <_ZN19CraneMinigameScriptD1Ev>  ; CraneMinigameScript::~CraneMinigameScript()
080ebc6b +0x11:  leave
080ebc6c +0x12:  ret
080ebc6d +0x13:  nop
```

## 反编译 C

```c
// CraneMinigameManager::~CraneMinigameManager @ 0x80ebc5a

/* CraneMinigameManager::~CraneMinigameManager() */

void __thiscall CraneMinigameManager::~CraneMinigameManager(CraneMinigameManager *this)

{
  CraneMinigameScript::~CraneMinigameScript((CraneMinigameScript *)this);
  return;
}
```
