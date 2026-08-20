# send_RedeemInfo

`_ZN5CUser15send_RedeemInfoEv`

`CUser::send_RedeemInfo()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086624f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086624f8  _ZN5CUser15send_RedeemInfoEv
#           CUser::send_RedeemInfo()
# range [0x086624f8, 0x08662527]
086624f8 +0x00:  push   %ebp
086624f9 +0x01:  mov    %esp,%ebp
086624fb +0x03:  sub    $0x28,%esp
086624fe +0x06:  movl   $0x6,0x4(%esp)
08662506 +0x0e:  mov    0x8(%ebp),%eax
08662509 +0x11:  mov    %eax,(%esp)
0866250c +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08662511 +0x19:  mov    %eax,-0xc(%ebp)
08662514 +0x1c:  mov    0x8(%ebp),%eax
08662517 +0x1f:  mov    %eax,0x4(%esp)
0866251b +0x23:  mov    -0xc(%ebp),%eax
0866251e +0x26:  mov    %eax,(%esp)
08662521 +0x29:  call   085f73ee <_ZN11Redeem_Item11CRedeemItem15Send_RedeemListEP5CUser>  ; Redeem_Item::CRedeemItem::Send_RedeemList(CUser*)
08662526 +0x2e:  leave
08662527 +0x2f:  ret
```

## 反编译 C

```c
// CUser::send_RedeemInfo @ 0x86624f8

/* CUser::send_RedeemInfo() */

void __thiscall CUser::send_RedeemInfo(CUser *this)

{
  CRedeemItem *this_00;
  
  this_00 = (CRedeemItem *)GetCharacExpandData(this,6);
  ::Redeem_Item::CRedeemItem::Send_RedeemList(this_00,this);
  return;
}
```
