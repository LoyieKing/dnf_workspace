# importFromBuffer

`_ZN19ScriptStringManager16importFromBufferEPKhi`

`ScriptStringManager::importFromBuffer(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `ScriptStringManager` | `0x08acf970` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acf970  _ZN19ScriptStringManager16importFromBufferEPKhi
#           ScriptStringManager::importFromBuffer(unsigned char const*, int)
# range [0x08acf970, 0x08acfcff]
08acf970 +0x000:  push   %ebp
08acf971 +0x001:  mov    %esp,%ebp
08acf973 +0x003:  push   %edi
08acf974 +0x004:  push   %esi
08acf975 +0x005:  push   %ebx
08acf976 +0x006:  sub    $0x46c,%esp
08acf97c +0x00c:  mov    0xc(%ebp),%esi
08acf97f +0x00f:  test   %esi,%esi
08acf981 +0x011:  je     08acf991 <+0x21>
08acf983 +0x013:  mov    (%esi),%eax
08acf985 +0x015:  cmpl   $0x3,0x10(%ebp)
08acf989 +0x019:  mov    %eax,-0x440(%ebp)
08acf98f +0x01f:  jg     08acf9a0 <+0x30>
08acf991 +0x021:  xor    %eax,%eax
08acf993 +0x023:  add    $0x46c,%esp
08acf999 +0x029:  pop    %ebx
08acf99a +0x02a:  pop    %esi
08acf99b +0x02b:  pop    %edi
08acf99c +0x02c:  pop    %ebp
08acf99d +0x02d:  ret
08acf99e +0x02e:  xchg   %ax,%ax
08acf9a0 +0x030:  lea    -0x34(%ebp),%edx
08acf9a3 +0x033:  movl   $0x0,-0x34(%ebp)
08acf9aa +0x03a:  movl   $0x0,-0x30(%ebp)
08acf9b1 +0x041:  movl   $0x0,-0x2c(%ebp)
08acf9b8 +0x048:  mov    %eax,0x4(%esp)
08acf9bc +0x04c:  mov    %edx,(%esp)
08acf9bf +0x04f:  call   0817ee44 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x75>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x75
08acf9c4 +0x054:  lea    0x4(%esi),%eax
08acf9c7 +0x057:  mov    %eax,-0x43c(%ebp)
08acf9cd +0x05d:  mov    -0x440(%ebp),%eax
08acf9d3 +0x063:  movl   $0x8,-0x448(%ebp)
08acf9dd +0x06d:  test   %eax,%eax
08acf9df +0x06f:  je     08acfa69 <+0xf9>
08acf9e5 +0x075:  cmpl   $0x7,0x10(%ebp)
08acf9e9 +0x079:  mov    0x4(%esi),%ecx
08acf9ec +0x07c:  jle    08acfc10 <+0x2a0>
08acf9f2 +0x082:  mov    $0x8,%ebx
08acf9f7 +0x087:  xor    %edi,%edi
08acf9f9 +0x089:  jmp    08acfa2b <+0xbb>
08acf9fb +0x08b:  nop
08acf9fc +0x08c:  lea    0x0(%esi,%eiz,1),%esi
08acfa00 +0x090:  xor    %edx,%edx
08acfa02 +0x092:  test   %eax,%eax
08acfa04 +0x094:  je     08acfa0b <+0x9b>
08acfa06 +0x096:  mov    %ecx,(%eax)
08acfa08 +0x098:  mov    -0x30(%ebp),%edx
08acfa0b +0x09b:  add    $0x4,%edx
08acfa0e +0x09e:  add    $0x1,%edi
08acfa11 +0x0a1:  cmp    %edi,-0x440(%ebp)
08acfa17 +0x0a7:  mov    %edx,-0x30(%ebp)
08acfa1a +0x0aa:  jbe    08acfa60 <+0xf0>
08acfa1c +0x0ac:  mov    (%esi,%ebx,1),%ecx
08acfa1f +0x0af:  add    $0x4,%ebx
08acfa22 +0x0b2:  cmp    %ebx,0x10(%ebp)
08acfa25 +0x0b5:  jl     08acfc10 <+0x2a0>
08acfa2b +0x0bb:  mov    -0x30(%ebp),%eax
08acfa2e +0x0be:  lea    (%esi,%ebx,1),%edx
08acfa31 +0x0c1:  cmp    -0x2c(%ebp),%eax
08acfa34 +0x0c4:  mov    %edx,-0x43c(%ebp)
08acfa3a +0x0ca:  jne    08acfa00 <+0x90>
08acfa3c +0x0cc:  lea    -0x24(%ebp),%edx
08acfa3f +0x0cf:  mov    %eax,0x4(%esp)
08acfa43 +0x0d3:  lea    -0x34(%ebp),%eax
08acfa46 +0x0d6:  mov    %ecx,-0x24(%ebp)
08acfa49 +0x0d9:  mov    %edx,0x8(%esp)
08acfa4d +0x0dd:  mov    %eax,(%esp)
08acfa50 +0x0e0:  call   0808e454 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x2c4>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x2c4
08acfa55 +0x0e5:  add    $0x1,%edi
08acfa58 +0x0e8:  cmp    %edi,-0x440(%ebp)
08acfa5e +0x0ee:  ja     08acfa1c <+0xac>
08acfa60 +0x0f0:  add    $0x4,%ebx
08acfa63 +0x0f3:  mov    %ebx,-0x448(%ebp)
08acfa69 +0x0f9:  mov    -0x43c(%ebp),%eax
08acfa6f +0x0ff:  mov    (%eax),%edx
08acfa71 +0x101:  mov    -0x448(%ebp),%eax
08acfa77 +0x107:  cmp    %eax,0x10(%ebp)
08acfa7a +0x10a:  jl     08acfc10 <+0x2a0>
08acfa80 +0x110:  mov    -0x30(%ebp),%eax
08acfa83 +0x113:  cmp    -0x2c(%ebp),%eax
08acfa86 +0x116:  je     08acfc7b <+0x30b>
08acfa8c +0x11c:  xor    %ecx,%ecx
08acfa8e +0x11e:  test   %eax,%eax
08acfa90 +0x120:  je     08acfa97 <+0x127>
08acfa92 +0x122:  mov    %edx,(%eax)
08acfa94 +0x124:  mov    -0x30(%ebp),%ecx
08acfa97 +0x127:  add    $0x4,%ecx
08acfa9a +0x12a:  mov    %ecx,-0x30(%ebp)
08acfa9d +0x12d:  mov    0x8(%ebp),%eax
08acfaa0 +0x130:  mov    -0x440(%ebp),%edx
08acfaa6 +0x136:  add    $0x4,%eax
08acfaa9 +0x139:  mov    %eax,-0x44c(%ebp)
08acfaaf +0x13f:  mov    %edx,0x4(%esp)
08acfab3 +0x143:  mov    %eax,(%esp)
08acfab6 +0x146:  call   08a011ec <_GLOBAL__I_g_npcScriptBaseDirectory+0x87e>  ; global constructors keyed to g_npcScriptBaseDirectory+0x87e
08acfabb +0x14b:  mov    -0x440(%ebp),%edi
08acfac1 +0x151:  test   %edi,%edi
08acfac3 +0x153:  je     08acfc71 <+0x301>
08acfac9 +0x159:  mov    -0x43c(%ebp),%eax
08acfacf +0x15f:  lea    -0x434(%ebp),%edx
08acfad5 +0x165:  movl   $0x0,-0x43c(%ebp)
08acfadf +0x16f:  mov    %edx,-0x45c(%ebp)
08acfae5 +0x175:  add    $0x4,%eax
08acfae8 +0x178:  mov    %eax,-0x444(%ebp)
08acfaee +0x17e:  jmp    08acfbab <+0x23b>
08acfaf3 +0x183:  nop
08acfaf4 +0x184:  lea    0x0(%esi,%eiz,1),%esi
08acfaf8 +0x188:  mov    -0x444(%ebp),%edx
08acfafe +0x18e:  lea    -0x434(%ebp),%eax
08acfb04 +0x194:  mov    %ebx,0x8(%esp)
08acfb08 +0x198:  mov    %eax,(%esp)
08acfb0b +0x19b:  mov    %edx,0x4(%esp)
08acfb0f +0x19f:  call   0807d8a0 <_init+0x198>
08acfb14 +0x1a4:  add    %ebx,-0x448(%ebp)
08acfb1a +0x1aa:  mov    -0x448(%ebp),%edx
08acfb20 +0x1b0:  cmp    %edx,0x10(%ebp)
08acfb23 +0x1b3:  jl     08acfc10 <+0x2a0>
08acfb29 +0x1b9:  add    %ebx,-0x444(%ebp)
08acfb2f +0x1bf:  movb   $0x0,-0x434(%ebp,%ebx,1)
08acfb37 +0x1c7:  lea    -0x19(%ebp),%edx
08acfb3a +0x1ca:  mov    %edx,0x8(%esp)
08acfb3e +0x1ce:  lea    -0x434(%ebp),%eax
08acfb44 +0x1d4:  lea    -0x20(%ebp),%edx
08acfb47 +0x1d7:  mov    %eax,0x4(%esp)
08acfb4b +0x1db:  mov    %edx,(%esp)
08acfb4e +0x1de:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08acfb53 +0x1e3:  mov    0x8(%ebp),%edx
08acfb56 +0x1e6:  mov    0x8(%edx),%eax
08acfb59 +0x1e9:  cmp    0xc(%edx),%eax
08acfb5c +0x1ec:  je     08acfc48 <+0x2d8>
08acfb62 +0x1f2:  test   %eax,%eax
08acfb64 +0x1f4:  je     08acfc40 <+0x2d0>
08acfb6a +0x1fa:  lea    -0x20(%ebp),%edx
08acfb6d +0x1fd:  mov    %edx,0x4(%esp)
08acfb71 +0x201:  mov    %eax,(%esp)
08acfb74 +0x204:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08acfb79 +0x209:  mov    0x8(%ebp),%edx
08acfb7c +0x20c:  mov    0x8(%edx),%eax
08acfb7f +0x20f:  mov    0x8(%ebp),%edx
08acfb82 +0x212:  add    $0x4,%eax
08acfb85 +0x215:  mov    %eax,0x8(%edx)
08acfb88 +0x218:  mov    -0x20(%ebp),%eax
08acfb8b +0x21b:  sub    $0xc,%eax
08acfb8e +0x21e:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08acfb93 +0x223:  jne    08acfc99 <+0x329>
08acfb99 +0x229:  mov    -0x43c(%ebp),%eax
08acfb9f +0x22f:  cmp    %eax,-0x440(%ebp)
08acfba5 +0x235:  jbe    08acfc66 <+0x2f6>
08acfbab +0x23b:  addl   $0x1,-0x43c(%ebp)
08acfbb2 +0x242:  mov    -0x34(%ebp),%edx
08acfbb5 +0x245:  mov    -0x43c(%ebp),%eax
08acfbbb +0x24b:  mov    (%edx,%eax,4),%ebx
08acfbbe +0x24e:  sub    -0x4(%edx,%eax,4),%ebx
08acfbc2 +0x252:  cmp    $0x3ff,%ebx
08acfbc8 +0x258:  jle    08acfaf8 <+0x188>
08acfbce +0x25e:  mov    -0x45c(%ebp),%edi
08acfbd4 +0x264:  mov    $0xff,%ecx
08acfbd9 +0x269:  mov    -0x444(%ebp),%esi
08acfbdf +0x26f:  rep movsl %ds:(%esi),%es:(%edi)
08acfbe1 +0x271:  movzwl (%esi),%eax
08acfbe4 +0x274:  mov    %ax,(%edi)
08acfbe7 +0x277:  movzbl 0x2(%esi),%eax
08acfbeb +0x27b:  add    %ebx,-0x448(%ebp)
08acfbf1 +0x281:  mov    %al,0x2(%edi)
08acfbf4 +0x284:  mov    -0x448(%ebp),%eax
08acfbfa +0x28a:  cmp    %eax,0x10(%ebp)
08acfbfd +0x28d:  jl     08acfc13 <+0x2a3>
08acfbff +0x28f:  add    %ebx,-0x444(%ebp)
08acfc05 +0x295:  movb   $0x0,-0x35(%ebp)
08acfc09 +0x299:  jmp    08acfb37 <+0x1c7>
08acfc0e +0x29e:  xchg   %ax,%ax
08acfc10 +0x2a0:  mov    -0x34(%ebp),%edx
08acfc13 +0x2a3:  xor    %eax,%eax
08acfc15 +0x2a5:  test   %edx,%edx
08acfc17 +0x2a7:  je     08acf993 <+0x23>
08acfc1d +0x2ad:  mov    %al,-0x450(%ebp)
08acfc23 +0x2b3:  mov    %edx,(%esp)
08acfc26 +0x2b6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08acfc2b +0x2bb:  movzbl -0x450(%ebp),%eax
08acfc32 +0x2c2:  add    $0x46c,%esp
08acfc38 +0x2c8:  pop    %ebx
08acfc39 +0x2c9:  pop    %esi
08acfc3a +0x2ca:  pop    %edi
08acfc3b +0x2cb:  pop    %ebp
08acfc3c +0x2cc:  ret
08acfc3d +0x2cd:  lea    0x0(%esi),%esi
08acfc40 +0x2d0:  xor    %eax,%eax
08acfc42 +0x2d2:  jmp    08acfb7f <+0x20f>
08acfc47 +0x2d7:  nop
08acfc48 +0x2d8:  mov    %eax,0x4(%esp)
08acfc4c +0x2dc:  mov    -0x44c(%ebp),%eax
08acfc52 +0x2e2:  lea    -0x20(%ebp),%edx
08acfc55 +0x2e5:  mov    %edx,0x8(%esp)
08acfc59 +0x2e9:  mov    %eax,(%esp)
08acfc5c +0x2ec:  call   0823d878 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x89f6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x89f6
08acfc61 +0x2f1:  jmp    08acfb88 <+0x218>
08acfc66 +0x2f6:  mov    -0x448(%ebp),%edx
08acfc6c +0x2fc:  cmp    %edx,0x10(%ebp)
08acfc6f +0x2ff:  jl     08acfc10 <+0x2a0>
08acfc71 +0x301:  mov    $0x1,%eax
08acfc76 +0x306:  mov    -0x34(%ebp),%edx
08acfc79 +0x309:  jmp    08acfc15 <+0x2a5>
08acfc7b +0x30b:  mov    %edx,-0x28(%ebp)
08acfc7e +0x30e:  lea    -0x28(%ebp),%edx
08acfc81 +0x311:  mov    %edx,0x8(%esp)
08acfc85 +0x315:  lea    -0x34(%ebp),%edx
08acfc88 +0x318:  mov    %eax,0x4(%esp)
08acfc8c +0x31c:  mov    %edx,(%esp)
08acfc8f +0x31f:  call   0808e454 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x2c4>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x2c4
08acfc94 +0x324:  jmp    08acfa9d <+0x12d>
08acfc99 +0x329:  mov    $&data#bb92cc41(.plt),%edx
08acfc9e +0x32e:  test   %edx,%edx
08acfca0 +0x330:  je     08acfcf4 <+0x384>
08acfca2 +0x332:  or     $0xffffffff,%edx
08acfca5 +0x335:  lock xadd %edx,0x8(%eax)
08acfcaa +0x33a:  test   %edx,%edx
08acfcac +0x33c:  jg     08acfb99 <+0x229>
08acfcb2 +0x342:  lea    -0x1a(%ebp),%edx
08acfcb5 +0x345:  mov    %edx,0x4(%esp)
08acfcb9 +0x349:  mov    %eax,(%esp)
08acfcbc +0x34c:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08acfcc1 +0x351:  jmp    08acfb99 <+0x229>
08acfcc6 +0x356:  lea    -0x20(%ebp),%edx
08acfcc9 +0x359:  mov    %eax,%ebx
08acfccb +0x35b:  mov    %edx,(%esp)
08acfcce +0x35e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08acfcd3 +0x363:  mov    -0x34(%ebp),%eax
08acfcd6 +0x366:  test   %eax,%eax
08acfcd8 +0x368:  je     08acfce2 <+0x372>
08acfcda +0x36a:  mov    %eax,(%esp)
08acfcdd +0x36d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08acfce2 +0x372:  mov    %ebx,(%esp)
08acfce5 +0x375:  call   08ae3750 <_Unwind_Resume>
08acfcea +0x37a:  mov    %eax,%ebx
08acfcec +0x37c:  jmp    08acfcd3 <+0x363>
08acfcee +0x37e:  xchg   %ax,%ax
08acfcf0 +0x380:  jmp    08acfcc6 <+0x356>
08acfcf2 +0x382:  jmp    08acfcea <+0x37a>
08acfcf4 +0x384:  mov    0x8(%eax),%edx
08acfcf7 +0x387:  lea    -0x1(%edx),%ecx
08acfcfa +0x38a:  mov    %ecx,0x8(%eax)
08acfcfd +0x38d:  jmp    08acfcaa <+0x33a>
08acfcff +0x38f:  nop
```

