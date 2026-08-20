# dispatch_sig

`_ZN24Inter_LoadDimensionInout12dispatch_sigEP5CUserPci`

`Inter_LoadDimensionInout::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadDimensionInout` | `0x084d83d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d83d2  _ZN24Inter_LoadDimensionInout12dispatch_sigEP5CUserPci
#           Inter_LoadDimensionInout::dispatch_sig(CUser*, char*, int)
# range [0x084d83d2, 0x084d8607]
084d83d2 +0x000:  push   %ebp
084d83d3 +0x001:  mov    %esp,%ebp
084d83d5 +0x003:  push   %ebx
084d83d6 +0x004:  sub    $0x24,%esp
084d83d9 +0x007:  movb   $0x0,-0x16(%ebp)
084d83dd +0x00b:  movb   $0x0,-0x15(%ebp)
084d83e1 +0x00f:  mov    0xc(%ebp),%eax
084d83e4 +0x012:  mov    %eax,(%esp)
084d83e7 +0x015:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d83ec +0x01a:  test   %eax,%eax
084d83ee +0x01c:  sete   %al
084d83f1 +0x01f:  test   %al,%al
084d83f3 +0x021:  je     084d83ff <+0x2d>
084d83f5 +0x023:  mov    $0x3ef3,%eax
084d83fa +0x028:  jmp    084d8602 <+0x230>
084d83ff +0x02d:  mov    0x10(%ebp),%eax
084d8402 +0x030:  mov    %eax,-0x14(%ebp)
084d8405 +0x033:  mov    -0x14(%ebp),%eax
084d8408 +0x036:  mov    (%eax),%eax
084d840a +0x038:  mov    %eax,0x4(%esp)
084d840e +0x03c:  mov    0xc(%ebp),%eax
084d8411 +0x03f:  mov    %eax,(%esp)
084d8414 +0x042:  call   0864df12 <_ZNK5CUser14get_charac_idxEj>  ; CUser::get_charac_idx(unsigned int) const
084d8419 +0x047:  mov    %eax,-0x10(%ebp)
084d841c +0x04a:  cmpl   $0x0,-0x10(%ebp)
084d8420 +0x04e:  jns    084d842c <+0x5a>
084d8422 +0x050:  mov    $0x3ef9,%eax
084d8427 +0x055:  jmp    084d8602 <+0x230>
084d842c +0x05a:  mov    -0x10(%ebp),%eax
084d842f +0x05d:  mov    0xc(%ebp),%edx
084d8432 +0x060:  add    $0x796e8,%edx
084d8438 +0x066:  mov    %eax,0x4(%esp)
084d843c +0x06a:  mov    %edx,(%esp)
084d843f +0x06d:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084d8444 +0x072:  mov    (%eax),%edx
084d8446 +0x074:  mov    -0x14(%ebp),%eax
084d8449 +0x077:  mov    (%eax),%eax
084d844b +0x079:  cmp    %eax,%edx
084d844d +0x07b:  setne  %al
084d8450 +0x07e:  test   %al,%al
084d8452 +0x080:  je     084d845e <+0x8c>
084d8454 +0x082:  mov    $0x3efb,%eax
084d8459 +0x087:  jmp    084d8602 <+0x230>
084d845e +0x08c:  mov    -0x10(%ebp),%eax
084d8461 +0x08f:  mov    0xc(%ebp),%edx
084d8464 +0x092:  add    $0x796e8,%edx
084d846a +0x098:  mov    %eax,0x4(%esp)
084d846e +0x09c:  mov    %edx,(%esp)
084d8471 +0x09f:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084d8476 +0x0a4:  mov    -0x14(%ebp),%edx
084d8479 +0x0a7:  mov    (%edx),%edx
084d847b +0x0a9:  mov    %edx,(%eax)
084d847d +0x0ab:  movl   $0x0,-0xc(%ebp)
084d8484 +0x0b2:  jmp    084d84fb <+0x129>
084d8486 +0x0b4:  mov    -0x10(%ebp),%eax
084d8489 +0x0b7:  mov    0xc(%ebp),%edx
084d848c +0x0ba:  add    $0x796e8,%edx
084d8492 +0x0c0:  mov    %eax,0x4(%esp)
084d8496 +0x0c4:  mov    %edx,(%esp)
084d8499 +0x0c7:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084d849e +0x0cc:  mov    -0xc(%ebp),%edx
084d84a1 +0x0cf:  mov    -0xc(%ebp),%ecx
084d84a4 +0x0d2:  mov    -0x14(%ebp),%ebx
084d84a7 +0x0d5:  movzbl 0x4(%ebx,%ecx,1),%ecx
084d84ac +0x0da:  mov    %cl,0xeb9(%eax,%edx,1)
084d84b3 +0x0e1:  mov    -0x10(%ebp),%eax
084d84b6 +0x0e4:  mov    0xc(%ebp),%edx
084d84b9 +0x0e7:  add    $0x796e8,%edx
084d84bf +0x0ed:  mov    %eax,0x4(%esp)
084d84c3 +0x0f1:  mov    %edx,(%esp)
084d84c6 +0x0f4:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084d84cb +0x0f9:  mov    -0xc(%ebp),%edx
084d84ce +0x0fc:  movzbl 0xeb9(%eax,%edx,1),%ebx
084d84d6 +0x104:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084d84db +0x109:  mov    -0xc(%ebp),%edx
084d84de +0x10c:  mov    %edx,0x4(%esp)
084d84e2 +0x110:  mov    %eax,(%esp)
084d84e5 +0x113:  call   0822b612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcbc
084d84ea +0x118:  cmp    %al,%bl
084d84ec +0x11a:  setne  %al
084d84ef +0x11d:  test   %al,%al
084d84f1 +0x11f:  je     084d84f7 <+0x125>
084d84f3 +0x121:  movb   $0x1,-0x16(%ebp)
084d84f7 +0x125:  addl   $0x1,-0xc(%ebp)
084d84fb +0x129:  cmpl   $0x5,-0xc(%ebp)
084d84ff +0x12d:  setle  %al
084d8502 +0x130:  test   %al,%al
084d8504 +0x132:  jne    084d8486 <+0xb4>
084d8506 +0x134:  mov    -0x10(%ebp),%eax
084d8509 +0x137:  mov    0xc(%ebp),%edx
084d850c +0x13a:  add    $0x796e8,%edx
084d8512 +0x140:  mov    %eax,0x4(%esp)
084d8516 +0x144:  mov    %edx,(%esp)
084d8519 +0x147:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084d851e +0x14c:  mov    -0x14(%ebp),%edx
084d8521 +0x14f:  movzbl 0xc(%edx),%edx
084d8525 +0x153:  mov    %dl,0xec2(%eax)
084d852b +0x159:  mov    -0x10(%ebp),%eax
084d852e +0x15c:  mov    0xc(%ebp),%edx
084d8531 +0x15f:  add    $0x796e8,%edx
084d8537 +0x165:  mov    %eax,0x4(%esp)
084d853b +0x169:  mov    %edx,(%esp)
084d853e +0x16c:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084d8543 +0x171:  movzbl 0xec2(%eax),%ebx
084d854a +0x178:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084d854f +0x17d:  movl   $0x2,0x4(%esp)
084d8557 +0x185:  mov    %eax,(%esp)
084d855a +0x188:  call   0822b638 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xce2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xce2
084d855f +0x18d:  cmp    %al,%bl
084d8561 +0x18f:  setne  %al
084d8564 +0x192:  test   %al,%al
084d8566 +0x194:  je     084d856c <+0x19a>
084d8568 +0x196:  movb   $0x1,-0x15(%ebp)
084d856c +0x19a:  mov    -0x10(%ebp),%eax
084d856f +0x19d:  mov    0xc(%ebp),%edx
084d8572 +0x1a0:  add    $0x796e8,%edx
084d8578 +0x1a6:  mov    %eax,0x4(%esp)
084d857c +0x1aa:  mov    %edx,(%esp)
084d857f +0x1ad:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084d8584 +0x1b2:  movb   $0x0,0xeb8(%eax)
084d858b +0x1b9:  mov    -0x10(%ebp),%eax
084d858e +0x1bc:  mov    0xc(%ebp),%edx
084d8591 +0x1bf:  add    $0x796e8,%edx
084d8597 +0x1c5:  mov    %eax,0x4(%esp)
084d859b +0x1c9:  mov    %edx,(%esp)
084d859e +0x1cc:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084d85a3 +0x1d1:  movb   $0x0,0xebf(%eax)
084d85aa +0x1d8:  mov    0xc(%ebp),%eax
084d85ad +0x1db:  mov    %eax,(%esp)
084d85b0 +0x1de:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084d85b5 +0x1e3:  test   %eax,%eax
084d85b7 +0x1e5:  setne  %al
084d85ba +0x1e8:  test   %al,%al
084d85bc +0x1ea:  je     084d85fd <+0x22b>
084d85be +0x1ec:  mov    0xc(%ebp),%eax
084d85c1 +0x1ef:  mov    %eax,(%esp)
084d85c4 +0x1f2:  call   08162338 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x5a6>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x5a6
084d85c9 +0x1f7:  test   %al,%al
084d85cb +0x1f9:  je     084d85fd <+0x22b>
084d85cd +0x1fb:  mov    0xc(%ebp),%eax
084d85d0 +0x1fe:  mov    %eax,(%esp)
084d85d3 +0x201:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084d85d8 +0x206:  cmp    $0x3b,%eax
084d85db +0x209:  setg   %al
084d85de +0x20c:  test   %al,%al
084d85e0 +0x20e:  je     084d85fd <+0x22b>
084d85e2 +0x210:  movzbl -0x15(%ebp),%edx
084d85e6 +0x214:  movzbl -0x16(%ebp),%eax
084d85ea +0x218:  mov    %edx,0x8(%esp)
084d85ee +0x21c:  mov    %eax,0x4(%esp)
084d85f2 +0x220:  mov    0xc(%ebp),%eax
084d85f5 +0x223:  mov    %eax,(%esp)
084d85f8 +0x226:  call   08656c12 <_ZN5CUser20DimensionInoutUpdateEbb>  ; CUser::DimensionInoutUpdate(bool, bool)
084d85fd +0x22b:  mov    $0x0,%eax
084d8602 +0x230:  add    $0x24,%esp
084d8605 +0x233:  pop    %ebx
084d8606 +0x234:  pop    %ebp
084d8607 +0x235:  ret
```

