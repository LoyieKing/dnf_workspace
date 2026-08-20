# ~CEventStayTime

`_ZN14CEventStayTimeD0Ev`

`CEventStayTime::~CEventStayTime()`

| 类 | 地址 |
|---|---|
| `CEventStayTime` | `0x0816c0ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816c0ba  _ZN14CEventStayTimeD0Ev
#           CEventStayTime::~CEventStayTime()
# range [0x0816c0ba, 0x0816c0d7]
0816c0ba +0x00:  push   %ebp
0816c0bb +0x01:  mov    %esp,%ebp
0816c0bd +0x03:  sub    $0x18,%esp
0816c0c0 +0x06:  mov    0x8(%ebp),%eax
0816c0c3 +0x09:  mov    %eax,(%esp)
0816c0c6 +0x0c:  call   0816c08a <_ZN14CEventStayTimeD1Ev>  ; CEventStayTime::~CEventStayTime()
0816c0cb +0x11:  mov    0x8(%ebp),%eax
0816c0ce +0x14:  mov    %eax,(%esp)
0816c0d1 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816c0d6 +0x1c:  leave
0816c0d7 +0x1d:  ret
```

## 反编译 C

```c
// CEventStayTime::~CEventStayTime @ 0x816c0ba

/* CEventStayTime::~CEventStayTime() */

void __thiscall CEventStayTime::~CEventStayTime(CEventStayTime *this)

{
  ~CEventStayTime(this);
  operator_delete(this);
  return;
}
```
