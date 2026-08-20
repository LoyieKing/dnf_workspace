# CopyItem

`_ZN16SecretShopScript8CopyItemERN10secretshop9SALE_INFOER10stSaleInfo`

`SecretShopScript::CopyItem(secretshop::SALE_INFO&, stSaleInfo&)`

| 类 | 地址 |
|---|---|
| `SecretShopScript` | `0x08a8306c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a8306c  _ZN16SecretShopScript8CopyItemERN10secretshop9SALE_INFOER10stSaleInfo
#           SecretShopScript::CopyItem(secretshop::SALE_INFO&, stSaleInfo&)
# range [0x08a8306c, 0x08a830e1]
08a8306c +0x00:  push   %ebp
08a8306d +0x01:  mov    %esp,%ebp
08a8306f +0x03:  sub    $0x18,%esp
08a83072 +0x06:  mov    0x10(%ebp),%eax
08a83075 +0x09:  mov    (%eax),%edx
08a83077 +0x0b:  mov    0xc(%ebp),%eax
08a8307a +0x0e:  mov    %edx,(%eax)
08a8307c +0x10:  mov    0x10(%ebp),%eax
08a8307f +0x13:  movzbl 0x4(%eax),%edx
08a83083 +0x17:  mov    0xc(%ebp),%eax
08a83086 +0x1a:  mov    %dl,0x4(%eax)
08a83089 +0x1d:  mov    0x10(%ebp),%eax
08a8308c +0x20:  mov    0x10(%eax),%edx
08a8308f +0x23:  mov    0xc(%ebp),%eax
08a83092 +0x26:  mov    %edx,0xc(%eax)
08a83095 +0x29:  mov    0xc(%ebp),%eax
08a83098 +0x2c:  movzbl 0x4(%eax),%eax
08a8309c +0x30:  test   %al,%al
08a8309e +0x32:  jne    08a830bd <+0x51>
08a830a0 +0x34:  mov    0x10(%ebp),%eax
08a830a3 +0x37:  mov    0x8(%eax),%eax
08a830a6 +0x3a:  mov    %eax,0x4(%esp)
08a830aa +0x3e:  mov    0x8(%ebp),%eax
08a830ad +0x41:  mov    %eax,(%esp)
08a830b0 +0x44:  call   08a83188 <_ZN16SecretShopScript16GetRandItemPriceEi>  ; SecretShopScript::GetRandItemPrice(int)
08a830b5 +0x49:  mov    0xc(%ebp),%edx
08a830b8 +0x4c:  mov    %eax,0x8(%edx)
08a830bb +0x4f:  jmp    08a830e0 <+0x74>
08a830bd +0x51:  mov    0xc(%ebp),%eax
08a830c0 +0x54:  movzbl 0x4(%eax),%eax
08a830c4 +0x58:  cmp    $0x1,%al
08a830c6 +0x5a:  jne    08a830e0 <+0x74>
08a830c8 +0x5c:  mov    0x10(%ebp),%eax
08a830cb +0x5f:  mov    0x8(%eax),%edx
08a830ce +0x62:  mov    0xc(%ebp),%eax
08a830d1 +0x65:  mov    %edx,0x10(%eax)
08a830d4 +0x68:  mov    0x10(%ebp),%eax
08a830d7 +0x6b:  mov    0xc(%eax),%edx
08a830da +0x6e:  mov    0xc(%ebp),%eax
08a830dd +0x71:  mov    %edx,0x14(%eax)
08a830e0 +0x74:  leave
08a830e1 +0x75:  ret
```

## 反编译 C

```c
// SecretShopScript::CopyItem @ 0x8a8306c

/* SecretShopScript::CopyItem(secretshop::SALE_INFO&, stSaleInfo&) */

void __thiscall
SecretShopScript::CopyItem(SecretShopScript *this,SALE_INFO *param_1,stSaleInfo *param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  param_1[4] = *(SALE_INFO *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x10);
  if (param_1[4] == (SALE_INFO)0x0) {
    uVar1 = GetRandItemPrice(this,*(int *)(param_2 + 8));
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  else if (param_1[4] == (SALE_INFO)0x1) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  }
  return;
}
```
