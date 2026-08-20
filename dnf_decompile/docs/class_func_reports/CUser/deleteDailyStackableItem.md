# deleteDailyStackableItem

`_ZN5CUser24deleteDailyStackableItemERSt6vectorISt4pairIiiESaIS2_EEii`

`CUser::deleteDailyStackableItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867e734` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867e734  _ZN5CUser24deleteDailyStackableItemERSt6vectorISt4pairIiiESaIS2_EEii
#           CUser::deleteDailyStackableItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, int)
# range [0x0867e734, 0x0867e897]
0867e734 +0x000:  push   %ebp
0867e735 +0x001:  mov    %esp,%ebp
0867e737 +0x003:  push   %ebx
0867e738 +0x004:  sub    $0x84,%esp
0867e73e +0x00a:  mov    0x8(%ebp),%eax
0867e741 +0x00d:  mov    %eax,(%esp)
0867e744 +0x010:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0867e749 +0x015:  test   %eax,%eax
0867e74b +0x017:  sete   %al
0867e74e +0x01a:  test   %al,%al
0867e750 +0x01c:  jne    0867e891 <+0x15d>
0867e756 +0x022:  mov    0x8(%ebp),%eax
0867e759 +0x025:  mov    %eax,(%esp)
0867e75c +0x028:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0867e761 +0x02d:  mov    %eax,-0x10(%ebp)
0867e764 +0x030:  mov    0x10(%ebp),%eax
0867e767 +0x033:  mov    %eax,-0x28(%ebp)
0867e76a +0x036:  jmp    0867e87e <+0x14a>
0867e76f +0x03b:  mov    -0x28(%ebp),%edx
0867e772 +0x03e:  lea    -0x65(%ebp),%eax
0867e775 +0x041:  mov    %edx,0xc(%esp)
0867e779 +0x045:  movl   $0x1,0x8(%esp)
0867e781 +0x04d:  mov    -0x10(%ebp),%edx
0867e784 +0x050:  mov    %edx,0x4(%esp)
0867e788 +0x054:  mov    %eax,(%esp)
0867e78b +0x057:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0867e790 +0x05c:  sub    $0x4,%esp
0867e793 +0x05f:  mov    -0x63(%ebp),%eax
0867e796 +0x062:  test   %eax,%eax
0867e798 +0x064:  je     0867e86e <+0x13a>
0867e79e +0x06a:  mov    -0x63(%ebp),%eax
0867e7a1 +0x06d:  mov    %eax,%ebx
0867e7a3 +0x06f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867e7a8 +0x074:  mov    %ebx,0x4(%esp)
0867e7ac +0x078:  mov    %eax,(%esp)
0867e7af +0x07b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0867e7b4 +0x080:  mov    %eax,-0xc(%ebp)
0867e7b7 +0x083:  cmpl   $0x0,-0xc(%ebp)
0867e7bb +0x087:  je     0867e871 <+0x13d>
0867e7c1 +0x08d:  mov    -0xc(%ebp),%eax
0867e7c4 +0x090:  mov    %eax,(%esp)
0867e7c7 +0x093:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0867e7cc +0x098:  xor    $0x1,%eax
0867e7cf +0x09b:  test   %al,%al
0867e7d1 +0x09d:  jne    0867e874 <+0x140>
0867e7d7 +0x0a3:  mov    -0xc(%ebp),%eax
0867e7da +0x0a6:  movzbl 0x3c5(%eax),%eax
0867e7e1 +0x0ad:  test   %al,%al
0867e7e3 +0x0af:  jle    0867e875 <+0x141>
0867e7e9 +0x0b5:  mov    0x8(%ebp),%eax
0867e7ec +0x0b8:  mov    %eax,(%esp)
0867e7ef +0x0bb:  call   080da2ac <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x449>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x449
0867e7f4 +0x0c0:  mov    -0x5e(%ebp),%edx
0867e7f7 +0x0c3:  mov    -0x28(%ebp),%eax
0867e7fa +0x0c6:  movl   $0x1,0x14(%esp)
0867e802 +0x0ce:  movl   $0x13,0x10(%esp)
0867e80a +0x0d6:  mov    %edx,0xc(%esp)
0867e80e +0x0da:  mov    %eax,0x8(%esp)
0867e812 +0x0de:  movl   $0x1,0x4(%esp)
0867e81a +0x0e6:  mov    -0x10(%ebp),%eax
0867e81d +0x0e9:  mov    %eax,(%esp)
0867e820 +0x0ec:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0867e825 +0x0f1:  movl   $0x0,-0x14(%ebp)
0867e82c +0x0f8:  lea    -0x1c(%ebp),%eax
0867e82f +0x0fb:  lea    -0x28(%ebp),%edx
0867e832 +0x0fe:  mov    %edx,0x8(%esp)
0867e836 +0x102:  lea    -0x14(%ebp),%edx
0867e839 +0x105:  mov    %edx,0x4(%esp)
0867e83d +0x109:  mov    %eax,(%esp)
0867e840 +0x10c:  call   085589fe <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x155f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x155f
0867e845 +0x111:  sub    $0x4,%esp
0867e848 +0x114:  lea    -0x1c(%ebp),%eax
0867e84b +0x117:  mov    %eax,0x4(%esp)
0867e84f +0x11b:  lea    -0x24(%ebp),%eax
0867e852 +0x11e:  mov    %eax,(%esp)
0867e855 +0x121:  call   08558a44 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x15a5>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x15a5
0867e85a +0x126:  lea    -0x24(%ebp),%eax
0867e85d +0x129:  mov    %eax,0x4(%esp)
0867e861 +0x12d:  mov    0xc(%ebp),%eax
0867e864 +0x130:  mov    %eax,(%esp)
0867e867 +0x133:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0867e86c +0x138:  jmp    0867e875 <+0x141>
0867e86e +0x13a:  nop
0867e86f +0x13b:  jmp    0867e875 <+0x141>
0867e871 +0x13d:  nop
0867e872 +0x13e:  jmp    0867e875 <+0x141>
0867e874 +0x140:  nop
0867e875 +0x141:  mov    -0x28(%ebp),%eax
0867e878 +0x144:  add    $0x1,%eax
0867e87b +0x147:  mov    %eax,-0x28(%ebp)
0867e87e +0x14a:  mov    -0x28(%ebp),%eax
0867e881 +0x14d:  cmp    0x14(%ebp),%eax
0867e884 +0x150:  setle  %al
0867e887 +0x153:  test   %al,%al
0867e889 +0x155:  jne    0867e76f <+0x3b>
0867e88f +0x15b:  jmp    0867e892 <+0x15e>
0867e891 +0x15d:  nop
0867e892 +0x15e:  mov    -0x4(%ebp),%ebx
0867e895 +0x161:  leave
0867e896 +0x162:  ret
0867e897 +0x163:  nop
```

## 反编译 C

```c
// CUser::deleteDailyStackableItem @ 0x867e734

