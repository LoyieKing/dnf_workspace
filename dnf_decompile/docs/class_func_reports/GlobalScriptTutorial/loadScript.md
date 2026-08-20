# loadScript

`_ZN20GlobalScriptTutorial10loadScriptEv`

`GlobalScriptTutorial::loadScript()`

| 类 | 地址 |
|---|---|
| `GlobalScriptTutorial` | `0x08ab8e4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab8e4a  _ZN20GlobalScriptTutorial10loadScriptEv
#           GlobalScriptTutorial::loadScript()
# range [0x08ab8e4a, 0x08ab8ffd]
08ab8e4a +0x000:  push   %ebp
08ab8e4b +0x001:  mov    %esp,%ebp
08ab8e4d +0x003:  push   %esi
08ab8e4e +0x004:  push   %ebx
08ab8e4f +0x005:  sub    $0x30,%esp
08ab8e52 +0x008:  movl   $"CharacterList.lst",0x4(%esp)
08ab8e5a +0x010:  movl   $"Etc/GlobalTutorialInfo/",(%esp)
08ab8e61 +0x017:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08ab8e66 +0x01c:  xor    $0x1,%eax
08ab8e69 +0x01f:  test   %al,%al
08ab8e6b +0x021:  je     08ab8e77 <+0x2d>
08ab8e6d +0x023:  mov    $0x0,%ebx
08ab8e72 +0x028:  jmp    08ab8ff4 <+0x1aa>
08ab8e77 +0x02d:  lea    -0x18(%ebp),%eax
08ab8e7a +0x030:  mov    %eax,(%esp)
08ab8e7d +0x033:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
08ab8e82 +0x038:  jmp    08ab8e85 <+0x3b>
08ab8e84 +0x03a:  nop
08ab8e85 +0x03b:  lea    -0x1c(%ebp),%eax
08ab8e88 +0x03e:  mov    %eax,(%esp)
08ab8e8b +0x041:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ab8e90 +0x046:  movl   $0x1,0x4(%esp)
08ab8e98 +0x04e:  lea    -0x1c(%ebp),%eax
08ab8e9b +0x051:  mov    %eax,(%esp)
08ab8e9e +0x054:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ab8ea3 +0x059:  xor    $0x1,%eax
08ab8ea6 +0x05c:  test   %al,%al
08ab8ea8 +0x05e:  je     08ab8eb4 <+0x6a>
08ab8eaa +0x060:  mov    $0x0,%ebx
08ab8eaf +0x065:  jmp    08ab8f4e <+0x104>
08ab8eb4 +0x06a:  movl   $"[list]",0x4(%esp)
08ab8ebc +0x072:  lea    -0x1c(%ebp),%eax
08ab8ebf +0x075:  mov    %eax,(%esp)
08ab8ec2 +0x078:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ab8ec7 +0x07d:  test   %al,%al
08ab8ec9 +0x07f:  je     08ab8f2f <+0xe5>
08ab8ecb +0x081:  jmp    08ab8ece <+0x84>
08ab8ecd +0x083:  nop
08ab8ece +0x084:  lea    -0x20(%ebp),%eax
08ab8ed1 +0x087:  mov    %eax,(%esp)
08ab8ed4 +0x08a:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ab8ed9 +0x08f:  lea    -0x20(%ebp),%eax
08ab8edc +0x092:  mov    %eax,(%esp)
08ab8edf +0x095:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08ab8ee4 +0x09a:  xor    $0x1,%eax
08ab8ee7 +0x09d:  test   %al,%al
08ab8ee9 +0x09f:  je     08ab8ef2 <+0xa8>
08ab8eeb +0x0a1:  mov    $0x0,%ebx
08ab8ef0 +0x0a6:  jmp    08ab8f20 <+0xd6>
08ab8ef2 +0x0a8:  lea    -0x20(%ebp),%eax
08ab8ef5 +0x0ab:  mov    %eax,0x4(%esp)
08ab8ef9 +0x0af:  lea    -0x18(%ebp),%eax
08ab8efc +0x0b2:  mov    %eax,(%esp)
08ab8eff +0x0b5:  call   086111d2 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1250>  ; global constructors keyed to Statistics::Statistics()+0x1250
08ab8f04 +0x0ba:  mov    $0x1,%ebx
08ab8f09 +0x0bf:  jmp    08ab8f20 <+0xd6>
08ab8f0b +0x0c1:  mov    %edx,%ebx
08ab8f0d +0x0c3:  mov    %eax,%esi
08ab8f0f +0x0c5:  lea    -0x20(%ebp),%eax
08ab8f12 +0x0c8:  mov    %eax,(%esp)
08ab8f15 +0x0cb:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab8f1a +0x0d0:  mov    %esi,%eax
08ab8f1c +0x0d2:  mov    %ebx,%edx
08ab8f1e +0x0d4:  jmp    08ab8f36 <+0xec>
08ab8f20 +0x0d6:  lea    -0x20(%ebp),%eax
08ab8f23 +0x0d9:  mov    %eax,(%esp)
08ab8f26 +0x0dc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab8f2b +0x0e1:  test   %ebx,%ebx
08ab8f2d +0x0e3:  jne    08ab8ecd <+0x83>
08ab8f2f +0x0e5:  mov    $0x1,%ebx
08ab8f34 +0x0ea:  jmp    08ab8f4e <+0x104>
08ab8f36 +0x0ec:  mov    %edx,%ebx
08ab8f38 +0x0ee:  mov    %eax,%esi
08ab8f3a +0x0f0:  lea    -0x1c(%ebp),%eax
08ab8f3d +0x0f3:  mov    %eax,(%esp)
08ab8f40 +0x0f6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab8f45 +0x0fb:  mov    %esi,%eax
08ab8f47 +0x0fd:  mov    %ebx,%edx
08ab8f49 +0x0ff:  jmp    08ab8fce <+0x184>
08ab8f4e +0x104:  lea    -0x1c(%ebp),%eax
08ab8f51 +0x107:  mov    %eax,(%esp)
08ab8f54 +0x10a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab8f59 +0x10f:  test   %ebx,%ebx
08ab8f5b +0x111:  jne    08ab8e84 <+0x3a>
08ab8f61 +0x117:  call   088bc054 <_Z20unloadRDARScriptFilev>  ; unloadRDARScriptFile()
08ab8f66 +0x11c:  movl   $0x0,-0xc(%ebp)
08ab8f6d +0x123:  jmp    08ab8fb2 <+0x168>
08ab8f6f +0x125:  mov    -0xc(%ebp),%eax
08ab8f72 +0x128:  mov    %eax,0x4(%esp)
08ab8f76 +0x12c:  lea    -0x18(%ebp),%eax
08ab8f79 +0x12f:  mov    %eax,(%esp)
08ab8f7c +0x132:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08ab8f81 +0x137:  mov    %eax,(%esp)
08ab8f84 +0x13a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ab8f89 +0x13f:  mov    %eax,0x8(%esp)
08ab8f8d +0x143:  movl   $"Etc/GlobalTutorialInfo/",0x4(%esp)
08ab8f95 +0x14b:  mov    0x8(%ebp),%eax
08ab8f98 +0x14e:  mov    %eax,(%esp)
08ab8f9b +0x151:  call   08ab8ffe <_ZN20GlobalScriptTutorial10loadScriptEPKcS1_>  ; GlobalScriptTutorial::loadScript(char const*, char const*)
08ab8fa0 +0x156:  xor    $0x1,%eax
08ab8fa3 +0x159:  test   %al,%al
08ab8fa5 +0x15b:  je     08ab8fae <+0x164>
08ab8fa7 +0x15d:  mov    $0x0,%ebx
08ab8fac +0x162:  jmp    08ab8fe9 <+0x19f>
08ab8fae +0x164:  addl   $0x1,-0xc(%ebp)
08ab8fb2 +0x168:  lea    -0x18(%ebp),%eax
08ab8fb5 +0x16b:  mov    %eax,(%esp)
08ab8fb8 +0x16e:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
08ab8fbd +0x173:  cmp    -0xc(%ebp),%eax
08ab8fc0 +0x176:  seta   %al
08ab8fc3 +0x179:  test   %al,%al
08ab8fc5 +0x17b:  jne    08ab8f6f <+0x125>
08ab8fc7 +0x17d:  mov    $0x1,%ebx
08ab8fcc +0x182:  jmp    08ab8fe9 <+0x19f>
08ab8fce +0x184:  mov    %edx,%ebx
08ab8fd0 +0x186:  mov    %eax,%esi
08ab8fd2 +0x188:  lea    -0x18(%ebp),%eax
08ab8fd5 +0x18b:  mov    %eax,(%esp)
08ab8fd8 +0x18e:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
08ab8fdd +0x193:  mov    %esi,%eax
08ab8fdf +0x195:  mov    %ebx,%edx
08ab8fe1 +0x197:  mov    %eax,(%esp)
08ab8fe4 +0x19a:  call   08ae3750 <_Unwind_Resume>
08ab8fe9 +0x19f:  lea    -0x18(%ebp),%eax
08ab8fec +0x1a2:  mov    %eax,(%esp)
08ab8fef +0x1a5:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
08ab8ff4 +0x1aa:  mov    %ebx,%eax
08ab8ff6 +0x1ac:  add    $0x30,%esp
08ab8ff9 +0x1af:  pop    %ebx
08ab8ffa +0x1b0:  pop    %esi
08ab8ffb +0x1b1:  pop    %ebp
08ab8ffc +0x1b2:  ret
08ab8ffd +0x1b3:  nop
```

