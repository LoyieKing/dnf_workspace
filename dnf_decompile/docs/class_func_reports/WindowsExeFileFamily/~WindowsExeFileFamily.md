# ~WindowsExeFileFamily

`_ZN20WindowsExeFileFamilyD1Ev`

`WindowsExeFileFamily::~WindowsExeFileFamily()`

| 类 | 地址 |
|---|---|
| `WindowsExeFileFamily` | `0x08574500` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08574500  _ZN20WindowsExeFileFamilyD1Ev
#           WindowsExeFileFamily::~WindowsExeFileFamily()
# range [0x08574500, 0x0857461f]
08574500 +0x000:  push   %ebp
08574501 +0x001:  mov    %esp,%ebp
08574503 +0x003:  push   %esi
08574504 +0x004:  push   %ebx
08574505 +0x005:  sub    $0x30,%esp
08574508 +0x008:  lea    -0x10(%ebp),%eax
0857450b +0x00b:  mov    %eax,(%esp)
0857450e +0x00e:  call   085766a6 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x86a>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x86a
08574513 +0x013:  mov    0x8(%ebp),%eax
08574516 +0x016:  lea    0xc(%eax),%edx
08574519 +0x019:  lea    -0x1c(%ebp),%eax
0857451c +0x01c:  mov    %edx,0x4(%esp)
08574520 +0x020:  mov    %eax,(%esp)
08574523 +0x023:  call   085766b4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x878>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x878
08574528 +0x028:  sub    $0x4,%esp
0857452b +0x02b:  mov    -0x1c(%ebp),%eax
0857452e +0x02e:  mov    %eax,-0x10(%ebp)
08574531 +0x031:  jmp    08574586 <+0x86>
08574533 +0x033:  lea    -0x10(%ebp),%eax
08574536 +0x036:  mov    %eax,(%esp)
08574539 +0x039:  call   08576740 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x904>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x904
0857453e +0x03e:  mov    (%eax),%eax
08574540 +0x040:  test   %eax,%eax
08574542 +0x042:  setne  %al
08574545 +0x045:  test   %al,%al
08574547 +0x047:  je     0857457b <+0x7b>
08574549 +0x049:  lea    -0x10(%ebp),%eax
0857454c +0x04c:  mov    %eax,(%esp)
0857454f +0x04f:  call   08576740 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x904>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x904
08574554 +0x054:  mov    (%eax),%ebx
08574556 +0x056:  test   %ebx,%ebx
08574558 +0x058:  je     0857456a <+0x6a>
0857455a +0x05a:  mov    %ebx,(%esp)
0857455d +0x05d:  call   0857371a <_ZN14WindowsExeFileD1Ev>  ; WindowsExeFile::~WindowsExeFile()
08574562 +0x062:  mov    %ebx,(%esp)
08574565 +0x065:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0857456a +0x06a:  lea    -0x10(%ebp),%eax
0857456d +0x06d:  mov    %eax,(%esp)
08574570 +0x070:  call   08576740 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x904>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x904
08574575 +0x075:  movl   $0x0,(%eax)
0857457b +0x07b:  lea    -0x10(%ebp),%eax
0857457e +0x07e:  mov    %eax,(%esp)
08574581 +0x081:  call   0857672a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x8ee>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x8ee
08574586 +0x086:  mov    0x8(%ebp),%eax
08574589 +0x089:  lea    0xc(%eax),%edx
0857458c +0x08c:  lea    -0xc(%ebp),%eax
0857458f +0x08f:  mov    %edx,0x4(%esp)
08574593 +0x093:  mov    %eax,(%esp)
08574596 +0x096:  call   085766d8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x89c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x89c
0857459b +0x09b:  sub    $0x4,%esp
0857459e +0x09e:  lea    -0xc(%ebp),%eax
085745a1 +0x0a1:  mov    %eax,0x4(%esp)
085745a5 +0x0a5:  lea    -0x10(%ebp),%eax
085745a8 +0x0a8:  mov    %eax,(%esp)
085745ab +0x0ab:  call   085766fe <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x8c2>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x8c2
085745b0 +0x0b0:  test   %al,%al
085745b2 +0x0b2:  jne    08574533 <+0x33>
085745b8 +0x0b8:  mov    0x8(%ebp),%eax
085745bb +0x0bb:  add    $0xc,%eax
085745be +0x0be:  mov    %eax,(%esp)
085745c1 +0x0c1:  call   0857674a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x90e>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x90e
085745c6 +0x0c6:  jmp    085745e0 <+0xe0>
085745c8 +0x0c8:  mov    %edx,%ebx
085745ca +0x0ca:  mov    %eax,%esi
085745cc +0x0cc:  mov    0x8(%ebp),%eax
085745cf +0x0cf:  add    $0xc,%eax
085745d2 +0x0d2:  mov    %eax,(%esp)
085745d5 +0x0d5:  call   08576648 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x80c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x80c
085745da +0x0da:  mov    %esi,%eax
085745dc +0x0dc:  mov    %ebx,%edx
085745de +0x0de:  jmp    085745f0 <+0xf0>
085745e0 +0x0e0:  mov    0x8(%ebp),%eax
085745e3 +0x0e3:  add    $0xc,%eax
085745e6 +0x0e6:  mov    %eax,(%esp)
085745e9 +0x0e9:  call   08576648 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x80c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x80c
085745ee +0x0ee:  jmp    0857460b <+0x10b>
085745f0 +0x0f0:  mov    %edx,%ebx
085745f2 +0x0f2:  mov    %eax,%esi
085745f4 +0x0f4:  mov    0x8(%ebp),%eax
085745f7 +0x0f7:  mov    %eax,(%esp)
085745fa +0x0fa:  call   08575eb0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x74>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x74
085745ff +0x0ff:  mov    %esi,%eax
08574601 +0x101:  mov    %ebx,%edx
08574603 +0x103:  mov    %eax,(%esp)
08574606 +0x106:  call   08ae3750 <_Unwind_Resume>
0857460b +0x10b:  mov    0x8(%ebp),%eax
0857460e +0x10e:  mov    %eax,(%esp)
08574611 +0x111:  call   08575eb0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x74>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x74
08574616 +0x116:  lea    -0x8(%ebp),%esp
08574619 +0x119:  add    $0x0,%esp
0857461c +0x11c:  pop    %ebx
0857461d +0x11d:  pop    %esi
0857461e +0x11e:  pop    %ebp
0857461f +0x11f:  ret
```

## 反编译 C

```c
// WindowsExeFileFamily::~WindowsExeFileFamily @ 0x8574500

