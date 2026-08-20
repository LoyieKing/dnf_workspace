# CheckUnusableEquipmentInUser

`_ZN18online_preliminary18COnlinePreliminary28CheckUnusableEquipmentInUserEP5CUser`

`online_preliminary::COnlinePreliminary::CheckUnusableEquipmentInUser(CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560a42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560a42  _ZN18online_preliminary18COnlinePreliminary28CheckUnusableEquipmentInUserEP5CUser
#           online_preliminary::COnlinePreliminary::CheckUnusableEquipmentInUser(CUser*)
# range [0x08560a42, 0x08560ae3]
08560a42 +0x00:  push   %ebp
08560a43 +0x01:  mov    %esp,%ebp
08560a45 +0x03:  sub    $0x28,%esp
08560a48 +0x06:  movl   $0x0,-0x10(%ebp)
08560a4f +0x0d:  jmp    08560ace <+0x8c>
08560a51 +0x0f:  mov    0x8(%ebp),%eax
08560a54 +0x12:  mov    %eax,(%esp)
08560a57 +0x15:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08560a5c +0x1a:  mov    -0x10(%ebp),%edx
08560a5f +0x1d:  mov    %edx,0x8(%esp)
08560a63 +0x21:  movl   $0x0,0x4(%esp)
08560a6b +0x29:  mov    %eax,(%esp)
08560a6e +0x2c:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08560a73 +0x31:  mov    %eax,-0xc(%ebp)
08560a76 +0x34:  mov    -0xc(%ebp),%eax
08560a79 +0x37:  mov    %eax,(%esp)
08560a7c +0x3a:  call   08560920 <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item>  ; online_preliminary::COnlinePreliminary::CheckUnusableEquipment(Inven_Item const*)
08560a81 +0x3f:  xor    $0x1,%eax
08560a84 +0x42:  test   %al,%al
08560a86 +0x44:  je     08560aca <+0x88>
08560a88 +0x46:  movl   $0x0,0xc(%esp)
08560a90 +0x4e:  movl   $"game_server_msg_145",0x8(%esp)
08560a98 +0x56:  movl   $0x4,0x4(%esp)
08560aa0 +0x5e:  movl   $&g_scriptStringManager_,(%esp)
08560aa7 +0x65:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08560aac +0x6a:  movl   $0x0,0x8(%esp)
08560ab4 +0x72:  mov    %eax,0x4(%esp)
08560ab8 +0x76:  mov    0x8(%ebp),%eax
08560abb +0x79:  mov    %eax,(%esp)
08560abe +0x7c:  call   086886ce <_ZN5CUser21SendNotiPacketMessageEPKc17ENUM_MESSAGE_TYPE>  ; CUser::SendNotiPacketMessage(char const*, ENUM_MESSAGE_TYPE)
08560ac3 +0x81:  mov    $0x0,%eax
08560ac8 +0x86:  jmp    08560ae2 <+0xa0>
08560aca +0x88:  addl   $0x1,-0x10(%ebp)
08560ace +0x8c:  cmpl   $0x16,-0x10(%ebp)
08560ad2 +0x90:  setle  %al
08560ad5 +0x93:  test   %al,%al
08560ad7 +0x95:  jne    08560a51 <+0xf>
08560add +0x9b:  mov    $0x1,%eax
08560ae2 +0xa0:  leave
08560ae3 +0xa1:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::CheckUnusableEquipmentInUser @ 0x8560a42

/* online_preliminary::COnlinePreliminary::CheckUnusableEquipmentInUser(CUser*) */

undefined4 online_preliminary::COnlinePreliminary::CheckUnusableEquipmentInUser(CUser *param_1)

{
  char cVar1;
  CInventory *this;
  Inven_Item *pIVar2;
  undefined4 uVar3;
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (0x16 < local_14) {
      return 1;
    }
    this = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    pIVar2 = (Inven_Item *)CInventory::GetInvenRef(this,0,local_14);
    cVar1 = CheckUnusableEquipment(pIVar2);
    if (cVar1 != '\x01') break;
    local_14 = local_14 + 1;
  }
  uVar3 = RDARScriptStringManager::findString
                    ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_145",
                     (bool *)0x0);
  CUser::SendNotiPacketMessage(param_1,uVar3,0);
  return 0;
}
```
