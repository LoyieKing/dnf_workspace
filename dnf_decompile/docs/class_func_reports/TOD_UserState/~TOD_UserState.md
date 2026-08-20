# ~TOD_UserState

`_ZN13TOD_UserStateD1Ev`

`TOD_UserState::~TOD_UserState()`

| 类 | 地址 |
|---|---|
| `TOD_UserState` | `0x086434ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086434ae  _ZN13TOD_UserStateD1Ev
#           TOD_UserState::~TOD_UserState()
# range [0x086434ae, 0x086434dd]
086434ae +0x00:  push   %ebp
086434af +0x01:  mov    %esp,%ebp
086434b1 +0x03:  sub    $0x18,%esp
086434b4 +0x06:  mov    0x8(%ebp),%eax
086434b7 +0x09:  movl   $&_ZTV13TOD_UserState+0x8,(%eax)
086434bd +0x0f:  mov    0x8(%ebp),%eax
086434c0 +0x12:  mov    %eax,(%esp)
086434c3 +0x15:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
086434c8 +0x1a:  mov    $0x0,%eax
086434cd +0x1f:  test   %al,%al
086434cf +0x21:  je     086434dc <+0x2e>
086434d1 +0x23:  mov    0x8(%ebp),%eax
086434d4 +0x26:  mov    %eax,(%esp)
086434d7 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086434dc +0x2e:  leave
086434dd +0x2f:  ret
```

## 反编译 C

```c
// TOD_UserState::~TOD_UserState @ 0x86434ae

/* WARNING: Removing unreachable block (ram,0x086434d1) */
/* TOD_UserState::~TOD_UserState() */

void __thiscall TOD_UserState::~TOD_UserState(TOD_UserState *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08cec608;
  charac_expand::CData::~CData((CData *)this);
  return;
}
```
