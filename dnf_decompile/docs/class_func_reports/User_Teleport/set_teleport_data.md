# set_teleport_data

`_ZN13User_Teleport17set_teleport_dataERK14STTeleportData`

`User_Teleport::set_teleport_data(STTeleportData const&)`

| 类 | 地址 |
|---|---|
| `User_Teleport` | `0x082842b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082842b8  _ZN13User_Teleport17set_teleport_dataERK14STTeleportData
#           User_Teleport::set_teleport_data(STTeleportData const&)
# range [0x082842b8, 0x08284352]
082842b8 +0x00:  push   %ebp
082842b9 +0x01:  mov    %esp,%ebp
082842bb +0x03:  push   %ebx
082842bc +0x04:  sub    $0x24,%esp
082842bf +0x07:  movl   $0x0,-0xc(%ebp)
082842c6 +0x0e:  mov    0xc(%ebp),%eax
082842c9 +0x11:  mov    (%eax),%eax
082842cb +0x13:  movzwl %ax,%ebx
082842ce +0x16:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082842d3 +0x1b:  mov    %ebx,0x4(%esp)
082842d7 +0x1f:  mov    %eax,(%esp)
082842da +0x22:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
082842df +0x27:  mov    %eax,-0xc(%ebp)
082842e2 +0x2a:  cmpl   $0x0,-0xc(%ebp)
082842e6 +0x2e:  je     0828434c <+0x94>
082842e8 +0x30:  mov    -0xc(%ebp),%eax
082842eb +0x33:  mov    %eax,(%esp)
082842ee +0x36:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082842f3 +0x3b:  mov    %al,-0x15(%ebp)
082842f6 +0x3e:  movl   $0x0,0x4(%esp)
082842fe +0x46:  mov    -0xc(%ebp),%eax
08284301 +0x49:  mov    %eax,(%esp)
08284304 +0x4c:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
08284309 +0x51:  mov    %al,-0x14(%ebp)
0828430c +0x54:  mov    -0xc(%ebp),%eax
0828430f +0x57:  mov    %eax,(%esp)
08284312 +0x5a:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
08284317 +0x5f:  mov    %ax,-0x12(%ebp)
0828431b +0x63:  mov    -0xc(%ebp),%eax
0828431e +0x66:  mov    %eax,(%esp)
08284321 +0x69:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
08284326 +0x6e:  mov    %ax,-0x10(%ebp)
0828432a +0x72:  mov    -0xc(%ebp),%eax
0828432d +0x75:  mov    %eax,(%esp)
08284330 +0x78:  call   0813494c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x553>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x553
08284335 +0x7d:  mov    %al,-0xe(%ebp)
08284338 +0x80:  mov    0x8(%ebp),%eax
0828433b +0x83:  lea    -0x16(%ebp),%edx
0828433e +0x86:  mov    %edx,0x4(%esp)
08284342 +0x8a:  mov    %eax,(%esp)
08284345 +0x8d:  call   08283d98 <_ZN8Teleport18set_party_teleportERK15stPartyTelePort>  ; Teleport::set_party_teleport(stPartyTelePort const&)
0828434a +0x92:  jmp    0828434d <+0x95>
0828434c +0x94:  nop
0828434d +0x95:  add    $0x24,%esp
08284350 +0x98:  pop    %ebx
08284351 +0x99:  pop    %ebp
08284352 +0x9a:  ret
```

## 反编译 C

```c
// User_Teleport::set_teleport_data @ 0x82842b8

/* User_Teleport::set_teleport_data(STTeleportData const&) */

void __thiscall User_Teleport::set_teleport_data(User_Teleport *this,STTeleportData *param_1)

{
  undefined4 uVar1;
  GameWorld *this_00;
  stPartyTelePort local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined1 local_12;
  CUser *local_10;
  
  local_10 = (CUser *)0x0;
  uVar1 = *(undefined4 *)param_1;
  this_00 = (GameWorld *)G_GameWorld();
  local_10 = (CUser *)GameWorld::find_from_world(this_00,(ushort)uVar1);
  if (local_10 != (CUser *)0x0) {
    local_19 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_10);
    local_18 = CUser::get_area(local_10,false);
    local_16 = CUser::get_posX(local_10);
    local_14 = CUser::get_posY(local_10);
    local_12 = CUser::get_direction(local_10);
    Teleport::set_party_teleport((Teleport *)this,&local_1a);
  }
  return;
}
```
