# tokenizeNewLine

`_ZN10CharString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE`

`CharString::tokenizeNewLine(CharString const&, std::vector<CharString, std::allocator<CharString> >*)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad8fce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad8fce  _ZN10CharString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE
#           CharString::tokenizeNewLine(CharString const&, std::vector<CharString, std::allocator<CharString> >*)
# range [0x08ad8fce, 0x08ad920d]
08ad8fce +0x000:  push   %ebp
08ad8fcf +0x001:  mov    %esp,%ebp
08ad8fd1 +0x003:  push   %esi
08ad8fd2 +0x004:  push   %ebx
08ad8fd3 +0x005:  sub    $0x40,%esp
08ad8fd6 +0x008:  mov    0x8(%ebp),%eax
08ad8fd9 +0x00b:  mov    %eax,(%esp)
08ad8fdc +0x00e:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad8fe1 +0x013:  mov    %eax,-0x24(%ebp)
08ad8fe4 +0x016:  mov    0x8(%ebp),%eax
08ad8fe7 +0x019:  mov    %eax,(%esp)
08ad8fea +0x01c:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad8fef +0x021:  mov    %eax,-0x20(%ebp)
08ad8ff2 +0x024:  movl   $0x0,-0x1c(%ebp)
08ad8ff9 +0x02b:  movl   $0xffffffff,-0x18(%ebp)
08ad9000 +0x032:  movl   $0x0,-0x14(%ebp)
08ad9007 +0x039:  movl   $0x0,-0x10(%ebp)
08ad900e +0x040:  jmp    08ad912b <+0x15d>
08ad9013 +0x045:  mov    -0x10(%ebp),%eax
08ad9016 +0x048:  add    -0x24(%ebp),%eax
08ad9019 +0x04b:  movzbl (%eax),%eax
08ad901c +0x04e:  mov    %al,-0x9(%ebp)
08ad901f +0x051:  cmpb   $0xd,-0x9(%ebp)
08ad9023 +0x055:  jne    08ad90b0 <+0xe2>
08ad9029 +0x05b:  mov    -0x1c(%ebp),%eax
08ad902c +0x05e:  mov    -0x10(%ebp),%edx
08ad902f +0x061:  sub    %eax,%edx
08ad9031 +0x063:  lea    -0x34(%ebp),%eax
08ad9034 +0x066:  mov    %edx,0xc(%esp)
08ad9038 +0x06a:  mov    -0x1c(%ebp),%edx
08ad903b +0x06d:  mov    %edx,0x8(%esp)
08ad903f +0x071:  mov    0x8(%ebp),%edx
08ad9042 +0x074:  mov    %edx,0x4(%esp)
08ad9046 +0x078:  mov    %eax,(%esp)
08ad9049 +0x07b:  call   08ad7f50 <_Z3midRK10CharStringii>  ; mid(CharString const&, int, int)
08ad904e +0x080:  sub    $0x4,%esp
08ad9051 +0x083:  lea    -0x34(%ebp),%eax
08ad9054 +0x086:  mov    %eax,0x4(%esp)
08ad9058 +0x08a:  mov    0xc(%ebp),%eax
08ad905b +0x08d:  mov    %eax,(%esp)
08ad905e +0x090:  call   08add2d0 <_ZN10WideString8isupunctEw+0x780>  ; WideString::isupunct(wchar_t)+0x780
08ad9063 +0x095:  jmp    08ad9080 <+0xb2>
08ad9065 +0x097:  mov    %edx,%ebx
08ad9067 +0x099:  mov    %eax,%esi
08ad9069 +0x09b:  lea    -0x34(%ebp),%eax
08ad906c +0x09e:  mov    %eax,(%esp)
08ad906f +0x0a1:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad9074 +0x0a6:  mov    %esi,%eax
08ad9076 +0x0a8:  mov    %ebx,%edx
08ad9078 +0x0aa:  mov    %eax,(%esp)
08ad907b +0x0ad:  call   08ae3750 <_Unwind_Resume>
08ad9080 +0x0b2:  lea    -0x34(%ebp),%eax
08ad9083 +0x0b5:  mov    %eax,(%esp)
08ad9086 +0x0b8:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad908b +0x0bd:  mov    -0x10(%ebp),%eax
08ad908e +0x0c0:  add    $0x1,%eax
08ad9091 +0x0c3:  add    -0x24(%ebp),%eax
08ad9094 +0x0c6:  movzbl (%eax),%eax
08ad9097 +0x0c9:  cmp    $0xa,%al
08ad9099 +0x0cb:  jne    08ad909f <+0xd1>
08ad909b +0x0cd:  addl   $0x1,-0x10(%ebp)
08ad909f +0x0d1:  mov    -0x10(%ebp),%eax
08ad90a2 +0x0d4:  add    $0x1,%eax
08ad90a5 +0x0d7:  mov    %eax,-0x1c(%ebp)
08ad90a8 +0x0da:  mov    -0x10(%ebp),%eax
08ad90ab +0x0dd:  mov    %eax,-0x18(%ebp)
08ad90ae +0x0e0:  jmp    08ad9127 <+0x159>
08ad90b0 +0x0e2:  cmpb   $0xa,-0x9(%ebp)
08ad90b4 +0x0e6:  jne    08ad9127 <+0x159>
08ad90b6 +0x0e8:  mov    -0x1c(%ebp),%eax
08ad90b9 +0x0eb:  mov    -0x10(%ebp),%edx
08ad90bc +0x0ee:  sub    %eax,%edx
08ad90be +0x0f0:  lea    -0x30(%ebp),%eax
08ad90c1 +0x0f3:  mov    %edx,0xc(%esp)
08ad90c5 +0x0f7:  mov    -0x1c(%ebp),%edx
08ad90c8 +0x0fa:  mov    %edx,0x8(%esp)
08ad90cc +0x0fe:  mov    0x8(%ebp),%edx
08ad90cf +0x101:  mov    %edx,0x4(%esp)
08ad90d3 +0x105:  mov    %eax,(%esp)
08ad90d6 +0x108:  call   08ad7f50 <_Z3midRK10CharStringii>  ; mid(CharString const&, int, int)
08ad90db +0x10d:  sub    $0x4,%esp
08ad90de +0x110:  lea    -0x30(%ebp),%eax
08ad90e1 +0x113:  mov    %eax,0x4(%esp)
08ad90e5 +0x117:  mov    0xc(%ebp),%eax
08ad90e8 +0x11a:  mov    %eax,(%esp)
08ad90eb +0x11d:  call   08add2d0 <_ZN10WideString8isupunctEw+0x780>  ; WideString::isupunct(wchar_t)+0x780
08ad90f0 +0x122:  jmp    08ad910d <+0x13f>
08ad90f2 +0x124:  mov    %edx,%ebx
08ad90f4 +0x126:  mov    %eax,%esi
08ad90f6 +0x128:  lea    -0x30(%ebp),%eax
08ad90f9 +0x12b:  mov    %eax,(%esp)
08ad90fc +0x12e:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad9101 +0x133:  mov    %esi,%eax
08ad9103 +0x135:  mov    %ebx,%edx
08ad9105 +0x137:  mov    %eax,(%esp)
08ad9108 +0x13a:  call   08ae3750 <_Unwind_Resume>
08ad910d +0x13f:  lea    -0x30(%ebp),%eax
08ad9110 +0x142:  mov    %eax,(%esp)
08ad9113 +0x145:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad9118 +0x14a:  mov    -0x10(%ebp),%eax
08ad911b +0x14d:  add    $0x1,%eax
08ad911e +0x150:  mov    %eax,-0x1c(%ebp)
08ad9121 +0x153:  mov    -0x10(%ebp),%eax
08ad9124 +0x156:  mov    %eax,-0x18(%ebp)
08ad9127 +0x159:  addl   $0x1,-0x10(%ebp)
08ad912b +0x15d:  mov    -0x10(%ebp),%eax
08ad912e +0x160:  cmp    -0x20(%ebp),%eax
08ad9131 +0x163:  setl   %al
08ad9134 +0x166:  test   %al,%al
08ad9136 +0x168:  jne    08ad9013 <+0x45>
08ad913c +0x16e:  mov    -0x1c(%ebp),%eax
08ad913f +0x171:  cmp    -0x20(%ebp),%eax
08ad9142 +0x174:  je     08ad91ac <+0x1de>
08ad9144 +0x176:  mov    -0x1c(%ebp),%eax
08ad9147 +0x179:  mov    -0x20(%ebp),%edx
08ad914a +0x17c:  sub    %eax,%edx
08ad914c +0x17e:  lea    -0x2c(%ebp),%eax
08ad914f +0x181:  mov    %edx,0xc(%esp)
08ad9153 +0x185:  mov    -0x1c(%ebp),%edx
08ad9156 +0x188:  mov    %edx,0x8(%esp)
08ad915a +0x18c:  mov    0x8(%ebp),%edx
08ad915d +0x18f:  mov    %edx,0x4(%esp)
08ad9161 +0x193:  mov    %eax,(%esp)
08ad9164 +0x196:  call   08ad7f50 <_Z3midRK10CharStringii>  ; mid(CharString const&, int, int)
08ad9169 +0x19b:  sub    $0x4,%esp
08ad916c +0x19e:  lea    -0x2c(%ebp),%eax
08ad916f +0x1a1:  mov    %eax,0x4(%esp)
08ad9173 +0x1a5:  mov    0xc(%ebp),%eax
08ad9176 +0x1a8:  mov    %eax,(%esp)
08ad9179 +0x1ab:  call   08add2d0 <_ZN10WideString8isupunctEw+0x780>  ; WideString::isupunct(wchar_t)+0x780
08ad917e +0x1b0:  jmp    08ad919b <+0x1cd>
08ad9180 +0x1b2:  mov    %edx,%ebx
08ad9182 +0x1b4:  mov    %eax,%esi
08ad9184 +0x1b6:  lea    -0x2c(%ebp),%eax
08ad9187 +0x1b9:  mov    %eax,(%esp)
08ad918a +0x1bc:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad918f +0x1c1:  mov    %esi,%eax
08ad9191 +0x1c3:  mov    %ebx,%edx
08ad9193 +0x1c5:  mov    %eax,(%esp)
08ad9196 +0x1c8:  call   08ae3750 <_Unwind_Resume>
08ad919b +0x1cd:  lea    -0x2c(%ebp),%eax
08ad919e +0x1d0:  mov    %eax,(%esp)
08ad91a1 +0x1d3:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad91a6 +0x1d8:  addl   $0x1,-0x14(%ebp)
08ad91aa +0x1dc:  jmp    08ad9200 <+0x232>
08ad91ac +0x1de:  mov    -0x20(%ebp),%eax
08ad91af +0x1e1:  sub    $0x1,%eax
08ad91b2 +0x1e4:  cmp    -0x18(%ebp),%eax
08ad91b5 +0x1e7:  jne    08ad9200 <+0x232>
08ad91b7 +0x1e9:  lea    -0x28(%ebp),%eax
08ad91ba +0x1ec:  mov    %eax,(%esp)
08ad91bd +0x1ef:  call   08ad69aa <_ZN10CharStringC1Ev>  ; CharString::CharString()
08ad91c2 +0x1f4:  lea    -0x28(%ebp),%eax
08ad91c5 +0x1f7:  mov    %eax,0x4(%esp)
08ad91c9 +0x1fb:  mov    0xc(%ebp),%eax
08ad91cc +0x1fe:  mov    %eax,(%esp)
08ad91cf +0x201:  call   08add2d0 <_ZN10WideString8isupunctEw+0x780>  ; WideString::isupunct(wchar_t)+0x780
08ad91d4 +0x206:  jmp    08ad91f1 <+0x223>
08ad91d6 +0x208:  mov    %edx,%ebx
08ad91d8 +0x20a:  mov    %eax,%esi
08ad91da +0x20c:  lea    -0x28(%ebp),%eax
08ad91dd +0x20f:  mov    %eax,(%esp)
08ad91e0 +0x212:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad91e5 +0x217:  mov    %esi,%eax
08ad91e7 +0x219:  mov    %ebx,%edx
08ad91e9 +0x21b:  mov    %eax,(%esp)
08ad91ec +0x21e:  call   08ae3750 <_Unwind_Resume>
08ad91f1 +0x223:  lea    -0x28(%ebp),%eax
08ad91f4 +0x226:  mov    %eax,(%esp)
08ad91f7 +0x229:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad91fc +0x22e:  addl   $0x1,-0x14(%ebp)
08ad9200 +0x232:  mov    -0x14(%ebp),%eax
08ad9203 +0x235:  lea    -0x8(%ebp),%esp
08ad9206 +0x238:  add    $0x0,%esp
08ad9209 +0x23b:  pop    %ebx
08ad920a +0x23c:  pop    %esi
08ad920b +0x23d:  pop    %ebp
08ad920c +0x23e:  ret
08ad920d +0x23f:  nop
```

