# insert_monster_info_to_db

`_ZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScript`

`sync_script::CSyncScript::insert_monster_info_to_db(STMonsterScript const&)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08626160` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08626160  _ZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScript
#           sync_script::CSyncScript::insert_monster_info_to_db(STMonsterScript const&)
# range [0x08626160, 0x0862630d]
08626160 +0x000:  push   %ebp
08626161 +0x001:  mov    %esp,%ebp
08626163 +0x003:  push   %edi
08626164 +0x004:  push   %esi
08626165 +0x005:  push   %ebx
08626166 +0x006:  sub    $0x44c,%esp
0862616c +0x00c:  mov    0x8(%ebp),%eax
0862616f +0x00f:  movzbl (%eax),%eax
08626172 +0x012:  xor    $0x1,%eax
08626175 +0x015:  test   %al,%al
08626177 +0x017:  je     08626183 <+0x23>
08626179 +0x019:  mov    $0x1,%eax
0862617e +0x01e:  jmp    08626302 <+0x1a2>
08626183 +0x023:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08626188 +0x028:  movl   $0x0,0x8(%esp)
08626190 +0x030:  movl   $0x5,0x4(%esp)
08626198 +0x038:  mov    %eax,(%esp)
0862619b +0x03b:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
086261a0 +0x040:  mov    %eax,-0x1c(%ebp)
086261a3 +0x043:  mov    0xc(%ebp),%eax
086261a6 +0x046:  mov    (%eax),%eax
086261a8 +0x048:  test   %eax,%eax
086261aa +0x04a:  je     086261c5 <+0x65>
086261ac +0x04c:  mov    0xc(%ebp),%eax
086261af +0x04f:  add    $0x4,%eax
086261b2 +0x052:  mov    %eax,(%esp)
086261b5 +0x055:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
086261ba +0x05a:  test   %eax,%eax
086261bc +0x05c:  je     086261c5 <+0x65>
086261be +0x05e:  mov    $0x1,%eax
086261c3 +0x063:  jmp    086261ca <+0x6a>
086261c5 +0x065:  mov    $0x0,%eax
086261ca +0x06a:  test   %al,%al
086261cc +0x06c:  je     086262fd <+0x19d>
086261d2 +0x072:  movl   $0xf0,0x8(%esp)
086261da +0x07a:  movl   $0x0,0x4(%esp)
086261e2 +0x082:  movl   $&_ZZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScriptE12monster_name,(%esp)
086261e9 +0x089:  call   0807dcc0 <_init+0x5b8>
086261ee +0x08e:  lea    -0x42c(%ebp),%ebx
086261f4 +0x094:  mov    $0x0,%eax
086261f9 +0x099:  mov    $0x100,%edx
086261fe +0x09e:  mov    %ebx,%edi
08626200 +0x0a0:  mov    %edx,%ecx
08626202 +0x0a2:  rep stos %eax,%es:(%edi)
08626204 +0x0a4:  mov    0xc(%ebp),%eax
08626207 +0x0a7:  add    $0x4,%eax
0862620a +0x0aa:  mov    %eax,(%esp)
0862620d +0x0ad:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08626212 +0x0b2:  lea    -0x42c(%ebp),%edx
08626218 +0x0b8:  mov    %edx,0x4(%esp)
0862621c +0x0bc:  mov    %eax,(%esp)
0862621f +0x0bf:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
08626224 +0x0c4:  xor    $0x1,%eax
08626227 +0x0c7:  test   %al,%al
08626229 +0x0c9:  je     0862629b <+0x13b>
0862622b +0x0cb:  mov    0xc(%ebp),%eax
0862622e +0x0ce:  add    $0x4,%eax
08626231 +0x0d1:  mov    %eax,(%esp)
08626234 +0x0d4:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08626239 +0x0d9:  mov    %eax,%edi
0862623b +0x0db:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
08626240 +0x0e0:  mov    %eax,%esi
08626242 +0x0e2:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
08626247 +0x0e7:  mov    %eax,%ebx
08626249 +0x0e9:  movl   $0x5,0xc(%esp)
08626251 +0x0f1:  movl   $0xb63,0x8(%esp)
08626259 +0x0f9:  movl   $&_ZZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScriptE19__PRETTY_FUNCTION__,0x4(%esp)
08626261 +0x101:  lea    -0x2c(%ebp),%eax
08626264 +0x104:  mov    %eax,(%esp)
08626267 +0x107:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0862626c +0x10c:  movl   $0xb63,0x18(%esp)
08626274 +0x114:  movl   $&_ZZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScriptE19__PRETTY_FUNCTION__,0x14(%esp)
0862627c +0x11c:  mov    %edi,0x10(%esp)
08626280 +0x120:  mov    %esi,0xc(%esp)
08626284 +0x124:  mov    %ebx,0x8(%esp)
08626288 +0x128:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
08626290 +0x130:  lea    -0x2c(%ebp),%eax
08626293 +0x133:  mov    %eax,(%esp)
08626296 +0x136:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0862629b +0x13b:  lea    -0x42c(%ebp),%eax
086262a1 +0x141:  mov    %eax,0x8(%esp)
086262a5 +0x145:  movl   $&_ZZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScriptE12monster_name,0x4(%esp)
086262ad +0x14d:  mov    -0x1c(%ebp),%eax
086262b0 +0x150:  mov    %eax,(%esp)
086262b3 +0x153:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
086262b8 +0x158:  mov    0xc(%ebp),%eax
086262bb +0x15b:  mov    (%eax),%eax
086262bd +0x15d:  movl   $&_ZZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScriptE12monster_name,0xc(%esp)
086262c5 +0x165:  mov    %eax,0x8(%esp)
086262c9 +0x169:  movl   $"inSert into dnf_monster_info(idx, mon_name_kr) values(%d, '%s')",0x4(%esp)
086262d1 +0x171:  mov    -0x1c(%ebp),%eax
086262d4 +0x174:  mov    %eax,(%esp)
086262d7 +0x177:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
086262dc +0x17c:  movl   $0x1,0x4(%esp)
086262e4 +0x184:  mov    -0x1c(%ebp),%eax
086262e7 +0x187:  mov    %eax,(%esp)
086262ea +0x18a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
086262ef +0x18f:  xor    $0x1,%eax
086262f2 +0x192:  test   %al,%al
086262f4 +0x194:  je     086262fd <+0x19d>
086262f6 +0x196:  mov    $0x0,%eax
086262fb +0x19b:  jmp    08626302 <+0x1a2>
086262fd +0x19d:  mov    $0x1,%eax
08626302 +0x1a2:  add    $0x44c,%esp
08626308 +0x1a8:  pop    %ebx
08626309 +0x1a9:  pop    %esi
0862630a +0x1aa:  pop    %edi
0862630b +0x1ab:  pop    %ebp
0862630c +0x1ac:  ret
0862630d +0x1ad:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_monster_info_to_db @ 0x8626160

/* sync_script::CSyncScript::insert_monster_info_to_db(STMonsterScript const&) */

undefined4 __thiscall
sync_script::CSyncScript::insert_monster_info_to_db(CSyncScript *this,STMonsterScript *param_1)

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
    memset(insert_monster_info_to_db(STMonsterScript_const&)::monster_name,0,0xf0);
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
                         "bool sync_script::CSyncScript::insert_monster_info_to_db(const STMonsterScript&)"
                         ,0xb63,5);
      cMyTrace::operator()
                (local_30,"Error!!! %s->%s [%s][%s][%d]",uVar7,uVar6,uVar5,
                 "bool sync_script::CSyncScript::insert_monster_info_to_db(const STMonsterScript&)",
                 0xb63);
    }
    MySQL::escape_string
              (local_20,insert_monster_info_to_db(STMonsterScript_const&)::monster_name,local_430);
    MySQL::set_query(local_20,"inSert into dnf_monster_info(idx, mon_name_kr) values(%d, \'%s\')",
                     *(undefined4 *)param_1,
                     insert_monster_info_to_db(STMonsterScript_const&)::monster_name);
    cVar2 = MySQL::exec(local_20,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
