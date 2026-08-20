# ~CGoldCardBlankItemEvent

`_ZN23CGoldCardBlankItemEventD0Ev`

`CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent()`

| 类 | 地址 |
|---|---|
| `CGoldCardBlankItemEvent` | `0x0811ce70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811ce70  _ZN23CGoldCardBlankItemEventD0Ev
#           CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent()
# range [0x0811ce70, 0x0811ce8d]
0811ce70 +0x00:  push   %ebp
0811ce71 +0x01:  mov    %esp,%ebp
0811ce73 +0x03:  sub    $0x18,%esp
0811ce76 +0x06:  mov    0x8(%ebp),%eax
0811ce79 +0x09:  mov    %eax,(%esp)
0811ce7c +0x0c:  call   0811ce40 <_ZN23CGoldCardBlankItemEventD1Ev>  ; CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent()
0811ce81 +0x11:  mov    0x8(%ebp),%eax
0811ce84 +0x14:  mov    %eax,(%esp)
0811ce87 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811ce8c +0x1c:  leave
0811ce8d +0x1d:  ret
```

## 反编译 C

```c
// CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent @ 0x811ce70

/* CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent() */

void __thiscall CGoldCardBlankItemEvent::~CGoldCardBlankItemEvent(CGoldCardBlankItemEvent *this)

{
  ~CGoldCardBlankItemEvent(this);
  operator_delete(this);
  return;
}
```
