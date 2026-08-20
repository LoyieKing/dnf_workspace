# SaveFeaturedIdx

`_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii`

`WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08325a30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08325a30  _ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii
#           WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)
# range [0x08325a30, 0x08325a87]
08325a30 +0x00:  push   %ebp
08325a31 +0x01:  mov    %esp,%ebp
08325a33 +0x03:  push   %ebx
08325a34 +0x04:  sub    $0x24,%esp
08325a37 +0x07:  cmpl   $0x0,0xc(%ebp)
08325a3b +0x0b:  je     08325a80 <+0x50>
08325a3d +0x0d:  movl   $0xffffffff,0x4(%esp)
08325a45 +0x15:  mov    0x8(%ebp),%eax
08325a48 +0x18:  mov    %eax,(%esp)
08325a4b +0x1b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08325a50 +0x20:  mov    %eax,%ebx
08325a52 +0x22:  mov    0x8(%ebp),%eax
08325a55 +0x25:  mov    %eax,(%esp)
08325a58 +0x28:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08325a5d +0x2d:  mov    0x14(%ebp),%edx
08325a60 +0x30:  mov    %edx,0x10(%esp)
08325a64 +0x34:  mov    0x10(%ebp),%edx
08325a67 +0x37:  mov    %edx,0xc(%esp)
08325a6b +0x3b:  mov    0xc(%ebp),%edx
08325a6e +0x3e:  mov    %edx,0x8(%esp)
08325a72 +0x42:  mov    %ebx,0x4(%esp)
08325a76 +0x46:  mov    %eax,(%esp)
08325a79 +0x49:  call   0841b2da <_ZN23DB_SaveFeaturedGoodsIdx11makeRequestEjiiii>  ; DB_SaveFeaturedGoodsIdx::makeRequest(unsigned int, int, int, int, int)
08325a7e +0x4e:  jmp    08325a81 <+0x51>
08325a80 +0x50:  nop
08325a81 +0x51:  add    $0x24,%esp
08325a84 +0x54:  pop    %ebx
08325a85 +0x55:  pop    %ebp
08325a86 +0x56:  ret
08325a87 +0x57:  nop
```

## 反编译 C

```c
// WongWork::CCeraShop::SaveFeaturedIdx @ 0x8325a30

/* WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int) */

void WongWork::CCeraShop::SaveFeaturedIdx(CUser *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    iVar1 = CUser::get_charac_no(param_1,-1);
    uVar2 = CUser::get_acc_id(param_1);
    DB_SaveFeaturedGoodsIdx::makeRequest(uVar2,iVar1,param_2,param_3,param_4);
  }
  return;
}
```
