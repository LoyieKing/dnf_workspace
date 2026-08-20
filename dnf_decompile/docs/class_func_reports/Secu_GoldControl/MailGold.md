# MailGold

`_ZN16Secu_GoldControl8MailGoldEjb`

`Secu_GoldControl::MailGold(unsigned int, bool)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x08287e3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08287e3c  _ZN16Secu_GoldControl8MailGoldEjb
#           Secu_GoldControl::MailGold(unsigned int, bool)
# range [0x08287e3c, 0x08287e55]
08287e3c +0x00:  push   %ebp
08287e3d +0x01:  mov    %esp,%ebp
08287e3f +0x03:  sub    $0x4,%esp
08287e42 +0x06:  mov    0x10(%ebp),%eax
08287e45 +0x09:  mov    %al,-0x4(%ebp)
08287e48 +0x0c:  mov    0xc(%ebp),%edx
08287e4b +0x0f:  mov    0x8(%ebp),%eax
08287e4e +0x12:  mov    %edx,0xc4(%eax)
08287e54 +0x18:  leave
08287e55 +0x19:  ret
```

## 反编译 C

```c
// Secu_GoldControl::MailGold @ 0x8287e3c

/* Secu_GoldControl::MailGold(unsigned int, bool) */

void Secu_GoldControl::MailGold(uint param_1,bool param_2)

{
  undefined3 in_stack_00000009;
  
  *(undefined4 *)(param_1 + 0xc4) = _param_2;
  return;
}
```
