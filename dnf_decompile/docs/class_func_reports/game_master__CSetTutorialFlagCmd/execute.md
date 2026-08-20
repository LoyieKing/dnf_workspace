# execute

`_ZN11game_master19CSetTutorialFlagCmd7executeEv`

`game_master::CSetTutorialFlagCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CSetTutorialFlagCmd` | `0x084a9252` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a9252  _ZN11game_master19CSetTutorialFlagCmd7executeEv
#           game_master::CSetTutorialFlagCmd::execute()
# range [0x084a9252, 0x084a927d]
084a9252 +0x00:  push   %ebp
084a9253 +0x01:  mov    %esp,%ebp
084a9255 +0x03:  push   %ebx
084a9256 +0x04:  sub    $0x24,%esp
084a9259 +0x07:  mov    0x8(%ebp),%eax
084a925c +0x0a:  mov    0x8(%eax),%eax
084a925f +0x0d:  mov    %eax,%ebx
084a9261 +0x0f:  mov    0x8(%ebp),%eax
084a9264 +0x12:  mov    %eax,(%esp)
084a9267 +0x15:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a926c +0x1a:  mov    %ebx,0x4(%esp)
084a9270 +0x1e:  mov    %eax,(%esp)
084a9273 +0x21:  call   086475d8 <_ZN5CUser14RewardTutorialEj>  ; CUser::RewardTutorial(unsigned int)
084a9278 +0x26:  add    $0x24,%esp
084a927b +0x29:  pop    %ebx
084a927c +0x2a:  pop    %ebp
084a927d +0x2b:  ret
```

## 反编译 C

```c
// game_master::CSetTutorialFlagCmd::execute @ 0x84a9252

/* game_master::CSetTutorialFlagCmd::execute() */

void __thiscall game_master::CSetTutorialFlagCmd::execute(CSetTutorialFlagCmd *this)

{
  uint uVar1;
  CUser *this_00;
  
  uVar1 = *(uint *)(this + 8);
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::RewardTutorial(this_00,uVar1);
  return;
}
```
