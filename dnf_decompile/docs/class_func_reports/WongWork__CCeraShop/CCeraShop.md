# CCeraShop

`_ZN8WongWork9CCeraShopC1Ev`

`WongWork::CCeraShop::CCeraShop()`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x083202b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083202b8  _ZN8WongWork9CCeraShopC1Ev
#           WongWork::CCeraShop::CCeraShop()
# range [0x083202b8, 0x08320313]
083202b8 +0x00:  push   %ebp
083202b9 +0x01:  mov    %esp,%ebp
083202bb +0x03:  push   %edi
083202bc +0x04:  push   %esi
083202bd +0x05:  push   %ebx
083202be +0x06:  sub    $0x1c,%esp
083202c1 +0x09:  movl   $0x74,(%esp)
083202c8 +0x10:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083202cd +0x15:  mov    %eax,%ebx
083202cf +0x17:  mov    %ebx,%eax
083202d1 +0x19:  mov    0x8(%ebp),%edx
083202d4 +0x1c:  mov    %edx,0x4(%esp)
083202d8 +0x20:  mov    %eax,(%esp)
083202db +0x23:  call   0827bcec <_ZN18SpecialItemHandlerC1EPN8WongWork9CCeraShopE>  ; SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)
083202e0 +0x28:  jmp    083202fa <+0x42>
083202e2 +0x2a:  mov    %edx,%esi
083202e4 +0x2c:  mov    %eax,%edi
083202e6 +0x2e:  mov    %ebx,(%esp)
083202e9 +0x31:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083202ee +0x36:  mov    %edi,%eax
083202f0 +0x38:  mov    %esi,%edx
083202f2 +0x3a:  mov    %eax,(%esp)
083202f5 +0x3d:  call   08ae3750 <_Unwind_Resume>
083202fa +0x42:  mov    %ebx,%edx
083202fc +0x44:  mov    0x8(%ebp),%eax
083202ff +0x47:  mov    %edx,(%eax)
08320301 +0x49:  mov    0x8(%ebp),%eax
08320304 +0x4c:  movl   $0x0,0x4(%eax)
0832030b +0x53:  add    $0x1c,%esp
0832030e +0x56:  pop    %ebx
0832030f +0x57:  pop    %esi
08320310 +0x58:  pop    %edi
08320311 +0x59:  pop    %ebp
08320312 +0x5a:  ret
08320313 +0x5b:  nop
```

## 反编译 C

```c
// WongWork::CCeraShop::CCeraShop @ 0x83202b8

/* WongWork::CCeraShop::CCeraShop() */

void __thiscall WongWork::CCeraShop::CCeraShop(CCeraShop *this)

{
  SpecialItemHandler *this_00;
  
  this_00 = operator_new(0x74);
                    /* try { // try from 083202db to 083202df has its CatchHandler @ 083202e2 */
  SpecialItemHandler::SpecialItemHandler(this_00,this);
  *(SpecialItemHandler **)this = this_00;
  *(undefined4 *)(this + 4) = 0;
  return;
}
```
