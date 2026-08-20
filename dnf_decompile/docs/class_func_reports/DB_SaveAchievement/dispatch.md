# dispatch

`_ZN18DB_SaveAchievement8dispatchEiiP6Stream`

`DB_SaveAchievement::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveAchievement` | `0x0840deaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840deaa  _ZN18DB_SaveAchievement8dispatchEiiP6Stream
#           DB_SaveAchievement::dispatch(int, int, Stream*)
# range [0x0840deaa, 0x0840e073]
0840deaa +0x000:  push   %ebp
0840deab +0x001:  mov    %esp,%ebp
0840dead +0x003:  push   %edi
0840deae +0x004:  push   %ebx
0840deaf +0x005:  sub    $0x1d10,%esp
0840deb5 +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840deba +0x010:  movl   $0x0,0x8(%esp)
0840dec2 +0x018:  movl   $0x2,0x4(%esp)
0840deca +0x020:  mov    %eax,(%esp)
0840decd +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840ded2 +0x028:  mov    %eax,-0x10(%ebp)
0840ded5 +0x02b:  mov    0x14(%ebp),%eax
0840ded8 +0x02e:  mov    %eax,(%esp)
0840dedb +0x031:  call   08450922 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3538>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3538
0840dee0 +0x036:  mov    %eax,-0xc(%ebp)
0840dee3 +0x039:  lea    -0x1cfb(%ebp),%edx
0840dee9 +0x03f:  mov    $0x1ce7,%ebx
0840deee +0x044:  mov    $0x0,%eax
0840def3 +0x049:  mov    %edx,%ecx
0840def5 +0x04b:  and    $0x1,%ecx
0840def8 +0x04e:  test   %ecx,%ecx
0840defa +0x050:  je     0840df04 <+0x5a>
0840defc +0x052:  mov    %al,(%edx)
0840defe +0x054:  add    $0x1,%edx
0840df01 +0x057:  sub    $0x1,%ebx
0840df04 +0x05a:  mov    %edx,%ecx
0840df06 +0x05c:  and    $0x2,%ecx
0840df09 +0x05f:  test   %ecx,%ecx
0840df0b +0x061:  je     0840df16 <+0x6c>
0840df0d +0x063:  mov    %ax,(%edx)
0840df10 +0x066:  add    $0x2,%edx
0840df13 +0x069:  sub    $0x2,%ebx
0840df16 +0x06c:  mov    %ebx,%ecx
0840df18 +0x06e:  shr    $0x2,%ecx
0840df1b +0x071:  mov    %edx,%edi
0840df1d +0x073:  rep stos %eax,%es:(%edi)
0840df1f +0x075:  mov    %edi,%edx
0840df21 +0x077:  mov    %ebx,%ecx
0840df23 +0x079:  and    $0x2,%ecx
0840df26 +0x07c:  test   %ecx,%ecx
0840df28 +0x07e:  je     0840df30 <+0x86>
0840df2a +0x080:  mov    %ax,(%edx)
0840df2d +0x083:  add    $0x2,%edx
0840df30 +0x086:  mov    %ebx,%ecx
0840df32 +0x088:  and    $0x1,%ecx
0840df35 +0x08b:  test   %ecx,%ecx
0840df37 +0x08d:  je     0840df3e <+0x94>
0840df39 +0x08f:  mov    %al,(%edx)
0840df3b +0x091:  add    $0x1,%edx
0840df3e +0x094:  movl   $0x1ce7,-0x14(%ebp)
0840df45 +0x09b:  mov    -0xc(%ebp),%eax
0840df48 +0x09e:  movl   $0x1800,0xc(%esp)
0840df50 +0x0a6:  mov    %eax,0x8(%esp)
0840df54 +0x0aa:  lea    -0x14(%ebp),%eax
0840df57 +0x0ad:  mov    %eax,0x4(%esp)
0840df5b +0x0b1:  lea    -0x1cfb(%ebp),%eax
0840df61 +0x0b7:  mov    %eax,(%esp)
0840df64 +0x0ba:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
0840df69 +0x0bf:  xor    $0x1,%eax
0840df6c +0x0c2:  test   %al,%al
0840df6e +0x0c4:  je     0840df7a <+0xd0>
0840df70 +0x0c6:  mov    $0x0,%eax
0840df75 +0x0cb:  jmp    0840e06a <+0x1c0>
0840df7a +0x0d0:  mov    -0xc(%ebp),%eax
0840df7d +0x0d3:  mov    0x1808(%eax),%ebx
0840df83 +0x0d9:  mov    -0x14(%ebp),%eax
0840df86 +0x0dc:  mov    %eax,0xc(%esp)
0840df8a +0x0e0:  lea    -0x1cfb(%ebp),%eax
0840df90 +0x0e6:  mov    %eax,0x8(%esp)
0840df94 +0x0ea:  movl   $0x0,0x4(%esp)
0840df9c +0x0f2:  mov    -0x10(%ebp),%eax
0840df9f +0x0f5:  mov    %eax,(%esp)
0840dfa2 +0x0f8:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0840dfa7 +0x0fd:  mov    %ebx,0xc(%esp)
0840dfab +0x101:  mov    %eax,0x8(%esp)
0840dfaf +0x105:  movl   $"upDate charac_achievement set achievement='%s', last_update_time=now() where charac_no=%u",0x4(%esp)
0840dfb7 +0x10d:  mov    -0x10(%ebp),%eax
0840dfba +0x110:  mov    %eax,(%esp)
0840dfbd +0x113:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840dfc2 +0x118:  movl   $0x1,0x4(%esp)
0840dfca +0x120:  mov    -0x10(%ebp),%eax
0840dfcd +0x123:  mov    %eax,(%esp)
0840dfd0 +0x126:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840dfd5 +0x12b:  xor    $0x1,%eax
0840dfd8 +0x12e:  test   %al,%al
0840dfda +0x130:  je     0840dfe6 <+0x13c>
0840dfdc +0x132:  mov    $0x0,%eax
0840dfe1 +0x137:  jmp    0840e06a <+0x1c0>
0840dfe6 +0x13c:  mov    -0x10(%ebp),%eax
0840dfe9 +0x13f:  mov    %eax,(%esp)
0840dfec +0x142:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0840dff1 +0x147:  or     %edx,%eax
0840dff3 +0x149:  test   %eax,%eax
0840dff5 +0x14b:  sete   %al
0840dff8 +0x14e:  test   %al,%al
0840dffa +0x150:  je     0840e065 <+0x1bb>
0840dffc +0x152:  mov    -0x14(%ebp),%eax
0840dfff +0x155:  mov    %eax,0xc(%esp)
0840e003 +0x159:  lea    -0x1cfb(%ebp),%eax
0840e009 +0x15f:  mov    %eax,0x8(%esp)
0840e00d +0x163:  movl   $0x0,0x4(%esp)
0840e015 +0x16b:  mov    -0x10(%ebp),%eax
0840e018 +0x16e:  mov    %eax,(%esp)
0840e01b +0x171:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0840e020 +0x176:  mov    -0xc(%ebp),%edx
0840e023 +0x179:  mov    0x1808(%edx),%edx
0840e029 +0x17f:  mov    %eax,0xc(%esp)
0840e02d +0x183:  mov    %edx,0x8(%esp)
0840e031 +0x187:  movl   $"inSert into charac_achievement(charac_no, achievement, last_update_time) values(%u, '%s', now())",0x4(%esp)
0840e039 +0x18f:  mov    -0x10(%ebp),%eax
0840e03c +0x192:  mov    %eax,(%esp)
0840e03f +0x195:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840e044 +0x19a:  movl   $0x1,0x4(%esp)
0840e04c +0x1a2:  mov    -0x10(%ebp),%eax
0840e04f +0x1a5:  mov    %eax,(%esp)
0840e052 +0x1a8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840e057 +0x1ad:  xor    $0x1,%eax
0840e05a +0x1b0:  test   %al,%al
0840e05c +0x1b2:  je     0840e065 <+0x1bb>
0840e05e +0x1b4:  mov    $0x0,%eax
0840e063 +0x1b9:  jmp    0840e06a <+0x1c0>
0840e065 +0x1bb:  mov    $0x1,%eax
0840e06a +0x1c0:  add    $0x1d10,%esp
0840e070 +0x1c6:  pop    %ebx
0840e071 +0x1c7:  pop    %edi
0840e072 +0x1c8:  pop    %ebp
0840e073 +0x1c9:  ret
```

