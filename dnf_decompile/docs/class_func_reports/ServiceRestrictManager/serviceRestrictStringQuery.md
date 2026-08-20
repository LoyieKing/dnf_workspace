# serviceRestrictStringQuery

`_ZN22ServiceRestrictManager26serviceRestrictStringQueryEv`

`ServiceRestrictManager::serviceRestrictStringQuery()`

| 类 | 地址 |
|---|---|
| `ServiceRestrictManager` | `0x0816e0ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816e0ac  _ZN22ServiceRestrictManager26serviceRestrictStringQueryEv
#           ServiceRestrictManager::serviceRestrictStringQuery()
# range [0x0816e0ac, 0x0816e271]
0816e0ac +0x000:  push   %ebp
0816e0ad +0x001:  mov    %esp,%ebp
0816e0af +0x003:  push   %esi
0816e0b0 +0x004:  push   %ebx
0816e0b1 +0x005:  sub    $0xd0,%esp
0816e0b7 +0x00b:  mov    0x8(%ebp),%ebx
0816e0ba +0x00e:  movl   $0x10,0x4(%esp)
0816e0c2 +0x016:  lea    -0xc4(%ebp),%eax
0816e0c8 +0x01c:  mov    %eax,(%esp)
0816e0cb +0x01f:  call   087015b0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xcd44>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xcd44
0816e0d0 +0x024:  movl   $0x0,-0x10(%ebp)
0816e0d7 +0x02b:  jmp    0816e168 <+0xbc>
0816e0dc +0x030:  movl   $"(",0x4(%esp)
0816e0e4 +0x038:  lea    -0xc4(%ebp),%eax
0816e0ea +0x03e:  mov    %eax,(%esp)
0816e0ed +0x041:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0816e0f2 +0x046:  movl   $0x1,0x4(%esp)
0816e0fa +0x04e:  mov    %eax,(%esp)
0816e0fd +0x051:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
0816e102 +0x056:  movl   $",",0x4(%esp)
0816e10a +0x05e:  mov    %eax,(%esp)
0816e10d +0x061:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0816e112 +0x066:  mov    -0x10(%ebp),%edx
0816e115 +0x069:  mov    %edx,0x4(%esp)
0816e119 +0x06d:  mov    %eax,(%esp)
0816e11c +0x070:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
0816e121 +0x075:  movl   $",",0x4(%esp)
0816e129 +0x07d:  mov    %eax,(%esp)
0816e12c +0x080:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0816e131 +0x085:  mov    -0x10(%ebp),%eax
0816e134 +0x088:  mov    %eax,(%esp)
0816e137 +0x08b:  call   0816d463 <_ZN14MobileRestrict12enumToStringENS_4EnumE>  ; MobileRestrict::enumToString(MobileRestrict::Enum)
0816e13c +0x090:  mov    %eax,0x4(%esp)
0816e140 +0x094:  lea    -0xc4(%ebp),%eax
0816e146 +0x09a:  mov    %eax,(%esp)
0816e149 +0x09d:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0816e14e +0x0a2:  movl   $")",0x4(%esp)
0816e156 +0x0aa:  lea    -0xc4(%ebp),%eax
0816e15c +0x0b0:  mov    %eax,(%esp)
0816e15f +0x0b3:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0816e164 +0x0b8:  addl   $0x1,-0x10(%ebp)
0816e168 +0x0bc:  cmpl   $0x21,-0x10(%ebp)
0816e16c +0x0c0:  setle  %al
0816e16f +0x0c3:  test   %al,%al
0816e171 +0x0c5:  jne    0816e0dc <+0x30>
0816e177 +0x0cb:  movl   $0x0,-0xc(%ebp)
0816e17e +0x0d2:  jmp    0816e20f <+0x163>
0816e183 +0x0d7:  movl   $"(",0x4(%esp)
0816e18b +0x0df:  lea    -0xc4(%ebp),%eax
0816e191 +0x0e5:  mov    %eax,(%esp)
0816e194 +0x0e8:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0816e199 +0x0ed:  movl   $0x2,0x4(%esp)
0816e1a1 +0x0f5:  mov    %eax,(%esp)
0816e1a4 +0x0f8:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
0816e1a9 +0x0fd:  movl   $",",0x4(%esp)
0816e1b1 +0x105:  mov    %eax,(%esp)
0816e1b4 +0x108:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0816e1b9 +0x10d:  mov    -0xc(%ebp),%edx
0816e1bc +0x110:  mov    %edx,0x4(%esp)
0816e1c0 +0x114:  mov    %eax,(%esp)
0816e1c3 +0x117:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
0816e1c8 +0x11c:  movl   $",",0x4(%esp)
0816e1d0 +0x124:  mov    %eax,(%esp)
0816e1d3 +0x127:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0816e1d8 +0x12c:  mov    -0xc(%ebp),%eax
0816e1db +0x12f:  mov    %eax,(%esp)
0816e1de +0x132:  call   0816d472 <_ZN17CharacterRestrict12enumToStringENS_4EnumE>  ; CharacterRestrict::enumToString(CharacterRestrict::Enum)
0816e1e3 +0x137:  mov    %eax,0x4(%esp)
0816e1e7 +0x13b:  lea    -0xc4(%ebp),%eax
0816e1ed +0x141:  mov    %eax,(%esp)
0816e1f0 +0x144:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0816e1f5 +0x149:  movl   $")",0x4(%esp)
0816e1fd +0x151:  lea    -0xc4(%ebp),%eax
0816e203 +0x157:  mov    %eax,(%esp)
0816e206 +0x15a:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0816e20b +0x15f:  addl   $0x1,-0xc(%ebp)
0816e20f +0x163:  cmpl   $0x2,-0xc(%ebp)
0816e213 +0x167:  setle  %al
0816e216 +0x16a:  test   %al,%al
0816e218 +0x16c:  jne    0816e183 <+0xd7>
0816e21e +0x172:  mov    %ebx,%eax
0816e220 +0x174:  lea    -0xc4(%ebp),%edx
0816e226 +0x17a:  mov    %edx,0x4(%esp)
0816e22a +0x17e:  mov    %eax,(%esp)
0816e22d +0x181:  call   08704d70 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x10504>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x10504
0816e232 +0x186:  sub    $0x4,%esp
0816e235 +0x189:  lea    -0xc4(%ebp),%eax
0816e23b +0x18f:  mov    %eax,(%esp)
0816e23e +0x192:  call   08704410 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xfba4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xfba4
0816e243 +0x197:  mov    %ebx,%eax
0816e245 +0x199:  mov    %ebx,%eax
0816e247 +0x19b:  lea    -0x8(%ebp),%esp
0816e24a +0x19e:  add    $0x0,%esp
0816e24d +0x1a1:  pop    %ebx
0816e24e +0x1a2:  pop    %esi
0816e24f +0x1a3:  pop    %ebp
0816e250 +0x1a4:  ret    $0x4
0816e253 +0x1a7:  mov    %edx,%ebx
0816e255 +0x1a9:  mov    %eax,%esi
0816e257 +0x1ab:  lea    -0xc4(%ebp),%eax
0816e25d +0x1b1:  mov    %eax,(%esp)
0816e260 +0x1b4:  call   08704410 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xfba4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xfba4
0816e265 +0x1b9:  mov    %esi,%eax
0816e267 +0x1bb:  mov    %ebx,%edx
0816e269 +0x1bd:  mov    %eax,(%esp)
0816e26c +0x1c0:  call   08ae3750 <_Unwind_Resume>
0816e271 +0x1c5:  nop
```

