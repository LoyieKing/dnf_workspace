# loadScript

`_ZN20LevelupSupportSciprt10loadScriptEv`

`LevelupSupportSciprt::loadScript()`

| 类 | 地址 |
|---|---|
| `LevelupSupportSciprt` | `0x08ab514c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab514c  _ZN20LevelupSupportSciprt10loadScriptEv
#           LevelupSupportSciprt::loadScript()
# range [0x08ab514c, 0x08ab5441]
08ab514c +0x000:  push   %ebp
08ab514d +0x001:  mov    %esp,%ebp
08ab514f +0x003:  push   %edi
08ab5150 +0x004:  push   %esi
08ab5151 +0x005:  push   %ebx
08ab5152 +0x006:  sub    $0x6c,%esp
08ab5155 +0x009:  movl   $"tw_LevelupSupport.evt",0x4(%esp)
08ab515d +0x011:  movl   $"Event/",(%esp)
08ab5164 +0x018:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08ab5169 +0x01d:  xor    $0x1,%eax
08ab516c +0x020:  test   %al,%al
08ab516e +0x022:  je     08ab517a <+0x2e>
08ab5170 +0x024:  mov    $0xffffffff,%ebx
08ab5175 +0x029:  jmp    08ab5434 <+0x2e8>
08ab517a +0x02e:  lea    -0x44(%ebp),%eax
08ab517d +0x031:  mov    %eax,(%esp)
08ab5180 +0x034:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ab5185 +0x039:  movb   $0x0,-0x45(%ebp)
08ab5189 +0x03d:  movb   $0x0,-0x46(%ebp)
08ab518d +0x041:  movl   $0x0,-0x4c(%ebp)
08ab5194 +0x048:  lea    -0x58(%ebp),%eax
08ab5197 +0x04b:  mov    %eax,(%esp)
08ab519a +0x04e:  call   08ab5b1a <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0xf2>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0xf2
08ab519f +0x053:  jmp    08ab51a5 <+0x59>
08ab51a1 +0x055:  nop
08ab51a2 +0x056:  jmp    08ab51a5 <+0x59>
08ab51a4 +0x058:  nop
08ab51a5 +0x059:  movl   $0x1,0x4(%esp)
08ab51ad +0x061:  lea    -0x44(%ebp),%eax
08ab51b0 +0x064:  mov    %eax,(%esp)
08ab51b3 +0x067:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ab51b8 +0x06c:  xor    $0x1,%eax
08ab51bb +0x06f:  test   %al,%al
08ab51bd +0x071:  jne    08ab53d6 <+0x28a>
08ab51c3 +0x077:  movl   $"[step]",0x4(%esp)
08ab51cb +0x07f:  lea    -0x44(%ebp),%eax
08ab51ce +0x082:  mov    %eax,(%esp)
08ab51d1 +0x085:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab51d6 +0x08a:  test   %al,%al
08ab51d8 +0x08c:  je     08ab51a1 <+0x55>
08ab51da +0x08e:  movl   $0x1,0x4(%esp)
08ab51e2 +0x096:  lea    -0x44(%ebp),%eax
08ab51e5 +0x099:  mov    %eax,(%esp)
08ab51e8 +0x09c:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ab51ed +0x0a1:  xor    $0x1,%eax
08ab51f0 +0x0a4:  test   %al,%al
08ab51f2 +0x0a6:  jne    08ab53d9 <+0x28d>
08ab51f8 +0x0ac:  movl   $"[level]",0x4(%esp)
08ab5200 +0x0b4:  lea    -0x44(%ebp),%eax
08ab5203 +0x0b7:  mov    %eax,(%esp)
08ab5206 +0x0ba:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab520b +0x0bf:  test   %al,%al
08ab520d +0x0c1:  je     08ab521e <+0xd2>
08ab520f +0x0c3:  movl   $0x0,(%esp)
08ab5216 +0x0ca:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08ab521b +0x0cf:  mov    %eax,-0x4c(%ebp)
08ab521e +0x0d2:  movl   $0x1,0x4(%esp)
08ab5226 +0x0da:  lea    -0x44(%ebp),%eax
08ab5229 +0x0dd:  mov    %eax,(%esp)
08ab522c +0x0e0:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ab5231 +0x0e5:  xor    $0x1,%eax
08ab5234 +0x0e8:  test   %al,%al
08ab5236 +0x0ea:  jne    08ab53dc <+0x290>
08ab523c +0x0f0:  movl   $"[reward]",0x4(%esp)
08ab5244 +0x0f8:  lea    -0x44(%ebp),%eax
08ab5247 +0x0fb:  mov    %eax,(%esp)
08ab524a +0x0fe:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab524f +0x103:  test   %al,%al
08ab5251 +0x105:  je     08ab52bc <+0x170>
08ab5253 +0x107:  movl   $0x1,0xc(%esp)
08ab525b +0x10f:  lea    -0x46(%ebp),%eax
08ab525e +0x112:  mov    %eax,0x8(%esp)
08ab5262 +0x116:  lea    -0x44(%ebp),%eax
08ab5265 +0x119:  mov    %eax,0x4(%esp)
08ab5269 +0x11d:  lea    -0x45(%ebp),%eax
08ab526c +0x120:  mov    %eax,(%esp)
08ab526f +0x123:  call   088bceaf <_Z13ScanTypeOrIntRbRSsS_b>  ; ScanTypeOrInt(bool&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool&, bool)
08ab5274 +0x128:  mov    %eax,-0x20(%ebp)
08ab5277 +0x12b:  movzbl -0x45(%ebp),%eax
08ab527b +0x12f:  test   %al,%al
08ab527d +0x131:  jne    08ab52bb <+0x16f>
08ab527f +0x133:  movl   $0x0,(%esp)
08ab5286 +0x13a:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08ab528b +0x13f:  mov    %eax,-0x1c(%ebp)
08ab528e +0x142:  mov    -0x1c(%ebp),%eax
08ab5291 +0x145:  mov    %eax,0x8(%esp)
08ab5295 +0x149:  mov    -0x20(%ebp),%eax
08ab5298 +0x14c:  mov    %eax,0x4(%esp)
08ab529c +0x150:  lea    -0x40(%ebp),%eax
08ab529f +0x153:  mov    %eax,(%esp)
08ab52a2 +0x156:  call   08ab5a44 <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x1c>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x1c
08ab52a7 +0x15b:  lea    -0x40(%ebp),%eax
08ab52aa +0x15e:  mov    %eax,0x4(%esp)
08ab52ae +0x162:  lea    -0x58(%ebp),%eax
08ab52b1 +0x165:  mov    %eax,(%esp)
08ab52b4 +0x168:  call   08ab5b8c <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x164>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x164
08ab52b9 +0x16d:  jmp    08ab5253 <+0x107>
08ab52bb +0x16f:  nop
08ab52bc +0x170:  movl   $0x1,0x4(%esp)
08ab52c4 +0x178:  lea    -0x44(%ebp),%eax
08ab52c7 +0x17b:  mov    %eax,(%esp)
08ab52ca +0x17e:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ab52cf +0x183:  xor    $0x1,%eax
08ab52d2 +0x186:  test   %al,%al
08ab52d4 +0x188:  jne    08ab53df <+0x293>
08ab52da +0x18e:  movl   $"[/step]",0x4(%esp)
08ab52e2 +0x196:  lea    -0x44(%ebp),%eax
08ab52e5 +0x199:  mov    %eax,(%esp)
08ab52e8 +0x19c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab52ed +0x1a1:  test   %al,%al
08ab52ef +0x1a3:  je     08ab51a4 <+0x58>
08ab52f5 +0x1a9:  mov    0x8(%ebp),%edx
08ab52f8 +0x1ac:  lea    -0x38(%ebp),%eax
08ab52fb +0x1af:  mov    %edx,0x4(%esp)
08ab52ff +0x1b3:  mov    %eax,(%esp)
08ab5302 +0x1b6:  call   08147c24 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x117>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x117
08ab5307 +0x1bb:  sub    $0x4,%esp
08ab530a +0x1be:  mov    0x8(%ebp),%edx
08ab530d +0x1c1:  lea    -0x34(%ebp),%eax
08ab5310 +0x1c4:  lea    -0x4c(%ebp),%ecx
08ab5313 +0x1c7:  mov    %ecx,0x8(%esp)
08ab5317 +0x1cb:  mov    %edx,0x4(%esp)
08ab531b +0x1cf:  mov    %eax,(%esp)
08ab531e +0x1d2:  call   08147d28 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x21b>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x21b
08ab5323 +0x1d7:  sub    $0x4,%esp
08ab5326 +0x1da:  lea    -0x38(%ebp),%eax
08ab5329 +0x1dd:  mov    %eax,0x4(%esp)
08ab532d +0x1e1:  lea    -0x34(%ebp),%eax
08ab5330 +0x1e4:  mov    %eax,(%esp)
08ab5333 +0x1e7:  call   08147c4a <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x13d>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x13d
08ab5338 +0x1ec:  test   %al,%al
08ab533a +0x1ee:  je     08ab5359 <+0x20d>
08ab533c +0x1f0:  mov    -0x4c(%ebp),%eax
08ab533f +0x1f3:  mov    %eax,0x4(%esp)
08ab5343 +0x1f7:  movl   $"duplicate [level] %d",(%esp)
08ab534a +0x1fe:  call   0807db60 <_init+0x458>
08ab534f +0x203:  mov    $0xffffffff,%ebx
08ab5354 +0x208:  jmp    08ab5401 <+0x2b5>
08ab5359 +0x20d:  movl   $0xc,(%esp)
08ab5360 +0x214:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ab5365 +0x219:  mov    %eax,%ebx
08ab5367 +0x21b:  mov    %ebx,%eax
08ab5369 +0x21d:  mov    %eax,(%esp)
08ab536c +0x220:  call   08ab5b1a <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0xf2>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0xf2
08ab5371 +0x225:  jmp    08ab5385 <+0x239>
08ab5373 +0x227:  mov    %edx,%esi
08ab5375 +0x229:  mov    %eax,%edi
08ab5377 +0x22b:  mov    %ebx,(%esp)
08ab537a +0x22e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ab537f +0x233:  mov    %edi,%eax
08ab5381 +0x235:  mov    %esi,%edx
08ab5383 +0x237:  jmp    08ab53ec <+0x2a0>
08ab5385 +0x239:  mov    %ebx,%eax
08ab5387 +0x23b:  mov    %eax,-0x5c(%ebp)
08ab538a +0x23e:  mov    -0x5c(%ebp),%eax
08ab538d +0x241:  lea    -0x58(%ebp),%edx
08ab5390 +0x244:  mov    %edx,0x4(%esp)
08ab5394 +0x248:  mov    %eax,(%esp)
08ab5397 +0x24b:  call   08ab5bae <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x186>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x186
08ab539c +0x250:  lea    -0x5c(%ebp),%eax
08ab539f +0x253:  mov    %eax,0x8(%esp)
08ab53a3 +0x257:  lea    -0x4c(%ebp),%eax
08ab53a6 +0x25a:  mov    %eax,0x4(%esp)
08ab53aa +0x25e:  lea    -0x28(%ebp),%eax
08ab53ad +0x261:  mov    %eax,(%esp)
08ab53b0 +0x264:  call   08ab5c22 <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x1fa>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x1fa
08ab53b5 +0x269:  mov    0x8(%ebp),%edx
08ab53b8 +0x26c:  lea    -0x30(%ebp),%eax
08ab53bb +0x26f:  lea    -0x28(%ebp),%ecx
08ab53be +0x272:  mov    %ecx,0x8(%esp)
08ab53c2 +0x276:  mov    %edx,0x4(%esp)
08ab53c6 +0x27a:  mov    %eax,(%esp)
08ab53c9 +0x27d:  call   08ab5c50 <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x228>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x228
08ab53ce +0x282:  sub    $0x4,%esp
08ab53d1 +0x285:  jmp    08ab51a5 <+0x59>
08ab53d6 +0x28a:  nop
08ab53d7 +0x28b:  jmp    08ab53e0 <+0x294>
08ab53d9 +0x28d:  nop
08ab53da +0x28e:  jmp    08ab53e0 <+0x294>
08ab53dc +0x290:  nop
08ab53dd +0x291:  jmp    08ab53e0 <+0x294>
08ab53df +0x293:  nop
08ab53e0 +0x294:  call   088bc054 <_Z20unloadRDARScriptFilev>  ; unloadRDARScriptFile()
08ab53e5 +0x299:  mov    $0x0,%ebx
08ab53ea +0x29e:  jmp    08ab5401 <+0x2b5>
08ab53ec +0x2a0:  mov    %edx,%ebx
08ab53ee +0x2a2:  mov    %eax,%esi
08ab53f0 +0x2a4:  lea    -0x58(%ebp),%eax
08ab53f3 +0x2a7:  mov    %eax,(%esp)
08ab53f6 +0x2aa:  call   08ab5b2e <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x106>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x106
08ab53fb +0x2af:  mov    %esi,%eax
08ab53fd +0x2b1:  mov    %ebx,%edx
08ab53ff +0x2b3:  jmp    08ab540e <+0x2c2>
08ab5401 +0x2b5:  lea    -0x58(%ebp),%eax
08ab5404 +0x2b8:  mov    %eax,(%esp)
08ab5407 +0x2bb:  call   08ab5b2e <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x106>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x106
08ab540c +0x2c0:  jmp    08ab5429 <+0x2dd>
08ab540e +0x2c2:  mov    %edx,%ebx
08ab5410 +0x2c4:  mov    %eax,%esi
08ab5412 +0x2c6:  lea    -0x44(%ebp),%eax
08ab5415 +0x2c9:  mov    %eax,(%esp)
08ab5418 +0x2cc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab541d +0x2d1:  mov    %esi,%eax
08ab541f +0x2d3:  mov    %ebx,%edx
08ab5421 +0x2d5:  mov    %eax,(%esp)
08ab5424 +0x2d8:  call   08ae3750 <_Unwind_Resume>
08ab5429 +0x2dd:  lea    -0x44(%ebp),%eax
08ab542c +0x2e0:  mov    %eax,(%esp)
08ab542f +0x2e3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab5434 +0x2e8:  mov    %ebx,%eax
08ab5436 +0x2ea:  lea    -0xc(%ebp),%esp
08ab5439 +0x2ed:  add    $0x0,%esp
08ab543c +0x2f0:  pop    %ebx
08ab543d +0x2f1:  pop    %esi
08ab543e +0x2f2:  pop    %edi
08ab543f +0x2f3:  pop    %ebp
08ab5440 +0x2f4:  ret
08ab5441 +0x2f5:  nop
```

