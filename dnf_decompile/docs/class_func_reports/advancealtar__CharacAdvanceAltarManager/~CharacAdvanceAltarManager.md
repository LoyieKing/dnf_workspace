# ~CharacAdvanceAltarManager

`_ZN12advancealtar25CharacAdvanceAltarManagerD1Ev`

`advancealtar::CharacAdvanceAltarManager::~CharacAdvanceAltarManager()`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x0813121a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813121a  _ZN12advancealtar25CharacAdvanceAltarManagerD1Ev
#           advancealtar::CharacAdvanceAltarManager::~CharacAdvanceAltarManager()
# range [0x0813121a, 0x08131253]
0813121a +0x00:  push   %ebp
0813121b +0x01:  mov    %esp,%ebp
0813121d +0x03:  push   %ebx
0813121e +0x04:  sub    $0x14,%esp
08131221 +0x07:  mov    0x8(%ebp),%eax
08131224 +0x0a:  add    $0x4,%eax
08131227 +0x0d:  test   %eax,%eax
08131229 +0x0f:  je     0813124e <+0x34>
0813122b +0x11:  mov    0x8(%ebp),%eax
0813122e +0x14:  lea    0xd4(%eax),%ebx
08131234 +0x1a:  mov    0x8(%ebp),%eax
08131237 +0x1d:  add    $0x4,%eax
0813123a +0x20:  cmp    %eax,%ebx
0813123c +0x22:  je     0813124e <+0x34>
0813123e +0x24:  sub    $0xd0,%ebx
08131244 +0x2a:  mov    %ebx,(%esp)
08131247 +0x2d:  call   08134532 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x139>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x139
0813124c +0x32:  jmp    08131234 <+0x1a>
0813124e +0x34:  add    $0x14,%esp
08131251 +0x37:  pop    %ebx
08131252 +0x38:  pop    %ebp
08131253 +0x39:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::~CharacAdvanceAltarManager @ 0x813121a

/* advancealtar::CharacAdvanceAltarManager::~CharacAdvanceAltarManager() */

void __thiscall
advancealtar::CharacAdvanceAltarManager::~CharacAdvanceAltarManager(CharacAdvanceAltarManager *this)

{
  AdvanceAltarData *this_00;
  
  if (this != (CharacAdvanceAltarManager *)0xfffffffc) {
    this_00 = (AdvanceAltarData *)(this + 0xd4);
    while (this_00 != (AdvanceAltarData *)(this + 4)) {
      this_00 = this_00 + -0xd0;
      AdvanceAltarData::~AdvanceAltarData(this_00);
    }
  }
  return;
}
```
