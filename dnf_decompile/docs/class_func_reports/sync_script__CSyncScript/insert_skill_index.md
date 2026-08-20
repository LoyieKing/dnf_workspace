# insert_skill_index

`_ZN11sync_script11CSyncScript18insert_skill_indexEP13STSkillScripti`

`sync_script::CSyncScript::insert_skill_index(STSkillScript*, int)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x0862262c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862262c  _ZN11sync_script11CSyncScript18insert_skill_indexEP13STSkillScripti
#           sync_script::CSyncScript::insert_skill_index(STSkillScript*, int)
# range [0x0862262c, 0x086227ef]
0862262c +0x000:  push   %ebp
0862262d +0x001:  mov    %esp,%ebp
0862262f +0x003:  push   %edi
08622630 +0x004:  push   %esi
08622631 +0x005:  push   %ebx
08622632 +0x006:  sub    $0x43c,%esp
08622638 +0x00c:  mov    0x8(%ebp),%eax
0862263b +0x00f:  movzbl (%eax),%eax
0862263e +0x012:  xor    $0x1,%eax
08622641 +0x015:  test   %al,%al
08622643 +0x017:  je     0862264f <+0x23>
08622645 +0x019:  mov    $0x1,%eax
0862264a +0x01e:  jmp    086227e4 <+0x1b8>
0862264f +0x023:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08622654 +0x028:  movl   $0x0,0x8(%esp)
0862265c +0x030:  movl   $0x3,0x4(%esp)
08622664 +0x038:  mov    %eax,(%esp)
08622667 +0x03b:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0862266c +0x040:  mov    %eax,-0x1c(%ebp)
0862266f +0x043:  lea    -0x12b(%ebp),%edx
08622675 +0x049:  mov    $0xff,%ebx
0862267a +0x04e:  mov    $0x0,%eax
0862267f +0x053:  mov    %edx,%ecx
08622681 +0x055:  and    $0x1,%ecx
08622684 +0x058:  test   %ecx,%ecx
08622686 +0x05a:  je     08622690 <+0x64>
08622688 +0x05c:  mov    %al,(%edx)
0862268a +0x05e:  add    $0x1,%edx
0862268d +0x061:  sub    $0x1,%ebx
08622690 +0x064:  mov    %edx,%ecx
08622692 +0x066:  and    $0x2,%ecx
08622695 +0x069:  test   %ecx,%ecx
08622697 +0x06b:  je     086226a2 <+0x76>
08622699 +0x06d:  mov    %ax,(%edx)
0862269c +0x070:  add    $0x2,%edx
0862269f +0x073:  sub    $0x2,%ebx
086226a2 +0x076:  mov    %ebx,%ecx
086226a4 +0x078:  shr    $0x2,%ecx
086226a7 +0x07b:  mov    %edx,%edi
086226a9 +0x07d:  rep stos %eax,%es:(%edi)
086226ab +0x07f:  mov    %edi,%edx
086226ad +0x081:  mov    %ebx,%ecx
086226af +0x083:  and    $0x2,%ecx
086226b2 +0x086:  test   %ecx,%ecx
086226b4 +0x088:  je     086226bc <+0x90>
086226b6 +0x08a:  mov    %ax,(%edx)
086226b9 +0x08d:  add    $0x2,%edx
086226bc +0x090:  mov    %ebx,%ecx
086226be +0x092:  and    $0x1,%ecx
086226c1 +0x095:  test   %ecx,%ecx
086226c3 +0x097:  je     086226ca <+0x9e>
086226c5 +0x099:  mov    %al,(%edx)
086226c7 +0x09b:  add    $0x1,%edx
086226ca +0x09e:  lea    -0x428(%ebp),%edx
086226d0 +0x0a4:  mov    $0x0,%eax
086226d5 +0x0a9:  mov    $0xbf,%ecx
086226da +0x0ae:  mov    %edx,%edi
086226dc +0x0b0:  rep stos %eax,%es:(%edi)
086226de +0x0b2:  mov    %edi,%edx
086226e0 +0x0b4:  mov    %al,(%edx)
086226e2 +0x0b6:  add    $0x1,%edx
086226e5 +0x0b9:  mov    0xc(%ebp),%eax
086226e8 +0x0bc:  add    $0x4,%eax
086226eb +0x0bf:  mov    %eax,(%esp)
086226ee +0x0c2:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086226f3 +0x0c7:  lea    -0x12b(%ebp),%edx
086226f9 +0x0cd:  mov    %edx,0x4(%esp)
086226fd +0x0d1:  mov    %eax,(%esp)
08622700 +0x0d4:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
08622705 +0x0d9:  xor    $0x1,%eax
08622708 +0x0dc:  test   %al,%al
0862270a +0x0de:  je     08622772 <+0x146>
0862270c +0x0e0:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
08622711 +0x0e5:  mov    %eax,%esi
08622713 +0x0e7:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
08622718 +0x0ec:  mov    %eax,%ebx
0862271a +0x0ee:  movl   $0x5,0xc(%esp)
08622722 +0x0f6:  movl   $0x6e0,0x8(%esp)
0862272a +0x0fe:  movl   $&_ZZN11sync_script11CSyncScript18insert_skill_indexEP13STSkillScriptiE19__PRETTY_FUNCTION__,0x4(%esp)
08622732 +0x106:  lea    -0x2c(%ebp),%eax
08622735 +0x109:  mov    %eax,(%esp)
08622738 +0x10c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0862273d +0x111:  movl   $0x6e0,0x18(%esp)
08622745 +0x119:  movl   $&_ZZN11sync_script11CSyncScript18insert_skill_indexEP13STSkillScriptiE19__PRETTY_FUNCTION__,0x14(%esp)
0862274d +0x121:  lea    -0x12b(%ebp),%eax
08622753 +0x127:  mov    %eax,0x10(%esp)
08622757 +0x12b:  mov    %esi,0xc(%esp)
0862275b +0x12f:  mov    %ebx,0x8(%esp)
0862275f +0x133:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
08622767 +0x13b:  lea    -0x2c(%ebp),%eax
0862276a +0x13e:  mov    %eax,(%esp)
0862276d +0x141:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08622772 +0x146:  lea    -0x12b(%ebp),%eax
08622778 +0x14c:  mov    %eax,0x8(%esp)
0862277c +0x150:  lea    -0x428(%ebp),%eax
08622782 +0x156:  mov    %eax,0x4(%esp)
08622786 +0x15a:  mov    -0x1c(%ebp),%eax
08622789 +0x15d:  mov    %eax,(%esp)
0862278c +0x160:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
08622791 +0x165:  mov    0xc(%ebp),%eax
08622794 +0x168:  mov    (%eax),%eax
08622796 +0x16a:  lea    -0x428(%ebp),%edx
0862279c +0x170:  mov    %edx,0x10(%esp)
086227a0 +0x174:  mov    %eax,0xc(%esp)
086227a4 +0x178:  mov    0x10(%ebp),%eax
086227a7 +0x17b:  mov    %eax,0x8(%esp)
086227ab +0x17f:  movl   $"inSert into skill_index(job, skill_idx, skill_name) values(%d, %d, '%s')",0x4(%esp)
086227b3 +0x187:  mov    -0x1c(%ebp),%eax
086227b6 +0x18a:  mov    %eax,(%esp)
086227b9 +0x18d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
086227be +0x192:  movl   $0x1,0x4(%esp)
086227c6 +0x19a:  mov    -0x1c(%ebp),%eax
086227c9 +0x19d:  mov    %eax,(%esp)
086227cc +0x1a0:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
086227d1 +0x1a5:  xor    $0x1,%eax
086227d4 +0x1a8:  test   %al,%al
086227d6 +0x1aa:  je     086227df <+0x1b3>
086227d8 +0x1ac:  mov    $0x0,%eax
086227dd +0x1b1:  jmp    086227e4 <+0x1b8>
086227df +0x1b3:  mov    $0x1,%eax
086227e4 +0x1b8:  add    $0x43c,%esp
086227ea +0x1be:  pop    %ebx
086227eb +0x1bf:  pop    %esi
086227ec +0x1c0:  pop    %edi
086227ed +0x1c1:  pop    %ebp
086227ee +0x1c2:  ret
086227ef +0x1c3:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_skill_index @ 0x862262c

/* sync_script::CSyncScript::insert_skill_index(STSkillScript*, int) */

undefined4 __thiscall
sync_script::CSyncScript::insert_skill_index(CSyncScript *this,STSkillScript *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_42c [765];
  char local_12f;
  char local_12e [254];
  cMyTrace local_30 [16];
  MySQL *local_20;
  
  bVar9 = 0;
  if (*this == (CSyncScript)0x1) {
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    pcVar6 = &local_12f;
    uVar7 = 0xff;
    bVar8 = ((uint)pcVar6 & 1) != 0;
    if (bVar8) {
      local_12f = '\0';
      pcVar6 = local_12e;
      uVar7 = 0xfe;
    }
    if (((uint)pcVar6 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
      uVar7 = uVar7 - 2;
    }
    for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
    }
    if ((uVar7 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
    }
    if (!bVar8) {
      *pcVar6 = '\0';
    }
    pcVar6 = local_42c;
    for (iVar5 = 0xbf; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
    }
    *pcVar6 = '\0';
    pcVar6 = (char *)std::string::c_str((string *)(param_1 + 4));
    cVar1 = CodePage::script2Database(pcVar6,&local_12f);
    if (cVar1 != '\x01') {
      uVar2 = CodePage::database();
      uVar3 = CodePage::script();
      cMyTrace::cMyTrace(local_30,
                         "bool sync_script::CSyncScript::insert_skill_index(STSkillScript*, int)",
                         0x6e0,5);
      cMyTrace::operator()
                (local_30,"Error!!! %s->%s [%s][%s][%d]",uVar3,uVar2,&local_12f,
                 "bool sync_script::CSyncScript::insert_skill_index(STSkillScript*, int)",0x6e0);
    }
    MySQL::escape_string(local_20,local_42c,&local_12f);
    MySQL::set_query(local_20,
                     "inSert into skill_index(job, skill_idx, skill_name) values(%d, %d, \'%s\')",
                     param_2,*(undefined4 *)param_1,local_42c);
    cVar1 = MySQL::exec(local_20,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
