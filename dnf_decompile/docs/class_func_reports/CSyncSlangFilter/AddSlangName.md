# AddSlangName

`_ZN16CSyncSlangFilter12AddSlangNameERKSs`

`CSyncSlangFilter::AddSlangName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `CSyncSlangFilter` | `0x0862e276` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862e276  _ZN16CSyncSlangFilter12AddSlangNameERKSs
#           CSyncSlangFilter::AddSlangName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x0862e276, 0x0862e3bd]
0862e276 +0x000:  push   %ebp
0862e277 +0x001:  mov    %esp,%ebp
0862e279 +0x003:  push   %edi
0862e27a +0x004:  push   %esi
0862e27b +0x005:  push   %ebx
0862e27c +0x006:  sub    $0x12c,%esp
0862e282 +0x00c:  lea    -0x125(%ebp),%edx
0862e288 +0x012:  mov    $0x101,%ebx
0862e28d +0x017:  mov    $0x0,%eax
0862e292 +0x01c:  mov    %edx,%ecx
0862e294 +0x01e:  and    $0x1,%ecx
0862e297 +0x021:  test   %ecx,%ecx
0862e299 +0x023:  je     0862e2a3 <+0x2d>
0862e29b +0x025:  mov    %al,(%edx)
0862e29d +0x027:  add    $0x1,%edx
0862e2a0 +0x02a:  sub    $0x1,%ebx
0862e2a3 +0x02d:  mov    %edx,%ecx
0862e2a5 +0x02f:  and    $0x2,%ecx
0862e2a8 +0x032:  test   %ecx,%ecx
0862e2aa +0x034:  je     0862e2b5 <+0x3f>
0862e2ac +0x036:  mov    %ax,(%edx)
0862e2af +0x039:  add    $0x2,%edx
0862e2b2 +0x03c:  sub    $0x2,%ebx
0862e2b5 +0x03f:  mov    %ebx,%ecx
0862e2b7 +0x041:  shr    $0x2,%ecx
0862e2ba +0x044:  mov    %edx,%edi
0862e2bc +0x046:  rep stos %eax,%es:(%edi)
0862e2be +0x048:  mov    %edi,%edx
0862e2c0 +0x04a:  mov    %ebx,%ecx
0862e2c2 +0x04c:  and    $0x2,%ecx
0862e2c5 +0x04f:  test   %ecx,%ecx
0862e2c7 +0x051:  je     0862e2cf <+0x59>
0862e2c9 +0x053:  mov    %ax,(%edx)
0862e2cc +0x056:  add    $0x2,%edx
0862e2cf +0x059:  mov    %ebx,%ecx
0862e2d1 +0x05b:  and    $0x1,%ecx
0862e2d4 +0x05e:  test   %ecx,%ecx
0862e2d6 +0x060:  je     0862e2dd <+0x67>
0862e2d8 +0x062:  mov    %al,(%edx)
0862e2da +0x064:  add    $0x1,%edx
0862e2dd +0x067:  mov    0xc(%ebp),%eax
0862e2e0 +0x06a:  mov    %eax,(%esp)
0862e2e3 +0x06d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0862e2e8 +0x072:  lea    -0x125(%ebp),%edx
0862e2ee +0x078:  mov    %eax,0xc(%esp)
0862e2f2 +0x07c:  movl   $"%s",0x8(%esp)
0862e2fa +0x084:  movl   $0x100,0x4(%esp)
0862e302 +0x08c:  mov    %edx,(%esp)
0862e305 +0x08f:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
0862e30a +0x094:  movb   $0x0,-0x25(%ebp)
0862e30e +0x098:  mov    0x8(%ebp),%eax
0862e311 +0x09b:  mov    0x4(%eax),%eax
0862e314 +0x09e:  mov    (%eax),%eax
0862e316 +0x0a0:  mov    %eax,-0x20(%ebp)
0862e319 +0x0a3:  movl   $0x0,-0x1c(%ebp)
0862e320 +0x0aa:  movl   $0x0,-0x1c(%ebp)
0862e327 +0x0b1:  jmp    0862e38a <+0x114>
0862e329 +0x0b3:  mov    0x8(%ebp),%eax
0862e32c +0x0b6:  add    $0x8,%eax
0862e32f +0x0b9:  mov    %eax,0x4(%esp)
0862e333 +0x0bd:  lea    -0x24(%ebp),%eax
0862e336 +0x0c0:  mov    %eax,(%esp)
0862e339 +0x0c3:  call   082b2f36 <_GLOBAL__I__ZN4CLog5this_E+0xf35d>  ; global constructors keyed to CLog::this_+0xf35d
0862e33e +0x0c8:  mov    -0x1c(%ebp),%eax
0862e341 +0x0cb:  movzbl -0x125(%ebp,%eax,1),%eax
0862e349 +0x0d3:  movzbl %al,%eax
0862e34c +0x0d6:  mov    %eax,0x4(%esp)
0862e350 +0x0da:  mov    -0x20(%ebp),%eax
0862e353 +0x0dd:  mov    %eax,(%esp)
0862e356 +0x0e0:  call   0862ea5a <_GLOBAL__I__ZN16CSyncSlangFilter8instanceE+0x17b>  ; global constructors keyed to CSyncSlangFilter::instance+0x17b
0862e35b +0x0e5:  mov    %eax,-0x20(%ebp)
0862e35e +0x0e8:  lea    -0x24(%ebp),%eax
0862e361 +0x0eb:  mov    %eax,(%esp)
0862e364 +0x0ee:  call   082b2f52 <_GLOBAL__I__ZN4CLog5this_E+0xf379>  ; global constructors keyed to CLog::this_+0xf379
0862e369 +0x0f3:  addl   $0x1,-0x1c(%ebp)
0862e36d +0x0f7:  jmp    0862e38a <+0x114>
0862e36f +0x0f9:  mov    %edx,%ebx
0862e371 +0x0fb:  mov    %eax,%esi
0862e373 +0x0fd:  lea    -0x24(%ebp),%eax
0862e376 +0x100:  mov    %eax,(%esp)
0862e379 +0x103:  call   082b2f52 <_GLOBAL__I__ZN4CLog5this_E+0xf379>  ; global constructors keyed to CLog::this_+0xf379
0862e37e +0x108:  mov    %esi,%eax
0862e380 +0x10a:  mov    %ebx,%edx
0862e382 +0x10c:  mov    %eax,(%esp)
0862e385 +0x10f:  call   08ae3750 <_Unwind_Resume>
0862e38a +0x114:  mov    0xc(%ebp),%eax
0862e38d +0x117:  mov    %eax,(%esp)
0862e390 +0x11a:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0862e395 +0x11f:  cmp    -0x1c(%ebp),%eax
0862e398 +0x122:  seta   %al
0862e39b +0x125:  test   %al,%al
0862e39d +0x127:  jne    0862e329 <+0xb3>
0862e39f +0x129:  movl   $0x1,0x4(%esp)
0862e3a7 +0x131:  mov    -0x20(%ebp),%eax
0862e3aa +0x134:  mov    %eax,(%esp)
0862e3ad +0x137:  call   0862eb48 <_GLOBAL__I__ZN16CSyncSlangFilter8instanceE+0x269>  ; global constructors keyed to CSyncSlangFilter::instance+0x269
0862e3b2 +0x13c:  add    $0x12c,%esp
0862e3b8 +0x142:  pop    %ebx
0862e3b9 +0x143:  pop    %esi
0862e3ba +0x144:  pop    %edi
0862e3bb +0x145:  pop    %ebp
0862e3bc +0x146:  ret
0862e3bd +0x147:  nop
```

