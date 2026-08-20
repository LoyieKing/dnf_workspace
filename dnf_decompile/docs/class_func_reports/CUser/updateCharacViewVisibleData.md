# updateCharacViewVisibleData

`_ZN5CUser27updateCharacViewVisibleDataERK12_Charac_infoR17CHARAC_LOGIN_DATA`

`CUser::updateCharacViewVisibleData(_Charac_info const&, CHARAC_LOGIN_DATA&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08651322` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08651322  _ZN5CUser27updateCharacViewVisibleDataERK12_Charac_infoR17CHARAC_LOGIN_DATA
#           CUser::updateCharacViewVisibleData(_Charac_info const&, CHARAC_LOGIN_DATA&)
# range [0x08651322, 0x08651627]
08651322 +0x000:  push   %ebp
08651323 +0x001:  mov    %esp,%ebp
08651325 +0x003:  push   %ebx
08651326 +0x004:  sub    $0x34,%esp
08651329 +0x007:  mov    0x10(%ebp),%eax
0865132c +0x00a:  add    $0x28,%eax
0865132f +0x00d:  movl   $0x60,0x8(%esp)
08651337 +0x015:  movl   $0x0,0x4(%esp)
0865133f +0x01d:  mov    %eax,(%esp)
08651342 +0x020:  call   0807dcc0 <_init+0x5b8>
08651347 +0x025:  mov    0x8(%ebp),%eax
0865134a +0x028:  mov    %eax,(%esp)
0865134d +0x02b:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08651352 +0x030:  test   %eax,%eax
08651354 +0x032:  je     08651373 <+0x51>
08651356 +0x034:  mov    0x8(%ebp),%eax
08651359 +0x037:  mov    %eax,(%esp)
0865135c +0x03a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08651361 +0x03f:  mov    (%eax),%edx
08651363 +0x041:  mov    0xc(%ebp),%eax
08651366 +0x044:  mov    (%eax),%eax
08651368 +0x046:  cmp    %eax,%edx
0865136a +0x048:  jne    08651373 <+0x51>
0865136c +0x04a:  mov    $0x1,%eax
08651371 +0x04f:  jmp    08651378 <+0x56>
08651373 +0x051:  mov    $0x0,%eax
08651378 +0x056:  test   %al,%al
0865137a +0x058:  je     0865159d <+0x27b>
08651380 +0x05e:  mov    0x8(%ebp),%eax
08651383 +0x061:  mov    %eax,(%esp)
08651386 +0x064:  call   08696822 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3077>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3077
0865138b +0x069:  mov    %eax,%edx
0865138d +0x06b:  mov    0x10(%ebp),%eax
08651390 +0x06e:  mov    %dl,0x22(%eax)
08651393 +0x071:  movl   $0x0,-0x1c(%ebp)
0865139a +0x078:  jmp    0865147a <+0x158>
0865139f +0x07d:  mov    -0x1c(%ebp),%eax
086513a2 +0x080:  imul   $0x3d,%eax,%eax
086513a5 +0x083:  add    $0xe0,%eax
086513aa +0x088:  add    0xc(%ebp),%eax
086513ad +0x08b:  add    $0x16,%eax
086513b0 +0x08e:  mov    %eax,-0x18(%ebp)
086513b3 +0x091:  mov    -0x18(%ebp),%eax
086513b6 +0x094:  mov    0x2(%eax),%eax
086513b9 +0x097:  test   %eax,%eax
086513bb +0x099:  je     08651476 <+0x154>
086513c1 +0x09f:  mov    -0x18(%ebp),%eax
086513c4 +0x0a2:  mov    0x7(%eax),%ebx
086513c7 +0x0a5:  mov    0xc(%ebp),%eax
086513ca +0x0a8:  add    $0xda,%eax
086513cf +0x0ad:  mov    %eax,(%esp)
086513d2 +0x0b0:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
086513d7 +0x0b5:  mov    %ebx,0x4(%esp)
086513db +0x0b9:  mov    %eax,(%esp)
086513de +0x0bc:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
086513e3 +0x0c1:  mov    %eax,-0x14(%ebp)
086513e6 +0x0c4:  cmpl   $0x0,-0x14(%ebp)
086513ea +0x0c8:  je     08651476 <+0x154>
086513f0 +0x0ce:  mov    0xc(%ebp),%eax
086513f3 +0x0d1:  lea    0xda(%eax),%edx
086513f9 +0x0d7:  mov    -0x1c(%ebp),%eax
086513fc +0x0da:  mov    %eax,0x4(%esp)
08651400 +0x0de:  mov    %edx,(%esp)
08651403 +0x0e1:  call   0850d374 <_GLOBAL__I_g_emptySlot+0x2a9>  ; global constructors keyed to g_emptySlot+0x2a9
08651408 +0x0e6:  test   %eax,%eax
0865140a +0x0e8:  setne  %al
0865140d +0x0eb:  test   %al,%al
0865140f +0x0ed:  je     08651438 <+0x116>
08651411 +0x0ef:  mov    -0x1c(%ebp),%ebx
08651414 +0x0f2:  mov    0xc(%ebp),%eax
08651417 +0x0f5:  lea    0xda(%eax),%edx
0865141d +0x0fb:  mov    -0x1c(%ebp),%eax
08651420 +0x0fe:  mov    %eax,0x4(%esp)
08651424 +0x102:  mov    %edx,(%esp)
08651427 +0x105:  call   0850d374 <_GLOBAL__I_g_emptySlot+0x2a9>  ; global constructors keyed to g_emptySlot+0x2a9
0865142c +0x10a:  mov    0x10(%ebp),%edx
0865142f +0x10d:  lea    0x4(%ebx),%ecx
08651432 +0x110:  mov    %eax,0x8(%edx,%ecx,8)
08651436 +0x114:  jmp    0865144d <+0x12b>
08651438 +0x116:  mov    -0x1c(%ebp),%ecx
0865143b +0x119:  mov    -0x18(%ebp),%eax
0865143e +0x11c:  mov    0x2(%eax),%eax
08651441 +0x11f:  mov    %eax,%edx
08651443 +0x121:  mov    0x10(%ebp),%eax
08651446 +0x124:  add    $0x4,%ecx
08651449 +0x127:  mov    %edx,0x8(%eax,%ecx,8)
0865144d +0x12b:  mov    -0x1c(%ebp),%ecx
08651450 +0x12e:  mov    -0x14(%ebp),%eax
08651453 +0x131:  movzwl (%eax),%edx
08651456 +0x134:  mov    0x10(%ebp),%eax
08651459 +0x137:  add    $0x4,%ecx
0865145c +0x13a:  mov    %dx,0xc(%eax,%ecx,8)
08651461 +0x13f:  mov    -0x1c(%ebp),%ecx
08651464 +0x142:  mov    -0x14(%ebp),%eax
08651467 +0x145:  movzwl 0x2(%eax),%edx
0865146b +0x149:  mov    0x10(%ebp),%eax
0865146e +0x14c:  add    $0x4,%ecx
08651471 +0x14f:  mov    %dx,0xe(%eax,%ecx,8)
08651476 +0x154:  addl   $0x1,-0x1c(%ebp)
0865147a +0x158:  cmpl   $0x8,-0x1c(%ebp)
0865147e +0x15c:  setle  %al
08651481 +0x15f:  test   %al,%al
08651483 +0x161:  jne    0865139f <+0x7d>
08651489 +0x167:  movl   $0x9,-0x10(%ebp)
08651490 +0x16e:  jmp    08651589 <+0x267>
08651495 +0x173:  mov    -0x10(%ebp),%eax
08651498 +0x176:  mov    0xc(%ebp),%edx
0865149b +0x179:  imul   $0x3d,%eax,%eax
0865149e +0x17c:  lea    (%edx,%eax,1),%eax
086514a1 +0x17f:  add    $0xe0,%eax
086514a6 +0x184:  mov    0x18(%eax),%eax
086514a9 +0x187:  mov    %eax,%edx
086514ab +0x189:  mov    0xc(%ebp),%eax
086514ae +0x18c:  mov    (%eax),%eax
086514b0 +0x18e:  movl   $0x1,0xc(%esp)
086514b8 +0x196:  mov    %edx,0x8(%esp)
086514bc +0x19a:  mov    %eax,0x4(%esp)
086514c0 +0x19e:  mov    0x8(%ebp),%eax
086514c3 +0x1a1:  mov    %eax,(%esp)
086514c6 +0x1a4:  call   08677188 <_ZN5CUser15checkRentedItemEjii>  ; CUser::checkRentedItem(unsigned int, int, int)
086514cb +0x1a9:  test   %al,%al
086514cd +0x1ab:  jne    08651509 <+0x1e7>
086514cf +0x1ad:  mov    -0x10(%ebp),%eax
086514d2 +0x1b0:  mov    0xc(%ebp),%edx
086514d5 +0x1b3:  imul   $0x3d,%eax,%eax
086514d8 +0x1b6:  lea    (%edx,%eax,1),%eax
086514db +0x1b9:  add    $0xe0,%eax
086514e0 +0x1be:  mov    0x18(%eax),%eax
086514e3 +0x1c1:  mov    %eax,%edx
086514e5 +0x1c3:  mov    0xc(%ebp),%eax
086514e8 +0x1c6:  mov    (%eax),%eax
086514ea +0x1c8:  movl   $0x2,0xc(%esp)
086514f2 +0x1d0:  mov    %edx,0x8(%esp)
086514f6 +0x1d4:  mov    %eax,0x4(%esp)
086514fa +0x1d8:  mov    0x8(%ebp),%eax
086514fd +0x1db:  mov    %eax,(%esp)
08651500 +0x1de:  call   08677188 <_ZN5CUser15checkRentedItemEjii>  ; CUser::checkRentedItem(unsigned int, int, int)
08651505 +0x1e3:  test   %al,%al
08651507 +0x1e5:  je     08651510 <+0x1ee>
08651509 +0x1e7:  mov    $0x1,%eax
0865150e +0x1ec:  jmp    08651515 <+0x1f3>
08651510 +0x1ee:  mov    $0x0,%eax
08651515 +0x1f3:  test   %al,%al
08651517 +0x1f5:  je     08651542 <+0x220>
08651519 +0x1f7:  mov    -0x10(%ebp),%eax
0865151c +0x1fa:  add    $0x4,%eax
0865151f +0x1fd:  shl    $0x3,%eax
08651522 +0x200:  add    0x10(%ebp),%eax
08651525 +0x203:  add    $0x8,%eax
08651528 +0x206:  movl   $0x8,0x8(%esp)
08651530 +0x20e:  movl   $0x0,0x4(%esp)
08651538 +0x216:  mov    %eax,(%esp)
0865153b +0x219:  call   0807dcc0 <_init+0x5b8>
08651540 +0x21e:  jmp    08651585 <+0x263>
08651542 +0x220:  mov    -0x10(%ebp),%ecx
08651545 +0x223:  mov    -0x10(%ebp),%eax
08651548 +0x226:  mov    0xc(%ebp),%edx
0865154b +0x229:  imul   $0x3d,%eax,%eax
0865154e +0x22c:  lea    (%edx,%eax,1),%eax
08651551 +0x22f:  add    $0xe0,%eax
08651556 +0x234:  mov    0x18(%eax),%eax
08651559 +0x237:  mov    %eax,%edx
0865155b +0x239:  mov    0x10(%ebp),%eax
0865155e +0x23c:  add    $0x4,%ecx
08651561 +0x23f:  mov    %edx,0x8(%eax,%ecx,8)
08651565 +0x243:  mov    -0x10(%ebp),%edx
08651568 +0x246:  mov    0x10(%ebp),%eax
0865156b +0x249:  add    $0x4,%edx
0865156e +0x24c:  movw   $0x0,0xc(%eax,%edx,8)
08651575 +0x253:  mov    -0x10(%ebp),%edx
08651578 +0x256:  mov    0x10(%ebp),%eax
0865157b +0x259:  add    $0x4,%edx
0865157e +0x25c:  movw   $0x0,0xe(%eax,%edx,8)
08651585 +0x263:  addl   $0x1,-0x10(%ebp)
08651589 +0x267:  cmpl   $0xb,-0x10(%ebp)
0865158d +0x26b:  setle  %al
08651590 +0x26e:  test   %al,%al
08651592 +0x270:  jne    08651495 <+0x173>
08651598 +0x276:  jmp    08651621 <+0x2ff>
0865159d +0x27b:  movl   $0x0,-0xc(%ebp)
086515a4 +0x282:  jmp    08651605 <+0x2e3>
086515a6 +0x284:  mov    -0xc(%ebp),%ecx
086515a9 +0x287:  mov    -0xc(%ebp),%edx
086515ac +0x28a:  mov    0xc(%ebp),%eax
086515af +0x28d:  add    $0xea,%edx
086515b5 +0x293:  mov    0xe(%eax,%edx,8),%edx
086515b9 +0x297:  mov    0x10(%ebp),%eax
086515bc +0x29a:  add    $0x4,%ecx
086515bf +0x29d:  mov    %edx,0x8(%eax,%ecx,8)
086515c3 +0x2a1:  mov    -0xc(%ebp),%ecx
086515c6 +0x2a4:  mov    -0xc(%ebp),%edx
086515c9 +0x2a7:  mov    0xc(%ebp),%eax
086515cc +0x2aa:  add    $0xea,%edx
086515d2 +0x2b0:  movzwl 0x12(%eax,%edx,8),%edx
086515d7 +0x2b5:  mov    0x10(%ebp),%eax
086515da +0x2b8:  add    $0x4,%ecx
086515dd +0x2bb:  mov    %dx,0xc(%eax,%ecx,8)
086515e2 +0x2c0:  mov    -0xc(%ebp),%ecx
086515e5 +0x2c3:  mov    -0xc(%ebp),%edx
086515e8 +0x2c6:  mov    0xc(%ebp),%eax
086515eb +0x2c9:  add    $0xea,%edx
086515f1 +0x2cf:  movzwl 0x14(%eax,%edx,8),%edx
086515f6 +0x2d4:  mov    0x10(%ebp),%eax
086515f9 +0x2d7:  add    $0x4,%ecx
086515fc +0x2da:  mov    %dx,0xe(%eax,%ecx,8)
08651601 +0x2df:  addl   $0x1,-0xc(%ebp)
08651605 +0x2e3:  cmpl   $0xb,-0xc(%ebp)
08651609 +0x2e7:  setle  %al
0865160c +0x2ea:  test   %al,%al
0865160e +0x2ec:  jne    086515a6 <+0x284>
08651610 +0x2ee:  mov    0xc(%ebp),%eax
08651613 +0x2f1:  mov    0x14c6(%eax),%eax
08651619 +0x2f7:  mov    %eax,%edx
0865161b +0x2f9:  mov    0x10(%ebp),%eax
0865161e +0x2fc:  mov    %dl,0x22(%eax)
08651621 +0x2ff:  add    $0x34,%esp
08651624 +0x302:  pop    %ebx
08651625 +0x303:  pop    %ebp
08651626 +0x304:  ret
08651627 +0x305:  nop
```

## 反编译 C

```c
// CUser::updateCharacViewVisibleData @ 0x8651322

