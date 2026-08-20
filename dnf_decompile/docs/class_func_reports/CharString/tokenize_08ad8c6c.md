# tokenize

`_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b`

`CharString::tokenize(CharString const&, std::vector<CharString, std::allocator<CharString> >*, char const*, char const*, bool)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad8c6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad8c6c  _ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b
#           CharString::tokenize(CharString const&, std::vector<CharString, std::allocator<CharString> >*, char const*, char const*, bool)
# range [0x08ad8c6c, 0x08ad8fcd]
08ad8c6c +0x000:  push   %ebp
08ad8c6d +0x001:  mov    %esp,%ebp
08ad8c6f +0x003:  push   %esi
08ad8c70 +0x004:  push   %ebx
08ad8c71 +0x005:  sub    $0x60,%esp
08ad8c74 +0x008:  mov    0x18(%ebp),%eax
08ad8c77 +0x00b:  mov    %al,-0x4c(%ebp)
08ad8c7a +0x00e:  mov    0x8(%ebp),%eax
08ad8c7d +0x011:  mov    %eax,(%esp)
08ad8c80 +0x014:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad8c85 +0x019:  mov    %eax,-0x30(%ebp)
08ad8c88 +0x01c:  mov    0x8(%ebp),%eax
08ad8c8b +0x01f:  mov    %eax,(%esp)
08ad8c8e +0x022:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad8c93 +0x027:  mov    %eax,-0x2c(%ebp)
08ad8c96 +0x02a:  movl   $0x0,-0x28(%ebp)
08ad8c9d +0x031:  movl   $0x0,-0x24(%ebp)
08ad8ca4 +0x038:  movl   $0x0,-0x20(%ebp)
08ad8cab +0x03f:  jmp    08ad8f41 <+0x2d5>
08ad8cb0 +0x044:  mov    -0x20(%ebp),%eax
08ad8cb3 +0x047:  add    -0x30(%ebp),%eax
08ad8cb6 +0x04a:  movzbl (%eax),%eax
08ad8cb9 +0x04d:  mov    %al,-0x19(%ebp)
08ad8cbc +0x050:  mov    0x10(%ebp),%eax
08ad8cbf +0x053:  mov    %eax,-0x18(%ebp)
08ad8cc2 +0x056:  jmp    08ad8cc8 <+0x5c>
08ad8cc4 +0x058:  addl   $0x1,-0x18(%ebp)
08ad8cc8 +0x05c:  mov    -0x18(%ebp),%eax
08ad8ccb +0x05f:  movzbl (%eax),%eax
08ad8cce +0x062:  test   %al,%al
08ad8cd0 +0x064:  je     08ad8ce4 <+0x78>
08ad8cd2 +0x066:  mov    -0x18(%ebp),%eax
08ad8cd5 +0x069:  movzbl (%eax),%eax
08ad8cd8 +0x06c:  cmp    -0x19(%ebp),%al
08ad8cdb +0x06f:  je     08ad8ce4 <+0x78>
08ad8cdd +0x071:  mov    $0x1,%eax
08ad8ce2 +0x076:  jmp    08ad8ce9 <+0x7d>
08ad8ce4 +0x078:  mov    $0x0,%eax
08ad8ce9 +0x07d:  test   %al,%al
08ad8ceb +0x07f:  jne    08ad8cc4 <+0x58>
08ad8ced +0x081:  mov    -0x18(%ebp),%eax
08ad8cf0 +0x084:  movzbl (%eax),%eax
08ad8cf3 +0x087:  test   %al,%al
08ad8cf5 +0x089:  je     08ad8dd4 <+0x168>
08ad8cfb +0x08f:  mov    -0x28(%ebp),%eax
08ad8cfe +0x092:  mov    -0x20(%ebp),%edx
08ad8d01 +0x095:  mov    %edx,%ecx
08ad8d03 +0x097:  sub    %eax,%ecx
08ad8d05 +0x099:  mov    %ecx,%eax
08ad8d07 +0x09b:  mov    %eax,-0x10(%ebp)
08ad8d0a +0x09e:  cmpl   $0x0,-0x10(%ebp)
08ad8d0e +0x0a2:  jne    08ad8d65 <+0xf9>
08ad8d10 +0x0a4:  cmpb   $0x0,-0x4c(%ebp)
08ad8d14 +0x0a8:  je     08ad8dc6 <+0x15a>
08ad8d1a +0x0ae:  lea    -0x48(%ebp),%eax
08ad8d1d +0x0b1:  mov    %eax,(%esp)
08ad8d20 +0x0b4:  call   08ad69aa <_ZN10CharStringC1Ev>  ; CharString::CharString()
08ad8d25 +0x0b9:  lea    -0x48(%ebp),%eax
08ad8d28 +0x0bc:  mov    %eax,0x4(%esp)
08ad8d2c +0x0c0:  mov    0xc(%ebp),%eax
08ad8d2f +0x0c3:  mov    %eax,(%esp)
08ad8d32 +0x0c6:  call   08add2d0 <_ZN10WideString8isupunctEw+0x780>  ; WideString::isupunct(wchar_t)+0x780
08ad8d37 +0x0cb:  jmp    08ad8d54 <+0xe8>
08ad8d39 +0x0cd:  mov    %edx,%ebx
08ad8d3b +0x0cf:  mov    %eax,%esi
08ad8d3d +0x0d1:  lea    -0x48(%ebp),%eax
08ad8d40 +0x0d4:  mov    %eax,(%esp)
08ad8d43 +0x0d7:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad8d48 +0x0dc:  mov    %esi,%eax
08ad8d4a +0x0de:  mov    %ebx,%edx
08ad8d4c +0x0e0:  mov    %eax,(%esp)
08ad8d4f +0x0e3:  call   08ae3750 <_Unwind_Resume>
08ad8d54 +0x0e8:  lea    -0x48(%ebp),%eax
08ad8d57 +0x0eb:  mov    %eax,(%esp)
08ad8d5a +0x0ee:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad8d5f +0x0f3:  addl   $0x1,-0x24(%ebp)
08ad8d63 +0x0f7:  jmp    08ad8dc6 <+0x15a>
08ad8d65 +0x0f9:  lea    -0x44(%ebp),%eax
08ad8d68 +0x0fc:  mov    -0x10(%ebp),%edx
08ad8d6b +0x0ff:  mov    %edx,0xc(%esp)
08ad8d6f +0x103:  mov    -0x28(%ebp),%edx
08ad8d72 +0x106:  mov    %edx,0x8(%esp)
08ad8d76 +0x10a:  mov    0x8(%ebp),%edx
08ad8d79 +0x10d:  mov    %edx,0x4(%esp)
08ad8d7d +0x111:  mov    %eax,(%esp)
08ad8d80 +0x114:  call   08ad7f50 <_Z3midRK10CharStringii>  ; mid(CharString const&, int, int)
08ad8d85 +0x119:  sub    $0x4,%esp
08ad8d88 +0x11c:  lea    -0x44(%ebp),%eax
08ad8d8b +0x11f:  mov    %eax,0x4(%esp)
08ad8d8f +0x123:  mov    0xc(%ebp),%eax
08ad8d92 +0x126:  mov    %eax,(%esp)
08ad8d95 +0x129:  call   08add2d0 <_ZN10WideString8isupunctEw+0x780>  ; WideString::isupunct(wchar_t)+0x780
08ad8d9a +0x12e:  jmp    08ad8db7 <+0x14b>
08ad8d9c +0x130:  mov    %edx,%ebx
08ad8d9e +0x132:  mov    %eax,%esi
08ad8da0 +0x134:  lea    -0x44(%ebp),%eax
08ad8da3 +0x137:  mov    %eax,(%esp)
08ad8da6 +0x13a:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad8dab +0x13f:  mov    %esi,%eax
08ad8dad +0x141:  mov    %ebx,%edx
08ad8daf +0x143:  mov    %eax,(%esp)
08ad8db2 +0x146:  call   08ae3750 <_Unwind_Resume>
08ad8db7 +0x14b:  lea    -0x44(%ebp),%eax
08ad8dba +0x14e:  mov    %eax,(%esp)
08ad8dbd +0x151:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad8dc2 +0x156:  addl   $0x1,-0x24(%ebp)
08ad8dc6 +0x15a:  mov    -0x20(%ebp),%eax
08ad8dc9 +0x15d:  add    $0x1,%eax
08ad8dcc +0x160:  mov    %eax,-0x28(%ebp)
08ad8dcf +0x163:  jmp    08ad8f3d <+0x2d1>
08ad8dd4 +0x168:  mov    0x14(%ebp),%eax
08ad8dd7 +0x16b:  mov    %eax,-0x14(%ebp)
08ad8dda +0x16e:  jmp    08ad8de0 <+0x174>
08ad8ddc +0x170:  addl   $0x1,-0x14(%ebp)
08ad8de0 +0x174:  mov    -0x14(%ebp),%eax
08ad8de3 +0x177:  movzbl (%eax),%eax
08ad8de6 +0x17a:  test   %al,%al
08ad8de8 +0x17c:  je     08ad8dfc <+0x190>
08ad8dea +0x17e:  mov    -0x14(%ebp),%eax
08ad8ded +0x181:  movzbl (%eax),%eax
08ad8df0 +0x184:  cmp    -0x19(%ebp),%al
08ad8df3 +0x187:  je     08ad8dfc <+0x190>
08ad8df5 +0x189:  mov    $0x1,%eax
08ad8dfa +0x18e:  jmp    08ad8e01 <+0x195>
08ad8dfc +0x190:  mov    $0x0,%eax
08ad8e01 +0x195:  test   %al,%al
08ad8e03 +0x197:  jne    08ad8ddc <+0x170>
08ad8e05 +0x199:  mov    -0x14(%ebp),%eax
08ad8e08 +0x19c:  movzbl (%eax),%eax
08ad8e0b +0x19f:  test   %al,%al
08ad8e0d +0x1a1:  je     08ad8f3d <+0x2d1>
08ad8e13 +0x1a7:  mov    -0x28(%ebp),%eax
08ad8e16 +0x1aa:  mov    -0x20(%ebp),%edx
08ad8e19 +0x1ad:  mov    %edx,%ecx
08ad8e1b +0x1af:  sub    %eax,%ecx
08ad8e1d +0x1b1:  mov    %ecx,%eax
08ad8e1f +0x1b3:  mov    %eax,-0xc(%ebp)
08ad8e22 +0x1b6:  cmpl   $0x0,-0xc(%ebp)
08ad8e26 +0x1ba:  jne    08ad8e7d <+0x211>
08ad8e28 +0x1bc:  cmpb   $0x0,-0x4c(%ebp)
08ad8e2c +0x1c0:  je     08ad8ede <+0x272>
08ad8e32 +0x1c6:  lea    -0x40(%ebp),%eax
08ad8e35 +0x1c9:  mov    %eax,(%esp)
08ad8e38 +0x1cc:  call   08ad69aa <_ZN10CharStringC1Ev>  ; CharString::CharString()
08ad8e3d +0x1d1:  lea    -0x40(%ebp),%eax
08ad8e40 +0x1d4:  mov    %eax,0x4(%esp)
08ad8e44 +0x1d8:  mov    0xc(%ebp),%eax
08ad8e47 +0x1db:  mov    %eax,(%esp)
08ad8e4a +0x1de:  call   08add2d0 <_ZN10WideString8isupunctEw+0x780>  ; WideString::isupunct(wchar_t)+0x780
08ad8e4f +0x1e3:  jmp    08ad8e6c <+0x200>
08ad8e51 +0x1e5:  mov    %edx,%ebx
08ad8e53 +0x1e7:  mov    %eax,%esi
08ad8e55 +0x1e9:  lea    -0x40(%ebp),%eax
08ad8e58 +0x1ec:  mov    %eax,(%esp)
08ad8e5b +0x1ef:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad8e60 +0x1f4:  mov    %esi,%eax
08ad8e62 +0x1f6:  mov    %ebx,%edx
08ad8e64 +0x1f8:  mov    %eax,(%esp)
08ad8e67 +0x1fb:  call   08ae3750 <_Unwind_Resume>
08ad8e6c +0x200:  lea    -0x40(%ebp),%eax
08ad8e6f +0x203:  mov    %eax,(%esp)
08ad8e72 +0x206:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad8e77 +0x20b:  addl   $0x1,-0x24(%ebp)
08ad8e7b +0x20f:  jmp    08ad8ede <+0x272>
08ad8e7d +0x211:  lea    -0x3c(%ebp),%eax
08ad8e80 +0x214:  mov    -0xc(%ebp),%edx
08ad8e83 +0x217:  mov    %edx,0xc(%esp)
08ad8e87 +0x21b:  mov    -0x28(%ebp),%edx
08ad8e8a +0x21e:  mov    %edx,0x8(%esp)
08ad8e8e +0x222:  mov    0x8(%ebp),%edx
08ad8e91 +0x225:  mov    %edx,0x4(%esp)
08ad8e95 +0x229:  mov    %eax,(%esp)
08ad8e98 +0x22c:  call   08ad7f50 <_Z3midRK10CharStringii>  ; mid(CharString const&, int, int)
08ad8e9d +0x231:  sub    $0x4,%esp
08ad8ea0 +0x234:  lea    -0x3c(%ebp),%eax
08ad8ea3 +0x237:  mov    %eax,0x4(%esp)
08ad8ea7 +0x23b:  mov    0xc(%ebp),%eax
08ad8eaa +0x23e:  mov    %eax,(%esp)
08ad8ead +0x241:  call   08add2d0 <_ZN10WideString8isupunctEw+0x780>  ; WideString::isupunct(wchar_t)+0x780
08ad8eb2 +0x246:  jmp    08ad8ecf <+0x263>
08ad8eb4 +0x248:  mov    %edx,%ebx
08ad8eb6 +0x24a:  mov    %eax,%esi
08ad8eb8 +0x24c:  lea    -0x3c(%ebp),%eax
08ad8ebb +0x24f:  mov    %eax,(%esp)
08ad8ebe +0x252:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad8ec3 +0x257:  mov    %esi,%eax
08ad8ec5 +0x259:  mov    %ebx,%edx
08ad8ec7 +0x25b:  mov    %eax,(%esp)
08ad8eca +0x25e:  call   08ae3750 <_Unwind_Resume>
08ad8ecf +0x263:  lea    -0x3c(%ebp),%eax
08ad8ed2 +0x266:  mov    %eax,(%esp)
08ad8ed5 +0x269:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad8eda +0x26e:  addl   $0x1,-0x24(%ebp)
08ad8ede +0x272:  mov    -0x14(%ebp),%eax
08ad8ee1 +0x275:  movzbl (%eax),%eax
08ad8ee4 +0x278:  movsbl %al,%eax
08ad8ee7 +0x27b:  mov    %eax,0x4(%esp)
08ad8eeb +0x27f:  lea    -0x38(%ebp),%eax
08ad8eee +0x282:  mov    %eax,(%esp)
08ad8ef1 +0x285:  call   08ad6b60 <_ZN10CharStringC1Ec>  ; CharString::CharString(char)
08ad8ef6 +0x28a:  lea    -0x38(%ebp),%eax
08ad8ef9 +0x28d:  mov    %eax,0x4(%esp)
08ad8efd +0x291:  mov    0xc(%ebp),%eax
08ad8f00 +0x294:  mov    %eax,(%esp)
08ad8f03 +0x297:  call   08add2d0 <_ZN10WideString8isupunctEw+0x780>  ; WideString::isupunct(wchar_t)+0x780
08ad8f08 +0x29c:  jmp    08ad8f25 <+0x2b9>
08ad8f0a +0x29e:  mov    %edx,%ebx
08ad8f0c +0x2a0:  mov    %eax,%esi
08ad8f0e +0x2a2:  lea    -0x38(%ebp),%eax
08ad8f11 +0x2a5:  mov    %eax,(%esp)
08ad8f14 +0x2a8:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad8f19 +0x2ad:  mov    %esi,%eax
08ad8f1b +0x2af:  mov    %ebx,%edx
08ad8f1d +0x2b1:  mov    %eax,(%esp)
08ad8f20 +0x2b4:  call   08ae3750 <_Unwind_Resume>
08ad8f25 +0x2b9:  lea    -0x38(%ebp),%eax
08ad8f28 +0x2bc:  mov    %eax,(%esp)
08ad8f2b +0x2bf:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad8f30 +0x2c4:  addl   $0x1,-0x24(%ebp)
08ad8f34 +0x2c8:  mov    -0x20(%ebp),%eax
08ad8f37 +0x2cb:  add    $0x1,%eax
08ad8f3a +0x2ce:  mov    %eax,-0x28(%ebp)
08ad8f3d +0x2d1:  addl   $0x1,-0x20(%ebp)
08ad8f41 +0x2d5:  mov    -0x20(%ebp),%eax
08ad8f44 +0x2d8:  cmp    -0x2c(%ebp),%eax
08ad8f47 +0x2db:  setl   %al
08ad8f4a +0x2de:  test   %al,%al
08ad8f4c +0x2e0:  jne    08ad8cb0 <+0x44>
08ad8f52 +0x2e6:  mov    -0x28(%ebp),%eax
08ad8f55 +0x2e9:  cmp    -0x2c(%ebp),%eax
08ad8f58 +0x2ec:  je     08ad8fc0 <+0x354>
08ad8f5a +0x2ee:  mov    -0x28(%ebp),%eax
08ad8f5d +0x2f1:  mov    -0x2c(%ebp),%edx
08ad8f60 +0x2f4:  sub    %eax,%edx
08ad8f62 +0x2f6:  lea    -0x34(%ebp),%eax
08ad8f65 +0x2f9:  mov    %edx,0xc(%esp)
08ad8f69 +0x2fd:  mov    -0x28(%ebp),%edx
08ad8f6c +0x300:  mov    %edx,0x8(%esp)
08ad8f70 +0x304:  mov    0x8(%ebp),%edx
08ad8f73 +0x307:  mov    %edx,0x4(%esp)
08ad8f77 +0x30b:  mov    %eax,(%esp)
08ad8f7a +0x30e:  call   08ad7f50 <_Z3midRK10CharStringii>  ; mid(CharString const&, int, int)
08ad8f7f +0x313:  sub    $0x4,%esp
08ad8f82 +0x316:  lea    -0x34(%ebp),%eax
08ad8f85 +0x319:  mov    %eax,0x4(%esp)
08ad8f89 +0x31d:  mov    0xc(%ebp),%eax
08ad8f8c +0x320:  mov    %eax,(%esp)
08ad8f8f +0x323:  call   08add2d0 <_ZN10WideString8isupunctEw+0x780>  ; WideString::isupunct(wchar_t)+0x780
08ad8f94 +0x328:  jmp    08ad8fb1 <+0x345>
08ad8f96 +0x32a:  mov    %edx,%ebx
08ad8f98 +0x32c:  mov    %eax,%esi
08ad8f9a +0x32e:  lea    -0x34(%ebp),%eax
08ad8f9d +0x331:  mov    %eax,(%esp)
08ad8fa0 +0x334:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad8fa5 +0x339:  mov    %esi,%eax
08ad8fa7 +0x33b:  mov    %ebx,%edx
08ad8fa9 +0x33d:  mov    %eax,(%esp)
08ad8fac +0x340:  call   08ae3750 <_Unwind_Resume>
08ad8fb1 +0x345:  lea    -0x34(%ebp),%eax
08ad8fb4 +0x348:  mov    %eax,(%esp)
08ad8fb7 +0x34b:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad8fbc +0x350:  addl   $0x1,-0x24(%ebp)
08ad8fc0 +0x354:  mov    -0x24(%ebp),%eax
08ad8fc3 +0x357:  lea    -0x8(%ebp),%esp
08ad8fc6 +0x35a:  add    $0x0,%esp
08ad8fc9 +0x35d:  pop    %ebx
08ad8fca +0x35e:  pop    %esi
08ad8fcb +0x35f:  pop    %ebp
08ad8fcc +0x360:  ret
08ad8fcd +0x361:  nop
```

