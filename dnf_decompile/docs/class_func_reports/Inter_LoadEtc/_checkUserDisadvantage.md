# _checkUserDisadvantage

`_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser`

`Inter_LoadEtc::_checkUserDisadvantage(CUser*)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084c2760` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c2760  _ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser
#           Inter_LoadEtc::_checkUserDisadvantage(CUser*)
# range [0x084c2760, 0x084c2963]
084c2760 +0x000:  push   %ebp
084c2761 +0x001:  mov    %esp,%ebp
084c2763 +0x003:  push   %ebx
084c2764 +0x004:  sub    $0x44,%esp
084c2767 +0x007:  mov    0xc(%ebp),%eax
084c276a +0x00a:  mov    %eax,(%esp)
084c276d +0x00d:  call   0811edee <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0xe9>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0xe9
084c2772 +0x012:  test   %al,%al
084c2774 +0x014:  jne    084c2954 <+0x1f4>
084c277a +0x01a:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
084c277f +0x01f:  movl   $0x1,0x8(%esp)
084c2787 +0x027:  movl   $0x3,0x4(%esp)
084c278f +0x02f:  mov    %eax,(%esp)
084c2792 +0x032:  call   0816e75e <_ZN22ServiceRestrictManager12isRestrictedEN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(RestrictCategory::Enum, int)
084c2797 +0x037:  xor    $0x1,%eax
084c279a +0x03a:  test   %al,%al
084c279c +0x03c:  jne    084c2957 <+0x1f7>
084c27a2 +0x042:  mov    0xc(%ebp),%eax
084c27a5 +0x045:  mov    %eax,(%esp)
084c27a8 +0x048:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c27ad +0x04d:  test   %eax,%eax
084c27af +0x04f:  sete   %al
084c27b2 +0x052:  test   %al,%al
084c27b4 +0x054:  jne    084c295a <+0x1fa>
084c27ba +0x05a:  mov    0xc(%ebp),%eax
084c27bd +0x05d:  mov    %eax,(%esp)
084c27c0 +0x060:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084c27c5 +0x065:  cmp    $0x13,%eax
084c27c8 +0x068:  jle    084c27d9 <+0x79>
084c27ca +0x06a:  mov    0xc(%ebp),%eax
084c27cd +0x06d:  mov    %eax,(%esp)
084c27d0 +0x070:  call   084ecb28 <_GLOBAL__I__Z7getUserj+0x3ada>  ; global constructors keyed to getUser(unsigned int)+0x3ada
084c27d5 +0x075:  test   %eax,%eax
084c27d7 +0x077:  jne    084c27e0 <+0x80>
084c27d9 +0x079:  mov    $0x1,%eax
084c27de +0x07e:  jmp    084c27e5 <+0x85>
084c27e0 +0x080:  mov    $0x0,%eax
084c27e5 +0x085:  test   %al,%al
084c27e7 +0x087:  jne    084c295d <+0x1fd>
084c27ed +0x08d:  movb   $0x0,-0xe(%ebp)
084c27f1 +0x091:  movl   $0x0,-0xc(%ebp)
084c27f8 +0x098:  jmp    084c2825 <+0xc5>
084c27fa +0x09a:  mov    -0xc(%ebp),%ebx
084c27fd +0x09d:  mov    0xc(%ebp),%eax
084c2800 +0x0a0:  mov    %eax,(%esp)
084c2803 +0x0a3:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
084c2808 +0x0a8:  add    $0x4,%eax
084c280b +0x0ab:  mov    %ebx,0x4(%esp)
084c280f +0x0af:  mov    %eax,(%esp)
084c2812 +0x0b2:  call   0808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>  ; WongWork::CQuestClear::isClearedQuest(unsigned int) const
084c2817 +0x0b7:  test   %al,%al
084c2819 +0x0b9:  je     084c2821 <+0xc1>
084c281b +0x0bb:  movb   $0x1,-0xe(%ebp)
084c281f +0x0bf:  jmp    084c2833 <+0xd3>
084c2821 +0x0c1:  addl   $0x1,-0xc(%ebp)
084c2825 +0x0c5:  cmpl   $0x752f,-0xc(%ebp)
084c282c +0x0cc:  setle  %al
084c282f +0x0cf:  test   %al,%al
084c2831 +0x0d1:  jne    084c27fa <+0x9a>
084c2833 +0x0d3:  movb   $0x1,-0xd(%ebp)
084c2837 +0x0d7:  movl   $0x0,-0x1c(%ebp)
084c283e +0x0de:  movzbl -0xe(%ebp),%eax
084c2842 +0x0e2:  xor    $0x1,%eax
084c2845 +0x0e5:  test   %al,%al
084c2847 +0x0e7:  je     084c2852 <+0xf2>
084c2849 +0x0e9:  mov    -0x1c(%ebp),%eax
084c284c +0x0ec:  add    $0x28,%eax
084c284f +0x0ef:  mov    %eax,-0x1c(%ebp)
084c2852 +0x0f2:  movzbl -0xd(%ebp),%eax
084c2856 +0x0f6:  xor    $0x1,%eax
084c2859 +0x0f9:  test   %al,%al
084c285b +0x0fb:  je     084c2866 <+0x106>
084c285d +0x0fd:  mov    -0x1c(%ebp),%eax
084c2860 +0x100:  add    $0x1e,%eax
084c2863 +0x103:  mov    %eax,-0x1c(%ebp)
084c2866 +0x106:  movzbl -0xe(%ebp),%eax
084c286a +0x10a:  xor    $0x1,%eax
084c286d +0x10d:  test   %al,%al
084c286f +0x10f:  jne    084c287c <+0x11c>
084c2871 +0x111:  movzbl -0xd(%ebp),%eax
084c2875 +0x115:  xor    $0x1,%eax
084c2878 +0x118:  test   %al,%al
084c287a +0x11a:  je     084c28a1 <+0x141>
084c287c +0x11c:  mov    0xc(%ebp),%eax
084c287f +0x11f:  mov    %eax,(%esp)
084c2882 +0x122:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
084c2887 +0x127:  mov    %eax,(%esp)
084c288a +0x12a:  call   084e99f0 <_GLOBAL__I__Z7getUserj+0x9a2>  ; global constructors keyed to getUser(unsigned int)+0x9a2
084c288f +0x12f:  test   %eax,%eax
084c2891 +0x131:  sete   %al
084c2894 +0x134:  test   %al,%al
084c2896 +0x136:  je     084c28a1 <+0x141>
084c2898 +0x138:  mov    -0x1c(%ebp),%eax
084c289b +0x13b:  add    $0xa,%eax
084c289e +0x13e:  mov    %eax,-0x1c(%ebp)
084c28a1 +0x141:  movl   $0x64,-0x18(%ebp)
084c28a8 +0x148:  lea    -0x1c(%ebp),%eax
084c28ab +0x14b:  mov    %eax,0x4(%esp)
084c28af +0x14f:  lea    -0x18(%ebp),%eax
084c28b2 +0x152:  mov    %eax,(%esp)
084c28b5 +0x155:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
084c28ba +0x15a:  mov    (%eax),%eax
084c28bc +0x15c:  mov    $0x64,%edx
084c28c1 +0x161:  mov    %edx,%ecx
084c28c3 +0x163:  sub    %eax,%ecx
084c28c5 +0x165:  mov    %ecx,%eax
084c28c7 +0x167:  mov    %eax,-0x1c(%ebp)
084c28ca +0x16a:  mov    0xc(%ebp),%eax
084c28cd +0x16d:  mov    %eax,(%esp)
084c28d0 +0x170:  call   084ecb28 <_GLOBAL__I__Z7getUserj+0x3ada>  ; global constructors keyed to getUser(unsigned int)+0x3ada
084c28d5 +0x175:  mov    %eax,-0x14(%ebp)
084c28d8 +0x178:  lea    -0x14(%ebp),%eax
084c28db +0x17b:  mov    %eax,0x4(%esp)
084c28df +0x17f:  lea    -0x1c(%ebp),%eax
084c28e2 +0x182:  mov    %eax,(%esp)
084c28e5 +0x185:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
084c28ea +0x18a:  mov    (%eax),%eax
084c28ec +0x18c:  mov    %eax,-0x1c(%ebp)
084c28ef +0x18f:  mov    0xc(%ebp),%eax
084c28f2 +0x192:  mov    %eax,(%esp)
084c28f5 +0x195:  call   084ecb28 <_GLOBAL__I__Z7getUserj+0x3ada>  ; global constructors keyed to getUser(unsigned int)+0x3ada
084c28fa +0x19a:  mov    -0x1c(%ebp),%edx
084c28fd +0x19d:  cmp    %edx,%eax
084c28ff +0x19f:  setne  %al
084c2902 +0x1a2:  test   %al,%al
084c2904 +0x1a4:  je     084c295e <+0x1fe>
084c2906 +0x1a6:  mov    -0x1c(%ebp),%ebx
084c2909 +0x1a9:  mov    0xc(%ebp),%eax
084c290c +0x1ac:  mov    %eax,(%esp)
084c290f +0x1af:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c2914 +0x1b4:  movl   $0x0,0x14(%esp)
084c291c +0x1bc:  movl   $0x3,0x10(%esp)
084c2924 +0x1c4:  mov    %ebx,0xc(%esp)
084c2928 +0x1c8:  movl   $0x65,0x8(%esp)
084c2930 +0x1d0:  movl   $0x9c41,0x4(%esp)
084c2938 +0x1d8:  mov    %eax,(%esp)
084c293b +0x1db:  call   0842801a <_ZN19DB_SaveUserHandicap11makeRequestEjiiiii>  ; DB_SaveUserHandicap::makeRequest(unsigned int, int, int, int, int, int)
084c2940 +0x1e0:  mov    -0x1c(%ebp),%eax
084c2943 +0x1e3:  mov    %eax,0x4(%esp)
084c2947 +0x1e7:  mov    0xc(%ebp),%eax
084c294a +0x1ea:  mov    %eax,(%esp)
084c294d +0x1ed:  call   0828715c <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x9a>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x9a
084c2952 +0x1f2:  jmp    084c295e <+0x1fe>
084c2954 +0x1f4:  nop
084c2955 +0x1f5:  jmp    084c295e <+0x1fe>
084c2957 +0x1f7:  nop
084c2958 +0x1f8:  jmp    084c295e <+0x1fe>
084c295a +0x1fa:  nop
084c295b +0x1fb:  jmp    084c295e <+0x1fe>
084c295d +0x1fd:  nop
084c295e +0x1fe:  add    $0x44,%esp
084c2961 +0x201:  pop    %ebx
084c2962 +0x202:  pop    %ebp
084c2963 +0x203:  ret
```

## 反编译 C

```c
// Inter_LoadEtc::_checkUserDisadvantage @ 0x84c2760

