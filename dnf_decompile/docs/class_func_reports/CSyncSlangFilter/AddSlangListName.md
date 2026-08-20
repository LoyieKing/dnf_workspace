# AddSlangListName

`_ZN16CSyncSlangFilter16AddSlangListNameEv`

`CSyncSlangFilter::AddSlangListName()`

| 类 | 地址 |
|---|---|
| `CSyncSlangFilter` | `0x0862dec6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862dec6  _ZN16CSyncSlangFilter16AddSlangListNameEv
#           CSyncSlangFilter::AddSlangListName()
# range [0x0862dec6, 0x0862e0bf]
0862dec6 +0x000:  push   %ebp
0862dec7 +0x001:  mov    %esp,%ebp
0862dec9 +0x003:  push   %edi
0862deca +0x004:  push   %esi
0862decb +0x005:  push   %ebx
0862decc +0x006:  sub    $0x7c,%esp
0862decf +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0862ded4 +0x00e:  movl   $0x0,0x8(%esp)
0862dedc +0x016:  movl   $0x1,0x4(%esp)
0862dee4 +0x01e:  mov    %eax,(%esp)
0862dee7 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0862deec +0x026:  mov    %eax,-0x20(%ebp)
0862deef +0x029:  movl   $"seLect slang from slang_list_name",0x4(%esp)
0862def7 +0x031:  mov    -0x20(%ebp),%eax
0862defa +0x034:  mov    %eax,(%esp)
0862defd +0x037:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0862df02 +0x03c:  movl   $0x1,0x4(%esp)
0862df0a +0x044:  mov    -0x20(%ebp),%eax
0862df0d +0x047:  mov    %eax,(%esp)
0862df10 +0x04a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0862df15 +0x04f:  xor    $0x1,%eax
0862df18 +0x052:  test   %al,%al
0862df1a +0x054:  je     0862df26 <+0x60>
0862df1c +0x056:  mov    $0x0,%eax
0862df21 +0x05b:  jmp    0862e0b7 <+0x1f1>
0862df26 +0x060:  movl   $0x0,-0x1c(%ebp)
0862df2d +0x067:  jmp    0862e099 <+0x1d3>
0862df32 +0x06c:  mov    -0x20(%ebp),%eax
0862df35 +0x06f:  mov    %eax,(%esp)
0862df38 +0x072:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0862df3d +0x077:  xor    $0x1,%eax
0862df40 +0x07a:  test   %al,%al
0862df42 +0x07c:  je     0862df4e <+0x88>
0862df44 +0x07e:  mov    $0x0,%eax
0862df49 +0x083:  jmp    0862e0b7 <+0x1f1>
0862df4e +0x088:  lea    -0x6b(%ebp),%edx
0862df51 +0x08b:  mov    $0x33,%ebx
0862df56 +0x090:  mov    $0x0,%eax
0862df5b +0x095:  mov    %edx,%ecx
0862df5d +0x097:  and    $0x1,%ecx
0862df60 +0x09a:  test   %ecx,%ecx
0862df62 +0x09c:  je     0862df6c <+0xa6>
0862df64 +0x09e:  mov    %al,(%edx)
0862df66 +0x0a0:  add    $0x1,%edx
0862df69 +0x0a3:  sub    $0x1,%ebx
0862df6c +0x0a6:  mov    %edx,%ecx
0862df6e +0x0a8:  and    $0x2,%ecx
0862df71 +0x0ab:  test   %ecx,%ecx
0862df73 +0x0ad:  je     0862df7e <+0xb8>
0862df75 +0x0af:  mov    %ax,(%edx)
0862df78 +0x0b2:  add    $0x2,%edx
0862df7b +0x0b5:  sub    $0x2,%ebx
0862df7e +0x0b8:  mov    %ebx,%ecx
0862df80 +0x0ba:  shr    $0x2,%ecx
0862df83 +0x0bd:  mov    %edx,%edi
0862df85 +0x0bf:  rep stos %eax,%es:(%edi)
0862df87 +0x0c1:  mov    %edi,%edx
0862df89 +0x0c3:  mov    %ebx,%ecx
0862df8b +0x0c5:  and    $0x2,%ecx
0862df8e +0x0c8:  test   %ecx,%ecx
0862df90 +0x0ca:  je     0862df98 <+0xd2>
0862df92 +0x0cc:  mov    %ax,(%edx)
0862df95 +0x0cf:  add    $0x2,%edx
0862df98 +0x0d2:  mov    %ebx,%ecx
0862df9a +0x0d4:  and    $0x1,%ecx
0862df9d +0x0d7:  test   %ecx,%ecx
0862df9f +0x0d9:  je     0862dfa6 <+0xe0>
0862dfa1 +0x0db:  mov    %al,(%edx)
0862dfa3 +0x0dd:  add    $0x1,%edx
0862dfa6 +0x0e0:  movl   $0x33,0xc(%esp)
0862dfae +0x0e8:  lea    -0x6b(%ebp),%eax
0862dfb1 +0x0eb:  mov    %eax,0x8(%esp)
0862dfb5 +0x0ef:  movl   $0x0,0x4(%esp)
0862dfbd +0x0f7:  mov    -0x20(%ebp),%eax
0862dfc0 +0x0fa:  mov    %eax,(%esp)
0862dfc3 +0x0fd:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0862dfc8 +0x102:  xor    $0x1,%eax
0862dfcb +0x105:  test   %al,%al
0862dfcd +0x107:  je     0862e00f <+0x149>
0862dfcf +0x109:  movl   $0x5,0xc(%esp)
0862dfd7 +0x111:  movl   $0xd9,0x8(%esp)
0862dfdf +0x119:  movl   $&_ZZN16CSyncSlangFilter16AddSlangListNameEvE19__PRETTY_FUNCTION__,0x4(%esp)
0862dfe7 +0x121:  lea    -0x34(%ebp),%eax
0862dfea +0x124:  mov    %eax,(%esp)
0862dfed +0x127:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0862dff2 +0x12c:  movl   $"CSyncSlangFilter::AddSlangList",0x4(%esp)
0862dffa +0x134:  lea    -0x34(%ebp),%eax
0862dffd +0x137:  mov    %eax,(%esp)
0862e000 +0x13a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0862e005 +0x13f:  mov    $0x0,%eax
0862e00a +0x144:  jmp    0862e0b7 <+0x1f1>
0862e00f +0x149:  lea    -0x21(%ebp),%eax
0862e012 +0x14c:  mov    %eax,(%esp)
0862e015 +0x14f:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0862e01a +0x154:  lea    -0x21(%ebp),%eax
0862e01d +0x157:  mov    %eax,0x8(%esp)
0862e021 +0x15b:  lea    -0x6b(%ebp),%eax
0862e024 +0x15e:  mov    %eax,0x4(%esp)
0862e028 +0x162:  lea    -0x38(%ebp),%eax
0862e02b +0x165:  mov    %eax,(%esp)
0862e02e +0x168:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0862e033 +0x16d:  jmp    0862e050 <+0x18a>
0862e035 +0x16f:  mov    %edx,%ebx
0862e037 +0x171:  mov    %eax,%esi
0862e039 +0x173:  lea    -0x21(%ebp),%eax
0862e03c +0x176:  mov    %eax,(%esp)
0862e03f +0x179:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0862e044 +0x17e:  mov    %esi,%eax
0862e046 +0x180:  mov    %ebx,%edx
0862e048 +0x182:  mov    %eax,(%esp)
0862e04b +0x185:  call   08ae3750 <_Unwind_Resume>
0862e050 +0x18a:  lea    -0x21(%ebp),%eax
0862e053 +0x18d:  mov    %eax,(%esp)
0862e056 +0x190:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0862e05b +0x195:  lea    -0x38(%ebp),%eax
0862e05e +0x198:  mov    %eax,0x4(%esp)
0862e062 +0x19c:  mov    0x8(%ebp),%eax
0862e065 +0x19f:  mov    %eax,(%esp)
0862e068 +0x1a2:  call   0862e276 <_ZN16CSyncSlangFilter12AddSlangNameERKSs>  ; CSyncSlangFilter::AddSlangName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0862e06d +0x1a7:  jmp    0862e08a <+0x1c4>
0862e06f +0x1a9:  mov    %edx,%ebx
0862e071 +0x1ab:  mov    %eax,%esi
0862e073 +0x1ad:  lea    -0x38(%ebp),%eax
0862e076 +0x1b0:  mov    %eax,(%esp)
0862e079 +0x1b3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862e07e +0x1b8:  mov    %esi,%eax
0862e080 +0x1ba:  mov    %ebx,%edx
0862e082 +0x1bc:  mov    %eax,(%esp)
0862e085 +0x1bf:  call   08ae3750 <_Unwind_Resume>
0862e08a +0x1c4:  lea    -0x38(%ebp),%eax
0862e08d +0x1c7:  mov    %eax,(%esp)
0862e090 +0x1ca:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862e095 +0x1cf:  addl   $0x1,-0x1c(%ebp)
0862e099 +0x1d3:  mov    -0x20(%ebp),%eax
0862e09c +0x1d6:  mov    %eax,(%esp)
0862e09f +0x1d9:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0862e0a4 +0x1de:  cmp    -0x1c(%ebp),%eax
0862e0a7 +0x1e1:  seta   %al
0862e0aa +0x1e4:  test   %al,%al
0862e0ac +0x1e6:  jne    0862df32 <+0x6c>
0862e0b2 +0x1ec:  mov    $0x1,%eax
0862e0b7 +0x1f1:  add    $0x7c,%esp
0862e0ba +0x1f4:  pop    %ebx
0862e0bb +0x1f5:  pop    %esi
0862e0bc +0x1f6:  pop    %edi
0862e0bd +0x1f7:  pop    %ebp
0862e0be +0x1f8:  ret
0862e0bf +0x1f9:  nop
```

