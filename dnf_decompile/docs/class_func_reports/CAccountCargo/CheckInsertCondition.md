# CheckInsertCondition

`_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item`

`CAccountCargo::CheckInsertCondition(Inven_Item&)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x08289a4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08289a4a  _ZN13CAccountCargo20CheckInsertConditionER10Inven_Item
#           CAccountCargo::CheckInsertCondition(Inven_Item&)
# range [0x08289a4a, 0x08289c81]
08289a4a +0x000:  push   %ebp
08289a4b +0x001:  mov    %esp,%ebp
08289a4d +0x003:  push   %ebx
08289a4e +0x004:  sub    $0x34,%esp
08289a51 +0x007:  mov    0xc(%ebp),%eax
08289a54 +0x00a:  mov    0x2(%eax),%eax
08289a57 +0x00d:  mov    %eax,%ebx
08289a59 +0x00f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08289a5e +0x014:  mov    %ebx,0x4(%esp)
08289a62 +0x018:  mov    %eax,(%esp)
08289a65 +0x01b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08289a6a +0x020:  mov    %eax,-0x1c(%ebp)
08289a6d +0x023:  cmpl   $0x0,-0x1c(%ebp)
08289a71 +0x027:  jne    08289a7d <+0x33>
08289a73 +0x029:  mov    $0x0,%eax
08289a78 +0x02e:  jmp    08289c7c <+0x232>
08289a7d +0x033:  mov    -0x1c(%ebp),%eax
08289a80 +0x036:  mov    %eax,(%esp)
08289a83 +0x039:  call   0828b5b4 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x29>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x29
08289a88 +0x03e:  xor    $0x1,%eax
08289a8b +0x041:  test   %al,%al
08289a8d +0x043:  je     08289a99 <+0x4f>
08289a8f +0x045:  mov    $0x0,%eax
08289a94 +0x04a:  jmp    08289c7c <+0x232>
08289a99 +0x04f:  mov    0xc(%ebp),%eax
08289a9c +0x052:  add    $0x11,%eax
08289a9f +0x055:  mov    %eax,(%esp)
08289aa2 +0x058:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
08289aa7 +0x05d:  mov    %al,-0x15(%ebp)
08289aaa +0x060:  cmpb   $0x0,-0x15(%ebp)
08289aae +0x064:  je     08289ae3 <+0x99>
08289ab0 +0x066:  movzbl -0x15(%ebp),%ebx
08289ab4 +0x06a:  mov    0x8(%ebp),%eax
08289ab7 +0x06d:  mov    (%eax),%eax
08289ab9 +0x06f:  movl   $0x2,0x4(%esp)
08289ac1 +0x077:  mov    %eax,(%esp)
08289ac4 +0x07a:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08289ac9 +0x07f:  mov    %ebx,0x4(%esp)
08289acd +0x083:  mov    %eax,(%esp)
08289ad0 +0x086:  call   08541a96 <_ZNK9item_lock9CItemLock13CheckItemLockEh>  ; item_lock::CItemLock::CheckItemLock(unsigned char) const
08289ad5 +0x08b:  test   %al,%al
08289ad7 +0x08d:  je     08289ae3 <+0x99>
08289ad9 +0x08f:  mov    $0x0,%eax
08289ade +0x094:  jmp    08289c7c <+0x232>
08289ae3 +0x099:  mov    0xc(%ebp),%eax
08289ae6 +0x09c:  movzbl 0x1(%eax),%eax
08289aea +0x0a0:  cmp    $0x4,%al
08289aec +0x0a2:  je     08289b1a <+0xd0>
08289aee +0x0a4:  mov    0xc(%ebp),%eax
08289af1 +0x0a7:  movzbl 0x1(%eax),%eax
08289af5 +0x0ab:  cmp    $0x5,%al
08289af7 +0x0ad:  je     08289b1a <+0xd0>
08289af9 +0x0af:  mov    0xc(%ebp),%eax
08289afc +0x0b2:  movzbl 0x1(%eax),%eax
08289b00 +0x0b6:  cmp    $0x6,%al
08289b02 +0x0b8:  je     08289b1a <+0xd0>
08289b04 +0x0ba:  mov    0xc(%ebp),%eax
08289b07 +0x0bd:  movzbl 0x1(%eax),%eax
08289b0b +0x0c1:  cmp    $0x7,%al
08289b0d +0x0c3:  je     08289b1a <+0xd0>
08289b0f +0x0c5:  mov    0xc(%ebp),%eax
08289b12 +0x0c8:  movzbl 0x1(%eax),%eax
08289b16 +0x0cc:  cmp    $0x8,%al
08289b18 +0x0ce:  jne    08289b24 <+0xda>
08289b1a +0x0d0:  mov    $0x0,%eax
08289b1f +0x0d5:  jmp    08289c7c <+0x232>
08289b24 +0x0da:  mov    0xc(%ebp),%eax
08289b27 +0x0dd:  mov    0x2(%eax),%eax
08289b2a +0x0e0:  cmp    $0x1963,%eax
08289b2f +0x0e5:  jbe    08289b48 <+0xfe>
08289b31 +0x0e7:  mov    0xc(%ebp),%eax
08289b34 +0x0ea:  mov    0x2(%eax),%eax
08289b37 +0x0ed:  cmp    $0x1b57,%eax
08289b3c +0x0f2:  ja     08289b48 <+0xfe>
08289b3e +0x0f4:  mov    $0x0,%eax
08289b43 +0x0f9:  jmp    08289c7c <+0x232>
08289b48 +0x0fe:  mov    -0x1c(%ebp),%eax
08289b4b +0x101:  mov    %eax,(%esp)
08289b4e +0x104:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
08289b53 +0x109:  mov    %eax,-0x14(%ebp)
08289b56 +0x10c:  mov    -0x14(%ebp),%eax
08289b59 +0x10f:  cmp    $0x5,%eax
08289b5c +0x112:  ja     08289b88 <+0x13e>
08289b5e +0x114:  mov    &data#9423a3b2(.rodata)(,%eax,4),%eax
08289b65 +0x11b:  jmp    *%eax
08289b67 +0x11d:  mov    $0x0,%eax
08289b6c +0x122:  jmp    08289c7c <+0x232>
08289b71 +0x127:  mov    0xc(%ebp),%eax
08289b74 +0x12a:  movzbl (%eax),%eax
08289b77 +0x12d:  xor    $0x1,%eax
08289b7a +0x130:  test   %al,%al
08289b7c +0x132:  je     08289b88 <+0x13e>
08289b7e +0x134:  mov    $0x0,%eax
08289b83 +0x139:  jmp    08289c7c <+0x232>
08289b88 +0x13e:  mov    0xc(%ebp),%eax
08289b8b +0x141:  add    $0x33,%eax
08289b8e +0x144:  mov    %eax,(%esp)
08289b91 +0x147:  call   08110b0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1c
08289b96 +0x14c:  test   %al,%al
08289b98 +0x14e:  setne  %al
08289b9b +0x151:  test   %al,%al
08289b9d +0x153:  je     08289ba9 <+0x15f>
08289b9f +0x155:  mov    $0x0,%eax
08289ba4 +0x15a:  jmp    08289c7c <+0x232>
08289ba9 +0x15f:  mov    0x8(%ebp),%eax
08289bac +0x162:  mov    (%eax),%eax
08289bae +0x164:  mov    %eax,(%esp)
08289bb1 +0x167:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
08289bb6 +0x16c:  xor    $0x1,%eax
08289bb9 +0x16f:  test   %al,%al
08289bbb +0x171:  je     08289c77 <+0x22d>
08289bc1 +0x177:  mov    -0x1c(%ebp),%eax
08289bc4 +0x17a:  mov    (%eax),%eax
08289bc6 +0x17c:  add    $0x10,%eax
08289bc9 +0x17f:  mov    (%eax),%edx
08289bcb +0x181:  mov    -0x1c(%ebp),%eax
08289bce +0x184:  mov    %eax,(%esp)
08289bd1 +0x187:  call   *%edx
08289bd3 +0x189:  xor    $0x1,%eax
08289bd6 +0x18c:  test   %al,%al
08289bd8 +0x18e:  je     08289c77 <+0x22d>
08289bde +0x194:  mov    -0x1c(%ebp),%eax
08289be1 +0x197:  mov    %eax,(%esp)
08289be4 +0x19a:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
08289be9 +0x19f:  test   %eax,%eax
08289beb +0x1a1:  jne    08289bfc <+0x1b2>
08289bed +0x1a3:  mov    -0x1c(%ebp),%eax
08289bf0 +0x1a6:  mov    %eax,(%esp)
08289bf3 +0x1a9:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
08289bf8 +0x1ae:  test   %eax,%eax
08289bfa +0x1b0:  je     08289c03 <+0x1b9>
08289bfc +0x1b2:  mov    $0x1,%eax
08289c01 +0x1b7:  jmp    08289c08 <+0x1be>
08289c03 +0x1b9:  mov    $0x0,%eax
08289c08 +0x1be:  test   %al,%al
08289c0a +0x1c0:  je     08289c77 <+0x22d>
08289c0c +0x1c2:  mov    -0x1c(%ebp),%eax
08289c0f +0x1c5:  mov    %eax,(%esp)
08289c12 +0x1c8:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
08289c17 +0x1cd:  test   %eax,%eax
08289c19 +0x1cf:  jne    08289c31 <+0x1e7>
08289c1b +0x1d1:  mov    -0x1c(%ebp),%eax
08289c1e +0x1d4:  mov    %eax,(%esp)
08289c21 +0x1d7:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
08289c26 +0x1dc:  test   %eax,%eax
08289c28 +0x1de:  jne    08289c31 <+0x1e7>
08289c2a +0x1e0:  mov    $0x1,%eax
08289c2f +0x1e5:  jmp    08289c36 <+0x1ec>
08289c31 +0x1e7:  mov    $0x0,%eax
08289c36 +0x1ec:  test   %al,%al
08289c38 +0x1ee:  je     08289c41 <+0x1f7>
08289c3a +0x1f0:  mov    $0x0,%eax
08289c3f +0x1f5:  jmp    08289c7c <+0x232>
08289c41 +0x1f7:  mov    0xc(%ebp),%eax
08289c44 +0x1fa:  movzwl 0xb(%eax),%eax
08289c48 +0x1fe:  movzwl %ax,%eax
08289c4b +0x201:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
08289c51 +0x207:  add    $0x44a54a80,%eax
08289c56 +0x20c:  mov    %eax,-0x10(%ebp)
08289c59 +0x20f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08289c60 +0x216:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08289c65 +0x21b:  mov    %eax,-0xc(%ebp)
08289c68 +0x21e:  mov    -0x10(%ebp),%eax
08289c6b +0x221:  cmp    -0xc(%ebp),%eax
08289c6e +0x224:  jg     08289c77 <+0x22d>
08289c70 +0x226:  mov    $0x0,%eax
08289c75 +0x22b:  jmp    08289c7c <+0x232>
08289c77 +0x22d:  mov    $0x1,%eax
08289c7c +0x232:  add    $0x34,%esp
08289c7f +0x235:  pop    %ebx
08289c80 +0x236:  pop    %ebp
08289c81 +0x237:  ret
```

