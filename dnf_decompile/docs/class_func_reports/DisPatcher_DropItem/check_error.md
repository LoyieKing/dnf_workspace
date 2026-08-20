# check_error

`_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_DropItem::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DropItem` | `0x081c2d9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c2d9a  _ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_DropItem::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c2d9a, 0x081c2f93]
081c2d9a +0x000:  push   %ebp
081c2d9b +0x001:  mov    %esp,%ebp
081c2d9d +0x003:  push   %ebx
081c2d9e +0x004:  sub    $0x34,%esp
081c2da1 +0x007:  mov    0xc(%ebp),%eax
081c2da4 +0x00a:  mov    %eax,(%esp)
081c2da7 +0x00d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081c2dac +0x012:  test   %eax,%eax
081c2dae +0x014:  sete   %al
081c2db1 +0x017:  test   %al,%al
081c2db3 +0x019:  je     081c2dbf <+0x25>
081c2db5 +0x01b:  mov    $0xffffffff,%eax
081c2dba +0x020:  jmp    081c2f8d <+0x1f3>
081c2dbf +0x025:  mov    0x10(%ebp),%eax
081c2dc2 +0x028:  mov    %eax,-0x20(%ebp)
081c2dc5 +0x02b:  mov    -0x20(%ebp),%eax
081c2dc8 +0x02e:  mov    0x14(%eax),%eax
081c2dcb +0x031:  test   %eax,%eax
081c2dcd +0x033:  jg     081c2dd9 <+0x3f>
081c2dcf +0x035:  mov    $0xffffffff,%eax
081c2dd4 +0x03a:  jmp    081c2f8d <+0x1f3>
081c2dd9 +0x03f:  mov    0x14(%ebp),%eax
081c2ddc +0x042:  mov    %eax,-0x1c(%ebp)
081c2ddf +0x045:  mov    0xc(%ebp),%eax
081c2de2 +0x048:  mov    %eax,(%esp)
081c2de5 +0x04b:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c2dea +0x050:  cmp    $0xa,%eax
081c2ded +0x053:  sete   %al
081c2df0 +0x056:  test   %al,%al
081c2df2 +0x058:  je     081c2dfe <+0x64>
081c2df4 +0x05a:  mov    $0x13,%eax
081c2df9 +0x05f:  jmp    081c2f8d <+0x1f3>
081c2dfe +0x064:  mov    0xc(%ebp),%eax
081c2e01 +0x067:  mov    %eax,(%esp)
081c2e04 +0x06a:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c2e09 +0x06f:  mov    %eax,-0x18(%ebp)
081c2e0c +0x072:  cmpl   $0x0,-0x18(%ebp)
081c2e10 +0x076:  je     081c2e3c <+0xa2>
081c2e12 +0x078:  mov    -0x18(%ebp),%eax
081c2e15 +0x07b:  mov    0xcac(%eax),%eax
081c2e1b +0x081:  mov    %eax,-0x10(%ebp)
081c2e1e +0x084:  cmpl   $0x0,-0x10(%ebp)
081c2e22 +0x088:  je     081c2e3c <+0xa2>
081c2e24 +0x08a:  mov    -0x10(%ebp),%eax
081c2e27 +0x08d:  movzbl 0x89f(%eax),%eax
081c2e2e +0x094:  test   %al,%al
081c2e30 +0x096:  je     081c2e3c <+0xa2>
081c2e32 +0x098:  mov    $0x13,%eax
081c2e37 +0x09d:  jmp    081c2f8d <+0x1f3>
081c2e3c +0x0a2:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c2e41 +0x0a7:  mov    %eax,(%esp)
081c2e44 +0x0aa:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
081c2e49 +0x0af:  test   %al,%al
081c2e4b +0x0b1:  je     081c2e57 <+0xbd>
081c2e4d +0x0b3:  mov    $0x13,%eax
081c2e52 +0x0b8:  jmp    081c2f8d <+0x1f3>
081c2e57 +0x0bd:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081c2e5c +0x0c2:  movl   $0x1,0xc(%esp)
081c2e64 +0x0ca:  movl   $0x1,0x8(%esp)
081c2e6c +0x0d2:  mov    0xc(%ebp),%edx
081c2e6f +0x0d5:  mov    %edx,0x4(%esp)
081c2e73 +0x0d9:  mov    %eax,(%esp)
081c2e76 +0x0dc:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081c2e7b +0x0e1:  test   %al,%al
081c2e7d +0x0e3:  je     081c2e93 <+0xf9>
081c2e7f +0x0e5:  mov    -0x1c(%ebp),%eax
081c2e82 +0x0e8:  movl   $0x1,0xc(%eax)
081c2e89 +0x0ef:  mov    $0xd1,%eax
081c2e8e +0x0f4:  jmp    081c2f8d <+0x1f3>
081c2e93 +0x0f9:  mov    -0x20(%ebp),%eax
081c2e96 +0x0fc:  movzbl 0x18(%eax),%eax
081c2e9a +0x100:  cmp    $0x1,%al
081c2e9c +0x102:  je     081c2ed5 <+0x13b>
081c2e9e +0x104:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081c2ea3 +0x109:  movl   $0x1e,0x8(%esp)
081c2eab +0x111:  mov    0xc(%ebp),%edx
081c2eae +0x114:  mov    %edx,0x4(%esp)
081c2eb2 +0x118:  mov    %eax,(%esp)
081c2eb5 +0x11b:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081c2eba +0x120:  mov    %eax,-0xc(%ebp)
081c2ebd +0x123:  cmpl   $0x0,-0xc(%ebp)
081c2ec1 +0x127:  je     081c2ed5 <+0x13b>
081c2ec3 +0x129:  mov    -0x1c(%ebp),%eax
081c2ec6 +0x12c:  movl   $0x1,0xc(%eax)
081c2ecd +0x133:  mov    -0xc(%ebp),%eax
081c2ed0 +0x136:  jmp    081c2f8d <+0x1f3>
081c2ed5 +0x13b:  mov    -0x20(%ebp),%eax
081c2ed8 +0x13e:  movzwl 0x12(%eax),%eax
081c2edc +0x142:  movswl %ax,%ebx
081c2edf +0x145:  mov    -0x20(%ebp),%eax
081c2ee2 +0x148:  movzbl 0x11(%eax),%eax
081c2ee6 +0x14c:  movsbl %al,%eax
081c2ee9 +0x14f:  mov    %eax,(%esp)
081c2eec +0x152:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081c2ef1 +0x157:  mov    %ebx,0x8(%esp)
081c2ef5 +0x15b:  mov    %eax,0x4(%esp)
081c2ef9 +0x15f:  mov    0xc(%ebp),%eax
081c2efc +0x162:  mov    %eax,(%esp)
081c2eff +0x165:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081c2f04 +0x16a:  test   %al,%al
081c2f06 +0x16c:  je     081c2f0f <+0x175>
081c2f08 +0x16e:  mov    $0xd5,%eax
081c2f0d +0x173:  jmp    081c2f8d <+0x1f3>
081c2f0f +0x175:  mov    0xc(%ebp),%eax
081c2f12 +0x178:  mov    %eax,(%esp)
081c2f15 +0x17b:  call   0822fd3c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53e6
081c2f1a +0x180:  test   %al,%al
081c2f1c +0x182:  je     081c2f25 <+0x18b>
081c2f1e +0x184:  mov    $0x13,%eax
081c2f23 +0x189:  jmp    081c2f8d <+0x1f3>
081c2f25 +0x18b:  movl   $0x6,-0x14(%ebp)
081c2f2c +0x192:  mov    -0x20(%ebp),%eax
081c2f2f +0x195:  movzbl 0x11(%eax),%eax
081c2f33 +0x199:  movsbl %al,%eax
081c2f36 +0x19c:  cmp    $0x1,%eax
081c2f39 +0x19f:  je     081c2f42 <+0x1a8>
081c2f3b +0x1a1:  cmp    $0x3,%eax
081c2f3e +0x1a4:  je     081c2f49 <+0x1af>
081c2f40 +0x1a6:  jmp    081c2f5d <+0x1c3>
081c2f42 +0x1a8:  mov    $0x17,%eax
081c2f47 +0x1ad:  jmp    081c2f8d <+0x1f3>
081c2f49 +0x1af:  mov    -0x20(%ebp),%eax
081c2f4c +0x1b2:  movzwl 0x12(%eax),%eax
081c2f50 +0x1b6:  cmp    $0x9,%ax
081c2f54 +0x1ba:  jg     081c2f5d <+0x1c3>
081c2f56 +0x1bc:  mov    $0x17,%eax
081c2f5b +0x1c1:  jmp    081c2f8d <+0x1f3>
081c2f5d +0x1c3:  mov    -0x20(%ebp),%eax
081c2f60 +0x1c6:  movzbl 0x11(%eax),%eax
081c2f64 +0x1ca:  test   %al,%al
081c2f66 +0x1cc:  jne    081c2f88 <+0x1ee>
081c2f68 +0x1ce:  mov    -0x20(%ebp),%eax
081c2f6b +0x1d1:  movzwl 0x12(%eax),%eax
081c2f6f +0x1d5:  test   %ax,%ax
081c2f72 +0x1d8:  jne    081c2f88 <+0x1ee>
081c2f74 +0x1da:  mov    -0x20(%ebp),%eax
081c2f77 +0x1dd:  mov    0x14(%eax),%eax
081c2f7a +0x1e0:  cmp    $0x3e8,%eax
081c2f7f +0x1e5:  jbe    081c2f88 <+0x1ee>
081c2f81 +0x1e7:  mov    $0x46,%eax
081c2f86 +0x1ec:  jmp    081c2f8d <+0x1f3>
081c2f88 +0x1ee:  mov    $0x0,%eax
081c2f8d +0x1f3:  add    $0x34,%esp
081c2f90 +0x1f6:  pop    %ebx
081c2f91 +0x1f7:  pop    %ebp
081c2f92 +0x1f8:  ret
081c2f93 +0x1f9:  nop
```

