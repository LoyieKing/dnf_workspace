# LoadTutorialNotice

`_ZN20GlobalScriptTutorial18LoadTutorialNoticeER17ENUM_CHARACTERJOB`

`GlobalScriptTutorial::LoadTutorialNotice(ENUM_CHARACTERJOB&)`

| 类 | 地址 |
|---|---|
| `GlobalScriptTutorial` | `0x08ab95ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab95ac  _ZN20GlobalScriptTutorial18LoadTutorialNoticeER17ENUM_CHARACTERJOB
#           GlobalScriptTutorial::LoadTutorialNotice(ENUM_CHARACTERJOB&)
# range [0x08ab95ac, 0x08ab96a7]
08ab95ac +0x00:  push   %ebp
08ab95ad +0x01:  mov    %esp,%ebp
08ab95af +0x03:  push   %esi
08ab95b0 +0x04:  push   %ebx
08ab95b1 +0x05:  sub    $0x30,%esp
08ab95b4 +0x08:  mov    0xc(%ebp),%eax
08ab95b7 +0x0b:  mov    (%eax),%eax
08ab95b9 +0x0d:  cmp    $0xb,%eax
08ab95bc +0x10:  je     08ab96a0 <+0xf4>
08ab95c2 +0x16:  jmp    08ab95c5 <+0x19>
08ab95c4 +0x18:  nop
08ab95c5 +0x19:  lea    -0x18(%ebp),%eax
08ab95c8 +0x1c:  mov    %eax,(%esp)
08ab95cb +0x1f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ab95d0 +0x24:  lea    -0xc(%ebp),%eax
08ab95d3 +0x27:  mov    %eax,(%esp)
08ab95d6 +0x2a:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab95db +0x2f:  xor    $0x1,%eax
08ab95de +0x32:  test   %al,%al
08ab95e0 +0x34:  jne    08ab9618 <+0x6c>
08ab95e2 +0x36:  lea    -0x10(%ebp),%eax
08ab95e5 +0x39:  mov    %eax,(%esp)
08ab95e8 +0x3c:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab95ed +0x41:  xor    $0x1,%eax
08ab95f0 +0x44:  test   %al,%al
08ab95f2 +0x46:  jne    08ab9618 <+0x6c>
08ab95f4 +0x48:  lea    -0x14(%ebp),%eax
08ab95f7 +0x4b:  mov    %eax,(%esp)
08ab95fa +0x4e:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab95ff +0x53:  xor    $0x1,%eax
08ab9602 +0x56:  test   %al,%al
08ab9604 +0x58:  jne    08ab9618 <+0x6c>
08ab9606 +0x5a:  lea    -0x18(%ebp),%eax
08ab9609 +0x5d:  mov    %eax,(%esp)
08ab960c +0x60:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08ab9611 +0x65:  xor    $0x1,%eax
08ab9614 +0x68:  test   %al,%al
08ab9616 +0x6a:  je     08ab961f <+0x73>
08ab9618 +0x6c:  mov    $0x1,%eax
08ab961d +0x71:  jmp    08ab9624 <+0x78>
08ab961f +0x73:  mov    $0x0,%eax
08ab9624 +0x78:  test   %al,%al
08ab9626 +0x7a:  je     08ab962f <+0x83>
08ab9628 +0x7c:  mov    $0x0,%ebx
08ab962d +0x81:  jmp    08ab968b <+0xdf>
08ab962f +0x83:  lea    -0x18(%ebp),%eax
08ab9632 +0x86:  mov    %eax,(%esp)
08ab9635 +0x89:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ab963a +0x8e:  mov    -0x14(%ebp),%esi
08ab963d +0x91:  mov    -0x10(%ebp),%ebx
08ab9640 +0x94:  mov    -0xc(%ebp),%ecx
08ab9643 +0x97:  mov    0xc(%ebp),%edx
08ab9646 +0x9a:  mov    (%edx),%edx
08ab9648 +0x9c:  imul   $0x148,%edx,%edx
08ab964e +0xa2:  add    0x8(%ebp),%edx
08ab9651 +0xa5:  mov    %eax,0x10(%esp)
08ab9655 +0xa9:  mov    %esi,0xc(%esp)
08ab9659 +0xad:  mov    %ebx,0x8(%esp)
08ab965d +0xb1:  mov    %ecx,0x4(%esp)
08ab9661 +0xb5:  mov    %edx,(%esp)
08ab9664 +0xb8:  call   08ab8a86 <_ZN12TutorialData17addTutorialNoticeEiiiPKc>  ; TutorialData::addTutorialNotice(int, int, int, char const*)
08ab9669 +0xbd:  mov    $0x1,%ebx
08ab966e +0xc2:  jmp    08ab968b <+0xdf>
08ab9670 +0xc4:  mov    %edx,%ebx
08ab9672 +0xc6:  mov    %eax,%esi
08ab9674 +0xc8:  lea    -0x18(%ebp),%eax
08ab9677 +0xcb:  mov    %eax,(%esp)
08ab967a +0xce:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab967f +0xd3:  mov    %esi,%eax
08ab9681 +0xd5:  mov    %ebx,%edx
08ab9683 +0xd7:  mov    %eax,(%esp)
08ab9686 +0xda:  call   08ae3750 <_Unwind_Resume>
08ab968b +0xdf:  lea    -0x18(%ebp),%eax
08ab968e +0xe2:  mov    %eax,(%esp)
08ab9691 +0xe5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab9696 +0xea:  test   %ebx,%ebx
08ab9698 +0xec:  jne    08ab95c4 <+0x18>
08ab969e +0xf2:  jmp    08ab96a1 <+0xf5>
08ab96a0 +0xf4:  nop
08ab96a1 +0xf5:  add    $0x30,%esp
08ab96a4 +0xf8:  pop    %ebx
08ab96a5 +0xf9:  pop    %esi
08ab96a6 +0xfa:  pop    %ebp
08ab96a7 +0xfb:  ret
```

## 反编译 C

```c
// GlobalScriptTutorial::LoadTutorialNotice @ 0x8ab95ac

/* GlobalScriptTutorial::LoadTutorialNotice(ENUM_CHARACTERJOB&) */

void __thiscall
GlobalScriptTutorial::LoadTutorialNotice(GlobalScriptTutorial *this,ENUM_CHARACTERJOB *param_1)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  string local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)param_1 != 0xb) {
    do {
      std::string::string(local_1c);
                    /* try { // try from 08ab95d6 to 08ab9668 has its CatchHandler @ 08ab9670 */
      cVar2 = ScanInt(&local_10);
      if ((((cVar2 == '\x01') && (cVar2 = ScanInt(&local_14), cVar2 == '\x01')) &&
          (cVar2 = ScanInt(&local_18), cVar2 == '\x01')) &&
         (cVar2 = ScanStr(local_1c), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        pcVar3 = (char *)std::string::c_str(local_1c);
        TutorialData::addTutorialNotice
                  ((TutorialData *)(this + *(int *)param_1 * 0x148),local_10,local_14,local_18,
                   pcVar3);
      }
      std::string::~string(local_1c);
    } while (!bVar1);
  }
  return;
}
```
