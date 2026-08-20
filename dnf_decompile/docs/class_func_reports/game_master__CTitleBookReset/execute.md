# execute

`_ZN11game_master15CTitleBookReset7executeEv`

`game_master::CTitleBookReset::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CTitleBookReset` | `0x084b063c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b063c  _ZN11game_master15CTitleBookReset7executeEv
#           game_master::CTitleBookReset::execute()
# range [0x084b063c, 0x084b0689]
084b063c +0x00:  push   %ebp
084b063d +0x01:  mov    %esp,%ebp
084b063f +0x03:  sub    $0x18,%esp
084b0642 +0x06:  mov    0x8(%ebp),%eax
084b0645 +0x09:  mov    %eax,(%esp)
084b0648 +0x0c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b064d +0x11:  movl   $0xe,0x4(%esp)
084b0655 +0x19:  mov    %eax,(%esp)
084b0658 +0x1c:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084b065d +0x21:  mov    %eax,(%esp)
084b0660 +0x24:  call   086410d6 <_ZN10CTitleBook9_gm_clearEv>  ; CTitleBook::_gm_clear()
084b0665 +0x29:  mov    0x8(%ebp),%eax
084b0668 +0x2c:  mov    %eax,(%esp)
084b066b +0x2f:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b0670 +0x34:  movl   $0xe,0x4(%esp)
084b0678 +0x3c:  mov    %eax,(%esp)
084b067b +0x3f:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084b0680 +0x44:  mov    %eax,(%esp)
084b0683 +0x47:  call   08641704 <_ZN10CTitleBook8sendListEv>  ; CTitleBook::sendList()
084b0688 +0x4c:  leave
084b0689 +0x4d:  ret
```

## 反编译 C

```c
// game_master::CTitleBookReset::execute @ 0x84b063c

/* game_master::CTitleBookReset::execute() */

void __thiscall game_master::CTitleBookReset::execute(CTitleBookReset *this)

{
  CUser *pCVar1;
  CTitleBook *pCVar2;
  
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  pCVar2 = (CTitleBook *)CUser::GetCharacExpandData(pCVar1,0xe);
  CTitleBook::_gm_clear(pCVar2);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  pCVar2 = (CTitleBook *)CUser::GetCharacExpandData(pCVar1,0xe);
  CTitleBook::sendList(pCVar2);
  return;
}
```
