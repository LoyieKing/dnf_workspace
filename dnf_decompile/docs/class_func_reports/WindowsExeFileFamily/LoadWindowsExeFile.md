# LoadWindowsExeFile

`_ZN20WindowsExeFileFamily18LoadWindowsExeFileEPKcS1_`

`WindowsExeFileFamily::LoadWindowsExeFile(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `WindowsExeFileFamily` | `0x0857463e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857463e  _ZN20WindowsExeFileFamily18LoadWindowsExeFileEPKcS1_
#           WindowsExeFileFamily::LoadWindowsExeFile(char const*, char const*)
# range [0x0857463e, 0x08574735]
0857463e +0x00:  push   %ebp
0857463f +0x01:  mov    %esp,%ebp
08574641 +0x03:  push   %edi
08574642 +0x04:  push   %esi
08574643 +0x05:  push   %ebx
08574644 +0x06:  sub    $0x2c,%esp
08574647 +0x09:  movl   $0x20,(%esp)
0857464e +0x10:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08574653 +0x15:  mov    %eax,%ebx
08574655 +0x17:  mov    %ebx,%eax
08574657 +0x19:  mov    %eax,(%esp)
0857465a +0x1c:  call   085736be <_ZN14WindowsExeFileC1Ev>  ; WindowsExeFile::WindowsExeFile()
0857465f +0x21:  jmp    08574679 <+0x3b>
08574661 +0x23:  mov    %edx,%esi
08574663 +0x25:  mov    %eax,%edi
08574665 +0x27:  mov    %ebx,(%esp)
08574668 +0x2a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0857466d +0x2f:  mov    %edi,%eax
0857466f +0x31:  mov    %esi,%edx
08574671 +0x33:  mov    %eax,(%esp)
08574674 +0x36:  call   08ae3750 <_Unwind_Resume>
08574679 +0x3b:  mov    %ebx,%eax
0857467b +0x3d:  mov    %eax,-0x1c(%ebp)
0857467e +0x40:  mov    0x8(%ebp),%eax
08574681 +0x43:  add    $0xc,%eax
08574684 +0x46:  mov    %eax,(%esp)
08574687 +0x49:  call   08576766 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x92a>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x92a
0857468c +0x4e:  test   %al,%al
0857468e +0x50:  je     085746a5 <+0x67>
08574690 +0x52:  mov    0x8(%ebp),%eax
08574693 +0x55:  lea    0x18(%eax),%edx
08574696 +0x58:  mov    0x10(%ebp),%eax
08574699 +0x5b:  mov    %eax,0x4(%esp)
0857469d +0x5f:  mov    %edx,(%esp)
085746a0 +0x62:  call   0808a5dd <_Z13StrCpyMaxPathPcPKc>  ; StrCpyMaxPath(char*, char const*)
085746a5 +0x67:  mov    -0x1c(%ebp),%eax
085746a8 +0x6a:  mov    0xc(%ebp),%edx
085746ab +0x6d:  mov    %edx,0x4(%esp)
085746af +0x71:  mov    %eax,(%esp)
085746b2 +0x74:  call   085740de <_ZN14WindowsExeFile18LoadWindowsExeFileEPKc>  ; WindowsExeFile::LoadWindowsExeFile(char const*)
085746b7 +0x79:  xor    $0x1,%eax
085746ba +0x7c:  test   %al,%al
085746bc +0x7e:  je     085746dc <+0x9e>
085746be +0x80:  mov    -0x1c(%ebp),%ebx
085746c1 +0x83:  test   %ebx,%ebx
085746c3 +0x85:  je     085746d5 <+0x97>
085746c5 +0x87:  mov    %ebx,(%esp)
085746c8 +0x8a:  call   0857371a <_ZN14WindowsExeFileD1Ev>  ; WindowsExeFile::~WindowsExeFile()
085746cd +0x8f:  mov    %ebx,(%esp)
085746d0 +0x92:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085746d5 +0x97:  mov    $0x0,%eax
085746da +0x9c:  jmp    0857472d <+0xef>
085746dc +0x9e:  mov    -0x1c(%ebp),%eax
085746df +0xa1:  mov    %eax,0x4(%esp)
085746e3 +0xa5:  mov    0x8(%ebp),%eax
085746e6 +0xa8:  mov    %eax,(%esp)
085746e9 +0xab:  call   08574ace <_ZN20WindowsExeFileFamily19IsDifferentFileDataEP14WindowsExeFile>  ; WindowsExeFileFamily::IsDifferentFileData(WindowsExeFile*)
085746ee +0xb0:  xor    $0x1,%eax
085746f1 +0xb3:  test   %al,%al
085746f3 +0xb5:  je     08574713 <+0xd5>
085746f5 +0xb7:  mov    -0x1c(%ebp),%ebx
085746f8 +0xba:  test   %ebx,%ebx
085746fa +0xbc:  je     0857470c <+0xce>
085746fc +0xbe:  mov    %ebx,(%esp)
085746ff +0xc1:  call   0857371a <_ZN14WindowsExeFileD1Ev>  ; WindowsExeFile::~WindowsExeFile()
08574704 +0xc6:  mov    %ebx,(%esp)
08574707 +0xc9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0857470c +0xce:  mov    $0x1,%eax
08574711 +0xd3:  jmp    0857472d <+0xef>
08574713 +0xd5:  mov    0x8(%ebp),%eax
08574716 +0xd8:  lea    0xc(%eax),%edx
08574719 +0xdb:  lea    -0x1c(%ebp),%eax
0857471c +0xde:  mov    %eax,0x4(%esp)
08574720 +0xe2:  mov    %edx,(%esp)
08574723 +0xe5:  call   085767aa <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x96e>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x96e
08574728 +0xea:  mov    $0x1,%eax
0857472d +0xef:  add    $0x2c,%esp
08574730 +0xf2:  pop    %ebx
08574731 +0xf3:  pop    %esi
08574732 +0xf4:  pop    %edi
08574733 +0xf5:  pop    %ebp
08574734 +0xf6:  ret
08574735 +0xf7:  nop
```

## 反编译 C

```c
// WindowsExeFileFamily::LoadWindowsExeFile @ 0x857463e

