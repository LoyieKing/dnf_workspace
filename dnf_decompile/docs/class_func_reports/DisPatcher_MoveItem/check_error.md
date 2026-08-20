# check_error

`_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_MoveItem::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_MoveItem` | `0x081c57a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c57a0  _ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_MoveItem::check_error(CUser*, MSG_BASE&)
# range [0x081c57a0, 0x081c5903]
081c57a0 +0x000:  push   %ebp
081c57a1 +0x001:  mov    %esp,%ebp
081c57a3 +0x003:  push   %ebx
081c57a4 +0x004:  sub    $0x64,%esp
081c57a7 +0x007:  mov    0x10(%ebp),%eax
081c57aa +0x00a:  mov    %eax,-0x10(%ebp)
081c57ad +0x00d:  mov    -0x10(%ebp),%eax
081c57b0 +0x010:  mov    0x14(%eax),%eax
081c57b3 +0x013:  test   %eax,%eax
081c57b5 +0x015:  jns    081c57c1 <+0x21>
081c57b7 +0x017:  mov    $0xffffffff,%eax
081c57bc +0x01c:  jmp    081c58fe <+0x15e>
081c57c1 +0x021:  movb   $0x0,-0x9(%ebp)
081c57c5 +0x025:  mov    -0x10(%ebp),%eax
081c57c8 +0x028:  movzbl 0x18(%eax),%eax
081c57cc +0x02c:  movsbl %al,%eax
081c57cf +0x02f:  cmp    $0x5,%eax
081c57d2 +0x032:  jg     081c57e3 <+0x43>
081c57d4 +0x034:  cmp    $0x4,%eax
081c57d7 +0x037:  jge    081c57ec <+0x4c>
081c57d9 +0x039:  cmp    $0x3,%eax
081c57dc +0x03c:  je     081c583f <+0x9f>
081c57de +0x03e:  jmp    081c58a9 <+0x109>
081c57e3 +0x043:  cmp    $0xe,%eax
081c57e6 +0x046:  jne    081c58a9 <+0x109>
081c57ec +0x04c:  movb   $0x1,-0x9(%ebp)
081c57f0 +0x050:  movb   $0x1,-0x4e(%ebp)
081c57f4 +0x054:  mov    -0x10(%ebp),%eax
081c57f7 +0x057:  movzwl 0xe(%eax),%eax
081c57fb +0x05b:  movswl %ax,%ebx
081c57fe +0x05e:  mov    -0x10(%ebp),%eax
081c5801 +0x061:  movzbl 0xd(%eax),%eax
081c5805 +0x065:  movsbl %al,%eax
081c5808 +0x068:  mov    %eax,(%esp)
081c580b +0x06b:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081c5810 +0x070:  lea    -0x4e(%ebp),%edx
081c5813 +0x073:  mov    %edx,0xc(%esp)
081c5817 +0x077:  mov    %ebx,0x8(%esp)
081c581b +0x07b:  mov    %eax,0x4(%esp)
081c581f +0x07f:  mov    0xc(%ebp),%eax
081c5822 +0x082:  mov    %eax,(%esp)
081c5825 +0x085:  call   0812032e <_Z36CheckItemTradeLimitCountToMoveByUserR5CUseriiRb>  ; CheckItemTradeLimitCountToMoveByUser(CUser&, int, int, bool&)
081c582a +0x08a:  movzbl -0x4e(%ebp),%eax
081c582e +0x08e:  xor    $0x1,%eax
081c5831 +0x091:  test   %al,%al
081c5833 +0x093:  je     081c58a8 <+0x108>
081c5835 +0x095:  mov    $0x72,%eax
081c583a +0x09a:  jmp    081c58fe <+0x15e>
081c583f +0x09f:  mov    -0x10(%ebp),%eax
081c5842 +0x0a2:  movzbl 0xd(%eax),%eax
081c5846 +0x0a6:  cmp    $0x7,%al
081c5848 +0x0a8:  jne    081c5899 <+0xf9>
081c584a +0x0aa:  mov    -0x10(%ebp),%eax
081c584d +0x0ad:  movzwl 0xe(%eax),%eax
081c5851 +0x0b1:  movswl %ax,%ebx
081c5854 +0x0b4:  mov    0xc(%ebp),%eax
081c5857 +0x0b7:  mov    %eax,(%esp)
081c585a +0x0ba:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081c585f +0x0bf:  lea    -0x4d(%ebp),%edx
081c5862 +0x0c2:  mov    %ebx,0xc(%esp)
081c5866 +0x0c6:  movl   $0x3,0x8(%esp)
081c586e +0x0ce:  mov    %eax,0x4(%esp)
081c5872 +0x0d2:  mov    %edx,(%esp)
081c5875 +0x0d5:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081c587a +0x0da:  sub    $0x4,%esp
081c587d +0x0dd:  movzbl -0x4d(%ebp),%eax
081c5881 +0x0e1:  test   %al,%al
081c5883 +0x0e3:  je     081c5899 <+0xf9>
081c5885 +0x0e5:  mov    -0x10(%ebp),%eax
081c5888 +0x0e8:  movzwl 0xe(%eax),%eax
081c588c +0x0ec:  cmp    $0x8b,%ax
081c5890 +0x0f0:  jle    081c5899 <+0xf9>
081c5892 +0x0f2:  mov    $0x1,%eax
081c5897 +0x0f7:  jmp    081c589e <+0xfe>
081c5899 +0x0f9:  mov    $0x0,%eax
081c589e +0x0fe:  test   %al,%al
081c58a0 +0x100:  je     081c58a9 <+0x109>
081c58a2 +0x102:  movb   $0x1,-0x9(%ebp)
081c58a6 +0x106:  jmp    081c58a9 <+0x109>
081c58a8 +0x108:  nop
081c58a9 +0x109:  cmpb   $0x0,-0x9(%ebp)
081c58ad +0x10d:  je     081c58e9 <+0x149>
081c58af +0x10f:  mov    -0x10(%ebp),%eax
081c58b2 +0x112:  movzwl 0xe(%eax),%eax
081c58b6 +0x116:  movswl %ax,%ebx
081c58b9 +0x119:  mov    -0x10(%ebp),%eax
081c58bc +0x11c:  movzbl 0xd(%eax),%eax
081c58c0 +0x120:  movsbl %al,%eax
081c58c3 +0x123:  mov    %eax,(%esp)
081c58c6 +0x126:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081c58cb +0x12b:  mov    %ebx,0x8(%esp)
081c58cf +0x12f:  mov    %eax,0x4(%esp)
081c58d3 +0x133:  mov    0xc(%ebp),%eax
081c58d6 +0x136:  mov    %eax,(%esp)
081c58d9 +0x139:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081c58de +0x13e:  test   %al,%al
081c58e0 +0x140:  je     081c58e9 <+0x149>
081c58e2 +0x142:  mov    $0x1,%eax
081c58e7 +0x147:  jmp    081c58ee <+0x14e>
081c58e9 +0x149:  mov    $0x0,%eax
081c58ee +0x14e:  test   %al,%al
081c58f0 +0x150:  je     081c58f9 <+0x159>
081c58f2 +0x152:  mov    $0xd5,%eax
081c58f7 +0x157:  jmp    081c58fe <+0x15e>
081c58f9 +0x159:  mov    $0x0,%eax
081c58fe +0x15e:  mov    -0x4(%ebp),%ebx
081c5901 +0x161:  leave
081c5902 +0x162:  ret
081c5903 +0x163:  nop
```

