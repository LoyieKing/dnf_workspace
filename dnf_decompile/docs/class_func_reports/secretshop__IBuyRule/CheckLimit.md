# CheckLimit

`_ZN10secretshop8IBuyRule10CheckLimitERNS_16SECRET_SHOP_INFOEiiRi`

`secretshop::IBuyRule::CheckLimit(secretshop::SECRET_SHOP_INFO&, int, int, int&)`

| 类 | 地址 |
|---|---|
| `secretshop::IBuyRule` | `0x085fb7e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fb7e4  _ZN10secretshop8IBuyRule10CheckLimitERNS_16SECRET_SHOP_INFOEiiRi
#           secretshop::IBuyRule::CheckLimit(secretshop::SECRET_SHOP_INFO&, int, int, int&)
# range [0x085fb7e4, 0x085fb885]
085fb7e4 +0x00:  push   %ebp
085fb7e5 +0x01:  mov    %esp,%ebp
085fb7e7 +0x03:  sub    $0x28,%esp
085fb7ea +0x06:  mov    0xc(%ebp),%eax
085fb7ed +0x09:  mov    0x10(%ebp),%edx
085fb7f0 +0x0c:  mov    %edx,0x4(%esp)
085fb7f4 +0x10:  mov    %eax,(%esp)
085fb7f7 +0x13:  call   08ab12a0 <_ZN10secretshop8RETAILER11GetSaleInfoEi>  ; secretshop::RETAILER::GetSaleInfo(int)
085fb7fc +0x18:  mov    %eax,-0x10(%ebp)
085fb7ff +0x1b:  mov    0xc(%ebp),%eax
085fb802 +0x1e:  lea    0xc(%eax),%edx
085fb805 +0x21:  mov    0x10(%ebp),%eax
085fb808 +0x24:  mov    %eax,0x4(%esp)
085fb80c +0x28:  mov    %edx,(%esp)
085fb80f +0x2b:  call   08ab1344 <_ZN10secretshop7SHOPPER10GetBuyInfoEi>  ; secretshop::SHOPPER::GetBuyInfo(int)
085fb814 +0x30:  mov    %eax,-0xc(%ebp)
085fb817 +0x33:  cmpl   $0x0,-0x10(%ebp)
085fb81b +0x37:  jne    085fb824 <+0x40>
085fb81d +0x39:  mov    $0x0,%eax
085fb822 +0x3e:  jmp    085fb883 <+0x9f>
085fb824 +0x40:  cmpl   $0x0,-0xc(%ebp)
085fb828 +0x44:  je     085fb85c <+0x78>
085fb82a +0x46:  mov    -0x10(%ebp),%eax
085fb82d +0x49:  mov    0xc(%eax),%edx
085fb830 +0x4c:  mov    -0xc(%ebp),%eax
085fb833 +0x4f:  mov    0x4(%eax),%eax
085fb836 +0x52:  add    0x14(%ebp),%eax
085fb839 +0x55:  cmp    %eax,%edx
085fb83b +0x57:  jge    085fb844 <+0x60>
085fb83d +0x59:  mov    $0x0,%eax
085fb842 +0x5e:  jmp    085fb883 <+0x9f>
085fb844 +0x60:  mov    -0x10(%ebp),%eax
085fb847 +0x63:  mov    0xc(%eax),%edx
085fb84a +0x66:  mov    -0xc(%ebp),%eax
085fb84d +0x69:  mov    0x4(%eax),%eax
085fb850 +0x6c:  add    0x14(%ebp),%eax
085fb853 +0x6f:  sub    %eax,%edx
085fb855 +0x71:  mov    0x18(%ebp),%eax
085fb858 +0x74:  mov    %edx,(%eax)
085fb85a +0x76:  jmp    085fb87e <+0x9a>
085fb85c +0x78:  mov    -0x10(%ebp),%eax
085fb85f +0x7b:  mov    0xc(%eax),%eax
085fb862 +0x7e:  cmp    0x14(%ebp),%eax
085fb865 +0x81:  jge    085fb86e <+0x8a>
085fb867 +0x83:  mov    $0x0,%eax
085fb86c +0x88:  jmp    085fb883 <+0x9f>
085fb86e +0x8a:  mov    -0x10(%ebp),%eax
085fb871 +0x8d:  mov    0xc(%eax),%eax
085fb874 +0x90:  mov    %eax,%edx
085fb876 +0x92:  sub    0x14(%ebp),%edx
085fb879 +0x95:  mov    0x18(%ebp),%eax
085fb87c +0x98:  mov    %edx,(%eax)
085fb87e +0x9a:  mov    $0x1,%eax
085fb883 +0x9f:  leave
085fb884 +0xa0:  ret
085fb885 +0xa1:  nop
```

## 反编译 C

```c
// secretshop::IBuyRule::CheckLimit @ 0x85fb7e4

/* secretshop::IBuyRule::CheckLimit(secretshop::SECRET_SHOP_INFO&, int, int, int&) */

undefined4 __thiscall
secretshop::IBuyRule::CheckLimit
          (IBuyRule *this,SECRET_SHOP_INFO *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = RETAILER::GetSaleInfo((int)param_1);
  iVar2 = SHOPPER::GetBuyInfo((int)(param_1 + 0xc));
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0xc) < param_3) {
        return 0;
      }
      *param_4 = *(int *)(iVar1 + 0xc) - param_3;
    }
    else {
      if (*(int *)(iVar1 + 0xc) < *(int *)(iVar2 + 4) + param_3) {
        return 0;
      }
      *param_4 = *(int *)(iVar1 + 0xc) - (*(int *)(iVar2 + 4) + param_3);
    }
    uVar3 = 1;
  }
  return uVar3;
}
```
