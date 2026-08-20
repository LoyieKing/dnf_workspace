# insert_old_equip_info_to_db

`_ZN11sync_script11CSyncScript27insert_old_equip_info_to_dbEv`

`sync_script::CSyncScript::insert_old_equip_info_to_db()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08624d1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08624d1a  _ZN11sync_script11CSyncScript27insert_old_equip_info_to_dbEv
#           sync_script::CSyncScript::insert_old_equip_info_to_db()
# range [0x08624d1a, 0x08625063]
08624d1a +0x000:  push   %ebp
08624d1b +0x001:  mov    %esp,%ebp
08624d1d +0x003:  push   %edi
08624d1e +0x004:  push   %esi
08624d1f +0x005:  push   %ebx
08624d20 +0x006:  sub    $0x12c,%esp
08624d26 +0x00c:  mov    0x8(%ebp),%eax
08624d29 +0x00f:  movzbl (%eax),%eax
08624d2c +0x012:  xor    $0x1,%eax
08624d2f +0x015:  test   %al,%al
08624d31 +0x017:  je     08624d3d <+0x23>
08624d33 +0x019:  mov    $0x1,%eax
08624d38 +0x01e:  jmp    08625058 <+0x33e>
08624d3d +0x023:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08624d42 +0x028:  movl   $0x0,0x8(%esp)
08624d4a +0x030:  movl   $0x5,0x4(%esp)
08624d52 +0x038:  mov    %eax,(%esp)
08624d55 +0x03b:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08624d5a +0x040:  mov    %eax,-0x20(%ebp)
08624d5d +0x043:  lea    -0x28(%ebp),%eax
08624d60 +0x046:  movl   $&g_equipmentStatInfoMap,0x4(%esp)
08624d68 +0x04e:  mov    %eax,(%esp)
08624d6b +0x051:  call   08628f0c <_GLOBAL__I__Z22GetSocketTypeCharactert+0x256a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x256a
08624d70 +0x056:  sub    $0x4,%esp
08624d73 +0x059:  jmp    08625023 <+0x309>
08624d78 +0x05e:  lea    -0x28(%ebp),%eax
08624d7b +0x061:  mov    %eax,(%esp)
08624d7e +0x064:  call   08628f8a <_GLOBAL__I__Z22GetSocketTypeCharactert+0x25e8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x25e8
08624d83 +0x069:  add    $0x4,%eax
08624d86 +0x06c:  mov    %eax,-0x1c(%ebp)
08624d89 +0x06f:  mov    -0x1c(%ebp),%eax
08624d8c +0x072:  mov    0x80(%eax),%eax
08624d92 +0x078:  mov    %eax,-0xa0(%ebp)
08624d98 +0x07e:  mov    -0x1c(%ebp),%eax
08624d9b +0x081:  mov    0x7c(%eax),%eax
08624d9e +0x084:  mov    %eax,-0x9c(%ebp)
08624da4 +0x08a:  mov    -0x1c(%ebp),%eax
08624da7 +0x08d:  mov    0x78(%eax),%eax
08624daa +0x090:  mov    %eax,-0x98(%ebp)
08624db0 +0x096:  mov    -0x1c(%ebp),%eax
08624db3 +0x099:  mov    0x74(%eax),%eax
08624db6 +0x09c:  mov    %eax,-0x94(%ebp)
08624dbc +0x0a2:  mov    -0x1c(%ebp),%eax
08624dbf +0x0a5:  mov    0x70(%eax),%eax
08624dc2 +0x0a8:  mov    %eax,-0x90(%ebp)
08624dc8 +0x0ae:  mov    -0x1c(%ebp),%eax
08624dcb +0x0b1:  mov    0x6c(%eax),%eax
08624dce +0x0b4:  mov    %eax,-0x8c(%ebp)
08624dd4 +0x0ba:  mov    -0x1c(%ebp),%eax
08624dd7 +0x0bd:  mov    0x68(%eax),%eax
08624dda +0x0c0:  mov    %eax,-0x88(%ebp)
08624de0 +0x0c6:  mov    -0x1c(%ebp),%eax
08624de3 +0x0c9:  mov    0x64(%eax),%eax
08624de6 +0x0cc:  mov    %eax,-0x84(%ebp)
08624dec +0x0d2:  mov    -0x1c(%ebp),%eax
08624def +0x0d5:  mov    0x60(%eax),%eax
08624df2 +0x0d8:  mov    %eax,-0x80(%ebp)
08624df5 +0x0db:  mov    -0x1c(%ebp),%eax
08624df8 +0x0de:  mov    0x5c(%eax),%eax
08624dfb +0x0e1:  mov    %eax,-0x7c(%ebp)
08624dfe +0x0e4:  mov    -0x1c(%ebp),%eax
08624e01 +0x0e7:  mov    0x58(%eax),%eax
08624e04 +0x0ea:  mov    %eax,-0x78(%ebp)
08624e07 +0x0ed:  mov    -0x1c(%ebp),%eax
08624e0a +0x0f0:  mov    0x54(%eax),%eax
08624e0d +0x0f3:  mov    %eax,-0x74(%ebp)
08624e10 +0x0f6:  mov    -0x1c(%ebp),%eax
08624e13 +0x0f9:  mov    0x50(%eax),%eax
08624e16 +0x0fc:  mov    %eax,-0x70(%ebp)
08624e19 +0x0ff:  mov    -0x1c(%ebp),%eax
08624e1c +0x102:  mov    0x4c(%eax),%eax
08624e1f +0x105:  mov    %eax,-0x6c(%ebp)
08624e22 +0x108:  mov    -0x1c(%ebp),%eax
08624e25 +0x10b:  mov    0x48(%eax),%eax
08624e28 +0x10e:  mov    %eax,-0x68(%ebp)
08624e2b +0x111:  mov    -0x1c(%ebp),%eax
08624e2e +0x114:  mov    0x44(%eax),%eax
08624e31 +0x117:  mov    %eax,-0x64(%ebp)
08624e34 +0x11a:  mov    -0x1c(%ebp),%eax
08624e37 +0x11d:  mov    0x40(%eax),%eax
08624e3a +0x120:  mov    %eax,-0x60(%ebp)
08624e3d +0x123:  mov    -0x1c(%ebp),%eax
08624e40 +0x126:  mov    0x3c(%eax),%eax
08624e43 +0x129:  mov    %eax,-0x5c(%ebp)
08624e46 +0x12c:  mov    -0x1c(%ebp),%eax
08624e49 +0x12f:  mov    0x38(%eax),%eax
08624e4c +0x132:  mov    %eax,-0x58(%ebp)
08624e4f +0x135:  mov    -0x1c(%ebp),%eax
08624e52 +0x138:  mov    0x34(%eax),%eax
08624e55 +0x13b:  mov    %eax,-0x54(%ebp)
08624e58 +0x13e:  mov    -0x1c(%ebp),%eax
08624e5b +0x141:  mov    0x30(%eax),%eax
08624e5e +0x144:  mov    %eax,-0x50(%ebp)
08624e61 +0x147:  mov    -0x1c(%ebp),%eax
08624e64 +0x14a:  mov    0x2c(%eax),%eax
08624e67 +0x14d:  mov    %eax,-0x4c(%ebp)
08624e6a +0x150:  mov    -0x1c(%ebp),%eax
08624e6d +0x153:  mov    0x28(%eax),%eax
08624e70 +0x156:  mov    %eax,-0x48(%ebp)
08624e73 +0x159:  mov    -0x1c(%ebp),%eax
08624e76 +0x15c:  mov    0x24(%eax),%eax
08624e79 +0x15f:  mov    %eax,-0x44(%ebp)
08624e7c +0x162:  mov    -0x1c(%ebp),%eax
08624e7f +0x165:  mov    0x20(%eax),%eax
08624e82 +0x168:  mov    %eax,-0x40(%ebp)
08624e85 +0x16b:  mov    -0x1c(%ebp),%eax
08624e88 +0x16e:  mov    0x1c(%eax),%eax
08624e8b +0x171:  mov    %eax,-0x3c(%ebp)
08624e8e +0x174:  mov    -0x1c(%ebp),%eax
08624e91 +0x177:  mov    0x18(%eax),%eax
08624e94 +0x17a:  mov    %eax,-0x38(%ebp)
08624e97 +0x17d:  mov    -0x1c(%ebp),%eax
08624e9a +0x180:  mov    0x14(%eax),%eax
08624e9d +0x183:  mov    %eax,-0x34(%ebp)
08624ea0 +0x186:  mov    -0x1c(%ebp),%eax
08624ea3 +0x189:  mov    0x10(%eax),%eax
08624ea6 +0x18c:  mov    %eax,-0x30(%ebp)
08624ea9 +0x18f:  mov    -0x1c(%ebp),%eax
08624eac +0x192:  mov    0xc(%eax),%eax
08624eaf +0x195:  mov    %eax,-0x2c(%ebp)
08624eb2 +0x198:  mov    -0x1c(%ebp),%eax
08624eb5 +0x19b:  mov    0x8(%eax),%edi
08624eb8 +0x19e:  mov    -0x1c(%ebp),%eax
08624ebb +0x1a1:  mov    0x4(%eax),%esi
08624ebe +0x1a4:  mov    -0x1c(%ebp),%eax
08624ec1 +0x1a7:  mov    (%eax),%ebx
08624ec3 +0x1a9:  lea    -0x28(%ebp),%eax
08624ec6 +0x1ac:  mov    %eax,(%esp)
08624ec9 +0x1af:  call   08628f8a <_GLOBAL__I__Z22GetSocketTypeCharactert+0x25e8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x25e8
08624ece +0x1b4:  mov    (%eax),%eax
08624ed0 +0x1b6:  mov    -0xa0(%ebp),%edx
08624ed6 +0x1bc:  mov    %edx,0x8c(%esp)
08624edd +0x1c3:  mov    -0x9c(%ebp),%edx
08624ee3 +0x1c9:  mov    %edx,0x88(%esp)
08624eea +0x1d0:  mov    -0x98(%ebp),%edx
08624ef0 +0x1d6:  mov    %edx,0x84(%esp)
08624ef7 +0x1dd:  mov    -0x94(%ebp),%edx
08624efd +0x1e3:  mov    %edx,0x80(%esp)
08624f04 +0x1ea:  mov    -0x90(%ebp),%edx
08624f0a +0x1f0:  mov    %edx,0x7c(%esp)
08624f0e +0x1f4:  mov    -0x8c(%ebp),%edx
08624f14 +0x1fa:  mov    %edx,0x78(%esp)
08624f18 +0x1fe:  mov    -0x88(%ebp),%edx
08624f1e +0x204:  mov    %edx,0x74(%esp)
08624f22 +0x208:  mov    -0x84(%ebp),%edx
08624f28 +0x20e:  mov    %edx,0x70(%esp)
08624f2c +0x212:  mov    -0x80(%ebp),%edx
08624f2f +0x215:  mov    %edx,0x6c(%esp)
08624f33 +0x219:  mov    -0x7c(%ebp),%edx
08624f36 +0x21c:  mov    %edx,0x68(%esp)
08624f3a +0x220:  mov    -0x78(%ebp),%edx
08624f3d +0x223:  mov    %edx,0x64(%esp)
08624f41 +0x227:  mov    -0x74(%ebp),%edx
08624f44 +0x22a:  mov    %edx,0x60(%esp)
08624f48 +0x22e:  mov    -0x70(%ebp),%edx
08624f4b +0x231:  mov    %edx,0x5c(%esp)
08624f4f +0x235:  mov    -0x6c(%ebp),%edx
08624f52 +0x238:  mov    %edx,0x58(%esp)
08624f56 +0x23c:  mov    -0x68(%ebp),%edx
08624f59 +0x23f:  mov    %edx,0x54(%esp)
08624f5d +0x243:  mov    -0x64(%ebp),%edx
08624f60 +0x246:  mov    %edx,0x50(%esp)
08624f64 +0x24a:  mov    -0x60(%ebp),%edx
08624f67 +0x24d:  mov    %edx,0x4c(%esp)
08624f6b +0x251:  mov    -0x5c(%ebp),%edx
08624f6e +0x254:  mov    %edx,0x48(%esp)
08624f72 +0x258:  mov    -0x58(%ebp),%edx
08624f75 +0x25b:  mov    %edx,0x44(%esp)
08624f79 +0x25f:  mov    -0x54(%ebp),%edx
08624f7c +0x262:  mov    %edx,0x40(%esp)
08624f80 +0x266:  mov    -0x50(%ebp),%edx
08624f83 +0x269:  mov    %edx,0x3c(%esp)
08624f87 +0x26d:  mov    -0x4c(%ebp),%edx
08624f8a +0x270:  mov    %edx,0x38(%esp)
08624f8e +0x274:  mov    -0x48(%ebp),%edx
08624f91 +0x277:  mov    %edx,0x34(%esp)
08624f95 +0x27b:  mov    -0x44(%ebp),%edx
08624f98 +0x27e:  mov    %edx,0x30(%esp)
08624f9c +0x282:  mov    -0x40(%ebp),%edx
08624f9f +0x285:  mov    %edx,0x2c(%esp)
08624fa3 +0x289:  mov    -0x3c(%ebp),%edx
08624fa6 +0x28c:  mov    %edx,0x28(%esp)
08624faa +0x290:  mov    -0x38(%ebp),%edx
08624fad +0x293:  mov    %edx,0x24(%esp)
08624fb1 +0x297:  mov    -0x34(%ebp),%edx
08624fb4 +0x29a:  mov    %edx,0x20(%esp)
08624fb8 +0x29e:  mov    -0x30(%ebp),%edx
08624fbb +0x2a1:  mov    %edx,0x1c(%esp)
08624fbf +0x2a5:  mov    -0x2c(%ebp),%edx
08624fc2 +0x2a8:  mov    %edx,0x18(%esp)
08624fc6 +0x2ac:  mov    %edi,0x14(%esp)
08624fca +0x2b0:  mov    %esi,0x10(%esp)
08624fce +0x2b4:  mov    %ebx,0xc(%esp)
08624fd2 +0x2b8:  mov    %eax,0x8(%esp)
08624fd6 +0x2bc:  movl   $"inSert into dnf_old_equip_info(it_id, hp_max, mp_max, phy_att, phy_def, mag_att, mag_def, equip_phy_att, equip_phy_def, equip_mag_att, equip_mag_def, ref_fire, ref_water, ref_dark, ref_light, ref_all_elements, ref_slow, ref_freeze, ref_poison, ref_stun, ref_curse, ref_blind, ref_lightning, ref_stone, ref_sleep, ref_burn, ref_weapon_break, ref_bleeding, ref_pierce, ref_stuck, ref_confuse, ref_hold, ref_armor_break, ref_all_state) values(%d, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i)",0x4(%esp)
08624fde +0x2c4:  mov    -0x20(%ebp),%eax
08624fe1 +0x2c7:  mov    %eax,(%esp)
08624fe4 +0x2ca:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08624fe9 +0x2cf:  xor    $0x1,%eax
08624fec +0x2d2:  test   %al,%al
08624fee +0x2d4:  je     08624ff7 <+0x2dd>
08624ff0 +0x2d6:  mov    $0x0,%eax
08624ff5 +0x2db:  jmp    08625058 <+0x33e>
08624ff7 +0x2dd:  movl   $0x1,0x4(%esp)
08624fff +0x2e5:  mov    -0x20(%ebp),%eax
08625002 +0x2e8:  mov    %eax,(%esp)
08625005 +0x2eb:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0862500a +0x2f0:  xor    $0x1,%eax
0862500d +0x2f3:  test   %al,%al
0862500f +0x2f5:  je     08625018 <+0x2fe>
08625011 +0x2f7:  mov    $0x0,%eax
08625016 +0x2fc:  jmp    08625058 <+0x33e>
08625018 +0x2fe:  lea    -0x28(%ebp),%eax
0862501b +0x301:  mov    %eax,(%esp)
0862501e +0x304:  call   08628f6c <_GLOBAL__I__Z22GetSocketTypeCharactert+0x25ca>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x25ca
08625023 +0x309:  lea    -0x24(%ebp),%eax
08625026 +0x30c:  movl   $&g_equipmentStatInfoMap,0x4(%esp)
0862502e +0x314:  mov    %eax,(%esp)
08625031 +0x317:  call   08628f32 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2590>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2590
08625036 +0x31c:  sub    $0x4,%esp
08625039 +0x31f:  lea    -0x24(%ebp),%eax
0862503c +0x322:  mov    %eax,0x4(%esp)
08625040 +0x326:  lea    -0x28(%ebp),%eax
08625043 +0x329:  mov    %eax,(%esp)
08625046 +0x32c:  call   08628f58 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x25b6>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x25b6
0862504b +0x331:  test   %al,%al
0862504d +0x333:  jne    08624d78 <+0x5e>
08625053 +0x339:  mov    $0x1,%eax
08625058 +0x33e:  lea    -0xc(%ebp),%esp
0862505b +0x341:  add    $0x0,%esp
0862505e +0x344:  pop    %ebx
0862505f +0x345:  pop    %esi
08625060 +0x346:  pop    %edi
08625061 +0x347:  pop    %ebp
08625062 +0x348:  ret
08625063 +0x349:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_old_equip_info_to_db @ 0x8624d1a

/* sync_script::CSyncScript::insert_old_equip_info_to_db() */

undefined4 __thiscall sync_script::CSyncScript::insert_old_equip_info_to_db(CSyncScript *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  char cVar34;
  int iVar35;
  undefined4 *puVar36;
  map<unsigned_int,STEquipmentStatInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STEquipmentStatInfo>>>
  local_2c [4];
  map<unsigned_int,STEquipmentStatInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STEquipmentStatInfo>>>
  local_28 [4];
  MySQL *local_24;
  undefined4 *local_20;
  
  if (*this == (CSyncScript)0x1) {
    local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    std::
    map<unsigned_int,STEquipmentStatInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STEquipmentStatInfo>>>
    ::begin(local_2c);
    while( true ) {
      std::
      map<unsigned_int,STEquipmentStatInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STEquipmentStatInfo>>>
      ::end(local_28);
      cVar34 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STEquipmentStatInfo>>::operator!=
                         ((_Rb_tree_iterator<std::pair<unsigned_int_const,STEquipmentStatInfo>> *)
                          local_2c,(_Rb_tree_iterator *)local_28);
      if (cVar34 == '\0') break;
      iVar35 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STEquipmentStatInfo>>::operator->
                         ((_Rb_tree_iterator<std::pair<unsigned_int_const,STEquipmentStatInfo>> *)
                          local_2c);
      local_20 = (undefined4 *)(iVar35 + 4);
      uVar1 = *(undefined4 *)(iVar35 + 0x84);
      uVar2 = *(undefined4 *)(iVar35 + 0x80);
      uVar3 = *(undefined4 *)(iVar35 + 0x7c);
      uVar4 = *(undefined4 *)(iVar35 + 0x78);
      uVar5 = *(undefined4 *)(iVar35 + 0x74);
      uVar6 = *(undefined4 *)(iVar35 + 0x70);
      uVar7 = *(undefined4 *)(iVar35 + 0x6c);
      uVar8 = *(undefined4 *)(iVar35 + 0x68);
      uVar9 = *(undefined4 *)(iVar35 + 100);
      uVar10 = *(undefined4 *)(iVar35 + 0x60);
      uVar11 = *(undefined4 *)(iVar35 + 0x5c);
      uVar12 = *(undefined4 *)(iVar35 + 0x58);
      uVar13 = *(undefined4 *)(iVar35 + 0x54);
      uVar14 = *(undefined4 *)(iVar35 + 0x50);
      uVar15 = *(undefined4 *)(iVar35 + 0x4c);
      uVar16 = *(undefined4 *)(iVar35 + 0x48);
      uVar17 = *(undefined4 *)(iVar35 + 0x44);
      uVar18 = *(undefined4 *)(iVar35 + 0x40);
      uVar19 = *(undefined4 *)(iVar35 + 0x3c);
      uVar20 = *(undefined4 *)(iVar35 + 0x38);
      uVar21 = *(undefined4 *)(iVar35 + 0x34);
      uVar22 = *(undefined4 *)(iVar35 + 0x30);
      uVar23 = *(undefined4 *)(iVar35 + 0x2c);
      uVar24 = *(undefined4 *)(iVar35 + 0x28);
      uVar25 = *(undefined4 *)(iVar35 + 0x24);
      uVar26 = *(undefined4 *)(iVar35 + 0x20);
      uVar27 = *(undefined4 *)(iVar35 + 0x1c);
      uVar28 = *(undefined4 *)(iVar35 + 0x18);
      uVar29 = *(undefined4 *)(iVar35 + 0x14);
      uVar30 = *(undefined4 *)(iVar35 + 0x10);
      uVar31 = *(undefined4 *)(iVar35 + 0xc);
      uVar32 = *(undefined4 *)(iVar35 + 8);
      uVar33 = *local_20;
      puVar36 = (undefined4 *)
                std::_Rb_tree_iterator<std::pair<unsigned_int_const,STEquipmentStatInfo>>::
                operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STEquipmentStatInfo>> *)
                           local_2c);
      cVar34 = MySQL::set_query(local_24,
                                "inSert into dnf_old_equip_info(it_id, hp_max, mp_max, phy_att, phy_def, mag_att, mag_def, equip_phy_att, equip_phy_def, equip_mag_att, equip_mag_def, ref_fire, ref_water, ref_dark, ref_light, ref_all_elements, ref_slow, ref_freeze, ref_poison, ref_stun, ref_curse, ref_blind, ref_lightning, ref_stone, ref_sleep, ref_burn, ref_weapon_break, ref_bleeding, ref_pierce, ref_stuck, ref_confuse, ref_hold, ref_armor_break, ref_all_state) values(%d, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i)"
                                ,*puVar36,uVar33,uVar32,uVar31,uVar30,uVar29,uVar28,uVar27,uVar26,
                                uVar25,uVar24,uVar23,uVar22,uVar21,uVar20,uVar19,uVar18,uVar17,
                                uVar16,uVar15,uVar14,uVar13,uVar12,uVar11,uVar10,uVar9,uVar8,uVar7,
                                uVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
      if (cVar34 != '\x01') {
        return 0;
      }
      cVar34 = MySQL::exec(local_24,true);
      if (cVar34 != '\x01') {
        return 0;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,STEquipmentStatInfo>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,STEquipmentStatInfo>> *)local_2c);
    }
  }
  return 1;
}
```
