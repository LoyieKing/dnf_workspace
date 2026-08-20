# ~RentalMachineDimension

`_ZN22RentalMachineDimensionD1Ev`

`RentalMachineDimension::~RentalMachineDimension()`

| 类 | 地址 |
|---|---|
| `RentalMachineDimension` | `0x0826eba2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826eba2  _ZN22RentalMachineDimensionD1Ev
#           RentalMachineDimension::~RentalMachineDimension()
# range [0x0826eba2, 0x0826ec03]
0826eba2 +0x00:  push   %ebp
0826eba3 +0x01:  mov    %esp,%ebp
0826eba5 +0x03:  push   %esi
0826eba6 +0x04:  push   %ebx
0826eba7 +0x05:  sub    $0x10,%esp
0826ebaa +0x08:  mov    0x8(%ebp),%eax
0826ebad +0x0b:  movl   $&_ZTV22RentalMachineDimension+0x8,(%eax)
0826ebb3 +0x11:  mov    0x8(%ebp),%eax
0826ebb6 +0x14:  add    $0x4,%eax
0826ebb9 +0x17:  mov    %eax,(%esp)
0826ebbc +0x1a:  call   0826fb24 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x126>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x126
0826ebc1 +0x1f:  jmp    0826ebde <+0x3c>
0826ebc3 +0x21:  mov    %edx,%ebx
0826ebc5 +0x23:  mov    %eax,%esi
0826ebc7 +0x25:  mov    0x8(%ebp),%eax
0826ebca +0x28:  mov    %eax,(%esp)
0826ebcd +0x2b:  call   0826fa1a <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1c>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1c
0826ebd2 +0x30:  mov    %esi,%eax
0826ebd4 +0x32:  mov    %ebx,%edx
0826ebd6 +0x34:  mov    %eax,(%esp)
0826ebd9 +0x37:  call   08ae3750 <_Unwind_Resume>
0826ebde +0x3c:  mov    0x8(%ebp),%eax
0826ebe1 +0x3f:  mov    %eax,(%esp)
0826ebe4 +0x42:  call   0826fa1a <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1c>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1c
0826ebe9 +0x47:  mov    $0x0,%eax
0826ebee +0x4c:  test   %al,%al
0826ebf0 +0x4e:  je     0826ebfd <+0x5b>
0826ebf2 +0x50:  mov    0x8(%ebp),%eax
0826ebf5 +0x53:  mov    %eax,(%esp)
0826ebf8 +0x56:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826ebfd +0x5b:  add    $0x10,%esp
0826ec00 +0x5e:  pop    %ebx
0826ec01 +0x5f:  pop    %esi
0826ec02 +0x60:  pop    %ebp
0826ec03 +0x61:  ret
```

## 反编译 C

```c
// RentalMachineDimension::~RentalMachineDimension @ 0x826eba2

/* WARNING: Removing unreachable block (ram,0x0826ebf2) */
/* RentalMachineDimension::~RentalMachineDimension() */

void __thiscall RentalMachineDimension::~RentalMachineDimension(RentalMachineDimension *this)

{
  *(undefined ***)this = &PTR__RentalMachineDimension_08bf9ff0;
                    /* try { // try from 0826ebbc to 0826ebc0 has its CatchHandler @ 0826ebc3 */
  std::auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl>::~auto_ptr
            ((auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl> *)(this + 4));
  IRentalMachine::~IRentalMachine((IRentalMachine *)this);
  return;
}
```
