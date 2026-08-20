# importIndependentDropParameterScript

`_ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc`

`IndependentDropParameterScript::importIndependentDropParameterScript(char const*)`

| 类 | 地址 |
|---|---|
| `IndependentDropParameterScript` | `0x0897c1c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0897c1c6  _ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc
#           IndependentDropParameterScript::importIndependentDropParameterScript(char const*)
# range [0x0897c1c6, 0x0897c397]
0897c1c6 +0x000:  push   %ebp
0897c1c7 +0x001:  mov    %esp,%ebp
0897c1c9 +0x003:  push   %esi
0897c1ca +0x004:  push   %ebx
0897c1cb +0x005:  sub    $0x50,%esp
0897c1ce +0x008:  mov    0xc(%ebp),%eax
0897c1d1 +0x00b:  mov    %eax,0x4(%esp)
0897c1d5 +0x00f:  movl   $&g_independentDropScriptBaseDirectory,(%esp)
0897c1dc +0x016:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
0897c1e1 +0x01b:  xor    $0x1,%eax
0897c1e4 +0x01e:  test   %al,%al
0897c1e6 +0x020:  je     0897c1f2 <+0x2c>
0897c1e8 +0x022:  mov    $0x0,%ebx
0897c1ed +0x027:  jmp    0897c38c <+0x1c6>
0897c1f2 +0x02c:  lea    -0x20(%ebp),%eax
0897c1f5 +0x02f:  mov    %eax,(%esp)
0897c1f8 +0x032:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0897c1fd +0x037:  movb   $0x0,-0x21(%ebp)
0897c201 +0x03b:  lea    -0x34(%ebp),%eax
0897c204 +0x03e:  mov    %eax,(%esp)
0897c207 +0x041:  call   0897cbae <_GLOBAL__I_g_independentDropScriptBaseDirectory+0x1d>  ; global constructors keyed to g_independentDropScriptBaseDirectory+0x1d
0897c20c +0x046:  mov    0xc(%ebp),%eax
0897c20f +0x049:  mov    %eax,0x4(%esp)
0897c213 +0x04d:  movl   $&g_independentDropScriptFileList,(%esp)
0897c21a +0x054:  call   088bae56 <_ZNK16STScriptFileList19FindIndexByFullScanEPKc>  ; STScriptFileList::FindIndexByFullScan(char const*) const
0897c21f +0x059:  mov    %eax,-0x34(%ebp)
0897c222 +0x05c:  movl   $0x0,-0x38(%ebp)
0897c229 +0x063:  jmp    0897c22c <+0x66>
0897c22b +0x065:  nop
0897c22c +0x066:  movl   $0x1,0x4(%esp)
0897c234 +0x06e:  lea    -0x20(%ebp),%eax
0897c237 +0x071:  mov    %eax,(%esp)
0897c23a +0x074:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
0897c23f +0x079:  xor    $0x1,%eax
0897c242 +0x07c:  test   %al,%al
0897c244 +0x07e:  jne    0897c2dc <+0x116>
0897c24a +0x084:  movl   $"[list]",0x4(%esp)
0897c252 +0x08c:  lea    -0x20(%ebp),%eax
0897c255 +0x08f:  mov    %eax,(%esp)
0897c258 +0x092:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0897c25d +0x097:  test   %al,%al
0897c25f +0x099:  je     0897c22b <+0x65>
0897c261 +0x09b:  lea    -0x21(%ebp),%eax
0897c264 +0x09e:  mov    %eax,(%esp)
0897c267 +0x0a1:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c26c +0x0a6:  mov    %eax,-0x3c(%ebp)
0897c26f +0x0a9:  movzbl -0x21(%ebp),%eax
0897c273 +0x0ad:  xor    $0x1,%eax
0897c276 +0x0b0:  test   %al,%al
0897c278 +0x0b2:  je     0897c27d <+0xb7>
0897c27a +0x0b4:  nop
0897c27b +0x0b5:  jmp    0897c22c <+0x66>
0897c27d +0x0b7:  lea    -0x21(%ebp),%eax
0897c280 +0x0ba:  mov    %eax,(%esp)
0897c283 +0x0bd:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c288 +0x0c2:  mov    %eax,-0x40(%ebp)
0897c28b +0x0c5:  movzbl -0x21(%ebp),%eax
0897c28f +0x0c9:  xor    $0x1,%eax
0897c292 +0x0cc:  test   %al,%al
0897c294 +0x0ce:  je     0897c2a0 <+0xda>
0897c296 +0x0d0:  mov    $0x0,%ebx
0897c29b +0x0d5:  jmp    0897c359 <+0x193>
0897c2a0 +0x0da:  mov    -0x38(%ebp),%edx
0897c2a3 +0x0dd:  mov    -0x40(%ebp),%eax
0897c2a6 +0x0e0:  lea    (%edx,%eax,1),%eax
0897c2a9 +0x0e3:  mov    %eax,-0x38(%ebp)
0897c2ac +0x0e6:  lea    -0x40(%ebp),%eax
0897c2af +0x0e9:  mov    %eax,0x8(%esp)
0897c2b3 +0x0ed:  lea    -0x3c(%ebp),%eax
0897c2b6 +0x0f0:  mov    %eax,0x4(%esp)
0897c2ba +0x0f4:  lea    -0x1c(%ebp),%eax
0897c2bd +0x0f7:  mov    %eax,(%esp)
0897c2c0 +0x0fa:  call   080c6cf2 <_GLOBAL__I_g_ServerString_+0x25d>  ; global constructors keyed to g_ServerString_+0x25d
0897c2c5 +0x0ff:  lea    -0x1c(%ebp),%eax
0897c2c8 +0x102:  mov    %eax,0x4(%esp)
0897c2cc +0x106:  lea    -0x34(%ebp),%eax
0897c2cf +0x109:  add    $0x4,%eax
0897c2d2 +0x10c:  mov    %eax,(%esp)
0897c2d5 +0x10f:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0897c2da +0x114:  jmp    0897c261 <+0x9b>
0897c2dc +0x116:  nop
0897c2dd +0x117:  mov    0x8(%ebp),%eax
0897c2e0 +0x11a:  mov    %eax,(%esp)
0897c2e3 +0x11d:  call   081b4ae4 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x358>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x358
0897c2e8 +0x122:  mov    %eax,-0xc(%ebp)
0897c2eb +0x125:  lea    -0x14(%ebp),%eax
0897c2ee +0x128:  lea    -0x38(%ebp),%edx
0897c2f1 +0x12b:  mov    %edx,0x8(%esp)
0897c2f5 +0x12f:  lea    -0xc(%ebp),%edx
0897c2f8 +0x132:  mov    %edx,0x4(%esp)
0897c2fc +0x136:  mov    %eax,(%esp)
0897c2ff +0x139:  call   0897cc06 <_GLOBAL__I_g_independentDropScriptBaseDirectory+0x75>  ; global constructors keyed to g_independentDropScriptBaseDirectory+0x75
0897c304 +0x13e:  sub    $0x4,%esp
0897c307 +0x141:  mov    0x8(%ebp),%eax
0897c30a +0x144:  lea    0x24(%eax),%edx
0897c30d +0x147:  lea    -0x34(%ebp),%eax
0897c310 +0x14a:  mov    %eax,0x4(%esp)
0897c314 +0x14e:  mov    %edx,(%esp)
0897c317 +0x151:  call   081b5d2e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0xd1>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0xd1
0897c31c +0x156:  lea    -0x14(%ebp),%edx
0897c31f +0x159:  mov    %edx,0x4(%esp)
0897c323 +0x15d:  mov    %eax,(%esp)
0897c326 +0x160:  call   0897cc4c <_GLOBAL__I_g_independentDropScriptBaseDirectory+0xbb>  ; global constructors keyed to g_independentDropScriptBaseDirectory+0xbb
0897c32b +0x165:  mov    0x8(%ebp),%eax
0897c32e +0x168:  lea    -0x34(%ebp),%edx
0897c331 +0x16b:  mov    %edx,0x4(%esp)
0897c335 +0x16f:  mov    %eax,(%esp)
0897c338 +0x172:  call   0897cc82 <_GLOBAL__I_g_independentDropScriptBaseDirectory+0xf1>  ; global constructors keyed to g_independentDropScriptBaseDirectory+0xf1
0897c33d +0x177:  mov    $0x1,%ebx
0897c342 +0x17c:  jmp    0897c359 <+0x193>
0897c344 +0x17e:  mov    %edx,%ebx
0897c346 +0x180:  mov    %eax,%esi
0897c348 +0x182:  lea    -0x34(%ebp),%eax
0897c34b +0x185:  mov    %eax,(%esp)
0897c34e +0x188:  call   083dd4b4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x77480>  ; global constructors keyed to CServerEvent::m_nExpRate+0x77480
0897c353 +0x18d:  mov    %esi,%eax
0897c355 +0x18f:  mov    %ebx,%edx
0897c357 +0x191:  jmp    0897c366 <+0x1a0>
0897c359 +0x193:  lea    -0x34(%ebp),%eax
0897c35c +0x196:  mov    %eax,(%esp)
0897c35f +0x199:  call   083dd4b4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x77480>  ; global constructors keyed to CServerEvent::m_nExpRate+0x77480
0897c364 +0x19e:  jmp    0897c381 <+0x1bb>
0897c366 +0x1a0:  mov    %edx,%ebx
0897c368 +0x1a2:  mov    %eax,%esi
0897c36a +0x1a4:  lea    -0x20(%ebp),%eax
0897c36d +0x1a7:  mov    %eax,(%esp)
0897c370 +0x1aa:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0897c375 +0x1af:  mov    %esi,%eax
0897c377 +0x1b1:  mov    %ebx,%edx
0897c379 +0x1b3:  mov    %eax,(%esp)
0897c37c +0x1b6:  call   08ae3750 <_Unwind_Resume>
0897c381 +0x1bb:  lea    -0x20(%ebp),%eax
0897c384 +0x1be:  mov    %eax,(%esp)
0897c387 +0x1c1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0897c38c +0x1c6:  mov    %ebx,%eax
0897c38e +0x1c8:  lea    -0x8(%ebp),%esp
0897c391 +0x1cb:  add    $0x0,%esp
0897c394 +0x1ce:  pop    %ebx
0897c395 +0x1cf:  pop    %esi
0897c396 +0x1d0:  pop    %ebp
0897c397 +0x1d1:  ret
```

