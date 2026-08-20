# SetRating

`_ZN18online_preliminary24COnlinePreliminaryMember9SetRatingEf`

`online_preliminary::COnlinePreliminaryMember::SetRating(float)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMember` | `0x08586168` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08586168  _ZN18online_preliminary24COnlinePreliminaryMember9SetRatingEf
#           online_preliminary::COnlinePreliminaryMember::SetRating(float)
# range [0x08586168, 0x08586183]
08586168 +0x00:  push   %ebp
08586169 +0x01:  mov    %esp,%ebp
0858616b +0x03:  sub    $0x18,%esp
0858616e +0x06:  mov    0x8(%ebp),%eax
08586171 +0x09:  mov    0xc(%ebp),%edx
08586174 +0x0c:  mov    %edx,0x8(%eax)
08586177 +0x0f:  mov    0x8(%ebp),%eax
0858617a +0x12:  mov    %eax,(%esp)
0858617d +0x15:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08586182 +0x1a:  leave
08586183 +0x1b:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMember::SetRating @ 0x8586168

/* online_preliminary::COnlinePreliminaryMember::SetRating(float) */

void __thiscall
online_preliminary::COnlinePreliminaryMember::SetRating
          (COnlinePreliminaryMember *this,float param_1)

{
  *(float *)(this + 8) = param_1;
  charac_expand::CData::alter((CData *)this);
  return;
}
```
