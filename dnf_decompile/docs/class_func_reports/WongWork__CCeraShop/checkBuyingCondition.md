# checkBuyingCondition

`_ZN8WongWork9CCeraShop20checkBuyingConditionEP5CUserjmjtht`

`WongWork::CCeraShop::checkBuyingCondition(CUser*, unsigned int, unsigned long, unsigned int, unsigned short, unsigned char, unsigned short)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08323f2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08323f2a  _ZN8WongWork9CCeraShop20checkBuyingConditionEP5CUserjmjtht
#           WongWork::CCeraShop::checkBuyingCondition(CUser*, unsigned int, unsigned long, unsigned int, unsigned short, unsigned char, unsigned short)
# range [0x08323f2a, 0x08323f85]
08323f2a +0x00:  push   %ebp
08323f2b +0x01:  mov    %esp,%ebp
08323f2d +0x03:  sub    $0x38,%esp
08323f30 +0x06:  mov    0x1c(%ebp),%ecx
08323f33 +0x09:  mov    0x20(%ebp),%edx
08323f36 +0x0c:  mov    0x24(%ebp),%eax
08323f39 +0x0f:  mov    %cx,-0xc(%ebp)
08323f3d +0x13:  mov    %dl,-0x10(%ebp)
08323f40 +0x16:  mov    %ax,-0x14(%ebp)
08323f44 +0x1a:  movzwl -0x14(%ebp),%ecx
08323f48 +0x1e:  movzbl -0x10(%ebp),%edx
08323f4c +0x22:  movzwl -0xc(%ebp),%eax
08323f50 +0x26:  mov    %ecx,0x1c(%esp)
08323f54 +0x2a:  mov    %edx,0x18(%esp)
08323f58 +0x2e:  mov    %eax,0x14(%esp)
08323f5c +0x32:  mov    0x18(%ebp),%eax
08323f5f +0x35:  mov    %eax,0x10(%esp)
08323f63 +0x39:  mov    0x14(%ebp),%eax
08323f66 +0x3c:  mov    %eax,0xc(%esp)
08323f6a +0x40:  mov    0x10(%ebp),%eax
08323f6d +0x43:  mov    %eax,0x8(%esp)
08323f71 +0x47:  mov    0xc(%ebp),%eax
08323f74 +0x4a:  mov    %eax,0x4(%esp)
08323f78 +0x4e:  mov    0x8(%ebp),%eax
08323f7b +0x51:  mov    %eax,(%esp)
08323f7e +0x54:  call   08323f86 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht>  ; WongWork::CCeraShop::_CheckBuyingCondition(CUser*, unsigned int, unsigned long, unsigned int, unsigned short, unsigned char, unsigned short)
08323f83 +0x59:  leave
08323f84 +0x5a:  ret
08323f85 +0x5b:  nop
```

## 反编译 C

```c
// WongWork::CCeraShop::checkBuyingCondition @ 0x8323f2a

/* WongWork::CCeraShop::checkBuyingCondition(CUser*, unsigned int, unsigned long, unsigned int,
   unsigned short, unsigned char, unsigned short) */

void __thiscall
WongWork::CCeraShop::checkBuyingCondition
          (CCeraShop *this,CUser *param_1,uint param_2,ulong param_3,uint param_4,ushort param_5,
          uchar param_6,ushort param_7)

{
  _CheckBuyingCondition(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}
```
