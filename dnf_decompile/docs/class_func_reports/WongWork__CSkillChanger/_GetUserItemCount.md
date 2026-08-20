# _GetUserItemCount

`_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser`

`WongWork::CSkillChanger::_GetUserItemCount(CUser const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CSkillChanger` | `0x0860a34a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860a34a  _ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser
#           WongWork::CSkillChanger::_GetUserItemCount(CUser const*)
# range [0x0860a34a, 0x0860a557]
0860a34a +0x000:  push   %ebp
0860a34b +0x001:  mov    %esp,%ebp
0860a34d +0x003:  sub    $0xe8,%esp
0860a353 +0x009:  movl   $0x3,-0x10(%ebp)
0860a35a +0x010:  jmp    0860a440 <+0xf6>
0860a35f +0x015:  lea    -0x4d(%ebp),%eax
0860a362 +0x018:  mov    %eax,(%esp)
0860a365 +0x01b:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0860a36a +0x020:  mov    0xc(%ebp),%eax
0860a36d +0x023:  mov    %eax,(%esp)
0860a370 +0x026:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0860a375 +0x02b:  lea    -0xd8(%ebp),%edx
0860a37b +0x031:  mov    -0x10(%ebp),%ecx
0860a37e +0x034:  mov    %ecx,0xc(%esp)
0860a382 +0x038:  movl   $0x1,0x8(%esp)
0860a38a +0x040:  mov    %eax,0x4(%esp)
0860a38e +0x044:  mov    %edx,(%esp)
0860a391 +0x047:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0860a396 +0x04c:  sub    $0x4,%esp
0860a399 +0x04f:  mov    -0xd8(%ebp),%eax
0860a39f +0x055:  mov    %eax,-0x4d(%ebp)
0860a3a2 +0x058:  mov    -0xd4(%ebp),%eax
0860a3a8 +0x05e:  mov    %eax,-0x49(%ebp)
0860a3ab +0x061:  mov    -0xd0(%ebp),%eax
0860a3b1 +0x067:  mov    %eax,-0x45(%ebp)
0860a3b4 +0x06a:  mov    -0xcc(%ebp),%eax
0860a3ba +0x070:  mov    %eax,-0x41(%ebp)
0860a3bd +0x073:  mov    -0xc8(%ebp),%eax
0860a3c3 +0x079:  mov    %eax,-0x3d(%ebp)
0860a3c6 +0x07c:  mov    -0xc4(%ebp),%eax
0860a3cc +0x082:  mov    %eax,-0x39(%ebp)
0860a3cf +0x085:  mov    -0xc0(%ebp),%eax
0860a3d5 +0x08b:  mov    %eax,-0x35(%ebp)
0860a3d8 +0x08e:  mov    -0xbc(%ebp),%eax
0860a3de +0x094:  mov    %eax,-0x31(%ebp)
0860a3e1 +0x097:  mov    -0xb8(%ebp),%eax
0860a3e7 +0x09d:  mov    %eax,-0x2d(%ebp)
0860a3ea +0x0a0:  mov    -0xb4(%ebp),%eax
0860a3f0 +0x0a6:  mov    %eax,-0x29(%ebp)
0860a3f3 +0x0a9:  mov    -0xb0(%ebp),%eax
0860a3f9 +0x0af:  mov    %eax,-0x25(%ebp)
0860a3fc +0x0b2:  mov    -0xac(%ebp),%eax
0860a402 +0x0b8:  mov    %eax,-0x21(%ebp)
0860a405 +0x0bb:  mov    -0xa8(%ebp),%eax
0860a40b +0x0c1:  mov    %eax,-0x1d(%ebp)
0860a40e +0x0c4:  mov    -0xa4(%ebp),%eax
0860a414 +0x0ca:  mov    %eax,-0x19(%ebp)
0860a417 +0x0cd:  mov    -0xa0(%ebp),%eax
0860a41d +0x0d3:  mov    %eax,-0x15(%ebp)
0860a420 +0x0d6:  movzbl -0x9c(%ebp),%eax
0860a427 +0x0dd:  mov    %al,-0x11(%ebp)
0860a42a +0x0e0:  lea    -0x4d(%ebp),%eax
0860a42d +0x0e3:  mov    %eax,0x4(%esp)
0860a431 +0x0e7:  mov    0x8(%ebp),%eax
0860a434 +0x0ea:  mov    %eax,(%esp)
0860a437 +0x0ed:  call   0860a2ec <_ZN8WongWork13CSkillChanger15_CountSkillBookER10Inven_Item>  ; WongWork::CSkillChanger::_CountSkillBook(Inven_Item&)
0860a43c +0x0f2:  addl   $0x1,-0x10(%ebp)
0860a440 +0x0f6:  cmpl   $0x68,-0x10(%ebp)
0860a444 +0x0fa:  setle  %al
0860a447 +0x0fd:  test   %al,%al
0860a449 +0x0ff:  jne    0860a35f <+0x15>
0860a44f +0x105:  movl   $0x0,-0xc(%ebp)
0860a456 +0x10c:  jmp    0860a543 <+0x1f9>
0860a45b +0x111:  lea    -0x8a(%ebp),%eax
0860a461 +0x117:  mov    %eax,(%esp)
0860a464 +0x11a:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0860a469 +0x11f:  mov    0xc(%ebp),%eax
0860a46c +0x122:  mov    %eax,(%esp)
0860a46f +0x125:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0860a474 +0x12a:  lea    -0xd8(%ebp),%edx
0860a47a +0x130:  mov    -0xc(%ebp),%ecx
0860a47d +0x133:  mov    %ecx,0x8(%esp)
0860a481 +0x137:  mov    %eax,0x4(%esp)
0860a485 +0x13b:  mov    %edx,(%esp)
0860a488 +0x13e:  call   0850b2b4 <_ZNK6CCargo14get_cargo_slotEi>  ; CCargo::get_cargo_slot(int) const
0860a48d +0x143:  sub    $0x4,%esp
0860a490 +0x146:  mov    -0xd8(%ebp),%eax
0860a496 +0x14c:  mov    %eax,-0x8a(%ebp)
0860a49c +0x152:  mov    -0xd4(%ebp),%eax
0860a4a2 +0x158:  mov    %eax,-0x86(%ebp)
0860a4a8 +0x15e:  mov    -0xd0(%ebp),%eax
0860a4ae +0x164:  mov    %eax,-0x82(%ebp)
0860a4b4 +0x16a:  mov    -0xcc(%ebp),%eax
0860a4ba +0x170:  mov    %eax,-0x7e(%ebp)
0860a4bd +0x173:  mov    -0xc8(%ebp),%eax
0860a4c3 +0x179:  mov    %eax,-0x7a(%ebp)
0860a4c6 +0x17c:  mov    -0xc4(%ebp),%eax
0860a4cc +0x182:  mov    %eax,-0x76(%ebp)
0860a4cf +0x185:  mov    -0xc0(%ebp),%eax
0860a4d5 +0x18b:  mov    %eax,-0x72(%ebp)
0860a4d8 +0x18e:  mov    -0xbc(%ebp),%eax
0860a4de +0x194:  mov    %eax,-0x6e(%ebp)
0860a4e1 +0x197:  mov    -0xb8(%ebp),%eax
0860a4e7 +0x19d:  mov    %eax,-0x6a(%ebp)
0860a4ea +0x1a0:  mov    -0xb4(%ebp),%eax
0860a4f0 +0x1a6:  mov    %eax,-0x66(%ebp)
0860a4f3 +0x1a9:  mov    -0xb0(%ebp),%eax
0860a4f9 +0x1af:  mov    %eax,-0x62(%ebp)
0860a4fc +0x1b2:  mov    -0xac(%ebp),%eax
0860a502 +0x1b8:  mov    %eax,-0x5e(%ebp)
0860a505 +0x1bb:  mov    -0xa8(%ebp),%eax
0860a50b +0x1c1:  mov    %eax,-0x5a(%ebp)
0860a50e +0x1c4:  mov    -0xa4(%ebp),%eax
0860a514 +0x1ca:  mov    %eax,-0x56(%ebp)
0860a517 +0x1cd:  mov    -0xa0(%ebp),%eax
0860a51d +0x1d3:  mov    %eax,-0x52(%ebp)
0860a520 +0x1d6:  movzbl -0x9c(%ebp),%eax
0860a527 +0x1dd:  mov    %al,-0x4e(%ebp)
0860a52a +0x1e0:  lea    -0x8a(%ebp),%eax
0860a530 +0x1e6:  mov    %eax,0x4(%esp)
0860a534 +0x1ea:  mov    0x8(%ebp),%eax
0860a537 +0x1ed:  mov    %eax,(%esp)
0860a53a +0x1f0:  call   0860a2ec <_ZN8WongWork13CSkillChanger15_CountSkillBookER10Inven_Item>  ; WongWork::CSkillChanger::_CountSkillBook(Inven_Item&)
0860a53f +0x1f5:  addl   $0x1,-0xc(%ebp)
0860a543 +0x1f9:  cmpl   $0x97,-0xc(%ebp)
0860a54a +0x200:  setle  %al
0860a54d +0x203:  test   %al,%al
0860a54f +0x205:  jne    0860a45b <+0x111>
0860a555 +0x20b:  leave
0860a556 +0x20c:  ret
0860a557 +0x20d:  nop
```