## 反编译 C

```c
// DisPatcher_MoveItem::check_error @ 0x81c57a0

/* DisPatcher_MoveItem::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_MoveItem::check_error(DisPatcher_MoveItem *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  bool local_52;
  char local_51 [61];
  MSG_BASE *local_14;
  char local_d;
  
  local_14 = param_2;
  if (*(int *)(param_2 + 0x14) < 0) {
    return 0xffffffff;
  }
  local_d = '\0';
  MVar1 = param_2[0x18];
  if ((char)MVar1 < '\x06') {
    if ((char)MVar1 < '\x04') {
      if (MVar1 != (MSG_BASE)0x3) goto LAB_081c58a9;
      if (param_2[0xd] == (MSG_BASE)0x7) {
        iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_51,iVar5);
        if ((local_51[0] == '\0') || (*(short *)(local_14 + 0xe) < 0x8c)) goto LAB_081c5899;
        bVar3 = true;
      }
      else {
LAB_081c5899:
        bVar3 = false;
      }
      if (bVar3) {
        local_d = '\x01';
      }
    }
    else {
LAB_081c57ec:
      local_d = '\x01';
      local_52 = true;
      sVar2 = *(short *)(param_2 + 0xe);
      iVar5 = GetInvenTypeFromItemSpace((int)(char)param_2[0xd]);
      CheckItemTradeLimitCountToMoveByUser(param_1,iVar5,(int)sVar2,&local_52);
      if (local_52 != true) {
        return 0x72;
      }
    }
  }
  else if (MVar1 == (MSG_BASE)0xe) goto LAB_081c57ec;
LAB_081c58a9:
  if (local_d != '\0') {
    sVar2 = *(short *)(local_14 + 0xe);
    iVar5 = GetInvenTypeFromItemSpace((int)(char)local_14[0xd]);
    cVar4 = CUser::CheckItemLock(param_1,iVar5,(int)sVar2);
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_081c58ee;
    }
  }
  bVar3 = false;
LAB_081c58ee:
  if (bVar3) {
    uVar6 = 0xd5;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
```
