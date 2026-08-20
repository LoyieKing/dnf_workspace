# set_lottery_use_cost

`_ZN12CDataManager20set_lottery_use_costEjj`

`CDataManager::set_lottery_use_cost(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fb7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fb7a  _ZN12CDataManager20set_lottery_use_costEjj
#           CDataManager::set_lottery_use_cost(unsigned int, unsigned int)
# range [0x0835fb7a, 0x0835fba1]
0835fb7a +0x00:  push   %ebp
0835fb7b +0x01:  mov    %esp,%ebp
0835fb7d +0x03:  sub    $0x18,%esp
0835fb80 +0x06:  mov    0x8(%ebp),%eax
0835fb83 +0x09:  lea    0xb4d4(%eax),%edx
0835fb89 +0x0f:  mov    0x10(%ebp),%eax
0835fb8c +0x12:  mov    %eax,0x8(%esp)
0835fb90 +0x16:  mov    0xc(%ebp),%eax
0835fb93 +0x19:  mov    %eax,0x4(%esp)
0835fb97 +0x1d:  mov    %edx,(%esp)
0835fb9a +0x20:  call   08365066 <_ZN18CLottery_NeedMoney21add_lottery_needMoneyEjj>  ; CLottery_NeedMoney::add_lottery_needMoney(unsigned int, unsigned int)
0835fb9f +0x25:  leave
0835fba0 +0x26:  ret
0835fba1 +0x27:  nop
```

## 反编译 C

```c
// CDataManager::set_lottery_use_cost @ 0x835fb7a

/* CDataManager::set_lottery_use_cost(unsigned int, unsigned int) */

void CDataManager::set_lottery_use_cost(uint param_1,uint param_2)

{
  CLottery_NeedMoney::add_lottery_needMoney(param_1 + 0xb4d4,param_2);
  return;
}
```