## 反编译 C

```c
// GlobalScriptTutorial::loadScript @ 0x8ab8e4a

/* GlobalScriptTutorial::loadScript() */

undefined4 __thiscall GlobalScriptTutorial::loadScript(GlobalScriptTutorial *this)

{
  char cVar1;
  bool bVar2;
  string *this_00;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  string local_24;
  string local_20;
  vector<std::string,std::allocator<std::string>> local_1c [12];
  uint local_10;
  
  cVar1 = loadRDARScriptFile("Etc/GlobalTutorialInfo/","CharacterList.lst");
  if (cVar1 == '\x01') {
    std::vector<std::string,std::allocator<std::string>>::vector(local_1c);
    do {
                    /* try { // try from 08ab8e8b to 08ab8e8f has its CatchHandler @ 08ab8fce */
      std::string::string((string *)&local_20);
                    /* try { // try from 08ab8e9e to 08ab8ed8 has its CatchHandler @ 08ab8f36 */
      cVar1 = ScanType((string *)&local_20,true);
      if (cVar1 == '\x01') {
        bVar2 = std::operator==(&local_20,"[list]");
        if (bVar2) {
          do {
            std::string::string((string *)&local_24);
                    /* try { // try from 08ab8edf to 08ab8f03 has its CatchHandler @ 08ab8f0b */
            cVar1 = ScanStr((string *)&local_24);
            if (cVar1 == '\x01') {
              std::vector<std::string,std::allocator<std::string>>::push_back(local_1c,&local_24);
            }
                    /* try { // try from 08ab8f26 to 08ab8f2a has its CatchHandler @ 08ab8f36 */
            std::string::~string((string *)&local_24);
          } while (cVar1 == '\x01');
        }
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
                    /* try { // try from 08ab8f54 to 08ab8f9f has its CatchHandler @ 08ab8fce */
      std::string::~string((string *)&local_20);
    } while (bVar2);
    unloadRDARScriptFile();
    local_10 = 0;
    while (uVar4 = std::vector<std::string,std::allocator<std::string>>::size(local_1c),
          local_10 < uVar4) {
      this_00 = (string *)
                std::vector<std::string,std::allocator<std::string>>::operator[](local_1c,local_10);
      pcVar3 = (char *)std::string::c_str(this_00);
      cVar1 = loadScript(this,"Etc/GlobalTutorialInfo/",pcVar3);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_08ab8fe9;
      }
      local_10 = local_10 + 1;
    }
    uVar5 = 1;
LAB_08ab8fe9:
    std::vector<std::string,std::allocator<std::string>>::~vector(local_1c);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
