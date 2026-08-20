# ~COnlinePreliminaryMember

`_ZN18online_preliminary24COnlinePreliminaryMemberD0Ev`

`online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMember` | `0x08585f80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08585f80  _ZN18online_preliminary24COnlinePreliminaryMemberD0Ev
#           online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember()
# range [0x08585f80, 0x08585f9d]
08585f80 +0x00:  push   %ebp
08585f81 +0x01:  mov    %esp,%ebp
08585f83 +0x03:  sub    $0x18,%esp
08585f86 +0x06:  mov    0x8(%ebp),%eax
08585f89 +0x09:  mov    %eax,(%esp)
08585f8c +0x0c:  call   08585f50 <_ZN18online_preliminary24COnlinePreliminaryMemberD1Ev>  ; online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember()
08585f91 +0x11:  mov    0x8(%ebp),%eax
08585f94 +0x14:  mov    %eax,(%esp)
08585f97 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08585f9c +0x1c:  leave
08585f9d +0x1d:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember @ 0x8585f80

/* online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember() */

void __thiscall
online_preliminary::COnlinePreliminaryMember::~COnlinePreliminaryMember
          (COnlinePreliminaryMember *this)

{
  ~COnlinePreliminaryMember(this);
  operator_delete(this);
  return;
}
```
