# loadFromString

`_ZN14StringResource14loadFromStringEPciP10CharString`

`StringResource::loadFromString(char*, int, CharString*)`

| 类 | 地址 |
|---|---|
| `StringResource` | `0x08ad4ac2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad4ac2  _ZN14StringResource14loadFromStringEPciP10CharString
#           StringResource::loadFromString(char*, int, CharString*)
# range [0x08ad4ac2, 0x08ad4ce3]
08ad4ac2 +0x000:  push   %ebp
08ad4ac3 +0x001:  mov    %esp,%ebp
08ad4ac5 +0x003:  push   %esi
08ad4ac6 +0x004:  push   %ebx
08ad4ac7 +0x005:  sub    $0x40,%esp
08ad4aca +0x008:  mov    0x8(%ebp),%eax
08ad4acd +0x00b:  mov    %eax,(%esp)
08ad4ad0 +0x00e:  call   08ad5864 <_ZN3app6getStrEi+0x398>  ; app::getStr(int)+0x398
08ad4ad5 +0x013:  movl   $0x0,-0x20(%ebp)
08ad4adc +0x01a:  mov    0xc(%ebp),%eax
08ad4adf +0x01d:  mov    %eax,-0x1c(%ebp)
08ad4ae2 +0x020:  movl   $0x0,-0x18(%ebp)
08ad4ae9 +0x027:  jmp    08ad4cc3 <+0x201>
08ad4aee +0x02c:  mov    -0x18(%ebp),%eax
08ad4af1 +0x02f:  add    0xc(%ebp),%eax
08ad4af4 +0x032:  movzbl (%eax),%eax
08ad4af7 +0x035:  mov    %al,-0x11(%ebp)
08ad4afa +0x038:  cmpb   $0xa,-0x11(%ebp)
08ad4afe +0x03c:  je     08ad4b12 <+0x50>
08ad4b00 +0x03e:  cmpb   $0xd,-0x11(%ebp)
08ad4b04 +0x042:  je     08ad4b12 <+0x50>
08ad4b06 +0x044:  mov    -0x18(%ebp),%eax
08ad4b09 +0x047:  cmp    0x10(%ebp),%eax
08ad4b0c +0x04a:  jne    08ad4cbf <+0x1fd>
08ad4b12 +0x050:  addl   $0x1,-0x20(%ebp)
08ad4b16 +0x054:  mov    -0x18(%ebp),%eax
08ad4b19 +0x057:  add    0xc(%ebp),%eax
08ad4b1c +0x05a:  movb   $0x0,(%eax)
08ad4b1f +0x05d:  movl   $0x0,-0x34(%ebp)
08ad4b26 +0x064:  lea    -0x34(%ebp),%eax
08ad4b29 +0x067:  mov    %eax,0x8(%esp)
08ad4b2d +0x06b:  lea    -0x30(%ebp),%eax
08ad4b30 +0x06e:  mov    %eax,0x4(%esp)
08ad4b34 +0x072:  mov    -0x1c(%ebp),%eax
08ad4b37 +0x075:  mov    %eax,(%esp)
08ad4b3a +0x078:  call   08ad490f <_ZL15parseStringLinePcPiPS_>  ; parseStringLine(char*, int*, char**)
08ad4b3f +0x07d:  mov    %eax,-0x10(%ebp)
08ad4b42 +0x080:  mov    -0x10(%ebp),%eax
08ad4b45 +0x083:  test   %eax,%eax
08ad4b47 +0x085:  je     08ad4bb7 <+0xf5>
08ad4b49 +0x087:  cmpl   $0x0,0x14(%ebp)
08ad4b4d +0x08b:  je     08ad4bb7 <+0xf5>
08ad4b4f +0x08d:  mov    -0x10(%ebp),%edx
08ad4b52 +0x090:  lea    -0x2c(%ebp),%eax
08ad4b55 +0x093:  mov    %edx,0xc(%esp)
08ad4b59 +0x097:  mov    -0x20(%ebp),%edx
08ad4b5c +0x09a:  mov    %edx,0x8(%esp)
08ad4b60 +0x09e:  movl   $&data#7878e782(.rodata),0x4(%esp)
08ad4b68 +0x0a6:  mov    %eax,(%esp)
08ad4b6b +0x0a9:  call   08ad8afa <_ZN10CharString6formatEPKcz>  ; CharString::format(char const*, ...)
08ad4b70 +0x0ae:  sub    $0x4,%esp
08ad4b73 +0x0b1:  lea    -0x2c(%ebp),%eax
08ad4b76 +0x0b4:  mov    %eax,0x4(%esp)
08ad4b7a +0x0b8:  mov    0x14(%ebp),%eax
08ad4b7d +0x0bb:  mov    %eax,(%esp)
08ad4b80 +0x0be:  call   08ad70de <_ZN10CharStringaSERKS_>  ; CharString::operator=(CharString const&)
08ad4b85 +0x0c3:  jmp    08ad4ba2 <+0xe0>
08ad4b87 +0x0c5:  mov    %edx,%ebx
08ad4b89 +0x0c7:  mov    %eax,%esi
08ad4b8b +0x0c9:  lea    -0x2c(%ebp),%eax
08ad4b8e +0x0cc:  mov    %eax,(%esp)
08ad4b91 +0x0cf:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad4b96 +0x0d4:  mov    %esi,%eax
08ad4b98 +0x0d6:  mov    %ebx,%edx
08ad4b9a +0x0d8:  mov    %eax,(%esp)
08ad4b9d +0x0db:  call   08ae3750 <_Unwind_Resume>
08ad4ba2 +0x0e0:  lea    -0x2c(%ebp),%eax
08ad4ba5 +0x0e3:  mov    %eax,(%esp)
08ad4ba8 +0x0e6:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad4bad +0x0eb:  mov    $0x0,%eax
08ad4bb2 +0x0f0:  jmp    08ad4cd9 <+0x217>
08ad4bb7 +0x0f5:  mov    -0x34(%ebp),%eax
08ad4bba +0x0f8:  test   %eax,%eax
08ad4bbc +0x0fa:  je     08ad4c99 <+0x1d7>
08ad4bc2 +0x100:  mov    -0x34(%ebp),%eax
08ad4bc5 +0x103:  mov    %eax,(%esp)
08ad4bc8 +0x106:  call   08adeb75 <_Z9toTStringPKc>  ; toTString(char const*)
08ad4bcd +0x10b:  mov    %eax,0x4(%esp)
08ad4bd1 +0x10f:  lea    -0x28(%ebp),%eax
08ad4bd4 +0x112:  mov    %eax,(%esp)
08ad4bd7 +0x115:  call   08ad69ee <_ZN10CharStringC1EPKc>  ; CharString::CharString(char const*)
08ad4bdc +0x11a:  mov    -0x30(%ebp),%eax
08ad4bdf +0x11d:  lea    -0x28(%ebp),%edx
08ad4be2 +0x120:  mov    %edx,0x8(%esp)
08ad4be6 +0x124:  mov    %eax,0x4(%esp)
08ad4bea +0x128:  mov    0x8(%ebp),%eax
08ad4bed +0x12b:  mov    %eax,(%esp)
08ad4bf0 +0x12e:  call   08ad47d0 <_ZN14StringResource3addEiRK10CharString>  ; StringResource::add(int, CharString const&)
08ad4bf5 +0x133:  mov    %al,-0x9(%ebp)
08ad4bf8 +0x136:  lea    -0x28(%ebp),%eax
08ad4bfb +0x139:  mov    %eax,(%esp)
08ad4bfe +0x13c:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad4c03 +0x141:  movzbl -0x9(%ebp),%eax
08ad4c07 +0x145:  xor    $0x1,%eax
08ad4c0a +0x148:  test   %al,%al
08ad4c0c +0x14a:  jne    08ad4c2e <+0x16c>
08ad4c0e +0x14c:  jmp    08ad4c99 <+0x1d7>
08ad4c13 +0x151:  mov    %edx,%ebx
08ad4c15 +0x153:  mov    %eax,%esi
08ad4c17 +0x155:  lea    -0x28(%ebp),%eax
08ad4c1a +0x158:  mov    %eax,(%esp)
08ad4c1d +0x15b:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad4c22 +0x160:  mov    %esi,%eax
08ad4c24 +0x162:  mov    %ebx,%edx
08ad4c26 +0x164:  mov    %eax,(%esp)
08ad4c29 +0x167:  call   08ae3750 <_Unwind_Resume>
08ad4c2e +0x16c:  cmpl   $0x0,0x14(%ebp)
08ad4c32 +0x170:  je     08ad4c92 <+0x1d0>
08ad4c34 +0x172:  mov    -0x30(%ebp),%edx
08ad4c37 +0x175:  lea    -0x24(%ebp),%eax
08ad4c3a +0x178:  mov    %edx,0xc(%esp)
08ad4c3e +0x17c:  mov    -0x20(%ebp),%edx
08ad4c41 +0x17f:  mov    %edx,0x8(%esp)
08ad4c45 +0x183:  movl   $"Duplicated key : line:%d key:%d",0x4(%esp)
08ad4c4d +0x18b:  mov    %eax,(%esp)
08ad4c50 +0x18e:  call   08ad8afa <_ZN10CharString6formatEPKcz>  ; CharString::format(char const*, ...)
08ad4c55 +0x193:  sub    $0x4,%esp
08ad4c58 +0x196:  lea    -0x24(%ebp),%eax
08ad4c5b +0x199:  mov    %eax,0x4(%esp)
08ad4c5f +0x19d:  mov    0x14(%ebp),%eax
08ad4c62 +0x1a0:  mov    %eax,(%esp)
08ad4c65 +0x1a3:  call   08ad70de <_ZN10CharStringaSERKS_>  ; CharString::operator=(CharString const&)
08ad4c6a +0x1a8:  jmp    08ad4c87 <+0x1c5>
08ad4c6c +0x1aa:  mov    %edx,%ebx
08ad4c6e +0x1ac:  mov    %eax,%esi
08ad4c70 +0x1ae:  lea    -0x24(%ebp),%eax
08ad4c73 +0x1b1:  mov    %eax,(%esp)
08ad4c76 +0x1b4:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad4c7b +0x1b9:  mov    %esi,%eax
08ad4c7d +0x1bb:  mov    %ebx,%edx
08ad4c7f +0x1bd:  mov    %eax,(%esp)
08ad4c82 +0x1c0:  call   08ae3750 <_Unwind_Resume>
08ad4c87 +0x1c5:  lea    -0x24(%ebp),%eax
08ad4c8a +0x1c8:  mov    %eax,(%esp)
08ad4c8d +0x1cb:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad4c92 +0x1d0:  mov    $0x0,%eax
08ad4c97 +0x1d5:  jmp    08ad4cd9 <+0x217>
08ad4c99 +0x1d7:  cmpb   $0xd,-0x11(%ebp)
08ad4c9d +0x1db:  jne    08ad4cb3 <+0x1f1>
08ad4c9f +0x1dd:  mov    -0x18(%ebp),%eax
08ad4ca2 +0x1e0:  add    $0x1,%eax
08ad4ca5 +0x1e3:  add    0xc(%ebp),%eax
08ad4ca8 +0x1e6:  movzbl (%eax),%eax
08ad4cab +0x1e9:  cmp    $0xa,%al
08ad4cad +0x1eb:  jne    08ad4cb3 <+0x1f1>
08ad4caf +0x1ed:  addl   $0x1,-0x18(%ebp)
08ad4cb3 +0x1f1:  mov    -0x18(%ebp),%eax
08ad4cb6 +0x1f4:  add    $0x1,%eax
08ad4cb9 +0x1f7:  add    0xc(%ebp),%eax
08ad4cbc +0x1fa:  mov    %eax,-0x1c(%ebp)
08ad4cbf +0x1fd:  addl   $0x1,-0x18(%ebp)
08ad4cc3 +0x201:  mov    -0x18(%ebp),%eax
08ad4cc6 +0x204:  cmp    0x10(%ebp),%eax
08ad4cc9 +0x207:  setle  %al
08ad4ccc +0x20a:  test   %al,%al
08ad4cce +0x20c:  jne    08ad4aee <+0x2c>
08ad4cd4 +0x212:  mov    $0x1,%eax
08ad4cd9 +0x217:  lea    -0x8(%ebp),%esp
08ad4cdc +0x21a:  add    $0x0,%esp
08ad4cdf +0x21d:  pop    %ebx
08ad4ce0 +0x21e:  pop    %esi
08ad4ce1 +0x21f:  pop    %ebp
08ad4ce2 +0x220:  ret
08ad4ce3 +0x221:  nop
```

