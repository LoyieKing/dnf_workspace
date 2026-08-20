# gmSetTicket

`_ZN12advancealtar25CharacAdvanceAltarManager11gmSetTicketEi`

`advancealtar::CharacAdvanceAltarManager::gmSetTicket(int)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x0813375c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813375c  _ZN12advancealtar25CharacAdvanceAltarManager11gmSetTicketEi
#           advancealtar::CharacAdvanceAltarManager::gmSetTicket(int)
# range [0x0813375c, 0x08133783]
0813375c +0x00:  push   %ebp
0813375d +0x01:  mov    %esp,%ebp
0813375f +0x03:  mov    0x8(%ebp),%eax
08133762 +0x06:  mov    (%eax),%eax
08133764 +0x08:  test   %eax,%eax
08133766 +0x0a:  je     08133781 <+0x25>
08133768 +0x0c:  mov    0x8(%ebp),%eax
0813376b +0x0f:  mov    (%eax),%eax
0813376d +0x11:  mov    0xc(%ebp),%edx
08133770 +0x14:  mov    %edx,0x4(%eax)
08133773 +0x17:  mov    0x8(%ebp),%eax
08133776 +0x1a:  mov    (%eax),%eax
08133778 +0x1c:  movb   $0x1,0xcc(%eax)
0813377f +0x23:  jmp    08133782 <+0x26>
08133781 +0x25:  nop
08133782 +0x26:  pop    %ebp
08133783 +0x27:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::gmSetTicket @ 0x813375c

/* advancealtar::CharacAdvanceAltarManager::gmSetTicket(int) */

void __thiscall
advancealtar::CharacAdvanceAltarManager::gmSetTicket(CharacAdvanceAltarManager *this,int param_1)

{
  if (*(int *)this != 0) {
    *(int *)(*(int *)this + 4) = param_1;
    *(undefined1 *)(*(int *)this + 0xcc) = 1;
  }
  return;
}
```
