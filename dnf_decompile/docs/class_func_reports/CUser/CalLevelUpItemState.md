# CalLevelUpItemState

`_ZN5CUser19CalLevelUpItemStateERcRiii`

`CUser::CalLevelUpItemState(char&, int&, int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08689d74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08689d74  _ZN5CUser19CalLevelUpItemStateERcRiii
#           CUser::CalLevelUpItemState(char&, int&, int, int)
# range [0x08689d74, 0x08689f11]
08689d74 +0x000:  push   %ebp
08689d75 +0x001:  mov    %esp,%ebp
08689d77 +0x003:  push   %edi
08689d78 +0x004:  push   %esi
08689d79 +0x005:  push   %ebx
08689d7a +0x006:  sub    $0x4c,%esp
08689d7d +0x009:  mov    0x8(%ebp),%eax
08689d80 +0x00c:  mov    %eax,(%esp)
08689d83 +0x00f:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08689d88 +0x014:  cmp    0x14(%ebp),%eax
08689d8b +0x017:  jl     08689da4 <+0x30>
08689d8d +0x019:  mov    0x8(%ebp),%eax
08689d90 +0x01c:  mov    %eax,(%esp)
08689d93 +0x01f:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08689d98 +0x024:  cmp    0x18(%ebp),%eax
08689d9b +0x027:  jg     08689da4 <+0x30>
08689d9d +0x029:  mov    $0x1,%eax
08689da2 +0x02e:  jmp    08689da9 <+0x35>
08689da4 +0x030:  mov    $0x0,%eax
08689da9 +0x035:  test   %al,%al
08689dab +0x037:  je     08689f05 <+0x191>
08689db1 +0x03d:  mov    0xc(%ebp),%eax
08689db4 +0x040:  movb   $0x1,(%eax)
08689db7 +0x043:  mov    0x8(%ebp),%eax
08689dba +0x046:  mov    %eax,(%esp)
08689dbd +0x049:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08689dc2 +0x04e:  mov    0x8(%ebp),%edx
08689dc5 +0x051:  mov    %eax,0x4(%esp)
08689dc9 +0x055:  mov    %edx,(%esp)
08689dcc +0x058:  call   0864e3ba <_ZN15CUserCharacInfo16get_level_up_expEi>  ; CUserCharacInfo::get_level_up_exp(int)
08689dd1 +0x05d:  mov    %eax,%esi
08689dd3 +0x05f:  mov    0x8(%ebp),%eax
08689dd6 +0x062:  mov    %eax,(%esp)
08689dd9 +0x065:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08689dde +0x06a:  mov    %eax,%ebx
08689de0 +0x06c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08689de5 +0x071:  mov    %ebx,0x4(%esp)
08689de9 +0x075:  mov    %eax,(%esp)
08689dec +0x078:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
08689df1 +0x07d:  mov    %eax,%ebx
08689df3 +0x07f:  mov    0x8(%ebp),%eax
08689df6 +0x082:  mov    %eax,(%esp)
08689df9 +0x085:  call   084ec05c <_GLOBAL__I__Z7getUserj+0x300e>  ; global constructors keyed to getUser(unsigned int)+0x300e
08689dfe +0x08a:  mov    %ebx,%edx
08689e00 +0x08c:  sub    %eax,%edx
08689e02 +0x08e:  mov    %edx,%eax
08689e04 +0x090:  lea    (%esi,%eax,1),%edx
08689e07 +0x093:  mov    0x10(%ebp),%eax
08689e0a +0x096:  mov    %edx,(%eax)
08689e0c +0x098:  mov    0x10(%ebp),%eax
08689e0f +0x09b:  mov    (%eax),%eax
08689e11 +0x09d:  test   %eax,%eax
08689e13 +0x09f:  jns    08689e8d <+0x119>
08689e15 +0x0a1:  mov    0x8(%ebp),%eax
08689e18 +0x0a4:  mov    %eax,(%esp)
08689e1b +0x0a7:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08689e20 +0x0ac:  mov    %eax,%esi
08689e22 +0x0ae:  mov    0x8(%ebp),%eax
08689e25 +0x0b1:  mov    %eax,(%esp)
08689e28 +0x0b4:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08689e2d +0x0b9:  movl   $0x0,0x4(%esp)
08689e35 +0x0c1:  mov    %eax,(%esp)
08689e38 +0x0c4:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08689e3d +0x0c9:  mov    %eax,%ebx
08689e3f +0x0cb:  mov    0x10(%ebp),%eax
08689e42 +0x0ce:  mov    (%eax),%edi
08689e44 +0x0d0:  movl   $0x0,0xc(%esp)
08689e4c +0x0d8:  movl   $0xa0d7,0x8(%esp)
08689e54 +0x0e0:  movl   $&_ZZN5CUser19CalLevelUpItemStateERcRiiiE19__PRETTY_FUNCTION__,0x4(%esp)
08689e5c +0x0e8:  lea    -0x38(%ebp),%eax
08689e5f +0x0eb:  mov    %eax,(%esp)
08689e62 +0x0ee:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08689e67 +0x0f3:  mov    %esi,0x10(%esp)
08689e6b +0x0f7:  mov    %ebx,0xc(%esp)
08689e6f +0x0fb:  mov    %edi,0x8(%esp)
08689e73 +0x0ff:  movl   $"Level_up_item:wrong value(%d) m_id(%s),charno(%u)",0x4(%esp)
08689e7b +0x107:  lea    -0x38(%ebp),%eax
08689e7e +0x10a:  mov    %eax,(%esp)
08689e81 +0x10d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08689e86 +0x112:  mov    $0x0,%eax
08689e8b +0x117:  jmp    08689f0a <+0x196>
08689e8d +0x119:  mov    0x8(%ebp),%eax
08689e90 +0x11c:  mov    %eax,(%esp)
08689e93 +0x11f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08689e98 +0x124:  mov    %eax,%esi
08689e9a +0x126:  mov    0x8(%ebp),%eax
08689e9d +0x129:  mov    %eax,(%esp)
08689ea0 +0x12c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08689ea5 +0x131:  movl   $0x0,0x4(%esp)
08689ead +0x139:  mov    %eax,(%esp)
08689eb0 +0x13c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08689eb5 +0x141:  mov    %eax,%ebx
08689eb7 +0x143:  mov    0x10(%ebp),%eax
08689eba +0x146:  mov    (%eax),%edi
08689ebc +0x148:  movl   $0x0,0xc(%esp)
08689ec4 +0x150:  movl   $0xa0da,0x8(%esp)
08689ecc +0x158:  movl   $&_ZZN5CUser19CalLevelUpItemStateERcRiiiE19__PRETTY_FUNCTION__,0x4(%esp)
08689ed4 +0x160:  lea    -0x28(%ebp),%eax
08689ed7 +0x163:  mov    %eax,(%esp)
08689eda +0x166:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08689edf +0x16b:  mov    %esi,0x10(%esp)
08689ee3 +0x16f:  mov    %ebx,0xc(%esp)
08689ee7 +0x173:  mov    %edi,0x8(%esp)
08689eeb +0x177:  movl   $"Level_up_item:success value(%d) m_id(%s),charno(%u)",0x4(%esp)
08689ef3 +0x17f:  lea    -0x28(%ebp),%eax
08689ef6 +0x182:  mov    %eax,(%esp)
08689ef9 +0x185:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08689efe +0x18a:  mov    $0x1,%eax
08689f03 +0x18f:  jmp    08689f0a <+0x196>
08689f05 +0x191:  mov    $0x0,%eax
08689f0a +0x196:  add    $0x4c,%esp
08689f0d +0x199:  pop    %ebx
08689f0e +0x19a:  pop    %esi
08689f0f +0x19b:  pop    %edi
08689f10 +0x19c:  pop    %ebp
08689f11 +0x19d:  ret
```