## 反编译 C

```c
// Inter_LoadDimensionInout::dispatch_sig @ 0x84d83d2

/* Inter_LoadDimensionInout::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadDimensionInout::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  CDataManager *pCVar9;
  bool local_1a;
  int local_10;
  
  local_1a = false;
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 == 0) {
    uVar5 = 0x3ef3;
  }
  else {
    uVar6 = CUser::get_charac_idx((CUser *)param_2,*(uint *)param_3);
    if ((int)uVar6 < 0) {
      uVar5 = 0x3ef9;
    }
    else {
      piVar7 = (int *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                                ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                 (param_2 + 0x796e8),uVar6);
      if (*piVar7 == *(int *)param_3) {
        puVar8 = (undefined4 *)
                 std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                           ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8)
                            ,uVar6);
        *puVar8 = *(undefined4 *)param_3;
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                             (param_2 + 0x796e8),uVar6);
          *(undefined1 *)(iVar4 + 0xeb9 + local_10) = *(undefined1 *)(param_3 + 4 + local_10);
          iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                             (param_2 + 0x796e8),uVar6);
          cVar1 = *(char *)(iVar4 + 0xeb9 + local_10);
          pCVar9 = (CDataManager *)G_CDataManager();
          cVar2 = CDataManager::get_dimensionInout(pCVar9,local_10);
          if (cVar1 != cVar2) {
            local_1a = true;
          }
        }
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                           uVar6);
        *(undefined1 *)(iVar4 + 0xec2) = *(undefined1 *)(param_3 + 0xc);
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                           uVar6);
        cVar1 = *(char *)(iVar4 + 0xec2);
        pCVar9 = (CDataManager *)G_CDataManager();
        cVar2 = CDataManager::get_limit_inout_count(pCVar9,2);
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                           uVar6);
        *(undefined1 *)(iVar4 + 0xeb8) = 0;
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                           uVar6);
        *(undefined1 *)(iVar4 + 0xebf) = 0;
        iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
        if (((iVar4 != 0) &&
            (cVar3 = CUserCharacInfo::IsFirstTimeLogin((CUserCharacInfo *)param_2), cVar3 != '\0'))
           && (iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2), 0x3b < iVar4))
        {
          CUser::DimensionInoutUpdate((CUser *)param_2,local_1a,cVar1 != cVar2);
        }
        uVar5 = 0;
      }
      else {
        uVar5 = 0x3efb;
      }
    }
  }
  return uVar5;
}
```