## 反编译 C

```c
// IndependentDropParameterScript::importIndependentDropParameterScript @ 0x897c1c6

/* IndependentDropParameterScript::importIndependentDropParameterScript(char const*) */

undefined4 __thiscall
IndependentDropParameterScript::importIndependentDropParameterScript
          (IndependentDropParameterScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  pair<int,int> *this_00;
  undefined4 uVar3;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_34 [15];
  bool local_25;
  string local_24;
  pair<int,int> local_20 [8];
  uint local_18 [2];
  int local_10;
  
  cVar1 = loadRDARScriptFile(g_independentDropScriptBaseDirectory,param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_24);
    local_25 = false;
                    /* try { // try from 0897c207 to 0897c20b has its CatchHandler @ 0897c366 */
    IndependentDropListInfo::IndependentDropListInfo((IndependentDropListInfo *)&local_38);
                    /* try { // try from 0897c21a to 0897c33c has its CatchHandler @ 0897c344 */
    local_38 = STScriptFileList::FindIndexByFullScan
                         ((STScriptFileList *)g_independentDropScriptFileList,param_1);
    local_3c = 0;
    while (cVar1 = ScanType((string *)&local_24,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_24,"[list]");
      if (bVar2) {
        while (local_40 = ScanInt(&local_25), local_25 == true) {
          local_44 = ScanInt(&local_25);
          if (local_25 != true) {
            uVar3 = 0;
            goto LAB_0897c359;
          }
          local_3c = local_3c + local_44;
          std::pair<int,int>::pair<int&,int&>(local_20,&local_40,&local_44);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (avStack_34,local_20);
        }
      }
    }
    local_10 = std::vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>::size
                         ((vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>> *
                          )this);
    std::make_pair<unsigned_int,int&>(local_18,&local_10);
    this_00 = (pair<int,int> *)
              std::
              map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
              ::operator[]((map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
                            *)(this + 0x24),&local_38);
    std::pair<int,int>::operator=(this_00,(pair *)local_18);
    std::vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>::push_back
              ((vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>> *)this,
               (IndependentDropListInfo *)&local_38);
    uVar3 = 1;
LAB_0897c359:
                    /* try { // try from 0897c35f to 0897c363 has its CatchHandler @ 0897c366 */
    IndependentDropListInfo::~IndependentDropListInfo((IndependentDropListInfo *)&local_38);
    std::string::~string((string *)&local_24);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
