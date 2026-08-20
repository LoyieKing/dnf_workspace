# check_error

`_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_PartyTeleport::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PartyTeleport` | `0x081dc19a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dc19a  _ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_PartyTeleport::check_error(CUser*, MSG_BASE&)
# range [0x081dc19a, 0x081dc425]
081dc19a +0x000:  push   %ebp
081dc19b +0x001:  mov    %esp,%ebp
081dc19d +0x003:  push   %edi
081dc19e +0x004:  push   %esi
081dc19f +0x005:  push   %ebx
081dc1a0 +0x006:  sub    $0x7c,%esp
081dc1a3 +0x009:  cmpl   $0x0,0xc(%ebp)
081dc1a7 +0x00d:  jne    081dc1b3 <+0x19>
081dc1a9 +0x00f:  mov    $0xffffffff,%eax
081dc1ae +0x014:  jmp    081dc41d <+0x283>
081dc1b3 +0x019:  mov    0x10(%ebp),%eax
081dc1b6 +0x01c:  mov    %eax,-0x38(%ebp)
081dc1b9 +0x01f:  mov    0xc(%ebp),%eax
081dc1bc +0x022:  mov    %eax,(%esp)
081dc1bf +0x025:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081dc1c4 +0x02a:  cmp    $0x3,%eax
081dc1c7 +0x02d:  setne  %al
081dc1ca +0x030:  test   %al,%al
081dc1cc +0x032:  je     081dc1d8 <+0x3e>
081dc1ce +0x034:  mov    $0x13,%eax
081dc1d3 +0x039:  jmp    081dc41d <+0x283>
081dc1d8 +0x03e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081dc1dd +0x043:  mov    %eax,(%esp)
081dc1e0 +0x046:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
081dc1e5 +0x04b:  test   %al,%al
081dc1e7 +0x04d:  jne    081dc1fa <+0x60>
081dc1e9 +0x04f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081dc1ee +0x054:  mov    %eax,(%esp)
081dc1f1 +0x057:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
081dc1f6 +0x05c:  test   %al,%al
081dc1f8 +0x05e:  je     081dc201 <+0x67>
081dc1fa +0x060:  mov    $0x1,%eax
081dc1ff +0x065:  jmp    081dc206 <+0x6c>
081dc201 +0x067:  mov    $0x0,%eax
081dc206 +0x06c:  test   %al,%al
081dc208 +0x06e:  je     081dc214 <+0x7a>
081dc20a +0x070:  mov    $0x13,%eax
081dc20f +0x075:  jmp    081dc41d <+0x283>
081dc214 +0x07a:  mov    0xc(%ebp),%eax
081dc217 +0x07d:  mov    %eax,(%esp)
081dc21a +0x080:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081dc21f +0x085:  mov    %eax,-0x34(%ebp)
081dc222 +0x088:  cmpl   $0x0,-0x34(%ebp)
081dc226 +0x08c:  jne    081dc232 <+0x98>
081dc228 +0x08e:  mov    $0x13,%eax
081dc22d +0x093:  jmp    081dc41d <+0x283>
081dc232 +0x098:  mov    -0x34(%ebp),%eax
081dc235 +0x09b:  mov    %eax,(%esp)
081dc238 +0x09e:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
081dc23d +0x0a3:  cmp    0xc(%ebp),%eax
081dc240 +0x0a6:  setne  %al
081dc243 +0x0a9:  test   %al,%al
081dc245 +0x0ab:  je     081dc251 <+0xb7>
081dc247 +0x0ad:  mov    $0x17,%eax
081dc24c +0x0b2:  jmp    081dc41d <+0x283>
081dc251 +0x0b7:  mov    -0x38(%ebp),%eax
081dc254 +0x0ba:  movzbl 0xd(%eax),%eax
081dc258 +0x0be:  movzbl %al,%ebx
081dc25b +0x0c1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081dc260 +0x0c6:  mov    %ebx,0x4(%esp)
081dc264 +0x0ca:  mov    %eax,(%esp)
081dc267 +0x0cd:  call   086cd084 <_ZN9GameWorld14getUserVillageEi>  ; GameWorld::getUserVillage(int)
081dc26c +0x0d2:  mov    %eax,-0x30(%ebp)
081dc26f +0x0d5:  cmpl   $0x0,-0x30(%ebp)
081dc273 +0x0d9:  jne    081dc27f <+0xe5>
081dc275 +0x0db:  mov    $0x13,%eax
081dc27a +0x0e0:  jmp    081dc41d <+0x283>
081dc27f +0x0e5:  mov    -0x38(%ebp),%eax
081dc282 +0x0e8:  movzbl 0xe(%eax),%eax
081dc286 +0x0ec:  movzbl %al,%ebx
081dc289 +0x0ef:  mov    -0x30(%ebp),%eax
081dc28c +0x0f2:  mov    %eax,(%esp)
081dc28f +0x0f5:  call   086c3b58 <_ZN7Village13get_gate_areaEv>  ; Village::get_gate_area()
081dc294 +0x0fa:  cmp    %eax,%ebx
081dc296 +0x0fc:  sete   %al
081dc299 +0x0ff:  test   %al,%al
081dc29b +0x101:  je     081dc2a7 <+0x10d>
081dc29d +0x103:  mov    $0x13,%eax
081dc2a2 +0x108:  jmp    081dc41d <+0x283>
081dc2a7 +0x10d:  mov    0xc(%ebp),%eax
081dc2aa +0x110:  mov    %eax,(%esp)
081dc2ad +0x113:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
081dc2b2 +0x118:  xor    $0x1,%eax
081dc2b5 +0x11b:  test   %al,%al
081dc2b7 +0x11d:  je     081dc2eb <+0x151>
081dc2b9 +0x11f:  movl   $0x0,-0x3c(%ebp)
081dc2c0 +0x126:  lea    -0x3c(%ebp),%eax
081dc2c3 +0x129:  mov    %eax,0x8(%esp)
081dc2c7 +0x12d:  movl   $0x0,0x4(%esp)
081dc2cf +0x135:  mov    0xc(%ebp),%eax
081dc2d2 +0x138:  mov    %eax,(%esp)
081dc2d5 +0x13b:  call   0868dff8 <_ZN5CUser20is_equip_aura_avatarEcRi>  ; CUser::is_equip_aura_avatar(char, int&)
081dc2da +0x140:  mov    %eax,-0x28(%ebp)
081dc2dd +0x143:  cmpl   $0x0,-0x28(%ebp)
081dc2e1 +0x147:  jle    081dc2eb <+0x151>
081dc2e3 +0x149:  mov    -0x28(%ebp),%eax
081dc2e6 +0x14c:  jmp    081dc41d <+0x283>
081dc2eb +0x151:  movl   $0x0,0x4(%esp)
081dc2f3 +0x159:  mov    0xc(%ebp),%eax
081dc2f6 +0x15c:  mov    %eax,(%esp)
081dc2f9 +0x15f:  call   0868de56 <_ZN5CUser28get_aura_avatar_option_valueEi>  ; CUser::get_aura_avatar_option_value(int)
081dc2fe +0x164:  mov    %eax,-0x2c(%ebp)
081dc301 +0x167:  mov    0xc(%ebp),%eax
081dc304 +0x16a:  mov    %eax,(%esp)
081dc307 +0x16d:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
081dc30c +0x172:  xor    $0x1,%eax
081dc30f +0x175:  test   %al,%al
081dc311 +0x177:  je     081dc32b <+0x191>
081dc313 +0x179:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081dc31a +0x180:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081dc31f +0x185:  cmp    -0x2c(%ebp),%eax
081dc322 +0x188:  jge    081dc32b <+0x191>
081dc324 +0x18a:  mov    $0x1,%eax
081dc329 +0x18f:  jmp    081dc330 <+0x196>
081dc32b +0x191:  mov    $0x0,%eax
081dc330 +0x196:  test   %al,%al
081dc332 +0x198:  je     081dc33e <+0x1a4>
081dc334 +0x19a:  mov    $0x16,%eax
081dc339 +0x19f:  jmp    081dc41d <+0x283>
081dc33e +0x1a4:  movl   $0x0,-0x24(%ebp)
081dc345 +0x1ab:  jmp    081dc409 <+0x26f>
081dc34a +0x1b0:  mov    -0x24(%ebp),%eax
081dc34d +0x1b3:  mov    %eax,0x4(%esp)
081dc351 +0x1b7:  mov    -0x34(%ebp),%eax
081dc354 +0x1ba:  mov    %eax,(%esp)
081dc357 +0x1bd:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
081dc35c +0x1c2:  test   %al,%al
081dc35e +0x1c4:  je     081dc405 <+0x26b>
081dc364 +0x1ca:  mov    -0x24(%ebp),%eax
081dc367 +0x1cd:  mov    %eax,0x4(%esp)
081dc36b +0x1d1:  mov    -0x34(%ebp),%eax
081dc36e +0x1d4:  mov    %eax,(%esp)
081dc371 +0x1d7:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081dc376 +0x1dc:  mov    %eax,-0x20(%ebp)
081dc379 +0x1df:  cmpl   $0x0,-0x20(%ebp)
081dc37d +0x1e3:  je     081dc405 <+0x26b>
081dc383 +0x1e9:  mov    -0x38(%ebp),%eax
081dc386 +0x1ec:  movzbl 0x13(%eax),%eax
081dc38a +0x1f0:  movzbl %al,%eax
081dc38d +0x1f3:  mov    %eax,-0x50(%ebp)
081dc390 +0x1f6:  mov    -0x38(%ebp),%eax
081dc393 +0x1f9:  movzwl 0x11(%eax),%eax
081dc397 +0x1fd:  cwtl
081dc398 +0x1fe:  mov    %eax,-0x4c(%ebp)
081dc39b +0x201:  mov    -0x38(%ebp),%eax
081dc39e +0x204:  movzwl 0xf(%eax),%eax
081dc3a2 +0x208:  movswl %ax,%edi
081dc3a5 +0x20b:  mov    -0x38(%ebp),%eax
081dc3a8 +0x20e:  movzbl 0xe(%eax),%eax
081dc3ac +0x212:  movzbl %al,%esi
081dc3af +0x215:  mov    -0x38(%ebp),%eax
081dc3b2 +0x218:  movzbl 0xd(%eax),%eax
081dc3b6 +0x21c:  movzbl %al,%ebx
081dc3b9 +0x21f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081dc3be +0x224:  movl   $0x0,0x20(%esp)
081dc3c6 +0x22c:  movl   $0x1,0x1c(%esp)
081dc3ce +0x234:  mov    -0x50(%ebp),%edx
081dc3d1 +0x237:  mov    %edx,0x18(%esp)
081dc3d5 +0x23b:  mov    -0x4c(%ebp),%edx
081dc3d8 +0x23e:  mov    %edx,0x14(%esp)
081dc3dc +0x242:  mov    %edi,0x10(%esp)
081dc3e0 +0x246:  mov    %esi,0xc(%esp)
081dc3e4 +0x24a:  mov    %ebx,0x8(%esp)
081dc3e8 +0x24e:  mov    -0x20(%ebp),%edx
081dc3eb +0x251:  mov    %edx,0x4(%esp)
081dc3ef +0x255:  mov    %eax,(%esp)
081dc3f2 +0x258:  call   086d1002 <_ZN9GameWorld15check_move_areaEP5CUseriiiiibi>  ; GameWorld::check_move_area(CUser*, int, int, int, int, int, bool, int)
081dc3f7 +0x25d:  mov    %eax,-0x1c(%ebp)
081dc3fa +0x260:  cmpl   $0x0,-0x1c(%ebp)
081dc3fe +0x264:  jle    081dc405 <+0x26b>
081dc400 +0x266:  mov    -0x1c(%ebp),%eax
081dc403 +0x269:  jmp    081dc41d <+0x283>
081dc405 +0x26b:  addl   $0x1,-0x24(%ebp)
081dc409 +0x26f:  cmpl   $0x3,-0x24(%ebp)
081dc40d +0x273:  setle  %al
081dc410 +0x276:  test   %al,%al
081dc412 +0x278:  jne    081dc34a <+0x1b0>
081dc418 +0x27e:  mov    $0x0,%eax
081dc41d +0x283:  add    $0x7c,%esp
081dc420 +0x286:  pop    %ebx
081dc421 +0x287:  pop    %esi
081dc422 +0x288:  pop    %edi
081dc423 +0x289:  pop    %ebp
081dc424 +0x28a:  ret
081dc425 +0x28b:  nop
```

