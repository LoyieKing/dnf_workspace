# gmSetStar

`_ZN12advancealtar25CharacAdvanceAltarManager9gmSetStarEi`

`advancealtar::CharacAdvanceAltarManager::gmSetStar(int)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x08133720` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08133720  _ZN12advancealtar25CharacAdvanceAltarManager9gmSetStarEi
#           advancealtar::CharacAdvanceAltarManager::gmSetStar(int)
# range [0x08133720, 0x0813375b]
08133720 +0x00:  push   %ebp
08133721 +0x01:  mov    %esp,%ebp
08133723 +0x03:  mov    0x8(%ebp),%eax
08133726 +0x06:  mov    (%eax),%eax
08133728 +0x08:  test   %eax,%eax
0813372a +0x0a:  je     08133758 <+0x38>
0813372c +0x0c:  mov    0x8(%ebp),%eax
0813372f +0x0f:  mov    (%eax),%eax
08133731 +0x11:  mov    0xc(%ebp),%edx
08133734 +0x14:  mov    %edx,0xc(%eax)
08133737 +0x17:  mov    0x8(%ebp),%eax
0813373a +0x1a:  mov    (%eax),%eax
0813373c +0x1c:  mov    0x8(%ebp),%edx
0813373f +0x1f:  mov    (%edx),%edx
08133741 +0x21:  mov    0x10(%edx),%edx
08133744 +0x24:  add    0xc(%ebp),%edx
08133747 +0x27:  mov    %edx,0x14(%eax)
0813374a +0x2a:  mov    0x8(%ebp),%eax
0813374d +0x2d:  mov    (%eax),%eax
0813374f +0x2f:  movb   $0x1,0xcc(%eax)
08133756 +0x36:  jmp    08133759 <+0x39>
08133758 +0x38:  nop
08133759 +0x39:  pop    %ebp
0813375a +0x3a:  ret
0813375b +0x3b:  nop
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::gmSetStar @ 0x8133720

/* advancealtar::CharacAdvanceAltarManager::gmSetStar(int) */

void __thiscall
advancealtar::CharacAdvanceAltarManager::gmSetStar(CharacAdvanceAltarManager *this,int param_1)

{
  if (*(int *)this != 0) {
    *(int *)(*(int *)this + 0xc) = param_1;
    *(int *)(*(int *)this + 0x14) = *(int *)(*(int *)this + 0x10) + param_1;
    *(undefined1 *)(*(int *)this + 0xcc) = 1;
  }
  return;
}
```
