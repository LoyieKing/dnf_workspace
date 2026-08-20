# GetURL

`_ZN11sync_script11CSyncScript6GetURLEPKcii`

`sync_script::CSyncScript::GetURL(char const*, int, int)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x0861d706` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861d706  _ZN11sync_script11CSyncScript6GetURLEPKcii
#           sync_script::CSyncScript::GetURL(char const*, int, int)
# range [0x0861d706, 0x0861d87d]
0861d706 +0x000:  push   %ebp
0861d707 +0x001:  mov    %esp,%ebp
0861d709 +0x003:  push   %edi
0861d70a +0x004:  push   %esi
0861d70b +0x005:  push   %ebx
0861d70c +0x006:  sub    $0x3c,%esp
0861d70f +0x009:  mov    $&_ZGVZN11sync_script11CSyncScript6GetURLEPKciiE6strUrl,%eax
0861d714 +0x00e:  movzbl (%eax),%eax
0861d717 +0x011:  test   %al,%al
0861d719 +0x013:  jne    0861d78c <+0x86>
0861d71b +0x015:  movl   $&_ZGVZN11sync_script11CSyncScript6GetURLEPKciiE6strUrl,(%esp)
0861d722 +0x01c:  call   08725330 <__cxa_guard_acquire>
0861d727 +0x021:  test   %eax,%eax
0861d729 +0x023:  setne  %al
0861d72c +0x026:  test   %al,%al
0861d72e +0x028:  je     0861d78c <+0x86>
0861d730 +0x02a:  mov    $0x0,%ebx
0861d735 +0x02f:  movl   $&_ZZN11sync_script11CSyncScript6GetURLEPKciiE6strUrl,(%esp)
0861d73c +0x036:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0861d741 +0x03b:  movl   $&_ZGVZN11sync_script11CSyncScript6GetURLEPKciiE6strUrl,(%esp)
0861d748 +0x042:  call   08725250 <__cxa_guard_release>
0861d74d +0x047:  mov    $&_ZNSsD1Ev,%eax
0861d752 +0x04c:  movl   $&__dso_handle,0x8(%esp)
0861d75a +0x054:  movl   $&_ZZN11sync_script11CSyncScript6GetURLEPKciiE6strUrl,0x4(%esp)
0861d762 +0x05c:  mov    %eax,(%esp)
0861d765 +0x05f:  call   0807ddd0 <_init+0x6c8>
0861d76a +0x064:  jmp    0861d78c <+0x86>
0861d76c +0x066:  mov    %edx,%esi
0861d76e +0x068:  mov    %eax,%edi
0861d770 +0x06a:  test   %bl,%bl
0861d772 +0x06c:  jne    0861d780 <+0x7a>
0861d774 +0x06e:  movl   $&_ZGVZN11sync_script11CSyncScript6GetURLEPKciiE6strUrl,(%esp)
0861d77b +0x075:  call   087252c0 <__cxa_guard_abort>
0861d780 +0x07a:  mov    %edi,%eax
0861d782 +0x07c:  mov    %esi,%edx
0861d784 +0x07e:  mov    %eax,(%esp)
0861d787 +0x081:  call   08ae3750 <_Unwind_Resume>
0861d78c +0x086:  movl   $&_ZZN11sync_script11CSyncScript6GetURLEPKciiE6strUrl,(%esp)
0861d793 +0x08d:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0861d798 +0x092:  movl   $0x0,-0x24(%ebp)
0861d79f +0x099:  movl   $0x0,-0x20(%ebp)
0861d7a6 +0x0a0:  movl   $0x0,-0x1c(%ebp)
0861d7ad +0x0a7:  movl   $0x0,-0x1c(%ebp)
0861d7b4 +0x0ae:  jmp    0861d7e3 <+0xdd>
0861d7b6 +0x0b0:  mov    -0x1c(%ebp),%eax
0861d7b9 +0x0b3:  add    0xc(%ebp),%eax
0861d7bc +0x0b6:  movzbl (%eax),%eax
0861d7bf +0x0b9:  cmp    $0x2f,%al
0861d7c1 +0x0bb:  jne    0861d7cc <+0xc6>
0861d7c3 +0x0bd:  mov    -0x1c(%ebp),%eax
0861d7c6 +0x0c0:  add    $0x1,%eax
0861d7c9 +0x0c3:  mov    %eax,-0x24(%ebp)
0861d7cc +0x0c6:  mov    -0x1c(%ebp),%eax
0861d7cf +0x0c9:  add    0xc(%ebp),%eax
0861d7d2 +0x0cc:  movzbl (%eax),%eax
0861d7d5 +0x0cf:  cmp    $0x2e,%al
0861d7d7 +0x0d1:  jne    0861d7df <+0xd9>
0861d7d9 +0x0d3:  mov    -0x1c(%ebp),%eax
0861d7dc +0x0d6:  mov    %eax,-0x20(%ebp)
0861d7df +0x0d9:  addl   $0x1,-0x1c(%ebp)
0861d7e3 +0x0dd:  mov    -0x1c(%ebp),%eax
0861d7e6 +0x0e0:  cmp    0x10(%ebp),%eax
0861d7e9 +0x0e3:  setl   %al
0861d7ec +0x0e6:  test   %al,%al
0861d7ee +0x0e8:  jne    0861d7b6 <+0xb0>
0861d7f0 +0x0ea:  mov    -0x24(%ebp),%eax
0861d7f3 +0x0ed:  mov    -0x20(%ebp),%edx
0861d7f6 +0x0f0:  mov    %edx,%ecx
0861d7f8 +0x0f2:  sub    %eax,%ecx
0861d7fa +0x0f4:  mov    %ecx,%eax
0861d7fc +0x0f6:  mov    %eax,%edx
0861d7fe +0x0f8:  mov    -0x24(%ebp),%eax
0861d801 +0x0fb:  add    0xc(%ebp),%eax
0861d804 +0x0fe:  mov    %edx,0xc(%esp)
0861d808 +0x102:  mov    %eax,0x8(%esp)
0861d80c +0x106:  movl   $0x0,0x4(%esp)
0861d814 +0x10e:  movl   $&_ZZN11sync_script11CSyncScript6GetURLEPKciiE6strUrl,(%esp)
0861d81b +0x115:  call   08708b40 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2750>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2750
0861d820 +0x11a:  movl   $0x0,-0x34(%ebp)
0861d827 +0x121:  movl   $0x0,-0x30(%ebp)
0861d82e +0x128:  movl   $0x0,-0x2c(%ebp)
0861d835 +0x12f:  movl   $0x0,-0x28(%ebp)
0861d83c +0x136:  mov    0x14(%ebp),%eax
0861d83f +0x139:  mov    %eax,0x8(%esp)
0861d843 +0x13d:  movl   $"/%05d.png",0x4(%esp)
0861d84b +0x145:  lea    -0x34(%ebp),%eax
0861d84e +0x148:  mov    %eax,(%esp)
0861d851 +0x14b:  call   0807e440 <_init+0xd38>
0861d856 +0x150:  lea    -0x34(%ebp),%eax
0861d859 +0x153:  mov    %eax,0x4(%esp)
0861d85d +0x157:  movl   $&_ZZN11sync_script11CSyncScript6GetURLEPKciiE6strUrl,(%esp)
0861d864 +0x15e:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0861d869 +0x163:  movl   $&_ZZN11sync_script11CSyncScript6GetURLEPKciiE6strUrl,(%esp)
0861d870 +0x16a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861d875 +0x16f:  add    $0x3c,%esp
0861d878 +0x172:  pop    %ebx
0861d879 +0x173:  pop    %esi
0861d87a +0x174:  pop    %edi
0861d87b +0x175:  pop    %ebp
0861d87c +0x176:  ret
0861d87d +0x177:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::GetURL @ 0x861d706

