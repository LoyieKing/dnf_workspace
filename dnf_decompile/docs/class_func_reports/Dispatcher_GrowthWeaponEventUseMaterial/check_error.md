# check_error

`_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_GrowthWeaponEventUseMaterial::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GrowthWeaponEventUseMaterial` | `0x081e82fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e82fa  _ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_GrowthWeaponEventUseMaterial::check_error(CUser*, MSG_BASE&)
# range [0x081e82fa, 0x081e8495]
081e82fa +0x000:  push   %ebp
081e82fb +0x001:  mov    %esp,%ebp
081e82fd +0x003:  push   %ebx
081e82fe +0x004:  sub    $0x24,%esp
081e8301 +0x007:  cmpl   $0x0,0xc(%ebp)
081e8305 +0x00b:  jne    081e8311 <+0x17>
081e8307 +0x00d:  mov    $0xffffffff,%eax
081e830c +0x012:  jmp    081e8490 <+0x196>
081e8311 +0x017:  mov    0xc(%ebp),%eax
081e8314 +0x01a:  mov    %eax,(%esp)
081e8317 +0x01d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e831c +0x022:  cmp    $0x3,%eax
081e831f +0x025:  setne  %al
081e8322 +0x028:  test   %al,%al
081e8324 +0x02a:  je     081e8330 <+0x36>
081e8326 +0x02c:  mov    $0x13,%eax
081e832b +0x031:  jmp    081e8490 <+0x196>
081e8330 +0x036:  mov    0x10(%ebp),%eax
081e8333 +0x039:  mov    %eax,-0x14(%ebp)
081e8336 +0x03c:  mov    -0x14(%ebp),%eax
081e8339 +0x03f:  mov    0x11(%eax),%ebx
081e833c +0x042:  mov    0xc(%ebp),%eax
081e833f +0x045:  mov    %eax,(%esp)
081e8342 +0x048:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081e8347 +0x04d:  mov    %ebx,0x8(%esp)
081e834b +0x051:  movl   $0x1,0x4(%esp)
081e8353 +0x059:  mov    %eax,(%esp)
081e8356 +0x05c:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081e835b +0x061:  mov    %eax,-0x10(%ebp)
081e835e +0x064:  mov    -0x10(%ebp),%eax
081e8361 +0x067:  mov    0x2(%eax),%eax
081e8364 +0x06a:  test   %eax,%eax
081e8366 +0x06c:  jne    081e8372 <+0x78>
081e8368 +0x06e:  mov    $0x15,%eax
081e836d +0x073:  jmp    081e8490 <+0x196>
081e8372 +0x078:  mov    -0x10(%ebp),%eax
081e8375 +0x07b:  mov    0x2(%eax),%ebx
081e8378 +0x07e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e837d +0x083:  mov    %eax,(%esp)
081e8380 +0x086:  call   0836562a <_ZN12CDataManager28get_GrowthWeaponMaterialItemEv>  ; CDataManager::get_GrowthWeaponMaterialItem()
081e8385 +0x08b:  cmp    %eax,%ebx
081e8387 +0x08d:  setne  %al
081e838a +0x090:  test   %al,%al
081e838c +0x092:  je     081e8398 <+0x9e>
081e838e +0x094:  mov    $0x11,%eax
081e8393 +0x099:  jmp    081e8490 <+0x196>
081e8398 +0x09e:  mov    0xc(%ebp),%eax
081e839b +0x0a1:  mov    %eax,(%esp)
081e839e +0x0a4:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
081e83a3 +0x0a9:  mov    0x4(%eax),%ebx
081e83a6 +0x0ac:  movl   $0xffffffff,0x4(%esp)
081e83ae +0x0b4:  mov    0xc(%ebp),%eax
081e83b1 +0x0b7:  mov    %eax,(%esp)
081e83b4 +0x0ba:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081e83b9 +0x0bf:  cmp    %eax,%ebx
081e83bb +0x0c1:  setne  %al
081e83be +0x0c4:  test   %al,%al
081e83c0 +0x0c6:  je     081e83cc <+0xd2>
081e83c2 +0x0c8:  mov    $0x3,%eax
081e83c7 +0x0cd:  jmp    081e8490 <+0x196>
081e83cc +0x0d2:  movl   $0x0,-0xc(%ebp)
081e83d3 +0x0d9:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081e83d8 +0x0de:  mov    %eax,(%esp)
081e83db +0x0e1:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
081e83e0 +0x0e6:  test   %al,%al
081e83e2 +0x0e8:  je     081e83f4 <+0xfa>
081e83e4 +0x0ea:  mov    0xc(%ebp),%eax
081e83e7 +0x0ed:  mov    %eax,(%esp)
081e83ea +0x0f0:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081e83ef +0x0f5:  mov    %eax,-0xc(%ebp)
081e83f2 +0x0f8:  jmp    081e8402 <+0x108>
081e83f4 +0x0fa:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081e83f9 +0x0ff:  mov    0x378(%eax),%eax
081e83ff +0x105:  mov    %eax,-0xc(%ebp)
081e8402 +0x108:  mov    0xc(%ebp),%eax
081e8405 +0x10b:  mov    %eax,(%esp)
081e8408 +0x10e:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
081e840d +0x113:  movzwl 0x12(%eax),%eax
081e8411 +0x117:  movswl %ax,%edx
081e8414 +0x11a:  mov    -0xc(%ebp),%eax
081e8417 +0x11d:  cmp    %eax,%edx
081e8419 +0x11f:  setne  %al
081e841c +0x122:  test   %al,%al
081e841e +0x124:  je     081e8427 <+0x12d>
081e8420 +0x126:  mov    $0x3,%eax
081e8425 +0x12b:  jmp    081e8490 <+0x196>
081e8427 +0x12d:  mov    0xc(%ebp),%eax
081e842a +0x130:  mov    %eax,(%esp)
081e842d +0x133:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
081e8432 +0x138:  movzwl 0x10(%eax),%ebx
081e8436 +0x13c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e843b +0x141:  mov    %eax,(%esp)
081e843e +0x144:  call   08365638 <_ZN12CDataManager27get_GrowthWeaponMaterialMaxEv>  ; CDataManager::get_GrowthWeaponMaterialMax()
081e8443 +0x149:  cmp    %ax,%bx
081e8446 +0x14c:  setge  %al
081e8449 +0x14f:  test   %al,%al
081e844b +0x151:  je     081e8454 <+0x15a>
081e844d +0x153:  mov    $0x11,%eax
081e8452 +0x158:  jmp    081e8490 <+0x196>
081e8454 +0x15a:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081e8459 +0x15f:  movl   $0x64,0x4(%esp)
081e8461 +0x167:  mov    %eax,(%esp)
081e8464 +0x16a:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081e8469 +0x16f:  mov    (%eax),%edx
081e846b +0x171:  add    $0x34,%edx
081e846e +0x174:  mov    (%edx),%edx
081e8470 +0x176:  movl   $0x0,0x4(%esp)
081e8478 +0x17e:  mov    %eax,(%esp)
081e847b +0x181:  call   *%edx
081e847d +0x183:  xor    $0x1,%eax
081e8480 +0x186:  test   %al,%al
081e8482 +0x188:  je     081e848b <+0x191>
081e8484 +0x18a:  mov    $0x1,%eax
081e8489 +0x18f:  jmp    081e8490 <+0x196>
081e848b +0x191:  mov    $0x0,%eax
081e8490 +0x196:  add    $0x24,%esp
081e8493 +0x199:  pop    %ebx
081e8494 +0x19a:  pop    %ebp
081e8495 +0x19b:  ret
```

