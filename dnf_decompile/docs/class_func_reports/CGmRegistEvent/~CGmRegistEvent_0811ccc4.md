# ~CGmRegistEvent

`_ZN14CGmRegistEventD0Ev`

`CGmRegistEvent::~CGmRegistEvent()`

| 类 | 地址 |
|---|---|
| `CGmRegistEvent` | `0x0811ccc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811ccc4  _ZN14CGmRegistEventD0Ev
#           CGmRegistEvent::~CGmRegistEvent()
# range [0x0811ccc4, 0x0811cce1]
0811ccc4 +0x00:  push   %ebp
0811ccc5 +0x01:  mov    %esp,%ebp
0811ccc7 +0x03:  sub    $0x18,%esp
0811ccca +0x06:  mov    0x8(%ebp),%eax
0811cccd +0x09:  mov    %eax,(%esp)
0811ccd0 +0x0c:  call   0811cc94 <_ZN14CGmRegistEventD1Ev>  ; CGmRegistEvent::~CGmRegistEvent()
0811ccd5 +0x11:  mov    0x8(%ebp),%eax
0811ccd8 +0x14:  mov    %eax,(%esp)
0811ccdb +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811cce0 +0x1c:  leave
0811cce1 +0x1d:  ret
```

## 反编译 C

```c
// CGmRegistEvent::~CGmRegistEvent @ 0x811ccc4

/* CGmRegistEvent::~CGmRegistEvent() */

void __thiscall CGmRegistEvent::~CGmRegistEvent(CGmRegistEvent *this)

{
  ~CGmRegistEvent(this);
  operator_delete(this);
  return;
}
```
