# loadScript

`_ZN20CreateDnfEventSciprt10loadScriptEv`

`CreateDnfEventSciprt::loadScript()`

| 类 | 地址 |
|---|---|
| `CreateDnfEventSciprt` | `0x08ac0034` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac0034  _ZN20CreateDnfEventSciprt10loadScriptEv
#           CreateDnfEventSciprt::loadScript()
# range [0x08ac0034, 0x08ac0329]
08ac0034 +0x000:  push   %ebp
08ac0035 +0x001:  mov    %esp,%ebp
08ac0037 +0x003:  push   %edi
08ac0038 +0x004:  push   %esi
08ac0039 +0x005:  push   %ebx
08ac003a +0x006:  sub    $0x6c,%esp
08ac003d +0x009:  movl   $"tw_CreateDnf.evt",0x4(%esp)
08ac0045 +0x011:  movl   $"Event/",(%esp)
08ac004c +0x018:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08ac0051 +0x01d:  xor    $0x1,%eax
08ac0054 +0x020:  test   %al,%al
08ac0056 +0x022:  je     08ac0062 <+0x2e>
08ac0058 +0x024:  mov    $0xffffffff,%ebx
08ac005d +0x029:  jmp    08ac031c <+0x2e8>
08ac0062 +0x02e:  lea    -0x44(%ebp),%eax
08ac0065 +0x031:  mov    %eax,(%esp)
08ac0068 +0x034:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ac006d +0x039:  movb   $0x0,-0x45(%ebp)
08ac0071 +0x03d:  movb   $0x0,-0x46(%ebp)
08ac0075 +0x041:  movl   $0x0,-0x4c(%ebp)
08ac007c +0x048:  lea    -0x58(%ebp),%eax
08ac007f +0x04b:  mov    %eax,(%esp)
08ac0082 +0x04e:  call   08ac06e6 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0xc5>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0xc5
08ac0087 +0x053:  jmp    08ac008d <+0x59>
08ac0089 +0x055:  nop
08ac008a +0x056:  jmp    08ac008d <+0x59>
08ac008c +0x058:  nop
08ac008d +0x059:  movl   $0x1,0x4(%esp)
08ac0095 +0x061:  lea    -0x44(%ebp),%eax
08ac0098 +0x064:  mov    %eax,(%esp)
08ac009b +0x067:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ac00a0 +0x06c:  xor    $0x1,%eax
08ac00a3 +0x06f:  test   %al,%al
08ac00a5 +0x071:  jne    08ac02be <+0x28a>
08ac00ab +0x077:  movl   $"[step]",0x4(%esp)
08ac00b3 +0x07f:  lea    -0x44(%ebp),%eax
08ac00b6 +0x082:  mov    %eax,(%esp)
08ac00b9 +0x085:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ac00be +0x08a:  test   %al,%al
08ac00c0 +0x08c:  je     08ac0089 <+0x55>
08ac00c2 +0x08e:  movl   $0x1,0x4(%esp)
08ac00ca +0x096:  lea    -0x44(%ebp),%eax
08ac00cd +0x099:  mov    %eax,(%esp)
08ac00d0 +0x09c:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ac00d5 +0x0a1:  xor    $0x1,%eax
08ac00d8 +0x0a4:  test   %al,%al
08ac00da +0x0a6:  jne    08ac02c1 <+0x28d>
08ac00e0 +0x0ac:  movl   $"[day]",0x4(%esp)
08ac00e8 +0x0b4:  lea    -0x44(%ebp),%eax
08ac00eb +0x0b7:  mov    %eax,(%esp)
08ac00ee +0x0ba:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ac00f3 +0x0bf:  test   %al,%al
08ac00f5 +0x0c1:  je     08ac0106 <+0xd2>
08ac00f7 +0x0c3:  movl   $0x0,(%esp)
08ac00fe +0x0ca:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08ac0103 +0x0cf:  mov    %eax,-0x4c(%ebp)
08ac0106 +0x0d2:  movl   $0x1,0x4(%esp)
08ac010e +0x0da:  lea    -0x44(%ebp),%eax
08ac0111 +0x0dd:  mov    %eax,(%esp)
08ac0114 +0x0e0:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ac0119 +0x0e5:  xor    $0x1,%eax
08ac011c +0x0e8:  test   %al,%al
08ac011e +0x0ea:  jne    08ac02c4 <+0x290>
08ac0124 +0x0f0:  movl   $"[reward]",0x4(%esp)
08ac012c +0x0f8:  lea    -0x44(%ebp),%eax
08ac012f +0x0fb:  mov    %eax,(%esp)
08ac0132 +0x0fe:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ac0137 +0x103:  test   %al,%al
08ac0139 +0x105:  je     08ac01a4 <+0x170>
08ac013b +0x107:  movl   $0x1,0xc(%esp)
08ac0143 +0x10f:  lea    -0x46(%ebp),%eax
08ac0146 +0x112:  mov    %eax,0x8(%esp)
08ac014a +0x116:  lea    -0x44(%ebp),%eax
08ac014d +0x119:  mov    %eax,0x4(%esp)
08ac0151 +0x11d:  lea    -0x45(%ebp),%eax
08ac0154 +0x120:  mov    %eax,(%esp)
08ac0157 +0x123:  call   088bceaf <_Z13ScanTypeOrIntRbRSsS_b>  ; ScanTypeOrInt(bool&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool&, bool)
08ac015c +0x128:  mov    %eax,-0x20(%ebp)
08ac015f +0x12b:  movzbl -0x45(%ebp),%eax
08ac0163 +0x12f:  test   %al,%al
08ac0165 +0x131:  jne    08ac01a3 <+0x16f>
08ac0167 +0x133:  movl   $0x0,(%esp)
08ac016e +0x13a:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08ac0173 +0x13f:  mov    %eax,-0x1c(%ebp)
08ac0176 +0x142:  mov    -0x1c(%ebp),%eax
08ac0179 +0x145:  mov    %eax,0x8(%esp)
08ac017d +0x149:  mov    -0x20(%ebp),%eax
08ac0180 +0x14c:  mov    %eax,0x4(%esp)
08ac0184 +0x150:  lea    -0x40(%ebp),%eax
08ac0187 +0x153:  mov    %eax,(%esp)
08ac018a +0x156:  call   08ac063e <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x1d>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x1d
08ac018f +0x15b:  lea    -0x40(%ebp),%eax
08ac0192 +0x15e:  mov    %eax,0x4(%esp)
08ac0196 +0x162:  lea    -0x58(%ebp),%eax
08ac0199 +0x165:  mov    %eax,(%esp)
08ac019c +0x168:  call   08ac0758 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x137>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x137
08ac01a1 +0x16d:  jmp    08ac013b <+0x107>
08ac01a3 +0x16f:  nop
08ac01a4 +0x170:  movl   $0x1,0x4(%esp)
08ac01ac +0x178:  lea    -0x44(%ebp),%eax
08ac01af +0x17b:  mov    %eax,(%esp)
08ac01b2 +0x17e:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ac01b7 +0x183:  xor    $0x1,%eax
08ac01ba +0x186:  test   %al,%al
08ac01bc +0x188:  jne    08ac02c7 <+0x293>
08ac01c2 +0x18e:  movl   $"[/step]",0x4(%esp)
08ac01ca +0x196:  lea    -0x44(%ebp),%eax
08ac01cd +0x199:  mov    %eax,(%esp)
08ac01d0 +0x19c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ac01d5 +0x1a1:  test   %al,%al
08ac01d7 +0x1a3:  je     08ac008c <+0x58>
08ac01dd +0x1a9:  mov    0x8(%ebp),%edx
08ac01e0 +0x1ac:  lea    -0x38(%ebp),%eax
08ac01e3 +0x1af:  mov    %edx,0x4(%esp)
08ac01e7 +0x1b3:  mov    %eax,(%esp)
08ac01ea +0x1b6:  call   08ac07a6 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x185>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x185
08ac01ef +0x1bb:  sub    $0x4,%esp
08ac01f2 +0x1be:  mov    0x8(%ebp),%edx
08ac01f5 +0x1c1:  lea    -0x34(%ebp),%eax
08ac01f8 +0x1c4:  lea    -0x4c(%ebp),%ecx
08ac01fb +0x1c7:  mov    %ecx,0x8(%esp)
08ac01ff +0x1cb:  mov    %edx,0x4(%esp)
08ac0203 +0x1cf:  mov    %eax,(%esp)
08ac0206 +0x1d2:  call   08ac077a <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x159>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x159
08ac020b +0x1d7:  sub    $0x4,%esp
08ac020e +0x1da:  lea    -0x38(%ebp),%eax
08ac0211 +0x1dd:  mov    %eax,0x4(%esp)
08ac0215 +0x1e1:  lea    -0x34(%ebp),%eax
08ac0218 +0x1e4:  mov    %eax,(%esp)
08ac021b +0x1e7:  call   08ac07cc <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x1ab>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x1ab
08ac0220 +0x1ec:  test   %al,%al
08ac0222 +0x1ee:  je     08ac0241 <+0x20d>
08ac0224 +0x1f0:  mov    -0x4c(%ebp),%eax
08ac0227 +0x1f3:  mov    %eax,0x4(%esp)
08ac022b +0x1f7:  movl   $"duplicate [level] %d",(%esp)
08ac0232 +0x1fe:  call   0807db60 <_init+0x458>
08ac0237 +0x203:  mov    $0xffffffff,%ebx
08ac023c +0x208:  jmp    08ac02e9 <+0x2b5>
08ac0241 +0x20d:  movl   $0xc,(%esp)
08ac0248 +0x214:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ac024d +0x219:  mov    %eax,%ebx
08ac024f +0x21b:  mov    %ebx,%eax
08ac0251 +0x21d:  mov    %eax,(%esp)
08ac0254 +0x220:  call   08ac06e6 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0xc5>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0xc5
08ac0259 +0x225:  jmp    08ac026d <+0x239>
08ac025b +0x227:  mov    %edx,%esi
08ac025d +0x229:  mov    %eax,%edi
08ac025f +0x22b:  mov    %ebx,(%esp)
08ac0262 +0x22e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ac0267 +0x233:  mov    %edi,%eax
08ac0269 +0x235:  mov    %esi,%edx
08ac026b +0x237:  jmp    08ac02d4 <+0x2a0>
08ac026d +0x239:  mov    %ebx,%eax
08ac026f +0x23b:  mov    %eax,-0x5c(%ebp)
08ac0272 +0x23e:  mov    -0x5c(%ebp),%eax
08ac0275 +0x241:  lea    -0x58(%ebp),%edx
08ac0278 +0x244:  mov    %edx,0x4(%esp)
08ac027c +0x248:  mov    %eax,(%esp)
08ac027f +0x24b:  call   08ac07e0 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x1bf>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x1bf
08ac0284 +0x250:  lea    -0x5c(%ebp),%eax
08ac0287 +0x253:  mov    %eax,0x8(%esp)
08ac028b +0x257:  lea    -0x4c(%ebp),%eax
08ac028e +0x25a:  mov    %eax,0x4(%esp)
08ac0292 +0x25e:  lea    -0x28(%ebp),%eax
08ac0295 +0x261:  mov    %eax,(%esp)
08ac0298 +0x264:  call   08ac0854 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x233>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x233
08ac029d +0x269:  mov    0x8(%ebp),%edx
08ac02a0 +0x26c:  lea    -0x30(%ebp),%eax
08ac02a3 +0x26f:  lea    -0x28(%ebp),%ecx
08ac02a6 +0x272:  mov    %ecx,0x8(%esp)
08ac02aa +0x276:  mov    %edx,0x4(%esp)
08ac02ae +0x27a:  mov    %eax,(%esp)
08ac02b1 +0x27d:  call   08ac0882 <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0x261>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0x261
08ac02b6 +0x282:  sub    $0x4,%esp
08ac02b9 +0x285:  jmp    08ac008d <+0x59>
08ac02be +0x28a:  nop
08ac02bf +0x28b:  jmp    08ac02c8 <+0x294>
08ac02c1 +0x28d:  nop
08ac02c2 +0x28e:  jmp    08ac02c8 <+0x294>
08ac02c4 +0x290:  nop
08ac02c5 +0x291:  jmp    08ac02c8 <+0x294>
08ac02c7 +0x293:  nop
08ac02c8 +0x294:  call   088bc054 <_Z20unloadRDARScriptFilev>  ; unloadRDARScriptFile()
08ac02cd +0x299:  mov    $0x0,%ebx
08ac02d2 +0x29e:  jmp    08ac02e9 <+0x2b5>
08ac02d4 +0x2a0:  mov    %edx,%ebx
08ac02d6 +0x2a2:  mov    %eax,%esi
08ac02d8 +0x2a4:  lea    -0x58(%ebp),%eax
08ac02db +0x2a7:  mov    %eax,(%esp)
08ac02de +0x2aa:  call   08ac06fa <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0xd9>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0xd9
08ac02e3 +0x2af:  mov    %esi,%eax
08ac02e5 +0x2b1:  mov    %ebx,%edx
08ac02e7 +0x2b3:  jmp    08ac02f6 <+0x2c2>
08ac02e9 +0x2b5:  lea    -0x58(%ebp),%eax
08ac02ec +0x2b8:  mov    %eax,(%esp)
08ac02ef +0x2bb:  call   08ac06fa <_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev+0xd9>  ; global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()+0xd9
08ac02f4 +0x2c0:  jmp    08ac0311 <+0x2dd>
08ac02f6 +0x2c2:  mov    %edx,%ebx
08ac02f8 +0x2c4:  mov    %eax,%esi
08ac02fa +0x2c6:  lea    -0x44(%ebp),%eax
08ac02fd +0x2c9:  mov    %eax,(%esp)
08ac0300 +0x2cc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac0305 +0x2d1:  mov    %esi,%eax
08ac0307 +0x2d3:  mov    %ebx,%edx
08ac0309 +0x2d5:  mov    %eax,(%esp)
08ac030c +0x2d8:  call   08ae3750 <_Unwind_Resume>
08ac0311 +0x2dd:  lea    -0x44(%ebp),%eax
08ac0314 +0x2e0:  mov    %eax,(%esp)
08ac0317 +0x2e3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac031c +0x2e8:  mov    %ebx,%eax
08ac031e +0x2ea:  lea    -0xc(%ebp),%esp
08ac0321 +0x2ed:  add    $0x0,%esp
08ac0324 +0x2f0:  pop    %ebx
08ac0325 +0x2f1:  pop    %esi
08ac0326 +0x2f2:  pop    %edi
08ac0327 +0x2f3:  pop    %ebp
08ac0328 +0x2f4:  ret
08ac0329 +0x2f5:  nop
```

## 反编译 C

```c
// CreateDnfEventSciprt::loadScript @ 0x8ac0034

