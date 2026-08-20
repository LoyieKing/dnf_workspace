# dispatch

`_ZN27DB_UpdateItemDropStatistics8dispatchEiiP6Stream`

`DB_UpdateItemDropStatistics::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateItemDropStatistics` | `0x084285ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084285ae  _ZN27DB_UpdateItemDropStatistics8dispatchEiiP6Stream
#           DB_UpdateItemDropStatistics::dispatch(int, int, Stream*)
# range [0x084285ae, 0x0842894b]
084285ae +0x000:  push   %ebp
084285af +0x001:  mov    %esp,%ebp
084285b1 +0x003:  push   %edi
084285b2 +0x004:  push   %esi
084285b3 +0x005:  push   %ebx
084285b4 +0x006:  sub    $0x14c,%esp
084285ba +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084285bf +0x011:  movl   $0x0,0x8(%esp)
084285c7 +0x019:  movl   $0x4,0x4(%esp)
084285cf +0x021:  mov    %eax,(%esp)
084285d2 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084285d7 +0x029:  mov    %eax,-0x2c(%ebp)
084285da +0x02c:  movl   $0x0,-0x30(%ebp)
084285e1 +0x033:  movl   $0x0,-0x34(%ebp)
084285e8 +0x03a:  lea    -0x4c(%ebp),%edx
084285eb +0x03d:  mov    $0x0,%ecx
084285f0 +0x042:  mov    $0x18,%eax
084285f5 +0x047:  mov    %eax,%ebx
084285f7 +0x049:  and    $0xfffffffc,%ebx
084285fa +0x04c:  mov    $0x0,%eax
084285ff +0x051:  mov    %ecx,(%edx,%eax,1)
08428602 +0x054:  add    $0x4,%eax
08428605 +0x057:  cmp    %ebx,%eax
08428607 +0x059:  jb     084285ff <+0x51>
08428609 +0x05b:  add    %eax,%edx
0842860b +0x05d:  lea    -0x64(%ebp),%edx
0842860e +0x060:  mov    $0x0,%ecx
08428613 +0x065:  mov    $0x18,%eax
08428618 +0x06a:  mov    %eax,%ebx
0842861a +0x06c:  and    $0xfffffffc,%ebx
0842861d +0x06f:  mov    $0x0,%eax
08428622 +0x074:  mov    %ecx,(%edx,%eax,1)
08428625 +0x077:  add    $0x4,%eax
08428628 +0x07a:  cmp    %ebx,%eax
0842862a +0x07c:  jb     08428622 <+0x74>
0842862c +0x07e:  add    %eax,%edx
0842862e +0x080:  lea    -0x7c(%ebp),%edx
08428631 +0x083:  mov    $0x0,%ecx
08428636 +0x088:  mov    $0x18,%eax
0842863b +0x08d:  mov    %eax,%ebx
0842863d +0x08f:  and    $0xfffffffc,%ebx
08428640 +0x092:  mov    $0x0,%eax
08428645 +0x097:  mov    %ecx,(%edx,%eax,1)
08428648 +0x09a:  add    $0x4,%eax
0842864b +0x09d:  cmp    %ebx,%eax
0842864d +0x09f:  jb     08428645 <+0x97>
0842864f +0x0a1:  add    %eax,%edx
08428651 +0x0a3:  lea    -0x94(%ebp),%edx
08428657 +0x0a9:  mov    $0x0,%ecx
0842865c +0x0ae:  mov    $0x18,%eax
08428661 +0x0b3:  mov    %eax,%ebx
08428663 +0x0b5:  and    $0xfffffffc,%ebx
08428666 +0x0b8:  mov    $0x0,%eax
0842866b +0x0bd:  mov    %ecx,(%edx,%eax,1)
0842866e +0x0c0:  add    $0x4,%eax
08428671 +0x0c3:  cmp    %ebx,%eax
08428673 +0x0c5:  jb     0842866b <+0xbd>
08428675 +0x0c7:  add    %eax,%edx
08428677 +0x0c9:  lea    -0x30(%ebp),%eax
0842867a +0x0cc:  mov    %eax,0x4(%esp)
0842867e +0x0d0:  mov    0x14(%ebp),%eax
08428681 +0x0d3:  mov    %eax,(%esp)
08428684 +0x0d6:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08428689 +0x0db:  lea    -0x34(%ebp),%eax
0842868c +0x0de:  mov    %eax,0x4(%esp)
08428690 +0x0e2:  mov    0x14(%ebp),%eax
08428693 +0x0e5:  mov    %eax,(%esp)
08428696 +0x0e8:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842869b +0x0ed:  movl   $0x0,-0x28(%ebp)
084286a2 +0x0f4:  jmp    084286c2 <+0x114>
084286a4 +0x0f6:  mov    -0x28(%ebp),%edx
084286a7 +0x0f9:  lea    -0x4c(%ebp),%eax
084286aa +0x0fc:  shl    $0x2,%edx
084286ad +0x0ff:  add    %edx,%eax
084286af +0x101:  mov    %eax,0x4(%esp)
084286b3 +0x105:  mov    0x14(%ebp),%eax
084286b6 +0x108:  mov    %eax,(%esp)
084286b9 +0x10b:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084286be +0x110:  addl   $0x1,-0x28(%ebp)
084286c2 +0x114:  cmpl   $0x5,-0x28(%ebp)
084286c6 +0x118:  setle  %al
084286c9 +0x11b:  test   %al,%al
084286cb +0x11d:  jne    084286a4 <+0xf6>
084286cd +0x11f:  movl   $0x0,-0x24(%ebp)
084286d4 +0x126:  jmp    084286f4 <+0x146>
084286d6 +0x128:  mov    -0x24(%ebp),%edx
084286d9 +0x12b:  lea    -0x64(%ebp),%eax
084286dc +0x12e:  shl    $0x2,%edx
084286df +0x131:  add    %edx,%eax
084286e1 +0x133:  mov    %eax,0x4(%esp)
084286e5 +0x137:  mov    0x14(%ebp),%eax
084286e8 +0x13a:  mov    %eax,(%esp)
084286eb +0x13d:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084286f0 +0x142:  addl   $0x1,-0x24(%ebp)
084286f4 +0x146:  cmpl   $0x5,-0x24(%ebp)
084286f8 +0x14a:  setle  %al
084286fb +0x14d:  test   %al,%al
084286fd +0x14f:  jne    084286d6 <+0x128>
084286ff +0x151:  movl   $0x0,-0x20(%ebp)
08428706 +0x158:  jmp    08428726 <+0x178>
08428708 +0x15a:  mov    -0x20(%ebp),%edx
0842870b +0x15d:  lea    -0x7c(%ebp),%eax
0842870e +0x160:  shl    $0x2,%edx
08428711 +0x163:  add    %edx,%eax
08428713 +0x165:  mov    %eax,0x4(%esp)
08428717 +0x169:  mov    0x14(%ebp),%eax
0842871a +0x16c:  mov    %eax,(%esp)
0842871d +0x16f:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08428722 +0x174:  addl   $0x1,-0x20(%ebp)
08428726 +0x178:  cmpl   $0x5,-0x20(%ebp)
0842872a +0x17c:  setle  %al
0842872d +0x17f:  test   %al,%al
0842872f +0x181:  jne    08428708 <+0x15a>
08428731 +0x183:  movl   $0x0,-0x1c(%ebp)
08428738 +0x18a:  jmp    0842875b <+0x1ad>
0842873a +0x18c:  mov    -0x1c(%ebp),%edx
0842873d +0x18f:  lea    -0x94(%ebp),%eax
08428743 +0x195:  shl    $0x2,%edx
08428746 +0x198:  add    %edx,%eax
08428748 +0x19a:  mov    %eax,0x4(%esp)
0842874c +0x19e:  mov    0x14(%ebp),%eax
0842874f +0x1a1:  mov    %eax,(%esp)
08428752 +0x1a4:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08428757 +0x1a9:  addl   $0x1,-0x1c(%ebp)
0842875b +0x1ad:  cmpl   $0x5,-0x1c(%ebp)
0842875f +0x1b1:  setle  %al
08428762 +0x1b4:  test   %al,%al
08428764 +0x1b6:  jne    0842873a <+0x18c>
08428766 +0x1b8:  mov    -0x80(%ebp),%edx
08428769 +0x1bb:  mov    -0x84(%ebp),%ebx
0842876f +0x1c1:  mov    -0x88(%ebp),%edi
08428775 +0x1c7:  mov    -0x8c(%ebp),%eax
0842877b +0x1cd:  mov    %eax,-0xe8(%ebp)
08428781 +0x1d3:  mov    -0x90(%ebp),%eax
08428787 +0x1d9:  mov    %eax,-0xe4(%ebp)
0842878d +0x1df:  mov    -0x94(%ebp),%eax
08428793 +0x1e5:  mov    %eax,-0xe0(%ebp)
08428799 +0x1eb:  mov    -0x68(%ebp),%eax
0842879c +0x1ee:  mov    %eax,-0xdc(%ebp)
084287a2 +0x1f4:  mov    -0x6c(%ebp),%eax
084287a5 +0x1f7:  mov    %eax,-0xd8(%ebp)
084287ab +0x1fd:  mov    -0x70(%ebp),%eax
084287ae +0x200:  mov    %eax,-0xd4(%ebp)
084287b4 +0x206:  mov    -0x74(%ebp),%eax
084287b7 +0x209:  mov    %eax,-0xd0(%ebp)
084287bd +0x20f:  mov    -0x78(%ebp),%eax
084287c0 +0x212:  mov    %eax,-0xcc(%ebp)
084287c6 +0x218:  mov    -0x7c(%ebp),%eax
084287c9 +0x21b:  mov    %eax,-0xc8(%ebp)
084287cf +0x221:  mov    -0x50(%ebp),%eax
084287d2 +0x224:  mov    %eax,-0xc4(%ebp)
084287d8 +0x22a:  mov    -0x54(%ebp),%eax
084287db +0x22d:  mov    %eax,-0xc0(%ebp)
084287e1 +0x233:  mov    -0x58(%ebp),%eax
084287e4 +0x236:  mov    %eax,-0xbc(%ebp)
084287ea +0x23c:  mov    -0x5c(%ebp),%eax
084287ed +0x23f:  mov    %eax,-0xb8(%ebp)
084287f3 +0x245:  mov    -0x60(%ebp),%eax
084287f6 +0x248:  mov    %eax,-0xb4(%ebp)
084287fc +0x24e:  mov    -0x64(%ebp),%eax
084287ff +0x251:  mov    %eax,-0xb0(%ebp)
08428805 +0x257:  mov    -0x38(%ebp),%eax
08428808 +0x25a:  mov    %eax,-0xac(%ebp)
0842880e +0x260:  mov    -0x3c(%ebp),%eax
08428811 +0x263:  mov    %eax,-0xa8(%ebp)
08428817 +0x269:  mov    -0x40(%ebp),%eax
0842881a +0x26c:  mov    %eax,-0xa4(%ebp)
08428820 +0x272:  mov    -0x44(%ebp),%eax
08428823 +0x275:  mov    %eax,-0xa0(%ebp)
08428829 +0x27b:  mov    -0x48(%ebp),%eax
0842882c +0x27e:  mov    %eax,-0x9c(%ebp)
08428832 +0x284:  mov    -0x4c(%ebp),%esi
08428835 +0x287:  mov    -0x34(%ebp),%ecx
08428838 +0x28a:  mov    -0x30(%ebp),%eax
0842883b +0x28d:  mov    %edx,0x6c(%esp)
0842883f +0x291:  mov    %ebx,0x68(%esp)
08428843 +0x295:  mov    %edi,0x64(%esp)
08428847 +0x299:  mov    -0xe8(%ebp),%edx
0842884d +0x29f:  mov    %edx,0x60(%esp)
08428851 +0x2a3:  mov    -0xe4(%ebp),%edx
08428857 +0x2a9:  mov    %edx,0x5c(%esp)
0842885b +0x2ad:  mov    -0xe0(%ebp),%edx
08428861 +0x2b3:  mov    %edx,0x58(%esp)
08428865 +0x2b7:  mov    -0xdc(%ebp),%edx
0842886b +0x2bd:  mov    %edx,0x54(%esp)
0842886f +0x2c1:  mov    -0xd8(%ebp),%edx
08428875 +0x2c7:  mov    %edx,0x50(%esp)
08428879 +0x2cb:  mov    -0xd4(%ebp),%edx
0842887f +0x2d1:  mov    %edx,0x4c(%esp)
08428883 +0x2d5:  mov    -0xd0(%ebp),%edx
08428889 +0x2db:  mov    %edx,0x48(%esp)
0842888d +0x2df:  mov    -0xcc(%ebp),%edx
08428893 +0x2e5:  mov    %edx,0x44(%esp)
08428897 +0x2e9:  mov    -0xc8(%ebp),%edx
0842889d +0x2ef:  mov    %edx,0x40(%esp)
084288a1 +0x2f3:  mov    -0xc4(%ebp),%edx
084288a7 +0x2f9:  mov    %edx,0x3c(%esp)
084288ab +0x2fd:  mov    -0xc0(%ebp),%edx
084288b1 +0x303:  mov    %edx,0x38(%esp)
084288b5 +0x307:  mov    -0xbc(%ebp),%edx
084288bb +0x30d:  mov    %edx,0x34(%esp)
084288bf +0x311:  mov    -0xb8(%ebp),%edx
084288c5 +0x317:  mov    %edx,0x30(%esp)
084288c9 +0x31b:  mov    -0xb4(%ebp),%edx
084288cf +0x321:  mov    %edx,0x2c(%esp)
084288d3 +0x325:  mov    -0xb0(%ebp),%edx
084288d9 +0x32b:  mov    %edx,0x28(%esp)
084288dd +0x32f:  mov    -0xac(%ebp),%edx
084288e3 +0x335:  mov    %edx,0x24(%esp)
084288e7 +0x339:  mov    -0xa8(%ebp),%edx
084288ed +0x33f:  mov    %edx,0x20(%esp)
084288f1 +0x343:  mov    -0xa4(%ebp),%edx
084288f7 +0x349:  mov    %edx,0x1c(%esp)
084288fb +0x34d:  mov    -0xa0(%ebp),%edx
08428901 +0x353:  mov    %edx,0x18(%esp)
08428905 +0x357:  mov    -0x9c(%ebp),%edx
0842890b +0x35d:  mov    %edx,0x14(%esp)
0842890f +0x361:  mov    %esi,0x10(%esp)
08428913 +0x365:  mov    %ecx,0xc(%esp)
08428917 +0x369:  mov    %eax,0x8(%esp)
0842891b +0x36d:  movl   $"inSert into log_item_drop(occ_date,channel_no,drop_type,stackable_common,stackable_uncommon,stackable_rare,stackable_unique,stackable_epic,stackable_chronicle,equip_common,equip_uncommon,equip_rare,equip_unique,equip_epic,equip_chronicle,recipe_common,recipe_uncommon,recipe_rare,recipe_unique,recipe_epic,recipe_chronicle,artifact_common,artifact_uncommon,artifact_rare,artifact_unique,artifact_epic,artifact_chronicle) values(cast(now() as date),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",0x4(%esp)
08428923 +0x375:  mov    -0x2c(%ebp),%eax
08428926 +0x378:  mov    %eax,(%esp)
08428929 +0x37b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842892e +0x380:  movl   $0x1,0x4(%esp)
08428936 +0x388:  mov    -0x2c(%ebp),%eax
08428939 +0x38b:  mov    %eax,(%esp)
0842893c +0x38e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08428941 +0x393:  add    $0x14c,%esp
08428947 +0x399:  pop    %ebx
08428948 +0x39a:  pop    %esi
08428949 +0x39b:  pop    %edi
0842894a +0x39c:  pop    %ebp
0842894b +0x39d:  ret
```

