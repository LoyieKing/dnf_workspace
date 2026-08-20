# InitSkillHistoryLog

`_ZN9SkillSlot19InitSkillHistoryLogE20ENUM_SKILL_TREE_KINDi`

`SkillSlot::InitSkillHistoryLog(ENUM_SKILL_TREE_KIND, int)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086085fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086085fa  _ZN9SkillSlot19InitSkillHistoryLogE20ENUM_SKILL_TREE_KINDi
#           SkillSlot::InitSkillHistoryLog(ENUM_SKILL_TREE_KIND, int)
# range [0x086085fa, 0x086086a9]
086085fa +0x00:  push   %ebp
086085fb +0x01:  mov    %esp,%ebp
086085fd +0x03:  push   %edi
086085fe +0x04:  push   %esi
086085ff +0x05:  push   %ebx
08608600 +0x06:  sub    $0x3c,%esp
08608603 +0x09:  mov    0x8(%ebp),%eax
08608606 +0x0c:  mov    (%eax),%eax
08608608 +0x0e:  test   %eax,%eax
0860860a +0x10:  je     086086a1 <+0xa7>
08608610 +0x16:  mov    0xc(%ebp),%eax
08608613 +0x19:  cmp    $0xffffffff,%eax
08608616 +0x1c:  je     0860861f <+0x25>
08608618 +0x1e:  mov    0xc(%ebp),%eax
0860861b +0x21:  test   %eax,%eax
0860861d +0x23:  jne    0860862f <+0x35>
0860861f +0x25:  movl   $0x0,-0x20(%ebp)
08608626 +0x2c:  movl   $0x2,-0x1c(%ebp)
0860862d +0x33:  jmp    0860863d <+0x43>
0860862f +0x35:  movl   $0x1,-0x20(%ebp)
08608636 +0x3c:  movl   $0x3,-0x1c(%ebp)
0860863d +0x43:  mov    0x10(%ebp),%edi
08608640 +0x46:  mov    -0x1c(%ebp),%eax
08608643 +0x49:  mov    %eax,0x4(%esp)
08608647 +0x4d:  mov    0x8(%ebp),%eax
0860864a +0x50:  mov    %eax,(%esp)
0860864d +0x53:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
08608652 +0x58:  mov    %eax,%esi
08608654 +0x5a:  mov    -0x20(%ebp),%eax
08608657 +0x5d:  mov    %eax,0x4(%esp)
0860865b +0x61:  mov    0x8(%ebp),%eax
0860865e +0x64:  mov    %eax,(%esp)
08608661 +0x67:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
08608666 +0x6c:  mov    %eax,%ebx
08608668 +0x6e:  mov    0x8(%ebp),%eax
0860866b +0x71:  mov    (%eax),%eax
0860866d +0x73:  mov    %eax,(%esp)
08608670 +0x76:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08608675 +0x7b:  mov    -0x20(%ebp),%edx
08608678 +0x7e:  mov    0x8(%ebp),%ecx
0860867b +0x81:  mov    (%ecx),%ecx
0860867d +0x83:  add    $0x79700,%ecx
08608683 +0x89:  mov    %edi,0x14(%esp)
08608687 +0x8d:  mov    %esi,0x10(%esp)
0860868b +0x91:  mov    %ebx,0xc(%esp)
0860868f +0x95:  mov    %eax,0x8(%esp)
08608693 +0x99:  mov    %edx,0x4(%esp)
08608697 +0x9d:  mov    %ecx,(%esp)
0860869a +0xa0:  call   08682cfa <_ZN15cUserHistoryLog9InitSkillEiiii16eSkillInitReason>  ; cUserHistoryLog::InitSkill(int, int, int, int, eSkillInitReason)
0860869f +0xa5:  jmp    086086a2 <+0xa8>
086086a1 +0xa7:  nop
086086a2 +0xa8:  add    $0x3c,%esp
086086a5 +0xab:  pop    %ebx
086086a6 +0xac:  pop    %esi
086086a7 +0xad:  pop    %edi
086086a8 +0xae:  pop    %ebp
086086a9 +0xaf:  ret
```

## 反编译 C

```c
// SkillSlot::InitSkillHistoryLog @ 0x86085fa

/* SkillSlot::InitSkillHistoryLog(ENUM_SKILL_TREE_KIND, int) */

void __thiscall SkillSlot::InitSkillHistoryLog(SkillSlot *this,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(int *)this != 0) {
    if ((param_2 == -1) || (param_2 == 0)) {
      local_24 = 0;
      local_20 = 2;
    }
    else {
      local_24 = 1;
      local_20 = 3;
    }
    uVar1 = get_remain_sfp_at_index(this,local_20);
    uVar2 = get_remain_sp_at_index(this,local_24);
    uVar3 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
    cUserHistoryLog::InitSkill
              ((cUserHistoryLog *)(*(int *)this + 0x79700),local_24,uVar3,uVar2,uVar1,param_3);
  }
  return;
}
```
