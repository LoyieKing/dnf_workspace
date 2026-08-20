# reset

`_ZN12advancealtar25CharacAdvanceAltarManager5resetEv`

`advancealtar::CharacAdvanceAltarManager::reset()`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x08131660` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08131660  _ZN12advancealtar25CharacAdvanceAltarManager5resetEv
#           advancealtar::CharacAdvanceAltarManager::reset()
# range [0x08131660, 0x0813169f]
08131660 +0x00:  push   %ebp
08131661 +0x01:  mov    %esp,%ebp
08131663 +0x03:  sub    $0x28,%esp
08131666 +0x06:  mov    0x8(%ebp),%eax
08131669 +0x09:  movl   $0x0,(%eax)
0813166f +0x0f:  movl   $0x0,-0xc(%ebp)
08131676 +0x16:  jmp    08131693 <+0x33>
08131678 +0x18:  mov    -0xc(%ebp),%eax
0813167b +0x1b:  imul   $0xd0,%eax,%eax
08131681 +0x21:  add    0x8(%ebp),%eax
08131684 +0x24:  add    $0x4,%eax
08131687 +0x27:  mov    %eax,(%esp)
0813168a +0x2a:  call   08899244 <_ZN12advancealtar16AdvanceAltarData5resetEv>  ; advancealtar::AdvanceAltarData::reset()
0813168f +0x2f:  addl   $0x1,-0xc(%ebp)
08131693 +0x33:  cmpl   $0x0,-0xc(%ebp)
08131697 +0x37:  setle  %al
0813169a +0x3a:  test   %al,%al
0813169c +0x3c:  jne    08131678 <+0x18>
0813169e +0x3e:  leave
0813169f +0x3f:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::reset @ 0x8131660

/* advancealtar::CharacAdvanceAltarManager::reset() */

void __thiscall advancealtar::CharacAdvanceAltarManager::reset(CharacAdvanceAltarManager *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  for (local_10 = 0; local_10 < 1; local_10 = local_10 + 1) {
    AdvanceAltarData::reset((AdvanceAltarData *)(this + local_10 * 0xd0 + 4));
  }
  return;
}
```