## 反编译 C

```c
// DB_UpdateItemDropStatistics::dispatch @ 0x84285ae

/* DB_UpdateItemDropStatistics::dispatch(int, int, Stream*) */

void DB_UpdateItemDropStatistics::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  Stream *in_stack_00000010;
  uint local_98 [6];
  uint local_80 [6];
  uint local_68 [6];
  uint local_50 [6];
  int local_38;
  int local_34;
  MySQL *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_30 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_34 = 0;
  local_38 = 0;
  uVar1 = 0;
  do {
    *(undefined4 *)((int)local_50 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x18);
  uVar1 = 0;
  do {
    *(undefined4 *)((int)local_68 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x18);
  uVar1 = 0;
  do {
    *(undefined4 *)((int)local_80 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x18);
  uVar1 = 0;
  do {
    *(undefined4 *)((int)local_98 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x18);
  Stream::operator>>(in_stack_00000010,&local_34);
  Stream::operator>>(in_stack_00000010,&local_38);
  for (local_2c = 0; local_2c < 6; local_2c = local_2c + 1) {
    Stream::operator>>(in_stack_00000010,local_50 + local_2c);
  }
  for (local_28 = 0; local_28 < 6; local_28 = local_28 + 1) {
    Stream::operator>>(in_stack_00000010,local_68 + local_28);
  }
  for (local_24 = 0; local_24 < 6; local_24 = local_24 + 1) {
    Stream::operator>>(in_stack_00000010,local_80 + local_24);
  }
  for (local_20 = 0; local_20 < 6; local_20 = local_20 + 1) {
    Stream::operator>>(in_stack_00000010,local_98 + local_20);
  }
  MySQL::set_query(local_30,
                   "inSert into log_item_drop(occ_date,channel_no,drop_type,stackable_common,stackable_uncommon,stackable_rare,stackable_unique,stackable_epic,stackable_chronicle,equip_common,equip_uncommon,equip_rare,equip_unique,equip_epic,equip_chronicle,recipe_common,recipe_uncommon,recipe_rare,recipe_unique,recipe_epic,recipe_chronicle,artifact_common,artifact_uncommon,artifact_rare,artifact_unique,artifact_epic,artifact_chronicle) values(cast(now() as date),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)"
                   ,local_34,local_38,local_50[0],local_50[1],local_50[2],local_50[3],local_50[4],
                   local_50[5],local_68[0],local_68[1],local_68[2],local_68[3],local_68[4],
                   local_68[5],local_80[0],local_80[1],local_80[2],local_80[3],local_80[4],
                   local_80[5],local_98[0],local_98[1],local_98[2],local_98[3],local_98[4],
                   local_98[5]);
  MySQL::exec(local_30,true);
  return;
}
```
