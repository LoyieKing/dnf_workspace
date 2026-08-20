# process

`_ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_RequestIngameAdvertisement::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestIngameAdvertisement` | `0x081e43a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e43a2  _ZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_RequestIngameAdvertisement::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e43a2, 0x081e4661]
081e43a2 +0x000:  push   %ebp
081e43a3 +0x001:  mov    %esp,%ebp
081e43a5 +0x003:  push   %edi
081e43a6 +0x004:  push   %esi
081e43a7 +0x005:  push   %ebx
081e43a8 +0x006:  sub    $0x3c,%esp
081e43ab +0x009:  mov    0x14(%ebp),%eax
081e43ae +0x00c:  mov    %eax,-0x20(%ebp)
081e43b1 +0x00f:  mov    0x10(%ebp),%eax
081e43b4 +0x012:  mov    %eax,0x8(%esp)
081e43b8 +0x016:  mov    0xc(%ebp),%eax
081e43bb +0x019:  mov    %eax,0x4(%esp)
081e43bf +0x01d:  mov    0x8(%ebp),%eax
081e43c2 +0x020:  mov    %eax,(%esp)
081e43c5 +0x023:  call   081e4662 <_ZN37Dispatcher_RequestIngameAdvertisement11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_RequestIngameAdvertisement::check_error(CUser*, MSG_BASE&)
081e43ca +0x028:  mov    -0x20(%ebp),%edx
081e43cd +0x02b:  mov    %eax,0x640(%edx)
081e43d3 +0x031:  mov    -0x20(%ebp),%eax
081e43d6 +0x034:  mov    0x640(%eax),%eax
081e43dc +0x03a:  test   %eax,%eax
081e43de +0x03c:  jle    081e43ea <+0x48>
081e43e0 +0x03e:  mov    $0x0,%eax
081e43e5 +0x043:  jmp    081e4659 <+0x2b7>
081e43ea +0x048:  mov    -0x20(%ebp),%eax
081e43ed +0x04b:  mov    0x640(%eax),%eax
081e43f3 +0x051:  test   %eax,%eax
081e43f5 +0x053:  jns    081e4425 <+0x83>
081e43f7 +0x055:  mov    -0x20(%ebp),%eax
081e43fa +0x058:  mov    0x640(%eax),%eax
081e4400 +0x05e:  movl   $0x0,0xc(%esp)
081e4408 +0x066:  mov    %eax,0x8(%esp)
081e440c +0x06a:  movl   $&_ZZN37Dispatcher_RequestIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e4414 +0x072:  movl   $0x5c20,(%esp)
081e441b +0x079:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e4420 +0x07e:  jmp    081e4659 <+0x2b7>
081e4425 +0x083:  mov    0x10(%ebp),%eax
081e4428 +0x086:  mov    %eax,-0x1c(%ebp)
081e442b +0x089:  mov    -0x1c(%ebp),%eax
081e442e +0x08c:  movzwl 0xd(%eax),%edx
081e4432 +0x090:  mov    -0x20(%ebp),%eax
081e4435 +0x093:  mov    %dx,0x644(%eax)
081e443c +0x09a:  mov    -0x1c(%ebp),%eax
081e443f +0x09d:  movzwl 0xd(%eax),%eax
081e4443 +0x0a1:  movswl %ax,%ebx
081e4446 +0x0a4:  mov    -0x20(%ebp),%eax
081e4449 +0x0a7:  lea    0x4(%eax),%esi
081e444c +0x0aa:  call   080fc9e9 <_Z23InGameADManagerInstancev>  ; InGameADManagerInstance()
081e4451 +0x0af:  mov    %ebx,0xc(%esp)
081e4455 +0x0b3:  mov    %esi,0x8(%esp)
081e4459 +0x0b7:  mov    0xc(%ebp),%edx
081e445c +0x0ba:  mov    %edx,0x4(%esp)
081e4460 +0x0be:  mov    %eax,(%esp)
081e4463 +0x0c1:  call   080fcfa8 <_ZN27CInGameAdvertisementManager33CheckIngameAdvertisementConditionEP5CUserR20stNotifyIngameADInfoi>  ; CInGameAdvertisementManager::CheckIngameAdvertisementCondition(CUser*, stNotifyIngameADInfo&, int)
081e4468 +0x0c6:  xor    $0x1,%eax
081e446b +0x0c9:  test   %al,%al
081e446d +0x0cb:  je     081e4481 <+0xdf>
081e446f +0x0cd:  mov    -0x20(%ebp),%eax
081e4472 +0x0d0:  movl   $0x4,0x640(%eax)
081e447c +0x0da:  jmp    081e4654 <+0x2b2>
081e4481 +0x0df:  mov    -0x20(%ebp),%eax
081e4484 +0x0e2:  movzbl 0x33b(%eax),%eax
081e448b +0x0e9:  cmp    $0x4,%al
081e448d +0x0eb:  jne    081e4601 <+0x25f>
081e4493 +0x0f1:  mov    0xc(%ebp),%eax
081e4496 +0x0f4:  mov    %eax,(%esp)
081e4499 +0x0f7:  call   0822fcf2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x539c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x539c
081e449e +0x0fc:  cmp    $0x2,%eax
081e44a1 +0x0ff:  setg   %al
081e44a4 +0x102:  test   %al,%al
081e44a6 +0x104:  je     081e4601 <+0x25f>
081e44ac +0x10a:  mov    -0x20(%ebp),%eax
081e44af +0x10d:  movzbl 0x33d(%eax),%eax
081e44b6 +0x114:  test   %al,%al
081e44b8 +0x116:  je     081e4552 <+0x1b0>
081e44be +0x11c:  mov    -0x20(%ebp),%eax
081e44c1 +0x11f:  mov    0x238(%eax),%eax
081e44c7 +0x125:  test   %eax,%eax
081e44c9 +0x127:  je     081e4552 <+0x1b0>
081e44cf +0x12d:  mov    -0x20(%ebp),%eax
081e44d2 +0x130:  mov    0x238(%eax),%eax
081e44d8 +0x136:  movl   $0x1,0xc(%esp)
081e44e0 +0x13e:  mov    %eax,0x8(%esp)
081e44e4 +0x142:  mov    0xc(%ebp),%eax
081e44e7 +0x145:  mov    %eax,0x4(%esp)
081e44eb +0x149:  mov    0x8(%ebp),%eax
081e44ee +0x14c:  mov    %eax,(%esp)
081e44f1 +0x14f:  call   081e4b6c <_ZN37Dispatcher_RequestIngameAdvertisement24sendRewardItemSystemMailEP5CUsermi>  ; Dispatcher_RequestIngameAdvertisement::sendRewardItemSystemMail(CUser*, unsigned long, int)
081e44f6 +0x154:  mov    -0x20(%ebp),%eax
081e44f9 +0x157:  movzbl 0x33c(%eax),%eax
081e4500 +0x15e:  test   %al,%al
081e4502 +0x160:  je     081e45ed <+0x24b>
081e4508 +0x166:  mov    -0x20(%ebp),%eax
081e450b +0x169:  mov    0x4(%eax),%edi
081e450e +0x16c:  mov    -0x20(%ebp),%eax
081e4511 +0x16f:  movzbl 0x33b(%eax),%eax
081e4518 +0x176:  movsbl %al,%esi
081e451b +0x179:  mov    -0x1c(%ebp),%eax
081e451e +0x17c:  movzwl 0xd(%eax),%eax
081e4522 +0x180:  movswl %ax,%ebx
081e4525 +0x183:  call   080fc9e9 <_Z23InGameADManagerInstancev>  ; InGameADManagerInstance()
081e452a +0x188:  mov    %edi,0x14(%esp)
081e452e +0x18c:  mov    %esi,0x10(%esp)
081e4532 +0x190:  mov    %ebx,0xc(%esp)
081e4536 +0x194:  movl   $0x3,0x8(%esp)
081e453e +0x19c:  mov    0xc(%ebp),%edx
081e4541 +0x19f:  mov    %edx,0x4(%esp)
081e4545 +0x1a3:  mov    %eax,(%esp)
081e4548 +0x1a6:  call   080fda56 <_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj>  ; CInGameAdvertisementManager::WriteLog(CUser*, char, short, char, unsigned int)
081e454d +0x1ab:  jmp    081e45ee <+0x24c>
081e4552 +0x1b0:  mov    -0x20(%ebp),%eax
081e4555 +0x1b3:  movzbl 0x33d(%eax),%eax
081e455c +0x1ba:  test   %al,%al
081e455e +0x1bc:  jne    081e45ee <+0x24c>
081e4564 +0x1c2:  mov    -0x20(%ebp),%eax
081e4567 +0x1c5:  mov    0x53c(%eax),%eax
081e456d +0x1cb:  test   %eax,%eax
081e456f +0x1cd:  je     081e45ee <+0x24c>
081e4571 +0x1cf:  mov    -0x20(%ebp),%eax
081e4574 +0x1d2:  mov    0x53c(%eax),%eax
081e457a +0x1d8:  movl   $0x1,0xc(%esp)
081e4582 +0x1e0:  mov    %eax,0x8(%esp)
081e4586 +0x1e4:  mov    0xc(%ebp),%eax
081e4589 +0x1e7:  mov    %eax,0x4(%esp)
081e458d +0x1eb:  mov    0x8(%ebp),%eax
081e4590 +0x1ee:  mov    %eax,(%esp)
081e4593 +0x1f1:  call   081e4b6c <_ZN37Dispatcher_RequestIngameAdvertisement24sendRewardItemSystemMailEP5CUsermi>  ; Dispatcher_RequestIngameAdvertisement::sendRewardItemSystemMail(CUser*, unsigned long, int)
081e4598 +0x1f6:  mov    -0x20(%ebp),%eax
081e459b +0x1f9:  movzbl 0x33c(%eax),%eax
081e45a2 +0x200:  test   %al,%al
081e45a4 +0x202:  je     081e45ee <+0x24c>
081e45a6 +0x204:  mov    -0x20(%ebp),%eax
081e45a9 +0x207:  mov    0x4(%eax),%edi
081e45ac +0x20a:  mov    -0x20(%ebp),%eax
081e45af +0x20d:  movzbl 0x33b(%eax),%eax
081e45b6 +0x214:  movsbl %al,%esi
081e45b9 +0x217:  mov    -0x1c(%ebp),%eax
081e45bc +0x21a:  movzwl 0xd(%eax),%eax
081e45c0 +0x21e:  movswl %ax,%ebx
081e45c3 +0x221:  call   080fc9e9 <_Z23InGameADManagerInstancev>  ; InGameADManagerInstance()
081e45c8 +0x226:  mov    %edi,0x14(%esp)
081e45cc +0x22a:  mov    %esi,0x10(%esp)
081e45d0 +0x22e:  mov    %ebx,0xc(%esp)
081e45d4 +0x232:  movl   $0x3,0x8(%esp)
081e45dc +0x23a:  mov    0xc(%ebp),%edx
081e45df +0x23d:  mov    %edx,0x4(%esp)
081e45e3 +0x241:  mov    %eax,(%esp)
081e45e6 +0x244:  call   080fda56 <_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj>  ; CInGameAdvertisementManager::WriteLog(CUser*, char, short, char, unsigned int)
081e45eb +0x249:  jmp    081e45ee <+0x24c>
081e45ed +0x24b:  nop
081e45ee +0x24c:  movl   $0x0,0x4(%esp)
081e45f6 +0x254:  mov    0xc(%ebp),%eax
081e45f9 +0x257:  mov    %eax,(%esp)
081e45fc +0x25a:  call   080fdf44 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x270>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x270
081e4601 +0x25f:  mov    -0x20(%ebp),%eax
081e4604 +0x262:  movzbl 0x33c(%eax),%eax
081e460b +0x269:  test   %al,%al
081e460d +0x26b:  je     081e4654 <+0x2b2>
081e460f +0x26d:  mov    -0x20(%ebp),%eax
081e4612 +0x270:  mov    0x4(%eax),%edi
081e4615 +0x273:  mov    -0x20(%ebp),%eax
081e4618 +0x276:  movzbl 0x33b(%eax),%eax
081e461f +0x27d:  movsbl %al,%esi
081e4622 +0x280:  mov    -0x1c(%ebp),%eax
081e4625 +0x283:  movzwl 0xd(%eax),%eax
081e4629 +0x287:  movswl %ax,%ebx
081e462c +0x28a:  call   080fc9e9 <_Z23InGameADManagerInstancev>  ; InGameADManagerInstance()
081e4631 +0x28f:  mov    %edi,0x14(%esp)
081e4635 +0x293:  mov    %esi,0x10(%esp)
081e4639 +0x297:  mov    %ebx,0xc(%esp)
081e463d +0x29b:  movl   $0x0,0x8(%esp)
081e4645 +0x2a3:  mov    0xc(%ebp),%edx
081e4648 +0x2a6:  mov    %edx,0x4(%esp)
081e464c +0x2aa:  mov    %eax,(%esp)
081e464f +0x2ad:  call   080fda56 <_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj>  ; CInGameAdvertisementManager::WriteLog(CUser*, char, short, char, unsigned int)
081e4654 +0x2b2:  mov    $0x0,%eax
081e4659 +0x2b7:  add    $0x3c,%esp
081e465c +0x2ba:  pop    %ebx
081e465d +0x2bb:  pop    %esi
081e465e +0x2bc:  pop    %edi
081e465f +0x2bd:  pop    %ebp
081e4660 +0x2be:  ret
081e4661 +0x2bf:  nop
```

