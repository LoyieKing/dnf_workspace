# _CountQuestSPBook

`_ZN8WongWork13CSkillChanger17_CountQuestSPBookEPK5CUserRiS4_S4_S4_`

`WongWork::CSkillChanger::_CountQuestSPBook(CUser const*, int&, int&, int&, int&)`

| 类 | 地址 |
|---|---|
| `WongWork::CSkillChanger` | `0x0860a680` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860a680  _ZN8WongWork13CSkillChanger17_CountQuestSPBookEPK5CUserRiS4_S4_S4_
#           WongWork::CSkillChanger::_CountQuestSPBook(CUser const*, int&, int&, int&, int&)
# range [0x0860a680, 0x0860a6cf]
0860a680 +0x00:  push   %ebp
0860a681 +0x01:  mov    %esp,%ebp
0860a683 +0x03:  sub    $0x28,%esp
0860a686 +0x06:  mov    0xc(%ebp),%eax
0860a689 +0x09:  mov    %eax,(%esp)
0860a68c +0x0c:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0860a691 +0x11:  lea    0x4(%eax),%edx
0860a694 +0x14:  mov    0xc(%ebp),%eax
0860a697 +0x17:  mov    %eax,0x1c(%esp)
0860a69b +0x1b:  mov    0x8(%ebp),%eax
0860a69e +0x1e:  mov    %eax,0x18(%esp)
0860a6a2 +0x22:  mov    0x1c(%ebp),%eax
0860a6a5 +0x25:  mov    %eax,0x14(%esp)
0860a6a9 +0x29:  mov    0x18(%ebp),%eax
0860a6ac +0x2c:  mov    %eax,0x10(%esp)
0860a6b0 +0x30:  mov    0x14(%ebp),%eax
0860a6b3 +0x33:  mov    %eax,0xc(%esp)
0860a6b7 +0x37:  mov    0x10(%ebp),%eax
0860a6ba +0x3a:  mov    %eax,0x8(%esp)
0860a6be +0x3e:  movl   $&_ZN8WongWork13CSkillChanger17_fnEnumQuestClearEjPc,0x4(%esp)
0860a6c6 +0x46:  mov    %edx,(%esp)
0860a6c9 +0x49:  call   0808bb88 <_ZNK8WongWork11CQuestClear14enumQuestClearEPFbjPcEz>  ; WongWork::CQuestClear::enumQuestClear(bool (*)(unsigned int, char*), ...) const
0860a6ce +0x4e:  leave
0860a6cf +0x4f:  ret
```

## 反编译 C

```c
// WongWork::CSkillChanger::_CountQuestSPBook @ 0x860a680

/* WongWork::CSkillChanger::_CountQuestSPBook(CUser const*, int&, int&, int&, int&) */

void __thiscall
WongWork::CSkillChanger::_CountQuestSPBook
          (CSkillChanger *this,CUser *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = CUser::getCurCharacQuestR(param_1);
  CQuestClear::enumQuestClear
            ((CQuestClear *)(iVar1 + 4),_fnEnumQuestClear,param_2,param_3,param_4,param_5,this,
             param_1);
  return;
}
```
