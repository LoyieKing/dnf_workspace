# incQuestPiece

`_ZN5CUser13incQuestPieceEiib`

`CUser::incQuestPiece(int, int, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868af66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868af66  _ZN5CUser13incQuestPieceEiib
#           CUser::incQuestPiece(int, int, bool)
# range [0x0868af66, 0x0868afcf]
0868af66 +0x00:  push   %ebp
0868af67 +0x01:  mov    %esp,%ebp
0868af69 +0x03:  sub    $0x38,%esp
0868af6c +0x06:  mov    0x14(%ebp),%eax
0868af6f +0x09:  mov    %al,-0x1c(%ebp)
0868af72 +0x0c:  movl   $0xb,0x4(%esp)
0868af7a +0x14:  mov    0x8(%ebp),%eax
0868af7d +0x17:  mov    %eax,(%esp)
0868af80 +0x1a:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0868af85 +0x1f:  mov    %eax,-0x10(%ebp)
0868af88 +0x22:  cmpl   $0x0,-0x10(%ebp)
0868af8c +0x26:  je     0868afcd <+0x67>
0868af8e +0x28:  mov    -0x10(%ebp),%eax
0868af91 +0x2b:  mov    %eax,(%esp)
0868af94 +0x2e:  call   085eff44 <_GLOBAL__I__ZN10CQuestShopC2Ev+0xb0>  ; global constructors keyed to CQuestShop::CQuestShop()+0xb0
0868af99 +0x33:  mov    %eax,-0xc(%ebp)
0868af9c +0x36:  mov    0xc(%ebp),%eax
0868af9f +0x39:  mov    %eax,0x4(%esp)
0868afa3 +0x3d:  mov    -0x10(%ebp),%eax
0868afa6 +0x40:  mov    %eax,(%esp)
0868afa9 +0x43:  call   08695a64 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x22b9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x22b9
0868afae +0x48:  movzbl -0x1c(%ebp),%eax
0868afb2 +0x4c:  xor    $0x1,%eax
0868afb5 +0x4f:  test   %al,%al
0868afb7 +0x51:  je     0868afce <+0x68>
0868afb9 +0x53:  mov    0x8(%ebp),%eax
0868afbc +0x56:  mov    %eax,0x4(%esp)
0868afc0 +0x5a:  mov    -0x10(%ebp),%eax
0868afc3 +0x5d:  mov    %eax,(%esp)
0868afc6 +0x60:  call   085ef7cc <_ZN10CQuestShop20sendCharacQuestPieceEP5CUser>  ; CQuestShop::sendCharacQuestPiece(CUser*)
0868afcb +0x65:  jmp    0868afce <+0x68>
0868afcd +0x67:  nop
0868afce +0x68:  leave
0868afcf +0x69:  ret
```

## 反编译 C

```c
// CUser::incQuestPiece @ 0x868af66

/* CUser::incQuestPiece(int, int, bool) */

void __thiscall CUser::incQuestPiece(CUser *this,int param_1,int param_2,bool param_3)

{
  CQuestShop *this_00;
  
  this_00 = (CQuestShop *)GetCharacExpandData(this,0xb);
  if (this_00 != (CQuestShop *)0x0) {
    CQuestShop::getPiece(this_00);
    CQuestShop::addPiece(this_00,param_1);
    if (!param_3) {
      CQuestShop::sendCharacQuestPiece(this_00,this);
    }
  }
  return;
}
```
