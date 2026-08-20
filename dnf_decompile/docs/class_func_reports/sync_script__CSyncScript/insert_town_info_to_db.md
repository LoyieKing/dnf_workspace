# insert_town_info_to_db

`_ZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScript`

`sync_script::CSyncScript::insert_town_info_to_db(TownScript const&)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x086265be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086265be  _ZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScript
#           sync_script::CSyncScript::insert_town_info_to_db(TownScript const&)
# range [0x086265be, 0x0862676b]
086265be +0x000:  push   %ebp
086265bf +0x001:  mov    %esp,%ebp
086265c1 +0x003:  push   %edi
086265c2 +0x004:  push   %esi
086265c3 +0x005:  push   %ebx
086265c4 +0x006:  sub    $0x44c,%esp
086265ca +0x00c:  mov    0x8(%ebp),%eax
086265cd +0x00f:  movzbl (%eax),%eax
086265d0 +0x012:  xor    $0x1,%eax
086265d3 +0x015:  test   %al,%al
086265d5 +0x017:  je     086265e1 <+0x23>
086265d7 +0x019:  mov    $0x1,%eax
086265dc +0x01e:  jmp    08626760 <+0x1a2>
086265e1 +0x023:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
086265e6 +0x028:  movl   $0x0,0x8(%esp)
086265ee +0x030:  movl   $0x5,0x4(%esp)
086265f6 +0x038:  mov    %eax,(%esp)
086265f9 +0x03b:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
086265fe +0x040:  mov    %eax,-0x1c(%ebp)
08626601 +0x043:  mov    0xc(%ebp),%eax
08626604 +0x046:  mov    (%eax),%eax
08626606 +0x048:  test   %eax,%eax
08626608 +0x04a:  je     08626623 <+0x65>
0862660a +0x04c:  mov    0xc(%ebp),%eax
0862660d +0x04f:  add    $0x4,%eax
08626610 +0x052:  mov    %eax,(%esp)
08626613 +0x055:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
08626618 +0x05a:  test   %eax,%eax
0862661a +0x05c:  je     08626623 <+0x65>
0862661c +0x05e:  mov    $0x1,%eax
08626621 +0x063:  jmp    08626628 <+0x6a>
08626623 +0x065:  mov    $0x0,%eax
08626628 +0x06a:  test   %al,%al
0862662a +0x06c:  je     0862675b <+0x19d>
08626630 +0x072:  movl   $0xf0,0x8(%esp)
08626638 +0x07a:  movl   $0x0,0x4(%esp)
08626640 +0x082:  movl   $&_ZZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScriptE9town_name,(%esp)
08626647 +0x089:  call   0807dcc0 <_init+0x5b8>
0862664c +0x08e:  lea    -0x42c(%ebp),%ebx
08626652 +0x094:  mov    $0x0,%eax
08626657 +0x099:  mov    $0x100,%edx
0862665c +0x09e:  mov    %ebx,%edi
0862665e +0x0a0:  mov    %edx,%ecx
08626660 +0x0a2:  rep stos %eax,%es:(%edi)
08626662 +0x0a4:  mov    0xc(%ebp),%eax
08626665 +0x0a7:  add    $0x4,%eax
08626668 +0x0aa:  mov    %eax,(%esp)
0862666b +0x0ad:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08626670 +0x0b2:  lea    -0x42c(%ebp),%edx
08626676 +0x0b8:  mov    %edx,0x4(%esp)
0862667a +0x0bc:  mov    %eax,(%esp)
0862667d +0x0bf:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
08626682 +0x0c4:  xor    $0x1,%eax
08626685 +0x0c7:  test   %al,%al
08626687 +0x0c9:  je     086266f9 <+0x13b>
08626689 +0x0cb:  mov    0xc(%ebp),%eax
0862668c +0x0ce:  add    $0x4,%eax
0862668f +0x0d1:  mov    %eax,(%esp)
08626692 +0x0d4:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08626697 +0x0d9:  mov    %eax,%edi
08626699 +0x0db:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
0862669e +0x0e0:  mov    %eax,%esi
086266a0 +0x0e2:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
086266a5 +0x0e7:  mov    %eax,%ebx
086266a7 +0x0e9:  movl   $0x5,0xc(%esp)
086266af +0x0f1:  movl   $0xbc2,0x8(%esp)
086266b7 +0x0f9:  movl   $&_ZZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScriptE19__PRETTY_FUNCTION__,0x4(%esp)
086266bf +0x101:  lea    -0x2c(%ebp),%eax
086266c2 +0x104:  mov    %eax,(%esp)
086266c5 +0x107:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086266ca +0x10c:  movl   $0xbc2,0x18(%esp)
086266d2 +0x114:  movl   $&_ZZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScriptE19__PRETTY_FUNCTION__,0x14(%esp)
086266da +0x11c:  mov    %edi,0x10(%esp)
086266de +0x120:  mov    %esi,0xc(%esp)
086266e2 +0x124:  mov    %ebx,0x8(%esp)
086266e6 +0x128:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
086266ee +0x130:  lea    -0x2c(%ebp),%eax
086266f1 +0x133:  mov    %eax,(%esp)
086266f4 +0x136:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086266f9 +0x13b:  lea    -0x42c(%ebp),%eax
086266ff +0x141:  mov    %eax,0x8(%esp)
08626703 +0x145:  movl   $&_ZZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScriptE9town_name,0x4(%esp)
0862670b +0x14d:  mov    -0x1c(%ebp),%eax
0862670e +0x150:  mov    %eax,(%esp)
08626711 +0x153:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
08626716 +0x158:  mov    0xc(%ebp),%eax
08626719 +0x15b:  mov    (%eax),%eax
0862671b +0x15d:  movl   $&_ZZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScriptE9town_name,0xc(%esp)
08626723 +0x165:  mov    %eax,0x8(%esp)
08626727 +0x169:  movl   $"inSert into dnf_town_info(idx, town_name_kr) values(%d, '%s')",0x4(%esp)
0862672f +0x171:  mov    -0x1c(%ebp),%eax
08626732 +0x174:  mov    %eax,(%esp)
08626735 +0x177:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0862673a +0x17c:  movl   $0x1,0x4(%esp)
08626742 +0x184:  mov    -0x1c(%ebp),%eax
08626745 +0x187:  mov    %eax,(%esp)
08626748 +0x18a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0862674d +0x18f:  xor    $0x1,%eax
08626750 +0x192:  test   %al,%al
08626752 +0x194:  je     0862675b <+0x19d>
08626754 +0x196:  mov    $0x0,%eax
08626759 +0x19b:  jmp    08626760 <+0x1a2>
0862675b +0x19d:  mov    $0x1,%eax
08626760 +0x1a2:  add    $0x44c,%esp
08626766 +0x1a8:  pop    %ebx
08626767 +0x1a9:  pop    %esi
08626768 +0x1aa:  pop    %edi
08626769 +0x1ab:  pop    %ebp
0862676a +0x1ac:  ret
0862676b +0x1ad:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_town_info_to_db @ 0x86265be

/* sync_script::CSyncScript::insert_town_info_to_db(TownScript const&) */

undefined4 __thiscall
sync_script::CSyncScript::insert_town_info_to_db(CSyncScript *this,TownScript *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  char local_430 [1024];
  cMyTrace local_30 [16];
  MySQL *local_20;
  
  bVar8 = 0;
  if (*this != (CSyncScript)0x1) {
    return 1;
  }
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
  if ((*(int *)param_1 == 0) || (iVar3 = std::string::length((string *)(param_1 + 4)), iVar3 == 0))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    memset(insert_town_info_to_db(TownScript_const&)::town_name,0,0xf0);
    pcVar4 = local_430;
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
    }
    pcVar4 = (char *)std::string::c_str((string *)(param_1 + 4));
    cVar2 = CodePage::script2Database(pcVar4,local_430);
    if (cVar2 != '\x01') {
      uVar5 = std::string::c_str((string *)(param_1 + 4));
      uVar6 = CodePage::database();
      uVar7 = CodePage::script();
      cMyTrace::cMyTrace(local_30,
                         "bool sync_script::CSyncScript::insert_town_info_to_db(const TownScript&)",
                         0xbc2,5);
      cMyTrace::operator()
                (local_30,"Error!!! %s->%s [%s][%s][%d]",uVar7,uVar6,uVar5,
                 "bool sync_script::CSyncScript::insert_town_info_to_db(const TownScript&)",0xbc2);
    }
    MySQL::escape_string(local_20,insert_town_info_to_db(TownScript_const&)::town_name,local_430);
    MySQL::set_query(local_20,"inSert into dnf_town_info(idx, town_name_kr) values(%d, \'%s\')",
                     *(undefined4 *)param_1,insert_town_info_to_db(TownScript_const&)::town_name);
    cVar2 = MySQL::exec(local_20,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