## 反编译 C

```c
// CUser::CalLevelUpItemState @ 0x8689d74

/* CUser::CalLevelUpItemState(char&, int&, int, int) */

undefined4 __thiscall
CUser::CalLevelUpItemState(CUser *this,char *param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  CDataManager *this_00;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  cMyTrace local_3c [16];
  cMyTrace local_2c [28];
  
  iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  if (param_3 <= iVar2) {
    iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    if (iVar2 <= param_4) {
      bVar1 = true;
      goto LAB_08689da9;
    }
  }
  bVar1 = false;
LAB_08689da9:
  if (bVar1) {
    *param_1 = '\x01';
    iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    iVar2 = CUserCharacInfo::get_level_up_exp((CUserCharacInfo *)this,iVar2);
    iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    this_00 = (CDataManager *)G_CDataManager();
    iVar3 = CDataManager::get_level_exp(this_00,iVar3);
    iVar4 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)this);
    *param_2 = iVar2 + (iVar3 - iVar4);
    if (*param_2 < 0) {
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      uVar6 = get_acc_id(this);
      uVar7 = NumberToString(uVar6,0);
      iVar2 = *param_2;
      cMyTrace::cMyTrace(local_3c,"bool CUser::CalLevelUpItemState(char&, int&, int, int)",0xa0d7,0)
      ;
      cMyTrace::operator()
                (local_3c,"Level_up_item:wrong value(%d) m_id(%s),charno(%u)",iVar2,uVar7,uVar5);
      uVar5 = 0;
    }
    else {
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      uVar6 = get_acc_id(this);
      uVar7 = NumberToString(uVar6,0);
      iVar2 = *param_2;
      cMyTrace::cMyTrace(local_2c,"bool CUser::CalLevelUpItemState(char&, int&, int, int)",0xa0da,0)
      ;
      cMyTrace::operator()
                (local_2c,"Level_up_item:success value(%d) m_id(%s),charno(%u)",iVar2,uVar7,uVar5);
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
