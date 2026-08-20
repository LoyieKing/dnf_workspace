# AddSlang

`_ZN16CSyncSlangFilter8AddSlangERKSs`

`CSyncSlangFilter::AddSlang(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `CSyncSlangFilter` | `0x0862e72a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862e72a  _ZN16CSyncSlangFilter8AddSlangERKSs
#           CSyncSlangFilter::AddSlang(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x0862e72a, 0x0862e89e]
0862e72a +0x000:  push   %ebp
0862e72b +0x001:  mov    %esp,%ebp
0862e72d +0x003:  push   %edi
0862e72e +0x004:  push   %esi
0862e72f +0x005:  push   %ebx
0862e730 +0x006:  sub    $0x13c,%esp
0862e736 +0x00c:  lea    -0x12d(%ebp),%edx
0862e73c +0x012:  mov    $0x101,%ebx
0862e741 +0x017:  mov    $0x0,%eax
0862e746 +0x01c:  mov    %edx,%ecx
0862e748 +0x01e:  and    $0x1,%ecx
0862e74b +0x021:  test   %ecx,%ecx
0862e74d +0x023:  je     0862e757 <+0x2d>
0862e74f +0x025:  mov    %al,(%edx)
0862e751 +0x027:  add    $0x1,%edx
0862e754 +0x02a:  sub    $0x1,%ebx
0862e757 +0x02d:  mov    %edx,%ecx
0862e759 +0x02f:  and    $0x2,%ecx
0862e75c +0x032:  test   %ecx,%ecx
0862e75e +0x034:  je     0862e769 <+0x3f>
0862e760 +0x036:  mov    %ax,(%edx)
0862e763 +0x039:  add    $0x2,%edx
0862e766 +0x03c:  sub    $0x2,%ebx
0862e769 +0x03f:  mov    %ebx,%ecx
0862e76b +0x041:  shr    $0x2,%ecx
0862e76e +0x044:  mov    %edx,%edi
0862e770 +0x046:  rep stos %eax,%es:(%edi)
0862e772 +0x048:  mov    %edi,%edx
0862e774 +0x04a:  mov    %ebx,%ecx
0862e776 +0x04c:  and    $0x2,%ecx
0862e779 +0x04f:  test   %ecx,%ecx
0862e77b +0x051:  je     0862e783 <+0x59>
0862e77d +0x053:  mov    %ax,(%edx)
0862e780 +0x056:  add    $0x2,%edx
0862e783 +0x059:  mov    %ebx,%ecx
0862e785 +0x05b:  and    $0x1,%ecx
0862e788 +0x05e:  test   %ecx,%ecx
0862e78a +0x060:  je     0862e791 <+0x67>
0862e78c +0x062:  mov    %al,(%edx)
0862e78e +0x064:  add    $0x1,%edx
0862e791 +0x067:  mov    0xc(%ebp),%eax
0862e794 +0x06a:  mov    %eax,(%esp)
0862e797 +0x06d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0862e79c +0x072:  lea    -0x12d(%ebp),%edx
0862e7a2 +0x078:  mov    %eax,0xc(%esp)
0862e7a6 +0x07c:  movl   $"%s",0x8(%esp)
0862e7ae +0x084:  movl   $0x100,0x4(%esp)
0862e7b6 +0x08c:  mov    %edx,(%esp)
0862e7b9 +0x08f:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
0862e7be +0x094:  movb   $0x0,-0x2d(%ebp)
0862e7c2 +0x098:  mov    0x8(%ebp),%eax
0862e7c5 +0x09b:  mov    (%eax),%eax
0862e7c7 +0x09d:  mov    (%eax),%eax
0862e7c9 +0x09f:  mov    %eax,-0x28(%ebp)
0862e7cc +0x0a2:  movzbl -0x12d(%ebp),%eax
0862e7d3 +0x0a9:  cmp    $0xbb,%al
0862e7d5 +0x0ab:  jne    0862e7fb <+0xd1>
0862e7d7 +0x0ad:  movzbl -0x12c(%ebp),%eax
0862e7de +0x0b4:  cmp    $0xd8,%al
0862e7e0 +0x0b6:  jne    0862e7fb <+0xd1>
0862e7e2 +0x0b8:  movzbl -0x12b(%ebp),%eax
0862e7e9 +0x0bf:  cmp    $0xc3,%al
0862e7eb +0x0c1:  jne    0862e7fb <+0xd1>
0862e7ed +0x0c3:  movl   $0x0,-0x20(%ebp)
0862e7f4 +0x0ca:  movl   $0x0,-0x1c(%ebp)
0862e7fb +0x0d1:  movl   $0x0,-0x24(%ebp)
0862e802 +0x0d8:  movl   $0x0,-0x24(%ebp)
0862e809 +0x0df:  jmp    0862e86c <+0x142>
0862e80b +0x0e1:  mov    0x8(%ebp),%eax
0862e80e +0x0e4:  add    $0x8,%eax
0862e811 +0x0e7:  mov    %eax,0x4(%esp)
0862e815 +0x0eb:  lea    -0x2c(%ebp),%eax
0862e818 +0x0ee:  mov    %eax,(%esp)
0862e81b +0x0f1:  call   082b2f36 <_GLOBAL__I__ZN4CLog5this_E+0xf35d>  ; global constructors keyed to CLog::this_+0xf35d
0862e820 +0x0f6:  mov    -0x24(%ebp),%eax
0862e823 +0x0f9:  movzbl -0x12d(%ebp,%eax,1),%eax
0862e82b +0x101:  movzbl %al,%eax
0862e82e +0x104:  mov    %eax,0x4(%esp)
0862e832 +0x108:  mov    -0x28(%ebp),%eax
0862e835 +0x10b:  mov    %eax,(%esp)
0862e838 +0x10e:  call   0862ea5a <_GLOBAL__I__ZN16CSyncSlangFilter8instanceE+0x17b>  ; global constructors keyed to CSyncSlangFilter::instance+0x17b
0862e83d +0x113:  mov    %eax,-0x28(%ebp)
0862e840 +0x116:  lea    -0x2c(%ebp),%eax
0862e843 +0x119:  mov    %eax,(%esp)
0862e846 +0x11c:  call   082b2f52 <_GLOBAL__I__ZN4CLog5this_E+0xf379>  ; global constructors keyed to CLog::this_+0xf379
0862e84b +0x121:  addl   $0x1,-0x24(%ebp)
0862e84f +0x125:  jmp    0862e86c <+0x142>
0862e851 +0x127:  mov    %edx,%ebx
0862e853 +0x129:  mov    %eax,%esi
0862e855 +0x12b:  lea    -0x2c(%ebp),%eax
0862e858 +0x12e:  mov    %eax,(%esp)
0862e85b +0x131:  call   082b2f52 <_GLOBAL__I__ZN4CLog5this_E+0xf379>  ; global constructors keyed to CLog::this_+0xf379
0862e860 +0x136:  mov    %esi,%eax
0862e862 +0x138:  mov    %ebx,%edx
0862e864 +0x13a:  mov    %eax,(%esp)
0862e867 +0x13d:  call   08ae3750 <_Unwind_Resume>
0862e86c +0x142:  mov    0xc(%ebp),%eax
0862e86f +0x145:  mov    %eax,(%esp)
0862e872 +0x148:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0862e877 +0x14d:  cmp    -0x24(%ebp),%eax
0862e87a +0x150:  seta   %al
0862e87d +0x153:  test   %al,%al
0862e87f +0x155:  jne    0862e80b <+0xe1>
0862e881 +0x157:  movl   $0x1,0x4(%esp)
0862e889 +0x15f:  mov    -0x28(%ebp),%eax
0862e88c +0x162:  mov    %eax,(%esp)
0862e88f +0x165:  call   0862eb48 <_GLOBAL__I__ZN16CSyncSlangFilter8instanceE+0x269>  ; global constructors keyed to CSyncSlangFilter::instance+0x269
0862e894 +0x16a:  add    $0x13c,%esp
0862e89a +0x170:  pop    %ebx
0862e89b +0x171:  pop    %esi
0862e89c +0x172:  pop    %edi
0862e89d +0x173:  pop    %ebp
0862e89e +0x174:  ret
```

## 反编译 C

```c
// CSyncSlangFilter::AddSlang @ 0x862e72a