## 反编译 C

```c
// CSyncSlangFilter::AddSlangName @ 0x862e276

/* CSyncSlangFilter::AddSlangName(std::string const&) */

void __thiscall CSyncSlangFilter::AddSlangName(CSyncSlangFilter *this,string *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  char local_129;
  char local_128 [255];
  undefined1 local_29;
  writeGuard<rwLock> local_28 [4];
  SlangNode *local_24;
  uint local_20;
  
  pcVar3 = &local_129;
  uVar4 = 0x101;
  bVar5 = ((uint)pcVar3 & 1) != 0;
  if (bVar5) {
    local_129 = '\0';
    pcVar3 = local_128;
    uVar4 = 0x100;
  }
  if (((uint)pcVar3 & 2) != 0) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 2;
    uVar4 = uVar4 - 2;
  }
  for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  if ((uVar4 & 2) != 0) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 2;
  }
  if (!bVar5) {
    *pcVar3 = '\0';
  }
  uVar1 = std::string::c_str((string *)param_1);
  OS_API::snprintf(&local_129,0x100,"%s",uVar1);
  local_29 = 0;
  local_24 = (SlangNode *)**(undefined4 **)(this + 4);
  local_20 = 0;
  while( true ) {
    uVar4 = std::string::size((string *)param_1);
    if (uVar4 <= local_20) break;
    writeGuard<rwLock>::writeGuard(local_28,(rwLock *)(this + 8));
                    /* try { // try from 0862e356 to 0862e35a has its CatchHandler @ 0862e36f */
    local_24 = (SlangNode *)SlangNode::AddChild((uint)local_24);
    writeGuard<rwLock>::~writeGuard(local_28);
    local_20 = local_20 + 1;
  }
  SlangNode::SetEndNode(local_24,true);
  return;
}
```
