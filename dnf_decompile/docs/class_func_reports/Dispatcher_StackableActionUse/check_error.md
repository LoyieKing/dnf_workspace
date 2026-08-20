# check_error

`_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_StackableActionUse::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_StackableActionUse` | `0x0825e332` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825e332  _ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_StackableActionUse::check_error(CUser*, MSG_BASE&)
# range [0x0825e332, 0x0825e4eb]
0825e332 +0x000:  push   %ebp
0825e333 +0x001:  mov    %esp,%ebp
0825e335 +0x003:  push   %esi
0825e336 +0x004:  push   %ebx
0825e337 +0x005:  sub    $0x70,%esp
0825e33a +0x008:  cmpl   $0x0,0xc(%ebp)
0825e33e +0x00c:  je     0825e34f <+0x1d>
0825e340 +0x00e:  mov    0xc(%ebp),%eax
0825e343 +0x011:  mov    %eax,(%esp)
0825e346 +0x014:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0825e34b +0x019:  test   %eax,%eax
0825e34d +0x01b:  jne    0825e356 <+0x24>
0825e34f +0x01d:  mov    $0x1,%eax
0825e354 +0x022:  jmp    0825e35b <+0x29>
0825e356 +0x024:  mov    $0x0,%eax
0825e35b +0x029:  test   %al,%al
0825e35d +0x02b:  je     0825e369 <+0x37>
0825e35f +0x02d:  mov    $0xffffffff,%eax
0825e364 +0x032:  jmp    0825e4e2 <+0x1b0>
0825e369 +0x037:  mov    0x10(%ebp),%eax
0825e36c +0x03a:  mov    %eax,-0x14(%ebp)
0825e36f +0x03d:  mov    0xc(%ebp),%eax
0825e372 +0x040:  mov    %eax,(%esp)
0825e375 +0x043:  call   0864e0b6 <_ZNK5CUser25getCurCharacInvenCheckSumEv>  ; CUser::getCurCharacInvenCheckSum() const
0825e37a +0x048:  mov    -0x14(%ebp),%edx
0825e37d +0x04b:  mov    0x10(%edx),%edx
0825e380 +0x04e:  cmp    %edx,%eax
0825e382 +0x050:  setne  %al
0825e385 +0x053:  test   %al,%al
0825e387 +0x055:  je     0825e3c3 <+0x91>
0825e389 +0x057:  mov    0xc(%ebp),%eax
0825e38c +0x05a:  mov    %eax,(%esp)
0825e38f +0x05d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0825e394 +0x062:  movl   $0x0,0x14(%esp)
0825e39c +0x06a:  movl   $0x0,0x10(%esp)
0825e3a4 +0x072:  movl   $0x1,0xc(%esp)
0825e3ac +0x07a:  movl   $0x25b,0x8(%esp)
0825e3b4 +0x082:  mov    0xc(%ebp),%edx
0825e3b7 +0x085:  mov    %edx,0x4(%esp)
0825e3bb +0x089:  mov    %eax,(%esp)
0825e3be +0x08c:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0825e3c3 +0x091:  mov    0xc(%ebp),%eax
0825e3c6 +0x094:  mov    %eax,(%esp)
0825e3c9 +0x097:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0825e3ce +0x09c:  test   %al,%al
0825e3d0 +0x09e:  je     0825e3dc <+0xaa>
0825e3d2 +0x0a0:  mov    $0xd8,%eax
0825e3d7 +0x0a5:  jmp    0825e4e2 <+0x1b0>
0825e3dc +0x0aa:  mov    -0x14(%ebp),%eax
0825e3df +0x0ad:  movzbl 0x14(%eax),%eax
0825e3e3 +0x0b1:  test   %al,%al
0825e3e5 +0x0b3:  jne    0825e3f1 <+0xbf>
0825e3e7 +0x0b5:  mov    $0x17,%eax
0825e3ec +0x0ba:  jmp    0825e4e2 <+0x1b0>
0825e3f1 +0x0bf:  mov    -0x14(%ebp),%eax
0825e3f4 +0x0c2:  movzwl 0xd(%eax),%eax
0825e3f8 +0x0c6:  movswl %ax,%ebx
0825e3fb +0x0c9:  mov    0xc(%ebp),%eax
0825e3fe +0x0cc:  mov    %eax,(%esp)
0825e401 +0x0cf:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0825e406 +0x0d4:  lea    -0x51(%ebp),%edx
0825e409 +0x0d7:  mov    %ebx,0xc(%esp)
0825e40d +0x0db:  movl   $0x1,0x8(%esp)
0825e415 +0x0e3:  mov    %eax,0x4(%esp)
0825e419 +0x0e7:  mov    %edx,(%esp)
0825e41c +0x0ea:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0825e421 +0x0ef:  sub    $0x4,%esp
0825e424 +0x0f2:  mov    -0x4f(%ebp),%eax
0825e427 +0x0f5:  mov    %eax,%ebx
0825e429 +0x0f7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0825e42e +0x0fc:  mov    %ebx,0x4(%esp)
0825e432 +0x100:  mov    %eax,(%esp)
0825e435 +0x103:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0825e43a +0x108:  mov    %eax,-0x10(%ebp)
0825e43d +0x10b:  cmpl   $0x0,-0x10(%ebp)
0825e441 +0x10f:  jne    0825e44d <+0x11b>
0825e443 +0x111:  mov    $0x11,%eax
0825e448 +0x116:  jmp    0825e4e2 <+0x1b0>
0825e44d +0x11b:  mov    -0x14(%ebp),%eax
0825e450 +0x11e:  movzbl 0x14(%eax),%eax
0825e454 +0x122:  movsbl %al,%eax
0825e457 +0x125:  mov    -0x10(%ebp),%edx
0825e45a +0x128:  mov    %edx,0x8(%esp)
0825e45e +0x12c:  mov    %eax,0x4(%esp)
0825e462 +0x130:  mov    0xc(%ebp),%eax
0825e465 +0x133:  mov    %eax,(%esp)
0825e468 +0x136:  call   0868f60e <_ZN5CUser26verifyStackableItemProcessEN15StackableAction4TypeEPK5CItem>  ; CUser::verifyStackableItemProcess(StackableAction::Type, CItem const*)
0825e46d +0x13b:  xor    $0x1,%eax
0825e470 +0x13e:  test   %al,%al
0825e472 +0x140:  je     0825e47b <+0x149>
0825e474 +0x142:  mov    $0x17,%eax
0825e479 +0x147:  jmp    0825e4e2 <+0x1b0>
0825e47b +0x149:  mov    -0x4f(%ebp),%eax
0825e47e +0x14c:  mov    %eax,0x4(%esp)
0825e482 +0x150:  mov    0xc(%ebp),%eax
0825e485 +0x153:  mov    %eax,(%esp)
0825e488 +0x156:  call   0865e994 <_ZNK5CUser17CheckCoolTimeItemEm>  ; CUser::CheckCoolTimeItem(unsigned long) const
0825e48d +0x15b:  test   %al,%al
0825e48f +0x15d:  je     0825e498 <+0x166>
0825e491 +0x15f:  mov    $0x13,%eax
0825e496 +0x164:  jmp    0825e4e2 <+0x1b0>
0825e498 +0x166:  mov    -0x14(%ebp),%eax
0825e49b +0x169:  movzbl 0xf(%eax),%eax
0825e49f +0x16d:  movsbl %al,%esi
0825e4a2 +0x170:  mov    -0x14(%ebp),%eax
0825e4a5 +0x173:  movzwl 0xd(%eax),%eax
0825e4a9 +0x177:  movswl %ax,%ebx
0825e4ac +0x17a:  mov    0xc(%ebp),%eax
0825e4af +0x17d:  mov    %eax,(%esp)
0825e4b2 +0x180:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
0825e4b7 +0x185:  mov    %esi,0xc(%esp)
0825e4bb +0x189:  movl   $0x1,0x8(%esp)
0825e4c3 +0x191:  mov    %ebx,0x4(%esp)
0825e4c7 +0x195:  mov    %eax,(%esp)
0825e4ca +0x198:  call   084fffba <_ZNK10CInventory12try_use_itemEiii>  ; CInventory::try_use_item(int, int, int) const
0825e4cf +0x19d:  mov    %eax,-0xc(%ebp)
0825e4d2 +0x1a0:  cmpl   $0x0,-0xc(%ebp)
0825e4d6 +0x1a4:  je     0825e4dd <+0x1ab>
0825e4d8 +0x1a6:  mov    -0xc(%ebp),%eax
0825e4db +0x1a9:  jmp    0825e4e2 <+0x1b0>
0825e4dd +0x1ab:  mov    $0x0,%eax
0825e4e2 +0x1b0:  lea    -0x8(%ebp),%esp
0825e4e5 +0x1b3:  add    $0x0,%esp
0825e4e8 +0x1b6:  pop    %ebx
0825e4e9 +0x1b7:  pop    %esi
0825e4ea +0x1b8:  pop    %ebp
0825e4eb +0x1b9:  ret
```

## 反编译 C

```c
// Dispatcher_StackableActionUse::check_error @ 0x825e332