/* WindowsExeFileFamily::~WindowsExeFileFamily() */

void __thiscall WindowsExeFileFamily::~WindowsExeFileFamily(WindowsExeFileFamily *this)

{
  WindowsExeFile *this_00;
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
  local_14 [4];
  __normal_iterator local_10 [4];
  
  __gnu_cxx::
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>::
  __normal_iterator(local_14);
                    /* try { // try from 08574523 to 085745c5 has its CatchHandler @ 085745c8 */
  std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::begin();
  while( true ) {
    std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_14,local_10);
    if (!bVar1) break;
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
                    ::operator*(local_14);
    if (*piVar2 != 0) {
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
               ::operator*(local_14);
      this_00 = (WindowsExeFile *)*puVar3;
      if (this_00 != (WindowsExeFile *)0x0) {
        WindowsExeFile::~WindowsExeFile(this_00);
        operator_delete(this_00);
      }
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
               ::operator*(local_14);
      *puVar3 = 0;
    }
    __gnu_cxx::
    __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
    ::operator++(local_14);
  }
  std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::clear
            ((vector<WindowsExeFile*,std::allocator<WindowsExeFile*>> *)(this + 0xc));
                    /* try { // try from 085745e9 to 085745ed has its CatchHandler @ 085745f0 */
  std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::~vector
            ((vector<WindowsExeFile*,std::allocator<WindowsExeFile*>> *)(this + 0xc));
  IntervalSet::~IntervalSet((IntervalSet *)this);
  return;
}
```
