# RentalMachineDimension

`_ZN22RentalMachineDimensionC1Ev`

`RentalMachineDimension::RentalMachineDimension()`

| 类 | 地址 |
|---|---|
| `RentalMachineDimension` | `0x0826eafc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826eafc  _ZN22RentalMachineDimensionC1Ev
#           RentalMachineDimension::RentalMachineDimension()
# range [0x0826eafc, 0x0826eba1]
0826eafc +0x00:  push   %ebp
0826eafd +0x01:  mov    %esp,%ebp
0826eaff +0x03:  push   %edi
0826eb00 +0x04:  push   %esi
0826eb01 +0x05:  push   %ebx
0826eb02 +0x06:  sub    $0x1c,%esp
0826eb05 +0x09:  mov    0x8(%ebp),%eax
0826eb08 +0x0c:  mov    %eax,(%esp)
0826eb0b +0x0f:  call   0826fa5e <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x60>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x60
0826eb10 +0x14:  mov    0x8(%ebp),%eax
0826eb13 +0x17:  movl   $&_ZTV22RentalMachineDimension+0x8,(%eax)
0826eb19 +0x1d:  movl   $0x11c,(%esp)
0826eb20 +0x24:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0826eb25 +0x29:  mov    %eax,%ebx
0826eb27 +0x2b:  mov    %ebx,%eax
0826eb29 +0x2d:  mov    %eax,(%esp)
0826eb2c +0x30:  call   0826fa6c <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x6e>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x6e
0826eb31 +0x35:  jmp    0826eb45 <+0x49>
0826eb33 +0x37:  mov    %edx,%esi
0826eb35 +0x39:  mov    %eax,%edi
0826eb37 +0x3b:  mov    %ebx,(%esp)
0826eb3a +0x3e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826eb3f +0x43:  mov    %edi,%eax
0826eb41 +0x45:  mov    %esi,%edx
0826eb43 +0x47:  jmp    0826eb7e <+0x82>
0826eb45 +0x49:  mov    %ebx,%eax
0826eb47 +0x4b:  mov    0x8(%ebp),%edx
0826eb4a +0x4e:  add    $0x4,%edx
0826eb4d +0x51:  mov    %eax,0x4(%esp)
0826eb51 +0x55:  mov    %edx,(%esp)
0826eb54 +0x58:  call   0826fafe <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x100>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x100
0826eb59 +0x5d:  mov    0x8(%ebp),%eax
0826eb5c +0x60:  mov    %eax,(%esp)
0826eb5f +0x63:  call   0826efdc <_ZN22RentalMachineDimension22initLoggingEnvironmentEv>  ; RentalMachineDimension::initLoggingEnvironment()
0826eb64 +0x68:  jmp    0826eb99 <+0x9d>
0826eb66 +0x6a:  mov    %edx,%ebx
0826eb68 +0x6c:  mov    %eax,%esi
0826eb6a +0x6e:  mov    0x8(%ebp),%eax
0826eb6d +0x71:  add    $0x4,%eax
0826eb70 +0x74:  mov    %eax,(%esp)
0826eb73 +0x77:  call   0826fb24 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x126>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x126
0826eb78 +0x7c:  mov    %esi,%eax
0826eb7a +0x7e:  mov    %ebx,%edx
0826eb7c +0x80:  jmp    0826eb7e <+0x82>
0826eb7e +0x82:  mov    %edx,%ebx
0826eb80 +0x84:  mov    %eax,%esi
0826eb82 +0x86:  mov    0x8(%ebp),%eax
0826eb85 +0x89:  mov    %eax,(%esp)
0826eb88 +0x8c:  call   0826fa1a <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1c>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1c
0826eb8d +0x91:  mov    %esi,%eax
0826eb8f +0x93:  mov    %ebx,%edx
0826eb91 +0x95:  mov    %eax,(%esp)
0826eb94 +0x98:  call   08ae3750 <_Unwind_Resume>
0826eb99 +0x9d:  add    $0x1c,%esp
0826eb9c +0xa0:  pop    %ebx
0826eb9d +0xa1:  pop    %esi
0826eb9e +0xa2:  pop    %edi
0826eb9f +0xa3:  pop    %ebp
0826eba0 +0xa4:  ret
0826eba1 +0xa5:  nop
```

## 反编译 C

```c
// RentalMachineDimension::RentalMachineDimension @ 0x826eafc

/* RentalMachineDimension::RentalMachineDimension() */

void __thiscall RentalMachineDimension::RentalMachineDimension(RentalMachineDimension *this)

{
  RentalMachineDimensionImpl *this_00;
  
  IRentalMachine::IRentalMachine((IRentalMachine *)this);
  *(undefined ***)this = &PTR__RentalMachineDimension_08bf9ff0;
                    /* try { // try from 0826eb20 to 0826eb24 has its CatchHandler @ 0826eb7e */
  this_00 = operator_new(0x11c);
                    /* try { // try from 0826eb2c to 0826eb30 has its CatchHandler @ 0826eb33 */
  RentalMachineDimensionImpl::RentalMachineDimensionImpl(this_00);
  std::auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl>::auto_ptr
            ((auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl> *)(this + 4),this_00);
                    /* try { // try from 0826eb5f to 0826eb63 has its CatchHandler @ 0826eb66 */
  initLoggingEnvironment(this);
  return;
}
```
