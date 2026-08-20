# process

`_ZN24Dispatcher_ObjectBringUp7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_ObjectBringUp::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ObjectBringUp` | `0x081e14d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e14d4  _ZN24Dispatcher_ObjectBringUp7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_ObjectBringUp::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e14d4, 0x081e16cd]
081e14d4 +0x000:  push   %ebp
081e14d5 +0x001:  mov    %esp,%ebp
081e14d7 +0x003:  push   %ebx
081e14d8 +0x004:  sub    $0x74,%esp
081e14db +0x007:  mov    0x10(%ebp),%eax
081e14de +0x00a:  mov    %eax,-0x18(%ebp)
081e14e1 +0x00d:  mov    0x14(%ebp),%eax
081e14e4 +0x010:  mov    %eax,-0x14(%ebp)
081e14e7 +0x013:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e14ec +0x018:  mov    %eax,(%esp)
081e14ef +0x01b:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
081e14f4 +0x020:  movl   $0x19b,0x4(%esp)
081e14fc +0x028:  mov    %eax,(%esp)
081e14ff +0x02b:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
081e1504 +0x030:  mov    %eax,-0x10(%ebp)
081e1507 +0x033:  cmpl   $0x0,-0x10(%ebp)
081e150b +0x037:  jne    081e1521 <+0x4d>
081e150d +0x039:  mov    -0x14(%ebp),%eax
081e1510 +0x03c:  movl   $0xb2,0x4(%eax)
081e1517 +0x043:  mov    $0x0,%eax
081e151c +0x048:  jmp    081e16c9 <+0x1f5>
081e1521 +0x04d:  mov    -0x10(%ebp),%eax
081e1524 +0x050:  mov    (%eax),%eax
081e1526 +0x052:  add    $0x8,%eax
081e1529 +0x055:  mov    (%eax),%edx
081e152b +0x057:  mov    -0x10(%ebp),%eax
081e152e +0x05a:  mov    %eax,(%esp)
081e1531 +0x05d:  call   *%edx
081e1533 +0x05f:  xor    $0x1,%eax
081e1536 +0x062:  test   %al,%al
081e1538 +0x064:  je     081e154e <+0x7a>
081e153a +0x066:  mov    -0x14(%ebp),%eax
081e153d +0x069:  movl   $0xb2,0x4(%eax)
081e1544 +0x070:  mov    $0x0,%eax
081e1549 +0x075:  jmp    081e16c9 <+0x1f5>
081e154e +0x07a:  mov    0x10(%ebp),%eax
081e1551 +0x07d:  mov    %eax,0x8(%esp)
081e1555 +0x081:  mov    0xc(%ebp),%eax
081e1558 +0x084:  mov    %eax,0x4(%esp)
081e155c +0x088:  mov    0x8(%ebp),%eax
081e155f +0x08b:  mov    %eax,(%esp)
081e1562 +0x08e:  call   081e16ce <_ZN24Dispatcher_ObjectBringUp11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_ObjectBringUp::check_error(CUser*, MSG_BASE&)
081e1567 +0x093:  mov    -0x14(%ebp),%edx
081e156a +0x096:  mov    %eax,0x4(%edx)
081e156d +0x099:  mov    -0x14(%ebp),%eax
081e1570 +0x09c:  mov    0x4(%eax),%eax
081e1573 +0x09f:  test   %eax,%eax
081e1575 +0x0a1:  je     081e1581 <+0xad>
081e1577 +0x0a3:  mov    $0x0,%eax
081e157c +0x0a8:  jmp    081e16c9 <+0x1f5>
081e1581 +0x0ad:  mov    -0x18(%ebp),%eax
081e1584 +0x0b0:  movzwl 0xe(%eax),%eax
081e1588 +0x0b4:  movzwl %ax,%ebx
081e158b +0x0b7:  mov    0xc(%ebp),%eax
081e158e +0x0ba:  mov    %eax,(%esp)
081e1591 +0x0bd:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081e1596 +0x0c2:  lea    -0x55(%ebp),%edx
081e1599 +0x0c5:  mov    %ebx,0xc(%esp)
081e159d +0x0c9:  movl   $0x1,0x8(%esp)
081e15a5 +0x0d1:  mov    %eax,0x4(%esp)
081e15a9 +0x0d5:  mov    %edx,(%esp)
081e15ac +0x0d8:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081e15b1 +0x0dd:  sub    $0x4,%esp
081e15b4 +0x0e0:  mov    -0x53(%ebp),%eax
081e15b7 +0x0e3:  mov    %eax,%ebx
081e15b9 +0x0e5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e15be +0x0ea:  mov    %ebx,0x4(%esp)
081e15c2 +0x0ee:  mov    %eax,(%esp)
081e15c5 +0x0f1:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081e15ca +0x0f6:  mov    %eax,-0xc(%ebp)
081e15cd +0x0f9:  cmpl   $0x0,-0xc(%ebp)
081e15d1 +0x0fd:  jne    081e15e7 <+0x113>
081e15d3 +0x0ff:  mov    -0x14(%ebp),%eax
081e15d6 +0x102:  movl   $0x11,0x4(%eax)
081e15dd +0x109:  mov    $0x0,%eax
081e15e2 +0x10e:  jmp    081e16c9 <+0x1f5>
081e15e7 +0x113:  mov    -0x53(%ebp),%eax
081e15ea +0x116:  mov    %eax,0x8(%esp)
081e15ee +0x11a:  mov    0xc(%ebp),%eax
081e15f1 +0x11d:  mov    %eax,0x4(%esp)
081e15f5 +0x121:  mov    -0x10(%ebp),%eax
081e15f8 +0x124:  mov    %eax,(%esp)
081e15fb +0x127:  call   0810fcea <_ZN13EventClassify14CObjectBringUp24verifyMaterialItemByRuleEP5CUserj>  ; EventClassify::CObjectBringUp::verifyMaterialItemByRule(CUser*, unsigned int)
081e1600 +0x12c:  xor    $0x1,%eax
081e1603 +0x12f:  test   %al,%al
081e1605 +0x131:  je     081e161b <+0x147>
081e1607 +0x133:  mov    -0x14(%ebp),%eax
081e160a +0x136:  movl   $0x17,0x4(%eax)
081e1611 +0x13d:  mov    $0x0,%eax
081e1616 +0x142:  jmp    081e16c9 <+0x1f5>
081e161b +0x147:  mov    0xc(%ebp),%eax
081e161e +0x14a:  mov    %eax,(%esp)
081e1621 +0x14d:  call   0822fac4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x516e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x516e
081e1626 +0x152:  mov    0xc(%ebp),%eax
081e1629 +0x155:  mov    %eax,(%esp)
081e162c +0x158:  call   08110d12 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x224>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x224
081e1631 +0x15d:  mov    -0x14(%ebp),%edx
081e1634 +0x160:  mov    %al,0xa(%edx)
081e1637 +0x163:  mov    -0x18(%ebp),%eax
081e163a +0x166:  movzwl 0xe(%eax),%eax
081e163e +0x16a:  movzwl %ax,%ebx
081e1641 +0x16d:  mov    0xc(%ebp),%eax
081e1644 +0x170:  mov    %eax,(%esp)
081e1647 +0x173:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081e164c +0x178:  movl   $0x1,0x14(%esp)
081e1654 +0x180:  movl   $0x3,0x10(%esp)
081e165c +0x188:  movl   $0x1,0xc(%esp)
081e1664 +0x190:  mov    %ebx,0x8(%esp)
081e1668 +0x194:  movl   $0x1,0x4(%esp)
081e1670 +0x19c:  mov    %eax,(%esp)
081e1673 +0x19f:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081e1678 +0x1a4:  mov    -0x14(%ebp),%eax
081e167b +0x1a7:  lea    0xb(%eax),%edx
081e167e +0x1aa:  mov    -0x14(%ebp),%eax
081e1681 +0x1ad:  add    $0xc,%eax
081e1684 +0x1b0:  mov    %edx,0xc(%esp)
081e1688 +0x1b4:  mov    %eax,0x8(%esp)
081e168c +0x1b8:  mov    0xc(%ebp),%eax
081e168f +0x1bb:  mov    %eax,0x4(%esp)
081e1693 +0x1bf:  mov    -0x10(%ebp),%eax
081e1696 +0x1c2:  mov    %eax,(%esp)
081e1699 +0x1c5:  call   0810fe90 <_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh>  ; EventClassify::CObjectBringUp::sendBringUpReward(CUser*, std::vector<int, std::allocator<int> >&, unsigned char&)
081e169e +0x1ca:  xor    $0x1,%eax
081e16a1 +0x1cd:  test   %al,%al
081e16a3 +0x1cf:  je     081e16b6 <+0x1e2>
081e16a5 +0x1d1:  mov    -0x14(%ebp),%eax
081e16a8 +0x1d4:  movl   $0x1,0x4(%eax)
081e16af +0x1db:  mov    $0x0,%eax
081e16b4 +0x1e0:  jmp    081e16c9 <+0x1f5>
081e16b6 +0x1e2:  mov    -0x18(%ebp),%eax
081e16b9 +0x1e5:  movzwl 0xe(%eax),%edx
081e16bd +0x1e9:  mov    -0x14(%ebp),%eax
081e16c0 +0x1ec:  mov    %dx,0x8(%eax)
081e16c4 +0x1f0:  mov    $0x0,%eax
081e16c9 +0x1f5:  mov    -0x4(%ebp),%ebx
081e16cc +0x1f8:  leave
081e16cd +0x1f9:  ret
```

