# ~CCoinEventOnCharCreate

`_ZN22CCoinEventOnCharCreateD1Ev`

`CCoinEventOnCharCreate::~CCoinEventOnCharCreate()`

| 类 | 地址 |
|---|---|
| `CCoinEventOnCharCreate` | `0x0810a93a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a93a  _ZN22CCoinEventOnCharCreateD1Ev
#           CCoinEventOnCharCreate::~CCoinEventOnCharCreate()
# range [0x0810a93a, 0x0810a969]
0810a93a +0x00:  push   %ebp
0810a93b +0x01:  mov    %esp,%ebp
0810a93d +0x03:  sub    $0x18,%esp
0810a940 +0x06:  mov    0x8(%ebp),%eax
0810a943 +0x09:  movl   $&_ZTV22CCoinEventOnCharCreate+0x8,(%eax)
0810a949 +0x0f:  mov    0x8(%ebp),%eax
0810a94c +0x12:  mov    %eax,(%esp)
0810a94f +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0810a954 +0x1a:  mov    $0x0,%eax
0810a959 +0x1f:  test   %al,%al
0810a95b +0x21:  je     0810a968 <+0x2e>
0810a95d +0x23:  mov    0x8(%ebp),%eax
0810a960 +0x26:  mov    %eax,(%esp)
0810a963 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810a968 +0x2e:  leave
0810a969 +0x2f:  ret
```

## 反编译 C

```c
// CCoinEventOnCharCreate::~CCoinEventOnCharCreate @ 0x810a93a

/* WARNING: Removing unreachable block (ram,0x0810a95d) */
/* CCoinEventOnCharCreate::~CCoinEventOnCharCreate() */

void __thiscall CCoinEventOnCharCreate::~CCoinEventOnCharCreate(CCoinEventOnCharCreate *this)

{
  *(undefined ***)this = &PTR__CCoinEventOnCharCreate_08b4ac68;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
