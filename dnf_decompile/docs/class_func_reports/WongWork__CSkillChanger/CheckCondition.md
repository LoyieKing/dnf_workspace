# CheckCondition

`_ZN8WongWork13CSkillChanger14CheckConditionEPK5CUser`

`WongWork::CSkillChanger::CheckCondition(CUser const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CSkillChanger` | `0x08609d10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08609d10  _ZN8WongWork13CSkillChanger14CheckConditionEPK5CUser
#           WongWork::CSkillChanger::CheckCondition(CUser const*)
# range [0x08609d10, 0x08609d9b]
08609d10 +0x00:  push   %ebp
08609d11 +0x01:  mov    %esp,%ebp
08609d13 +0x03:  push   %ebx
08609d14 +0x04:  sub    $0x24,%esp
08609d17 +0x07:  mov    0x8(%ebp),%eax
08609d1a +0x0a:  mov    %eax,(%esp)
08609d1d +0x0d:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08609d22 +0x12:  mov    %eax,%ebx
08609d24 +0x14:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08609d29 +0x19:  mov    %ebx,0x4(%esp)
08609d2d +0x1d:  mov    %eax,(%esp)
08609d30 +0x20:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
08609d35 +0x25:  mov    %eax,-0x10(%ebp)
08609d38 +0x28:  mov    0x8(%ebp),%eax
08609d3b +0x2b:  mov    %eax,(%esp)
08609d3e +0x2e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08609d43 +0x33:  lea    0x1(%eax),%ebx
08609d46 +0x36:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08609d4b +0x3b:  mov    %ebx,0x4(%esp)
08609d4f +0x3f:  mov    %eax,(%esp)
08609d52 +0x42:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
08609d57 +0x47:  mov    %eax,-0xc(%ebp)
08609d5a +0x4a:  mov    0x8(%ebp),%eax
08609d5d +0x4d:  mov    %eax,(%esp)
08609d60 +0x50:  call   08151abe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13f3
08609d65 +0x55:  cmp    -0x10(%ebp),%eax
08609d68 +0x58:  jb     08609d7a <+0x6a>
08609d6a +0x5a:  mov    0x8(%ebp),%eax
08609d6d +0x5d:  mov    %eax,(%esp)
08609d70 +0x60:  call   08151abe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13f3
08609d75 +0x65:  cmp    -0xc(%ebp),%eax
08609d78 +0x68:  jbe    08609d81 <+0x71>
08609d7a +0x6a:  mov    $0x1,%eax
08609d7f +0x6f:  jmp    08609d86 <+0x76>
08609d81 +0x71:  mov    $0x0,%eax
08609d86 +0x76:  test   %al,%al
08609d88 +0x78:  je     08609d91 <+0x81>
08609d8a +0x7a:  mov    $0x0,%eax
08609d8f +0x7f:  jmp    08609d96 <+0x86>
08609d91 +0x81:  mov    $0x1,%eax
08609d96 +0x86:  add    $0x24,%esp
08609d99 +0x89:  pop    %ebx
08609d9a +0x8a:  pop    %ebp
08609d9b +0x8b:  ret
```

## 反编译 C

```c
// WongWork::CSkillChanger::CheckCondition @ 0x8609d10

/* WongWork::CSkillChanger::CheckCondition(CUser const*) */

bool WongWork::CSkillChanger::CheckCondition(CUser *param_1)

{
  bool bVar1;
  int iVar2;
  CDataManager *pCVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  pCVar3 = (CDataManager *)G_CDataManager();
  uVar4 = CDataManager::get_level_exp(pCVar3,iVar2);
  iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  pCVar3 = (CDataManager *)G_CDataManager();
  uVar5 = CDataManager::get_level_exp(pCVar3,iVar2 + 1);
  uVar6 = CUserCharacInfo::getCurCharacExp((CUserCharacInfo *)param_1);
  if ((uVar6 < uVar4) ||
     (uVar4 = CUserCharacInfo::getCurCharacExp((CUserCharacInfo *)param_1), uVar5 < uVar4)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return !bVar1;
}
```
