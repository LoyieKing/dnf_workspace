# COnlinePreliminaryMember

`_ZN18online_preliminary24COnlinePreliminaryMemberC1Ev`

`online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMember` | `0x08585f34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08585f34  _ZN18online_preliminary24COnlinePreliminaryMemberC1Ev
#           online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()
# range [0x08585f34, 0x08585f4f]
08585f34 +0x00:  push   %ebp
08585f35 +0x01:  mov    %esp,%ebp
08585f37 +0x03:  sub    $0x18,%esp
08585f3a +0x06:  mov    0x8(%ebp),%eax
08585f3d +0x09:  mov    %eax,(%esp)
08585f40 +0x0c:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
08585f45 +0x11:  mov    0x8(%ebp),%eax
08585f48 +0x14:  movl   $&_ZTVN18online_preliminary24COnlinePreliminaryMemberE+0x8,(%eax)
08585f4e +0x1a:  leave
08585f4f +0x1b:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember @ 0x8585f34

/* online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember() */

void __thiscall
online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember
          (COnlinePreliminaryMember *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08cab808;
  return;
}
```
