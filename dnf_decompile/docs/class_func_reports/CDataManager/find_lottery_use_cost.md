# find_lottery_use_cost

`_ZNK12CDataManager21find_lottery_use_costEj`

`CDataManager::find_lottery_use_cost(unsigned int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fb5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fb5a  _ZNK12CDataManager21find_lottery_use_costEj
#           CDataManager::find_lottery_use_cost(unsigned int) const
# range [0x0835fb5a, 0x0835fb79]
0835fb5a +0x00:  push   %ebp
0835fb5b +0x01:  mov    %esp,%ebp
0835fb5d +0x03:  sub    $0x18,%esp
0835fb60 +0x06:  mov    0x8(%ebp),%eax
0835fb63 +0x09:  lea    0xb4d4(%eax),%edx
0835fb69 +0x0f:  mov    0xc(%ebp),%eax
0835fb6c +0x12:  mov    %eax,0x4(%esp)
0835fb70 +0x16:  mov    %edx,(%esp)
0835fb73 +0x19:  call   08365162 <_ZNK18CLottery_NeedMoney11isNeedMoneyEj>  ; CLottery_NeedMoney::isNeedMoney(unsigned int) const
0835fb78 +0x1e:  leave
0835fb79 +0x1f:  ret
```

## 反编译 C

```c
// CDataManager::find_lottery_use_cost @ 0x835fb5a

/* CDataManager::find_lottery_use_cost(unsigned int) const */

void CDataManager::find_lottery_use_cost(uint param_1)

{
  CLottery_NeedMoney::isNeedMoney(param_1 + 0xb4d4);
  return;
}
```
