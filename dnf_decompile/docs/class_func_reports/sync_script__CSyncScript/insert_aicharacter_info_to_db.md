# insert_aicharacter_info_to_db

`_ZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScript`

`sync_script::CSyncScript::insert_aicharacter_info_to_db(int, STAICharacterCommonScript const&)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08626392` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08626392  _ZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScript
#           sync_script::CSyncScript::insert_aicharacter_info_to_db(int, STAICharacterCommonScript const&)
# range [0x08626392, 0x08626539]
08626392 +0x000:  push   %ebp
08626393 +0x001:  mov    %esp,%ebp
08626395 +0x003:  push   %edi
08626396 +0x004:  push   %esi
08626397 +0x005:  push   %ebx
08626398 +0x006:  sub    $0x44c,%esp
0862639e +0x00c:  mov    0x8(%ebp),%eax
086263a1 +0x00f:  movzbl (%eax),%eax
086263a4 +0x012:  xor    $0x1,%eax
086263a7 +0x015:  test   %al,%al
086263a9 +0x017:  je     086263b5 <+0x23>
086263ab +0x019:  mov    $0x1,%eax
086263b0 +0x01e:  jmp    0862652f <+0x19d>
086263b5 +0x023:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
086263ba +0x028:  movl   $0x0,0x8(%esp)
086263c2 +0x030:  movl   $0x5,0x4(%esp)
086263ca +0x038:  mov    %eax,(%esp)
086263cd +0x03b:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
086263d2 +0x040:  mov    %eax,-0x1c(%ebp)
086263d5 +0x043:  cmpl   $0x0,0xc(%ebp)
086263d9 +0x047:  je     086263f4 <+0x62>
086263db +0x049:  mov    0x10(%ebp),%eax
086263de +0x04c:  add    $0x4,%eax
086263e1 +0x04f:  mov    %eax,(%esp)
086263e4 +0x052:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
086263e9 +0x057:  test   %eax,%eax
086263eb +0x059:  je     086263f4 <+0x62>
086263ed +0x05b:  mov    $0x1,%eax
086263f2 +0x060:  jmp    086263f9 <+0x67>
086263f4 +0x062:  mov    $0x0,%eax
086263f9 +0x067:  test   %al,%al
086263fb +0x069:  je     0862652a <+0x198>
08626401 +0x06f:  movl   $0xf0,0x8(%esp)
08626409 +0x077:  movl   $0x0,0x4(%esp)
08626411 +0x07f:  movl   $&_ZZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScriptE21aicharacter_info_name,(%esp)
08626418 +0x086:  call   0807dcc0 <_init+0x5b8>
0862641d +0x08b:  lea    -0x42c(%ebp),%ebx
08626423 +0x091:  mov    $0x0,%eax
08626428 +0x096:  mov    $0x100,%edx
0862642d +0x09b:  mov    %ebx,%edi
0862642f +0x09d:  mov    %edx,%ecx
08626431 +0x09f:  rep stos %eax,%es:(%edi)
08626433 +0x0a1:  mov    0x10(%ebp),%eax
08626436 +0x0a4:  add    $0x4,%eax
08626439 +0x0a7:  mov    %eax,(%esp)
0862643c +0x0aa:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08626441 +0x0af:  lea    -0x42c(%ebp),%edx
08626447 +0x0b5:  mov    %edx,0x4(%esp)
0862644b +0x0b9:  mov    %eax,(%esp)
0862644e +0x0bc:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
08626453 +0x0c1:  xor    $0x1,%eax
08626456 +0x0c4:  test   %al,%al
08626458 +0x0c6:  je     086264ca <+0x138>
0862645a +0x0c8:  mov    0x10(%ebp),%eax
0862645d +0x0cb:  add    $0x4,%eax
08626460 +0x0ce:  mov    %eax,(%esp)
08626463 +0x0d1:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08626468 +0x0d6:  mov    %eax,%edi
0862646a +0x0d8:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
0862646f +0x0dd:  mov    %eax,%esi
08626471 +0x0df:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
08626476 +0x0e4:  mov    %eax,%ebx
08626478 +0x0e6:  movl   $0x5,0xc(%esp)
08626480 +0x0ee:  movl   $0xb95,0x8(%esp)
08626488 +0x0f6:  movl   $&_ZZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScriptE19__PRETTY_FUNCTION__,0x4(%esp)
08626490 +0x0fe:  lea    -0x2c(%ebp),%eax
08626493 +0x101:  mov    %eax,(%esp)
08626496 +0x104:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0862649b +0x109:  movl   $0xb95,0x18(%esp)
086264a3 +0x111:  movl   $&_ZZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScriptE19__PRETTY_FUNCTION__,0x14(%esp)
086264ab +0x119:  mov    %edi,0x10(%esp)
086264af +0x11d:  mov    %esi,0xc(%esp)
086264b3 +0x121:  mov    %ebx,0x8(%esp)
086264b7 +0x125:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
086264bf +0x12d:  lea    -0x2c(%ebp),%eax
086264c2 +0x130:  mov    %eax,(%esp)
086264c5 +0x133:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086264ca +0x138:  lea    -0x42c(%ebp),%eax
086264d0 +0x13e:  mov    %eax,0x8(%esp)
086264d4 +0x142:  movl   $&_ZZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScriptE21aicharacter_info_name,0x4(%esp)
086264dc +0x14a:  mov    -0x1c(%ebp),%eax
086264df +0x14d:  mov    %eax,(%esp)
086264e2 +0x150:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
086264e7 +0x155:  movl   $&_ZZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScriptE21aicharacter_info_name,0xc(%esp)
086264ef +0x15d:  mov    0xc(%ebp),%eax
086264f2 +0x160:  mov    %eax,0x8(%esp)
086264f6 +0x164:  movl   $"inSert into dnf_aicharacter_info(idx, ai_name_kr) values(%d, '%s')",0x4(%esp)
086264fe +0x16c:  mov    -0x1c(%ebp),%eax
08626501 +0x16f:  mov    %eax,(%esp)
08626504 +0x172:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08626509 +0x177:  movl   $0x1,0x4(%esp)
08626511 +0x17f:  mov    -0x1c(%ebp),%eax
08626514 +0x182:  mov    %eax,(%esp)
08626517 +0x185:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0862651c +0x18a:  xor    $0x1,%eax
0862651f +0x18d:  test   %al,%al
08626521 +0x18f:  je     0862652a <+0x198>
08626523 +0x191:  mov    $0x0,%eax
08626528 +0x196:  jmp    0862652f <+0x19d>
0862652a +0x198:  mov    $0x1,%eax
0862652f +0x19d:  add    $0x44c,%esp
08626535 +0x1a3:  pop    %ebx
08626536 +0x1a4:  pop    %esi
08626537 +0x1a5:  pop    %edi
08626538 +0x1a6:  pop    %ebp
08626539 +0x1a7:  ret
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_aicharacter_info_to_db @ 0x8626392

