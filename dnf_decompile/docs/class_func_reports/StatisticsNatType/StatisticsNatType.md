# StatisticsNatType

`_ZN17StatisticsNatTypeC1Ev`

`StatisticsNatType::StatisticsNatType()`

| 类 | 地址 |
|---|---|
| `StatisticsNatType` | `0x0860c704` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860c704  _ZN17StatisticsNatTypeC1Ev
#           StatisticsNatType::StatisticsNatType()
# range [0x0860c704, 0x0860c717]
0860c704 +0x00:  push   %ebp
0860c705 +0x01:  mov    %esp,%ebp
0860c707 +0x03:  sub    $0x18,%esp
0860c70a +0x06:  mov    0x8(%ebp),%eax
0860c70d +0x09:  mov    %eax,(%esp)
0860c710 +0x0c:  call   08610daa <_GLOBAL__I__ZN10StatisticsC2Ev+0xe28>  ; global constructors keyed to Statistics::Statistics()+0xe28
0860c715 +0x11:  leave
0860c716 +0x12:  ret
0860c717 +0x13:  nop
```

## 反编译 C

```c
// StatisticsNatType::StatisticsNatType @ 0x860c704

/* StatisticsNatType::StatisticsNatType() */

void __thiscall StatisticsNatType::StatisticsNatType(StatisticsNatType *this)

{
  std::
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  ::map((map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
         *)this);
  return;
}
```
