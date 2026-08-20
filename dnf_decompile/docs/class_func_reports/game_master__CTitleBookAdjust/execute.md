# execute

`_ZN11game_master16CTitleBookAdjust7executeEv`

`game_master::CTitleBookAdjust::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CTitleBookAdjust` | `0x084b068a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b068a  _ZN11game_master16CTitleBookAdjust7executeEv
#           game_master::CTitleBookAdjust::execute()
# range [0x084b068a, 0x084b0741]
084b068a +0x00:  push   %ebp
084b068b +0x01:  mov    %esp,%ebp
084b068d +0x03:  sub    $0x18,%esp
084b0690 +0x06:  mov    0x8(%ebp),%eax
084b0693 +0x09:  mov    %eax,(%esp)
084b0696 +0x0c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b069b +0x11:  movl   $0xe,0x4(%esp)
084b06a3 +0x19:  mov    %eax,(%esp)
084b06a6 +0x1c:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084b06ab +0x21:  mov    %eax,(%esp)
084b06ae +0x24:  call   086410d6 <_ZN10CTitleBook9_gm_clearEv>  ; CTitleBook::_gm_clear()
084b06b3 +0x29:  mov    0x8(%ebp),%eax
084b06b6 +0x2c:  mov    %eax,(%esp)
084b06b9 +0x2f:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b06be +0x34:  movl   $0xf,0x4(%esp)
084b06c6 +0x3c:  mov    %eax,(%esp)
084b06c9 +0x3f:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084b06ce +0x44:  mov    %eax,(%esp)
084b06d1 +0x47:  call   0828d338 <_ZN12CAchievement8_gm_initEv>  ; CAchievement::_gm_init()
084b06d6 +0x4c:  mov    0x8(%ebp),%eax
084b06d9 +0x4f:  mov    %eax,(%esp)
084b06dc +0x52:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b06e1 +0x57:  movl   $0xf,0x4(%esp)
084b06e9 +0x5f:  mov    %eax,(%esp)
084b06ec +0x62:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084b06f1 +0x67:  mov    %eax,(%esp)
084b06f4 +0x6a:  call   0828c976 <_ZN12CAchievement6adjustEv>  ; CAchievement::adjust()
084b06f9 +0x6f:  mov    0x8(%ebp),%eax
084b06fc +0x72:  mov    %eax,(%esp)
084b06ff +0x75:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b0704 +0x7a:  movl   $0xe,0x4(%esp)
084b070c +0x82:  mov    %eax,(%esp)
084b070f +0x85:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084b0714 +0x8a:  mov    %eax,(%esp)
084b0717 +0x8d:  call   08641704 <_ZN10CTitleBook8sendListEv>  ; CTitleBook::sendList()
084b071c +0x92:  mov    0x8(%ebp),%eax
084b071f +0x95:  mov    %eax,(%esp)
084b0722 +0x98:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b0727 +0x9d:  movl   $0xf,0x4(%esp)
084b072f +0xa5:  mov    %eax,(%esp)
084b0732 +0xa8:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084b0737 +0xad:  mov    %eax,(%esp)
084b073a +0xb0:  call   0828c4de <_ZN12CAchievement8sendListEv>  ; CAchievement::sendList()
084b073f +0xb5:  leave
084b0740 +0xb6:  ret
084b0741 +0xb7:  nop
```

## 反编译 C

```c
// game_master::CTitleBookAdjust::execute @ 0x84b068a

/* game_master::CTitleBookAdjust::execute() */

void __thiscall game_master::CTitleBookAdjust::execute(CTitleBookAdjust *this)

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
  pCVar3 = (CAchievement *)CUser::GetCharacExpandData(pCVar1,0xf);
  CAchievement::adjust(pCVar3);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  pCVar2 = (CTitleBook *)CUser::GetCharacExpandData(pCVar1,0xe);
  CTitleBook::sendList(pCVar2);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  pCVar3 = (CAchievement *)CUser::GetCharacExpandData(pCVar1,0xf);
  CAchievement::sendList(pCVar3);
  return;
}
```