## 反编译 C

```c
// CSyncSlangFilter::AddSlangListName @ 0x862dec6

/* CSyncSlangFilter::AddSlangListName() */

undefined4 __thiscall CSyncSlangFilter::AddSlangListName(CSyncSlangFilter *this)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  bool bVar6;
  byte bVar7;
  char local_6f;
  char local_6e [50];
  string local_3c;
  cMyTrace local_38 [19];
  allocator<char> local_25;
  MySQL *local_24;
  uint local_20;
  
  bVar7 = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  MySQL::set_query(local_24,"seLect slang from slang_list_name");
  cVar1 = MySQL::exec(local_24,true);
  if (cVar1 == '\x01') {
    local_20 = 0;
    while (uVar3 = MySQL::get_n_rows(local_24), local_20 < uVar3) {
      cVar1 = MySQL::fetch(local_24);
      if (cVar1 != '\x01') {
        return 0;
      }
      pcVar5 = &local_6f;
      uVar3 = 0x33;
      bVar6 = ((uint)pcVar5 & 1) != 0;
      if (bVar6) {
        local_6f = '\0';
        pcVar5 = local_6e;
        uVar3 = 0x32;
      }
      if (((uint)pcVar5 & 2) != 0) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5 = pcVar5 + 2;
        uVar3 = uVar3 - 2;
      }
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
      }
      if ((uVar3 & 2) != 0) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5 = pcVar5 + 2;
      }
      if (!bVar6) {
        *pcVar5 = '\0';
      }
      cVar1 = MySQL::get_str(local_24,0,&local_6f,0x33);
      if (cVar1 != '\x01') {
        cMyTrace::cMyTrace(local_38,"bool CSyncSlangFilter::AddSlangListName()",0xd9,5);
        cMyTrace::operator()(local_38,"CSyncSlangFilter::AddSlangList");
        return 0;
      }
      std::allocator<char>::allocator();
                    /* try { // try from 0862e02e to 0862e032 has its CatchHandler @ 0862e035 */
      std::string::string((string *)&local_3c,&local_6f,(allocator *)&local_25);
      std::allocator<char>::~allocator(&local_25);
                    /* try { // try from 0862e068 to 0862e06c has its CatchHandler @ 0862e06f */
      AddSlangName(this,&local_3c);
      std::string::~string((string *)&local_3c);
      local_20 = local_20 + 1;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
