# delete_item

`_ZN5CUser11delete_itemEcimi14eItemDelReason`

`CUser::delete_item(char, int, unsigned long, int, eItemDelReason)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866285c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866285c  _ZN5CUser11delete_itemEcimi14eItemDelReason
#           CUser::delete_item(char, int, unsigned long, int, eItemDelReason)
# range [0x0866285c, 0x08662ab9]
0866285c +0x000:  push   %ebp
0866285d +0x001:  mov    %esp,%ebp
0866285f +0x003:  push   %ebx
08662860 +0x004:  sub    $0x84,%esp
08662866 +0x00a:  mov    0xc(%ebp),%eax
08662869 +0x00d:  mov    %al,-0x5c(%ebp)
0866286c +0x010:  mov    0x8(%ebp),%eax
0866286f +0x013:  mov    %eax,(%esp)
08662872 +0x016:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08662877 +0x01b:  test   %al,%al
08662879 +0x01d:  je     08662885 <+0x29>
0866287b +0x01f:  mov    $0x13,%eax
08662880 +0x024:  jmp    08662ab5 <+0x259>
08662885 +0x029:  movsbl -0x5c(%ebp),%eax
08662889 +0x02d:  mov    %eax,(%esp)
0866288c +0x030:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
08662891 +0x035:  mov    %eax,%ebx
08662893 +0x037:  mov    0x8(%ebp),%eax
08662896 +0x03a:  mov    %eax,(%esp)
08662899 +0x03d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0866289e +0x042:  lea    -0x49(%ebp),%edx
086628a1 +0x045:  mov    0x10(%ebp),%ecx
086628a4 +0x048:  mov    %ecx,0xc(%esp)
086628a8 +0x04c:  mov    %ebx,0x8(%esp)
086628ac +0x050:  mov    %eax,0x4(%esp)
086628b0 +0x054:  mov    %edx,(%esp)
086628b3 +0x057:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
086628b8 +0x05c:  sub    $0x4,%esp
086628bb +0x05f:  mov    -0x47(%ebp),%eax
086628be +0x062:  cmp    0x14(%ebp),%eax
086628c1 +0x065:  setne  %al
086628c4 +0x068:  test   %al,%al
086628c6 +0x06a:  je     086628d2 <+0x76>
086628c8 +0x06c:  mov    $0x11,%eax
086628cd +0x071:  jmp    08662ab5 <+0x259>
086628d2 +0x076:  movsbl -0x5c(%ebp),%eax
086628d6 +0x07a:  cmp    $0x7,%eax
086628d9 +0x07d:  ja     08662ab0 <+0x254>
086628df +0x083:  mov    &data#39b0558a(.rodata)(,%eax,4),%eax
086628e6 +0x08a:  jmp    *%eax
086628e8 +0x08c:  mov    0x8(%ebp),%eax
086628eb +0x08f:  mov    %eax,(%esp)
086628ee +0x092:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086628f3 +0x097:  movl   $0x1,0x14(%esp)
086628fb +0x09f:  mov    0x1c(%ebp),%edx
086628fe +0x0a2:  mov    %edx,0x10(%esp)
08662902 +0x0a6:  mov    0x18(%ebp),%edx
08662905 +0x0a9:  mov    %edx,0xc(%esp)
08662909 +0x0ad:  mov    0x10(%ebp),%edx
0866290c +0x0b0:  mov    %edx,0x8(%esp)
08662910 +0x0b4:  movl   $0x1,0x4(%esp)
08662918 +0x0bc:  mov    %eax,(%esp)
0866291b +0x0bf:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08662920 +0x0c4:  xor    $0x1,%eax
08662923 +0x0c7:  test   %al,%al
08662925 +0x0c9:  je     08662aa9 <+0x24d>
0866292b +0x0cf:  mov    $0x11,%eax
08662930 +0x0d4:  jmp    08662ab5 <+0x259>
08662935 +0x0d9:  mov    0x8(%ebp),%eax
08662938 +0x0dc:  mov    %eax,(%esp)
0866293b +0x0df:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
08662940 +0x0e4:  mov    0x1c(%ebp),%edx
08662943 +0x0e7:  mov    %edx,0xc(%esp)
08662947 +0x0eb:  mov    0x18(%ebp),%edx
0866294a +0x0ee:  mov    %edx,0x8(%esp)
0866294e +0x0f2:  mov    0x10(%ebp),%edx
08662951 +0x0f5:  mov    %edx,0x4(%esp)
08662955 +0x0f9:  mov    %eax,(%esp)
08662958 +0x0fc:  call   0850b794 <_ZN6CCargo11delete_itemEii14eItemDelReason>  ; CCargo::delete_item(int, int, eItemDelReason)
0866295d +0x101:  xor    $0x1,%eax
08662960 +0x104:  test   %al,%al
08662962 +0x106:  je     08662aac <+0x250>
08662968 +0x10c:  mov    $0x11,%eax
0866296d +0x111:  jmp    08662ab5 <+0x259>
08662972 +0x116:  mov    0x8(%ebp),%eax
08662975 +0x119:  mov    %eax,(%esp)
08662978 +0x11c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0866297d +0x121:  movl   $0x1,0x14(%esp)
08662985 +0x129:  mov    0x1c(%ebp),%edx
08662988 +0x12c:  mov    %edx,0x10(%esp)
0866298c +0x130:  mov    0x18(%ebp),%edx
0866298f +0x133:  mov    %edx,0xc(%esp)
08662993 +0x137:  mov    0x10(%ebp),%edx
08662996 +0x13a:  mov    %edx,0x8(%esp)
0866299a +0x13e:  movl   $0x0,0x4(%esp)
086629a2 +0x146:  mov    %eax,(%esp)
086629a5 +0x149:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
086629aa +0x14e:  xor    $0x1,%eax
086629ad +0x151:  test   %al,%al
086629af +0x153:  je     086629bb <+0x15f>
086629b1 +0x155:  mov    $0x11,%eax
086629b6 +0x15a:  jmp    08662ab5 <+0x259>
086629bb +0x15f:  mov    0x10(%ebp),%eax
086629be +0x162:  mov    %eax,0x4(%esp)
086629c2 +0x166:  mov    0x8(%ebp),%eax
086629c5 +0x169:  mov    %eax,(%esp)
086629c8 +0x16c:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
086629cd +0x171:  jmp    08662ab0 <+0x254>
086629d2 +0x176:  mov    0x8(%ebp),%eax
086629d5 +0x179:  mov    %eax,(%esp)
086629d8 +0x17c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086629dd +0x181:  movl   $0x1,0x14(%esp)
086629e5 +0x189:  mov    0x1c(%ebp),%edx
086629e8 +0x18c:  mov    %edx,0x10(%esp)
086629ec +0x190:  mov    0x18(%ebp),%edx
086629ef +0x193:  mov    %edx,0xc(%esp)
086629f3 +0x197:  mov    0x10(%ebp),%edx
086629f6 +0x19a:  mov    %edx,0x8(%esp)
086629fa +0x19e:  movl   $0x2,0x4(%esp)
08662a02 +0x1a6:  mov    %eax,(%esp)
08662a05 +0x1a9:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08662a0a +0x1ae:  xor    $0x1,%eax
08662a0d +0x1b1:  test   %al,%al
08662a0f +0x1b3:  je     08662aaf <+0x253>
08662a15 +0x1b9:  mov    $0x11,%eax
08662a1a +0x1be:  jmp    08662ab5 <+0x259>
08662a1f +0x1c3:  mov    0x8(%ebp),%eax
08662a22 +0x1c6:  mov    %eax,(%esp)
08662a25 +0x1c9:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08662a2a +0x1ce:  mov    0x10(%ebp),%edx
08662a2d +0x1d1:  mov    %edx,0x8(%esp)
08662a31 +0x1d5:  movl   $0x3,0x4(%esp)
08662a39 +0x1dd:  mov    %eax,(%esp)
08662a3c +0x1e0:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
08662a41 +0x1e5:  mov    %eax,-0xc(%ebp)
08662a44 +0x1e8:  cmpl   $0x0,-0xc(%ebp)
08662a48 +0x1ec:  jne    08662a51 <+0x1f5>
08662a4a +0x1ee:  mov    $0x11,%eax
08662a4f +0x1f3:  jmp    08662ab5 <+0x259>
08662a51 +0x1f5:  mov    -0xc(%ebp),%eax
08662a54 +0x1f8:  movzbl 0x1(%eax),%eax
08662a58 +0x1fc:  cmp    $0x5,%al
08662a5a +0x1fe:  jne    08662a63 <+0x207>
08662a5c +0x200:  mov    $0x11,%eax
08662a61 +0x205:  jmp    08662ab5 <+0x259>
08662a63 +0x207:  mov    0x8(%ebp),%eax
08662a66 +0x20a:  mov    %eax,(%esp)
08662a69 +0x20d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08662a6e +0x212:  movl   $0x1,0x14(%esp)
08662a76 +0x21a:  mov    0x1c(%ebp),%edx
08662a79 +0x21d:  mov    %edx,0x10(%esp)
08662a7d +0x221:  mov    0x18(%ebp),%edx
08662a80 +0x224:  mov    %edx,0xc(%esp)
08662a84 +0x228:  mov    0x10(%ebp),%edx
08662a87 +0x22b:  mov    %edx,0x8(%esp)
08662a8b +0x22f:  movl   $0x3,0x4(%esp)
08662a93 +0x237:  mov    %eax,(%esp)
08662a96 +0x23a:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08662a9b +0x23f:  xor    $0x1,%eax
08662a9e +0x242:  test   %al,%al
08662aa0 +0x244:  je     08662ab0 <+0x254>
08662aa2 +0x246:  mov    $0x11,%eax
08662aa7 +0x24b:  jmp    08662ab5 <+0x259>
08662aa9 +0x24d:  nop
08662aaa +0x24e:  jmp    08662ab0 <+0x254>
08662aac +0x250:  nop
08662aad +0x251:  jmp    08662ab0 <+0x254>
08662aaf +0x253:  nop
08662ab0 +0x254:  mov    $0x0,%eax
08662ab5 +0x259:  mov    -0x4(%ebp),%ebx
08662ab8 +0x25c:  leave
08662ab9 +0x25d:  ret
```

