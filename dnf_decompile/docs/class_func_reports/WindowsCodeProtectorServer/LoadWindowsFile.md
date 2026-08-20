# LoadWindowsFile

`_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_`

`WindowsCodeProtectorServer::LoadWindowsFile(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `WindowsCodeProtectorServer` | `0x08575712` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575712  _ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_
#           WindowsCodeProtectorServer::LoadWindowsFile(char const*, char const*)
# range [0x08575712, 0x0857592b]
08575712 +0x000:  push   %ebp
08575713 +0x001:  mov    %esp,%ebp
08575715 +0x003:  push   %edi
08575716 +0x004:  push   %esi
08575717 +0x005:  push   %ebx
08575718 +0x006:  sub    $0x2c,%esp
0857571b +0x009:  movl   $".exe.bak",0x4(%esp)
08575723 +0x011:  mov    0xc(%ebp),%eax
08575726 +0x014:  mov    %eax,(%esp)
08575729 +0x017:  call   0807dac0 <_init+0x3b8>
0857572e +0x01c:  test   %eax,%eax
08575730 +0x01e:  je     08575832 <+0x120>
08575736 +0x024:  mov    0x8(%ebp),%eax
08575739 +0x027:  mov    (%eax),%eax
0857573b +0x029:  test   %eax,%eax
0857573d +0x02b:  jne    085757ca <+0xb8>
08575743 +0x031:  movl   $0x12c,(%esp)
0857574a +0x038:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0857574f +0x03d:  mov    %eax,%ebx
08575751 +0x03f:  mov    %ebx,%eax
08575753 +0x041:  mov    %eax,(%esp)
08575756 +0x044:  call   0857446a <_ZN20WindowsExeFileFamilyC1Ev>  ; WindowsExeFileFamily::WindowsExeFileFamily()
0857575b +0x049:  jmp    08575775 <+0x63>
0857575d +0x04b:  mov    %edx,%esi
0857575f +0x04d:  mov    %eax,%edi
08575761 +0x04f:  mov    %ebx,(%esp)
08575764 +0x052:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08575769 +0x057:  mov    %edi,%eax
0857576b +0x059:  mov    %esi,%edx
0857576d +0x05b:  mov    %eax,(%esp)
08575770 +0x05e:  call   08ae3750 <_Unwind_Resume>
08575775 +0x063:  mov    %ebx,%edx
08575777 +0x065:  mov    0x8(%ebp),%eax
0857577a +0x068:  mov    %edx,(%eax)
0857577c +0x06a:  mov    0x8(%ebp),%eax
0857577f +0x06d:  mov    (%eax),%eax
08575781 +0x06f:  mov    0x10(%ebp),%edx
08575784 +0x072:  mov    %edx,0x8(%esp)
08575788 +0x076:  mov    0xc(%ebp),%edx
0857578b +0x079:  mov    %edx,0x4(%esp)
0857578f +0x07d:  mov    %eax,(%esp)
08575792 +0x080:  call   0857463e <_ZN20WindowsExeFileFamily18LoadWindowsExeFileEPKcS1_>  ; WindowsExeFileFamily::LoadWindowsExeFile(char const*, char const*)
08575797 +0x085:  test   %al,%al
08575799 +0x087:  je     0857591e <+0x20c>
0857579f +0x08d:  mov    0x8(%ebp),%eax
085757a2 +0x090:  mov    0x24(%eax),%ecx
085757a5 +0x093:  mov    0x8(%ebp),%eax
085757a8 +0x096:  mov    0x20(%eax),%edx
085757ab +0x099:  mov    0x8(%ebp),%eax
085757ae +0x09c:  mov    (%eax),%eax
085757b0 +0x09e:  mov    %ecx,0x8(%esp)
085757b4 +0x0a2:  mov    %edx,0x4(%esp)
085757b8 +0x0a6:  mov    %eax,(%esp)
085757bb +0x0a9:  call   08574620 <_ZN20WindowsExeFileFamily17SetCheckingOptionEmm>  ; WindowsExeFileFamily::SetCheckingOption(unsigned long, unsigned long)
085757c0 +0x0ae:  mov    $0x1,%eax
085757c5 +0x0b3:  jmp    08575923 <+0x211>
085757ca +0x0b8:  mov    0x10(%ebp),%eax
085757cd +0x0bb:  mov    %eax,0x4(%esp)
085757d1 +0x0bf:  mov    0x8(%ebp),%eax
085757d4 +0x0c2:  mov    %eax,(%esp)
085757d7 +0x0c5:  call   085755f6 <_ZN26WindowsCodeProtectorServer17FindExeFamilyFileEPKc>  ; WindowsCodeProtectorServer::FindExeFamilyFile(char const*)
085757dc +0x0ca:  test   %al,%al
085757de +0x0cc:  je     0857591e <+0x20c>
085757e4 +0x0d2:  mov    0x8(%ebp),%eax
085757e7 +0x0d5:  mov    (%eax),%eax
085757e9 +0x0d7:  mov    0x10(%ebp),%edx
085757ec +0x0da:  mov    %edx,0x8(%esp)
085757f0 +0x0de:  mov    0xc(%ebp),%edx
085757f3 +0x0e1:  mov    %edx,0x4(%esp)
085757f7 +0x0e5:  mov    %eax,(%esp)
085757fa +0x0e8:  call   0857463e <_ZN20WindowsExeFileFamily18LoadWindowsExeFileEPKcS1_>  ; WindowsExeFileFamily::LoadWindowsExeFile(char const*, char const*)
085757ff +0x0ed:  test   %al,%al
08575801 +0x0ef:  je     0857591e <+0x20c>
08575807 +0x0f5:  mov    0x8(%ebp),%eax
0857580a +0x0f8:  mov    0x24(%eax),%ecx
0857580d +0x0fb:  mov    0x8(%ebp),%eax
08575810 +0x0fe:  mov    0x20(%eax),%edx
08575813 +0x101:  mov    0x8(%ebp),%eax
08575816 +0x104:  mov    (%eax),%eax
08575818 +0x106:  mov    %ecx,0x8(%esp)
0857581c +0x10a:  mov    %edx,0x4(%esp)
08575820 +0x10e:  mov    %eax,(%esp)
08575823 +0x111:  call   08574620 <_ZN20WindowsExeFileFamily17SetCheckingOptionEmm>  ; WindowsExeFileFamily::SetCheckingOption(unsigned long, unsigned long)
08575828 +0x116:  mov    $0x1,%eax
0857582d +0x11b:  jmp    08575923 <+0x211>
08575832 +0x120:  mov    0x10(%ebp),%eax
08575835 +0x123:  mov    %eax,0x4(%esp)
08575839 +0x127:  mov    0x8(%ebp),%eax
0857583c +0x12a:  mov    %eax,(%esp)
0857583f +0x12d:  call   0857562e <_ZN26WindowsCodeProtectorServer18FindDataFamilyFileEPKc>  ; WindowsCodeProtectorServer::FindDataFamilyFile(char const*)
08575844 +0x132:  mov    %eax,-0x1c(%ebp)
08575847 +0x135:  mov    -0x1c(%ebp),%eax
0857584a +0x138:  test   %eax,%eax
0857584c +0x13a:  jne    085758fa <+0x1e8>
08575852 +0x140:  movl   $0x120,(%esp)
08575859 +0x147:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0857585e +0x14c:  mov    %eax,%ebx
08575860 +0x14e:  mov    %ebx,%eax
08575862 +0x150:  mov    %eax,(%esp)
08575865 +0x153:  call   08574f16 <_ZN21WindowsDataFileFamilyC1Ev>  ; WindowsDataFileFamily::WindowsDataFileFamily()
0857586a +0x158:  jmp    08575884 <+0x172>
0857586c +0x15a:  mov    %edx,%esi
0857586e +0x15c:  mov    %eax,%edi
08575870 +0x15e:  mov    %ebx,(%esp)
08575873 +0x161:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08575878 +0x166:  mov    %edi,%eax
0857587a +0x168:  mov    %esi,%edx
0857587c +0x16a:  mov    %eax,(%esp)
0857587f +0x16d:  call   08ae3750 <_Unwind_Resume>
08575884 +0x172:  mov    %ebx,%eax
08575886 +0x174:  mov    %eax,-0x1c(%ebp)
08575889 +0x177:  mov    -0x1c(%ebp),%eax
0857588c +0x17a:  mov    0x10(%ebp),%edx
0857588f +0x17d:  mov    %edx,0x8(%esp)
08575893 +0x181:  mov    0xc(%ebp),%edx
08575896 +0x184:  mov    %edx,0x4(%esp)
0857589a +0x188:  mov    %eax,(%esp)
0857589d +0x18b:  call   0857513c <_ZN21WindowsDataFileFamily19LoadWindowsDataFileEPKcS1_>  ; WindowsDataFileFamily::LoadWindowsDataFile(char const*, char const*)
085758a2 +0x190:  test   %al,%al
085758a4 +0x192:  je     085758e1 <+0x1cf>
085758a6 +0x194:  mov    0x8(%ebp),%eax
085758a9 +0x197:  mov    0x2c(%eax),%ecx
085758ac +0x19a:  mov    0x8(%ebp),%eax
085758af +0x19d:  mov    0x28(%eax),%edx
085758b2 +0x1a0:  mov    -0x1c(%ebp),%eax
085758b5 +0x1a3:  mov    %ecx,0x8(%esp)
085758b9 +0x1a7:  mov    %edx,0x4(%esp)
085758bd +0x1ab:  mov    %eax,(%esp)
085758c0 +0x1ae:  call   0857511e <_ZN21WindowsDataFileFamily17SetCheckingOptionEmm>  ; WindowsDataFileFamily::SetCheckingOption(unsigned long, unsigned long)
085758c5 +0x1b3:  mov    0x8(%ebp),%eax
085758c8 +0x1b6:  lea    0x4(%eax),%edx
085758cb +0x1b9:  lea    -0x1c(%ebp),%eax
085758ce +0x1bc:  mov    %eax,0x4(%esp)
085758d2 +0x1c0:  mov    %edx,(%esp)
085758d5 +0x1c3:  call   08576e60 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x1024>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x1024
085758da +0x1c8:  mov    $0x1,%eax
085758df +0x1cd:  jmp    08575923 <+0x211>
085758e1 +0x1cf:  mov    -0x1c(%ebp),%ebx
085758e4 +0x1d2:  test   %ebx,%ebx
085758e6 +0x1d4:  je     0857591e <+0x20c>
085758e8 +0x1d6:  mov    %ebx,(%esp)
085758eb +0x1d9:  call   08574f7c <_ZN21WindowsDataFileFamilyD1Ev>  ; WindowsDataFileFamily::~WindowsDataFileFamily()
085758f0 +0x1de:  mov    %ebx,(%esp)
085758f3 +0x1e1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085758f8 +0x1e6:  jmp    0857591e <+0x20c>
085758fa +0x1e8:  mov    -0x1c(%ebp),%eax
085758fd +0x1eb:  mov    0x10(%ebp),%edx
08575900 +0x1ee:  mov    %edx,0x8(%esp)
08575904 +0x1f2:  mov    0xc(%ebp),%edx
08575907 +0x1f5:  mov    %edx,0x4(%esp)
0857590b +0x1f9:  mov    %eax,(%esp)
0857590e +0x1fc:  call   0857513c <_ZN21WindowsDataFileFamily19LoadWindowsDataFileEPKcS1_>  ; WindowsDataFileFamily::LoadWindowsDataFile(char const*, char const*)
08575913 +0x201:  test   %al,%al
08575915 +0x203:  je     0857591e <+0x20c>
08575917 +0x205:  mov    $0x1,%eax
0857591c +0x20a:  jmp    08575923 <+0x211>
0857591e +0x20c:  mov    $0x0,%eax
08575923 +0x211:  add    $0x2c,%esp
08575926 +0x214:  pop    %ebx
08575927 +0x215:  pop    %esi
08575928 +0x216:  pop    %edi
08575929 +0x217:  pop    %ebp
0857592a +0x218:  ret
0857592b +0x219:  nop
```

