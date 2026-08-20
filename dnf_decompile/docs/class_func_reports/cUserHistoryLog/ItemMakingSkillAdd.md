# ItemMakingSkillAdd

`_ZN15cUserHistoryLog18ItemMakingSkillAddE21ENUM_ITEM_MAKING_TYPEiis`

`cUserHistoryLog::ItemMakingSkillAdd(ENUM_ITEM_MAKING_TYPE, int, int, short)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686a88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686a88  _ZN15cUserHistoryLog18ItemMakingSkillAddE21ENUM_ITEM_MAKING_TYPEiis
#           cUserHistoryLog::ItemMakingSkillAdd(ENUM_ITEM_MAKING_TYPE, int, int, short)
# range [0x08686a88, 0x08686ac9]
08686a88 +0x00:  push   %ebp
08686a89 +0x01:  mov    %esp,%ebp
08686a8b +0x03:  sub    $0x38,%esp
08686a8e +0x06:  mov    0x18(%ebp),%eax
08686a91 +0x09:  mov    %ax,-0xc(%ebp)
08686a95 +0x0d:  movswl -0xc(%ebp),%ecx
08686a99 +0x11:  mov    0xc(%ebp),%edx
08686a9c +0x14:  mov    0x8(%ebp),%eax
08686a9f +0x17:  mov    (%eax),%eax
08686aa1 +0x19:  mov    %ecx,0x14(%esp)
08686aa5 +0x1d:  mov    0x14(%ebp),%ecx
08686aa8 +0x20:  mov    %ecx,0x10(%esp)
08686aac +0x24:  mov    0x10(%ebp),%ecx
08686aaf +0x27:  mov    %ecx,0xc(%esp)
08686ab3 +0x2b:  mov    %edx,0x8(%esp)
08686ab7 +0x2f:  movl   $"ItemMakingSkill+,%d,%d,%d,%d",0x4(%esp)
08686abf +0x37:  mov    %eax,(%esp)
08686ac2 +0x3a:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686ac7 +0x3f:  leave
08686ac8 +0x40:  ret
08686ac9 +0x41:  nop
```

## 反编译 C

```c
// cUserHistoryLog::ItemMakingSkillAdd @ 0x8686a88

/* cUserHistoryLog::ItemMakingSkillAdd(ENUM_ITEM_MAKING_TYPE, int, int, short) */

void __thiscall
cUserHistoryLog::ItemMakingSkillAdd
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          short param_5)

{
  CUser::LogHistory(*(CUser **)this,"ItemMakingSkill+,%d,%d,%d,%d",param_2,param_3,param_4,
                    (int)param_5);
  return;
}
```
