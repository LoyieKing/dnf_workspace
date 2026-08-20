# ChargingFatigueBattery

`_ZN21CFatigueBatteryHandle22ChargingFatigueBatteryEP5CUseri`

`CFatigueBatteryHandle::ChargingFatigueBattery(CUser*, int)`

| 类 | 地址 |
|---|---|
| `CFatigueBatteryHandle` | `0x084a8094` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8094  _ZN21CFatigueBatteryHandle22ChargingFatigueBatteryEP5CUseri
#           CFatigueBatteryHandle::ChargingFatigueBattery(CUser*, int)
# range [0x084a8094, 0x084a81f3]
084a8094 +0x000:  push   %ebp
084a8095 +0x001:  mov    %esp,%ebp
084a8097 +0x003:  push   %edi
084a8098 +0x004:  push   %esi
084a8099 +0x005:  push   %ebx
084a809a +0x006:  sub    $0x4c,%esp
084a809d +0x009:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a80a2 +0x00e:  add    $0x68,%eax
084a80a5 +0x011:  mov    %eax,-0x28(%ebp)
084a80a8 +0x014:  mov    0xc(%ebp),%eax
084a80ab +0x017:  mov    %eax,(%esp)
084a80ae +0x01a:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084a80b3 +0x01f:  mov    -0x28(%ebp),%edx
084a80b6 +0x022:  movzbl 0x5c9(%edx),%edx
084a80bd +0x029:  movzbl %dl,%edx
084a80c0 +0x02c:  cmp    %edx,%eax
084a80c2 +0x02e:  jl     084a80e0 <+0x4c>
084a80c4 +0x030:  mov    0xc(%ebp),%eax
084a80c7 +0x033:  mov    %eax,(%esp)
084a80ca +0x036:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084a80cf +0x03b:  mov    -0x28(%ebp),%edx
084a80d2 +0x03e:  movzbl 0x5d0(%edx),%edx
084a80d9 +0x045:  movzbl %dl,%edx
084a80dc +0x048:  cmp    %edx,%eax
084a80de +0x04a:  jne    084a80e7 <+0x53>
084a80e0 +0x04c:  mov    $0x1,%eax
084a80e5 +0x051:  jmp    084a80ec <+0x58>
084a80e7 +0x053:  mov    $0x0,%eax
084a80ec +0x058:  test   %al,%al
084a80ee +0x05a:  je     084a80fa <+0x66>
084a80f0 +0x05c:  mov    $0x0,%eax
084a80f5 +0x061:  jmp    084a81ec <+0x158>
084a80fa +0x066:  movl   $0x46,0x4(%esp)
084a8102 +0x06e:  mov    0xc(%ebp),%eax
084a8105 +0x071:  mov    %eax,(%esp)
084a8108 +0x074:  call   08656636 <_ZN5CUser24GetSpecialLevelCharacCntEi>  ; CUser::GetSpecialLevelCharacCnt(int)
084a810d +0x079:  mov    %eax,-0x24(%ebp)
084a8110 +0x07c:  mov    0xc(%ebp),%eax
084a8113 +0x07f:  mov    %eax,(%esp)
084a8116 +0x082:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
084a811b +0x087:  movzwl %ax,%eax
084a811e +0x08a:  mov    %eax,-0x20(%ebp)
084a8121 +0x08d:  mov    &DEFAULT_MAX_FATIGUE,%eax
084a8126 +0x092:  sub    -0x20(%ebp),%eax
084a8129 +0x095:  mov    %eax,-0x1c(%ebp)
084a812c +0x098:  cmpl   $0x0,-0x1c(%ebp)
084a8130 +0x09c:  jns    084a8139 <+0xa5>
084a8132 +0x09e:  movl   $0x0,-0x1c(%ebp)
084a8139 +0x0a5:  mov    &DEFAULT_MAX_FATIGUE,%eax
084a813e +0x0aa:  imul   0x10(%ebp),%eax
084a8142 +0x0ae:  add    %eax,-0x1c(%ebp)
084a8145 +0x0b1:  mov    0xc(%ebp),%eax
084a8148 +0x0b4:  mov    %eax,(%esp)
084a814b +0x0b7:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084a8150 +0x0bc:  mov    %eax,%esi
084a8152 +0x0be:  mov    0xc(%ebp),%eax
084a8155 +0x0c1:  mov    %eax,(%esp)
084a8158 +0x0c4:  call   084a857e <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0xe4>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0xe4
084a815d +0x0c9:  movswl %ax,%edi
084a8160 +0x0cc:  mov    0xc(%ebp),%eax
084a8163 +0x0cf:  mov    %eax,(%esp)
084a8166 +0x0d2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084a816b +0x0d7:  mov    %eax,%ebx
084a816d +0x0d9:  movl   $0x0,0xc(%esp)
084a8175 +0x0e1:  movl   $0x32,0x8(%esp)
084a817d +0x0e9:  movl   $&_ZZN21CFatigueBatteryHandle22ChargingFatigueBatteryEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
084a8185 +0x0f1:  lea    -0x38(%ebp),%eax
084a8188 +0x0f4:  mov    %eax,(%esp)
084a818b +0x0f7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084a8190 +0x0fc:  mov    -0x20(%ebp),%eax
084a8193 +0x0ff:  mov    %eax,0x1c(%esp)
084a8197 +0x103:  mov    -0x24(%ebp),%eax
084a819a +0x106:  mov    %eax,0x18(%esp)
084a819e +0x10a:  mov    %esi,0x14(%esp)
084a81a2 +0x10e:  mov    -0x1c(%ebp),%eax
084a81a5 +0x111:  mov    %eax,0x10(%esp)
084a81a9 +0x115:  mov    %edi,0xc(%esp)
084a81ad +0x119:  mov    %ebx,0x8(%esp)
084a81b1 +0x11d:  movl   $"FATIGUE BATTERY : char no(%d), alreadyFatigue(%d), remainFatigue(%d), level(%d), endLevelCnt(%d), thatDayUsedFatigue(%d)",0x4(%esp)
084a81b9 +0x125:  lea    -0x38(%ebp),%eax
084a81bc +0x128:  mov    %eax,(%esp)
084a81bf +0x12b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084a81c4 +0x130:  mov    0xc(%ebp),%eax
084a81c7 +0x133:  mov    %eax,(%esp)
084a81ca +0x136:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084a81cf +0x13b:  mov    -0x24(%ebp),%edx
084a81d2 +0x13e:  mov    %edx,0xc(%esp)
084a81d6 +0x142:  mov    %eax,0x8(%esp)
084a81da +0x146:  mov    -0x1c(%ebp),%eax
084a81dd +0x149:  mov    %eax,0x4(%esp)
084a81e1 +0x14d:  mov    0x8(%ebp),%eax
084a81e4 +0x150:  mov    %eax,(%esp)
084a81e7 +0x153:  call   084a8004 <_ZN21CFatigueBatteryHandle29ComputeFatigueBatteryChargingEiii>  ; CFatigueBatteryHandle::ComputeFatigueBatteryCharging(int, int, int)
084a81ec +0x158:  add    $0x4c,%esp
084a81ef +0x15b:  pop    %ebx
084a81f0 +0x15c:  pop    %esi
084a81f1 +0x15d:  pop    %edi
084a81f2 +0x15e:  pop    %ebp
084a81f3 +0x15f:  ret
```

## 反编译 C

```c
// CFatigueBatteryHandle::ChargingFatigueBattery @ 0x84a8094