/* sync_script::CSyncScript::GetURL(char const*, int, int) */

void __thiscall
sync_script::CSyncScript::GetURL(CSyncScript *this,char *param_1,int param_2,int param_3)

{
  int iVar1;
  char local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  
  if (GetURL(char_const*,int,int)::strUrl == '\0') {
    iVar1 = __cxa_guard_acquire(&GetURL(char_const*,int,int)::strUrl);
    if (iVar1 != 0) {
                    /* try { // try from 0861d73c to 0861d740 has its CatchHandler @ 0861d76c */
      std::string::string((string *)&GetURL(char_const*,int,int)::strUrl);
      __cxa_guard_release(&GetURL(char_const*,int,int)::strUrl);
      __cxa_atexit(std::string::~string,&GetURL(char_const*,int,int)::strUrl,&__dso_handle);
    }
  }
  std::string::clear((string *)&GetURL(char_const*,int,int)::strUrl);
  local_28 = 0;
  local_24 = 0;
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    if (param_1[local_20] == '/') {
      local_28 = local_20 + 1;
    }
    if (param_1[local_20] == '.') {
      local_24 = local_20;
    }
  }
  std::string::insert((string *)&GetURL(char_const*,int,int)::strUrl,0,param_1 + local_28,
                      local_24 - local_28);
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  sprintf(local_38,"/%05d.png",param_3);
  std::string::operator+=((string *)&GetURL(char_const*,int,int)::strUrl,local_38);
  std::string::c_str((string *)&GetURL(char_const*,int,int)::strUrl);
  return;
}
```
