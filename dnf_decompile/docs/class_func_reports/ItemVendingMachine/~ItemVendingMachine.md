# ~ItemVendingMachine

`_ZN18ItemVendingMachineD1Ev`

`ItemVendingMachine::~ItemVendingMachine()`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x0854c42a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854c42a  _ZN18ItemVendingMachineD1Ev
#           ItemVendingMachine::~ItemVendingMachine()
# range [0x0854c42a, 0x0854c46f]
0854c42a +0x00:  push   %ebp
0854c42b +0x01:  mov    %esp,%ebp
0854c42d +0x03:  push   %esi
0854c42e +0x04:  push   %ebx
0854c42f +0x05:  sub    $0x10,%esp
0854c432 +0x08:  mov    0x8(%ebp),%eax
0854c435 +0x0b:  add    $0x8,%eax
0854c438 +0x0e:  mov    %eax,(%esp)
0854c43b +0x11:  call   0854c5ca <_GLOBAL__I__ZN18ItemVendingMachineC2Ev+0x65>  ; global constructors keyed to ItemVendingMachine::ItemVendingMachine()+0x65
0854c440 +0x16:  jmp    0854c45d <+0x33>
0854c442 +0x18:  mov    %edx,%ebx
0854c444 +0x1a:  mov    %eax,%esi
0854c446 +0x1c:  mov    0x8(%ebp),%eax
0854c449 +0x1f:  mov    %eax,(%esp)
0854c44c +0x22:  call   08320314 <_ZN8WongWork9CCeraShopD1Ev>  ; WongWork::CCeraShop::~CCeraShop()
0854c451 +0x27:  mov    %esi,%eax
0854c453 +0x29:  mov    %ebx,%edx
0854c455 +0x2b:  mov    %eax,(%esp)
0854c458 +0x2e:  call   08ae3750 <_Unwind_Resume>
0854c45d +0x33:  mov    0x8(%ebp),%eax
0854c460 +0x36:  mov    %eax,(%esp)
0854c463 +0x39:  call   08320314 <_ZN8WongWork9CCeraShopD1Ev>  ; WongWork::CCeraShop::~CCeraShop()
0854c468 +0x3e:  add    $0x10,%esp
0854c46b +0x41:  pop    %ebx
0854c46c +0x42:  pop    %esi
0854c46d +0x43:  pop    %ebp
0854c46e +0x44:  ret
0854c46f +0x45:  nop
```

## 反编译 C

```c
// ItemVendingMachine::~ItemVendingMachine @ 0x854c42a

/* ItemVendingMachine::~ItemVendingMachine() */

void __thiscall ItemVendingMachine::~ItemVendingMachine(ItemVendingMachine *this)

{
                    /* try { // try from 0854c43b to 0854c43f has its CatchHandler @ 0854c442 */
  ARAD::CeraShopPurcahseCountBonus::~CeraShopPurcahseCountBonus
            ((CeraShopPurcahseCountBonus *)(this + 8));
  WongWork::CCeraShop::~CCeraShop((CCeraShop *)this);
  return;
}
```
