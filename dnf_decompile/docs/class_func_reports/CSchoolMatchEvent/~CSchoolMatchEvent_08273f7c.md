# ~CSchoolMatchEvent

`_ZN17CSchoolMatchEventD0Ev`

`CSchoolMatchEvent::~CSchoolMatchEvent()`

| 类 | 地址 |
|---|---|
| `CSchoolMatchEvent` | `0x08273f7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08273f7c  _ZN17CSchoolMatchEventD0Ev
#           CSchoolMatchEvent::~CSchoolMatchEvent()
# range [0x08273f7c, 0x08273f99]
08273f7c +0x00:  push   %ebp
08273f7d +0x01:  mov    %esp,%ebp
08273f7f +0x03:  sub    $0x18,%esp
08273f82 +0x06:  mov    0x8(%ebp),%eax
08273f85 +0x09:  mov    %eax,(%esp)
08273f88 +0x0c:  call   08273f1a <_ZN17CSchoolMatchEventD1Ev>  ; CSchoolMatchEvent::~CSchoolMatchEvent()
08273f8d +0x11:  mov    0x8(%ebp),%eax
08273f90 +0x14:  mov    %eax,(%esp)
08273f93 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08273f98 +0x1c:  leave
08273f99 +0x1d:  ret
```

## 反编译 C

```c
// CSchoolMatchEvent::~CSchoolMatchEvent @ 0x8273f7c

/* CSchoolMatchEvent::~CSchoolMatchEvent() */

void __thiscall CSchoolMatchEvent::~CSchoolMatchEvent(CSchoolMatchEvent *this)

{
  ~CSchoolMatchEvent(this);
  operator_delete(this);
  return;
}
```
