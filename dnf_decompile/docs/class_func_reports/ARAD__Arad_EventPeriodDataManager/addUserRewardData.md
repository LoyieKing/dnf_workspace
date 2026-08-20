# addUserRewardData

`_ZN4ARAD27Arad_EventPeriodDataManager17addUserRewardDataEP5CUserRN4arad22SigLoadRewardEventItemE`

`ARAD::Arad_EventPeriodDataManager::addUserRewardData(CUser*, arad::SigLoadRewardEventItem&)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_EventPeriodDataManager` | `0x08195994` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08195994  _ZN4ARAD27Arad_EventPeriodDataManager17addUserRewardDataEP5CUserRN4arad22SigLoadRewardEventItemE
#           ARAD::Arad_EventPeriodDataManager::addUserRewardData(CUser*, arad::SigLoadRewardEventItem&)
# range [0x08195994, 0x08195aa3]
08195994 +0x000:  push   %ebp
08195995 +0x001:  mov    %esp,%ebp
08195997 +0x003:  push   %esi
08195998 +0x004:  push   %ebx
08195999 +0x005:  sub    $0x30,%esp
0819599c +0x008:  movl   $0x0,-0xc(%ebp)
081959a3 +0x00f:  jmp    08195a86 <+0xf2>
081959a8 +0x014:  mov    -0xc(%ebp),%edx
081959ab +0x017:  mov    0x10(%ebp),%eax
081959ae +0x01a:  add    $0x8,%edx
081959b1 +0x01d:  mov    0xe(%eax,%edx,4),%ebx
081959b5 +0x021:  mov    0xc(%ebp),%eax
081959b8 +0x024:  mov    %eax,(%esp)
081959bb +0x027:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081959c0 +0x02c:  mov    -0xc(%ebp),%ecx
081959c3 +0x02f:  mov    0x10(%ebp),%edx
081959c6 +0x032:  mov    0x6(%edx,%ecx,4),%edx
081959ca +0x036:  mov    %ebx,0xc(%esp)
081959ce +0x03a:  mov    %eax,0x8(%esp)
081959d2 +0x03e:  mov    %edx,0x4(%esp)
081959d6 +0x042:  lea    -0x18(%ebp),%eax
081959d9 +0x045:  mov    %eax,(%esp)
081959dc +0x048:  call   08195d94 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x154>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x154
081959e1 +0x04d:  mov    -0x18(%ebp),%eax
081959e4 +0x050:  mov    %eax,0x4(%esp)
081959e8 +0x054:  mov    -0x14(%ebp),%eax
081959eb +0x057:  mov    %eax,0x8(%esp)
081959ef +0x05b:  mov    -0x10(%ebp),%eax
081959f2 +0x05e:  mov    %eax,0xc(%esp)
081959f6 +0x062:  mov    0x8(%ebp),%eax
081959f9 +0x065:  mov    %eax,(%esp)
081959fc +0x068:  call   081958b6 <_ZN4ARAD27Arad_EventPeriodDataManager10isRewardedENS_19EventRewardItemAradE>  ; ARAD::Arad_EventPeriodDataManager::isRewarded(ARAD::EventRewardItemArad)
08195a01 +0x06d:  test   %al,%al
08195a03 +0x06f:  je     08195a69 <+0xd5>
08195a05 +0x071:  mov    -0xc(%ebp),%edx
08195a08 +0x074:  mov    0x10(%ebp),%eax
08195a0b +0x077:  mov    0x6(%eax,%edx,4),%esi
08195a0f +0x07b:  movl   $0xffffffff,0x4(%esp)
08195a17 +0x083:  mov    0xc(%ebp),%eax
08195a1a +0x086:  mov    %eax,(%esp)
08195a1d +0x089:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08195a22 +0x08e:  mov    %eax,%ebx
08195a24 +0x090:  mov    0xc(%ebp),%eax
08195a27 +0x093:  mov    %eax,(%esp)
08195a2a +0x096:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08195a2f +0x09b:  mov    %esi,0x1c(%esp)
08195a33 +0x09f:  mov    %ebx,0x18(%esp)
08195a37 +0x0a3:  mov    %eax,0x14(%esp)
08195a3b +0x0a7:  movl   $"[FnReward] already reward item. (mid:%u, charac:%u, event:%d)",0x10(%esp)
08195a43 +0x0af:  movl   $0xe3,0xc(%esp)
08195a4b +0x0b7:  movl   $&_ZZN4ARAD27Arad_EventPeriodDataManager17addUserRewardDataEP5CUserRN4arad22SigLoadRewardEventItemEE19__PRETTY_FUNCTION__,0x8(%esp)
08195a53 +0x0bf:  movl   $"localjapan/Arad_EventPeriodDataManager.cpp",0x4(%esp)
08195a5b +0x0c7:  movl   $0x1,(%esp)
08195a62 +0x0ce:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08195a67 +0x0d3:  jmp    08195a82 <+0xee>
08195a69 +0x0d5:  lea    -0x18(%ebp),%eax
08195a6c +0x0d8:  mov    %eax,0x8(%esp)
08195a70 +0x0dc:  mov    0xc(%ebp),%eax
08195a73 +0x0df:  mov    %eax,0x4(%esp)
08195a77 +0x0e3:  mov    0x8(%ebp),%eax
08195a7a +0x0e6:  mov    %eax,(%esp)
08195a7d +0x0e9:  call   08195aa4 <_ZN4ARAD27Arad_EventPeriodDataManager17addUserRewardDataEP5CUserRNS_19EventRewardItemAradE>  ; ARAD::Arad_EventPeriodDataManager::addUserRewardData(CUser*, ARAD::EventRewardItemArad&)
08195a82 +0x0ee:  addl   $0x1,-0xc(%ebp)
08195a86 +0x0f2:  mov    0x10(%ebp),%eax
08195a89 +0x0f5:  movzwl 0x4(%eax),%eax
08195a8d +0x0f9:  cwtl
08195a8e +0x0fa:  cmp    -0xc(%ebp),%eax
08195a91 +0x0fd:  setg   %al
08195a94 +0x100:  test   %al,%al
08195a96 +0x102:  jne    081959a8 <+0x14>
08195a9c +0x108:  add    $0x30,%esp
08195a9f +0x10b:  pop    %ebx
08195aa0 +0x10c:  pop    %esi
08195aa1 +0x10d:  pop    %ebp
08195aa2 +0x10e:  ret
08195aa3 +0x10f:  nop
```

## 反编译 C

```c
// ARAD::Arad_EventPeriodDataManager::addUserRewardData @ 0x8195994

