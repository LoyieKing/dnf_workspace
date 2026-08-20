# ~DB_AvatarExtendPeriod

`_ZN21DB_AvatarExtendPeriodD0Ev`

`DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod()`

| 类 | 地址 |
|---|---|
| `DB_AvatarExtendPeriod` | `0x083ffb04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ffb04  _ZN21DB_AvatarExtendPeriodD0Ev
#           DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod()
# range [0x083ffb04, 0x083ffb21]
083ffb04 +0x00:  push   %ebp
083ffb05 +0x01:  mov    %esp,%ebp
083ffb07 +0x03:  sub    $0x18,%esp
083ffb0a +0x06:  mov    0x8(%ebp),%eax
083ffb0d +0x09:  mov    %eax,(%esp)
083ffb10 +0x0c:  call   083ffad4 <_ZN21DB_AvatarExtendPeriodD1Ev>  ; DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod()
083ffb15 +0x11:  mov    0x8(%ebp),%eax
083ffb18 +0x14:  mov    %eax,(%esp)
083ffb1b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083ffb20 +0x1c:  leave
083ffb21 +0x1d:  ret
```

## 反编译 C

```c
// DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod @ 0x83ffb04

/* DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod() */

void __thiscall DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod(DB_AvatarExtendPeriod *this)

{
  ~DB_AvatarExtendPeriod(this);
  operator_delete(this);
  return;
}
```