## 反编译 C

```c
// Dispatcher_ObjectBringUp::process @ 0x81e14d4

/* Dispatcher_ObjectBringUp::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ObjectBringUp::process
          (Dispatcher_ObjectBringUp *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  char cVar3;
  ParamBase PVar4;
  CDataManager *pCVar5;
  int iVar6;
  CInventory *pCVar7;
  undefined4 uVar8;
  undefined1 local_59 [2];
  uint local_57;
  MSG_BASE *local_1c;
  ParamBase *local_18;
  CObjectBringUp *local_14;
  int local_10;
  
  local_1c = param_2;
  local_18 = param_3;
  pCVar5 = (CDataManager *)G_CDataManager();
  iVar6 = CDataManager::get_event_script_mng(pCVar5);
  uVar8 = 0x19b;
  local_14 = (CObjectBringUp *)EventClassify::CEventScriptMng::get_event_entity(iVar6);
  if (local_14 == (CObjectBringUp *)0x0) {
    *(undefined4 *)(local_18 + 4) = 0xb2;
  }
  else {
    cVar3 = (**(code **)(*(int *)local_14 + 8))(local_14,uVar8);
    if (cVar3 == '\x01') {
      uVar8 = check_error((CUser *)this,(MSG_BASE *)param_1);
      *(undefined4 *)(local_18 + 4) = uVar8;
      if (*(int *)(local_18 + 4) == 0) {
        iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_59,iVar6);
        uVar2 = local_57;
        pCVar5 = (CDataManager *)G_CDataManager();
        local_10 = CDataManager::find_item(pCVar5,uVar2);
        if (local_10 == 0) {
          *(undefined4 *)(local_18 + 4) = 0x11;
        }
        else {
          cVar3 = EventClassify::CObjectBringUp::verifyMaterialItemByRule(local_14,param_1,local_57)
          ;
          if (cVar3 == '\x01') {
            CUserCharacInfo::incCurUseBringUpMaterialCount((CUserCharacInfo *)param_1);
            PVar4 = (ParamBase)
                    CUserCharacInfo::getCurUseBringUpMaterialTotal((CUserCharacInfo *)param_1);
            local_18[10] = PVar4;
            uVar1 = *(undefined2 *)(local_1c + 0xe);
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            CInventory::delete_item(pCVar7,1,uVar1,1,3,1);
            cVar3 = EventClassify::CObjectBringUp::sendBringUpReward
                              (local_14,param_1,(vector *)(local_18 + 0xc),(uchar *)(local_18 + 0xb)
                              );
            if (cVar3 == '\x01') {
              *(undefined2 *)(local_18 + 8) = *(undefined2 *)(local_1c + 0xe);
            }
            else {
              *(undefined4 *)(local_18 + 4) = 1;
            }
          }
          else {
            *(undefined4 *)(local_18 + 4) = 0x17;
          }
        }
      }
    }
    else {
      *(undefined4 *)(local_18 + 4) = 0xb2;
    }
  }
  return 0;
}
```
