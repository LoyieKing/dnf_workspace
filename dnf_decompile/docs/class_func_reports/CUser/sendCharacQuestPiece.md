# sendCharacQuestPiece

`_ZN5CUser20sendCharacQuestPieceEv`

`CUser::sendCharacQuestPiece()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868af2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868af2c  _ZN5CUser20sendCharacQuestPieceEv
#           CUser::sendCharacQuestPiece()
# range [0x0868af2c, 0x0868af65]
0868af2c +0x00:  push   %ebp
0868af2d +0x01:  mov    %esp,%ebp
0868af2f +0x03:  sub    $0x28,%esp
0868af32 +0x06:  movl   $0xb,0x4(%esp)
0868af3a +0x0e:  mov    0x8(%ebp),%eax
0868af3d +0x11:  mov    %eax,(%esp)
0868af40 +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0868af45 +0x19:  mov    %eax,-0xc(%ebp)
0868af48 +0x1c:  cmpl   $0x0,-0xc(%ebp)
0868af4c +0x20:  je     0868af62 <+0x36>
0868af4e +0x22:  mov    0x8(%ebp),%eax
0868af51 +0x25:  mov    %eax,0x4(%esp)
0868af55 +0x29:  mov    -0xc(%ebp),%eax
0868af58 +0x2c:  mov    %eax,(%esp)
0868af5b +0x2f:  call   085ef7cc <_ZN10CQuestShop20sendCharacQuestPieceEP5CUser>  ; CQuestShop::sendCharacQuestPiece(CUser*)
0868af60 +0x34:  jmp    0868af63 <+0x37>
0868af62 +0x36:  nop
0868af63 +0x37:  leave
0868af64 +0x38:  ret
0868af65 +0x39:  nop
```

## 反编译 C

```c
// CUser::sendCharacQuestPiece @ 0x868af2c

/* CUser::sendCharacQuestPiece() */

void __thiscall CUser::sendCharacQuestPiece(CUser *this)

{
  CQuestShop *this_00;
  
  this_00 = (CQuestShop *)GetCharacExpandData(this,0xb);
  if (this_00 != (CQuestShop *)0x0) {
    CQuestShop::sendCharacQuestPiece(this_00,this);
  }
  return;
}
```
