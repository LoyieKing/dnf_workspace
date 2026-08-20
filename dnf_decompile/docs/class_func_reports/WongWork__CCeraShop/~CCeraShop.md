# ~CCeraShop

`_ZN8WongWork9CCeraShopD1Ev`

`WongWork::CCeraShop::~CCeraShop()`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08320314` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08320314  _ZN8WongWork9CCeraShopD1Ev
#           WongWork::CCeraShop::~CCeraShop()
# range [0x08320314, 0x08320339]
08320314 +0x00:  push   %ebp
08320315 +0x01:  mov    %esp,%ebp
08320317 +0x03:  push   %ebx
08320318 +0x04:  sub    $0x14,%esp
0832031b +0x07:  mov    0x8(%ebp),%eax
0832031e +0x0a:  mov    (%eax),%ebx
08320320 +0x0c:  test   %ebx,%ebx
08320322 +0x0e:  je     08320334 <+0x20>
08320324 +0x10:  mov    %ebx,(%esp)
08320327 +0x13:  call   08328284 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x1dd>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x1dd
0832032c +0x18:  mov    %ebx,(%esp)
0832032f +0x1b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08320334 +0x20:  add    $0x14,%esp
08320337 +0x23:  pop    %ebx
08320338 +0x24:  pop    %ebp
08320339 +0x25:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::~CCeraShop @ 0x8320314

/* WongWork::CCeraShop::~CCeraShop() */

void __thiscall WongWork::CCeraShop::~CCeraShop(CCeraShop *this)

{
  SpecialItemHandler *this_00;
  
  this_00 = *(SpecialItemHandler **)this;
  if (this_00 != (SpecialItemHandler *)0x0) {
    SpecialItemHandler::~SpecialItemHandler(this_00);
    operator_delete(this_00);
  }
  return;
}
```
