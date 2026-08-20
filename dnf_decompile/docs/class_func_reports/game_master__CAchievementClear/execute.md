# execute

`_ZN11game_master17CAchievementClear7executeEv`

`game_master::CAchievementClear::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CAchievementClear` | `0x084b092a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b092a  _ZN11game_master17CAchievementClear7executeEv
#           game_master::CAchievementClear::execute()
# range [0x084b092a, 0x084b097b]
084b092a +0x00:  push   %ebp
084b092b +0x01:  mov    %esp,%ebp
084b092d +0x03:  push   %ebx
084b092e +0x04:  sub    $0x24,%esp
084b0931 +0x07:  mov    0x8(%ebp),%eax
084b0934 +0x0a:  mov    0x8(%eax),%ebx
084b0937 +0x0d:  mov    0x8(%ebp),%eax
084b093a +0x10:  mov    %eax,(%esp)
084b093d +0x13:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b0942 +0x18:  movl   $0xf,0x4(%esp)
084b094a +0x20:  mov    %eax,(%esp)
084b094d +0x23:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084b0952 +0x28:  movl   $0xffff,0x10(%esp)
084b095a +0x30:  movl   $0xffff,0xc(%esp)
084b0962 +0x38:  movl   $0xffff,0x8(%esp)
084b096a +0x40:  mov    %ebx,0x4(%esp)
084b096e +0x44:  mov    %eax,(%esp)
084b0971 +0x47:  call   0828b678 <_ZN12CAchievement10setTriggerEjttt>  ; CAchievement::setTrigger(unsigned int, unsigned short, unsigned short, unsigned short)
084b0976 +0x4c:  add    $0x24,%esp
084b0979 +0x4f:  pop    %ebx
084b097a +0x50:  pop    %ebp
084b097b +0x51:  ret
```

## 反编译 C

```c
// game_master::CAchievementClear::execute @ 0x84b092a

/* game_master::CAchievementClear::execute() */

void __thiscall game_master::CAchievementClear::execute(CAchievementClear *this)

{
  uint uVar1;
  CUser *pCVar2;
  CAchievement *this_00;
  
  uVar1 = *(uint *)(this + 8);
  pCVar2 = (CUser *)CCommand::GetUser((CCommand *)this);
  this_00 = (CAchievement *)CUser::GetCharacExpandData(pCVar2,0xf);
  CAchievement::setTrigger(this_00,uVar1,0xffff,0xffff,0xffff);
  return;
}
```
