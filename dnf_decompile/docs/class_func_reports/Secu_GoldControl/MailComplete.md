# MailComplete

`_ZN16Secu_GoldControl12MailCompleteEb`

`Secu_GoldControl::MailComplete(bool)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x08287e68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08287e68  _ZN16Secu_GoldControl12MailCompleteEb
#           Secu_GoldControl::MailComplete(bool)
# range [0x08287e68, 0x08287edf]
08287e68 +0x00:  push   %ebp
08287e69 +0x01:  mov    %esp,%ebp
08287e6b +0x03:  sub    $0x28,%esp
08287e6e +0x06:  mov    0xc(%ebp),%eax
08287e71 +0x09:  mov    %al,-0xc(%ebp)
08287e74 +0x0c:  cmpb   $0x0,-0xc(%ebp)
08287e78 +0x10:  je     08287eb9 <+0x51>
08287e7a +0x12:  mov    0x8(%ebp),%eax
08287e7d +0x15:  mov    0xc4(%eax),%eax
08287e83 +0x1b:  mov    %eax,0x4(%esp)
08287e87 +0x1f:  mov    0x8(%ebp),%eax
08287e8a +0x22:  mov    %eax,(%esp)
08287e8d +0x25:  call   08287a74 <_ZN16Secu_GoldControl14SubImportMoneyEj>  ; Secu_GoldControl::SubImportMoney(unsigned int)
08287e92 +0x2a:  mov    0x8(%ebp),%eax
08287e95 +0x2d:  mov    0xc4(%eax),%eax
08287e9b +0x33:  mov    %eax,0x4(%esp)
08287e9f +0x37:  mov    0x8(%ebp),%eax
08287ea2 +0x3a:  mov    %eax,(%esp)
08287ea5 +0x3d:  call   082879e4 <_ZN16Secu_GoldControl8SubMoneyEj>  ; Secu_GoldControl::SubMoney(unsigned int)
08287eaa +0x42:  mov    0x8(%ebp),%eax
08287ead +0x45:  movl   $0x0,0xc4(%eax)
08287eb7 +0x4f:  jmp    08287ede <+0x76>
08287eb9 +0x51:  mov    0x8(%ebp),%eax
08287ebc +0x54:  mov    0xc4(%eax),%eax
08287ec2 +0x5a:  mov    %eax,0x4(%esp)
08287ec6 +0x5e:  mov    0x8(%ebp),%eax
08287ec9 +0x61:  mov    %eax,(%esp)
08287ecc +0x64:  call   0828772a <_ZN16Secu_GoldControl8AddMoneyEj>  ; Secu_GoldControl::AddMoney(unsigned int)
08287ed1 +0x69:  mov    0x8(%ebp),%eax
08287ed4 +0x6c:  movl   $0x0,0xc4(%eax)
08287ede +0x76:  leave
08287edf +0x77:  ret
```

## 反编译 C

```c
// Secu_GoldControl::MailComplete @ 0x8287e68

/* Secu_GoldControl::MailComplete(bool) */

void __thiscall Secu_GoldControl::MailComplete(Secu_GoldControl *this,bool param_1)

{
  if (param_1) {
    SubImportMoney(this,*(uint *)(this + 0xc4));
    SubMoney(this,*(uint *)(this + 0xc4));
    *(undefined4 *)(this + 0xc4) = 0;
  }
  else {
    AddMoney(this,*(uint *)(this + 0xc4));
    *(undefined4 *)(this + 0xc4) = 0;
  }
  return;
}
```
