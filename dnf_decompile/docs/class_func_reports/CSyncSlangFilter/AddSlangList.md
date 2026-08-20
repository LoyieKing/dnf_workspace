# AddSlangList

`_ZN16CSyncSlangFilter12AddSlangListEv`

`CSyncSlangFilter::AddSlangList()`

| 类 | 地址 |
|---|---|
| `CSyncSlangFilter` | `0x0862dccc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862dccc  _ZN16CSyncSlangFilter12AddSlangListEv
#           CSyncSlangFilter::AddSlangList()
# range [0x0862dccc, 0x0862dec5]
0862dccc +0x000:  push   %ebp
0862dccd +0x001:  mov    %esp,%ebp
0862dccf +0x003:  push   %edi
0862dcd0 +0x004:  push   %esi
0862dcd1 +0x005:  push   %ebx
0862dcd2 +0x006:  sub    $0x7c,%esp
0862dcd5 +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0862dcda +0x00e:  movl   $0x0,0x8(%esp)
0862dce2 +0x016:  movl   $0x1,0x4(%esp)
0862dcea +0x01e:  mov    %eax,(%esp)
0862dced +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0862dcf2 +0x026:  mov    %eax,-0x20(%ebp)
0862dcf5 +0x029:  movl   $"seLect slang from slang_list",0x4(%esp)
0862dcfd +0x031:  mov    -0x20(%ebp),%eax
0862dd00 +0x034:  mov    %eax,(%esp)
0862dd03 +0x037:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0862dd08 +0x03c:  movl   $0x1,0x4(%esp)
0862dd10 +0x044:  mov    -0x20(%ebp),%eax
0862dd13 +0x047:  mov    %eax,(%esp)
0862dd16 +0x04a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0862dd1b +0x04f:  xor    $0x1,%eax
0862dd1e +0x052:  test   %al,%al
0862dd20 +0x054:  je     0862dd2c <+0x60>
0862dd22 +0x056:  mov    $0x0,%eax
0862dd27 +0x05b:  jmp    0862debd <+0x1f1>
0862dd2c +0x060:  movl   $0x0,-0x1c(%ebp)
0862dd33 +0x067:  jmp    0862de9f <+0x1d3>
0862dd38 +0x06c:  mov    -0x20(%ebp),%eax
0862dd3b +0x06f:  mov    %eax,(%esp)
0862dd3e +0x072:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0862dd43 +0x077:  xor    $0x1,%eax
0862dd46 +0x07a:  test   %al,%al
0862dd48 +0x07c:  je     0862dd54 <+0x88>
0862dd4a +0x07e:  mov    $0x0,%eax
0862dd4f +0x083:  jmp    0862debd <+0x1f1>
0862dd54 +0x088:  lea    -0x6b(%ebp),%edx
0862dd57 +0x08b:  mov    $0x33,%ebx
0862dd5c +0x090:  mov    $0x0,%eax
0862dd61 +0x095:  mov    %edx,%ecx
0862dd63 +0x097:  and    $0x1,%ecx
0862dd66 +0x09a:  test   %ecx,%ecx
0862dd68 +0x09c:  je     0862dd72 <+0xa6>
0862dd6a +0x09e:  mov    %al,(%edx)
0862dd6c +0x0a0:  add    $0x1,%edx
0862dd6f +0x0a3:  sub    $0x1,%ebx
0862dd72 +0x0a6:  mov    %edx,%ecx
0862dd74 +0x0a8:  and    $0x2,%ecx
0862dd77 +0x0ab:  test   %ecx,%ecx
0862dd79 +0x0ad:  je     0862dd84 <+0xb8>
0862dd7b +0x0af:  mov    %ax,(%edx)
0862dd7e +0x0b2:  add    $0x2,%edx
0862dd81 +0x0b5:  sub    $0x2,%ebx
0862dd84 +0x0b8:  mov    %ebx,%ecx
0862dd86 +0x0ba:  shr    $0x2,%ecx
0862dd89 +0x0bd:  mov    %edx,%edi
0862dd8b +0x0bf:  rep stos %eax,%es:(%edi)
0862dd8d +0x0c1:  mov    %edi,%edx
0862dd8f +0x0c3:  mov    %ebx,%ecx
0862dd91 +0x0c5:  and    $0x2,%ecx
0862dd94 +0x0c8:  test   %ecx,%ecx
0862dd96 +0x0ca:  je     0862dd9e <+0xd2>
0862dd98 +0x0cc:  mov    %ax,(%edx)
0862dd9b +0x0cf:  add    $0x2,%edx
0862dd9e +0x0d2:  mov    %ebx,%ecx
0862dda0 +0x0d4:  and    $0x1,%ecx
0862dda3 +0x0d7:  test   %ecx,%ecx
0862dda5 +0x0d9:  je     0862ddac <+0xe0>
0862dda7 +0x0db:  mov    %al,(%edx)
0862dda9 +0x0dd:  add    $0x1,%edx
0862ddac +0x0e0:  movl   $0x33,0xc(%esp)
0862ddb4 +0x0e8:  lea    -0x6b(%ebp),%eax
0862ddb7 +0x0eb:  mov    %eax,0x8(%esp)
0862ddbb +0x0ef:  movl   $0x0,0x4(%esp)
0862ddc3 +0x0f7:  mov    -0x20(%ebp),%eax
0862ddc6 +0x0fa:  mov    %eax,(%esp)
0862ddc9 +0x0fd:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0862ddce +0x102:  xor    $0x1,%eax
0862ddd1 +0x105:  test   %al,%al
0862ddd3 +0x107:  je     0862de15 <+0x149>
0862ddd5 +0x109:  movl   $0x5,0xc(%esp)
0862dddd +0x111:  movl   $0xbc,0x8(%esp)
0862dde5 +0x119:  movl   $&_ZZN16CSyncSlangFilter12AddSlangListEvE19__PRETTY_FUNCTION__,0x4(%esp)
0862dded +0x121:  lea    -0x34(%ebp),%eax
0862ddf0 +0x124:  mov    %eax,(%esp)
0862ddf3 +0x127:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0862ddf8 +0x12c:  movl   $"CSyncSlangFilter::AddSlangList",0x4(%esp)
0862de00 +0x134:  lea    -0x34(%ebp),%eax
0862de03 +0x137:  mov    %eax,(%esp)
0862de06 +0x13a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0862de0b +0x13f:  mov    $0x0,%eax
0862de10 +0x144:  jmp    0862debd <+0x1f1>
0862de15 +0x149:  lea    -0x21(%ebp),%eax
0862de18 +0x14c:  mov    %eax,(%esp)
0862de1b +0x14f:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0862de20 +0x154:  lea    -0x21(%ebp),%eax
0862de23 +0x157:  mov    %eax,0x8(%esp)
0862de27 +0x15b:  lea    -0x6b(%ebp),%eax
0862de2a +0x15e:  mov    %eax,0x4(%esp)
0862de2e +0x162:  lea    -0x38(%ebp),%eax
0862de31 +0x165:  mov    %eax,(%esp)
0862de34 +0x168:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0862de39 +0x16d:  jmp    0862de56 <+0x18a>
0862de3b +0x16f:  mov    %edx,%ebx
0862de3d +0x171:  mov    %eax,%esi
0862de3f +0x173:  lea    -0x21(%ebp),%eax
0862de42 +0x176:  mov    %eax,(%esp)
0862de45 +0x179:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0862de4a +0x17e:  mov    %esi,%eax
0862de4c +0x180:  mov    %ebx,%edx
0862de4e +0x182:  mov    %eax,(%esp)
0862de51 +0x185:  call   08ae3750 <_Unwind_Resume>
0862de56 +0x18a:  lea    -0x21(%ebp),%eax
0862de59 +0x18d:  mov    %eax,(%esp)
0862de5c +0x190:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0862de61 +0x195:  lea    -0x38(%ebp),%eax
0862de64 +0x198:  mov    %eax,0x4(%esp)
0862de68 +0x19c:  mov    0x8(%ebp),%eax
0862de6b +0x19f:  mov    %eax,(%esp)
0862de6e +0x1a2:  call   0862e72a <_ZN16CSyncSlangFilter8AddSlangERKSs>  ; CSyncSlangFilter::AddSlang(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0862de73 +0x1a7:  jmp    0862de90 <+0x1c4>
0862de75 +0x1a9:  mov    %edx,%ebx
0862de77 +0x1ab:  mov    %eax,%esi
0862de79 +0x1ad:  lea    -0x38(%ebp),%eax
0862de7c +0x1b0:  mov    %eax,(%esp)
0862de7f +0x1b3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862de84 +0x1b8:  mov    %esi,%eax
0862de86 +0x1ba:  mov    %ebx,%edx
0862de88 +0x1bc:  mov    %eax,(%esp)
0862de8b +0x1bf:  call   08ae3750 <_Unwind_Resume>
0862de90 +0x1c4:  lea    -0x38(%ebp),%eax
0862de93 +0x1c7:  mov    %eax,(%esp)
0862de96 +0x1ca:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862de9b +0x1cf:  addl   $0x1,-0x1c(%ebp)
0862de9f +0x1d3:  mov    -0x20(%ebp),%eax
0862dea2 +0x1d6:  mov    %eax,(%esp)
0862dea5 +0x1d9:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0862deaa +0x1de:  cmp    -0x1c(%ebp),%eax
0862dead +0x1e1:  seta   %al
0862deb0 +0x1e4:  test   %al,%al
0862deb2 +0x1e6:  jne    0862dd38 <+0x6c>
0862deb8 +0x1ec:  mov    $0x1,%eax
0862debd +0x1f1:  add    $0x7c,%esp
0862dec0 +0x1f4:  pop    %ebx
0862dec1 +0x1f5:  pop    %esi
0862dec2 +0x1f6:  pop    %edi
0862dec3 +0x1f7:  pop    %ebp
0862dec4 +0x1f8:  ret
0862dec5 +0x1f9:  nop
```

## 反编译 C

```c
// CSyncSlangFilter::AddSlangList @ 0x862dccc

/* CSyncSlangFilter::AddSlangList() */

undefined4 __thiscall CSyncSlangFilter::AddSlangList(CSyncSlangFilter *this)

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
  MySQL::set_query(local_24,"seLect slang from slang_list");
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
        cMyTrace::cMyTrace(local_38,"bool CSyncSlangFilter::AddSlangList()",0xbc,5);
        cMyTrace::operator()(local_38,"CSyncSlangFilter::AddSlangList");
        return 0;
      }
      std::allocator<char>::allocator();
                    /* try { // try from 0862de34 to 0862de38 has its CatchHandler @ 0862de3b */
      std::string::string((string *)&local_3c,&local_6f,(allocator *)&local_25);
      std::allocator<char>::~allocator(&local_25);
                    /* try { // try from 0862de6e to 0862de72 has its CatchHandler @ 0862de75 */
      AddSlang(this,&local_3c);
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