## 反编译 C

```c
// WongWork::CSkillChanger::_GetUserItemCount @ 0x860a34a

/* WongWork::CSkillChanger::_GetUserItemCount(CUser const*) */

void __thiscall WongWork::CSkillChanger::_GetUserItemCount(CSkillChanger *this,CUser *param_1)

{
  int iVar1;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined4 local_62;
  undefined4 local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  undefined1 local_52;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined1 local_15;
  int local_14;
  int local_10;
  
  for (local_14 = 3; local_14 < 0x69; local_14 = local_14 + 1) {
    Inven_Item::Inven_Item((Inven_Item *)&local_51);
    iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)&local_dc,iVar1);
    local_51 = local_dc;
    local_4d = local_d8;
    local_49 = local_d4;
    local_45 = local_d0;
    local_41 = local_cc;
    local_3d = local_c8;
    local_39 = local_c4;
    local_35 = local_c0;
    local_31 = local_bc;
    local_2d = local_b8;
    local_29 = local_b4;
    local_25 = local_b0;
    local_21 = local_ac;
    local_1d = local_a8;
    local_19 = local_a4;
    local_15 = local_a0;
    _CountSkillBook(this,(Inven_Item *)&local_51);
  }
  for (local_10 = 0; local_10 < 0x98; local_10 = local_10 + 1) {
    Inven_Item::Inven_Item((Inven_Item *)&local_8e);
    CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    CCargo::get_cargo_slot((int)&local_dc);
    local_8e = local_dc;
    local_8a = local_d8;
    local_86 = local_d4;
    local_82 = local_d0;
    local_7e = local_cc;
    local_7a = local_c8;
    local_76 = local_c4;
    local_72 = local_c0;
    local_6e = local_bc;
    local_6a = local_b8;
    local_66 = local_b4;
    local_62 = local_b0;
    local_5e = local_ac;
    local_5a = local_a8;
    local_56 = local_a4;
    local_52 = local_a0;
    _CountSkillBook(this,(Inven_Item *)&local_8e);
  }
  return;
}
```
