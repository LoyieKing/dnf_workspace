# ~CFirstServerOpenEvent

`_ZN21CFirstServerOpenEventD0Ev`

`CFirstServerOpenEvent::~CFirstServerOpenEvent()`

| 类 | 地址 |
|---|---|
| `CFirstServerOpenEvent` | `0x0811cac4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811cac4  _ZN21CFirstServerOpenEventD0Ev
#           CFirstServerOpenEvent::~CFirstServerOpenEvent()
# range [0x0811cac4, 0x0811cae1]
0811cac4 +0x00:  push   %ebp
0811cac5 +0x01:  mov    %esp,%ebp
0811cac7 +0x03:  sub    $0x18,%esp
0811caca +0x06:  mov    0x8(%ebp),%eax
0811cacd +0x09:  mov    %eax,(%esp)
0811cad0 +0x0c:  call   0811ca94 <_ZN21CFirstServerOpenEventD1Ev>  ; CFirstServerOpenEvent::~CFirstServerOpenEvent()
0811cad5 +0x11:  mov    0x8(%ebp),%eax
0811cad8 +0x14:  mov    %eax,(%esp)
0811cadb +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811cae0 +0x1c:  leave
0811cae1 +0x1d:  ret
```

## 反编译 C

```c
// CFirstServerOpenEvent::~CFirstServerOpenEvent @ 0x811cac4

/* CFirstServerOpenEvent::~CFirstServerOpenEvent() */

void __thiscall CFirstServerOpenEvent::~CFirstServerOpenEvent(CFirstServerOpenEvent *this)

{
  ~CFirstServerOpenEvent(this);
  operator_delete(this);
  return;
}
```