## 反编译 C

```c
// DB_SaveAchievement::dispatch @ 0x840deaa

/* DB_SaveAchievement::dispatch(int, int, Stream*) */

undefined4 DB_SaveAchievement::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  longlong lVar9;
  Stream *in_stack_00000010;
  char local_1cff;
  char local_1cfe [7398];
  uint local_18;
  MySQL *local_14;
  stAchievement_DBSaveData *local_10;
  
  bVar8 = 0;
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_10 = Stream::GetOutBuffer<stAchievement_DBSaveData>(in_stack_00000010);
  pcVar5 = &local_1cff;
  uVar6 = 0x1ce7;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_1cff = '\0';
    pcVar5 = local_1cfe;
    uVar6 = 0x1ce6;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  local_18 = 0x1ce7;
  cVar1 = compress_zip(&local_1cff,&local_18,(char *)local_10,0x1800);
  if (cVar1 == '\x01') {
    uVar2 = *(undefined4 *)(local_10 + 0x1808);
    uVar3 = MySQL::blob_to_str(local_14,0,&local_1cff,local_18);
    MySQL::set_query(local_14,
                     "upDate charac_achievement set achievement=\'%s\', last_update_time=now() where charac_no=%u"
                     ,uVar3,uVar2);
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 == '\x01') {
      lVar9 = MySQL::getAffectedRowCount(local_14);
      if (lVar9 == 0) {
        uVar2 = MySQL::blob_to_str(local_14,0,&local_1cff,local_18);
        MySQL::set_query(local_14,
                         "inSert into charac_achievement(charac_no, achievement, last_update_time) values(%u, \'%s\', now())"
                         ,*(undefined4 *)(local_10 + 0x1808),uVar2);
        cVar1 = MySQL::exec(local_14,true);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