/* CUser::deleteDailyStackableItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > >&, int, int) */

void __thiscall CUser::deleteDailyStackableItem(CUser *this,vector *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  CDataManager *this_00;
  undefined1 local_69 [2];
  int local_67;
  undefined4 local_62;
  int local_2c;
  pair<int,int> local_28 [8];
  ENUM_ITEMSPACE local_20 [8];
  int local_18;
  CInventory *local_14;
  CItem *local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 != 0) {
    local_14 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    for (local_2c = param_2; local_2c <= param_3; local_2c = local_2c + 1) {
      CInventory::GetInvenSlot((int)local_69,(int)local_14);
      iVar2 = local_67;
      if (local_67 != 0) {
        this_00 = (CDataManager *)G_CDataManager();
        local_10 = (CItem *)CDataManager::find_item(this_00,iVar2);
        if (((local_10 != (CItem *)0x0) && (cVar1 = CItem::is_stackable(local_10), cVar1 == '\x01'))
           && ('\0' < (char)local_10[0x3c5])) {
          CUserCharacInfo::enableSaveInven((CUserCharacInfo *)this);
          CInventory::delete_item(local_14,1,local_2c,local_62,0x13,1);
          local_18 = 0;
          std::make_pair<ENUM_ITEMSPACE,int&>(local_20,&local_18);
          std::pair<int,int>::pair<ENUM_ITEMSPACE,int>(local_28,local_20);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,
                     local_28);
        }
      }
    }
  }
  return;
}
```
