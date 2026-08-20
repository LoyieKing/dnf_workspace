# LoadScript

`_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_`

`ExtreamDungeon::CCompound_ExtreamDun_Item::LoadScript(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832c65e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832c65e  _ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_
#           ExtreamDungeon::CCompound_ExtreamDun_Item::LoadScript(char const*, char const*)
# range [0x0832c65e, 0x0832c975]
0832c65e +0x000:  push   %ebp
0832c65f +0x001:  mov    %esp,%ebp
0832c661 +0x003:  push   %esi
0832c662 +0x004:  push   %ebx
0832c663 +0x005:  sub    $0x60,%esp
0832c666 +0x008:  mov    0x10(%ebp),%eax
0832c669 +0x00b:  mov    %eax,0x4(%esp)
0832c66d +0x00f:  mov    0xc(%ebp),%eax
0832c670 +0x012:  mov    %eax,(%esp)
0832c673 +0x015:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
0832c678 +0x01a:  xor    $0x1,%eax
0832c67b +0x01d:  test   %al,%al
0832c67d +0x01f:  je     0832c689 <+0x2b>
0832c67f +0x021:  mov    $0x62,%ebx
0832c684 +0x026:  jmp    0832c96c <+0x30e>
0832c689 +0x02b:  lea    -0x4c(%ebp),%eax
0832c68c +0x02e:  mov    %eax,(%esp)
0832c68f +0x031:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0832c694 +0x036:  lea    -0x50(%ebp),%eax
0832c697 +0x039:  mov    %eax,(%esp)
0832c69a +0x03c:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0832c69f +0x041:  movb   $0x0,-0x35(%ebp)
0832c6a3 +0x045:  jmp    0832c6a6 <+0x48>
0832c6a5 +0x047:  nop
0832c6a6 +0x048:  movl   $0x1,0x4(%esp)
0832c6ae +0x050:  lea    -0x50(%ebp),%eax
0832c6b1 +0x053:  mov    %eax,(%esp)
0832c6b4 +0x056:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
0832c6b9 +0x05b:  xor    $0x1,%eax
0832c6bc +0x05e:  test   %al,%al
0832c6be +0x060:  jne    0832c91e <+0x2c0>
0832c6c4 +0x066:  movl   $"[insert rarity]",0x4(%esp)
0832c6cc +0x06e:  lea    -0x50(%ebp),%eax
0832c6cf +0x071:  mov    %eax,(%esp)
0832c6d2 +0x074:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0832c6d7 +0x079:  test   %al,%al
0832c6d9 +0x07b:  je     0832c700 <+0xa2>
0832c6db +0x07d:  movl   $0x0,-0x34(%ebp)
0832c6e2 +0x084:  jmp    0832c6f3 <+0x95>
0832c6e4 +0x086:  lea    -0x4c(%ebp),%eax
0832c6e7 +0x089:  mov    %eax,(%esp)
0832c6ea +0x08c:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0832c6ef +0x091:  addl   $0x1,-0x34(%ebp)
0832c6f3 +0x095:  cmpl   $0x2,-0x34(%ebp)
0832c6f7 +0x099:  setle  %al
0832c6fa +0x09c:  test   %al,%al
0832c6fc +0x09e:  jne    0832c6e4 <+0x86>
0832c6fe +0x0a0:  jmp    0832c6a6 <+0x48>
0832c700 +0x0a2:  movl   $"[rarity dicision]",0x4(%esp)
0832c708 +0x0aa:  lea    -0x50(%ebp),%eax
0832c70b +0x0ad:  mov    %eax,(%esp)
0832c70e +0x0b0:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0832c713 +0x0b5:  test   %al,%al
0832c715 +0x0b7:  je     0832c770 <+0x112>
0832c717 +0x0b9:  movl   $0x0,-0x30(%ebp)
0832c71e +0x0c0:  jmp    0832c760 <+0x102>
0832c720 +0x0c2:  movl   $0x0,-0x2c(%ebp)
0832c727 +0x0c9:  jmp    0832c751 <+0xf3>
0832c729 +0x0cb:  mov    -0x30(%ebp),%esi
0832c72c +0x0ce:  mov    -0x2c(%ebp),%ebx
0832c72f +0x0d1:  movl   $0x0,(%esp)
0832c736 +0x0d8:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0832c73b +0x0dd:  mov    %eax,%edx
0832c73d +0x0df:  mov    0x8(%ebp),%eax
0832c740 +0x0e2:  lea    0x0(,%esi,4),%ecx
0832c747 +0x0e9:  add    %ebx,%ecx
0832c749 +0x0eb:  mov    %edx,0x4(%eax,%ecx,4)
0832c74d +0x0ef:  addl   $0x1,-0x2c(%ebp)
0832c751 +0x0f3:  cmpl   $0x3,-0x2c(%ebp)
0832c755 +0x0f7:  setle  %al
0832c758 +0x0fa:  test   %al,%al
0832c75a +0x0fc:  jne    0832c729 <+0xcb>
0832c75c +0x0fe:  addl   $0x1,-0x30(%ebp)
0832c760 +0x102:  cmpl   $0x2,-0x30(%ebp)
0832c764 +0x106:  setle  %al
0832c767 +0x109:  test   %al,%al
0832c769 +0x10b:  jne    0832c720 <+0xc2>
0832c76b +0x10d:  jmp    0832c6a6 <+0x48>
0832c770 +0x112:  movl   $"[level dicision]",0x4(%esp)
0832c778 +0x11a:  lea    -0x50(%ebp),%eax
0832c77b +0x11d:  mov    %eax,(%esp)
0832c77e +0x120:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0832c783 +0x125:  test   %al,%al
0832c785 +0x127:  je     0832c847 <+0x1e9>
0832c78b +0x12d:  movl   $0x0,(%esp)
0832c792 +0x134:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0832c797 +0x139:  mov    %eax,-0x28(%ebp)
0832c79a +0x13c:  movl   $0x0,-0x24(%ebp)
0832c7a1 +0x143:  jmp    0832c7ce <+0x170>
0832c7a3 +0x145:  movl   $0x0,(%esp)
0832c7aa +0x14c:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0832c7af +0x151:  mov    %eax,-0x48(%ebp)
0832c7b2 +0x154:  mov    0x8(%ebp),%eax
0832c7b5 +0x157:  lea    0xb8c(%eax),%edx
0832c7bb +0x15d:  lea    -0x48(%ebp),%eax
0832c7be +0x160:  mov    %eax,0x4(%esp)
0832c7c2 +0x164:  mov    %edx,(%esp)
0832c7c5 +0x167:  call   081527c6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20fb
0832c7ca +0x16c:  addl   $0x1,-0x24(%ebp)
0832c7ce +0x170:  mov    -0x24(%ebp),%eax
0832c7d1 +0x173:  cmp    -0x28(%ebp),%eax
0832c7d4 +0x176:  setb   %al
0832c7d7 +0x179:  test   %al,%al
0832c7d9 +0x17b:  jne    0832c7a3 <+0x145>
0832c7db +0x17d:  movl   $0x0,-0x20(%ebp)
0832c7e2 +0x184:  jmp    0832c837 <+0x1d9>
0832c7e4 +0x186:  movl   $0x0,-0x1c(%ebp)
0832c7eb +0x18d:  jmp    0832c826 <+0x1c8>
0832c7ed +0x18f:  movl   $0x0,(%esp)
0832c7f4 +0x196:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0832c7f9 +0x19b:  mov    %eax,-0x44(%ebp)
0832c7fc +0x19e:  mov    -0x20(%ebp),%edx
0832c7ff +0x1a1:  mov    %edx,%eax
0832c801 +0x1a3:  add    %eax,%eax
0832c803 +0x1a5:  add    %edx,%eax
0832c805 +0x1a7:  shl    $0x2,%eax
0832c808 +0x1aa:  add    $0xb80,%eax
0832c80d +0x1af:  add    0x8(%ebp),%eax
0832c810 +0x1b2:  lea    0x18(%eax),%edx
0832c813 +0x1b5:  lea    -0x44(%ebp),%eax
0832c816 +0x1b8:  mov    %eax,0x4(%esp)
0832c81a +0x1bc:  mov    %edx,(%esp)
0832c81d +0x1bf:  call   081527c6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20fb
0832c822 +0x1c4:  addl   $0x1,-0x1c(%ebp)
0832c826 +0x1c8:  mov    -0x1c(%ebp),%eax
0832c829 +0x1cb:  cmp    -0x28(%ebp),%eax
0832c82c +0x1ce:  setb   %al
0832c82f +0x1d1:  test   %al,%al
0832c831 +0x1d3:  jne    0832c7ed <+0x18f>
0832c833 +0x1d5:  addl   $0x1,-0x20(%ebp)
0832c837 +0x1d9:  cmpl   $0x2,-0x20(%ebp)
0832c83b +0x1dd:  setle  %al
0832c83e +0x1e0:  test   %al,%al
0832c840 +0x1e2:  jne    0832c7e4 <+0x186>
0832c842 +0x1e4:  jmp    0832c6a6 <+0x48>
0832c847 +0x1e9:  movl   $"[silver level dicision]",0x4(%esp)
0832c84f +0x1f1:  lea    -0x50(%ebp),%eax
0832c852 +0x1f4:  mov    %eax,(%esp)
0832c855 +0x1f7:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0832c85a +0x1fc:  test   %al,%al
0832c85c +0x1fe:  je     0832c6a5 <+0x47>
0832c862 +0x204:  movl   $0x0,(%esp)
0832c869 +0x20b:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0832c86e +0x210:  mov    %eax,-0x18(%ebp)
0832c871 +0x213:  movl   $0x0,-0x14(%ebp)
0832c878 +0x21a:  jmp    0832c8a5 <+0x247>
0832c87a +0x21c:  movl   $0x0,(%esp)
0832c881 +0x223:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0832c886 +0x228:  mov    %eax,-0x40(%ebp)
0832c889 +0x22b:  mov    0x8(%ebp),%eax
0832c88c +0x22e:  lea    0xbbc(%eax),%edx
0832c892 +0x234:  lea    -0x40(%ebp),%eax
0832c895 +0x237:  mov    %eax,0x4(%esp)
0832c899 +0x23b:  mov    %edx,(%esp)
0832c89c +0x23e:  call   081527c6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20fb
0832c8a1 +0x243:  addl   $0x1,-0x14(%ebp)
0832c8a5 +0x247:  mov    -0x14(%ebp),%eax
0832c8a8 +0x24a:  cmp    -0x18(%ebp),%eax
0832c8ab +0x24d:  setb   %al
0832c8ae +0x250:  test   %al,%al
0832c8b0 +0x252:  jne    0832c87a <+0x21c>
0832c8b2 +0x254:  movl   $0x0,-0x10(%ebp)
0832c8b9 +0x25b:  jmp    0832c90e <+0x2b0>
0832c8bb +0x25d:  movl   $0x0,-0xc(%ebp)
0832c8c2 +0x264:  jmp    0832c8fd <+0x29f>
0832c8c4 +0x266:  movl   $0x0,(%esp)
0832c8cb +0x26d:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0832c8d0 +0x272:  mov    %eax,-0x3c(%ebp)
0832c8d3 +0x275:  mov    -0x10(%ebp),%edx
0832c8d6 +0x278:  mov    %edx,%eax
0832c8d8 +0x27a:  add    %eax,%eax
0832c8da +0x27c:  add    %edx,%eax
0832c8dc +0x27e:  shl    $0x2,%eax
0832c8df +0x281:  add    $0xbb0,%eax
0832c8e4 +0x286:  add    0x8(%ebp),%eax
0832c8e7 +0x289:  lea    0x18(%eax),%edx
0832c8ea +0x28c:  lea    -0x3c(%ebp),%eax
0832c8ed +0x28f:  mov    %eax,0x4(%esp)
0832c8f1 +0x293:  mov    %edx,(%esp)
0832c8f4 +0x296:  call   081527c6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20fb
0832c8f9 +0x29b:  addl   $0x1,-0xc(%ebp)
0832c8fd +0x29f:  mov    -0xc(%ebp),%eax
0832c900 +0x2a2:  cmp    -0x18(%ebp),%eax
0832c903 +0x2a5:  setb   %al
0832c906 +0x2a8:  test   %al,%al
0832c908 +0x2aa:  jne    0832c8c4 <+0x266>
0832c90a +0x2ac:  addl   $0x1,-0x10(%ebp)
0832c90e +0x2b0:  cmpl   $0x2,-0x10(%ebp)
0832c912 +0x2b4:  setle  %al
0832c915 +0x2b7:  test   %al,%al
0832c917 +0x2b9:  jne    0832c8bb <+0x25d>
0832c919 +0x2bb:  jmp    0832c6a6 <+0x48>
0832c91e +0x2c0:  nop
0832c91f +0x2c1:  mov    $0x0,%ebx
0832c924 +0x2c6:  lea    -0x50(%ebp),%eax
0832c927 +0x2c9:  mov    %eax,(%esp)
0832c92a +0x2cc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0832c92f +0x2d1:  jmp    0832c961 <+0x303>
0832c931 +0x2d3:  mov    %edx,%ebx
0832c933 +0x2d5:  mov    %eax,%esi
0832c935 +0x2d7:  lea    -0x50(%ebp),%eax
0832c938 +0x2da:  mov    %eax,(%esp)
0832c93b +0x2dd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0832c940 +0x2e2:  mov    %esi,%eax
0832c942 +0x2e4:  mov    %ebx,%edx
0832c944 +0x2e6:  jmp    0832c946 <+0x2e8>
0832c946 +0x2e8:  mov    %edx,%ebx
0832c948 +0x2ea:  mov    %eax,%esi
0832c94a +0x2ec:  lea    -0x4c(%ebp),%eax
0832c94d +0x2ef:  mov    %eax,(%esp)
0832c950 +0x2f2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0832c955 +0x2f7:  mov    %esi,%eax
0832c957 +0x2f9:  mov    %ebx,%edx
0832c959 +0x2fb:  mov    %eax,(%esp)
0832c95c +0x2fe:  call   08ae3750 <_Unwind_Resume>
0832c961 +0x303:  lea    -0x4c(%ebp),%eax
0832c964 +0x306:  mov    %eax,(%esp)
0832c967 +0x309:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0832c96c +0x30e:  mov    %ebx,%eax
0832c96e +0x310:  add    $0x60,%esp
0832c971 +0x313:  pop    %ebx
0832c972 +0x314:  pop    %esi
0832c973 +0x315:  pop    %ebp
0832c974 +0x316:  ret
0832c975 +0x317:  nop
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::LoadScript @ 0x832c65e

/* ExtreamDungeon::CCompound_ExtreamDun_Item::LoadScript(char const*, char const*) */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::LoadScript
          (CCompound_ExtreamDun_Item *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  string local_54;
  string local_50 [4];
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined1 local_39;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  
  cVar3 = loadRDARScriptFile(param_1,param_2);
  if (cVar3 == '\x01') {
    std::string::string(local_50);
                    /* try { // try from 0832c69a to 0832c69e has its CatchHandler @ 0832c946 */
    std::string::string((string *)&local_54);
    local_39 = 0;
                    /* try { // try from 0832c6b4 to 0832c8f8 has its CatchHandler @ 0832c931 */
    while (cVar3 = ScanType((string *)&local_54,true), cVar3 == '\x01') {
      bVar4 = std::operator==(&local_54,"[insert rarity]");
      if (bVar4) {
        for (local_38 = 0; local_38 < 3; local_38 = local_38 + 1) {
          ScanStr(local_50);
        }
      }
      else {
        bVar4 = std::operator==(&local_54,"[rarity dicision]");
        if (bVar4) {
          for (local_34 = 0; local_34 < 3; local_34 = local_34 + 1) {
            for (local_30 = 0; iVar2 = local_30, iVar1 = local_34, local_30 < 4;
                local_30 = local_30 + 1) {
              uVar5 = ScanInt((bool *)0x0);
              *(undefined4 *)(this + (iVar1 * 4 + iVar2) * 4 + 4) = uVar5;
            }
          }
        }
        else {
          bVar4 = std::operator==(&local_54,"[level dicision]");
          if (bVar4) {
            local_2c = ScanInt((bool *)0x0);
            for (local_28 = 0; local_28 < local_2c; local_28 = local_28 + 1) {
              local_4c = ScanInt((bool *)0x0);
              std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                        ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0xb8c),
                         &local_4c);
            }
            for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
              for (local_20 = 0; local_20 < local_2c; local_20 = local_20 + 1) {
                local_48 = ScanInt((bool *)0x0);
                std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                          ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                           (this + local_24 * 0xc + 0xb98),&local_48);
              }
            }
          }
          else {
            bVar4 = std::operator==(&local_54,"[silver level dicision]");
            if (bVar4) {
              local_1c = ScanInt((bool *)0x0);
              for (local_18 = 0; local_18 < local_1c; local_18 = local_18 + 1) {
                local_44 = ScanInt((bool *)0x0);
                std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                          ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0xbbc),
                           &local_44);
              }
              for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
                for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
                  local_40 = ScanInt((bool *)0x0);
                  std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                            ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                             (this + local_14 * 0xc + 0xbc8),&local_40);
                }
              }
            }
          }
        }
      }
    }
    uVar5 = 0;
                    /* try { // try from 0832c92a to 0832c92e has its CatchHandler @ 0832c946 */
    std::string::~string((string *)&local_54);
    std::string::~string(local_50);
  }
  else {
    uVar5 = 0x62;
  }
  return uVar5;
}
```
