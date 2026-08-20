# LoadWindowsDataFile

`_ZN21WindowsDataFileFamily19LoadWindowsDataFileEPKcS1_`

`WindowsDataFileFamily::LoadWindowsDataFile(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `WindowsDataFileFamily` | `0x0857513c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857513c  _ZN21WindowsDataFileFamily19LoadWindowsDataFileEPKcS1_
#           WindowsDataFileFamily::LoadWindowsDataFile(char const*, char const*)
# range [0x0857513c, 0x0857522f]
0857513c +0x00:  push   %ebp
0857513d +0x01:  mov    %esp,%ebp
0857513f +0x03:  push   %ebx
08575140 +0x04:  sub    $0x24,%esp
08575143 +0x07:  movl   $0x8,(%esp)
0857514a +0x0e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0857514f +0x13:  mov    %eax,%ebx
08575151 +0x15:  mov    %ebx,%eax
08575153 +0x17:  mov    %eax,(%esp)
08575156 +0x1a:  call   08574e3e <_ZN15WindowsDataFileC1Ev>  ; WindowsDataFile::WindowsDataFile()
0857515b +0x1f:  mov    %ebx,%eax
0857515d +0x21:  mov    %eax,-0xc(%ebp)
08575160 +0x24:  mov    0x8(%ebp),%eax
08575163 +0x27:  mov    %eax,(%esp)
08575166 +0x2a:  call   08576c76 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xe3a>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xe3a
0857516b +0x2f:  test   %al,%al
0857516d +0x31:  je     08575184 <+0x48>
0857516f +0x33:  mov    0x8(%ebp),%eax
08575172 +0x36:  lea    0xc(%eax),%edx
08575175 +0x39:  mov    0x10(%ebp),%eax
08575178 +0x3c:  mov    %eax,0x4(%esp)
0857517c +0x40:  mov    %edx,(%esp)
0857517f +0x43:  call   0808a5dd <_Z13StrCpyMaxPathPcPKc>  ; StrCpyMaxPath(char*, char const*)
08575184 +0x48:  mov    -0xc(%ebp),%eax
08575187 +0x4b:  mov    0xc(%ebp),%edx
0857518a +0x4e:  mov    %edx,0x4(%esp)
0857518e +0x52:  mov    %eax,(%esp)
08575191 +0x55:  call   08574e80 <_ZN15WindowsDataFile19LoadWindowsDataFileEPKc>  ; WindowsDataFile::LoadWindowsDataFile(char const*)
08575196 +0x5a:  xor    $0x1,%eax
08575199 +0x5d:  test   %al,%al
0857519b +0x5f:  je     085751bb <+0x7f>
0857519d +0x61:  mov    -0xc(%ebp),%ebx
085751a0 +0x64:  test   %ebx,%ebx
085751a2 +0x66:  je     085751b4 <+0x78>
085751a4 +0x68:  mov    %ebx,(%esp)
085751a7 +0x6b:  call   08574e56 <_ZN15WindowsDataFileD1Ev>  ; WindowsDataFile::~WindowsDataFile()
085751ac +0x70:  mov    %ebx,(%esp)
085751af +0x73:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085751b4 +0x78:  mov    $0x0,%eax
085751b9 +0x7d:  jmp    08575229 <+0xed>
085751bb +0x7f:  mov    -0xc(%ebp),%eax
085751be +0x82:  mov    %eax,0x4(%esp)
085751c2 +0x86:  mov    0x8(%ebp),%eax
085751c5 +0x89:  mov    %eax,(%esp)
085751c8 +0x8c:  call   08575068 <_ZN21WindowsDataFileFamily19IsDifferentFileDataEP15WindowsDataFile>  ; WindowsDataFileFamily::IsDifferentFileData(WindowsDataFile*)
085751cd +0x91:  xor    $0x1,%eax
085751d0 +0x94:  test   %al,%al
085751d2 +0x96:  je     085751f2 <+0xb6>
085751d4 +0x98:  mov    -0xc(%ebp),%ebx
085751d7 +0x9b:  test   %ebx,%ebx
085751d9 +0x9d:  je     085751eb <+0xaf>
085751db +0x9f:  mov    %ebx,(%esp)
085751de +0xa2:  call   08574e56 <_ZN15WindowsDataFileD1Ev>  ; WindowsDataFile::~WindowsDataFile()
085751e3 +0xa7:  mov    %ebx,(%esp)
085751e6 +0xaa:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085751eb +0xaf:  mov    $0x1,%eax
085751f0 +0xb4:  jmp    08575229 <+0xed>
085751f2 +0xb6:  mov    0x8(%ebp),%eax
085751f5 +0xb9:  mov    0x114(%eax),%edx
085751fb +0xbf:  mov    -0xc(%ebp),%eax
085751fe +0xc2:  mov    (%eax),%eax
08575200 +0xc4:  cmp    %eax,%edx
08575202 +0xc6:  jae    08575212 <+0xd6>
08575204 +0xc8:  mov    -0xc(%ebp),%eax
08575207 +0xcb:  mov    (%eax),%edx
08575209 +0xcd:  mov    0x8(%ebp),%eax
0857520c +0xd0:  mov    %edx,0x114(%eax)
08575212 +0xd6:  mov    0x8(%ebp),%eax
08575215 +0xd9:  lea    -0xc(%ebp),%edx
08575218 +0xdc:  mov    %edx,0x4(%esp)
0857521c +0xe0:  mov    %eax,(%esp)
0857521f +0xe3:  call   08576cba <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xe7e>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xe7e
08575224 +0xe8:  mov    $0x1,%eax
08575229 +0xed:  add    $0x24,%esp
0857522c +0xf0:  pop    %ebx
0857522d +0xf1:  pop    %ebp
0857522e +0xf2:  ret
0857522f +0xf3:  nop
```

## 反编译 C

```c
// WindowsDataFileFamily::LoadWindowsDataFile @ 0x857513c