## 反编译 C

```c
// CUser::delete_item @ 0x866285c

/* CUser::delete_item(char, int, unsigned long, int, eItemDelReason) */

undefined4 __thiscall
CUser::delete_item(CUser *this,char param_1,int param_2,int param_3,undefined4 param_4,
                  undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CCargo *pCVar4;
  CInventory *pCVar5;
  undefined1 local_4d [2];
  int local_4b;
  int local_10;
  
  cVar1 = CheckInTrade(this);
  if (cVar1 == '\0') {
    GetInvenTypeFromItemSpace((int)param_1);
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    CInventory::GetInvenSlot((int)local_4d,iVar3);
    if (local_4b == param_3) {
      switch(param_1) {
      case '\0':
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        cVar1 = CInventory::delete_item(pCVar5,1,param_2,param_4,param_6,1);
        if (cVar1 != '\x01') {
          return 0x11;
        }
        break;
      case '\x01':
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        cVar1 = CInventory::delete_item(pCVar5,2,param_2,param_4,param_6,1);
        if (cVar1 != '\x01') {
          return 0x11;
        }
        break;
      case '\x02':
        pCVar4 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)this);
        cVar1 = CCargo::delete_item(pCVar4,param_2,param_4,param_6);
        if (cVar1 != '\x01') {
          return 0x11;
        }
        break;
      case '\x03':
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        cVar1 = CInventory::delete_item(pCVar5,0,param_2,param_4,param_6,1);
        if (cVar1 != '\x01') {
          return 0x11;
        }
        send_equip(this,param_2);
        break;
      case '\a':
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        local_10 = CInventory::GetInvenRef(pCVar5,3,param_2);
        if (local_10 == 0) {
          return 0x11;
        }
        if (*(char *)(local_10 + 1) == '\x05') {
          return 0x11;
        }
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        cVar1 = CInventory::delete_item(pCVar5,3,param_2,param_4,param_6,1);
        if (cVar1 != '\x01') {
          return 0x11;
        }
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 0x11;
    }
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}
```
