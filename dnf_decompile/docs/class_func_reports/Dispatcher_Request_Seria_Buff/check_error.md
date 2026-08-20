# check_error

`_ZN29Dispatcher_Request_Seria_Buff11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Request_Seria_Buff::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Request_Seria_Buff` | `0x081dbcd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dbcd8  _ZN29Dispatcher_Request_Seria_Buff11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Request_Seria_Buff::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081dbcd8, 0x081dbd9f]
081dbcd8 +0x00:  push   %ebp
081dbcd9 +0x01:  mov    %esp,%ebp
081dbcdb +0x03:  push   %ebx
081dbcdc +0x04:  sub    $0x24,%esp
081dbcdf +0x07:  mov    0xc(%ebp),%eax
081dbce2 +0x0a:  mov    %eax,(%esp)
081dbce5 +0x0d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081dbcea +0x12:  test   %eax,%eax
081dbcec +0x14:  sete   %al
081dbcef +0x17:  test   %al,%al
081dbcf1 +0x19:  je     081dbcfd <+0x25>
081dbcf3 +0x1b:  mov    $0xffffffff,%eax
081dbcf8 +0x20:  jmp    081dbd9a <+0xc2>
081dbcfd +0x25:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081dbd02 +0x2a:  movl   $0x5d,0x4(%esp)
081dbd0a +0x32:  mov    %eax,(%esp)
081dbd0d +0x35:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081dbd12 +0x3a:  mov    %eax,-0xc(%ebp)
081dbd15 +0x3d:  mov    -0xc(%ebp),%eax
081dbd18 +0x40:  mov    (%eax),%eax
081dbd1a +0x42:  add    $0x34,%eax
081dbd1d +0x45:  mov    (%eax),%edx
081dbd1f +0x47:  movl   $0x0,0x4(%esp)
081dbd27 +0x4f:  mov    -0xc(%ebp),%eax
081dbd2a +0x52:  mov    %eax,(%esp)
081dbd2d +0x55:  call   *%edx
081dbd2f +0x57:  test   %al,%al
081dbd31 +0x59:  je     081dbd64 <+0x8c>
081dbd33 +0x5b:  mov    0xc(%ebp),%eax
081dbd36 +0x5e:  mov    %eax,(%esp)
081dbd39 +0x61:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081dbd3e +0x66:  mov    %eax,%ebx
081dbd40 +0x68:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081dbd45 +0x6d:  add    $0x5094,%eax
081dbd4a +0x72:  mov    %ebx,0x4(%esp)
081dbd4e +0x76:  mov    %eax,(%esp)
081dbd51 +0x79:  call   0822af22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5cc
081dbd56 +0x7e:  xor    $0x1,%eax
081dbd59 +0x81:  test   %al,%al
081dbd5b +0x83:  je     081dbd95 <+0xbd>
081dbd5d +0x85:  mov    $0xffffffff,%eax
081dbd62 +0x8a:  jmp    081dbd9a <+0xc2>
081dbd64 +0x8c:  mov    0xc(%ebp),%eax
081dbd67 +0x8f:  mov    %eax,(%esp)
081dbd6a +0x92:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081dbd6f +0x97:  mov    %eax,%ebx
081dbd71 +0x99:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081dbd76 +0x9e:  add    $0x8710,%eax
081dbd7b +0xa3:  mov    %ebx,0x4(%esp)
081dbd7f +0xa7:  mov    %eax,(%esp)
081dbd82 +0xaa:  call   0822b136 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x7e0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x7e0
081dbd87 +0xaf:  shr    $0x1f,%eax
081dbd8a +0xb2:  test   %al,%al
081dbd8c +0xb4:  je     081dbd95 <+0xbd>
081dbd8e +0xb6:  mov    $0xffffffff,%eax
081dbd93 +0xbb:  jmp    081dbd9a <+0xc2>
081dbd95 +0xbd:  mov    $0x0,%eax
081dbd9a +0xc2:  add    $0x24,%esp
081dbd9d +0xc5:  pop    %ebx
081dbd9e +0xc6:  pop    %ebp
081dbd9f +0xc7:  ret
```

## 反编译 C

```c
// Dispatcher_Request_Seria_Buff::check_error @ 0x81dbcd8

/* Dispatcher_Request_Seria_Buff::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Request_Seria_Buff::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x5d);
    cVar1 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
    if (cVar1 == '\0') {
      iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
      iVar5 = G_CDataManager();
      iVar2 = STGrowthPowerData::get_idx_break_away_section
                        ((STGrowthPowerData *)(iVar5 + 0x8710),iVar2);
      if (iVar2 < 0) {
        return 0xffffffff;
      }
    }
    else {
      iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
      iVar5 = G_CDataManager();
      cVar1 = stSeriaBlessingScript::is_possible_lv((stSeriaBlessingScript *)(iVar5 + 0x5094),iVar2)
      ;
      if (cVar1 != '\x01') {
        return 0xffffffff;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}
```
