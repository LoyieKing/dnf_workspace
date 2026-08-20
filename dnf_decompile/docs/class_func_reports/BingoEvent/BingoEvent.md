# BingoEvent

`_ZN10BingoEventC1Ev`

`BingoEvent::BingoEvent()`

| 类 | 地址 |
|---|---|
| `BingoEvent` | `0x080c9984` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c9984  _ZN10BingoEventC1Ev
#           BingoEvent::BingoEvent()
# range [0x080c9984, 0x080c9a05]
080c9984 +0x00:  push   %ebp
080c9985 +0x01:  mov    %esp,%ebp
080c9987 +0x03:  push   %edi
080c9988 +0x04:  push   %esi
080c9989 +0x05:  push   %ebx
080c998a +0x06:  sub    $0x1c,%esp
080c998d +0x09:  mov    0x8(%ebp),%eax
080c9990 +0x0c:  mov    %eax,(%esp)
080c9993 +0x0f:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
080c9998 +0x14:  mov    0x8(%ebp),%eax
080c999b +0x17:  movl   $&_ZTV10BingoEvent+0x8,(%eax)
080c99a1 +0x1d:  movl   $0x1c,(%esp)
080c99a8 +0x24:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080c99ad +0x29:  mov    %eax,%ebx
080c99af +0x2b:  mov    %ebx,%eax
080c99b1 +0x2d:  mov    %eax,(%esp)
080c99b4 +0x30:  call   080ca82c <_ZN6CBingoC1Ev>  ; CBingo::CBingo()
080c99b9 +0x35:  jmp    080c99cd <+0x49>
080c99bb +0x37:  mov    %edx,%esi
080c99bd +0x39:  mov    %eax,%edi
080c99bf +0x3b:  mov    %ebx,(%esp)
080c99c2 +0x3e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080c99c7 +0x43:  mov    %edi,%eax
080c99c9 +0x45:  mov    %esi,%edx
080c99cb +0x47:  jmp    080c99e3 <+0x5f>
080c99cd +0x49:  mov    %ebx,%eax
080c99cf +0x4b:  mov    0x8(%ebp),%edx
080c99d2 +0x4e:  add    $0xc,%edx
080c99d5 +0x51:  mov    %eax,0x4(%esp)
080c99d9 +0x55:  mov    %edx,(%esp)
080c99dc +0x58:  call   080ce728 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3575>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3575
080c99e1 +0x5d:  jmp    080c99fe <+0x7a>
080c99e3 +0x5f:  mov    %edx,%ebx
080c99e5 +0x61:  mov    %eax,%esi
080c99e7 +0x63:  mov    0x8(%ebp),%eax
080c99ea +0x66:  mov    %eax,(%esp)
080c99ed +0x69:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
080c99f2 +0x6e:  mov    %esi,%eax
080c99f4 +0x70:  mov    %ebx,%edx
080c99f6 +0x72:  mov    %eax,(%esp)
080c99f9 +0x75:  call   08ae3750 <_Unwind_Resume>
080c99fe +0x7a:  add    $0x1c,%esp
080c9a01 +0x7d:  pop    %ebx
080c9a02 +0x7e:  pop    %esi
080c9a03 +0x7f:  pop    %edi
080c9a04 +0x80:  pop    %ebp
080c9a05 +0x81:  ret
```

## 反编译 C

```c
// BingoEvent::BingoEvent @ 0x80c9984

/* BingoEvent::BingoEvent() */

void __thiscall BingoEvent::BingoEvent(BingoEvent *this)

{
  CBingo *this_00;
  
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__BingoEvent_08b27e48;
                    /* try { // try from 080c99a8 to 080c99ac has its CatchHandler @ 080c99e3 */
  this_00 = operator_new(0x1c);
                    /* try { // try from 080c99b4 to 080c99b8 has its CatchHandler @ 080c99bb */
  CBingo::CBingo(this_00);
                    /* try { // try from 080c99dc to 080c99e0 has its CatchHandler @ 080c99e3 */
  boost::shared_ptr<CBingo>::shared_ptr<CBingo>((shared_ptr<CBingo> *)(this + 0xc),this_00);
  return;
}
```
