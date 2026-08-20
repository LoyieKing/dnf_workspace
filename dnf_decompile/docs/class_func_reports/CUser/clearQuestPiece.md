# clearQuestPiece

`_ZN5CUser15clearQuestPieceEv`

`CUser::clearQuestPiece()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868afd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868afd0  _ZN5CUser15clearQuestPieceEv
#           CUser::clearQuestPiece()
# range [0x0868afd0, 0x0868b009]
0868afd0 +0x00:  push   %ebp
0868afd1 +0x01:  mov    %esp,%ebp
0868afd3 +0x03:  sub    $0x28,%esp
0868afd6 +0x06:  movl   $0xb,0x4(%esp)
0868afde +0x0e:  mov    0x8(%ebp),%eax
0868afe1 +0x11:  mov    %eax,(%esp)
0868afe4 +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0868afe9 +0x19:  mov    %eax,-0xc(%ebp)
0868afec +0x1c:  cmpl   $0x0,-0xc(%ebp)
0868aff0 +0x20:  je     0868b007 <+0x37>
0868aff2 +0x22:  movl   $0x0,0x4(%esp)
0868affa +0x2a:  mov    -0xc(%ebp),%eax
0868affd +0x2d:  mov    %eax,(%esp)
0868b000 +0x30:  call   08695a88 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x22dd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x22dd
0868b005 +0x35:  jmp    0868b008 <+0x38>
0868b007 +0x37:  nop
0868b008 +0x38:  leave
0868b009 +0x39:  ret
```

## 反编译 C

```c
// CUser::clearQuestPiece @ 0x868afd0

/* CUser::clearQuestPiece() */

void __thiscall CUser::clearQuestPiece(CUser *this)

{
  CQuestShop *this_00;
  
  this_00 = (CQuestShop *)GetCharacExpandData(this,0xb);
  if (this_00 != (CQuestShop *)0x0) {
    CQuestShop::setPiece(this_00,0);
  }
  return;
}
```
