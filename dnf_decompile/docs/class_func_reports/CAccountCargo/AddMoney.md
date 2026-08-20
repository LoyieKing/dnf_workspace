# AddMoney

`_ZN13CAccountCargo8AddMoneyEj`

`CAccountCargo::AddMoney(unsigned int)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828a742` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828a742  _ZN13CAccountCargo8AddMoneyEj
#           CAccountCargo::AddMoney(unsigned int)
# range [0x0828a742, 0x0828a763]
0828a742 +0x00:  push   %ebp
0828a743 +0x01:  mov    %esp,%ebp
0828a745 +0x03:  cmpl   $0x0,0xc(%ebp)
0828a749 +0x07:  je     0828a762 <+0x20>
0828a74b +0x09:  mov    0x8(%ebp),%eax
0828a74e +0x0c:  mov    0xd5c(%eax),%eax
0828a754 +0x12:  mov    %eax,%edx
0828a756 +0x14:  add    0xc(%ebp),%edx
0828a759 +0x17:  mov    0x8(%ebp),%eax
0828a75c +0x1a:  mov    %edx,0xd5c(%eax)
0828a762 +0x20:  pop    %ebp
0828a763 +0x21:  ret
```

## 反编译 C

```c
// CAccountCargo::AddMoney @ 0x828a742

/* CAccountCargo::AddMoney(unsigned int) */

void __thiscall CAccountCargo::AddMoney(CAccountCargo *this,uint param_1)

{
  if (param_1 != 0) {
    *(uint *)(this + 0xd5c) = *(int *)(this + 0xd5c) + param_1;
  }
  return;
}
```
