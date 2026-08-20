# UseFatigue

`_ZN16Secu_GoldControl10UseFatigueEi`

`Secu_GoldControl::UseFatigue(int)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x08287552` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08287552  _ZN16Secu_GoldControl10UseFatigueEi
#           Secu_GoldControl::UseFatigue(int)
# range [0x08287552, 0x0828757b]
08287552 +0x00:  push   %ebp
08287553 +0x01:  mov    %esp,%ebp
08287555 +0x03:  sub    $0x18,%esp
08287558 +0x06:  mov    0x8(%ebp),%eax
0828755b +0x09:  mov    %eax,(%esp)
0828755e +0x0c:  call   08287b04 <_ZN16Secu_GoldControl9CheckDateEv>  ; Secu_GoldControl::CheckDate()
08287563 +0x11:  mov    0x8(%ebp),%eax
08287566 +0x14:  mov    0xb8(%eax),%eax
0828756c +0x1a:  mov    %eax,%edx
0828756e +0x1c:  add    0xc(%ebp),%edx
08287571 +0x1f:  mov    0x8(%ebp),%eax
08287574 +0x22:  mov    %edx,0xb8(%eax)
0828757a +0x28:  leave
0828757b +0x29:  ret
```

## 反编译 C

```c
// Secu_GoldControl::UseFatigue @ 0x8287552

/* Secu_GoldControl::UseFatigue(int) */

void __thiscall Secu_GoldControl::UseFatigue(Secu_GoldControl *this,int param_1)

{
  CheckDate(this);
  *(int *)(this + 0xb8) = *(int *)(this + 0xb8) + param_1;
  return;
}
```
