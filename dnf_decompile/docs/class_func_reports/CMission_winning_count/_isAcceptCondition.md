# _isAcceptCondition

`_ZNK22CMission_winning_count18_isAcceptConditionERK5CUser`

`CMission_winning_count::_isAcceptCondition(CUser const&) const`

| 类 | 地址 |
|---|---|
| `CMission_winning_count` | `0x085e3596` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3596  _ZNK22CMission_winning_count18_isAcceptConditionERK5CUser
#           CMission_winning_count::_isAcceptCondition(CUser const&) const
# range [0x085e3596, 0x085e35af]
085e3596 +0x00:  push   %ebp
085e3597 +0x01:  mov    %esp,%ebp
085e3599 +0x03:  sub    $0x18,%esp
085e359c +0x06:  mov    0x8(%ebp),%eax
085e359f +0x09:  mov    0xc(%ebp),%edx
085e35a2 +0x0c:  mov    %edx,0x4(%esp)
085e35a6 +0x10:  mov    %eax,(%esp)
085e35a9 +0x13:  call   085e3490 <_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser>  ; CMission::_isAcceptCondition_Series(CUser const&) const
085e35ae +0x18:  leave
085e35af +0x19:  ret
```

## 反编译 C

```c
// CMission_winning_count::_isAcceptCondition @ 0x85e3596

/* CMission_winning_count::_isAcceptCondition(CUser const&) const */

void __thiscall
CMission_winning_count::_isAcceptCondition(CMission_winning_count *this,CUser *param_1)

{
  CMission::_isAcceptCondition_Series((CMission *)this,param_1);
  return;
}
```
