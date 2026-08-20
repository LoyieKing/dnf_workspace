# IncreaseWinCount

`_ZN18online_preliminary24COnlinePreliminaryMember16IncreaseWinCountEv`

`online_preliminary::COnlinePreliminaryMember::IncreaseWinCount()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMember` | `0x08586124` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08586124  _ZN18online_preliminary24COnlinePreliminaryMember16IncreaseWinCountEv
#           online_preliminary::COnlinePreliminaryMember::IncreaseWinCount()
# range [0x08586124, 0x08586145]
08586124 +0x00:  push   %ebp
08586125 +0x01:  mov    %esp,%ebp
08586127 +0x03:  sub    $0x18,%esp
0858612a +0x06:  mov    0x8(%ebp),%eax
0858612d +0x09:  mov    0xc(%eax),%eax
08586130 +0x0c:  lea    0x1(%eax),%edx
08586133 +0x0f:  mov    0x8(%ebp),%eax
08586136 +0x12:  mov    %edx,0xc(%eax)
08586139 +0x15:  mov    0x8(%ebp),%eax
0858613c +0x18:  mov    %eax,(%esp)
0858613f +0x1b:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08586144 +0x20:  leave
08586145 +0x21:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMember::IncreaseWinCount @ 0x8586124

/* online_preliminary::COnlinePreliminaryMember::IncreaseWinCount() */

void __thiscall
online_preliminary::COnlinePreliminaryMember::IncreaseWinCount(COnlinePreliminaryMember *this)

{
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  charac_expand::CData::alter((CData *)this);
  return;
}
```
