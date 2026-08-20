# process_packet

`_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE`

`advancealtar::Dispatcher_BuyItem::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_BuyItem` | `0x0813fc06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813fc06  _ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE
#           advancealtar::Dispatcher_BuyItem::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const
# range [0x0813fc06, 0x0813fe81]
0813fc06 +0x000:  push   %ebp
0813fc07 +0x001:  mov    %esp,%ebp
0813fc09 +0x003:  push   %edi
0813fc0a +0x004:  push   %esi
0813fc0b +0x005:  push   %ebx
0813fc0c +0x006:  sub    $0x5c,%esp
0813fc0f +0x009:  mov    0x10(%ebp),%eax
0813fc12 +0x00c:  mov    %eax,-0x34(%ebp)
0813fc15 +0x00f:  mov    0x14(%ebp),%eax
0813fc18 +0x012:  mov    %eax,-0x30(%ebp)
0813fc1b +0x015:  mov    -0x34(%ebp),%eax
0813fc1e +0x018:  mov    0x10(%eax),%edx
0813fc21 +0x01b:  mov    -0x30(%ebp),%eax
0813fc24 +0x01e:  mov    %edx,0x8(%eax)
0813fc27 +0x021:  mov    -0x34(%ebp),%eax
0813fc2a +0x024:  mov    0x14(%eax),%edx
0813fc2d +0x027:  mov    -0x30(%ebp),%eax
0813fc30 +0x02a:  mov    %edx,0xc(%eax)
0813fc33 +0x02d:  mov    -0x34(%ebp),%eax
0813fc36 +0x030:  mov    0x18(%eax),%edx
0813fc39 +0x033:  mov    -0x30(%ebp),%eax
0813fc3c +0x036:  mov    %edx,0x10(%eax)
0813fc3f +0x039:  mov    -0x34(%ebp),%eax
0813fc42 +0x03c:  movzwl 0x1c(%eax),%edx
0813fc46 +0x040:  mov    -0x30(%ebp),%eax
0813fc49 +0x043:  mov    %dx,0x14(%eax)
0813fc4d +0x047:  mov    -0x34(%ebp),%eax
0813fc50 +0x04a:  movzwl 0x1e(%eax),%edx
0813fc54 +0x04e:  mov    -0x30(%ebp),%eax
0813fc57 +0x051:  mov    %dx,0x16(%eax)
0813fc5b +0x055:  mov    0x10(%ebp),%eax
0813fc5e +0x058:  mov    %eax,0x8(%esp)
0813fc62 +0x05c:  mov    0xc(%ebp),%eax
0813fc65 +0x05f:  mov    %eax,0x4(%esp)
0813fc69 +0x063:  mov    0x8(%ebp),%eax
0813fc6c +0x066:  mov    %eax,(%esp)
0813fc6f +0x069:  call   0813fbe6 <_ZNK12advancealtar18Dispatcher_BuyItem11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE>  ; advancealtar::Dispatcher_BuyItem::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
0813fc74 +0x06e:  mov    %eax,%edx
0813fc76 +0x070:  mov    -0x30(%ebp),%eax
0813fc79 +0x073:  mov    %edx,0x4(%eax)
0813fc7c +0x076:  mov    -0x30(%ebp),%eax
0813fc7f +0x079:  mov    0x4(%eax),%eax
0813fc82 +0x07c:  test   %eax,%eax
0813fc84 +0x07e:  je     0813fc90 <+0x8a>
0813fc86 +0x080:  mov    $0x0,%eax
0813fc8b +0x085:  jmp    0813fe77 <+0x271>
0813fc90 +0x08a:  mov    -0x34(%ebp),%eax
0813fc93 +0x08d:  mov    0x14(%eax),%esi
0813fc96 +0x090:  mov    -0x34(%ebp),%eax
0813fc99 +0x093:  mov    0x10(%eax),%ebx
0813fc9c +0x096:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0813fca1 +0x09b:  add    $0x631c,%eax
0813fca6 +0x0a0:  mov    %esi,0x8(%esp)
0813fcaa +0x0a4:  mov    %ebx,0x4(%esp)
0813fcae +0x0a8:  mov    %eax,(%esp)
0813fcb1 +0x0ab:  call   088a0fe8 <_ZN12advancealtar25AdvanceAltarShopParameter20getBuyUpgradeDataVecEiNS_20AdvanceAltarShopType1TE>  ; advancealtar::AdvanceAltarShopParameter::getBuyUpgradeDataVec(int, advancealtar::AdvanceAltarShopType::T)
0813fcb6 +0x0b0:  mov    %eax,-0x2c(%ebp)
0813fcb9 +0x0b3:  cmpl   $0x0,-0x2c(%ebp)
0813fcbd +0x0b7:  jne    0813fcd3 <+0xcd>
0813fcbf +0x0b9:  mov    -0x30(%ebp),%eax
0813fcc2 +0x0bc:  movl   $0x3,0x4(%eax)
0813fcc9 +0x0c3:  mov    $0x0,%eax
0813fcce +0x0c8:  jmp    0813fe77 <+0x271>
0813fcd3 +0x0cd:  movl   $0x0,-0x28(%ebp)
0813fcda +0x0d4:  lea    -0x40(%ebp),%eax
0813fcdd +0x0d7:  mov    -0x2c(%ebp),%edx
0813fce0 +0x0da:  mov    %edx,0x4(%esp)
0813fce4 +0x0de:  mov    %eax,(%esp)
0813fce7 +0x0e1:  call   0813609e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1ca5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1ca5
0813fcec +0x0e6:  sub    $0x4,%esp
0813fcef +0x0e9:  jmp    0813fd3a <+0x134>
0813fcf1 +0x0eb:  lea    -0x40(%ebp),%eax
0813fcf4 +0x0ee:  mov    %eax,(%esp)
0813fcf7 +0x0f1:  call   08136148 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d4f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d4f
0813fcfc +0x0f6:  mov    (%eax),%edx
0813fcfe +0x0f8:  mov    -0x30(%ebp),%eax
0813fd01 +0x0fb:  mov    0x10(%eax),%eax
0813fd04 +0x0fe:  cmp    %eax,%edx
0813fd06 +0x100:  sete   %al
0813fd09 +0x103:  test   %al,%al
0813fd0b +0x105:  je     0813fd1d <+0x117>
0813fd0d +0x107:  lea    -0x40(%ebp),%eax
0813fd10 +0x10a:  mov    %eax,(%esp)
0813fd13 +0x10d:  call   08136152 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d59>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d59
0813fd18 +0x112:  mov    %eax,-0x28(%ebp)
0813fd1b +0x115:  jmp    0813fd65 <+0x15f>
0813fd1d +0x117:  lea    -0x38(%ebp),%eax
0813fd20 +0x11a:  movl   $0x0,0x8(%esp)
0813fd28 +0x122:  lea    -0x40(%ebp),%edx
0813fd2b +0x125:  mov    %edx,0x4(%esp)
0813fd2f +0x129:  mov    %eax,(%esp)
0813fd32 +0x12c:  call   08136114 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d1b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d1b
0813fd37 +0x131:  sub    $0x4,%esp
0813fd3a +0x134:  lea    -0x3c(%ebp),%eax
0813fd3d +0x137:  mov    -0x2c(%ebp),%edx
0813fd40 +0x13a:  mov    %edx,0x4(%esp)
0813fd44 +0x13e:  mov    %eax,(%esp)
0813fd47 +0x141:  call   081360c2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1cc9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1cc9
0813fd4c +0x146:  sub    $0x4,%esp
0813fd4f +0x149:  lea    -0x3c(%ebp),%eax
0813fd52 +0x14c:  mov    %eax,0x4(%esp)
0813fd56 +0x150:  lea    -0x40(%ebp),%eax
0813fd59 +0x153:  mov    %eax,(%esp)
0813fd5c +0x156:  call   081360e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1cef>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1cef
0813fd61 +0x15b:  test   %al,%al
0813fd63 +0x15d:  jne    0813fcf1 <+0xeb>
0813fd65 +0x15f:  cmpl   $0x0,-0x28(%ebp)
0813fd69 +0x163:  jne    0813fd7f <+0x179>
0813fd6b +0x165:  mov    -0x30(%ebp),%eax
0813fd6e +0x168:  movl   $0x3,0x4(%eax)
0813fd75 +0x16f:  mov    $0x0,%eax
0813fd7a +0x174:  jmp    0813fe77 <+0x271>
0813fd7f +0x179:  movl   $0x0,-0x24(%ebp)
0813fd86 +0x180:  mov    -0x34(%ebp),%eax
0813fd89 +0x183:  movzwl 0x1c(%eax),%eax
0813fd8d +0x187:  cwtl
0813fd8e +0x188:  mov    %eax,-0x20(%ebp)
0813fd91 +0x18b:  jmp    0813fdd7 <+0x1d1>
0813fd93 +0x18d:  movl   $0x2,0x8(%esp)
0813fd9b +0x195:  mov    -0x20(%ebp),%eax
0813fd9e +0x198:  mov    %eax,0x4(%esp)
0813fda2 +0x19c:  mov    -0x28(%ebp),%eax
0813fda5 +0x19f:  mov    %eax,(%esp)
0813fda8 +0x1a2:  call   088a2e4c <_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE>  ; advancealtar::BuyUpgradeData::getFieldDataPoint(int, advancealtar::FieldType::T)
0813fdad +0x1a7:  mov    %eax,-0x1c(%ebp)
0813fdb0 +0x1aa:  cmpl   $0x0,-0x1c(%ebp)
0813fdb4 +0x1ae:  jne    0813fdca <+0x1c4>
0813fdb6 +0x1b0:  mov    -0x30(%ebp),%eax
0813fdb9 +0x1b3:  movl   $0x3,0x4(%eax)
0813fdc0 +0x1ba:  mov    $0x0,%eax
0813fdc5 +0x1bf:  jmp    0813fe77 <+0x271>
0813fdca +0x1c4:  mov    -0x1c(%ebp),%eax
0813fdcd +0x1c7:  mov    0x4(%eax),%eax
0813fdd0 +0x1ca:  add    %eax,-0x24(%ebp)
0813fdd3 +0x1cd:  addl   $0x1,-0x20(%ebp)
0813fdd7 +0x1d1:  mov    -0x34(%ebp),%eax
0813fdda +0x1d4:  movzwl 0x1e(%eax),%eax
0813fdde +0x1d8:  cwtl
0813fddf +0x1d9:  cmp    -0x20(%ebp),%eax
0813fde2 +0x1dc:  setge  %al
0813fde5 +0x1df:  test   %al,%al
0813fde7 +0x1e1:  jne    0813fd93 <+0x18d>
0813fde9 +0x1e3:  movl   $0x0,-0x44(%ebp)
0813fdf0 +0x1ea:  mov    -0x34(%ebp),%eax
0813fdf3 +0x1ed:  movzwl 0x1e(%eax),%eax
0813fdf7 +0x1f1:  movswl %ax,%ebx
0813fdfa +0x1f4:  mov    -0x34(%ebp),%eax
0813fdfd +0x1f7:  movzwl 0x1c(%eax),%eax
0813fe01 +0x1fb:  movswl %ax,%ecx
0813fe04 +0x1fe:  mov    -0x34(%ebp),%eax
0813fe07 +0x201:  mov    0x18(%eax),%edx
0813fe0a +0x204:  mov    -0x34(%ebp),%eax
0813fe0d +0x207:  mov    0x14(%eax),%eax
0813fe10 +0x20a:  mov    0xc(%ebp),%esi
0813fe13 +0x20d:  lea    0x8df60(%esi),%edi
0813fe19 +0x213:  lea    -0x44(%ebp),%esi
0813fe1c +0x216:  mov    %esi,0x18(%esp)
0813fe20 +0x21a:  mov    -0x24(%ebp),%esi
0813fe23 +0x21d:  mov    %esi,0x14(%esp)
0813fe27 +0x221:  mov    %ebx,0x10(%esp)
0813fe2b +0x225:  mov    %ecx,0xc(%esp)
0813fe2f +0x229:  mov    %edx,0x8(%esp)
0813fe33 +0x22d:  mov    %eax,0x4(%esp)
0813fe37 +0x231:  mov    %edi,(%esp)
0813fe3a +0x234:  call   081319ae <_ZN12advancealtar25CharacAdvanceAltarManager7buyItemENS_20AdvanceAltarShopType1TEissiRi>  ; advancealtar::CharacAdvanceAltarManager::buyItem(advancealtar::AdvanceAltarShopType::T, int, short, short, int, int&)
0813fe3f +0x239:  mov    -0x30(%ebp),%edx
0813fe42 +0x23c:  mov    %eax,0x4(%edx)
0813fe45 +0x23f:  mov    -0x44(%ebp),%edx
0813fe48 +0x242:  mov    -0x30(%ebp),%eax
0813fe4b +0x245:  mov    %edx,0x18(%eax)
0813fe4e +0x248:  mov    -0x30(%ebp),%eax
0813fe51 +0x24b:  mov    0x4(%eax),%eax
0813fe54 +0x24e:  test   %eax,%eax
0813fe56 +0x250:  jne    0813fe72 <+0x26c>
0813fe58 +0x252:  mov    -0x24(%ebp),%eax
0813fe5b +0x255:  mov    %eax,0x8(%esp)
0813fe5f +0x259:  movl   $0x0,0x4(%esp)
0813fe67 +0x261:  mov    0xc(%ebp),%eax
0813fe6a +0x264:  mov    %eax,(%esp)
0813fe6d +0x267:  call   08133db0 <_ZN12advancealtar10HistoryLog7starSubER5CUserNS_11SubStarType1TEi>  ; advancealtar::HistoryLog::starSub(CUser&, advancealtar::SubStarType::T, int)
0813fe72 +0x26c:  mov    $0x0,%eax
0813fe77 +0x271:  lea    -0xc(%ebp),%esp
0813fe7a +0x274:  add    $0x0,%esp
0813fe7d +0x277:  pop    %ebx
0813fe7e +0x278:  pop    %esi
0813fe7f +0x279:  pop    %edi
0813fe80 +0x27a:  pop    %ebp
0813fe81 +0x27b:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_BuyItem::process_packet @ 0x813fc06

/* advancealtar::Dispatcher_BuyItem::process_packet(CUser*, CMDPacketStruct::STBaseRequest&,
   CMDPacketStruct::STBaseResponse&) const */

undefined4 __thiscall
advancealtar::Dispatcher_BuyItem::process_packet
          (Dispatcher_BuyItem *this,CUser *param_1,STBaseRequest *param_2,STBaseResponse *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_48;
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_44 [4];
  __normal_iterator local_40 [4];
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_3c [4];
  STBaseRequest *local_38;
  STBaseResponse *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_38 = param_2;
  local_34 = param_3;
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x18);
  *(undefined2 *)(param_3 + 0x14) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined2 *)(param_3 + 0x16) = *(undefined2 *)(param_2 + 0x1e);
  uVar3 = check_error((CUser *)this,(STBaseRequest *)param_1);
  *(undefined4 *)(local_34 + 4) = uVar3;
  if (*(int *)(local_34 + 4) == 0) {
    uVar3 = *(undefined4 *)(local_38 + 0x14);
    uVar1 = *(undefined4 *)(local_38 + 0x10);
    iVar4 = G_CDataManager();
    local_30 = AdvanceAltarShopParameter::getBuyUpgradeDataVec
                         ((AdvanceAltarShopParameter *)(iVar4 + 0x631c),uVar1,uVar3);
    if (local_30 == 0) {
      *(undefined4 *)(local_34 + 4) = 3;
    }
    else {
      local_2c = 0;
      std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::begin
                ();
      while( true ) {
        std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::end
                  ();
        bVar2 = __gnu_cxx::operator!=(local_44,local_40);
        if (!bVar2) break;
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                        ::operator->(local_44);
        if (*piVar5 == *(int *)(local_34 + 0x10)) {
          local_2c = __gnu_cxx::
                     __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                     ::operator*(local_44);
          break;
        }
        __gnu_cxx::
        __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
        ::operator++(local_3c,(int)local_44);
      }
      if (local_2c == 0) {
        *(undefined4 *)(local_34 + 4) = 3;
      }
      else {
        local_28 = 0;
        for (local_24 = (int)*(short *)(local_38 + 0x1c); local_24 <= *(short *)(local_38 + 0x1e);
            local_24 = local_24 + 1) {
          local_20 = BuyUpgradeData::getFieldDataPoint(local_2c,local_24,2);
          if (local_20 == 0) {
            *(undefined4 *)(local_34 + 4) = 3;
            return 0;
          }
          local_28 = local_28 + *(int *)(local_20 + 4);
        }
        local_48 = 0;
        uVar3 = CharacAdvanceAltarManager::buyItem
                          ((CharacAdvanceAltarManager *)(param_1 + 0x8df60),
                           *(undefined4 *)(local_38 + 0x14),*(undefined4 *)(local_38 + 0x18),
                           (int)*(short *)(local_38 + 0x1c),(int)*(short *)(local_38 + 0x1e),
                           local_28,&local_48);
        *(undefined4 *)(local_34 + 4) = uVar3;
        *(undefined4 *)(local_34 + 0x18) = local_48;
        if (*(int *)(local_34 + 4) == 0) {
          HistoryLog::starSub(param_1,0,local_28);
        }
      }
    }
  }
  return 0;
}
```