## 反编译 C

```c
// CAccountCargo::CheckInsertCondition @ 0x8289a4a

/* CAccountCargo::CheckInsertCondition(Inven_Item&) */

undefined4 __thiscall CAccountCargo::CheckInsertCondition(CAccountCargo *this,Inven_Item *param_1)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  uchar uVar4;
  CDataManager *this_00;
  CItem *this_01;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,iVar6);
  if (this_01 == (CItem *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar3 = CItem::isPackagable(this_01);
    if (cVar3 == '\x01') {
      cVar3 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(param_1 + 0x11));
      if (cVar3 != '\0') {
        uVar4 = CUser::GetCharacExpandDataR(*(CUser **)this,2);
        cVar3 = item_lock::CItemLock::CheckItemLock(uVar4);
        if (cVar3 != '\0') {
          return 0;
        }
      }
      if ((((param_1[1] == (Inven_Item)0x4) || (param_1[1] == (Inven_Item)0x5)) ||
          (param_1[1] == (Inven_Item)0x6)) ||
         ((param_1[1] == (Inven_Item)0x7 || (param_1[1] == (Inven_Item)0x8)))) {
        uVar5 = 0;
      }
      else if ((*(uint *)(param_1 + 2) < 0x1964) || (6999 < *(uint *)(param_1 + 2))) {
        uVar5 = CItem::GetAttachType(this_01);
        switch(uVar5) {
        case 1:
        case 2:
          return 0;
        case 3:
          if (*param_1 != (Inven_Item)0x1) {
            return 0;
          }
        }
        cVar3 = UpgradeSeparateInfo::IsTradeRestriction((UpgradeSeparateInfo *)(param_1 + 0x33));
        if (cVar3 == '\0') {
          cVar3 = CUser::isGMUser(*(CUser **)this);
          if ((cVar3 != '\x01') &&
             (cVar3 = (**(code **)(*(int *)this_01 + 0x10))(this_01), cVar3 != '\x01')) {
            iVar6 = CItem::getUsablePeriod(this_01);
            if ((iVar6 == 0) && (iVar6 = CItem::getExpirationDate(this_01), iVar6 == 0)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              iVar6 = CItem::getUsablePeriod(this_01);
              if ((iVar6 == 0) && (iVar6 = CItem::getExpirationDate(this_01), iVar6 == 0)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (bVar2) {
                return 0;
              }
              uVar1 = *(ushort *)(param_1 + 0xb);
              iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
              if ((int)((uint)uVar1 * 0x15180 + 0x44a54a80) <= iVar6) {
                return 0;
              }
            }
          }
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}
```
