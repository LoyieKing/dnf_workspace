# MailSameMid

`_ZN16Secu_GoldControl11MailSameMidEv`

`Secu_GoldControl::MailSameMid()`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x08287e56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08287e56  _ZN16Secu_GoldControl11MailSameMidEv
#           Secu_GoldControl::MailSameMid()
# range [0x08287e56, 0x08287e67]
08287e56 +0x00:  push   %ebp
08287e57 +0x01:  mov    %esp,%ebp
08287e59 +0x03:  mov    0x8(%ebp),%eax
08287e5c +0x06:  movl   $0x0,0xc4(%eax)
08287e66 +0x10:  pop    %ebp
08287e67 +0x11:  ret
```

## 反编译 C

```c
// Secu_GoldControl::MailSameMid @ 0x8287e56

/* Secu_GoldControl::MailSameMid() */

void __thiscall Secu_GoldControl::MailSameMid(Secu_GoldControl *this)

{
  *(undefined4 *)(this + 0xc4) = 0;
  return;
}
```
