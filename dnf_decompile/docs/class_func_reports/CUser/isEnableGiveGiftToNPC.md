# isEnableGiveGiftToNPC

`_ZN5CUser21isEnableGiveGiftToNPCEv`

`CUser::isEnableGiveGiftToNPC()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08681160` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08681160  _ZN5CUser21isEnableGiveGiftToNPCEv
#           CUser::isEnableGiveGiftToNPC()
# range [0x08681160, 0x08681217]
08681160 +0x00:  push   %ebp
08681161 +0x01:  mov    %esp,%ebp
08681163 +0x03:  sub    $0x28,%esp
08681166 +0x06:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0868116b +0x0b:  movl   $0x15,0x8(%esp)
08681173 +0x13:  mov    0x8(%ebp),%edx
08681176 +0x16:  mov    %edx,0x4(%esp)
0868117a +0x1a:  mov    %eax,(%esp)
0868117d +0x1d:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08681182 +0x22:  mov    %eax,-0xc(%ebp)
08681185 +0x25:  cmpl   $0x0,-0xc(%ebp)
08681189 +0x29:  je     08681193 <+0x33>
0868118b +0x2b:  mov    -0xc(%ebp),%eax
0868118e +0x2e:  jmp    08681216 <+0xb6>
08681193 +0x33:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
08681198 +0x38:  mov    0x8(%ebp),%edx
0868119b +0x3b:  mov    %edx,0x4(%esp)
0868119f +0x3f:  mov    %eax,(%esp)
086811a2 +0x42:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
086811a7 +0x47:  test   %al,%al
086811a9 +0x49:  je     086811b2 <+0x52>
086811ab +0x4b:  mov    $0x13,%eax
086811b0 +0x50:  jmp    08681216 <+0xb6>
086811b2 +0x52:  mov    0x8(%ebp),%eax
086811b5 +0x55:  mov    %eax,(%esp)
086811b8 +0x58:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
086811bd +0x5d:  test   %al,%al
086811bf +0x5f:  je     086811c8 <+0x68>
086811c1 +0x61:  mov    $0x13,%eax
086811c6 +0x66:  jmp    08681216 <+0xb6>
086811c8 +0x68:  mov    0x8(%ebp),%eax
086811cb +0x6b:  mov    %eax,(%esp)
086811ce +0x6e:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
086811d3 +0x73:  test   %al,%al
086811d5 +0x75:  je     086811de <+0x7e>
086811d7 +0x77:  mov    $0x13,%eax
086811dc +0x7c:  jmp    08681216 <+0xb6>
086811de +0x7e:  mov    0x8(%ebp),%eax
086811e1 +0x81:  mov    %eax,(%esp)
086811e4 +0x84:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
086811e9 +0x89:  test   %eax,%eax
086811eb +0x8b:  setne  %al
086811ee +0x8e:  test   %al,%al
086811f0 +0x90:  je     086811f9 <+0x99>
086811f2 +0x92:  mov    $0x13,%eax
086811f7 +0x97:  jmp    08681216 <+0xb6>
086811f9 +0x99:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086811fe +0x9e:  mov    %eax,(%esp)
08681201 +0xa1:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
08681206 +0xa6:  test   %al,%al
08681208 +0xa8:  je     08681211 <+0xb1>
0868120a +0xaa:  mov    $0x13,%eax
0868120f +0xaf:  jmp    08681216 <+0xb6>
08681211 +0xb1:  mov    $0x0,%eax
08681216 +0xb6:  leave
08681217 +0xb7:  ret
```

## 反编译 C

```c
// CUser::isEnableGiveGiftToNPC @ 0x8681160

/* CUser::isEnableGiveGiftToNPC() */

int __thiscall CUser::isEnableGiveGiftToNPC(CUser *this)

{
  char cVar1;
  int iVar2;
  CPrivateStoreMgr *this_00;
  GameWorld *this_01;
  
  iVar2 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,this,0x15);
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
