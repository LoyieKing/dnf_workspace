# check_error

`_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_GrowthWeaponEventChangeInfinity::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GrowthWeaponEventChangeInfinity` | `0x081e7f2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e7f2e  _ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_GrowthWeaponEventChangeInfinity::check_error(CUser*, MSG_BASE&)
# range [0x081e7f2e, 0x081e80bd]
081e7f2e +0x000:  push   %ebp
081e7f2f +0x001:  mov    %esp,%ebp
081e7f31 +0x003:  push   %ebx
081e7f32 +0x004:  sub    $0x24,%esp
081e7f35 +0x007:  mov    0x10(%ebp),%eax
081e7f38 +0x00a:  mov    %eax,-0x10(%ebp)
081e7f3b +0x00d:  cmpl   $0x0,0xc(%ebp)
081e7f3f +0x011:  jne    081e7f4b <+0x1d>
081e7f41 +0x013:  mov    $0xffffffff,%eax
081e7f46 +0x018:  jmp    081e80b8 <+0x18a>
081e7f4b +0x01d:  mov    0xc(%ebp),%eax
081e7f4e +0x020:  mov    %eax,(%esp)
081e7f51 +0x023:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e7f56 +0x028:  cmp    $0x3,%eax
081e7f59 +0x02b:  setne  %al
081e7f5c +0x02e:  test   %al,%al
081e7f5e +0x030:  je     081e7f6a <+0x3c>
081e7f60 +0x032:  mov    $0x13,%eax
081e7f65 +0x037:  jmp    081e80b8 <+0x18a>
081e7f6a +0x03c:  mov    -0x10(%ebp),%eax
081e7f6d +0x03f:  mov    0x11(%eax),%ebx
081e7f70 +0x042:  mov    -0x10(%ebp),%eax
081e7f73 +0x045:  mov    0xd(%eax),%eax
081e7f76 +0x048:  mov    %eax,(%esp)
081e7f79 +0x04b:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081e7f7e +0x050:  mov    %ebx,0x8(%esp)
081e7f82 +0x054:  mov    %eax,0x4(%esp)
081e7f86 +0x058:  mov    0xc(%ebp),%eax
081e7f89 +0x05b:  mov    %eax,(%esp)
081e7f8c +0x05e:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081e7f91 +0x063:  test   %al,%al
081e7f93 +0x065:  je     081e7f9f <+0x71>
081e7f95 +0x067:  mov    $0xd5,%eax
081e7f9a +0x06c:  jmp    081e80b8 <+0x18a>
081e7f9f +0x071:  mov    0xc(%ebp),%eax
081e7fa2 +0x074:  mov    %eax,(%esp)
081e7fa5 +0x077:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
081e7faa +0x07c:  mov    0x4(%eax),%ebx
081e7fad +0x07f:  movl   $0xffffffff,0x4(%esp)
081e7fb5 +0x087:  mov    0xc(%ebp),%eax
081e7fb8 +0x08a:  mov    %eax,(%esp)
081e7fbb +0x08d:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081e7fc0 +0x092:  cmp    %eax,%ebx
081e7fc2 +0x094:  setne  %al
081e7fc5 +0x097:  test   %al,%al
081e7fc7 +0x099:  je     081e7fd3 <+0xa5>
081e7fc9 +0x09b:  mov    $0x3,%eax
081e7fce +0x0a0:  jmp    081e80b8 <+0x18a>
081e7fd3 +0x0a5:  mov    0xc(%ebp),%eax
081e7fd6 +0x0a8:  mov    %eax,(%esp)
081e7fd9 +0x0ab:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
081e7fde +0x0b0:  mov    0xc(%eax),%eax
081e7fe1 +0x0b3:  test   %eax,%eax
081e7fe3 +0x0b5:  setne  %al
081e7fe6 +0x0b8:  test   %al,%al
081e7fe8 +0x0ba:  je     081e7ff4 <+0xc6>
081e7fea +0x0bc:  mov    $0x3,%eax
081e7fef +0x0c1:  jmp    081e80b8 <+0x18a>
081e7ff4 +0x0c6:  movl   $0x0,-0xc(%ebp)
081e7ffb +0x0cd:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081e8000 +0x0d2:  mov    %eax,(%esp)
081e8003 +0x0d5:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
081e8008 +0x0da:  test   %al,%al
081e800a +0x0dc:  je     081e801c <+0xee>
081e800c +0x0de:  mov    0xc(%ebp),%eax
081e800f +0x0e1:  mov    %eax,(%esp)
081e8012 +0x0e4:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081e8017 +0x0e9:  mov    %eax,-0xc(%ebp)
081e801a +0x0ec:  jmp    081e802a <+0xfc>
081e801c +0x0ee:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081e8021 +0x0f3:  mov    0x378(%eax),%eax
081e8027 +0x0f9:  mov    %eax,-0xc(%ebp)
081e802a +0x0fc:  mov    0xc(%ebp),%eax
081e802d +0x0ff:  mov    %eax,(%esp)
081e8030 +0x102:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
081e8035 +0x107:  movzwl 0x12(%eax),%eax
081e8039 +0x10b:  movswl %ax,%edx
081e803c +0x10e:  mov    -0xc(%ebp),%eax
081e803f +0x111:  cmp    %eax,%edx
081e8041 +0x113:  setne  %al
081e8044 +0x116:  test   %al,%al
081e8046 +0x118:  je     081e804f <+0x121>
081e8048 +0x11a:  mov    $0x3,%eax
081e804d +0x11f:  jmp    081e80b8 <+0x18a>
081e804f +0x121:  mov    0xc(%ebp),%eax
081e8052 +0x124:  mov    %eax,(%esp)
081e8055 +0x127:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
081e805a +0x12c:  movzwl 0x10(%eax),%ebx
081e805e +0x130:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e8063 +0x135:  mov    %eax,(%esp)
081e8066 +0x138:  call   08365638 <_ZN12CDataManager27get_GrowthWeaponMaterialMaxEv>  ; CDataManager::get_GrowthWeaponMaterialMax()
081e806b +0x13d:  cmp    %ax,%bx
081e806e +0x140:  setl   %al
081e8071 +0x143:  test   %al,%al
081e8073 +0x145:  je     081e807c <+0x14e>
081e8075 +0x147:  mov    $0x11,%eax
081e807a +0x14c:  jmp    081e80b8 <+0x18a>
081e807c +0x14e:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081e8081 +0x153:  movl   $0x64,0x4(%esp)
081e8089 +0x15b:  mov    %eax,(%esp)
081e808c +0x15e:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081e8091 +0x163:  mov    (%eax),%edx
081e8093 +0x165:  add    $0x34,%edx
081e8096 +0x168:  mov    (%edx),%edx
081e8098 +0x16a:  movl   $0x0,0x4(%esp)
081e80a0 +0x172:  mov    %eax,(%esp)
081e80a3 +0x175:  call   *%edx
081e80a5 +0x177:  xor    $0x1,%eax
081e80a8 +0x17a:  test   %al,%al
081e80aa +0x17c:  je     081e80b3 <+0x185>
081e80ac +0x17e:  mov    $0x1,%eax
081e80b1 +0x183:  jmp    081e80b8 <+0x18a>
081e80b3 +0x185:  mov    $0x0,%eax
081e80b8 +0x18a:  add    $0x24,%esp
081e80bb +0x18d:  pop    %ebx
081e80bc +0x18e:  pop    %ebp
081e80bd +0x18f:  ret
```

