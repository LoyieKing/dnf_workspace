# ~WindowsDataFileFamily

`_ZN21WindowsDataFileFamilyD1Ev`

`WindowsDataFileFamily::~WindowsDataFileFamily()`

| 类 | 地址 |
|---|---|
| `WindowsDataFileFamily` | `0x08574f7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08574f7c  _ZN21WindowsDataFileFamilyD1Ev
#           WindowsDataFileFamily::~WindowsDataFileFamily()
# range [0x08574f7c, 0x08575067]
08574f7c +0x00:  push   %ebp
08574f7d +0x01:  mov    %esp,%ebp
08574f7f +0x03:  push   %esi
08574f80 +0x04:  push   %ebx
08574f81 +0x05:  sub    $0x30,%esp
08574f84 +0x08:  lea    -0x10(%ebp),%eax
08574f87 +0x0b:  mov    %eax,(%esp)
08574f8a +0x0e:  call   08576bb6 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xd7a>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xd7a
08574f8f +0x13:  mov    0x8(%ebp),%edx
08574f92 +0x16:  lea    -0x1c(%ebp),%eax
08574f95 +0x19:  mov    %edx,0x4(%esp)
08574f99 +0x1d:  mov    %eax,(%esp)
08574f9c +0x20:  call   08576bc4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xd88>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xd88
08574fa1 +0x25:  sub    $0x4,%esp
08574fa4 +0x28:  mov    -0x1c(%ebp),%eax
08574fa7 +0x2b:  mov    %eax,-0x10(%ebp)
08574faa +0x2e:  jmp    08574fff <+0x83>
08574fac +0x30:  lea    -0x10(%ebp),%eax
08574faf +0x33:  mov    %eax,(%esp)
08574fb2 +0x36:  call   08576c50 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xe14>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xe14
08574fb7 +0x3b:  mov    (%eax),%eax
08574fb9 +0x3d:  test   %eax,%eax
08574fbb +0x3f:  setne  %al
08574fbe +0x42:  test   %al,%al
08574fc0 +0x44:  je     08574ff4 <+0x78>
08574fc2 +0x46:  lea    -0x10(%ebp),%eax
08574fc5 +0x49:  mov    %eax,(%esp)
08574fc8 +0x4c:  call   08576c50 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xe14>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xe14
08574fcd +0x51:  mov    (%eax),%ebx
08574fcf +0x53:  test   %ebx,%ebx
08574fd1 +0x55:  je     08574fe3 <+0x67>
08574fd3 +0x57:  mov    %ebx,(%esp)
08574fd6 +0x5a:  call   08574e56 <_ZN15WindowsDataFileD1Ev>  ; WindowsDataFile::~WindowsDataFile()
08574fdb +0x5f:  mov    %ebx,(%esp)
08574fde +0x62:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08574fe3 +0x67:  lea    -0x10(%ebp),%eax
08574fe6 +0x6a:  mov    %eax,(%esp)
08574fe9 +0x6d:  call   08576c50 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xe14>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xe14
08574fee +0x72:  movl   $0x0,(%eax)
08574ff4 +0x78:  lea    -0x10(%ebp),%eax
08574ff7 +0x7b:  mov    %eax,(%esp)
08574ffa +0x7e:  call   08576c3a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xdfe>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xdfe
08574fff +0x83:  mov    0x8(%ebp),%edx
08575002 +0x86:  lea    -0xc(%ebp),%eax
08575005 +0x89:  mov    %edx,0x4(%esp)
08575009 +0x8d:  mov    %eax,(%esp)
0857500c +0x90:  call   08576be8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xdac>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xdac
08575011 +0x95:  sub    $0x4,%esp
08575014 +0x98:  lea    -0xc(%ebp),%eax
08575017 +0x9b:  mov    %eax,0x4(%esp)
0857501b +0x9f:  lea    -0x10(%ebp),%eax
0857501e +0xa2:  mov    %eax,(%esp)
08575021 +0xa5:  call   08576c0e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xdd2>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xdd2
08575026 +0xaa:  test   %al,%al
08575028 +0xac:  jne    08574fac <+0x30>
0857502a +0xae:  mov    0x8(%ebp),%eax
0857502d +0xb1:  mov    %eax,(%esp)
08575030 +0xb4:  call   08576c5a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xe1e>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xe1e
08575035 +0xb9:  jmp    08575052 <+0xd6>
08575037 +0xbb:  mov    %edx,%ebx
08575039 +0xbd:  mov    %eax,%esi
0857503b +0xbf:  mov    0x8(%ebp),%eax
0857503e +0xc2:  mov    %eax,(%esp)
08575041 +0xc5:  call   08576b58 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xd1c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xd1c
08575046 +0xca:  mov    %esi,%eax
08575048 +0xcc:  mov    %ebx,%edx
0857504a +0xce:  mov    %eax,(%esp)
0857504d +0xd1:  call   08ae3750 <_Unwind_Resume>
08575052 +0xd6:  mov    0x8(%ebp),%eax
08575055 +0xd9:  mov    %eax,(%esp)
08575058 +0xdc:  call   08576b58 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xd1c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xd1c
0857505d +0xe1:  lea    -0x8(%ebp),%esp
08575060 +0xe4:  add    $0x0,%esp
08575063 +0xe7:  pop    %ebx
08575064 +0xe8:  pop    %esi
08575065 +0xe9:  pop    %ebp
08575066 +0xea:  ret
08575067 +0xeb:  nop
```

## 反编译 C

```c
// WindowsDataFileFamily::~WindowsDataFileFamily @ 0x8574f7c

/* WindowsDataFileFamily::~WindowsDataFileFamily() */

void __thiscall WindowsDataFileFamily::~WindowsDataFileFamily(WindowsDataFileFamily *this)

{
  WindowsDataFile *this_00;
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
  local_14 [4];
  __normal_iterator local_10 [4];
  
  __gnu_cxx::
  __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
  ::__normal_iterator(local_14);
                    /* try { // try from 08574f9c to 08575034 has its CatchHandler @ 08575037 */
  std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::begin();
  while( true ) {
    std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_14,local_10);
    if (!bVar1) break;
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
                    ::operator*(local_14);
    if (*piVar2 != 0) {
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
               ::operator*(local_14);
      this_00 = (WindowsDataFile *)*puVar3;
      if (this_00 != (WindowsDataFile *)0x0) {
        WindowsDataFile::~WindowsDataFile(this_00);
        operator_delete(this_00);
      }
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
               ::operator*(local_14);
      *puVar3 = 0;
    }
    __gnu_cxx::
    __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
    ::operator++(local_14);
  }
  std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::clear
            ((vector<WindowsDataFile*,std::allocator<WindowsDataFile*>> *)this);
  std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::~vector
            ((vector<WindowsDataFile*,std::allocator<WindowsDataFile*>> *)this);
  return;
}
```
