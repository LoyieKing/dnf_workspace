# tokenizeNewLine

`_ZN10WideString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE`

`WideString::tokenizeNewLine(WideString const&, std::vector<WideString, std::allocator<WideString> >*)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adc0b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adc0b0  _ZN10WideString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE
#           WideString::tokenizeNewLine(WideString const&, std::vector<WideString, std::allocator<WideString> >*)
# range [0x08adc0b0, 0x08adc2f3]
08adc0b0 +0x000:  push   %ebp
08adc0b1 +0x001:  mov    %esp,%ebp
08adc0b3 +0x003:  push   %esi
08adc0b4 +0x004:  push   %ebx
08adc0b5 +0x005:  sub    $0x40,%esp
08adc0b8 +0x008:  mov    0x8(%ebp),%eax
08adc0bb +0x00b:  mov    %eax,(%esp)
08adc0be +0x00e:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adc0c3 +0x013:  mov    %eax,-0x24(%ebp)
08adc0c6 +0x016:  mov    0x8(%ebp),%eax
08adc0c9 +0x019:  mov    %eax,(%esp)
08adc0cc +0x01c:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adc0d1 +0x021:  mov    %eax,-0x20(%ebp)
08adc0d4 +0x024:  movl   $0x0,-0x1c(%ebp)
08adc0db +0x02b:  movl   $0xffffffff,-0x18(%ebp)
08adc0e2 +0x032:  movl   $0x0,-0x14(%ebp)
08adc0e9 +0x039:  movl   $0x0,-0x10(%ebp)
08adc0f0 +0x040:  jmp    08adc212 <+0x162>
08adc0f5 +0x045:  mov    -0x10(%ebp),%eax
08adc0f8 +0x048:  shl    $0x2,%eax
08adc0fb +0x04b:  add    -0x24(%ebp),%eax
08adc0fe +0x04e:  mov    (%eax),%eax
08adc100 +0x050:  mov    %eax,-0xc(%ebp)
08adc103 +0x053:  cmpl   $0xd,-0xc(%ebp)
08adc107 +0x057:  jne    08adc197 <+0xe7>
08adc10d +0x05d:  mov    -0x1c(%ebp),%eax
08adc110 +0x060:  mov    -0x10(%ebp),%edx
08adc113 +0x063:  sub    %eax,%edx
08adc115 +0x065:  lea    -0x34(%ebp),%eax
08adc118 +0x068:  mov    %edx,0xc(%esp)
08adc11c +0x06c:  mov    -0x1c(%ebp),%edx
08adc11f +0x06f:  mov    %edx,0x8(%esp)
08adc123 +0x073:  mov    0x8(%ebp),%edx
08adc126 +0x076:  mov    %edx,0x4(%esp)
08adc12a +0x07a:  mov    %eax,(%esp)
08adc12d +0x07d:  call   08adb001 <_Z3midRK10WideStringii>  ; mid(WideString const&, int, int)
08adc132 +0x082:  sub    $0x4,%esp
08adc135 +0x085:  lea    -0x34(%ebp),%eax
08adc138 +0x088:  mov    %eax,0x4(%esp)
08adc13c +0x08c:  mov    0xc(%ebp),%eax
08adc13f +0x08f:  mov    %eax,(%esp)
08adc142 +0x092:  call   08add414 <_ZN10WideString8isupunctEw+0x8c4>  ; WideString::isupunct(wchar_t)+0x8c4
08adc147 +0x097:  jmp    08adc164 <+0xb4>
08adc149 +0x099:  mov    %edx,%ebx
08adc14b +0x09b:  mov    %eax,%esi
08adc14d +0x09d:  lea    -0x34(%ebp),%eax
08adc150 +0x0a0:  mov    %eax,(%esp)
08adc153 +0x0a3:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adc158 +0x0a8:  mov    %esi,%eax
08adc15a +0x0aa:  mov    %ebx,%edx
08adc15c +0x0ac:  mov    %eax,(%esp)
08adc15f +0x0af:  call   08ae3750 <_Unwind_Resume>
08adc164 +0x0b4:  lea    -0x34(%ebp),%eax
08adc167 +0x0b7:  mov    %eax,(%esp)
08adc16a +0x0ba:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adc16f +0x0bf:  mov    -0x10(%ebp),%eax
08adc172 +0x0c2:  add    $0x1,%eax
08adc175 +0x0c5:  shl    $0x2,%eax
08adc178 +0x0c8:  add    -0x24(%ebp),%eax
08adc17b +0x0cb:  mov    (%eax),%eax
08adc17d +0x0cd:  cmp    $0xa,%eax
08adc180 +0x0d0:  jne    08adc186 <+0xd6>
08adc182 +0x0d2:  addl   $0x1,-0x10(%ebp)
08adc186 +0x0d6:  mov    -0x10(%ebp),%eax
08adc189 +0x0d9:  add    $0x1,%eax
08adc18c +0x0dc:  mov    %eax,-0x1c(%ebp)
08adc18f +0x0df:  mov    -0x10(%ebp),%eax
08adc192 +0x0e2:  mov    %eax,-0x18(%ebp)
08adc195 +0x0e5:  jmp    08adc20e <+0x15e>
08adc197 +0x0e7:  cmpl   $0xa,-0xc(%ebp)
08adc19b +0x0eb:  jne    08adc20e <+0x15e>
08adc19d +0x0ed:  mov    -0x1c(%ebp),%eax
08adc1a0 +0x0f0:  mov    -0x10(%ebp),%edx
08adc1a3 +0x0f3:  sub    %eax,%edx
08adc1a5 +0x0f5:  lea    -0x30(%ebp),%eax
08adc1a8 +0x0f8:  mov    %edx,0xc(%esp)
08adc1ac +0x0fc:  mov    -0x1c(%ebp),%edx
08adc1af +0x0ff:  mov    %edx,0x8(%esp)
08adc1b3 +0x103:  mov    0x8(%ebp),%edx
08adc1b6 +0x106:  mov    %edx,0x4(%esp)
08adc1ba +0x10a:  mov    %eax,(%esp)
08adc1bd +0x10d:  call   08adb001 <_Z3midRK10WideStringii>  ; mid(WideString const&, int, int)
08adc1c2 +0x112:  sub    $0x4,%esp
08adc1c5 +0x115:  lea    -0x30(%ebp),%eax
08adc1c8 +0x118:  mov    %eax,0x4(%esp)
08adc1cc +0x11c:  mov    0xc(%ebp),%eax
08adc1cf +0x11f:  mov    %eax,(%esp)
08adc1d2 +0x122:  call   08add414 <_ZN10WideString8isupunctEw+0x8c4>  ; WideString::isupunct(wchar_t)+0x8c4
08adc1d7 +0x127:  jmp    08adc1f4 <+0x144>
08adc1d9 +0x129:  mov    %edx,%ebx
08adc1db +0x12b:  mov    %eax,%esi
08adc1dd +0x12d:  lea    -0x30(%ebp),%eax
08adc1e0 +0x130:  mov    %eax,(%esp)
08adc1e3 +0x133:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adc1e8 +0x138:  mov    %esi,%eax
08adc1ea +0x13a:  mov    %ebx,%edx
08adc1ec +0x13c:  mov    %eax,(%esp)
08adc1ef +0x13f:  call   08ae3750 <_Unwind_Resume>
08adc1f4 +0x144:  lea    -0x30(%ebp),%eax
08adc1f7 +0x147:  mov    %eax,(%esp)
08adc1fa +0x14a:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adc1ff +0x14f:  mov    -0x10(%ebp),%eax
08adc202 +0x152:  add    $0x1,%eax
08adc205 +0x155:  mov    %eax,-0x1c(%ebp)
08adc208 +0x158:  mov    -0x10(%ebp),%eax
08adc20b +0x15b:  mov    %eax,-0x18(%ebp)
08adc20e +0x15e:  addl   $0x1,-0x10(%ebp)
08adc212 +0x162:  mov    -0x10(%ebp),%eax
08adc215 +0x165:  cmp    -0x20(%ebp),%eax
08adc218 +0x168:  setl   %al
08adc21b +0x16b:  test   %al,%al
08adc21d +0x16d:  jne    08adc0f5 <+0x45>
08adc223 +0x173:  mov    -0x1c(%ebp),%eax
08adc226 +0x176:  cmp    -0x20(%ebp),%eax
08adc229 +0x179:  je     08adc293 <+0x1e3>
08adc22b +0x17b:  mov    -0x1c(%ebp),%eax
08adc22e +0x17e:  mov    -0x20(%ebp),%edx
08adc231 +0x181:  sub    %eax,%edx
08adc233 +0x183:  lea    -0x2c(%ebp),%eax
08adc236 +0x186:  mov    %edx,0xc(%esp)
08adc23a +0x18a:  mov    -0x1c(%ebp),%edx
08adc23d +0x18d:  mov    %edx,0x8(%esp)
08adc241 +0x191:  mov    0x8(%ebp),%edx
08adc244 +0x194:  mov    %edx,0x4(%esp)
08adc248 +0x198:  mov    %eax,(%esp)
08adc24b +0x19b:  call   08adb001 <_Z3midRK10WideStringii>  ; mid(WideString const&, int, int)
08adc250 +0x1a0:  sub    $0x4,%esp
08adc253 +0x1a3:  lea    -0x2c(%ebp),%eax
08adc256 +0x1a6:  mov    %eax,0x4(%esp)
08adc25a +0x1aa:  mov    0xc(%ebp),%eax
08adc25d +0x1ad:  mov    %eax,(%esp)
08adc260 +0x1b0:  call   08add414 <_ZN10WideString8isupunctEw+0x8c4>  ; WideString::isupunct(wchar_t)+0x8c4
08adc265 +0x1b5:  jmp    08adc282 <+0x1d2>
08adc267 +0x1b7:  mov    %edx,%ebx
08adc269 +0x1b9:  mov    %eax,%esi
08adc26b +0x1bb:  lea    -0x2c(%ebp),%eax
08adc26e +0x1be:  mov    %eax,(%esp)
08adc271 +0x1c1:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adc276 +0x1c6:  mov    %esi,%eax
08adc278 +0x1c8:  mov    %ebx,%edx
08adc27a +0x1ca:  mov    %eax,(%esp)
08adc27d +0x1cd:  call   08ae3750 <_Unwind_Resume>
08adc282 +0x1d2:  lea    -0x2c(%ebp),%eax
08adc285 +0x1d5:  mov    %eax,(%esp)
08adc288 +0x1d8:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adc28d +0x1dd:  addl   $0x1,-0x14(%ebp)
08adc291 +0x1e1:  jmp    08adc2e7 <+0x237>
08adc293 +0x1e3:  mov    -0x20(%ebp),%eax
08adc296 +0x1e6:  sub    $0x1,%eax
08adc299 +0x1e9:  cmp    -0x18(%ebp),%eax
08adc29c +0x1ec:  jne    08adc2e7 <+0x237>
08adc29e +0x1ee:  lea    -0x28(%ebp),%eax
08adc2a1 +0x1f1:  mov    %eax,(%esp)
08adc2a4 +0x1f4:  call   08ad99fe <_ZN10WideStringC1Ev>  ; WideString::WideString()
08adc2a9 +0x1f9:  lea    -0x28(%ebp),%eax
08adc2ac +0x1fc:  mov    %eax,0x4(%esp)
08adc2b0 +0x200:  mov    0xc(%ebp),%eax
08adc2b3 +0x203:  mov    %eax,(%esp)
08adc2b6 +0x206:  call   08add414 <_ZN10WideString8isupunctEw+0x8c4>  ; WideString::isupunct(wchar_t)+0x8c4
08adc2bb +0x20b:  jmp    08adc2d8 <+0x228>
08adc2bd +0x20d:  mov    %edx,%ebx
08adc2bf +0x20f:  mov    %eax,%esi
08adc2c1 +0x211:  lea    -0x28(%ebp),%eax
08adc2c4 +0x214:  mov    %eax,(%esp)
08adc2c7 +0x217:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adc2cc +0x21c:  mov    %esi,%eax
08adc2ce +0x21e:  mov    %ebx,%edx
08adc2d0 +0x220:  mov    %eax,(%esp)
08adc2d3 +0x223:  call   08ae3750 <_Unwind_Resume>
08adc2d8 +0x228:  lea    -0x28(%ebp),%eax
08adc2db +0x22b:  mov    %eax,(%esp)
08adc2de +0x22e:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08adc2e3 +0x233:  addl   $0x1,-0x14(%ebp)
08adc2e7 +0x237:  mov    -0x14(%ebp),%eax
08adc2ea +0x23a:  lea    -0x8(%ebp),%esp
08adc2ed +0x23d:  add    $0x0,%esp
08adc2f0 +0x240:  pop    %ebx
08adc2f1 +0x241:  pop    %esi
08adc2f2 +0x242:  pop    %ebp
08adc2f3 +0x243:  ret
```

