# setDefaultStage

`_ZN12advancealtar25CharacAdvanceAltarManager15setDefaultStageEv`

`advancealtar::CharacAdvanceAltarManager::setDefaultStage()`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x08132f72` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08132f72  _ZN12advancealtar25CharacAdvanceAltarManager15setDefaultStageEv
#           advancealtar::CharacAdvanceAltarManager::setDefaultStage()
# range [0x08132f72, 0x08132f8d]
08132f72 +0x00:  push   %ebp
08132f73 +0x01:  mov    %esp,%ebp
08132f75 +0x03:  sub    $0x18,%esp
08132f78 +0x06:  movl   $0x0,0x4(%esp)
08132f80 +0x0e:  mov    0x8(%ebp),%eax
08132f83 +0x11:  mov    %eax,(%esp)
08132f86 +0x14:  call   081331d4 <_ZN12advancealtar25CharacAdvanceAltarManager12setNextStageEi>  ; advancealtar::CharacAdvanceAltarManager::setNextStage(int)
08132f8b +0x19:  leave
08132f8c +0x1a:  ret
08132f8d +0x1b:  nop
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::setDefaultStage @ 0x8132f72

/* advancealtar::CharacAdvanceAltarManager::setDefaultStage() */

void __thiscall
advancealtar::CharacAdvanceAltarManager::setDefaultStage(CharacAdvanceAltarManager *this)

{
  setNextStage(this,0);
  return;
}
```