## 反编译 C

```c
// Dispatcher_GrowthWeaponEventChangeInfinity::check_error @ 0x81e7f2e

/* Dispatcher_GrowthWeaponEventChangeInfinity::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GrowthWeaponEventChangeInfinity::check_error
          (Dispatcher_GrowthWeaponEventChangeInfinity *this,CUser *param_1,MSG_BASE *param_2)

{
  short sVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  GameWorld *this_00;
  CDataManager *this_01;
  int *piVar7;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar5 = CUser::get_state(param_1);
    if (iVar5 == 3) {
      iVar5 = *(int *)(param_2 + 0x11);
      iVar6 = GetInvenTypeFromItemSpace(*(undefined4 *)(param_2 + 0xd));
      cVar2 = CUser::CheckItemLock(param_1,iVar6,iVar5);
      if (cVar2 == '\0') {
        iVar5 = CUser::getGrowthWeaponEventdata(param_1);
        iVar5 = *(int *)(iVar5 + 4);
        iVar6 = CUser::get_charac_no(param_1,-1);
        if (iVar5 == iVar6) {
          iVar5 = CUser::getGrowthWeaponEventdata(param_1);
          if (*(int *)(iVar5 + 0xc) == 0) {
            this_00 = (GameWorld *)G_GameWorld();
            cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
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
              this_01 = (CDataManager *)G_CDataManager();
              sVar3 = CDataManager::get_GrowthWeaponMaterialMax(this_01);
              if (sVar1 < sVar3) {
                uVar4 = 0x11;
              }
              else {
                piVar7 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
                cVar2 = (**(code **)(*piVar7 + 0x34))(piVar7,0);
                if (cVar2 == '\x01') {
                  uVar4 = 0;
                }
                else {
                  uVar4 = 1;
                }
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
          uVar4 = 3;
        }
      }
      else {
        uVar4 = 0xd5;
      }
    }
    else {
      uVar4 = 0x13;
    }
  }
  return uVar4;
}
```
