# insert_random_option_ref

`_ZN11sync_script11CSyncScript24insert_random_option_refEv`

`sync_script::CSyncScript::insert_random_option_ref()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08625ea2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08625ea2  _ZN11sync_script11CSyncScript24insert_random_option_refEv
#           sync_script::CSyncScript::insert_random_option_ref()
# range [0x08625ea2, 0x086260db]
08625ea2 +0x000:  push   %ebp
08625ea3 +0x001:  mov    %esp,%ebp
08625ea5 +0x003:  push   %edi
08625ea6 +0x004:  push   %esi
08625ea7 +0x005:  push   %ebx
08625ea8 +0x006:  sub    $0x44c,%esp
08625eae +0x00c:  mov    0x8(%ebp),%eax
08625eb1 +0x00f:  movzbl (%eax),%eax
08625eb4 +0x012:  xor    $0x1,%eax
08625eb7 +0x015:  test   %al,%al
08625eb9 +0x017:  je     08625ec5 <+0x23>
08625ebb +0x019:  mov    $0x1,%ebx
08625ec0 +0x01e:  jmp    086260ce <+0x22c>
08625ec5 +0x023:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08625eca +0x028:  movl   $0x0,0x8(%esp)
08625ed2 +0x030:  movl   $0x5,0x4(%esp)
08625eda +0x038:  mov    %eax,(%esp)
08625edd +0x03b:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08625ee2 +0x040:  mov    %eax,-0x20(%ebp)
08625ee5 +0x043:  lea    -0x38(%ebp),%eax
08625ee8 +0x046:  mov    %eax,(%esp)
08625eeb +0x049:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08625ef0 +0x04e:  movb   $0x1,-0x1a(%ebp)
08625ef4 +0x052:  jmp    08626092 <+0x1f0>
08625ef9 +0x057:  movb   $0x0,-0x19(%ebp)
08625efd +0x05b:  jmp    0862607f <+0x1dd>
08625f02 +0x060:  movzbl -0x19(%ebp),%esi
08625f06 +0x064:  movzbl -0x1a(%ebp),%ebx
08625f0a +0x068:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08625f0f +0x06d:  lea    0x4e10(%eax),%edx
08625f15 +0x073:  lea    -0x34(%ebp),%eax
08625f18 +0x076:  movl   $0x0,0x10(%esp)
08625f20 +0x07e:  mov    %esi,0xc(%esp)
08625f24 +0x082:  mov    %ebx,0x8(%esp)
08625f28 +0x086:  mov    %edx,0x4(%esp)
08625f2c +0x08a:  mov    %eax,(%esp)
08625f2f +0x08d:  call   08a73956 <_ZN18RandomOptionScript9getPrefixEiib>  ; RandomOptionScript::getPrefix(int, int, bool)
08625f34 +0x092:  sub    $0x4,%esp
08625f37 +0x095:  lea    -0x34(%ebp),%eax
08625f3a +0x098:  mov    %eax,0x4(%esp)
08625f3e +0x09c:  lea    -0x38(%ebp),%eax
08625f41 +0x09f:  mov    %eax,(%esp)
08625f44 +0x0a2:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08625f49 +0x0a7:  jmp    08625f63 <+0xc1>
08625f4b +0x0a9:  mov    %edx,%ebx
08625f4d +0x0ab:  mov    %eax,%esi
08625f4f +0x0ad:  lea    -0x34(%ebp),%eax
08625f52 +0x0b0:  mov    %eax,(%esp)
08625f55 +0x0b3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08625f5a +0x0b8:  mov    %esi,%eax
08625f5c +0x0ba:  mov    %ebx,%edx
08625f5e +0x0bc:  jmp    086260a8 <+0x206>
08625f63 +0x0c1:  lea    -0x34(%ebp),%eax
08625f66 +0x0c4:  mov    %eax,(%esp)
08625f69 +0x0c7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08625f6e +0x0cc:  lea    -0x38(%ebp),%eax
08625f71 +0x0cf:  mov    %eax,(%esp)
08625f74 +0x0d2:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
08625f79 +0x0d7:  test   %eax,%eax
08625f7b +0x0d9:  setne  %al
08625f7e +0x0dc:  test   %al,%al
08625f80 +0x0de:  je     0862607b <+0x1d9>
08625f86 +0x0e4:  lea    -0x438(%ebp),%ebx
08625f8c +0x0ea:  mov    $0x0,%eax
08625f91 +0x0ef:  mov    $0x100,%edx
08625f96 +0x0f4:  mov    %ebx,%edi
08625f98 +0x0f6:  mov    %edx,%ecx
08625f9a +0x0f8:  rep stos %eax,%es:(%edi)
08625f9c +0x0fa:  lea    -0x38(%ebp),%eax
08625f9f +0x0fd:  mov    %eax,(%esp)
08625fa2 +0x100:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08625fa7 +0x105:  lea    -0x438(%ebp),%edx
08625fad +0x10b:  mov    %edx,0x4(%esp)
08625fb1 +0x10f:  mov    %eax,(%esp)
08625fb4 +0x112:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
08625fb9 +0x117:  xor    $0x1,%eax
08625fbc +0x11a:  test   %al,%al
08625fbe +0x11c:  je     0862602d <+0x18b>
08625fc0 +0x11e:  lea    -0x38(%ebp),%eax
08625fc3 +0x121:  mov    %eax,(%esp)
08625fc6 +0x124:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08625fcb +0x129:  mov    %eax,%edi
08625fcd +0x12b:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
08625fd2 +0x130:  mov    %eax,%esi
08625fd4 +0x132:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
08625fd9 +0x137:  mov    %eax,%ebx
08625fdb +0x139:  movl   $0x5,0xc(%esp)
08625fe3 +0x141:  movl   $0xb31,0x8(%esp)
08625feb +0x149:  movl   $&_ZZN11sync_script11CSyncScript24insert_random_option_refEvE19__PRETTY_FUNCTION__,0x4(%esp)
08625ff3 +0x151:  lea    -0x30(%ebp),%eax
08625ff6 +0x154:  mov    %eax,(%esp)
08625ff9 +0x157:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08625ffe +0x15c:  movl   $0xb31,0x18(%esp)
08626006 +0x164:  movl   $&_ZZN11sync_script11CSyncScript24insert_random_option_refEvE19__PRETTY_FUNCTION__,0x14(%esp)
0862600e +0x16c:  mov    %edi,0x10(%esp)
08626012 +0x170:  mov    %esi,0xc(%esp)
08626016 +0x174:  mov    %ebx,0x8(%esp)
0862601a +0x178:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
08626022 +0x180:  lea    -0x30(%ebp),%eax
08626025 +0x183:  mov    %eax,(%esp)
08626028 +0x186:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0862602d +0x18b:  movzbl -0x19(%ebp),%edx
08626031 +0x18f:  movzbl -0x1a(%ebp),%eax
08626035 +0x193:  lea    -0x438(%ebp),%ecx
0862603b +0x199:  mov    %ecx,0x10(%esp)
0862603f +0x19d:  mov    %edx,0xc(%esp)
08626043 +0x1a1:  mov    %eax,0x8(%esp)
08626047 +0x1a5:  movl   $"inSert into random_option_ref(random_option_index, random_option_value, random_option_name) values(%d,%d, '%s')",0x4(%esp)
0862604f +0x1ad:  mov    -0x20(%ebp),%eax
08626052 +0x1b0:  mov    %eax,(%esp)
08626055 +0x1b3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0862605a +0x1b8:  movl   $0x1,0x4(%esp)
08626062 +0x1c0:  mov    -0x20(%ebp),%eax
08626065 +0x1c3:  mov    %eax,(%esp)
08626068 +0x1c6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0862606d +0x1cb:  xor    $0x1,%eax
08626070 +0x1ce:  test   %al,%al
08626072 +0x1d0:  je     0862607b <+0x1d9>
08626074 +0x1d2:  mov    $0x0,%ebx
08626079 +0x1d7:  jmp    086260c3 <+0x221>
0862607b +0x1d9:  addb   $0x1,-0x19(%ebp)
0862607f +0x1dd:  cmpb   $0x64,-0x19(%ebp)
08626083 +0x1e1:  setbe  %al
08626086 +0x1e4:  test   %al,%al
08626088 +0x1e6:  jne    08625f02 <+0x60>
0862608e +0x1ec:  addb   $0x1,-0x1a(%ebp)
08626092 +0x1f0:  cmpb   $0xff,-0x1a(%ebp)
08626096 +0x1f4:  setne  %al
08626099 +0x1f7:  test   %al,%al
0862609b +0x1f9:  jne    08625ef9 <+0x57>
086260a1 +0x1ff:  mov    $0x1,%ebx
086260a6 +0x204:  jmp    086260c3 <+0x221>
086260a8 +0x206:  mov    %edx,%ebx
086260aa +0x208:  mov    %eax,%esi
086260ac +0x20a:  lea    -0x38(%ebp),%eax
086260af +0x20d:  mov    %eax,(%esp)
086260b2 +0x210:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086260b7 +0x215:  mov    %esi,%eax
086260b9 +0x217:  mov    %ebx,%edx
086260bb +0x219:  mov    %eax,(%esp)
086260be +0x21c:  call   08ae3750 <_Unwind_Resume>
086260c3 +0x221:  lea    -0x38(%ebp),%eax
086260c6 +0x224:  mov    %eax,(%esp)
086260c9 +0x227:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086260ce +0x22c:  mov    %ebx,%eax
086260d0 +0x22e:  lea    -0xc(%ebp),%esp
086260d3 +0x231:  add    $0x0,%esp
086260d6 +0x234:  pop    %ebx
086260d7 +0x235:  pop    %esi
086260d8 +0x236:  pop    %edi
086260d9 +0x237:  pop    %ebp
086260da +0x238:  ret
086260db +0x239:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_random_option_ref @ 0x8625ea2

/* sync_script::CSyncScript::insert_random_option_ref() */

undefined4 __thiscall sync_script::CSyncScript::insert_random_option_ref(CSyncScript *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  char local_43c [1024];
  string local_3c [4];
  string local_38 [4];
  cMyTrace local_34 [16];
  MySQL *local_24;
  bool local_1e;
  byte local_1d;
  
  bVar8 = 0;
  if (*this == (CSyncScript)0x1) {
    local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    std::string::string(local_3c);
    for (local_1e = true; local_1e != true; local_1e = (bool)(local_1e + 1)) {
      for (local_1d = 0; bVar1 = local_1e, local_1d < 0x65; local_1d = local_1d + 1) {
                    /* try { // try from 08625f0a to 08625f33 has its CatchHandler @ 086260a8 */
        iVar3 = G_CDataManager();
        RandomOptionScript::getPrefix((int)local_38,iVar3 + 0x4e10,bVar1);
                    /* try { // try from 08625f44 to 08625f48 has its CatchHandler @ 08625f4b */
        std::string::operator=(local_3c,local_38);
                    /* try { // try from 08625f69 to 0862606c has its CatchHandler @ 086260a8 */
        std::string::~string(local_38);
        iVar3 = std::string::length(local_3c);
        if (iVar3 != 0) {
          pcVar4 = local_43c;
          for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
            pcVar4[0] = '\0';
            pcVar4[1] = '\0';
            pcVar4[2] = '\0';
            pcVar4[3] = '\0';
            pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
          }
          pcVar4 = (char *)std::string::c_str(local_3c);
          cVar2 = CodePage::script2Database(pcVar4,local_43c);
          if (cVar2 != '\x01') {
            uVar7 = std::string::c_str(local_3c);
            uVar5 = CodePage::database();
            uVar6 = CodePage::script();
            cMyTrace::cMyTrace(local_34,"bool sync_script::CSyncScript::insert_random_option_ref()",
                               0xb31,5);
            cMyTrace::operator()
                      (local_34,"Error!!! %s->%s [%s][%s][%d]",uVar6,uVar5,uVar7,
                       "bool sync_script::CSyncScript::insert_random_option_ref()",0xb31);
          }
          MySQL::set_query(local_24,
                           "inSert into random_option_ref(random_option_index, random_option_value, random_option_name) values(%d,%d, \'%s\')"
                           ,(uint)local_1e,(uint)local_1d,local_43c);
          cVar2 = MySQL::exec(local_24,true);
          if (cVar2 != '\x01') {
            uVar7 = 0;
            goto LAB_086260c3;
          }
        }
      }
    }
    uVar7 = 1;
LAB_086260c3:
    std::string::~string(local_3c);
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}
```
