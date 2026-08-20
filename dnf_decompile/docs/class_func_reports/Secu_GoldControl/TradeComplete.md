# TradeComplete

`_ZN16Secu_GoldControl13TradeCompleteEii`

`Secu_GoldControl::TradeComplete(int, int)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x08287df2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08287df2  _ZN16Secu_GoldControl13TradeCompleteEii
#           Secu_GoldControl::TradeComplete(int, int)
# range [0x08287df2, 0x08287e3b]
08287df2 +0x00:  push   %ebp
08287df3 +0x01:  mov    %esp,%ebp
08287df5 +0x03:  sub    $0x18,%esp
08287df8 +0x06:  cmpl   $0x0,0xc(%ebp)
08287dfc +0x0a:  jle    08287e22 <+0x30>
08287dfe +0x0c:  mov    0xc(%ebp),%eax
08287e01 +0x0f:  mov    %eax,0x4(%esp)
08287e05 +0x13:  mov    0x8(%ebp),%eax
08287e08 +0x16:  mov    %eax,(%esp)
08287e0b +0x19:  call   08287a74 <_ZN16Secu_GoldControl14SubImportMoneyEj>  ; Secu_GoldControl::SubImportMoney(unsigned int)
08287e10 +0x1e:  mov    0xc(%ebp),%eax
08287e13 +0x21:  mov    %eax,0x4(%esp)
08287e17 +0x25:  mov    0x8(%ebp),%eax
08287e1a +0x28:  mov    %eax,(%esp)
08287e1d +0x2b:  call   082879e4 <_ZN16Secu_GoldControl8SubMoneyEj>  ; Secu_GoldControl::SubMoney(unsigned int)
08287e22 +0x30:  cmpl   $0x0,0x10(%ebp)
08287e26 +0x34:  jle    08287e3a <+0x48>
08287e28 +0x36:  mov    0x10(%ebp),%eax
08287e2b +0x39:  mov    %eax,0x4(%esp)
08287e2f +0x3d:  mov    0x8(%ebp),%eax
08287e32 +0x40:  mov    %eax,(%esp)
08287e35 +0x43:  call   0828772a <_ZN16Secu_GoldControl8AddMoneyEj>  ; Secu_GoldControl::AddMoney(unsigned int)
08287e3a +0x48:  leave
08287e3b +0x49:  ret
```

## 反编译 C

```c
// Secu_GoldControl::TradeComplete @ 0x8287df2

/* Secu_GoldControl::TradeComplete(int, int) */

void __thiscall Secu_GoldControl::TradeComplete(Secu_GoldControl *this,int param_1,int param_2)

{
  if (0 < param_1) {
    SubImportMoney(this,param_1);
    SubMoney(this,param_1);
  }
  if (0 < param_2) {
    AddMoney(this,param_2);
  }
  return;
}
```