/* CUser::updateCharacViewVisibleData(_Charac_info const&, CHARAC_LOGIN_DATA&) */

void __thiscall
CUser::updateCharacViewVisibleData(CUser *this,_Charac_info *param_1,CHARAC_LOGIN_DATA *param_2)

{
  bool bVar1;
  CHARAC_LOGIN_DATA CVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  CAvatarItemMgr *this_00;
  undefined2 *puVar6;
  undefined4 uVar7;
  int local_20;
  int local_14;
  int local_10;
  
  memset(param_2 + 0x28,0,0x60);
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if ((iVar4 == 0) ||
     (piVar5 = (int *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this),
     *piVar5 != *(int *)param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    CVar2 = (CHARAC_LOGIN_DATA)CUserCharacInfo::getRequestRenameState((CUserCharacInfo *)this);
    param_2[0x22] = CVar2;
    for (local_20 = 0; local_20 < 9; local_20 = local_20 + 1) {
      if (*(int *)(param_1 + local_20 * 0x3d + 0xf8) != 0) {
        iVar4 = *(int *)(param_1 + local_20 * 0x3d + 0xfd);
        this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR((CInventory *)(param_1 + 0xda));
        puVar6 = (undefined2 *)WongWork::CAvatarItemMgr::GetExpansionInfo(this_00,iVar4);
        if (puVar6 != (undefined2 *)0x0) {
          iVar4 = CInventory::GetClearAvatar((CInventory *)(param_1 + 0xda),local_20);
          if (iVar4 == 0) {
            *(undefined4 *)(param_2 + (local_20 + 4) * 8 + 8) =
                 *(undefined4 *)(param_1 + local_20 * 0x3d + 0xf8);
          }
          else {
            uVar7 = CInventory::GetClearAvatar((CInventory *)(param_1 + 0xda),local_20);
            *(undefined4 *)(param_2 + (local_20 + 4) * 8 + 8) = uVar7;
          }
          *(undefined2 *)(param_2 + (local_20 + 4) * 8 + 0xc) = *puVar6;
          *(undefined2 *)(param_2 + (local_20 + 4) * 8 + 0xe) = puVar6[1];
        }
      }
    }
    for (local_14 = 9; local_14 < 0xc; local_14 = local_14 + 1) {
      cVar3 = checkRentedItem(this,*(uint *)param_1,*(int *)(param_1 + local_14 * 0x3d + 0xf8),1);
      if ((cVar3 == '\0') &&
         (cVar3 = checkRentedItem(this,*(uint *)param_1,*(int *)(param_1 + local_14 * 0x3d + 0xf8),2
                                 ), cVar3 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        memset(param_2 + (local_14 + 4) * 8 + 8,0,8);
      }
      else {
        *(undefined4 *)(param_2 + (local_14 + 4) * 8 + 8) =
             *(undefined4 *)(param_1 + local_14 * 0x3d + 0xf8);
        *(undefined2 *)(param_2 + (local_14 + 4) * 8 + 0xc) = 0;
        *(undefined2 *)(param_2 + (local_14 + 4) * 8 + 0xe) = 0;
      }
    }
  }
  else {
    for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
      *(undefined4 *)(param_2 + (local_10 + 4) * 8 + 8) =
           *(undefined4 *)(param_1 + (local_10 + 0xea) * 8 + 0xe);
      *(undefined2 *)(param_2 + (local_10 + 4) * 8 + 0xc) =
           *(undefined2 *)(param_1 + (local_10 + 0xea) * 8 + 0x12);
      *(undefined2 *)(param_2 + (local_10 + 4) * 8 + 0xe) =
           *(undefined2 *)(param_1 + (local_10 + 0xea) * 8 + 0x14);
    }
    param_2[0x22] = SUB41(*(undefined4 *)(param_1 + 0x14c6),0);
  }
  return;
}
```
