# ~BingoEvent

`_ZN10BingoEventD1Ev`

`BingoEvent::~BingoEvent()`

| 类 | 地址 |
|---|---|
| `BingoEvent` | `0x080c9a06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c9a06  _ZN10BingoEventD1Ev
#           BingoEvent::~BingoEvent()
# range [0x080c9a06, 0x080c9a67]
080c9a06 +0x00:  push   %ebp
080c9a07 +0x01:  mov    %esp,%ebp
080c9a09 +0x03:  push   %esi
080c9a0a +0x04:  push   %ebx
080c9a0b +0x05:  sub    $0x10,%esp
080c9a0e +0x08:  mov    0x8(%ebp),%eax
080c9a11 +0x0b:  movl   $&_ZTV10BingoEvent+0x8,(%eax)
080c9a17 +0x11:  mov    0x8(%ebp),%eax
080c9a1a +0x14:  add    $0xc,%eax
080c9a1d +0x17:  mov    %eax,(%esp)
080c9a20 +0x1a:  call   080ccf34 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d81>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d81
080c9a25 +0x1f:  jmp    080c9a42 <+0x3c>
080c9a27 +0x21:  mov    %edx,%ebx
080c9a29 +0x23:  mov    %eax,%esi
080c9a2b +0x25:  mov    0x8(%ebp),%eax
080c9a2e +0x28:  mov    %eax,(%esp)
080c9a31 +0x2b:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
080c9a36 +0x30:  mov    %esi,%eax
080c9a38 +0x32:  mov    %ebx,%edx
080c9a3a +0x34:  mov    %eax,(%esp)
080c9a3d +0x37:  call   08ae3750 <_Unwind_Resume>
080c9a42 +0x3c:  mov    0x8(%ebp),%eax
080c9a45 +0x3f:  mov    %eax,(%esp)
080c9a48 +0x42:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
080c9a4d +0x47:  mov    $0x0,%eax
080c9a52 +0x4c:  test   %al,%al
080c9a54 +0x4e:  je     080c9a61 <+0x5b>
080c9a56 +0x50:  mov    0x8(%ebp),%eax
080c9a59 +0x53:  mov    %eax,(%esp)
080c9a5c +0x56:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080c9a61 +0x5b:  add    $0x10,%esp
080c9a64 +0x5e:  pop    %ebx
080c9a65 +0x5f:  pop    %esi
080c9a66 +0x60:  pop    %ebp
080c9a67 +0x61:  ret
```

## 反编译 C

```c
// BingoEvent::~BingoEvent @ 0x80c9a06

/* WARNING: Removing unreachable block (ram,0x080c9a56) */
/* BingoEvent::~BingoEvent() */

void __thiscall BingoEvent::~BingoEvent(BingoEvent *this)

{
  *(undefined ***)this = &PTR__BingoEvent_08b27e48;
                    /* try { // try from 080c9a20 to 080c9a24 has its CatchHandler @ 080c9a27 */
  boost::shared_ptr<CBingo>::~shared_ptr((shared_ptr<CBingo> *)(this + 0xc));
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
