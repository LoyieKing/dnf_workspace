# SetFatigue

`_ZN13Inter_LoadEtc10SetFatigueEP5CUser`

`Inter_LoadEtc::SetFatigue(CUser*)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084c311a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c311a  _ZN13Inter_LoadEtc10SetFatigueEP5CUser
#           Inter_LoadEtc::SetFatigue(CUser*)
# range [0x084c311a, 0x084c3397]
084c311a +0x000:  push   %ebp
084c311b +0x001:  mov    %esp,%ebp
084c311d +0x003:  push   %edi
084c311e +0x004:  push   %esi
084c311f +0x005:  push   %ebx
084c3120 +0x006:  sub    $0x6c,%esp
084c3123 +0x009:  mov    0xc(%ebp),%eax
084c3126 +0x00c:  mov    %eax,(%esp)
084c3129 +0x00f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c312e +0x014:  test   %eax,%eax
084c3130 +0x016:  sete   %al
084c3133 +0x019:  test   %al,%al
084c3135 +0x01b:  je     084c3141 <+0x27>
084c3137 +0x01d:  mov    $0x0,%eax
084c313c +0x022:  jmp    084c3390 <+0x276>
084c3141 +0x027:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c3148 +0x02e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c314d +0x033:  mov    %eax,%ebx
084c314f +0x035:  mov    0xc(%ebp),%eax
084c3152 +0x038:  mov    %eax,(%esp)
084c3155 +0x03b:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c315a +0x040:  mov    0x7b(%eax),%esi
084c315d +0x043:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c3162 +0x048:  mov    0x37c(%eax),%eax
084c3168 +0x04e:  mov    %ebx,0x8(%esp)
084c316c +0x052:  mov    %esi,0x4(%esp)
084c3170 +0x056:  mov    %eax,(%esp)
084c3173 +0x059:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
084c3178 +0x05e:  test   %al,%al
084c317a +0x060:  je     084c338b <+0x271>
084c3180 +0x066:  movl   $0x0,-0x24(%ebp)
084c3187 +0x06d:  mov    0xc(%ebp),%eax
084c318a +0x070:  mov    %eax,(%esp)
084c318d +0x073:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c3192 +0x078:  mov    0x7b(%eax),%eax
084c3195 +0x07b:  test   %eax,%eax
084c3197 +0x07d:  setne  %al
084c319a +0x080:  test   %al,%al
084c319c +0x082:  je     084c31d8 <+0xbe>
084c319e +0x084:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c31a5 +0x08b:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c31aa +0x090:  mov    %eax,%ebx
084c31ac +0x092:  mov    0xc(%ebp),%eax
084c31af +0x095:  mov    %eax,(%esp)
084c31b2 +0x098:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c31b7 +0x09d:  mov    0x7b(%eax),%esi
084c31ba +0x0a0:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c31bf +0x0a5:  mov    0x37c(%eax),%eax
084c31c5 +0x0ab:  mov    %ebx,0x8(%esp)
084c31c9 +0x0af:  mov    %esi,0x4(%esp)
084c31cd +0x0b3:  mov    %eax,(%esp)
084c31d0 +0x0b6:  call   0846c144 <_Z23ComputeDaysScheduleTimeill>  ; ComputeDaysScheduleTime(int, long, long)
084c31d5 +0x0bb:  mov    %eax,-0x24(%ebp)
084c31d8 +0x0be:  mov    &_ZN10GlobalData23s_fatigueBatteryHandle_E,%eax
084c31dd +0x0c3:  mov    -0x24(%ebp),%edx
084c31e0 +0x0c6:  mov    %edx,0x8(%esp)
084c31e4 +0x0ca:  mov    0xc(%ebp),%edx
084c31e7 +0x0cd:  mov    %edx,0x4(%esp)
084c31eb +0x0d1:  mov    %eax,(%esp)
084c31ee +0x0d4:  call   084a8094 <_ZN21CFatigueBatteryHandle22ChargingFatigueBatteryEP5CUseri>  ; CFatigueBatteryHandle::ChargingFatigueBattery(CUser*, int)
084c31f3 +0x0d9:  mov    %ax,-0x1e(%ebp)
084c31f7 +0x0dd:  cmpw   $0x0,-0x1e(%ebp)
084c31fc +0x0e2:  jle    084c32ab <+0x191>
084c3202 +0x0e8:  movswl -0x1e(%ebp),%edx
084c3206 +0x0ec:  mov    0xc(%ebp),%eax
084c3209 +0x0ef:  mov    %edx,0x4(%esp)
084c320d +0x0f3:  mov    %eax,(%esp)
084c3210 +0x0f6:  call   086566e4 <_ZN15CUserCharacInfo25IncFatigueBatteryChargingEs>  ; CUserCharacInfo::IncFatigueBatteryCharging(short)
084c3215 +0x0fb:  mov    0xc(%ebp),%eax
084c3218 +0x0fe:  mov    %eax,(%esp)
084c321b +0x101:  call   084a857e <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0xe4>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0xe4
084c3220 +0x106:  cwtl
084c3221 +0x107:  mov    %eax,-0x50(%ebp)
084c3224 +0x10a:  movswl -0x1e(%ebp),%eax
084c3228 +0x10e:  mov    %eax,-0x4c(%ebp)
084c322b +0x111:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c3232 +0x118:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c3237 +0x11d:  mov    %eax,%esi
084c3239 +0x11f:  mov    0xc(%ebp),%eax
084c323c +0x122:  mov    %eax,(%esp)
084c323f +0x125:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c3244 +0x12a:  mov    0x7b(%eax),%edi
084c3247 +0x12d:  mov    0xc(%ebp),%eax
084c324a +0x130:  mov    %eax,(%esp)
084c324d +0x133:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084c3252 +0x138:  mov    %eax,%ebx
084c3254 +0x13a:  movl   $0x0,0xc(%esp)
084c325c +0x142:  movl   $0x139a,0x8(%esp)
084c3264 +0x14a:  movl   $&_ZZN13Inter_LoadEtc10SetFatigueEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
084c326c +0x152:  lea    -0x44(%ebp),%eax
084c326f +0x155:  mov    %eax,(%esp)
084c3272 +0x158:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c3277 +0x15d:  mov    -0x50(%ebp),%eax
084c327a +0x160:  mov    %eax,0x1c(%esp)
084c327e +0x164:  mov    -0x4c(%ebp),%eax
084c3281 +0x167:  mov    %eax,0x18(%esp)
084c3285 +0x16b:  mov    %esi,0x14(%esp)
084c3289 +0x16f:  mov    %edi,0x10(%esp)
084c328d +0x173:  mov    -0x24(%ebp),%eax
084c3290 +0x176:  mov    %eax,0xc(%esp)
084c3294 +0x17a:  mov    %ebx,0x8(%esp)
084c3298 +0x17e:  movl   $"FATIGUE BATTERY : charno(%d) days(%d), lastplaytick(%d), curTick(%d), charging(%d), cur charging(%d)",0x4(%esp)
084c32a0 +0x186:  lea    -0x44(%ebp),%eax
084c32a3 +0x189:  mov    %eax,(%esp)
084c32a6 +0x18c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c32ab +0x191:  mov    0xc(%ebp),%eax
084c32ae +0x194:  mov    %eax,(%esp)
084c32b1 +0x197:  call   084a857e <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0xe4>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0xe4
084c32b6 +0x19c:  test   %ax,%ax
084c32b9 +0x19f:  setg   %al
084c32bc +0x1a2:  test   %al,%al
084c32be +0x1a4:  je     084c3357 <+0x23d>
084c32c4 +0x1aa:  mov    &_ZN10GlobalData23s_fatigueBatteryHandle_E,%eax
084c32c9 +0x1af:  mov    0xc(%ebp),%edx
084c32cc +0x1b2:  mov    %edx,0x4(%esp)
084c32d0 +0x1b6:  mov    %eax,(%esp)
084c32d3 +0x1b9:  call   084a83da <_ZN21CFatigueBatteryHandle20ActiveFatigueBatteryEP5CUser>  ; CFatigueBatteryHandle::ActiveFatigueBattery(CUser*)
084c32d8 +0x1be:  cwtl
084c32d9 +0x1bf:  mov    %eax,-0x1c(%ebp)
084c32dc +0x1c2:  cmpl   $0x0,-0x1c(%ebp)
084c32e0 +0x1c6:  je     084c3357 <+0x23d>
084c32e2 +0x1c8:  mov    -0x1c(%ebp),%eax
084c32e5 +0x1cb:  movswl %ax,%edx
084c32e8 +0x1ce:  mov    0xc(%ebp),%eax
084c32eb +0x1d1:  mov    %edx,0x4(%esp)
084c32ef +0x1d5:  mov    %eax,(%esp)
084c32f2 +0x1d8:  call   08656784 <_ZN15CUserCharacInfo25DecFatigueBatteryChargingEs>  ; CUserCharacInfo::DecFatigueBatteryCharging(short)
084c32f7 +0x1dd:  mov    0xc(%ebp),%eax
084c32fa +0x1e0:  mov    %eax,(%esp)
084c32fd +0x1e3:  call   084a857e <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0xe4>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0xe4
084c3302 +0x1e8:  movswl %ax,%esi
084c3305 +0x1eb:  mov    0xc(%ebp),%eax
084c3308 +0x1ee:  mov    %eax,(%esp)
084c330b +0x1f1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084c3310 +0x1f6:  mov    %eax,%ebx
084c3312 +0x1f8:  movl   $0x0,0xc(%esp)
084c331a +0x200:  movl   $0x13a4,0x8(%esp)
084c3322 +0x208:  movl   $&_ZZN13Inter_LoadEtc10SetFatigueEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
084c332a +0x210:  lea    -0x34(%ebp),%eax
084c332d +0x213:  mov    %eax,(%esp)
084c3330 +0x216:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c3335 +0x21b:  mov    %esi,0x10(%esp)
084c3339 +0x21f:  mov    -0x1c(%ebp),%eax
084c333c +0x222:  mov    %eax,0xc(%esp)
084c3340 +0x226:  mov    %ebx,0x8(%esp)
084c3344 +0x22a:  movl   $"FATIGUE BATTERY ACTIVE: charno(%d) , descFatigueAmount(%d), cur charging(%d)",0x4(%esp)
084c334c +0x232:  lea    -0x34(%ebp),%eax
084c334f +0x235:  mov    %eax,(%esp)
084c3352 +0x238:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c3357 +0x23d:  movl   $0x0,0x4(%esp)
084c335f +0x245:  mov    0xc(%ebp),%eax
084c3362 +0x248:  mov    %eax,(%esp)
084c3365 +0x24b:  call   08657ada <_ZN5CUser14RecoverFatigueEi>  ; CUser::RecoverFatigue(int)
084c336a +0x250:  mov    0xc(%ebp),%eax
084c336d +0x253:  mov    %eax,(%esp)
084c3370 +0x256:  call   084ebf90 <_GLOBAL__I__Z7getUserj+0x2f42>  ; global constructors keyed to getUser(unsigned int)+0x2f42
084c3375 +0x25b:  mov    0xc(%ebp),%eax
084c3378 +0x25e:  mov    %eax,(%esp)
084c337b +0x261:  call   08657570 <_ZN5CUser15ResetDailyQuestEv>  ; CUser::ResetDailyQuest()
084c3380 +0x266:  mov    0xc(%ebp),%eax
084c3383 +0x269:  mov    %eax,(%esp)
084c3386 +0x26c:  call   08657662 <_ZN5CUser18ResetTrainingQuestEv>  ; CUser::ResetTrainingQuest()
084c338b +0x271:  mov    $0x1,%eax
084c3390 +0x276:  add    $0x6c,%esp
084c3393 +0x279:  pop    %ebx
084c3394 +0x27a:  pop    %esi
084c3395 +0x27b:  pop    %edi
084c3396 +0x27c:  pop    %ebp
084c3397 +0x27d:  ret
```

