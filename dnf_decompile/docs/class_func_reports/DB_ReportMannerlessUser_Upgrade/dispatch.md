# dispatch

`_ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream`

`DB_ReportMannerlessUser_Upgrade::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_ReportMannerlessUser_Upgrade` | `0x084276b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084276b0  _ZN31DB_ReportMannerlessUser_Upgrade8dispatchEiiP6Stream
#           DB_ReportMannerlessUser_Upgrade::dispatch(int, int, Stream*)
# range [0x084276b0, 0x08427969]
084276b0 +0x000:  push   %ebp
084276b1 +0x001:  mov    %esp,%ebp
084276b3 +0x003:  push   %edi
084276b4 +0x004:  push   %esi
084276b5 +0x005:  push   %ebx
084276b6 +0x006:  sub    $0xa8c,%esp
084276bc +0x00c:  movl   $0x0,-0x20(%ebp)
084276c3 +0x013:  mov    0x14(%ebp),%eax
084276c6 +0x016:  mov    %eax,(%esp)
084276c9 +0x019:  call   08452192 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4da8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4da8
084276ce +0x01e:  mov    %eax,-0x20(%ebp)
084276d1 +0x021:  cmpl   $0x0,-0x20(%ebp)
084276d5 +0x025:  jne    084276e1 <+0x31>
084276d7 +0x027:  mov    $0x0,%eax
084276dc +0x02c:  jmp    0842795e <+0x2ae>
084276e1 +0x031:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084276e6 +0x036:  movl   $0x0,0x8(%esp)
084276ee +0x03e:  movl   $0x4,0x4(%esp)
084276f6 +0x046:  mov    %eax,(%esp)
084276f9 +0x049:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084276fe +0x04e:  mov    %eax,-0x1c(%ebp)
08427701 +0x051:  lea    -0x24(%ebp),%eax
08427704 +0x054:  mov    %eax,(%esp)
08427707 +0x057:  call   0807d750 <_init+0x48>
0842770c +0x05c:  lea    -0xa5e(%ebp),%edx
08427712 +0x062:  mov    $0x800,%ebx
08427717 +0x067:  mov    $0x0,%eax
0842771c +0x06c:  mov    %edx,%ecx
0842771e +0x06e:  and    $0x2,%ecx
08427721 +0x071:  test   %ecx,%ecx
08427723 +0x073:  je     0842772e <+0x7e>
08427725 +0x075:  mov    %ax,(%edx)
08427728 +0x078:  add    $0x2,%edx
0842772b +0x07b:  sub    $0x2,%ebx
0842772e +0x07e:  mov    %ebx,%ecx
08427730 +0x080:  shr    $0x2,%ecx
08427733 +0x083:  mov    %edx,%edi
08427735 +0x085:  rep stos %eax,%es:(%edi)
08427737 +0x087:  mov    %edi,%edx
08427739 +0x089:  mov    %ebx,%ecx
0842773b +0x08b:  and    $0x2,%ecx
0842773e +0x08e:  test   %ecx,%ecx
08427740 +0x090:  je     08427748 <+0x98>
08427742 +0x092:  mov    %ax,(%edx)
08427745 +0x095:  add    $0x2,%edx
08427748 +0x098:  mov    %ebx,%ecx
0842774a +0x09a:  and    $0x1,%ecx
0842774d +0x09d:  test   %ecx,%ecx
0842774f +0x09f:  je     08427756 <+0xa6>
08427751 +0x0a1:  mov    %al,(%edx)
08427753 +0x0a3:  add    $0x1,%edx
08427756 +0x0a6:  lea    -0x5f(%ebp),%edx
08427759 +0x0a9:  mov    $0x3b,%ebx
0842775e +0x0ae:  mov    $0x0,%eax
08427763 +0x0b3:  mov    %edx,%ecx
08427765 +0x0b5:  and    $0x1,%ecx
08427768 +0x0b8:  test   %ecx,%ecx
0842776a +0x0ba:  je     08427774 <+0xc4>
0842776c +0x0bc:  mov    %al,(%edx)
0842776e +0x0be:  add    $0x1,%edx
08427771 +0x0c1:  sub    $0x1,%ebx
08427774 +0x0c4:  mov    %edx,%ecx
08427776 +0x0c6:  and    $0x2,%ecx
08427779 +0x0c9:  test   %ecx,%ecx
0842777b +0x0cb:  je     08427786 <+0xd6>
0842777d +0x0cd:  mov    %ax,(%edx)
08427780 +0x0d0:  add    $0x2,%edx
08427783 +0x0d3:  sub    $0x2,%ebx
08427786 +0x0d6:  mov    %ebx,%ecx
08427788 +0x0d8:  shr    $0x2,%ecx
0842778b +0x0db:  mov    %edx,%edi
0842778d +0x0dd:  rep stos %eax,%es:(%edi)
0842778f +0x0df:  mov    %edi,%edx
08427791 +0x0e1:  mov    %ebx,%ecx
08427793 +0x0e3:  and    $0x2,%ecx
08427796 +0x0e6:  test   %ecx,%ecx
08427798 +0x0e8:  je     084277a0 <+0xf0>
0842779a +0x0ea:  mov    %ax,(%edx)
0842779d +0x0ed:  add    $0x2,%edx
084277a0 +0x0f0:  mov    %ebx,%ecx
084277a2 +0x0f2:  and    $0x1,%ecx
084277a5 +0x0f5:  test   %ecx,%ecx
084277a7 +0x0f7:  je     084277ae <+0xfe>
084277a9 +0x0f9:  mov    %al,(%edx)
084277ab +0x0fb:  add    $0x1,%edx
084277ae +0x0fe:  mov    -0x20(%ebp),%eax
084277b1 +0x101:  add    $0x40,%eax
084277b4 +0x104:  mov    %eax,0x8(%esp)
084277b8 +0x108:  lea    -0x5f(%ebp),%eax
084277bb +0x10b:  mov    %eax,0x4(%esp)
084277bf +0x10f:  mov    -0x1c(%ebp),%eax
084277c2 +0x112:  mov    %eax,(%esp)
084277c5 +0x115:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
084277ca +0x11a:  mov    -0x20(%ebp),%eax
084277cd +0x11d:  mov    0x12(%eax),%eax
084277d0 +0x120:  mov    %eax,(%esp)
084277d3 +0x123:  call   0822c1ca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1874>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1874
084277d8 +0x128:  test   %al,%al
084277da +0x12a:  je     084278b8 <+0x208>
084277e0 +0x130:  lea    -0x25e(%ebp),%edx
084277e6 +0x136:  mov    $0x1ff,%ebx
084277eb +0x13b:  mov    $0x0,%eax
084277f0 +0x140:  mov    %edx,%ecx
084277f2 +0x142:  and    $0x2,%ecx
084277f5 +0x145:  test   %ecx,%ecx
084277f7 +0x147:  je     08427802 <+0x152>
084277f9 +0x149:  mov    %ax,(%edx)
084277fc +0x14c:  add    $0x2,%edx
084277ff +0x14f:  sub    $0x2,%ebx
08427802 +0x152:  mov    %ebx,%ecx
08427804 +0x154:  shr    $0x2,%ecx
08427807 +0x157:  mov    %edx,%edi
08427809 +0x159:  rep stos %eax,%es:(%edi)
0842780b +0x15b:  mov    %edi,%edx
0842780d +0x15d:  mov    %ebx,%ecx
0842780f +0x15f:  and    $0x2,%ecx
08427812 +0x162:  test   %ecx,%ecx
08427814 +0x164:  je     0842781c <+0x16c>
08427816 +0x166:  mov    %ax,(%edx)
08427819 +0x169:  add    $0x2,%edx
0842781c +0x16c:  mov    %ebx,%ecx
0842781e +0x16e:  and    $0x1,%ecx
08427821 +0x171:  test   %ecx,%ecx
08427823 +0x173:  je     0842782a <+0x17a>
08427825 +0x175:  mov    %al,(%edx)
08427827 +0x177:  add    $0x1,%edx
0842782a +0x17a:  mov    -0x20(%ebp),%eax
0842782d +0x17d:  add    $0x5e,%eax
08427830 +0x180:  mov    %eax,0x8(%esp)
08427834 +0x184:  lea    -0x25e(%ebp),%eax
0842783a +0x18a:  mov    %eax,0x4(%esp)
0842783e +0x18e:  mov    -0x1c(%ebp),%eax
08427841 +0x191:  mov    %eax,(%esp)
08427844 +0x194:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
08427849 +0x199:  mov    -0x20(%ebp),%eax
0842784c +0x19c:  mov    0x1a(%eax),%eax
0842784f +0x19f:  mov    %eax,%esi
08427851 +0x1a1:  mov    -0x20(%ebp),%eax
08427854 +0x1a4:  lea    0x22(%eax),%edi
08427857 +0x1a7:  mov    -0x20(%ebp),%eax
0842785a +0x1aa:  mov    0x16(%eax),%eax
0842785d +0x1ad:  mov    %eax,%ebx
0842785f +0x1af:  mov    -0x20(%ebp),%eax
08427862 +0x1b2:  mov    0x1e(%eax),%eax
08427865 +0x1b5:  movl   $0x0,0x4(%esp)
0842786d +0x1bd:  mov    %eax,(%esp)
08427870 +0x1c0:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08427875 +0x1c5:  mov    -0x20(%ebp),%edx
08427878 +0x1c8:  mov    0x12(%edx),%edx
0842787b +0x1cb:  lea    -0x25e(%ebp),%ecx
08427881 +0x1d1:  mov    %ecx,0x20(%esp)
08427885 +0x1d5:  lea    -0x5f(%ebp),%ecx
08427888 +0x1d8:  mov    %ecx,0x1c(%esp)
0842788c +0x1dc:  mov    %esi,0x18(%esp)
08427890 +0x1e0:  mov    %edi,0x14(%esp)
08427894 +0x1e4:  mov    %ebx,0x10(%esp)
08427898 +0x1e8:  mov    %eax,0xc(%esp)
0842789c +0x1ec:  mov    %edx,0x8(%esp)
084278a0 +0x1f0:  movl   $"values(%d, %s, %d, '%s', %d, '%s', now(), '%s')",0x4(%esp)
084278a8 +0x1f8:  lea    -0xa5e(%ebp),%eax
084278ae +0x1fe:  mov    %eax,(%esp)
084278b1 +0x201:  call   0807e440 <_init+0xd38>
084278b6 +0x206:  jmp    0842791b <+0x26b>
084278b8 +0x208:  mov    -0x20(%ebp),%eax
084278bb +0x20b:  mov    0x1a(%eax),%eax
084278be +0x20e:  mov    %eax,%esi
084278c0 +0x210:  mov    -0x20(%ebp),%eax
084278c3 +0x213:  lea    0x22(%eax),%edi
084278c6 +0x216:  mov    -0x20(%ebp),%eax
084278c9 +0x219:  mov    0x16(%eax),%eax
084278cc +0x21c:  mov    %eax,%ebx
084278ce +0x21e:  mov    -0x20(%ebp),%eax
084278d1 +0x221:  mov    0x1e(%eax),%eax
084278d4 +0x224:  movl   $0x0,0x4(%esp)
084278dc +0x22c:  mov    %eax,(%esp)
084278df +0x22f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084278e4 +0x234:  mov    -0x20(%ebp),%edx
084278e7 +0x237:  mov    0x12(%edx),%edx
084278ea +0x23a:  lea    -0x5f(%ebp),%ecx
084278ed +0x23d:  mov    %ecx,0x1c(%esp)
084278f1 +0x241:  mov    %esi,0x18(%esp)
084278f5 +0x245:  mov    %edi,0x14(%esp)
084278f9 +0x249:  mov    %ebx,0x10(%esp)
084278fd +0x24d:  mov    %eax,0xc(%esp)
08427901 +0x251:  mov    %edx,0x8(%esp)
08427905 +0x255:  movl   $"values(%d, %s, %d, '%s', %d, '%s', now(), 'NULL')",0x4(%esp)
0842790d +0x25d:  lea    -0xa5e(%ebp),%eax
08427913 +0x263:  mov    %eax,(%esp)
08427916 +0x266:  call   0807e440 <_init+0xd38>
0842791b +0x26b:  lea    -0xa5e(%ebp),%eax
08427921 +0x271:  mov    %eax,0x8(%esp)
08427925 +0x275:  movl   $"inSert into charac_accusation(accusation_type, m_id, server_id, charac_name, server_id_accu, charac_name_accu, occ_time, chatting_msg) %s",0x4(%esp)
0842792d +0x27d:  mov    -0x1c(%ebp),%eax
08427930 +0x280:  mov    %eax,(%esp)
08427933 +0x283:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08427938 +0x288:  movl   $0x1,0x4(%esp)
08427940 +0x290:  mov    -0x1c(%ebp),%eax
08427943 +0x293:  mov    %eax,(%esp)
08427946 +0x296:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842794b +0x29b:  xor    $0x1,%eax
0842794e +0x29e:  test   %al,%al
08427950 +0x2a0:  je     08427959 <+0x2a9>
08427952 +0x2a2:  mov    $0x0,%eax
08427957 +0x2a7:  jmp    0842795e <+0x2ae>
08427959 +0x2a9:  mov    $0x1,%eax
0842795e +0x2ae:  add    $0xa8c,%esp
08427964 +0x2b4:  pop    %ebx
08427965 +0x2b5:  pop    %esi
08427966 +0x2b6:  pop    %edi
08427967 +0x2b7:  pop    %ebp
08427968 +0x2b8:  ret
08427969 +0x2b9:  nop
```

