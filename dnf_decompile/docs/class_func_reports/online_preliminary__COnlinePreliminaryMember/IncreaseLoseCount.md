# IncreaseLoseCount

`_ZN18online_preliminary24COnlinePreliminaryMember17IncreaseLoseCountEv`

`online_preliminary::COnlinePreliminaryMember::IncreaseLoseCount()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMember` | `0x08586146` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08586146  _ZN18online_preliminary24COnlinePreliminaryMember17IncreaseLoseCountEv
#           online_preliminary::COnlinePreliminaryMember::IncreaseLoseCount()
# range [0x08586146, 0x08586167]
08586146 +0x00:  push   %ebp
08586147 +0x01:  mov    %esp,%ebp
08586149 +0x03:  sub    $0x18,%esp
0858614c +0x06:  mov    0x8(%ebp),%eax
0858614f +0x09:  mov    0x10(%eax),%eax
08586152 +0x0c:  lea    0x1(%eax),%edx
08586155 +0x0f:  mov    0x8(%ebp),%eax
08586158 +0x12:  mov    %edx,0x10(%eax)
0858615b +0x15:  mov    0x8(%ebp),%eax
0858615e +0x18:  mov    %eax,(%esp)
08586161 +0x1b:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08586166 +0x20:  leave
08586167 +0x21:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMember::IncreaseLoseCount @ 0x8586146

/* online_preliminary::COnlinePreliminaryMember::IncreaseLoseCount() */

void __thiscall
online_preliminary::COnlinePreliminaryMember::IncreaseLoseCount(COnlinePreliminaryMember *this)

{
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  charac_expand::CData::alter((CData *)this);
  return;
}
```
