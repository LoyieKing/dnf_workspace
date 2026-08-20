# SubMoney

`_ZN13CAccountCargo8SubMoneyEj`

`CAccountCargo::SubMoney(unsigned int)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828a764` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828a764  _ZN13CAccountCargo8SubMoneyEj
#           CAccountCargo::SubMoney(unsigned int)
# range [0x0828a764, 0x0828a793]
0828a764 +0x00:  push   %ebp
0828a765 +0x01:  mov    %esp,%ebp
0828a767 +0x03:  cmpl   $0x0,0xc(%ebp)
0828a76b +0x07:  je     0828a792 <+0x2e>
0828a76d +0x09:  mov    0x8(%ebp),%eax
0828a770 +0x0c:  mov    0xd5c(%eax),%eax
0828a776 +0x12:  cmp    0xc(%ebp),%eax
0828a779 +0x15:  jb     0828a792 <+0x2e>
0828a77b +0x17:  mov    0x8(%ebp),%eax
0828a77e +0x1a:  mov    0xd5c(%eax),%eax
0828a784 +0x20:  mov    %eax,%edx
0828a786 +0x22:  sub    0xc(%ebp),%edx
0828a789 +0x25:  mov    0x8(%ebp),%eax
0828a78c +0x28:  mov    %edx,0xd5c(%eax)
0828a792 +0x2e:  pop    %ebp
0828a793 +0x2f:  ret
```

## 反编译 C

```c
// CAccountCargo::SubMoney @ 0x828a764

/* CAccountCargo::SubMoney(unsigned int) */

void __thiscall CAccountCargo::SubMoney(CAccountCargo *this,uint param_1)

{
  if ((param_1 != 0) && (param_1 <= *(uint *)(this + 0xd5c))) {
    *(uint *)(this + 0xd5c) = *(int *)(this + 0xd5c) - param_1;
  }
  return;
}
```
