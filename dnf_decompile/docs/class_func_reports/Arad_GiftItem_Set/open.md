# open

`_ZN17Arad_GiftItem_Set4openEP17STStackableScript`

`Arad_GiftItem_Set::open(STStackableScript*)`

| 类 | 地址 |
|---|---|
| `Arad_GiftItem_Set` | `0x081a2f1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a2f1e  _ZN17Arad_GiftItem_Set4openEP17STStackableScript
#           Arad_GiftItem_Set::open(STStackableScript*)
# range [0x081a2f1e, 0x081a311d]
081a2f1e +0x000:  push   %ebp
081a2f1f +0x001:  mov    %esp,%ebp
081a2f21 +0x003:  push   %esi
081a2f22 +0x004:  push   %ebx
081a2f23 +0x005:  sub    $0x70,%esp
081a2f26 +0x008:  mov    0xc(%ebp),%eax
081a2f29 +0x00b:  mov    0x178(%eax),%eax
081a2f2f +0x011:  test   %eax,%eax
081a2f31 +0x013:  jne    081a2f3d <+0x1f>
081a2f33 +0x015:  mov    $0x0,%esi
081a2f38 +0x01a:  jmp    081a3112 <+0x1f4>
081a2f3d +0x01f:  mov    0xc(%ebp),%eax
081a2f40 +0x022:  add    $0x180,%eax
081a2f45 +0x027:  mov    %eax,(%esp)
081a2f48 +0x02a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081a2f4d +0x02f:  mov    %eax,0x4(%esp)
081a2f51 +0x033:  mov    0x8(%ebp),%eax
081a2f54 +0x036:  mov    %eax,(%esp)
081a2f57 +0x039:  call   081a2e3e <_ZN17Arad_GiftItem_Set11str_to_enumEPKc>  ; Arad_GiftItem_Set::str_to_enum(char const*)
081a2f5c +0x03e:  mov    %eax,-0x18(%ebp)
081a2f5f +0x041:  cmpl   $0x0,-0x18(%ebp)
081a2f63 +0x045:  jne    081a2f6f <+0x51>
081a2f65 +0x047:  mov    $0x0,%esi
081a2f6a +0x04c:  jmp    081a3112 <+0x1f4>
081a2f6f +0x051:  mov    0xc(%ebp),%eax
081a2f72 +0x054:  mov    (%eax),%eax
081a2f74 +0x056:  mov    %eax,-0x14(%ebp)
081a2f77 +0x059:  mov    0xc(%ebp),%eax
081a2f7a +0x05c:  mov    0x5c(%eax),%eax
081a2f7d +0x05f:  mov    %eax,-0x10(%ebp)
081a2f80 +0x062:  movl   $0x0,-0xc(%ebp)
081a2f87 +0x069:  jmp    081a30c1 <+0x1a3>
081a2f8c +0x06e:  mov    -0xc(%ebp),%eax
081a2f8f +0x071:  mov    0xc(%ebp),%edx
081a2f92 +0x074:  movzbl 0x38(%edx,%eax,1),%eax
081a2f97 +0x079:  test   %al,%al
081a2f99 +0x07b:  je     081a30bd <+0x19f>
081a2f9f +0x081:  mov    -0x18(%ebp),%eax
081a2fa2 +0x084:  mov    %eax,%edx
081a2fa4 +0x086:  sar    $0x1f,%edx
081a2fa7 +0x089:  mov    %eax,%ecx
081a2fa9 +0x08b:  mov    %edx,%ebx
081a2fab +0x08d:  mov    %ecx,%ebx
081a2fad +0x08f:  mov    $0x0,%ecx
081a2fb2 +0x094:  mov    -0xc(%ebp),%eax
081a2fb5 +0x097:  movzwl %ax,%eax
081a2fb8 +0x09a:  shl    $0x10,%eax
081a2fbb +0x09d:  mov    %eax,%edx
081a2fbd +0x09f:  sar    $0x1f,%edx
081a2fc0 +0x0a2:  add    %eax,%ecx
081a2fc2 +0x0a4:  adc    %edx,%ebx
081a2fc4 +0x0a6:  mov    -0x10(%ebp),%eax
081a2fc7 +0x0a9:  mov    %eax,%edx
081a2fc9 +0x0ab:  sar    $0x1f,%edx
081a2fcc +0x0ae:  add    %ecx,%eax
081a2fce +0x0b0:  adc    %ebx,%edx
081a2fd0 +0x0b2:  mov    %eax,-0x48(%ebp)
081a2fd3 +0x0b5:  mov    %edx,-0x44(%ebp)
081a2fd6 +0x0b8:  lea    -0x54(%ebp),%eax
081a2fd9 +0x0bb:  mov    %eax,(%esp)
081a2fdc +0x0be:  call   081a4104 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x15f>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x15f
081a2fe1 +0x0c3:  mov    -0x14(%ebp),%eax
081a2fe4 +0x0c6:  mov    %eax,-0x54(%ebp)
081a2fe7 +0x0c9:  mov    0xc(%ebp),%eax
081a2fea +0x0cc:  add    $0x184,%eax
081a2fef +0x0d1:  mov    %eax,0x4(%esp)
081a2ff3 +0x0d5:  lea    -0x54(%ebp),%eax
081a2ff6 +0x0d8:  add    $0x4,%eax
081a2ff9 +0x0db:  mov    %eax,(%esp)
081a2ffc +0x0de:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
081a3001 +0x0e3:  mov    0xc(%ebp),%eax
081a3004 +0x0e6:  add    $0x188,%eax
081a3009 +0x0eb:  mov    %eax,0x4(%esp)
081a300d +0x0ef:  lea    -0x54(%ebp),%eax
081a3010 +0x0f2:  add    $0x8,%eax
081a3013 +0x0f5:  mov    %eax,(%esp)
081a3016 +0x0f8:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
081a301b +0x0fd:  lea    -0x54(%ebp),%eax
081a301e +0x100:  mov    %eax,0x8(%esp)
081a3022 +0x104:  lea    -0x48(%ebp),%eax
081a3025 +0x107:  mov    %eax,0x4(%esp)
081a3029 +0x10b:  lea    -0x3c(%ebp),%eax
081a302c +0x10e:  mov    %eax,(%esp)
081a302f +0x111:  call   081a4850 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x8ab>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x8ab
081a3034 +0x116:  mov    0x8(%ebp),%eax
081a3037 +0x119:  lea    0x4(%eax),%ecx
081a303a +0x11c:  lea    -0x5c(%ebp),%eax
081a303d +0x11f:  lea    -0x3c(%ebp),%edx
081a3040 +0x122:  mov    %edx,0x8(%esp)
081a3044 +0x126:  mov    %ecx,0x4(%esp)
081a3048 +0x12a:  mov    %eax,(%esp)
081a304b +0x12d:  call   081a488e <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x8e9>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x8e9
081a3050 +0x132:  sub    $0x4,%esp
081a3053 +0x135:  lea    -0x3c(%ebp),%eax
081a3056 +0x138:  mov    %eax,(%esp)
081a3059 +0x13b:  call   081a42e8 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x343>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x343
081a305e +0x140:  jmp    081a3075 <+0x157>
081a3060 +0x142:  mov    %edx,%ebx
081a3062 +0x144:  mov    %eax,%esi
081a3064 +0x146:  lea    -0x3c(%ebp),%eax
081a3067 +0x149:  mov    %eax,(%esp)
081a306a +0x14c:  call   081a42e8 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x343>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x343
081a306f +0x151:  mov    %esi,%eax
081a3071 +0x153:  mov    %ebx,%edx
081a3073 +0x155:  jmp    081a3093 <+0x175>
081a3075 +0x157:  movzbl -0x58(%ebp),%eax
081a3079 +0x15b:  xor    $0x1,%eax
081a307c +0x15e:  test   %al,%al
081a307e +0x160:  je     081a308c <+0x16e>
081a3080 +0x162:  mov    $0x122,%esi
081a3085 +0x167:  mov    $0x0,%ebx
081a308a +0x16c:  jmp    081a30ae <+0x190>
081a308c +0x16e:  mov    $0x1,%ebx
081a3091 +0x173:  jmp    081a30ae <+0x190>
081a3093 +0x175:  mov    %edx,%ebx
081a3095 +0x177:  mov    %eax,%esi
081a3097 +0x179:  lea    -0x54(%ebp),%eax
081a309a +0x17c:  mov    %eax,(%esp)
081a309d +0x17f:  call   081a429c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2f7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2f7
081a30a2 +0x184:  mov    %esi,%eax
081a30a4 +0x186:  mov    %ebx,%edx
081a30a6 +0x188:  mov    %eax,(%esp)
081a30a9 +0x18b:  call   08ae3750 <_Unwind_Resume>
081a30ae +0x190:  lea    -0x54(%ebp),%eax
081a30b1 +0x193:  mov    %eax,(%esp)
081a30b4 +0x196:  call   081a429c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2f7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2f7
081a30b9 +0x19b:  test   %ebx,%ebx
081a30bb +0x19d:  je     081a3112 <+0x1f4>
081a30bd +0x19f:  addl   $0x1,-0xc(%ebp)
081a30c1 +0x1a3:  cmpl   $0xb,-0xc(%ebp)
081a30c5 +0x1a7:  setne  %al
081a30c8 +0x1aa:  test   %al,%al
081a30ca +0x1ac:  jne    081a2f8c <+0x6e>
081a30d0 +0x1b2:  movl   $0x0,0xc(%esp)
081a30d8 +0x1ba:  movl   $0x127,0x8(%esp)
081a30e0 +0x1c2:  movl   $&_ZZN17Arad_GiftItem_Set4openEP17STStackableScriptE19__PRETTY_FUNCTION__,0x4(%esp)
081a30e8 +0x1ca:  lea    -0x28(%ebp),%eax
081a30eb +0x1cd:  mov    %eax,(%esp)
081a30ee +0x1d0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081a30f3 +0x1d5:  mov    -0x14(%ebp),%eax
081a30f6 +0x1d8:  mov    %eax,0x8(%esp)
081a30fa +0x1dc:  movl   $"[!] Arad GiftItem Loding Sucess!! Item:%d",0x4(%esp)
081a3102 +0x1e4:  lea    -0x28(%ebp),%eax
081a3105 +0x1e7:  mov    %eax,(%esp)
081a3108 +0x1ea:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081a310d +0x1ef:  mov    $0x0,%esi
081a3112 +0x1f4:  mov    %esi,%eax
081a3114 +0x1f6:  lea    -0x8(%ebp),%esp
081a3117 +0x1f9:  add    $0x0,%esp
081a311a +0x1fc:  pop    %ebx
081a311b +0x1fd:  pop    %esi
081a311c +0x1fe:  pop    %ebp
081a311d +0x1ff:  ret
```

