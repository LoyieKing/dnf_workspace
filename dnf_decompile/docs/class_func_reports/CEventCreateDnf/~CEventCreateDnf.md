# ~CEventCreateDnf

`_ZN15CEventCreateDnfD1Ev`

`CEventCreateDnf::~CEventCreateDnf()`

| 类 | 地址 |
|---|---|
| `CEventCreateDnf` | `0x08163ae8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08163ae8  _ZN15CEventCreateDnfD1Ev
#           CEventCreateDnf::~CEventCreateDnf()
# range [0x08163ae8, 0x08163b17]
08163ae8 +0x00:  push   %ebp
08163ae9 +0x01:  mov    %esp,%ebp
08163aeb +0x03:  sub    $0x18,%esp
08163aee +0x06:  mov    0x8(%ebp),%eax
08163af1 +0x09:  movl   $&_ZTV15CEventCreateDnf+0x8,(%eax)
08163af7 +0x0f:  mov    0x8(%ebp),%eax
08163afa +0x12:  mov    %eax,(%esp)
08163afd +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08163b02 +0x1a:  mov    $0x0,%eax
08163b07 +0x1f:  test   %al,%al
08163b09 +0x21:  je     08163b16 <+0x2e>
08163b0b +0x23:  mov    0x8(%ebp),%eax
08163b0e +0x26:  mov    %eax,(%esp)
08163b11 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08163b16 +0x2e:  leave
08163b17 +0x2f:  ret
```

## 反编译 C

```c
// CEventCreateDnf::~CEventCreateDnf @ 0x8163ae8

/* WARNING: Removing unreachable block (ram,0x08163b0b) */
/* CEventCreateDnf::~CEventCreateDnf() */

void __thiscall CEventCreateDnf::~CEventCreateDnf(CEventCreateDnf *this)

{
  *(undefined ***)this = &PTR__CEventCreateDnf_08b7cbc8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
