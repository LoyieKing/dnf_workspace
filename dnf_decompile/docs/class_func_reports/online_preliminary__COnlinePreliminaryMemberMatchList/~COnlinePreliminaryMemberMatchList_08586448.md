# ~COnlinePreliminaryMemberMatchList

`_ZN18online_preliminary33COnlinePreliminaryMemberMatchListD0Ev`

`online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMemberMatchList` | `0x08586448` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08586448  _ZN18online_preliminary33COnlinePreliminaryMemberMatchListD0Ev
#           online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList()
# range [0x08586448, 0x08586465]
08586448 +0x00:  push   %ebp
08586449 +0x01:  mov    %esp,%ebp
0858644b +0x03:  sub    $0x18,%esp
0858644e +0x06:  mov    0x8(%ebp),%eax
08586451 +0x09:  mov    %eax,(%esp)
08586454 +0x0c:  call   085863e6 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchListD1Ev>  ; online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList()
08586459 +0x11:  mov    0x8(%ebp),%eax
0858645c +0x14:  mov    %eax,(%esp)
0858645f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08586464 +0x1c:  leave
08586465 +0x1d:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList @ 0x8586448

/* online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList() */

void __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList
          (COnlinePreliminaryMemberMatchList *this)

{
  ~COnlinePreliminaryMemberMatchList(this);
  operator_delete(this);
  return;
}
```