/* CFatigueBatteryHandle::ChargingFatigueBattery(CUser*, int) */

undefined4 __thiscall
CFatigueBatteryHandle::ChargingFatigueBattery
          (CFatigueBatteryHandle *this,CUser *param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  cMyTrace local_3c [16];
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  
  local_2c = G_CDataManager();
  local_2c = local_2c + 0x68;
  iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  if ((int)(uint)*(byte *)(local_2c + 0x5c9) <= iVar3) {
    uVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (uVar4 != *(byte *)(local_2c + 0x5d0)) {
      bVar1 = false;
      goto LAB_084a80ec;
    }
  }
  bVar1 = true;
LAB_084a80ec:
  if (bVar1) {
    uVar5 = 0;
  }
  else {
    local_28 = CUser::GetSpecialLevelCharacCnt(param_1,0x46);
    local_24 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)param_1);
    local_24 = local_24 & 0xffff;
    local_20 = DEFAULT_MAX_FATIGUE - local_24;
    if (local_20 < 0) {
      local_20 = 0;
    }
    local_20 = local_20 + DEFAULT_MAX_FATIGUE * param_2;
    uVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    sVar2 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_3c,
                       "short int CFatigueBatteryHandle::ChargingFatigueBattery(CUser*, int)",0x32,0
                      );
    cMyTrace::operator()
              (local_3c,
               "FATIGUE BATTERY : char no(%d), alreadyFatigue(%d), remainFatigue(%d), level(%d), endLevelCnt(%d), thatDayUsedFatigue(%d)"
               ,uVar6,(int)sVar2,local_20,uVar5,local_28,local_24);
    iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    uVar5 = ComputeFatigueBatteryCharging(this,local_20,iVar3,local_28);
  }
  return uVar5;
}
```