## 反编译 C

```c
// Inter_LoadEtc::SetFatigue @ 0x84c311a

/* Inter_LoadEtc::SetFatigue(CUser*) */

undefined4 __thiscall Inter_LoadEtc::SetFatigue(Inter_LoadEtc *this,CUser *param_1)

{
  long lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  int local_28;
  short local_22;
  int local_20;
  
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    lVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    lVar1 = *(long *)(iVar4 + 0x7b);
    iVar4 = G_CEnvironment();
    cVar2 = CheckDailyScheduleTime(*(int *)(iVar4 + 0x37c),lVar1,lVar6);
    if (cVar2 != '\0') {
      local_28 = 0;
      iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (*(int *)(iVar4 + 0x7b) != 0) {
        lVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
        lVar1 = *(long *)(iVar4 + 0x7b);
        iVar4 = G_CEnvironment();
        local_28 = ComputeDaysScheduleTime(*(int *)(iVar4 + 0x37c),lVar1,lVar6);
      }
      local_22 = CFatigueBatteryHandle::ChargingFatigueBattery
                           (GlobalData::s_fatigueBatteryHandle_,param_1,local_28);
      if (0 < local_22) {
        CUserCharacInfo::IncFatigueBatteryCharging((CUserCharacInfo *)param_1,local_22);
        sVar3 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
        iVar4 = (int)local_22;
        uVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar8 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
        uVar5 = *(undefined4 *)(iVar8 + 0x7b);
        uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        cMyTrace::cMyTrace(local_48,"bool Inter_LoadEtc::SetFatigue(CUser*)",0x139a,0);
        cMyTrace::operator()
                  (local_48,
                   "FATIGUE BATTERY : charno(%d) days(%d), lastplaytick(%d), curTick(%d), charging(%d), cur charging(%d)"
                   ,uVar9,local_28,uVar5,uVar7,iVar4,(int)sVar3);
      }
      sVar3 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
      if (0 < sVar3) {
        sVar3 = CFatigueBatteryHandle::ActiveFatigueBattery
                          (GlobalData::s_fatigueBatteryHandle_,param_1);
        local_20 = (int)sVar3;
        if (local_20 != 0) {
          CUserCharacInfo::DecFatigueBatteryCharging((CUserCharacInfo *)param_1,sVar3);
          sVar3 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
          uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_38,"bool Inter_LoadEtc::SetFatigue(CUser*)",0x13a4,0);
          cMyTrace::operator()
                    (local_38,
                     "FATIGUE BATTERY ACTIVE: charno(%d) , descFatigueAmount(%d), cur charging(%d)",
                     uVar5,local_20,(int)sVar3);
        }
      }
      CUser::RecoverFatigue(param_1,0);
      CUserCharacInfo::resetCurCharacMemberBonusFatigue((CUserCharacInfo *)param_1);
      CUser::ResetDailyQuest(param_1);
      CUser::ResetTrainingQuest(param_1);
    }
    uVar5 = 1;
  }
  return uVar5;
}
```