## 反编译 C

```c
// StringResource::loadFromString @ 0x8ad4ac2

/* StringResource::loadFromString(char*, int, CharString*) */

undefined4 __thiscall
StringResource::loadFromString(StringResource *this,char *param_1,int param_2,CharString *param_3)

{
  TCHAR *src;
  int __in_chrg;
  CharString *pCVar1;
  char *local_38;
  int local_34;
  CharString local_30;
  CharString local_2c;
  CharString local_28;
  int local_24;
  char *local_20;
  int local_1c;
  char local_15;
  int local_14;
  char local_d;
  
  std::map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>>::clear
            ((map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>> *)
             this);
  local_24 = 0;
  local_20 = param_1;
  local_1c = 0;
  do {
    if (param_2 < local_1c) {
      return 1;
    }
    local_15 = param_1[local_1c];
    if (((local_15 == '\n') || (local_15 == '\r')) || (local_1c == param_2)) {
      local_24 = local_24 + 1;
      param_1[local_1c] = '\0';
      local_38 = (char *)0x0;
      local_14 = parseStringLine(local_20,&local_34,&local_38);
      if ((local_14 != 0) && (param_3 != (CharString *)0x0)) {
        CharString::format(&local_30,"Parse error : line:%d reason:%d",local_24,local_14);
        pCVar1 = &local_30;
                    /* try { // try from 08ad4b80 to 08ad4b84 has its CatchHandler @ 08ad4b87 */
        CharString::operator=((CharString *)param_3,pCVar1);
        CharString::~CharString(&local_30,(int)pCVar1);
        return 0;
      }
      if (local_38 != (char *)0x0) {
        src = toTString(local_38);
        CharString::CharString(&local_2c,src);
        __in_chrg = local_34;
                    /* try { // try from 08ad4bf0 to 08ad4bf4 has its CatchHandler @ 08ad4c13 */
        local_d = add(this,local_34,(CharString *)&local_2c);
        CharString::~CharString(&local_2c,__in_chrg);
        if (local_d != '\x01') {
          if (param_3 != (CharString *)0x0) {
            CharString::format(&local_28,"Duplicated key : line:%d key:%d",local_24,local_34);
            pCVar1 = &local_28;
                    /* try { // try from 08ad4c65 to 08ad4c69 has its CatchHandler @ 08ad4c6c */
            CharString::operator=((CharString *)param_3,pCVar1);
            CharString::~CharString(&local_28,(int)pCVar1);
          }
          return 0;
        }
      }
      if ((local_15 == '\r') && (param_1[local_1c + 1] == '\n')) {
        local_1c = local_1c + 1;
      }
      local_20 = param_1 + local_1c + 1;
    }
    local_1c = local_1c + 1;
  } while( true );
}
```