## 反编译 C

```c
// Dispatcher_GrowthWeaponEventUseMaterial::check_error @ 0x81e82fa

/* Dispatcher_GrowthWeaponEventUseMaterial::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GrowthWeaponEventUseMaterial::check_error
          (Dispatcher_GrowthWeaponEventUseMaterial *this,CUser *param_1,MSG_BASE *param_2)

{
  short sVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  CInventory *this_00;
  CDataManager *pCVar6;
  int iVar7;
  GameWorld *this_01;
  int *piVar8;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar5 = CUser::get_state(param_1);
    if (iVar5 == 3) {
      iVar5 = *(int *)(param_2 + 0x11);
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar5 = CInventory::GetInvenRef(this_00,1,iVar5);
      if (*(int *)(iVar5 + 2) == 0) {
        uVar4 = 0x15;
      }
      else {
        iVar5 = *(int *)(iVar5 + 2);
        pCVar6 = (CDataManager *)G_CDataManager();
        iVar7 = CDataManager::get_GrowthWeaponMaterialItem(pCVar6);
        if (iVar5 == iVar7) {
          iVar5 = CUser::getGrowthWeaponEventdata(param_1);
          iVar5 = *(int *)(iVar5 + 4);
          iVar7 = CUser::get_charac_no(param_1,-1);
          if (iVar5 == iVar7) {
            this_01 = (GameWorld *)G_GameWorld();
            cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this_01);
            if (cVar2 == '\0') {
              iVar5 = G_CEnvironment();
              local_10 = *(int *)(iVar5 + 0x378);
            }
            else {
              local_10 = CUser::GetServerGroup(param_1);
            }
            iVar5 = CUser::getGrowthWeaponEventdata(param_1);
            if (*(short *)(iVar5 + 0x12) == local_10) {
              iVar5 = CUser::getGrowthWeaponEventdata(param_1);
              sVar1 = *(short *)(iVar5 + 0x10);
              pCVar6 = (CDataManager *)G_CDataManager();
              sVar3 = CDataManager::get_GrowthWeaponMaterialMax(pCVar6);
              if (sVar1 < sVar3) {
                piVar8 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
                cVar2 = (**(code **)(*piVar8 + 0x34))(piVar8,0);
                if (cVar2 == '\x01') {
                  uVar4 = 0;
                }
                else {
                  uVar4 = 1;
                }
              }
              else {
                uVar4 = 0x11;
              }
            }
            else {
              uVar4 = 3;
            }
          }
          else {
            uVar4 = 3;
          }
        }
        else {
          uVar4 = 0x11;
        }
      }
    }
    else {
      uVar4 = 0x13;
    }
  }
  return uVar4;
}
```