## 反编译 C

```c
// Dispatcher_RequestIngameAdvertisement::process @ 0x81e43a2

/* Dispatcher_RequestIngameAdvertisement::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RequestIngameAdvertisement::process
          (Dispatcher_RequestIngameAdvertisement *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  ParamBase PVar1;
  short sVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  CInGameAdvertisementManager *pCVar6;
  int iVar7;
  
  uVar5 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 0x640) = uVar5;
  if (*(int *)(param_3 + 0x640) < 1) {
    if (*(int *)(param_3 + 0x640) < 0) {
      uVar5 = LineFunc(0x5c20,
                       "virtual int Dispatcher_RequestIngameAdvertisement::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 0x640),0);
    }
    else {
      *(undefined2 *)(param_3 + 0x644) = *(undefined2 *)(param_2 + 0xd);
      sVar2 = *(short *)(param_2 + 0xd);
      pCVar6 = (CInGameAdvertisementManager *)InGameADManagerInstance();
      cVar4 = CInGameAdvertisementManager::CheckIngameAdvertisementCondition
                        (pCVar6,param_1,(stNotifyIngameADInfo *)(param_3 + 4),(int)sVar2);
      if (cVar4 == '\x01') {
        if (param_3[0x33b] == (ParamBase)0x4) {
          iVar7 = CUser::get_multiboxLotteryItemFailCnt(param_1);
          if (2 < iVar7) {
            if ((param_3[0x33d] == (ParamBase)0x0) || (*(int *)(param_3 + 0x238) == 0)) {
              if ((param_3[0x33d] == (ParamBase)0x0) && (*(int *)(param_3 + 0x53c) != 0)) {
                sendRewardItemSystemMail(this,param_1,*(ulong *)(param_3 + 0x53c),1);
                if (param_3[0x33c] != (ParamBase)0x0) {
                  uVar3 = *(uint *)(param_3 + 4);
                  PVar1 = param_3[0x33b];
                  sVar2 = *(short *)(param_2 + 0xd);
                  pCVar6 = (CInGameAdvertisementManager *)InGameADManagerInstance();
                  CInGameAdvertisementManager::WriteLog
                            (pCVar6,param_1,'\x03',sVar2,(char)PVar1,uVar3);
                }
              }
            }
            else {
              sendRewardItemSystemMail(this,param_1,*(ulong *)(param_3 + 0x238),1);
              if (param_3[0x33c] != (ParamBase)0x0) {
                uVar3 = *(uint *)(param_3 + 4);
                PVar1 = param_3[0x33b];
                sVar2 = *(short *)(param_2 + 0xd);
                pCVar6 = (CInGameAdvertisementManager *)InGameADManagerInstance();
                CInGameAdvertisementManager::WriteLog(pCVar6,param_1,'\x03',sVar2,(char)PVar1,uVar3)
                ;
              }
            }
            CUser::set_multiboxLotteryItemFailCnt(param_1,0);
          }
        }
        if (param_3[0x33c] != (ParamBase)0x0) {
          uVar3 = *(uint *)(param_3 + 4);
          PVar1 = param_3[0x33b];
          sVar2 = *(short *)(param_2 + 0xd);
          pCVar6 = (CInGameAdvertisementManager *)InGameADManagerInstance();
          CInGameAdvertisementManager::WriteLog(pCVar6,param_1,'\0',sVar2,(char)PVar1,uVar3);
        }
      }
      else {
        *(undefined4 *)(param_3 + 0x640) = 4;
      }
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
