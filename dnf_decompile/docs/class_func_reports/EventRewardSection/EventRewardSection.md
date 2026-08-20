# EventRewardSection

`_ZN18EventRewardSectionC1Ev`

`EventRewardSection::EventRewardSection()`

| 类 | 地址 |
|---|---|
| `EventRewardSection` | `0x089154ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089154ee  _ZN18EventRewardSectionC1Ev
#           EventRewardSection::EventRewardSection()
# range [0x089154ee, 0x08915517]
089154ee +0x00:  push   %ebp
089154ef +0x01:  mov    %esp,%ebp
089154f1 +0x03:  sub    $0x18,%esp
089154f4 +0x06:  mov    0x8(%ebp),%eax
089154f7 +0x09:  add    $0x4,%eax
089154fa +0x0c:  mov    %eax,(%esp)
089154fd +0x0f:  call   080e4d12 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x38>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x38
08915502 +0x14:  mov    0x8(%ebp),%eax
08915505 +0x17:  movb   $0x0,(%eax)
08915508 +0x1a:  mov    0x8(%ebp),%eax
0891550b +0x1d:  movb   $0x0,0x1(%eax)
0891550f +0x21:  mov    0x8(%ebp),%eax
08915512 +0x24:  movb   $0x0,0x2(%eax)
08915516 +0x28:  leave
08915517 +0x29:  ret
```

## 反编译 C

```c
// EventRewardSection::EventRewardSection @ 0x89154ee

/* EventRewardSection::EventRewardSection() */

void __thiscall EventRewardSection::EventRewardSection(EventRewardSection *this)

{
  std::vector<unsigned_char,std::allocator<unsigned_char>>::vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 4));
  *this = (EventRewardSection)0x0;
  this[1] = (EventRewardSection)0x0;
  this[2] = (EventRewardSection)0x0;
  return;
}
```