## 反编译 C

```c
// DisPatcher_DropItem::check_error @ 0x81c2d9a

/* DisPatcher_DropItem::check_error(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
DisPatcher_DropItem::check_error
          (DisPatcher_DropItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  short sVar1;
  char cVar2;
  int iVar3;
  GameWorld *this_00;
  ServiceRestrictManager *pSVar4;
  
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    iVar3 = -1;
  }
  else if (*(int *)(param_2 + 0x14) < 1) {
    iVar3 = -1;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 == 10) {
      iVar3 = 0x13;
    }
    else {
      iVar3 = CUser::GetParty(param_1);
      if (((iVar3 == 0) || (*(int *)(iVar3 + 0xcac) == 0)) ||
         (*(char *)(*(int *)(iVar3 + 0xcac) + 0x89f) == '\0')) {
        this_00 = (GameWorld *)G_GameWorld();
        cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
        if (cVar2 == '\0') {
          pSVar4 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
          cVar2 = ServiceRestrictManager::isRestricted(pSVar4,param_1,1,1);
          if (cVar2 == '\0') {
            if ((param_2[0x18] == (MSG_BASE)0x1) ||
               (iVar3 = CSecu_ProtectionField::Check
                                  (GlobalData::s_pSecuProtectionField,param_1,0x1e), iVar3 == 0)) {
              sVar1 = *(short *)(param_2 + 0x12);
              iVar3 = GetInvenTypeFromItemSpace((int)(char)param_2[0x11]);
              cVar2 = CUser::CheckItemLock(param_1,iVar3,(int)sVar1);
              if (cVar2 == '\0') {
                cVar2 = CUser::isHackUser(param_1);
                if (cVar2 == '\0') {
                  if (param_2[0x11] == (MSG_BASE)0x1) {
                    iVar3 = 0x17;
                  }
                  else if ((param_2[0x11] == (MSG_BASE)0x3) && (*(short *)(param_2 + 0x12) < 10)) {
                    iVar3 = 0x17;
                  }
                  else if (((param_2[0x11] == (MSG_BASE)0x0) && (*(short *)(param_2 + 0x12) == 0))
                          && (1000 < *(uint *)(param_2 + 0x14))) {
                    iVar3 = 0x46;
                  }
                  else {
                    iVar3 = 0;
                  }
                }
                else {
                  iVar3 = 0x13;
                }
              }
              else {
                iVar3 = 0xd5;
              }
            }
            else {
              *(undefined4 *)(param_3 + 0xc) = 1;
            }
          }
          else {
            *(undefined4 *)(param_3 + 0xc) = 1;
            iVar3 = 0xd1;
          }
        }
        else {
          iVar3 = 0x13;
        }
      }
      else {
        iVar3 = 0x13;
      }
    }
  }
  return iVar3;
}
```
