# execute

`_ZN11game_master17CAchievementReset7executeEv`

`game_master::CAchievementReset::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CAchievementReset` | `0x084b076a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b076a  _ZN11game_master17CAchievementReset7executeEv
#           game_master::CAchievementReset::execute()
# range [0x084b076a, 0x084b07fd]
084b076a +0x00:  push   %ebp
084b076b +0x01:  mov    %esp,%ebp
084b076d +0x03:  sub    $0x18,%esp
084b0770 +0x06:  mov    0x8(%ebp),%eax
084b0773 +0x09:  mov    %eax,(%esp)
084b0776 +0x0c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b077b +0x11:  movl   $0xe,0x4(%esp)
084b0783 +0x19:  mov    %eax,(%esp)
084b0786 +0x1c:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084b078b +0x21:  mov    %eax,(%esp)
084b078e +0x24:  call   086410d6 <_ZN10CTitleBook9_gm_clearEv>  ; CTitleBook::_gm_clear()
084b0793 +0x29:  mov    0x8(%ebp),%eax
084b0796 +0x2c:  mov    %eax,(%esp)
084b0799 +0x2f:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b079e +0x34:  movl   $0xf,0x4(%esp)
084b07a6 +0x3c:  mov    %eax,(%esp)
084b07a9 +0x3f:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084b07ae +0x44:  mov    %eax,(%esp)
084b07b1 +0x47:  call   0828d338 <_ZN12CAchievement8_gm_initEv>  ; CAchievement::_gm_init()
084b07b6 +0x4c:  mov    0x8(%ebp),%eax
084b07b9 +0x4f:  mov    %eax,(%esp)
084b07bc +0x52:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b07c1 +0x57:  movl   $0xe,0x4(%esp)
084b07c9 +0x5f:  mov    %eax,(%esp)
084b07cc +0x62:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084b07d1 +0x67:  mov    %eax,(%esp)
084b07d4 +0x6a:  call   08641704 <_ZN10CTitleBook8sendListEv>  ; CTitleBook::sendList()
084b07d9 +0x6f:  mov    0x8(%ebp),%eax
084b07dc +0x72:  mov    %eax,(%esp)
084b07df +0x75:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b07e4 +0x7a:  movl   $0xf,0x4(%esp)
084b07ec +0x82:  mov    %eax,(%esp)
084b07ef +0x85:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084b07f4 +0x8a:  mov    %eax,(%esp)
084b07f7 +0x8d:  call   0828c4de <_ZN12CAchievement8sendListEv>  ; CAchievement::sendList()
084b07fc +0x92:  leave
084b07fd +0x93:  ret
```

## 反编译 C

```c
// game_master::CAchievementReset::execute @ 0x84b076a

/* game_master::CAchievementReset::execute() */

void __thiscall game_master::CAchievementReset::execute(CAchievementReset *this)

{
  CUser *pCVar1;
  CTitleBook *pCVar2;
  CAchievement *pCVar3;
  
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  pCVar2 = (CTitleBook *)CUser::GetCharacExpandData(pCVar1,0xe);
  CTitleBook::_gm_clear(pCVar2);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  pCVar3 = (CAchievement *)CUser::GetCharacExpandData(pCVar1,0xf);
  CAchievement::_gm_init(pCVar3);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  pCVar2 = (CTitleBook *)CUser::GetCharacExpandData(pCVar1,0xe);
  CTitleBook::sendList(pCVar2);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  pCVar3 = (CAchievement *)CUser::GetCharacExpandData(pCVar1,0xf);
  CAchievement::sendList(pCVar3);
  return;
}
```