## 反编译 C

```c
// DB_ReportMannerlessUser_Upgrade::dispatch @ 0x84276b0

/* WARNING: Removing unreachable block (ram,0x08427751) */
/* DB_ReportMannerlessUser_Upgrade::dispatch(int, int, Stream*) */

undefined4 DB_ReportMannerlessUser_Upgrade::dispatch(int param_1,int param_2,Stream *param_3)

{
  Packet_Mannerless_User_Accusation *pPVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  Stream *in_stack_00000010;
  char acStackY_124a [1966];
  undefined1 local_a62 [2048];
  char local_262 [511];
  char local_63;
  char local_62 [58];
  time_t local_28;
  Packet_Mannerless_User_Accusation *local_24;
  MySQL *local_20;
  
  bVar11 = 0;
  local_24 = (Packet_Mannerless_User_Accusation *)0x0;
  local_24 = Stream::GetOutBuffer<Packet_Mannerless_User_Accusation>(in_stack_00000010);
  if (local_24 == (Packet_Mannerless_User_Accusation *)0x0) {
    uVar4 = 0;
  }
  else {
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
    time(&local_28);
    puVar7 = (undefined4 *)local_a62;
    uVar9 = 0x800;
    bVar10 = ((uint)puVar7 & 2) != 0;
    if (bVar10) {
      local_a62._0_2_ = 0;
      puVar7 = (undefined4 *)(local_a62 + 2);
      uVar9 = 0x7fe;
    }
    for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
    }
    if (bVar10) {
      *(undefined2 *)puVar7 = 0;
    }
    pcVar8 = &local_63;
    uVar9 = 0x3b;
    bVar10 = ((uint)pcVar8 & 1) != 0;
    if (bVar10) {
      local_63 = '\0';
      pcVar8 = local_62;
      uVar9 = 0x3a;
    }
    if (((uint)pcVar8 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
      uVar9 = uVar9 - 2;
    }
    for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar9 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
    }
    if (!bVar10) {
      *pcVar8 = '\0';
    }
    MySQL::escape_string(local_20,&local_63,(char *)(local_24 + 0x40));
    cVar3 = Packet_Mannerless_User_Accusation::isNeedTypeForChattingMsg(*(int *)(local_24 + 0x12));
    if (cVar3 == '\0') {
      uVar4 = *(undefined4 *)(local_24 + 0x1a);
      pPVar1 = local_24 + 0x22;
      uVar2 = *(undefined4 *)(local_24 + 0x16);
      uVar5 = NumberToString(*(uint *)(local_24 + 0x1e),0);
      sprintf(local_a62,"values(%d, %s, %d, \'%s\', %d, \'%s\', now(), \'NULL\')",
              *(undefined4 *)(local_24 + 0x12),uVar5,uVar2,pPVar1,uVar4,&local_63);
    }
    else {
      pcVar8 = local_262;
      uVar9 = 0x1ff;
      bVar10 = ((uint)pcVar8 & 2) != 0;
      if (bVar10) {
        local_262[0] = '\0';
        local_262[1] = '\0';
        pcVar8 = local_262 + 2;
        uVar9 = 0x1fd;
      }
      for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
      }
      if (!bVar10) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
      }
      *pcVar8 = '\0';
      MySQL::escape_string(local_20,local_262,(char *)(local_24 + 0x5e));
      uVar4 = *(undefined4 *)(local_24 + 0x1a);
      pPVar1 = local_24 + 0x22;
      uVar2 = *(undefined4 *)(local_24 + 0x16);
      uVar5 = NumberToString(*(uint *)(local_24 + 0x1e),0);
      sprintf(local_a62,"values(%d, %s, %d, \'%s\', %d, \'%s\', now(), \'%s\')",
              *(undefined4 *)(local_24 + 0x12),uVar5,uVar2,pPVar1,uVar4,&local_63,local_262);
    }
    MySQL::set_query(local_20,
                     "inSert into charac_accusation(accusation_type, m_id, server_id, charac_name, server_id_accu, charac_name_accu, occ_time, chatting_msg) %s"
                     ,local_a62);
    cVar3 = MySQL::exec(local_20,true);
    if (cVar3 == '\x01') {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
