# get_blood_dungeon_admission_fee

`_ZN6CParty31get_blood_dungeon_admission_feeEP5CUser`

`CParty::get_blood_dungeon_admission_fee(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859f75e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859f75e  _ZN6CParty31get_blood_dungeon_admission_feeEP5CUser
#           CParty::get_blood_dungeon_admission_fee(CUser*)
# range [0x0859f75e, 0x0859f7f9]
0859f75e +0x00:  push   %ebp
0859f75f +0x01:  mov    %esp,%ebp
0859f761 +0x03:  push   %ebx
0859f762 +0x04:  sub    $0x24,%esp
0859f765 +0x07:  movl   $0x1,0x4(%esp)
0859f76d +0x0f:  mov    0xc(%ebp),%eax
0859f770 +0x12:  mov    %eax,(%esp)
0859f773 +0x15:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0859f778 +0x1a:  mov    %eax,(%esp)
0859f77b +0x1d:  call   085bfe88 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x13e6>  ; global constructors keyed to CParty::cMember::cMember()+0x13e6
0859f780 +0x22:  mov    %eax,-0x14(%ebp)
0859f783 +0x25:  mov    0xc(%ebp),%eax
0859f786 +0x28:  mov    %eax,(%esp)
0859f789 +0x2b:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0859f78e +0x30:  mov    %eax,%ebx
0859f790 +0x32:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0859f795 +0x37:  add    $0x68,%eax
0859f798 +0x3a:  mov    %ebx,0x4(%esp)
0859f79c +0x3e:  mov    %eax,(%esp)
0859f79f +0x41:  call   085beaf6 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x54>  ; global constructors keyed to CParty::cMember::cMember()+0x54
0859f7a4 +0x46:  mov    %eax,-0x10(%ebp)
0859f7a7 +0x49:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0859f7ac +0x4e:  lea    0x68(%eax),%edx
0859f7af +0x51:  mov    -0x14(%ebp),%eax
0859f7b2 +0x54:  mov    %eax,0x4(%esp)
0859f7b6 +0x58:  mov    %edx,(%esp)
0859f7b9 +0x5b:  call   085bebb6 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x114>  ; global constructors keyed to CParty::cMember::cMember()+0x114
0859f7be +0x60:  mov    %eax,%ecx
0859f7c0 +0x62:  imul   -0x10(%ebp),%ecx
0859f7c4 +0x66:  mov    $0x51eb851f,%edx
0859f7c9 +0x6b:  mov    %ecx,%eax
0859f7cb +0x6d:  imul   %edx
0859f7cd +0x6f:  sar    $0x5,%edx
0859f7d0 +0x72:  mov    %ecx,%eax
0859f7d2 +0x74:  sar    $0x1f,%eax
0859f7d5 +0x77:  mov    %edx,%ecx
0859f7d7 +0x79:  sub    %eax,%ecx
0859f7d9 +0x7b:  mov    %ecx,%eax
0859f7db +0x7d:  mov    %eax,-0xc(%ebp)
0859f7de +0x80:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0859f7e3 +0x85:  add    $0x68,%eax
0859f7e6 +0x88:  mov    %eax,(%esp)
0859f7e9 +0x8b:  call   085bed36 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x294>  ; global constructors keyed to CParty::cMember::cMember()+0x294
0859f7ee +0x90:  add    -0x10(%ebp),%eax
0859f7f1 +0x93:  add    -0xc(%ebp),%eax
0859f7f4 +0x96:  add    $0x24,%esp
0859f7f7 +0x99:  pop    %ebx
0859f7f8 +0x9a:  pop    %ebp
0859f7f9 +0x9b:  ret
```

## 反编译 C

```c
// CParty::get_blood_dungeon_admission_fee @ 0x859f75e

/* CParty::get_blood_dungeon_admission_fee(CUser*) */

int __thiscall CParty::get_blood_dungeon_admission_fee(CParty *this,CUser *param_1)

{
  CCharacBloodDungeon *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  this_00 = (CCharacBloodDungeon *)CUser::GetCharacExpandData(param_1,1);
  iVar1 = CCharacBloodDungeon::GetEnterCount(this_00);
  iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  iVar3 = G_CDataManager();
  iVar2 = ServerParameterScript::GetPriceAverage((ServerParameterScript *)(iVar3 + 0x68),iVar2);
  iVar3 = G_CDataManager();
  iVar1 = ServerParameterScript::GetAdmissionIncrease((ServerParameterScript *)(iVar3 + 0x68),iVar1)
  ;
  iVar3 = G_CDataManager();
  iVar3 = ServerParameterScript::GetLottoCost((ServerParameterScript *)(iVar3 + 0x68));
  return iVar3 + iVar2 + (iVar1 * iVar2) / 100;
}
```