## 反编译 C

```c
// Arad_GiftItem_Set::open @ 0x81a2f1e

/* Arad_GiftItem_Set::open(STStackableScript*) */

undefined4 __thiscall Arad_GiftItem_Set::open(Arad_GiftItem_Set *this,STStackableScript *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined4 unaff_ESI;
  bool bVar3;
  pair local_60 [4];
  char local_5c;
  undefined4 local_58;
  string asStack_54 [4];
  string asStack_50 [4];
  int local_4c;
  int local_48;
  pair<long_long_const,Arad_GiftItem_Set::Data> local_40 [20];
  cMyTrace local_2c [16];
  int local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    pcVar1 = (char *)std::string::c_str((string *)(param_1 + 0x180));
    local_1c = str_to_enum(this,pcVar1);
    if (local_1c != 0) {
      local_18 = *(undefined4 *)param_1;
      local_14 = *(uint *)(param_1 + 0x5c);
      for (local_10 = 0; local_10 != 0xb; local_10 = local_10 + 1) {
        if (param_1[local_10 + 0x38] != (STStackableScript)0x0) {
          uVar2 = local_10 * 0x10000;
          local_4c = local_14 + uVar2;
          local_48 = ((int)local_14 >> 0x1f) + local_1c + ((int)uVar2 >> 0x1f) +
                     (uint)CARRY4(local_14,uVar2);
          Data::Data((Data *)&local_58);
          local_58 = local_18;
                    /* try { // try from 081a2ffc to 081a3033 has its CatchHandler @ 081a3093 */
          std::string::operator=(asStack_54,(string *)(param_1 + 0x184));
          std::string::operator=(asStack_50,(string *)(param_1 + 0x188));
          std::pair<long_long_const,Arad_GiftItem_Set::Data>::
          pair<long_long&,Arad_GiftItem_Set::Data&>
                    (local_40,(longlong *)&local_4c,(Data *)&local_58);
                    /* try { // try from 081a304b to 081a304f has its CatchHandler @ 081a3060 */
          std::
          map<long_long,Arad_GiftItem_Set::Data,std::less<long_long>,std::allocator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>>
          ::insert(local_60);
                    /* try { // try from 081a3059 to 081a305d has its CatchHandler @ 081a3093 */
          std::pair<long_long_const,Arad_GiftItem_Set::Data>::~pair(local_40);
          bVar3 = local_5c != '\x01';
          if (bVar3) {
            unaff_ESI = 0x122;
          }
          Data::~Data((Data *)&local_58);
          if (bVar3) {
            return unaff_ESI;
          }
        }
      }
      cMyTrace::cMyTrace(local_2c,"int Arad_GiftItem_Set::open(STStackableScript*)",0x127,0);
      cMyTrace::operator()(local_2c,"[!] Arad GiftItem Loding Sucess!! Item:%d",local_18);
    }
  }
  return 0;
}
```
