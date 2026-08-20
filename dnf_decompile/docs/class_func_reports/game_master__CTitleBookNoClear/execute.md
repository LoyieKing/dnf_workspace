# execute

`_ZN11game_master17CTitleBookNoClear7executeEv`

`game_master::CTitleBookNoClear::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CTitleBookNoClear` | `0x084b0742` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b0742  _ZN11game_master17CTitleBookNoClear7executeEv
#           game_master::CTitleBookNoClear::execute()
# range [0x084b0742, 0x084b0769]
084b0742 +0x00:  push   %ebp
084b0743 +0x01:  mov    %esp,%ebp
084b0745 +0x03:  sub    $0x18,%esp
084b0748 +0x06:  mov    0x8(%ebp),%eax
084b074b +0x09:  mov    %eax,(%esp)
084b074e +0x0c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b0753 +0x11:  movl   $0xf,0x4(%esp)
084b075b +0x19:  mov    %eax,(%esp)
084b075e +0x1c:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084b0763 +0x21:  movb   $0x1,0x25(%eax)
084b0767 +0x25:  leave
084b0768 +0x26:  ret
084b0769 +0x27:  nop
```

## 反编译 C

```c
// game_master::CTitleBookNoClear::execute @ 0x84b0742

/* game_master::CTitleBookNoClear::execute() */

void __thiscall game_master::CTitleBookNoClear::execute(CTitleBookNoClear *this)

{
  CUser *pCVar1;
  int iVar2;
  
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  iVar2 = CUser::GetCharacExpandData(pCVar1,0xf);
  *(undefined1 *)(iVar2 + 0x25) = 1;
  return;
}
```