/* WARNING: Removing unreachable block (ram,0x084c285d) */
/* Inter_LoadEtc::_checkUserDisadvantage(CUser*) */

void __thiscall Inter_LoadEtc::_checkUserDisadvantage(Inter_LoadEtc *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  ServiceRestrictManager *pSVar3;
  int iVar4;
  CCargo *this_00;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int local_20 [3];
  char local_12;
  undefined1 local_11;
  uint local_10;
  
  cVar2 = CUser::IsGameMasterMode(param_1);
  if (cVar2 == '\0') {
    pSVar3 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar2 = ServiceRestrictManager::isRestricted(pSVar3,3,1);
    if ((cVar2 == '\x01') &&
       (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 != 0)) {
      iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      if ((iVar4 < 0x14) || (iVar4 = CUser::getStdDropRate(param_1), iVar4 == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        local_12 = '\0';
        for (local_10 = 0; uVar7 = local_10, (int)local_10 < 30000; local_10 = local_10 + 1) {
          iVar4 = CUser::getCurCharacQuestR(param_1);
          cVar2 = WongWork::CQuestClear::isClearedQuest((CQuestClear *)(iVar4 + 4),uVar7);
          if (cVar2 != '\0') {
            local_12 = '\x01';
            break;
          }
        }
        local_11 = 1;
        local_20[0] = 0;
        if (local_12 != '\x01') {
          local_20[0] = 0x28;
          this_00 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
          iVar4 = CCargo::GetItemCount(this_00);
          if (iVar4 == 0) {
            local_20[0] = local_20[0] + 10;
          }
        }
        local_20[1] = 100;
        piVar5 = std::min<int>(local_20 + 1,local_20);
        local_20[0] = 100 - *piVar5;
        local_20[2] = CUser::getStdDropRate(param_1);
        piVar5 = std::min<int>(local_20,local_20 + 2);
        local_20[0] = *piVar5;
        iVar6 = CUser::getStdDropRate(param_1);
        iVar4 = local_20[0];
        if (iVar6 != local_20[0]) {
          uVar7 = CUser::get_acc_id(param_1);
          DB_SaveUserHandicap::makeRequest(uVar7,0x9c41,0x65,iVar4,3,0);
          CUser::setStdDropRate(param_1,local_20[0]);
        }
      }
    }
  }
  return;
}
```