## 反编译 C

```c
// LevelupSupportSciprt::loadScript @ 0x8ab514c

/* LevelupSupportSciprt::loadScript() */

undefined4 LevelupSupportSciprt::loadScript(void)

{
  char cVar1;
  bool bVar2;
  vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>> *this;
  undefined4 uVar3;
  int *piVar4;
  vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>> *local_60;
  vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
  local_5c [12];
  int local_50;
  bool local_4a;
  bool local_49;
  string local_48;
  ItemInfo local_44 [8];
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  local_3c [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
  local_38 [4];
  pair local_34 [8];
  pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>
  local_2c [8];
  int local_24;
  int local_20;
  
  cVar1 = loadRDARScriptFile("Event/","tw_LevelupSupport.evt");
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_48);
    local_49 = false;
    local_4a = false;
    local_50 = 0;
                    /* try { // try from 08ab519a to 08ab519e has its CatchHandler @ 08ab540e */
    std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>::
    vector(local_5c);
                    /* try { // try from 08ab51b3 to 08ab5364 has its CatchHandler @ 08ab53ec */
    while (cVar1 = ScanType((string *)&local_48,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_48,"[step]");
      if (bVar2) {
        cVar1 = ScanType((string *)&local_48,true);
        if (cVar1 != '\x01') break;
        bVar2 = std::operator==(&local_48,"[level]");
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
            vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>::
            push_back(local_5c,local_44);
          }
        }
        cVar1 = ScanType((string *)&local_48,true);
        if (cVar1 != '\x01') break;
        bVar2 = std::operator==(&local_48,"[/step]");
        if (bVar2) {
          std::
          map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
          ::end(local_3c);
          piVar4 = &local_50;
          std::
          map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
          ::find((int *)local_38);
          cVar1 = std::
                  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
                  ::operator!=(local_38,(_Rb_tree_iterator *)local_3c);
          if (cVar1 != '\0') {
            printf("duplicate [level] %d",local_50,piVar4);
            uVar3 = 0xffffffff;
            goto LAB_08ab5401;
          }
          this = operator_new(0xc);
                    /* try { // try from 08ab536c to 08ab5370 has its CatchHandler @ 08ab5373 */
          std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
          ::vector(this);
          local_60 = this;
                    /* try { // try from 08ab5397 to 08ab53e4 has its CatchHandler @ 08ab53ec */
          std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
          ::swap(this,(vector *)local_5c);
          std::
          pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>
          ::
          pair<int&,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*&>
                    (local_2c,&local_50,(vector **)&local_60);
          std::
          map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
          ::insert(local_34);
        }
      }
    }
    unloadRDARScriptFile();
    uVar3 = 0;
LAB_08ab5401:
                    /* try { // try from 08ab5407 to 08ab540b has its CatchHandler @ 08ab540e */
    std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>::
    ~vector(local_5c);
    std::string::~string((string *)&local_48);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}
```
