# CalcurateManageBonus

`_ZN6CParty20CalcurateManageBonusEN15ManageBonusType1TEP5CUserj`

`CParty::CalcurateManageBonus(ManageBonusType::T, CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ada30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ada30  _ZN6CParty20CalcurateManageBonusEN15ManageBonusType1TEP5CUserj
#           CParty::CalcurateManageBonus(ManageBonusType::T, CUser*, unsigned int)
# range [0x085ada30, 0x085adaff]
085ada30 +0x00:  push   %ebp
085ada31 +0x01:  mov    %esp,%ebp
085ada33 +0x03:  push   %ebx
085ada34 +0x04:  sub    $0x24,%esp
085ada37 +0x07:  cmpl   $0x0,0x10(%ebp)
085ada3b +0x0b:  jne    085ada44 <+0x14>
085ada3d +0x0d:  fldz
085ada3f +0x0f:  jmp    085adafa <+0xca>
085ada44 +0x14:  mov    0x10(%ebp),%eax
085ada47 +0x17:  mov    %eax,(%esp)
085ada4a +0x1a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085ada4f +0x1f:  test   %eax,%eax
085ada51 +0x21:  sete   %al
085ada54 +0x24:  test   %al,%al
085ada56 +0x26:  je     085ada5f <+0x2f>
085ada58 +0x28:  fldz
085ada5a +0x2a:  jmp    085adafa <+0xca>
085ada5f +0x2f:  mov    0x10(%ebp),%eax
085ada62 +0x32:  mov    %eax,(%esp)
085ada65 +0x35:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085ada6a +0x3a:  movzwl 0x27(%eax),%eax
085ada6e +0x3e:  movswl %ax,%ebx
085ada71 +0x41:  mov    0x10(%ebp),%eax
085ada74 +0x44:  mov    %eax,(%esp)
085ada77 +0x47:  call   0868fe1e <_ZN5CUser15GetUserMaxLevelEv>  ; CUser::GetUserMaxLevel()
085ada7c +0x4c:  cmp    %eax,%ebx
085ada7e +0x4e:  setge  %al
085ada81 +0x51:  test   %al,%al
085ada83 +0x53:  je     085ada89 <+0x59>
085ada85 +0x55:  fldz
085ada87 +0x57:  jmp    085adafa <+0xca>
085ada89 +0x59:  cmpl   $0x0,0xc(%ebp)
085ada8d +0x5d:  jne    085adab5 <+0x85>
085ada8f +0x5f:  mov    0x10(%ebp),%eax
085ada92 +0x62:  mov    %eax,(%esp)
085ada95 +0x65:  call   0868fe02 <_ZN5CUser14GetManageLevelEv>  ; CUser::GetManageLevel()
085ada9a +0x6a:  mov    %eax,%ebx
085ada9c +0x6c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085adaa1 +0x71:  mov    0x6394(%eax),%eax
085adaa7 +0x77:  mov    %ebx,0x4(%esp)
085adaab +0x7b:  mov    %eax,(%esp)
085adaae +0x7e:  call   088e0f58 <_ZN18CharacManageScript11GetExpBonusEi>  ; CharacManageScript::GetExpBonus(int)
085adab3 +0x83:  jmp    085adafa <+0xca>
085adab5 +0x85:  cmpl   $0x1,0xc(%ebp)
085adab9 +0x89:  jne    085adaf8 <+0xc8>
085adabb +0x8b:  mov    0x14(%ebp),%eax
085adabe +0x8e:  mov    $0x0,%edx
085adac3 +0x93:  mov    %eax,-0x10(%ebp)
085adac6 +0x96:  mov    %edx,-0xc(%ebp)
085adac9 +0x99:  fildll -0x10(%ebp)
085adacc +0x9c:  fstps  -0x14(%ebp)
085adacf +0x9f:  mov    0x10(%ebp),%eax
085adad2 +0xa2:  mov    %eax,(%esp)
085adad5 +0xa5:  call   0868fe02 <_ZN5CUser14GetManageLevelEv>  ; CUser::GetManageLevel()
085adada +0xaa:  mov    %eax,%ebx
085adadc +0xac:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085adae1 +0xb1:  mov    0x6394(%eax),%eax
085adae7 +0xb7:  mov    %ebx,0x4(%esp)
085adaeb +0xbb:  mov    %eax,(%esp)
085adaee +0xbe:  call   088e0fce <_ZN18CharacManageScript12GetGoldBonusEi>  ; CharacManageScript::GetGoldBonus(int)
085adaf3 +0xc3:  fmuls  -0x14(%ebp)
085adaf6 +0xc6:  jmp    085adafa <+0xca>
085adaf8 +0xc8:  fldz
085adafa +0xca:  add    $0x24,%esp
085adafd +0xcd:  pop    %ebx
085adafe +0xce:  pop    %ebp
085adaff +0xcf:  ret
```

## 反编译 C

```c
// CParty::CalcurateManageBonus @ 0x85ada30

/* CParty::CalcurateManageBonus(ManageBonusType::T, CUser*, unsigned int) */

longdouble __thiscall
CParty::CalcurateManageBonus(undefined4 this,int param_2,CUserCharacInfo *param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  longdouble lVar3;
  
  if (param_3 == (CUserCharacInfo *)0x0) {
    lVar3 = (longdouble)0;
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR(param_3);
    if (iVar2 == 0) {
      lVar3 = (longdouble)0;
    }
    else {
      iVar2 = CUserCharacInfo::getCurCharacR(param_3);
      sVar1 = *(short *)(iVar2 + 0x27);
      iVar2 = CUser::GetUserMaxLevel((CUser *)param_3);
      if (sVar1 < iVar2) {
        if (param_2 == 0) {
          CUser::GetManageLevel((CUser *)param_3);
          iVar2 = G_CDataManager();
          lVar3 = (longdouble)CharacManageScript::GetExpBonus(*(int *)(iVar2 + 0x6394));
        }
        else if (param_2 == 1) {
          CUser::GetManageLevel((CUser *)param_3);
          iVar2 = G_CDataManager();
          lVar3 = (longdouble)CharacManageScript::GetGoldBonus(*(int *)(iVar2 + 0x6394));
          lVar3 = lVar3 * (longdouble)param_4;
        }
        else {
          lVar3 = (longdouble)0;
        }
      }
      else {
        lVar3 = (longdouble)0;
      }
    }
  }
  return lVar3;
}
```