## 反编译 C

```c
// WideString::tokenizeNewLine @ 0x8adc0b0

int32 WideString::tokenizeNewLine
                (WideString *str,vector<WideString,_std::allocator<WideString>_> *tokenVector)

{
  WideString *pWVar1;
  WideString local_38;
  WideString local_34;
  WideString local_30;
  WideString local_2c;
  wchar *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
                    /* Unresolved local var: wchar * strBuf@[???]
                       Unresolved local var: int32 strLen@[???]
                       Unresolved local var: int32 nextStartIdx@[???]
                       Unresolved local var: int32 lastNewLineIdx@[???]
                       Unresolved local var: int32 tokenCount@[???] */
  local_28 = c_str(str);
  local_24 = length(str);
  local_20 = 0;
  local_1c = -1;
  local_18 = 0;
                    /* Unresolved local var: int32 i@[???] */
  for (local_14 = 0; local_14 < local_24; local_14 = local_14 + 1) {
                    /* Unresolved local var: wchar c@[???] */
    local_10 = local_28[local_14];
    if (local_10 == 0xd) {
      mid(&local_38,str,local_20,local_14 - local_20);
      pWVar1 = &local_38;
                    /* try { // try from 08adc142 to 08adc146 has its CatchHandler @ 08adc149 */
      std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar1);
      ~WideString(&local_38,(int)pWVar1);
      if (local_28[local_14 + 1] == 10) {
        local_14 = local_14 + 1;
      }
      local_20 = local_14 + 1;
      local_1c = local_14;
    }
    else if (local_10 == 10) {
      mid(&local_34,str,local_20,local_14 - local_20);
      pWVar1 = &local_34;
                    /* try { // try from 08adc1d2 to 08adc1d6 has its CatchHandler @ 08adc1d9 */
      std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar1);
      ~WideString(&local_34,(int)pWVar1);
      local_20 = local_14 + 1;
      local_1c = local_14;
    }
  }
  if (local_20 == local_24) {
    if (local_24 + -1 == local_1c) {
      WideString(&local_2c);
      pWVar1 = &local_2c;
                    /* try { // try from 08adc2b6 to 08adc2ba has its CatchHandler @ 08adc2bd */
      std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar1);
      ~WideString(&local_2c,(int)pWVar1);
      local_18 = local_18 + 1;
    }
  }
  else {
    mid(&local_30,str,local_20,local_24 - local_20);
    pWVar1 = &local_30;
                    /* try { // try from 08adc260 to 08adc264 has its CatchHandler @ 08adc267 */
    std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar1);
    ~WideString(&local_30,(int)pWVar1);
    local_18 = local_18 + 1;
  }
  return local_18;
}
```