/* Dispatcher_StackableActionUse::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_StackableActionUse::check_error
          (Dispatcher_StackableActionUse *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  short sVar2;
  bool bVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  CHackAnalyzer *pCVar7;
  CDataManager *this_00;
  CInventory *this_01;
  int iVar8;
  undefined1 local_55 [2];
  ulong local_53;
  MSG_BASE *local_18;
  int local_14;
  
  if ((param_1 == (CUser *)0x0) ||
     (iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar6 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    iVar6 = -1;
  }
  else {
    local_18 = param_2;
    iVar6 = CUser::getCurCharacInvenCheckSum(param_1);
    if (iVar6 != *(int *)(local_18 + 0x10)) {
      pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_1,0x25b,1,0,0);
    }
    cVar5 = CUser::CheckInTrade(param_1);
    if (cVar5 == '\0') {
      if (local_18[0x14] == (MSG_BASE)0x0) {
        iVar6 = 0x17;
      }
      else {
        iVar8 = (int)*(short *)(local_18 + 0xd);
        iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_55,iVar6);
        uVar4 = local_53;
        this_00 = (CDataManager *)G_CDataManager();
        local_14 = CDataManager::find_item(this_00,uVar4);
        if (local_14 == 0) {
          iVar6 = 0x11;
        }
        else {
          cVar5 = CUser::verifyStackableItemProcess
                            (param_1,(int)(char)local_18[0x14],local_14,iVar8);
          if (cVar5 == '\x01') {
            cVar5 = CUser::CheckCoolTimeItem(param_1,local_53);
            if (cVar5 == '\0') {
              MVar1 = local_18[0xf];
              sVar2 = *(short *)(local_18 + 0xd);
              this_01 = (CInventory *)
                        CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
              iVar6 = CInventory::try_use_item(this_01,(int)sVar2,1,(int)(char)MVar1);
              if (iVar6 == 0) {
                iVar6 = 0;
              }
            }
            else {
              iVar6 = 0x13;
            }
          }
          else {
            iVar6 = 0x17;
          }
        }
      }
    }
    else {
      iVar6 = 0xd8;
    }
  }
  return iVar6;
}
```