## 反编译 C

```c
// WindowsCodeProtectorServer::LoadWindowsFile @ 0x8575712

/* WindowsCodeProtectorServer::LoadWindowsFile(char const*, char const*) */

undefined4 __thiscall
WindowsCodeProtectorServer::LoadWindowsFile
          (WindowsCodeProtectorServer *this,char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  WindowsExeFileFamily *this_00;
  WindowsDataFileFamily *pWVar3;
  WindowsDataFileFamily *local_20 [4];
  
  pcVar2 = strstr(param_1,".exe.bak");
  if (pcVar2 == (char *)0x0) {
    local_20[0] = (WindowsDataFileFamily *)FindDataFamilyFile(this,param_2);
    if (local_20[0] == (WindowsDataFileFamily *)0x0) {
      pWVar3 = operator_new(0x120);
                    /* try { // try from 08575865 to 08575869 has its CatchHandler @ 0857586c */
      WindowsDataFileFamily::WindowsDataFileFamily(pWVar3);
      local_20[0] = pWVar3;
      cVar1 = WindowsDataFileFamily::LoadWindowsDataFile(pWVar3,param_1,param_2);
      pWVar3 = local_20[0];
      if (cVar1 != '\0') {
        WindowsDataFileFamily::SetCheckingOption
                  (local_20[0],*(ulong *)(this + 0x28),*(ulong *)(this + 0x2c));
        std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::push_back
                  ((vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>> *)
                   (this + 4),local_20);
        return 1;
      }
      if (local_20[0] != (WindowsDataFileFamily *)0x0) {
        WindowsDataFileFamily::~WindowsDataFileFamily(local_20[0]);
        operator_delete(pWVar3);
      }
    }
    else {
      cVar1 = WindowsDataFileFamily::LoadWindowsDataFile(local_20[0],param_1,param_2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  else if (*(int *)this == 0) {
    this_00 = operator_new(300);
                    /* try { // try from 08575756 to 0857575a has its CatchHandler @ 0857575d */
    WindowsExeFileFamily::WindowsExeFileFamily(this_00);
    *(WindowsExeFileFamily **)this = this_00;
    cVar1 = WindowsExeFileFamily::LoadWindowsExeFile(*(WindowsExeFileFamily **)this,param_1,param_2)
    ;
    if (cVar1 != '\0') {
      WindowsExeFileFamily::SetCheckingOption
                (*(WindowsExeFileFamily **)this,*(ulong *)(this + 0x20),*(ulong *)(this + 0x24));
      return 1;
    }
  }
  else {
    cVar1 = FindExeFamilyFile(this,param_2);
    if ((cVar1 != '\0') &&
       (cVar1 = WindowsExeFileFamily::LoadWindowsExeFile
                          (*(WindowsExeFileFamily **)this,param_1,param_2), cVar1 != '\0')) {
      WindowsExeFileFamily::SetCheckingOption
                (*(WindowsExeFileFamily **)this,*(ulong *)(this + 0x20),*(ulong *)(this + 0x24));
      return 1;
    }
  }
  return 0;
}
```
