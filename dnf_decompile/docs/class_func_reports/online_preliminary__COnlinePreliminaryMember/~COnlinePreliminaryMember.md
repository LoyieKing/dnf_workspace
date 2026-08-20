# ~COnlinePreliminaryMember

`_ZN18online_preliminary24COnlinePreliminaryMemberD1Ev`

`online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMember` | `0x08585f50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08585f50  _ZN18online_preliminary24COnlinePreliminaryMemberD1Ev
#           online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember()
# range [0x08585f50, 0x08585f7f]
08585f50 +0x00:  push   %ebp
08585f51 +0x01:  mov    %esp,%ebp
08585f53 +0x03:  sub    $0x18,%esp
08585f56 +0x06:  mov    0x8(%ebp),%eax
08585f59 +0x09:  movl   $&_ZTVN18online_preliminary24COnlinePreliminaryMemberE+0x8,(%eax)
08585f5f +0x0f:  mov    0x8(%ebp),%eax
08585f62 +0x12:  mov    %eax,(%esp)
08585f65 +0x15:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
08585f6a +0x1a:  mov    $0x0,%eax
08585f6f +0x1f:  test   %al,%al
08585f71 +0x21:  je     08585f7e <+0x2e>
08585f73 +0x23:  mov    0x8(%ebp),%eax
08585f76 +0x26:  mov    %eax,(%esp)
08585f79 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08585f7e +0x2e:  leave
08585f7f +0x2f:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember @ 0x8585f50

/* WARNING: Removing unreachable block (ram,0x08585f73) */
/* online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember() */

void __thiscall
online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember
          (COnlinePreliminaryMember *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08cab808;
  charac_expand::CData::~CData((CData *)this);
  return;
}
```
