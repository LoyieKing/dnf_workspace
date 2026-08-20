# execute

`_ZN11game_master20CAchievementAllClear7executeEv`

`game_master::CAchievementAllClear::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CAchievementAllClear` | `0x084b097c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b097c  _ZN11game_master20CAchievementAllClear7executeEv
#           game_master::CAchievementAllClear::execute()
# range [0x084b097c, 0x084b09a7]
084b097c +0x00:  push   %ebp
084b097d +0x01:  mov    %esp,%ebp
084b097f +0x03:  sub    $0x18,%esp
084b0982 +0x06:  mov    0x8(%ebp),%eax
084b0985 +0x09:  mov    %eax,(%esp)
084b0988 +0x0c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b098d +0x11:  movl   $0xf,0x4(%esp)
084b0995 +0x19:  mov    %eax,(%esp)
084b0998 +0x1c:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084b099d +0x21:  mov    %eax,(%esp)
084b09a0 +0x24:  call   0828d738 <_ZN12CAchievement12_gm_clearAllEv>  ; CAchievement::_gm_clearAll()
084b09a5 +0x29:  leave
084b09a6 +0x2a:  ret
084b09a7 +0x2b:  nop
```

## 反编译 C

```c
// game_master::CAchievementAllClear::execute @ 0x84b097c

/* game_master::CAchievementAllClear::execute() */

void __thiscall game_master::CAchievementAllClear::execute(CAchievementAllClear *this)

{
  CUser *pCVar1;
  CAchievement *this_00;
  
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  this_00 = (CAchievement *)CUser::GetCharacExpandData(pCVar1,0xf);
  CAchievement::_gm_clearAll(this_00);
  return;
}
```