/* CSyncSlangFilter::AddSlang(std::string const&) */

void __thiscall CSyncSlangFilter::AddSlang(CSyncSlangFilter *this,string *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  char local_131;
  char local_130;
  char cStack_12f;
  undefined1 local_31;
  writeGuard<rwLock> local_30 [4];
  SlangNode *local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  pcVar3 = &local_131;
  uVar4 = 0x101;
  bVar5 = ((uint)pcVar3 & 1) != 0;
  if (bVar5) {
    local_131 = '\0';
    pcVar3 = &local_130;
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
  OS_API::snprintf(&local_131,0x100,"%s",uVar1);
  local_31 = 0;
  local_2c = (SlangNode *)**(undefined4 **)this;
  if (((local_131 == -0x45) && (local_130 == -0x28)) && (cStack_12f == -0x3d)) {
    local_24 = 0;
    local_20 = 0;
  }
  local_28 = 0;
  while( true ) {
    uVar4 = std::string::size((string *)param_1);
    if (uVar4 <= local_28) break;
    writeGuard<rwLock>::writeGuard(local_30,(rwLock *)(this + 8));
                    /* try { // try from 0862e838 to 0862e83c has its CatchHandler @ 0862e851 */
    local_2c = (SlangNode *)SlangNode::AddChild((uint)local_2c);
    writeGuard<rwLock>::~writeGuard(local_30);
    local_28 = local_28 + 1;
  }
  SlangNode::SetEndNode(local_2c,true);
  return;
}
```