## 反编译 C

```c
// CharString::tokenize @ 0x8ad8c6c

int32 CharString::tokenize
                (CharString *str,vector<CharString,_std::allocator<CharString>_> *tokenVector,
                char *dropDelimiters,char *returnDelimiters,bool isKeepEmptyToken)

{
  bool bVar1;
  CharString *pCVar2;
  CharString local_4c;
  CharString local_48;
  CharString local_44;
  CharString local_40;
  CharString local_3c;
  CharString local_38;
  char *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  char local_1d;
  char *local_1c;
  char *local_18;
  int local_14;
  int local_10;
  
                    /* Unresolved local var: char * strBuf@[???]
                       Unresolved local var: int32 strLen@[???]
                       Unresolved local var: int32 nextTokenStartIdx@[???]
                       Unresolved local var: int32 tokenCount@[???] */
  local_34 = c_str(str);
  local_30 = length(str);
  local_2c = 0;
  local_28 = 0;
                    /* Unresolved local var: int32 i@[???] */
  for (local_24 = 0; local_24 < local_30; local_24 = local_24 + 1) {
                    /* Unresolved local var: char c@[???]
                       Unresolved local var: char * d0@[???]
                       Unresolved local var: char * d1@[???] */
    local_1d = local_34[local_24];
    local_1c = dropDelimiters;
    while( true ) {
      if ((*local_1c == '\0') || (*local_1c == local_1d)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      local_1c = local_1c + 1;
    }
    if (*local_1c == '\0') {
      local_18 = returnDelimiters;
      while( true ) {
        if ((*local_18 == '\0') || (*local_18 == local_1d)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        local_18 = local_18 + 1;
      }
      if (*local_18 != '\0') {
                    /* Unresolved local var: int32 newLen@[???] */
        local_10 = local_24 - local_2c;
        if (local_10 == 0) {
          if (isKeepEmptyToken) {
            CharString(&local_44);
            pCVar2 = &local_44;
                    /* try { // try from 08ad8e4a to 08ad8e4e has its CatchHandler @ 08ad8e51 */
            std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar2);
            ~CharString(&local_44,(int)pCVar2);
            local_28 = local_28 + 1;
          }
        }
        else {
          mid(&local_40,str,local_2c,local_10);
          pCVar2 = &local_40;
                    /* try { // try from 08ad8ead to 08ad8eb1 has its CatchHandler @ 08ad8eb4 */
          std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar2);
          ~CharString(&local_40,(int)pCVar2);
          local_28 = local_28 + 1;
        }
        CharString(&local_3c,*local_18);
        pCVar2 = &local_3c;
                    /* try { // try from 08ad8f03 to 08ad8f07 has its CatchHandler @ 08ad8f0a */
        std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar2);
        ~CharString(&local_3c,(int)pCVar2);
        local_28 = local_28 + 1;
        local_2c = local_24 + 1;
      }
    }
    else {
                    /* Unresolved local var: int32 newLen@[???] */
      local_14 = local_24 - local_2c;
      if (local_14 == 0) {
        if (isKeepEmptyToken) {
          CharString(&local_4c);
          pCVar2 = &local_4c;
                    /* try { // try from 08ad8d32 to 08ad8d36 has its CatchHandler @ 08ad8d39 */
          std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar2);
          ~CharString(&local_4c,(int)pCVar2);
          local_28 = local_28 + 1;
        }
      }
      else {
        mid(&local_48,str,local_2c,local_14);
        pCVar2 = &local_48;
                    /* try { // try from 08ad8d95 to 08ad8d99 has its CatchHandler @ 08ad8d9c */
        std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar2);
        ~CharString(&local_48,(int)pCVar2);
        local_28 = local_28 + 1;
      }
      local_2c = local_24 + 1;
    }
  }
  if (local_2c != local_30) {
    mid(&local_38,str,local_2c,local_30 - local_2c);
    pCVar2 = &local_38;
                    /* try { // try from 08ad8f8f to 08ad8f93 has its CatchHandler @ 08ad8f96 */
    std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar2);
    ~CharString(&local_38,(int)pCVar2);
    local_28 = local_28 + 1;
  }
  return local_28;
}
```
