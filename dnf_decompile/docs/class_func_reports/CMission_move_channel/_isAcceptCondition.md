# _isAcceptCondition

`_ZNK21CMission_move_channel18_isAcceptConditionERK5CUser`

`CMission_move_channel::_isAcceptCondition(CUser const&) const`

| 类 | 地址 |
|---|---|
| `CMission_move_channel` | `0x085e3f2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3f2c  _ZNK21CMission_move_channel18_isAcceptConditionERK5CUser
#           CMission_move_channel::_isAcceptCondition(CUser const&) const
# range [0x085e3f2c, 0x085e3f45]
085e3f2c +0x00:  push   %ebp
085e3f2d +0x01:  mov    %esp,%ebp
085e3f2f +0x03:  sub    $0x18,%esp
085e3f32 +0x06:  mov    0x8(%ebp),%eax
085e3f35 +0x09:  mov    0xc(%ebp),%edx
085e3f38 +0x0c:  mov    %edx,0x4(%esp)
085e3f3c +0x10:  mov    %eax,(%esp)
085e3f3f +0x13:  call   085e3490 <_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser>  ; CMission::_isAcceptCondition_Series(CUser const&) const
085e3f44 +0x18:  leave
085e3f45 +0x19:  ret
```

## 反编译 C

```c
// CMission_move_channel::_isAcceptCondition @ 0x85e3f2c

/* CMission_move_channel::_isAcceptCondition(CUser const&) const */

void __thiscall
CMission_move_channel::_isAcceptCondition(CMission_move_channel *this,CUser *param_1)

{
  CMission::_isAcceptCondition_Series((CMission *)this,param_1);
  return;
}
```
