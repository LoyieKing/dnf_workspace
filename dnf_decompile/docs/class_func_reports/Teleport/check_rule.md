# check_rule

`_ZN8Teleport10check_ruleEP5CUser`

`Teleport::check_rule(CUser*)`

| 类 | 地址 |
|---|---|
| `Teleport` | `0x08283c5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08283c5a  _ZN8Teleport10check_ruleEP5CUser
#           Teleport::check_rule(CUser*)
# range [0x08283c5a, 0x08283d81]
08283c5a +0x000:  push   %ebp
08283c5b +0x001:  mov    %esp,%ebp
08283c5d +0x003:  sub    $0x28,%esp
08283c60 +0x006:  cmpl   $0x0,0x8(%ebp)
08283c64 +0x00a:  jne    08283c70 <+0x16>
08283c66 +0x00c:  mov    $0x1,%eax
08283c6b +0x011:  jmp    08283d7f <+0x125>
08283c70 +0x016:  mov    0x8(%ebp),%eax
08283c73 +0x019:  mov    %eax,(%esp)
08283c76 +0x01c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08283c7b +0x021:  cmp    $0x3,%eax
08283c7e +0x024:  setne  %al
08283c81 +0x027:  test   %al,%al
08283c83 +0x029:  je     08283c8f <+0x35>
08283c85 +0x02b:  mov    $0x13,%eax
08283c8a +0x030:  jmp    08283d7f <+0x125>
08283c8f +0x035:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08283c94 +0x03a:  mov    %eax,(%esp)
08283c97 +0x03d:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
08283c9c +0x042:  test   %al,%al
08283c9e +0x044:  jne    08283cb1 <+0x57>
08283ca0 +0x046:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08283ca5 +0x04b:  mov    %eax,(%esp)
08283ca8 +0x04e:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
08283cad +0x053:  test   %al,%al
08283caf +0x055:  je     08283cb8 <+0x5e>
08283cb1 +0x057:  mov    $0x1,%eax
08283cb6 +0x05c:  jmp    08283cbd <+0x63>
08283cb8 +0x05e:  mov    $0x0,%eax
08283cbd +0x063:  test   %al,%al
08283cbf +0x065:  je     08283ccb <+0x71>
08283cc1 +0x067:  mov    $0x13,%eax
08283cc6 +0x06c:  jmp    08283d7f <+0x125>
08283ccb +0x071:  mov    0x8(%ebp),%eax
08283cce +0x074:  mov    %eax,(%esp)
08283cd1 +0x077:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
08283cd6 +0x07c:  cmp    $0x7,%al
08283cd8 +0x07e:  sete   %al
08283cdb +0x081:  test   %al,%al
08283cdd +0x083:  je     08283ce9 <+0x8f>
08283cdf +0x085:  mov    $0xbe,%eax
08283ce4 +0x08a:  jmp    08283d7f <+0x125>
08283ce9 +0x08f:  mov    0x8(%ebp),%eax
08283cec +0x092:  mov    %eax,(%esp)
08283cef +0x095:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
08283cf4 +0x09a:  xor    $0x1,%eax
08283cf7 +0x09d:  test   %al,%al
08283cf9 +0x09f:  je     08283d2a <+0xd0>
08283cfb +0x0a1:  movl   $0x0,-0x14(%ebp)
08283d02 +0x0a8:  lea    -0x14(%ebp),%eax
08283d05 +0x0ab:  mov    %eax,0x8(%esp)
08283d09 +0x0af:  movl   $0x2,0x4(%esp)
08283d11 +0x0b7:  mov    0x8(%ebp),%eax
08283d14 +0x0ba:  mov    %eax,(%esp)
08283d17 +0x0bd:  call   0868dff8 <_ZN5CUser20is_equip_aura_avatarEcRi>  ; CUser::is_equip_aura_avatar(char, int&)
08283d1c +0x0c2:  mov    %eax,-0xc(%ebp)
08283d1f +0x0c5:  cmpl   $0x0,-0xc(%ebp)
08283d23 +0x0c9:  jle    08283d2a <+0xd0>
08283d25 +0x0cb:  mov    -0xc(%ebp),%eax
08283d28 +0x0ce:  jmp    08283d7f <+0x125>
08283d2a +0x0d0:  movl   $0x2,0x4(%esp)
08283d32 +0x0d8:  mov    0x8(%ebp),%eax
08283d35 +0x0db:  mov    %eax,(%esp)
08283d38 +0x0de:  call   0868de56 <_ZN5CUser28get_aura_avatar_option_valueEi>  ; CUser::get_aura_avatar_option_value(int)
08283d3d +0x0e3:  mov    %eax,-0x10(%ebp)
08283d40 +0x0e6:  mov    0x8(%ebp),%eax
08283d43 +0x0e9:  mov    %eax,(%esp)
08283d46 +0x0ec:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
08283d4b +0x0f1:  xor    $0x1,%eax
08283d4e +0x0f4:  test   %al,%al
08283d50 +0x0f6:  je     08283d6a <+0x110>
08283d52 +0x0f8:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08283d59 +0x0ff:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08283d5e +0x104:  cmp    -0x10(%ebp),%eax
08283d61 +0x107:  jge    08283d6a <+0x110>
08283d63 +0x109:  mov    $0x1,%eax
08283d68 +0x10e:  jmp    08283d6f <+0x115>
08283d6a +0x110:  mov    $0x0,%eax
08283d6f +0x115:  test   %al,%al
08283d71 +0x117:  je     08283d7a <+0x120>
08283d73 +0x119:  mov    $0x16,%eax
08283d78 +0x11e:  jmp    08283d7f <+0x125>
08283d7a +0x120:  mov    $0x0,%eax
08283d7f +0x125:  leave
08283d80 +0x126:  ret
08283d81 +0x127:  nop
```

## 反编译 C

```c
// Teleport::check_rule @ 0x8283c5a

/* Teleport::check_rule(CUser*) */

int Teleport::check_rule(CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    return 1;
  }
  iVar3 = CUser::get_state(param_1);
  if (iVar3 != 3) {
    return 0x13;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 == '\0') {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsPvPSkilTreeChannel(pGVar4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_08283cbd;
    }
  }
  bVar1 = true;
LAB_08283cbd:
  if (bVar1) {
    iVar3 = 0x13;
  }
  else {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 == '\a') {
      iVar3 = 0xbe;
    }
    else {
      cVar2 = CUser::isGMUser(param_1);
      if (cVar2 != '\x01') {
        local_18 = 0;
        local_10 = CUser::is_equip_aura_avatar(param_1,'\x02',&local_18);
        if (0 < local_10) {
          return local_10;
        }
      }
      local_14 = CUser::get_aura_avatar_option_value(param_1,2);
      cVar2 = CUser::isGMUser(param_1);
      if ((cVar2 == '\x01') ||
         (iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_),
         local_14 <= iVar3)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar3 = 0x16;
      }
      else {
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}
```