/* WindowsExeFileFamily::LoadWindowsExeFile(char const*, char const*) */

undefined4 __thiscall
WindowsExeFileFamily::LoadWindowsExeFile(WindowsExeFileFamily *this,char *param_1,char *param_2)

{
  char cVar1;
  WindowsExeFile *pWVar2;
  undefined4 uVar3;
  WindowsExeFile *local_20 [4];
  
  pWVar2 = operator_new(0x20);
                    /* try { // try from 0857465a to 0857465e has its CatchHandler @ 08574661 */
  WindowsExeFile::WindowsExeFile(pWVar2);
  local_20[0] = pWVar2;
  cVar1 = std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::empty();
  if (cVar1 != '\0') {
    StrCpyMaxPath((char *)(this + 0x18),param_2);
  }
  cVar1 = WindowsExeFile::LoadWindowsExeFile(local_20[0],param_1);
  pWVar2 = local_20[0];
  if (cVar1 == '\x01') {
    cVar1 = IsDifferentFileData(this,local_20[0]);
    pWVar2 = local_20[0];
    if (cVar1 == '\x01') {
      std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::push_back
                ((vector<WindowsExeFile*,std::allocator<WindowsExeFile*>> *)(this + 0xc),local_20);
      uVar3 = 1;
    }
    else {
      if (local_20[0] != (WindowsExeFile *)0x0) {
        WindowsExeFile::~WindowsExeFile(local_20[0]);
        operator_delete(pWVar2);
      }
      uVar3 = 1;
    }
  }
  else {
    if (local_20[0] != (WindowsExeFile *)0x0) {
      WindowsExeFile::~WindowsExeFile(local_20[0]);
      operator_delete(pWVar2);
    }
    uVar3 = 0;
  }
  return uVar3;
}
```
