# SelectGrowthWeapon

`_ZN16GrowthEquipEvent18SelectGrowthWeaponER5CUserii`

`GrowthEquipEvent::SelectGrowthWeapon(CUser&, int, int)`

| 类 | 地址 |
|---|---|
| `GrowthEquipEvent` | `0x080f73be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f73be  _ZN16GrowthEquipEvent18SelectGrowthWeaponER5CUserii
#           GrowthEquipEvent::SelectGrowthWeapon(CUser&, int, int)
# range [0x080f73be, 0x080f74b1]
080f73be +0x00:  push   %ebp
080f73bf +0x01:  mov    %esp,%ebp
080f73c1 +0x03:  push   %esi
080f73c2 +0x04:  push   %ebx
080f73c3 +0x05:  sub    $0x20,%esp
080f73c6 +0x08:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080f73cb +0x0d:  mov    0x4bc4(%eax),%eax
080f73d1 +0x13:  cmp    0x10(%ebp),%eax
080f73d4 +0x16:  sete   %al
080f73d7 +0x19:  test   %al,%al
080f73d9 +0x1b:  je     080f74aa <+0xec>
080f73df +0x21:  mov    0xc(%ebp),%eax
080f73e2 +0x24:  mov    %eax,(%esp)
080f73e5 +0x27:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
080f73ea +0x2c:  mov    %eax,%ebx
080f73ec +0x2e:  movl   $0xffffffff,0x4(%esp)
080f73f4 +0x36:  mov    0xc(%ebp),%eax
080f73f7 +0x39:  mov    %eax,(%esp)
080f73fa +0x3c:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
080f73ff +0x41:  mov    %eax,0x4(%ebx)
080f7402 +0x44:  mov    0xc(%ebp),%eax
080f7405 +0x47:  mov    %eax,(%esp)
080f7408 +0x4a:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
080f740d +0x4f:  mov    0x14(%ebp),%edx
080f7410 +0x52:  mov    %edx,0x8(%eax)
080f7413 +0x55:  movl   $0x0,-0xc(%ebp)
080f741a +0x5c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
080f741f +0x61:  mov    %eax,(%esp)
080f7422 +0x64:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
080f7427 +0x69:  test   %al,%al
080f7429 +0x6b:  je     080f743b <+0x7d>
080f742b +0x6d:  mov    0xc(%ebp),%eax
080f742e +0x70:  mov    %eax,(%esp)
080f7431 +0x73:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
080f7436 +0x78:  mov    %eax,-0xc(%ebp)
080f7439 +0x7b:  jmp    080f7449 <+0x8b>
080f743b +0x7d:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
080f7440 +0x82:  mov    0x378(%eax),%eax
080f7446 +0x88:  mov    %eax,-0xc(%ebp)
080f7449 +0x8b:  mov    0xc(%ebp),%eax
080f744c +0x8e:  mov    %eax,(%esp)
080f744f +0x91:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
080f7454 +0x96:  mov    -0xc(%ebp),%edx
080f7457 +0x99:  mov    %dx,0x12(%eax)
080f745b +0x9d:  mov    -0xc(%ebp),%eax
080f745e +0xa0:  movswl %ax,%esi
080f7461 +0xa3:  movl   $0xffffffff,0x4(%esp)
080f7469 +0xab:  mov    0xc(%ebp),%eax
080f746c +0xae:  mov    %eax,(%esp)
080f746f +0xb1:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
080f7474 +0xb6:  mov    %eax,%ebx
080f7476 +0xb8:  mov    0xc(%ebp),%eax
080f7479 +0xbb:  mov    %eax,(%esp)
080f747c +0xbe:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
080f7481 +0xc3:  mov    %esi,0xc(%esp)
080f7485 +0xc7:  mov    0x14(%ebp),%edx
080f7488 +0xca:  mov    %edx,0x8(%esp)
080f748c +0xce:  mov    %ebx,0x4(%esp)
080f7490 +0xd2:  mov    %eax,(%esp)
080f7493 +0xd5:  call   084495c6 <_ZN32DB_EventUpdateGrowthWeaponCharac11makeRequestEjjis>  ; DB_EventUpdateGrowthWeaponCharac::makeRequest(unsigned int, unsigned int, int, short)
080f7498 +0xda:  mov    0xc(%ebp),%eax
080f749b +0xdd:  mov    %eax,0x4(%esp)
080f749f +0xe1:  mov    0x8(%ebp),%eax
080f74a2 +0xe4:  mov    %eax,(%esp)
080f74a5 +0xe7:  call   080f7226 <_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser>  ; GrowthEquipEvent::SendGrowthWeaponEventInfo(CUser&)
080f74aa +0xec:  add    $0x20,%esp
080f74ad +0xef:  pop    %ebx
080f74ae +0xf0:  pop    %esi
080f74af +0xf1:  pop    %ebp
080f74b0 +0xf2:  ret
080f74b1 +0xf3:  nop
```

## 反编译 C

```c
// GrowthEquipEvent::SelectGrowthWeapon @ 0x80f73be

/* GrowthEquipEvent::SelectGrowthWeapon(CUser&, int, int) */

void __thiscall
GrowthEquipEvent::SelectGrowthWeapon(GrowthEquipEvent *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  GameWorld *this_00;
  uint uVar4;
  uint uVar5;
  undefined2 local_10;
  
  iVar2 = G_CDataManager();
  if (*(int *)(iVar2 + 0x4bc4) == param_2) {
    iVar2 = CUser::getGrowthWeaponEventdata(param_1);
    uVar3 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)(iVar2 + 4) = uVar3;
    iVar2 = CUser::getGrowthWeaponEventdata(param_1);
    *(int *)(iVar2 + 8) = param_3;
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
    if (cVar1 == '\0') {
      iVar2 = G_CEnvironment();
      local_10 = (short)*(undefined4 *)(iVar2 + 0x378);
    }
    else {
      local_10 = CUser::GetServerGroup(param_1);
    }
    iVar2 = CUser::getGrowthWeaponEventdata(param_1);
    *(short *)(iVar2 + 0x12) = local_10;
    uVar4 = CUser::get_charac_no(param_1,-1);
    uVar5 = CUser::get_acc_id(param_1);
    DB_EventUpdateGrowthWeaponCharac::makeRequest(uVar5,uVar4,param_3,local_10);
    SendGrowthWeaponEventInfo(this,param_1);
  }
  return;
}
```