/* sync_script::CSyncScript::insert_aicharacter_info_to_db(int, STAICharacterCommonScript const&) */

undefined4 __thiscall
sync_script::CSyncScript::insert_aicharacter_info_to_db
          (CSyncScript *this,int param_1,STAICharacterCommonScript *param_2)

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
  if ((param_1 == 0) || (iVar3 = std::string::length((string *)(param_2 + 4)), iVar3 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    memset(insert_aicharacter_info_to_db(int,STAICharacterCommonScript_const&)::
           aicharacter_info_name,0,0xf0);
    pcVar4 = local_430;
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
    }
    pcVar4 = (char *)std::string::c_str((string *)(param_2 + 4));
    cVar2 = CodePage::script2Database(pcVar4,local_430);
    if (cVar2 != '\x01') {
      uVar5 = std::string::c_str((string *)(param_2 + 4));
      uVar6 = CodePage::database();
      uVar7 = CodePage::script();
      cMyTrace::cMyTrace(local_30,
                         "bool sync_script::CSyncScript::insert_aicharacter_info_to_db(int, const STAICharacterCommonScript&)"
                         ,0xb95,5);
      cMyTrace::operator()
                (local_30,"Error!!! %s->%s [%s][%s][%d]",uVar7,uVar6,uVar5,
                 "bool sync_script::CSyncScript::insert_aicharacter_info_to_db(int, const STAICharacterCommonScript&)"
                 ,0xb95);
    }
    MySQL::escape_string
              (local_20,insert_aicharacter_info_to_db(int,STAICharacterCommonScript_const&)::
                        aicharacter_info_name,local_430);
    MySQL::set_query(local_20,"inSert into dnf_aicharacter_info(idx, ai_name_kr) values(%d, \'%s\')"
                     ,param_1,insert_aicharacter_info_to_db(int,STAICharacterCommonScript_const&)::
                              aicharacter_info_name);
    cVar2 = MySQL::exec(local_20,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
