# init

`_ZN8WongWork17CItemGenRateTable4initEv`

`WongWork::CItemGenRateTable::init()`

| 类 | 地址 |
|---|---|
| `WongWork::CItemGenRateTable` | `0x085345b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085345b6  _ZN8WongWork17CItemGenRateTable4initEv
#           WongWork::CItemGenRateTable::init()
# range [0x085345b6, 0x08534637]
085345b6 +0x00:  push   %ebp
085345b7 +0x01:  mov    %esp,%ebp
085345b9 +0x03:  push   %edi
085345ba +0x04:  push   %esi
085345bb +0x05:  push   %ebx
085345bc +0x06:  sub    $0x2c,%esp
085345bf +0x09:  mov    0x8(%ebp),%eax
085345c2 +0x0c:  mov    &_ZL14gUnicodeBuffer+0x19024(%eax),%eax
085345c8 +0x12:  test   %eax,%eax
085345ca +0x14:  je     085345dd <+0x27>
085345cc +0x16:  mov    0x8(%ebp),%eax
085345cf +0x19:  mov    &_ZL14gUnicodeBuffer+0x19024(%eax),%eax
085345d5 +0x1f:  mov    %eax,(%esp)
085345d8 +0x22:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085345dd +0x27:  movl   $0x0,(%esp)
085345e4 +0x2e:  call   0807d750 <_init+0x48>
085345e9 +0x33:  mov    %eax,-0x1c(%ebp)
085345ec +0x36:  lea    -0x1c(%ebp),%esi
085345ef +0x39:  movl   $0x9c8,(%esp)
085345f6 +0x40:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085345fb +0x45:  mov    %eax,%ebx
085345fd +0x47:  mov    %ebx,%eax
085345ff +0x49:  mov    %esi,0x4(%esp)
08534603 +0x4d:  mov    %eax,(%esp)
08534606 +0x50:  call   080cba2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x877>  ; global constructors keyed to BingoEvent::BingoEvent()+0x877
0853460b +0x55:  jmp    08534625 <+0x6f>
0853460d +0x57:  mov    %edx,%esi
0853460f +0x59:  mov    %eax,%edi
08534611 +0x5b:  mov    %ebx,(%esp)
08534614 +0x5e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08534619 +0x63:  mov    %edi,%eax
0853461b +0x65:  mov    %esi,%edx
0853461d +0x67:  mov    %eax,(%esp)
08534620 +0x6a:  call   08ae3750 <_Unwind_Resume>
08534625 +0x6f:  mov    %ebx,%edx
08534627 +0x71:  mov    0x8(%ebp),%eax
0853462a +0x74:  mov    %edx,&_ZL14gUnicodeBuffer+0x19024(%eax)
08534630 +0x7a:  add    $0x2c,%esp
08534633 +0x7d:  pop    %ebx
08534634 +0x7e:  pop    %esi
08534635 +0x7f:  pop    %edi
08534636 +0x80:  pop    %ebp
08534637 +0x81:  ret
```

## 反编译 C

```c
// WongWork::CItemGenRateTable::init @ 0x85345b6

/* WongWork::CItemGenRateTable::init() */

void __thiscall WongWork::CItemGenRateTable::init(CItemGenRateTable *this)

{
  CMTRand *this_00;
  ulong local_20 [4];
  
  if (*(int *)(this + 0x23550) != 0) {
    operator_delete(*(void **)(this + 0x23550));
  }
  local_20[0] = time((time_t *)0x0);
  this_00 = operator_new(0x9c8);
                    /* try { // try from 08534606 to 0853460a has its CatchHandler @ 0853460d */
  CMTRand::CMTRand(this_00,local_20);
  *(CMTRand **)(this + 0x23550) = this_00;
  return;
}
```
