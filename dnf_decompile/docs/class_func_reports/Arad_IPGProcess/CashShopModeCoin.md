# CashShopModeCoin

`_ZN15Arad_IPGProcess16CashShopModeCoinEP5CUsertjic`

`Arad_IPGProcess::CashShopModeCoin(CUser*, unsigned short, unsigned int, int, char)`

| 类 | 地址 |
|---|---|
| `Arad_IPGProcess` | `0x0819c434` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819c434  _ZN15Arad_IPGProcess16CashShopModeCoinEP5CUsertjic
#           Arad_IPGProcess::CashShopModeCoin(CUser*, unsigned short, unsigned int, int, char)
# range [0x0819c434, 0x0819c49f]
0819c434 +0x00:  push   %ebp
0819c435 +0x01:  mov    %esp,%ebp
0819c437 +0x03:  sub    $0x38,%esp
0819c43a +0x06:  mov    0x10(%ebp),%edx
0819c43d +0x09:  mov    0x1c(%ebp),%eax
0819c440 +0x0c:  mov    %dx,-0xc(%ebp)
0819c444 +0x10:  mov    %al,-0x10(%ebp)
0819c447 +0x13:  cmpb   $0x1,-0x10(%ebp)
0819c44b +0x17:  jne    0819c479 <+0x45>
0819c44d +0x19:  movzwl -0xc(%ebp),%edx
0819c451 +0x1d:  mov    0x8(%ebp),%eax
0819c454 +0x20:  mov    (%eax),%eax
0819c456 +0x22:  mov    0x18(%ebp),%ecx
0819c459 +0x25:  mov    %ecx,0x10(%esp)
0819c45d +0x29:  mov    0x14(%ebp),%ecx
0819c460 +0x2c:  mov    %ecx,0xc(%esp)
0819c464 +0x30:  mov    %edx,0x8(%esp)
0819c468 +0x34:  mov    0xc(%ebp),%edx
0819c46b +0x37:  mov    %edx,0x4(%esp)
0819c46f +0x3b:  mov    %eax,(%esp)
0819c472 +0x3e:  call   0832619c <_ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertji>  ; WongWork::CCeraShop::_processCoinGift(CUser*, unsigned short, unsigned int, int)
0819c477 +0x43:  jmp    0819c49d <+0x69>
0819c479 +0x45:  movzwl -0xc(%ebp),%edx
0819c47d +0x49:  mov    0x8(%ebp),%eax
0819c480 +0x4c:  mov    (%eax),%eax
0819c482 +0x4e:  movl   $0x1,0xc(%esp)
0819c48a +0x56:  mov    %edx,0x8(%esp)
0819c48e +0x5a:  mov    0xc(%ebp),%edx
0819c491 +0x5d:  mov    %edx,0x4(%esp)
0819c495 +0x61:  mov    %eax,(%esp)
0819c498 +0x64:  call   08325a88 <_ZN8WongWork9CCeraShop12_processCoinEP5CUsertb>  ; WongWork::CCeraShop::_processCoin(CUser*, unsigned short, bool)
0819c49d +0x69:  leave
0819c49e +0x6a:  ret
0819c49f +0x6b:  nop
```

## 反编译 C

```c
// Arad_IPGProcess::CashShopModeCoin @ 0x819c434

/* Arad_IPGProcess::CashShopModeCoin(CUser*, unsigned short, unsigned int, int, char) */

void __thiscall
Arad_IPGProcess::CashShopModeCoin
          (Arad_IPGProcess *this,CUser *param_1,ushort param_2,uint param_3,int param_4,char param_5
          )

{
  if (param_5 == '\x01') {
    WongWork::CCeraShop::_processCoinGift(*(CCeraShop **)this,param_1,param_2,param_3,param_4);
  }
  else {
    WongWork::CCeraShop::_processCoin(*(CUser **)this,(ushort)param_1,SUB21(param_2,0));
  }
  return;
}
```
