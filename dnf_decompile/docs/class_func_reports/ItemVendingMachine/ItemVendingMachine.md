# ItemVendingMachine

`_ZN18ItemVendingMachineC1Ev`

`ItemVendingMachine::ItemVendingMachine()`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x0854c3e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854c3e4  _ZN18ItemVendingMachineC1Ev
#           ItemVendingMachine::ItemVendingMachine()
# range [0x0854c3e4, 0x0854c429]
0854c3e4 +0x00:  push   %ebp
0854c3e5 +0x01:  mov    %esp,%ebp
0854c3e7 +0x03:  push   %esi
0854c3e8 +0x04:  push   %ebx
0854c3e9 +0x05:  sub    $0x10,%esp
0854c3ec +0x08:  mov    0x8(%ebp),%eax
0854c3ef +0x0b:  mov    %eax,(%esp)
0854c3f2 +0x0e:  call   083202b8 <_ZN8WongWork9CCeraShopC1Ev>  ; WongWork::CCeraShop::CCeraShop()
0854c3f7 +0x13:  mov    0x8(%ebp),%eax
0854c3fa +0x16:  add    $0x8,%eax
0854c3fd +0x19:  mov    %eax,(%esp)
0854c400 +0x1c:  call   0854c5b6 <_GLOBAL__I__ZN18ItemVendingMachineC2Ev+0x51>  ; global constructors keyed to ItemVendingMachine::ItemVendingMachine()+0x51
0854c405 +0x21:  jmp    0854c422 <+0x3e>
0854c407 +0x23:  mov    %edx,%ebx
0854c409 +0x25:  mov    %eax,%esi
0854c40b +0x27:  mov    0x8(%ebp),%eax
0854c40e +0x2a:  mov    %eax,(%esp)
0854c411 +0x2d:  call   08320314 <_ZN8WongWork9CCeraShopD1Ev>  ; WongWork::CCeraShop::~CCeraShop()
0854c416 +0x32:  mov    %esi,%eax
0854c418 +0x34:  mov    %ebx,%edx
0854c41a +0x36:  mov    %eax,(%esp)
0854c41d +0x39:  call   08ae3750 <_Unwind_Resume>
0854c422 +0x3e:  add    $0x10,%esp
0854c425 +0x41:  pop    %ebx
0854c426 +0x42:  pop    %esi
0854c427 +0x43:  pop    %ebp
0854c428 +0x44:  ret
0854c429 +0x45:  nop
```

## 反编译 C

```c
// ItemVendingMachine::ItemVendingMachine @ 0x854c3e4

/* ItemVendingMachine::ItemVendingMachine() */

void __thiscall ItemVendingMachine::ItemVendingMachine(ItemVendingMachine *this)

{
  WongWork::CCeraShop::CCeraShop((CCeraShop *)this);
                    /* try { // try from 0854c400 to 0854c404 has its CatchHandler @ 0854c407 */
  ARAD::CeraShopPurcahseCountBonus::CeraShopPurcahseCountBonus
            ((CeraShopPurcahseCountBonus *)(this + 8));
  return;
}
```
