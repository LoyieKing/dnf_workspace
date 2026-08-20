# LogValueStatistic

`_ZN10secretshop8IBuyRule17LogValueStatisticEP5CUserj`

`secretshop::IBuyRule::LogValueStatistic(CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `secretshop::IBuyRule` | `0x085fb886` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fb886  _ZN10secretshop8IBuyRule17LogValueStatisticEP5CUserj
#           secretshop::IBuyRule::LogValueStatistic(CUser*, unsigned int)
# range [0x085fb886, 0x085fb8b1]
085fb886 +0x00:  push   %ebp
085fb887 +0x01:  mov    %esp,%ebp
085fb889 +0x03:  sub    $0x18,%esp
085fb88c +0x06:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
085fb891 +0x0b:  mov    0x10(%ebp),%edx
085fb894 +0x0e:  mov    %edx,0xc(%esp)
085fb898 +0x12:  mov    0xc(%ebp),%edx
085fb89b +0x15:  mov    %edx,0x8(%esp)
085fb89f +0x19:  movl   $0xd,0x4(%esp)
085fb8a7 +0x21:  mov    %eax,(%esp)
085fb8aa +0x24:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
085fb8af +0x29:  leave
085fb8b0 +0x2a:  ret
085fb8b1 +0x2b:  nop
```

## 反编译 C

```c
// secretshop::IBuyRule::LogValueStatistic @ 0x85fb886

/* secretshop::IBuyRule::LogValueStatistic(CUser*, unsigned int) */

void __thiscall secretshop::IBuyRule::LogValueStatistic(IBuyRule *this,CUser *param_1,uint param_2)

{
  CValueStatistic *pCVar1;
  
  pCVar1 = (CValueStatistic *)GetInstanceValueStatistic();
  CValueStatistic::AddValueStatistic(pCVar1,0xd,param_1,param_2);
  return;
}
```