/* ARAD::Arad_EventPeriodDataManager::addUserRewardData(CUser*, arad::SigLoadRewardEventItem&) */

void __thiscall
ARAD::Arad_EventPeriodDataManager::addUserRewardData
          (Arad_EventPeriodDataManager *this,CUser *param_1,SigLoadRewardEventItem *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  for (local_10 = 0; local_10 < *(short *)(param_2 + 4); local_10 = local_10 + 1) {
    uVar1 = *(uint *)(param_2 + (local_10 + 8) * 4 + 0xe);
    uVar4 = CUser::get_acc_id(param_1);
    EventRewardItemArad::EventRewardItemArad
              ((EventRewardItemArad *)&local_1c,*(int *)(param_2 + local_10 * 4 + 6),uVar4,uVar1);
    cVar3 = isRewarded(this,local_1c,local_18,local_14);
    if (cVar3 == '\0') {
      addUserRewardData(this,param_1,(EventRewardItemArad *)&local_1c);
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + local_10 * 4 + 6);
      uVar5 = CUser::get_charac_no(param_1,-1);
      uVar6 = CUser::get_acc_id(param_1);
      LogManager::logFormat
                (1,"localjapan/Arad_EventPeriodDataManager.cpp",
                 "void ARAD::Arad_EventPeriodDataManager::addUserRewardData(CUser*, arad::SigLoadRewardEventItem&)"
                 ,0xe3,"[FnReward] already reward item. (mid:%u, charac:%u, event:%d)",uVar6,uVar5,
                 uVar2);
    }
  }
  return;
}
```
