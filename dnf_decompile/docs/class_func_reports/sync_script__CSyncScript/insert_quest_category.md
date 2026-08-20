# insert_quest_category

`_ZN11sync_script11CSyncScript21insert_quest_categoryEP11QuestScript`

`sync_script::CSyncScript::insert_quest_category(QuestScript*)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x0862243a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862243a  _ZN11sync_script11CSyncScript21insert_quest_categoryEP11QuestScript
#           sync_script::CSyncScript::insert_quest_category(QuestScript*)
# range [0x0862243a, 0x086225b5]
0862243a +0x000:  push   %ebp
0862243b +0x001:  mov    %esp,%ebp
0862243d +0x003:  push   %edi
0862243e +0x004:  push   %esi
0862243f +0x005:  push   %ebx
08622440 +0x006:  sub    $0x24c,%esp
08622446 +0x00c:  mov    0x8(%ebp),%eax
08622449 +0x00f:  movzbl (%eax),%eax
0862244c +0x012:  xor    $0x1,%eax
0862244f +0x015:  test   %al,%al
08622451 +0x017:  je     0862245d <+0x23>
08622453 +0x019:  mov    $0x1,%eax
08622458 +0x01e:  jmp    086225ab <+0x171>
0862245d +0x023:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08622462 +0x028:  movl   $0x0,0x8(%esp)
0862246a +0x030:  movl   $0x2,0x4(%esp)
08622472 +0x038:  mov    %eax,(%esp)
08622475 +0x03b:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0862247a +0x040:  mov    %eax,-0x1c(%ebp)
0862247d +0x043:  lea    -0x12c(%ebp),%ebx
08622483 +0x049:  mov    $0x0,%eax
08622488 +0x04e:  mov    $0x40,%edx
0862248d +0x053:  mov    %ebx,%edi
0862248f +0x055:  mov    %edx,%ecx
08622491 +0x057:  rep stos %eax,%es:(%edi)
08622493 +0x059:  mov    0xc(%ebp),%eax
08622496 +0x05c:  add    $0x4,%eax
08622499 +0x05f:  mov    %eax,(%esp)
0862249c +0x062:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086224a1 +0x067:  lea    -0x12c(%ebp),%edx
086224a7 +0x06d:  mov    %edx,0x4(%esp)
086224ab +0x071:  mov    %eax,(%esp)
086224ae +0x074:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
086224b3 +0x079:  xor    $0x1,%eax
086224b6 +0x07c:  test   %al,%al
086224b8 +0x07e:  je     0862252a <+0xf0>
086224ba +0x080:  mov    0xc(%ebp),%eax
086224bd +0x083:  add    $0x4,%eax
086224c0 +0x086:  mov    %eax,(%esp)
086224c3 +0x089:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086224c8 +0x08e:  mov    %eax,%edi
086224ca +0x090:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
086224cf +0x095:  mov    %eax,%esi
086224d1 +0x097:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
086224d6 +0x09c:  mov    %eax,%ebx
086224d8 +0x09e:  movl   $0x5,0xc(%esp)
086224e0 +0x0a6:  movl   $0x6a4,0x8(%esp)
086224e8 +0x0ae:  movl   $&_ZZN11sync_script11CSyncScript21insert_quest_categoryEP11QuestScriptE19__PRETTY_FUNCTION__,0x4(%esp)
086224f0 +0x0b6:  lea    -0x2c(%ebp),%eax
086224f3 +0x0b9:  mov    %eax,(%esp)
086224f6 +0x0bc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086224fb +0x0c1:  movl   $0x6a4,0x18(%esp)
08622503 +0x0c9:  movl   $&_ZZN11sync_script11CSyncScript21insert_quest_categoryEP11QuestScriptE19__PRETTY_FUNCTION__,0x14(%esp)
0862250b +0x0d1:  mov    %edi,0x10(%esp)
0862250f +0x0d5:  mov    %esi,0xc(%esp)
08622513 +0x0d9:  mov    %ebx,0x8(%esp)
08622517 +0x0dd:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
0862251f +0x0e5:  lea    -0x2c(%ebp),%eax
08622522 +0x0e8:  mov    %eax,(%esp)
08622525 +0x0eb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0862252a +0x0f0:  lea    -0x22c(%ebp),%ebx
08622530 +0x0f6:  mov    $0x0,%eax
08622535 +0x0fb:  mov    $0x40,%edx
0862253a +0x100:  mov    %ebx,%edi
0862253c +0x102:  mov    %edx,%ecx
0862253e +0x104:  rep stos %eax,%es:(%edi)
08622540 +0x106:  lea    -0x12c(%ebp),%eax
08622546 +0x10c:  mov    %eax,0x8(%esp)
0862254a +0x110:  lea    -0x22c(%ebp),%eax
08622550 +0x116:  mov    %eax,0x4(%esp)
08622554 +0x11a:  mov    -0x1c(%ebp),%eax
08622557 +0x11d:  mov    %eax,(%esp)
0862255a +0x120:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
0862255f +0x125:  mov    0xc(%ebp),%eax
08622562 +0x128:  mov    (%eax),%eax
08622564 +0x12a:  lea    -0x22c(%ebp),%edx
0862256a +0x130:  mov    %edx,0xc(%esp)
0862256e +0x134:  mov    %eax,0x8(%esp)
08622572 +0x138:  movl   $"inSert into quest_category(quest_idx, quest_name) values(%d, '%s')",0x4(%esp)
0862257a +0x140:  mov    -0x1c(%ebp),%eax
0862257d +0x143:  mov    %eax,(%esp)
08622580 +0x146:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08622585 +0x14b:  movl   $0x1,0x4(%esp)
0862258d +0x153:  mov    -0x1c(%ebp),%eax
08622590 +0x156:  mov    %eax,(%esp)
08622593 +0x159:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08622598 +0x15e:  xor    $0x1,%eax
0862259b +0x161:  test   %al,%al
0862259d +0x163:  je     086225a6 <+0x16c>
0862259f +0x165:  mov    $0x0,%eax
086225a4 +0x16a:  jmp    086225ab <+0x171>
086225a6 +0x16c:  mov    $0x1,%eax
086225ab +0x171:  add    $0x24c,%esp
086225b1 +0x177:  pop    %ebx
086225b2 +0x178:  pop    %esi
086225b3 +0x179:  pop    %edi
086225b4 +0x17a:  pop    %ebp
086225b5 +0x17b:  ret
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_quest_category @ 0x862243a

/* sync_script::CSyncScript::insert_quest_category(QuestScript*) */

undefined4 __thiscall
sync_script::CSyncScript::insert_quest_category(CSyncScript *this,QuestScript *param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  char local_230 [256];
  char local_130 [256];
  cMyTrace local_30 [16];
  MySQL *local_20;
  
  bVar7 = 0;
  if (*this == (CSyncScript)0x1) {
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    pcVar3 = local_130;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar7 * -2 + 1) * 4;
    }
    pcVar3 = (char *)std::string::c_str((string *)(param_1 + 4));
    cVar1 = CodePage::script2Database(pcVar3,local_130);
    if (cVar1 != '\x01') {
      uVar2 = std::string::c_str((string *)(param_1 + 4));
      uVar4 = CodePage::database();
      uVar5 = CodePage::script();
      cMyTrace::cMyTrace(local_30,
                         "bool sync_script::CSyncScript::insert_quest_category(QuestScript*)",0x6a4,
                         5);
      cMyTrace::operator()
                (local_30,"Error!!! %s->%s [%s][%s][%d]",uVar5,uVar4,uVar2,
                 "bool sync_script::CSyncScript::insert_quest_category(QuestScript*)",0x6a4);
    }
    pcVar3 = local_230;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar7 * -2 + 1) * 4;
    }
    MySQL::escape_string(local_20,local_230,local_130);
    MySQL::set_query(local_20,"inSert into quest_category(quest_idx, quest_name) values(%d, \'%s\')"
                     ,*(undefined4 *)param_1,local_230);
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