## 反编译 C

```c
// CharString::tokenizeNewLine @ 0x8ad8fce

int32 CharString::tokenizeNewLine
                (CharString *str,vector<CharString,_std::allocator<CharString>_> *tokenVector)

{
  CharString *pCVar1;
  CharString local_38;
  CharString local_34;
  CharString local_30;
  CharString local_2c;
  char *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char local_d;
  
                    /* Unresolved local var: char * strBuf@[???]
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
                    /* Unresolved local var: char c@[???] */
    local_d = local_28[local_14];
    if (local_d == '\r') {
      mid(&local_38,str,local_20,local_14 - local_20);
      pCVar1 = &local_38;
                    /* try { // try from 08ad905e to 08ad9062 has its CatchHandler @ 08ad9065 */
      std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar1);
      ~CharString(&local_38,(int)pCVar1);
      if (local_28[local_14 + 1] == '\n') {
        local_14 = local_14 + 1;
      }
      local_20 = local_14 + 1;
      local_1c = local_14;
    }
    else if (local_d == '\n') {
      mid(&local_34,str,local_20,local_14 - local_20);
      pCVar1 = &local_34;
                    /* try { // try from 08ad90eb to 08ad90ef has its CatchHandler @ 08ad90f2 */
      std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar1);
      ~CharString(&local_34,(int)pCVar1);
      local_20 = local_14 + 1;
      local_1c = local_14;
    }
  }
  if (local_20 == local_24) {
    if (local_24 + -1 == local_1c) {
      CharString(&local_2c);
      pCVar1 = &local_2c;
                    /* try { // try from 08ad91cf to 08ad91d3 has its CatchHandler @ 08ad91d6 */
      std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar1);
      ~CharString(&local_2c,(int)pCVar1);
      local_18 = local_18 + 1;
    }
  }
  else {
    mid(&local_30,str,local_20,local_24 - local_20);
    pCVar1 = &local_30;
                    /* try { // try from 08ad9179 to 08ad917d has its CatchHandler @ 08ad9180 */
    std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar1);
    ~CharString(&local_30,(int)pCVar1);
    local_18 = local_18 + 1;
  }
  return local_18;
}
```
