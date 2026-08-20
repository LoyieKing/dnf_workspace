# LoadDialogTag

`_ZN20GlobalScriptTutorial13LoadDialogTagER17ENUM_CHARACTERJOB`

`GlobalScriptTutorial::LoadDialogTag(ENUM_CHARACTERJOB&)`

| 类 | 地址 |
|---|---|
| `GlobalScriptTutorial` | `0x08ab9226` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab9226  _ZN20GlobalScriptTutorial13LoadDialogTagER17ENUM_CHARACTERJOB
#           GlobalScriptTutorial::LoadDialogTag(ENUM_CHARACTERJOB&)
# range [0x08ab9226, 0x08ab9309]
08ab9226 +0x00:  push   %ebp
08ab9227 +0x01:  mov    %esp,%ebp
08ab9229 +0x03:  push   %esi
08ab922a +0x04:  push   %ebx
08ab922b +0x05:  sub    $0x20,%esp
08ab922e +0x08:  mov    0xc(%ebp),%eax
08ab9231 +0x0b:  mov    (%eax),%eax
08ab9233 +0x0d:  cmp    $0xb,%eax
08ab9236 +0x10:  je     08ab9301 <+0xdb>
08ab923c +0x16:  jmp    08ab923f <+0x19>
08ab923e +0x18:  nop
08ab923f +0x19:  lea    -0x14(%ebp),%eax
08ab9242 +0x1c:  mov    %eax,(%esp)
08ab9245 +0x1f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ab924a +0x24:  lea    -0xc(%ebp),%eax
08ab924d +0x27:  mov    %eax,(%esp)
08ab9250 +0x2a:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab9255 +0x2f:  xor    $0x1,%eax
08ab9258 +0x32:  test   %al,%al
08ab925a +0x34:  jne    08ab9280 <+0x5a>
08ab925c +0x36:  lea    -0x10(%ebp),%eax
08ab925f +0x39:  mov    %eax,(%esp)
08ab9262 +0x3c:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab9267 +0x41:  xor    $0x1,%eax
08ab926a +0x44:  test   %al,%al
08ab926c +0x46:  jne    08ab9280 <+0x5a>
08ab926e +0x48:  lea    -0x14(%ebp),%eax
08ab9271 +0x4b:  mov    %eax,(%esp)
08ab9274 +0x4e:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08ab9279 +0x53:  xor    $0x1,%eax
08ab927c +0x56:  test   %al,%al
08ab927e +0x58:  je     08ab9287 <+0x61>
08ab9280 +0x5a:  mov    $0x1,%eax
08ab9285 +0x5f:  jmp    08ab928c <+0x66>
08ab9287 +0x61:  mov    $0x0,%eax
08ab928c +0x66:  test   %al,%al
08ab928e +0x68:  je     08ab9297 <+0x71>
08ab9290 +0x6a:  mov    $0x0,%ebx
08ab9295 +0x6f:  jmp    08ab92ec <+0xc6>
08ab9297 +0x71:  lea    -0x14(%ebp),%eax
08ab929a +0x74:  mov    %eax,(%esp)
08ab929d +0x77:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ab92a2 +0x7c:  mov    -0x10(%ebp),%ebx
08ab92a5 +0x7f:  mov    -0xc(%ebp),%ecx
08ab92a8 +0x82:  mov    0xc(%ebp),%edx
08ab92ab +0x85:  mov    (%edx),%edx
08ab92ad +0x87:  imul   $0x148,%edx,%edx
08ab92b3 +0x8d:  add    0x8(%ebp),%edx
08ab92b6 +0x90:  mov    %eax,0xc(%esp)
08ab92ba +0x94:  mov    %ebx,0x8(%esp)
08ab92be +0x98:  mov    %ecx,0x4(%esp)
08ab92c2 +0x9c:  mov    %edx,(%esp)
08ab92c5 +0x9f:  call   08ab82dc <_ZN12TutorialData13addDialogDataEiiPKc>  ; TutorialData::addDialogData(int, int, char const*)
08ab92ca +0xa4:  mov    $0x1,%ebx
08ab92cf +0xa9:  jmp    08ab92ec <+0xc6>
08ab92d1 +0xab:  mov    %edx,%ebx
08ab92d3 +0xad:  mov    %eax,%esi
08ab92d5 +0xaf:  lea    -0x14(%ebp),%eax
08ab92d8 +0xb2:  mov    %eax,(%esp)
08ab92db +0xb5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab92e0 +0xba:  mov    %esi,%eax
08ab92e2 +0xbc:  mov    %ebx,%edx
08ab92e4 +0xbe:  mov    %eax,(%esp)
08ab92e7 +0xc1:  call   08ae3750 <_Unwind_Resume>
08ab92ec +0xc6:  lea    -0x14(%ebp),%eax
08ab92ef +0xc9:  mov    %eax,(%esp)
08ab92f2 +0xcc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ab92f7 +0xd1:  test   %ebx,%ebx
08ab92f9 +0xd3:  jne    08ab923e <+0x18>
08ab92ff +0xd9:  jmp    08ab9302 <+0xdc>
08ab9301 +0xdb:  nop
08ab9302 +0xdc:  add    $0x20,%esp
08ab9305 +0xdf:  pop    %ebx
08ab9306 +0xe0:  pop    %esi
08ab9307 +0xe1:  pop    %ebp
08ab9308 +0xe2:  ret
08ab9309 +0xe3:  nop
```

## 反编译 C

```c
// GlobalScriptTutorial::LoadDialogTag @ 0x8ab9226

/* GlobalScriptTutorial::LoadDialogTag(ENUM_CHARACTERJOB&) */

void __thiscall
GlobalScriptTutorial::LoadDialogTag(GlobalScriptTutorial *this,ENUM_CHARACTERJOB *param_1)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  string local_18 [4];
  int local_14;
  int local_10;
  
  if (*(int *)param_1 != 0xb) {
    do {
      std::string::string(local_18);
                    /* try { // try from 08ab9250 to 08ab92c9 has its CatchHandler @ 08ab92d1 */
      cVar2 = ScanInt(&local_10);
      if (((cVar2 == '\x01') && (cVar2 = ScanInt(&local_14), cVar2 == '\x01')) &&
         (cVar2 = ScanStr(local_18), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        pcVar3 = (char *)std::string::c_str(local_18);
        TutorialData::addDialogData
                  ((TutorialData *)(this + *(int *)param_1 * 0x148),local_10,local_14,pcVar3);
      }
      std::string::~string(local_18);
    } while (!bVar1);
  }
  return;
}
```