/* WindowsDataFileFamily::LoadWindowsDataFile(char const*, char const*) */

undefined4 __thiscall
WindowsDataFileFamily::LoadWindowsDataFile(WindowsDataFileFamily *this,char *param_1,char *param_2)

{
  char cVar1;
  WindowsDataFile *pWVar2;
  undefined4 uVar3;
  WindowsDataFile *local_10 [2];
  
  pWVar2 = operator_new(8);
  WindowsDataFile::WindowsDataFile(pWVar2);
  local_10[0] = pWVar2;
  cVar1 = std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::empty();
  if (cVar1 != '\0') {
    StrCpyMaxPath((char *)(this + 0xc),param_2);
  }
  cVar1 = WindowsDataFile::LoadWindowsDataFile(local_10[0],param_1);
  pWVar2 = local_10[0];
  if (cVar1 == '\x01') {
    cVar1 = IsDifferentFileData(this,local_10[0]);
    pWVar2 = local_10[0];
    if (cVar1 == '\x01') {
      if (*(uint *)(this + 0x114) < *(uint *)local_10[0]) {
        *(undefined4 *)(this + 0x114) = *(undefined4 *)local_10[0];
      }
      std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::push_back
                ((vector<WindowsDataFile*,std::allocator<WindowsDataFile*>> *)this,local_10);
      uVar3 = 1;
    }
    else {
      if (local_10[0] != (WindowsDataFile *)0x0) {
        WindowsDataFile::~WindowsDataFile(local_10[0]);
        operator_delete(pWVar2);
      }
      uVar3 = 1;
    }
  }
  else {
    if (local_10[0] != (WindowsDataFile *)0x0) {
      WindowsDataFile::~WindowsDataFile(local_10[0]);
      operator_delete(pWVar2);
    }
    uVar3 = 0;
  }
  return uVar3;
}
```