## 反编译 C

```c
// ServiceRestrictManager::serviceRestrictStringQuery @ 0x816e0ac

/* ServiceRestrictManager::serviceRestrictStringQuery() */

ServiceRestrictManager * __thiscall
ServiceRestrictManager::serviceRestrictStringQuery(ServiceRestrictManager *this)

{
  ostream *poVar1;
  char *pcVar2;
  ostringstream local_c8 [180];
  int local_14;
  int local_10;
  
  std::ostringstream::ostringstream(local_c8,_S_out);
  for (local_14 = 0; local_14 < 0x22; local_14 = local_14 + 1) {
                    /* try { // try from 0816e0ed to 0816e231 has its CatchHandler @ 0816e253 */
    poVar1 = std::operator<<((ostream *)local_c8,"(");
    poVar1 = (ostream *)std::ostream::operator<<(poVar1,1);
    poVar1 = std::operator<<(poVar1,",");
    poVar1 = (ostream *)std::ostream::operator<<(poVar1,local_14);
    std::operator<<(poVar1,",");
    pcVar2 = (char *)MobileRestrict::enumToString(local_14);
    std::operator<<((ostream *)local_c8,pcVar2);
    std::operator<<((ostream *)local_c8,")");
  }
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    poVar1 = std::operator<<((ostream *)local_c8,"(");
    poVar1 = (ostream *)std::ostream::operator<<(poVar1,2);
    poVar1 = std::operator<<(poVar1,",");
    poVar1 = (ostream *)std::ostream::operator<<(poVar1,local_10);
    std::operator<<(poVar1,",");
    pcVar2 = (char *)CharacterRestrict::enumToString(local_10);
    std::operator<<((ostream *)local_c8,pcVar2);
    std::operator<<((ostream *)local_c8,")");
  }
  std::ostringstream::str();
  std::ostringstream::~ostringstream(local_c8);
  return this;
}
```
