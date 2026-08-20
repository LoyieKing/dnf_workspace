# ~CEventStayTime

`_ZN14CEventStayTimeD1Ev`

`CEventStayTime::~CEventStayTime()`

| 类 | 地址 |
|---|---|
| `CEventStayTime` | `0x0816c08a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816c08a  _ZN14CEventStayTimeD1Ev
#           CEventStayTime::~CEventStayTime()
# range [0x0816c08a, 0x0816c0b9]
0816c08a +0x00:  push   %ebp
0816c08b +0x01:  mov    %esp,%ebp
0816c08d +0x03:  sub    $0x18,%esp
0816c090 +0x06:  mov    0x8(%ebp),%eax
0816c093 +0x09:  movl   $&_ZTV14CEventStayTime+0x8,(%eax)
0816c099 +0x0f:  mov    0x8(%ebp),%eax
0816c09c +0x12:  mov    %eax,(%esp)
0816c09f +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0816c0a4 +0x1a:  mov    $0x0,%eax
0816c0a9 +0x1f:  test   %al,%al
0816c0ab +0x21:  je     0816c0b8 <+0x2e>
0816c0ad +0x23:  mov    0x8(%ebp),%eax
0816c0b0 +0x26:  mov    %eax,(%esp)
0816c0b3 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816c0b8 +0x2e:  leave
0816c0b9 +0x2f:  ret
```

## 反编译 C

```c
// CEventStayTime::~CEventStayTime @ 0x816c08a

/* WARNING: Removing unreachable block (ram,0x0816c0ad) */
/* CEventStayTime::~CEventStayTime() */

void __thiscall CEventStayTime::~CEventStayTime(CEventStayTime *this)

{
  *(undefined ***)this = &PTR__CEventStayTime_08b80dc8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