## 反编译 C

```c
// Dispatcher_PartyTeleport::check_error @ 0x81dc19a

/* Dispatcher_PartyTeleport::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_PartyTeleport::check_error
          (Dispatcher_PartyTeleport *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  MSG_BASE MVar2;
  MSG_BASE MVar3;
  short sVar4;
  short sVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  GameWorld *pGVar9;
  CUser *pCVar10;
  uint uVar11;
  int local_40;
  MSG_BASE *local_3c;
  CParty *local_38;
  Village *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  if (param_1 == (CUser *)0x0) {
    return -1;
  }
  local_3c = param_2;
  iVar8 = CUser::get_state(param_1);
  if (iVar8 != 3) {
    return 0x13;
  }
  pGVar9 = (GameWorld *)G_GameWorld();
  cVar7 = GameWorld::IsPVPChannel(pGVar9);
  if (cVar7 == '\0') {
    pGVar9 = (GameWorld *)G_GameWorld();
    cVar7 = GameWorld::IsPvPSkilTreeChannel(pGVar9);
    if (cVar7 == '\0') {
      bVar6 = false;
      goto LAB_081dc206;
    }
  }
  bVar6 = true;
LAB_081dc206:
  if (bVar6) {
    iVar8 = 0x13;
  }
  else {
    local_38 = (CParty *)CUser::GetParty(param_1);
    if (local_38 == (CParty *)0x0) {
      iVar8 = 0x13;
    }
    else {
      pCVar10 = (CUser *)CParty::getManager(local_38);
      if (pCVar10 == param_1) {
        MVar1 = local_3c[0xd];
        pGVar9 = (GameWorld *)G_GameWorld();
        local_34 = (Village *)GameWorld::getUserVillage(pGVar9,(uint)(byte)MVar1);
        if (local_34 == (Village *)0x0) {
          iVar8 = 0x13;
        }
        else {
          MVar1 = local_3c[0xe];
          uVar11 = Village::get_gate_area(local_34);
          if ((byte)MVar1 == uVar11) {
            iVar8 = 0x13;
          }
          else {
            cVar7 = CUser::isGMUser(param_1);
            if (cVar7 != '\x01') {
              local_40 = 0;
              local_2c = CUser::is_equip_aura_avatar(param_1,'\0',&local_40);
              if (0 < local_2c) {
                return local_2c;
              }
            }
            local_30 = CUser::get_aura_avatar_option_value(param_1,0);
            cVar7 = CUser::isGMUser(param_1);
            if ((cVar7 == '\x01') ||
               (iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_),
               local_30 <= iVar8)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              iVar8 = 0x16;
            }
            else {
              for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
                cVar7 = CParty::checkValidUser(local_38,local_28);
                if ((cVar7 != '\0') &&
                   (local_24 = CParty::get_user(local_38,local_28), local_24 != 0)) {
                  MVar1 = local_3c[0x13];
                  sVar4 = *(short *)(local_3c + 0x11);
                  sVar5 = *(short *)(local_3c + 0xf);
                  MVar2 = local_3c[0xe];
                  MVar3 = local_3c[0xd];
                  pCVar10 = (CUser *)G_GameWorld();
                  local_20 = GameWorld::check_move_area
                                       (pCVar10,local_24,(uint)(byte)MVar3,(uint)(byte)MVar2,
                                        (int)sVar5,(int)sVar4,(bool)MVar1,1);
                  if (0 < local_20) {
                    return local_20;
                  }
                }
              }
              iVar8 = 0;
            }
          }
        }
      }
      else {
        iVar8 = 0x17;
      }
    }
  }
  return iVar8;
}
```