/* CreateDnfEventSciprt::loadScript() */

undefined4 CreateDnfEventSciprt::loadScript(void)

{
  char cVar1;
  bool bVar2;
  vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>> *this;
  undefined4 uVar3;
  int *piVar4;
  vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>> *local_60;
  vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
  local_5c [12];
  int local_50;
  bool local_4a;
  bool local_49;
  string local_48;
  ItemInfo local_44 [8];
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  local_3c [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
  local_38 [4];
  pair local_34 [8];
  pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>
  local_2c [8];
  int local_24;
  int local_20;
  
  cVar1 = loadRDARScriptFile("Event/","tw_CreateDnf.evt");
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_48);
    local_49 = false;
    local_4a = false;
    local_50 = 0;
                    /* try { // try from 08ac0082 to 08ac0086 has its CatchHandler @ 08ac02f6 */
    std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>::
    vector(local_5c);
                    /* try { // try from 08ac009b to 08ac024c has its CatchHandler @ 08ac02d4 */
    while (cVar1 = ScanType((string *)&local_48,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_48,"[step]");
      if (bVar2) {
        cVar1 = ScanType((string *)&local_48,true);
        if (cVar1 != '\x01') break;
        bVar2 = std::operator==(&local_48,"[day]");
        if (bVar2) {
          local_50 = ScanInt((bool *)0x0);
        }
        cVar1 = ScanType((string *)&local_48,true);
        if (cVar1 != '\x01') break;
        bVar2 = std::operator==(&local_48,"[reward]");
        if (bVar2) {
          while (local_24 = ScanTypeOrInt(&local_49,(string *)&local_48,&local_4a,true),
                local_49 == false) {
            local_20 = ScanInt((bool *)0x0);
            ItemInfo::ItemInfo(local_44,local_24,local_20);
            std::
            vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>::
            push_back(local_5c,local_44);
          }
        }
        cVar1 = ScanType((string *)&local_48,true);
        if (cVar1 != '\x01') break;
        bVar2 = std::operator==(&local_48,"[/step]");
        if (bVar2) {
          std::
          map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
          ::end(local_3c);
          piVar4 = &local_50;
          std::
          map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
          ::find((int *)local_38);
          cVar1 = std::
                  _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
                  ::operator!=(local_38,(_Rb_tree_iterator *)local_3c);
          if (cVar1 != '\0') {
            printf("duplicate [level] %d",local_50,piVar4);
            uVar3 = 0xffffffff;
            goto LAB_08ac02e9;
          }
          this = operator_new(0xc);
                    /* try { // try from 08ac0254 to 08ac0258 has its CatchHandler @ 08ac025b */
          std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
          ::vector(this);
          local_60 = this;
                    /* try { // try from 08ac027f to 08ac02cc has its CatchHandler @ 08ac02d4 */
          std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
          ::swap(this,(vector *)local_5c);
          std::
          pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>
          ::
          pair<int&,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*&>
                    (local_2c,&local_50,(vector **)&local_60);
          std::
          map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
          ::insert(local_34);
        }
      }
    }
    unloadRDARScriptFile();
    uVar3 = 0;
LAB_08ac02e9:
                    /* try { // try from 08ac02ef to 08ac02f3 has its CatchHandler @ 08ac02f6 */
    std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>::
    ~vector(local_5c);
    std::string::~string((string *)&local_48);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}
```