## 反编译 C

```c
// ScriptStringManager::importFromBuffer @ 0x8acf970

/* WARNING: Removing unreachable block (ram,0x08acfcf4) */
/* DWARF original prototype: bool importFromBuffer(ScriptStringManager * this, uchar * buffer, int
   buffSize) */

bool __thiscall
ScriptStringManager::importFromBuffer(ScriptStringManager *this,uchar *buffer,int buffSize)

{
  int *piVar1;
  uint uVar2;
  string *this_00;
  bool bVar3;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  size_t __n;
  uchar *puVar7;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  int local_44c;
  uchar *local_448;
  uchar *local_440;
  char local_438 [1023];
  undefined1 local_39;
  void *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  allocator local_1d [13];
  
  bVar10 = 0;
                    /* Unresolved local var: int read_size@[???]
                       Unresolved local var: uchar * ptr@[???]
                       Unresolved local var: uint string_count@[???]
                       Unresolved local var: vector<int,_std::allocator<int>_> offsets@[???]
                       Unresolved local var: uint offset@[???]
                       Unresolved local var: char[1024] temp_buffer@[???] */
  if ((buffer == (uchar *)0x0) || (uVar2 = *(uint *)buffer, buffSize < 4)) {
    return false;
  }
  local_38 = (void *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
                    /* try { // try from 08acf9bf to 08acfaba has its CatchHandler @ 08acfcea */
  std::vector<int,std::allocator<int>>::reserve((vector<int,std::allocator<int>> *)&local_38,uVar2);
  local_440 = buffer + 4;
                    /* Unresolved local var: uint i@[???] */
  local_44c = 8;
  if (uVar2 == 0) {
LAB_08acfa69:
    local_448 = local_440;
    if (local_44c <= buffSize) {
      if (local_34 == local_30) {
        local_2c = *(undefined4 *)local_440;
                    /* try { // try from 08acfc8f to 08acfc93 has its CatchHandler @ 08acfcea */
        std::vector<int,std::allocator<int>>::_M_insert_aux<int>
                  ((vector<int,std::allocator<int>> *)&local_38,local_34,&local_2c);
      }
      else {
        puVar6 = (undefined4 *)0x0;
        if (local_34 != (undefined4 *)0x0) {
          *local_34 = *(undefined4 *)local_440;
          puVar6 = local_34;
        }
        local_34 = puVar6 + 1;
      }
      std::vector<std::string,std::allocator<std::string>>::reserve
                ((vector<std::string,std::allocator<std::string>> *)&this->strings_,uVar2);
                    /* Unresolved local var: uint i@[???] */
      if (uVar2 != 0) {
        local_440 = (uchar *)0x0;
        local_448 = local_448 + 4;
        do {
          local_440 = (uchar *)((int)local_440 + 1);
          __n = *(int *)((int)local_38 + (int)local_440 * 4) -
                *(int *)((int)local_38 + (int)local_440 * 4 + -4);
          if ((int)__n < 0x400) {
                    /* Unresolved local var: int length@[???] */
            memcpy(local_438,local_448,__n);
            if (buffSize < (int)(local_44c + __n)) goto LAB_08acfc13;
            local_438[__n] = '\0';
          }
          else {
            puVar7 = local_448;
            pcVar9 = local_438;
            for (iVar8 = 0xff; iVar8 != 0; iVar8 = iVar8 + -1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)puVar7;
              puVar7 = puVar7 + (uint)bVar10 * -8 + 4;
              pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
            }
            *(undefined2 *)pcVar9 = *(undefined2 *)puVar7;
            pcVar9[2] = puVar7[2];
            if (buffSize < (int)(local_44c + __n)) goto LAB_08acfc13;
            local_39 = 0;
          }
          local_448 = local_448 + __n;
          local_44c = local_44c + __n;
                    /* try { // try from 08acfb4e to 08acfb52 has its CatchHandler @ 08acfcf2 */
          std::string::string((string *)&local_24,local_438,local_1d);
          this_00 = (string *)
                    (this->strings_).
                    super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                    ._M_impl._M_finish;
          if (this_00 ==
              (string *)
              (this->strings_).
              super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
              ._M_impl._M_end_of_storage) {
                    /* try { // try from 08acfc5c to 08acfc60 has its CatchHandler @ 08acfcee */
            std::vector<std::string,std::allocator<std::string>>::_M_insert_aux<std::string>
                      ((vector<std::string,std::allocator<std::string>> *)&this->strings_,this_00,
                       &local_24);
          }
          else {
            if (this_00 == (string *)0x0) {
              pbVar4 = (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *)0x0;
            }
            else {
                    /* try { // try from 08acfb74 to 08acfb78 has its CatchHandler @ 08acfcc6 */
              std::string::string(this_00,(string *)&local_24);
              pbVar4 = (this->strings_).
                       super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                       ._M_impl._M_finish;
            }
            (this->strings_).
            super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
            ._M_impl._M_finish = pbVar4 + 1;
          }
          if ((allocator *)(local_24 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar1 = (int *)(local_24 + -4);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_24 + -0xc));
            }
          }
        } while (local_440 < uVar2);
        if (buffSize < local_44c) goto LAB_08acfc13;
      }
      bVar3 = true;
      goto LAB_08acfc15;
    }
  }
  else {
    uVar5 = *(undefined4 *)(buffer + 4);
    if (7 < buffSize) {
      local_44c = 8;
      iVar8 = 0;
      do {
        local_440 = buffer + local_44c;
        if (local_34 == local_30) {
          local_28 = uVar5;
          std::vector<int,std::allocator<int>>::_M_insert_aux<int>
                    ((vector<int,std::allocator<int>> *)&local_38,local_34,&local_28);
        }
        else {
          puVar6 = (undefined4 *)0x0;
          if (local_34 != (undefined4 *)0x0) {
            *local_34 = uVar5;
            puVar6 = local_34;
          }
          local_34 = puVar6 + 1;
        }
        if (uVar2 <= iVar8 + 1U) {
          local_44c = local_44c + 4;
          goto LAB_08acfa69;
        }
        iVar8 = iVar8 + 1;
        uVar5 = *(undefined4 *)(buffer + local_44c);
        local_44c = local_44c + 4;
      } while (local_44c <= buffSize);
    }
  }
LAB_08acfc13:
  bVar3 = false;
LAB_08acfc15:
  if (local_38 == (void *)0x0) {
    return bVar3;
  }
  operator_delete(local_38);
  return bVar3;
}
```
