# isEnableAvatarSocketAction

`_ZN5CUser26isEnableAvatarSocketActionEv`

`CUser::isEnableAvatarSocketAction()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086810a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086810a8  _ZN5CUser26isEnableAvatarSocketActionEv
#           CUser::isEnableAvatarSocketAction()
# range [0x086810a8, 0x0868115f]
086810a8 +0x00:  push   %ebp
086810a9 +0x01:  mov    %esp,%ebp
086810ab +0x03:  sub    $0x28,%esp
086810ae +0x06:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
086810b3 +0x0b:  movl   $0x11,0x8(%esp)
086810bb +0x13:  mov    0x8(%ebp),%edx
086810be +0x16:  mov    %edx,0x4(%esp)
086810c2 +0x1a:  mov    %eax,(%esp)
086810c5 +0x1d:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
086810ca +0x22:  mov    %eax,-0xc(%ebp)
086810cd +0x25:  cmpl   $0x0,-0xc(%ebp)
086810d1 +0x29:  je     086810db <+0x33>
086810d3 +0x2b:  mov    -0xc(%ebp),%eax
086810d6 +0x2e:  jmp    0868115e <+0xb6>
086810db +0x33:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
086810e0 +0x38:  mov    0x8(%ebp),%edx
086810e3 +0x3b:  mov    %edx,0x4(%esp)
086810e7 +0x3f:  mov    %eax,(%esp)
086810ea +0x42:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
086810ef +0x47:  test   %al,%al
086810f1 +0x49:  je     086810fa <+0x52>
086810f3 +0x4b:  mov    $0x13,%eax
086810f8 +0x50:  jmp    0868115e <+0xb6>
086810fa +0x52:  mov    0x8(%ebp),%eax
086810fd +0x55:  mov    %eax,(%esp)
08681100 +0x58:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
08681105 +0x5d:  test   %al,%al
08681107 +0x5f:  je     08681110 <+0x68>
08681109 +0x61:  mov    $0x13,%eax
0868110e +0x66:  jmp    0868115e <+0xb6>
08681110 +0x68:  mov    0x8(%ebp),%eax
08681113 +0x6b:  mov    %eax,(%esp)
08681116 +0x6e:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0868111b +0x73:  test   %al,%al
0868111d +0x75:  je     08681126 <+0x7e>
0868111f +0x77:  mov    $0x13,%eax
08681124 +0x7c:  jmp    0868115e <+0xb6>
08681126 +0x7e:  mov    0x8(%ebp),%eax
08681129 +0x81:  mov    %eax,(%esp)
0868112c +0x84:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
08681131 +0x89:  test   %eax,%eax
08681133 +0x8b:  setne  %al
08681136 +0x8e:  test   %al,%al
08681138 +0x90:  je     08681141 <+0x99>
0868113a +0x92:  mov    $0x13,%eax
0868113f +0x97:  jmp    0868115e <+0xb6>
08681141 +0x99:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08681146 +0x9e:  mov    %eax,(%esp)
08681149 +0xa1:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
0868114e +0xa6:  test   %al,%al
08681150 +0xa8:  je     08681159 <+0xb1>
08681152 +0xaa:  mov    $0x13,%eax
08681157 +0xaf:  jmp    0868115e <+0xb6>
08681159 +0xb1:  mov    $0x0,%eax
0868115e +0xb6:  leave
0868115f +0xb7:  ret
```

## 反编译 C

```c
// CUser::isEnableAvatarSocketAction @ 0x86810a8

/* CUser::isEnableAvatarSocketAction() */

int __thiscall CUser::isEnableAvatarSocketAction(CUser *this)

{
  char cVar1;
  int iVar2;
  CPrivateStoreMgr *this_00;
  GameWorld *this_01;
  
  iVar2 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,this,0x11);
  if (iVar2 == 0) {
    this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar1 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,this);
    if (cVar1 == '\0') {
      cVar1 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)this);
      if (cVar1 == '\0') {
        cVar1 = CheckInTrade(this);
        if (cVar1 == '\0') {
          iVar2 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)this);
          if (iVar2 == 0) {
            this_01 = (GameWorld *)G_GameWorld();
            cVar1 = GameWorld::IsPVPChannel(this_01);
            if (cVar1 == '\0') {
              iVar2 = 0;
            }
            else {
              iVar2 = 0x13;
            }
          }
          else {
            iVar2 = 0x13;
          }
        }
        else {
          iVar2 = 0x13;
        }
      }
      else {
        iVar2 = 0x13;
      }
    }
    else {
      iVar2 = 0x13;
    }
  }
  return iVar2;
}
```
