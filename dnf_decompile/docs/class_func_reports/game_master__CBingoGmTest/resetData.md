# resetData

`_ZN11game_master12CBingoGmTest9resetDataEv`

`game_master::CBingoGmTest::resetData()`

| 类 | 地址 |
|---|---|
| `game_master::CBingoGmTest` | `0x084b363e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b363e  _ZN11game_master12CBingoGmTest9resetDataEv
#           game_master::CBingoGmTest::resetData()
# range [0x084b363e, 0x084b3689]
084b363e +0x00:  push   %ebp
084b363f +0x01:  mov    %esp,%ebp
084b3641 +0x03:  sub    $0x28,%esp
084b3644 +0x06:  mov    0x8(%ebp),%eax
084b3647 +0x09:  mov    %eax,(%esp)
084b364a +0x0c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b364f +0x11:  mov    %eax,-0xc(%ebp)
084b3652 +0x14:  cmpl   $0x0,-0xc(%ebp)
084b3656 +0x18:  je     084b3687 <+0x49>
084b3658 +0x1a:  mov    -0xc(%ebp),%eax
084b365b +0x1d:  mov    %eax,(%esp)
084b365e +0x20:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
084b3663 +0x25:  mov    %eax,(%esp)
084b3666 +0x28:  call   080cbc6c <_GLOBAL__I__ZN10BingoEventC2Ev+0xab9>  ; global constructors keyed to BingoEvent::BingoEvent()+0xab9
084b366b +0x2d:  mov    -0xc(%ebp),%eax
084b366e +0x30:  mov    %eax,(%esp)
084b3671 +0x33:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
084b3676 +0x38:  movb   $0x1,0x6(%eax)
084b367a +0x3c:  mov    -0xc(%ebp),%eax
084b367d +0x3f:  mov    %eax,(%esp)
084b3680 +0x42:  call   0869134e <_ZN5CUser13sendBingoDataEv>  ; CUser::sendBingoData()
084b3685 +0x47:  jmp    084b3688 <+0x4a>
084b3687 +0x49:  nop
084b3688 +0x4a:  leave
084b3689 +0x4b:  ret
```

## 反编译 C

```c
// game_master::CBingoGmTest::resetData @ 0x84b363e

/* game_master::CBingoGmTest::resetData() */

void __thiscall game_master::CBingoGmTest::resetData(CBingoGmTest *this)

{
  CUser *this_00;
  BingoData *this_01;
  int iVar1;
  
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (this_00 != (CUser *)0x0) {
    this_01 = (BingoData *)CUser::getBingoData(this_00);
    BingoData::clear(this_01);
    iVar1 = CUser::getBingoData(this_00);
    *(undefined1 *)(iVar1 + 6) = 1;
    CUser::sendBingoData(this_00);
  }
  return;
}
```
