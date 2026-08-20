# ~WindowsExeFile

`_ZN14WindowsExeFileD1Ev`

`WindowsExeFile::~WindowsExeFile()`

| 类 | 地址 |
|---|---|
| `WindowsExeFile` | `0x0857371a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857371a  _ZN14WindowsExeFileD1Ev
#           WindowsExeFile::~WindowsExeFile()
# range [0x0857371a, 0x085738f5]
0857371a +0x000:  push   %ebp
0857371b +0x001:  mov    %esp,%ebp
0857371d +0x003:  push   %esi
0857371e +0x004:  push   %ebx
0857371f +0x005:  sub    $0x30,%esp
08573722 +0x008:  mov    0x8(%ebp),%eax
08573725 +0x00b:  mov    0x4(%eax),%eax
08573728 +0x00e:  test   %eax,%eax
0857372a +0x010:  je     08573744 <+0x2a>
0857372c +0x012:  mov    0x8(%ebp),%eax
0857372f +0x015:  mov    0x4(%eax),%eax
08573732 +0x018:  mov    %eax,(%esp)
08573735 +0x01b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0857373a +0x020:  mov    0x8(%ebp),%eax
0857373d +0x023:  movl   $0x0,0x4(%eax)
08573744 +0x02a:  lea    -0x14(%ebp),%eax
08573747 +0x02d:  mov    %eax,(%esp)
0857374a +0x030:  call   08576460 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x624>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x624
0857374f +0x035:  mov    0x8(%ebp),%eax
08573752 +0x038:  lea    0x8(%eax),%edx
08573755 +0x03b:  lea    -0x1c(%ebp),%eax
08573758 +0x03e:  mov    %edx,0x4(%esp)
0857375c +0x042:  mov    %eax,(%esp)
0857375f +0x045:  call   0857646e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x632>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x632
08573764 +0x04a:  sub    $0x4,%esp
08573767 +0x04d:  mov    -0x1c(%ebp),%eax
0857376a +0x050:  mov    %eax,-0x14(%ebp)
0857376d +0x053:  jmp    085737b6 <+0x9c>
0857376f +0x055:  lea    -0x14(%ebp),%eax
08573772 +0x058:  mov    %eax,(%esp)
08573775 +0x05b:  call   085764fa <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x6be>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x6be
0857377a +0x060:  mov    (%eax),%eax
0857377c +0x062:  test   %eax,%eax
0857377e +0x064:  setne  %al
08573781 +0x067:  test   %al,%al
08573783 +0x069:  je     085737ab <+0x91>
08573785 +0x06b:  lea    -0x14(%ebp),%eax
08573788 +0x06e:  mov    %eax,(%esp)
0857378b +0x071:  call   085764fa <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x6be>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x6be
08573790 +0x076:  mov    (%eax),%eax
08573792 +0x078:  mov    %eax,(%esp)
08573795 +0x07b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0857379a +0x080:  lea    -0x14(%ebp),%eax
0857379d +0x083:  mov    %eax,(%esp)
085737a0 +0x086:  call   085764fa <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x6be>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x6be
085737a5 +0x08b:  movl   $0x0,(%eax)
085737ab +0x091:  lea    -0x14(%ebp),%eax
085737ae +0x094:  mov    %eax,(%esp)
085737b1 +0x097:  call   085764e4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x6a8>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x6a8
085737b6 +0x09c:  mov    0x8(%ebp),%eax
085737b9 +0x09f:  lea    0x8(%eax),%edx
085737bc +0x0a2:  lea    -0x10(%ebp),%eax
085737bf +0x0a5:  mov    %edx,0x4(%esp)
085737c3 +0x0a9:  mov    %eax,(%esp)
085737c6 +0x0ac:  call   08576492 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x656>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x656
085737cb +0x0b1:  sub    $0x4,%esp
085737ce +0x0b4:  lea    -0x10(%ebp),%eax
085737d1 +0x0b7:  mov    %eax,0x4(%esp)
085737d5 +0x0bb:  lea    -0x14(%ebp),%eax
085737d8 +0x0be:  mov    %eax,(%esp)
085737db +0x0c1:  call   085764b8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x67c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x67c
085737e0 +0x0c6:  test   %al,%al
085737e2 +0x0c8:  jne    0857376f <+0x55>
085737e4 +0x0ca:  mov    0x8(%ebp),%eax
085737e7 +0x0cd:  add    $0x8,%eax
085737ea +0x0d0:  mov    %eax,(%esp)
085737ed +0x0d3:  call   08576504 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x6c8>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x6c8
085737f2 +0x0d8:  mov    0x8(%ebp),%eax
085737f5 +0x0db:  lea    0x14(%eax),%edx
085737f8 +0x0de:  lea    -0x1c(%ebp),%eax
085737fb +0x0e1:  mov    %edx,0x4(%esp)
085737ff +0x0e5:  mov    %eax,(%esp)
08573802 +0x0e8:  call   0857646e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x632>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x632
08573807 +0x0ed:  sub    $0x4,%esp
0857380a +0x0f0:  mov    -0x1c(%ebp),%eax
0857380d +0x0f3:  mov    %eax,-0x14(%ebp)
08573810 +0x0f6:  jmp    08573859 <+0x13f>
08573812 +0x0f8:  lea    -0x14(%ebp),%eax
08573815 +0x0fb:  mov    %eax,(%esp)
08573818 +0x0fe:  call   085764fa <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x6be>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x6be
0857381d +0x103:  mov    (%eax),%eax
0857381f +0x105:  test   %eax,%eax
08573821 +0x107:  setne  %al
08573824 +0x10a:  test   %al,%al
08573826 +0x10c:  je     0857384e <+0x134>
08573828 +0x10e:  lea    -0x14(%ebp),%eax
0857382b +0x111:  mov    %eax,(%esp)
0857382e +0x114:  call   085764fa <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x6be>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x6be
08573833 +0x119:  mov    (%eax),%eax
08573835 +0x11b:  mov    %eax,(%esp)
08573838 +0x11e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0857383d +0x123:  lea    -0x14(%ebp),%eax
08573840 +0x126:  mov    %eax,(%esp)
08573843 +0x129:  call   085764fa <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x6be>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x6be
08573848 +0x12e:  movl   $0x0,(%eax)
0857384e +0x134:  lea    -0x14(%ebp),%eax
08573851 +0x137:  mov    %eax,(%esp)
08573854 +0x13a:  call   085764e4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x6a8>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x6a8
08573859 +0x13f:  mov    0x8(%ebp),%eax
0857385c +0x142:  lea    0x14(%eax),%edx
0857385f +0x145:  lea    -0xc(%ebp),%eax
08573862 +0x148:  mov    %edx,0x4(%esp)
08573866 +0x14c:  mov    %eax,(%esp)
08573869 +0x14f:  call   08576492 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x656>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x656
0857386e +0x154:  sub    $0x4,%esp
08573871 +0x157:  lea    -0xc(%ebp),%eax
08573874 +0x15a:  mov    %eax,0x4(%esp)
08573878 +0x15e:  lea    -0x14(%ebp),%eax
0857387b +0x161:  mov    %eax,(%esp)
0857387e +0x164:  call   085764b8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x67c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x67c
08573883 +0x169:  test   %al,%al
08573885 +0x16b:  jne    08573812 <+0xf8>
08573887 +0x16d:  mov    0x8(%ebp),%eax
0857388a +0x170:  add    $0x14,%eax
0857388d +0x173:  mov    %eax,(%esp)
08573890 +0x176:  call   08576504 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x6c8>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x6c8
08573895 +0x17b:  jmp    085738af <+0x195>
08573897 +0x17d:  mov    %edx,%ebx
08573899 +0x17f:  mov    %eax,%esi
0857389b +0x181:  mov    0x8(%ebp),%eax
0857389e +0x184:  add    $0x14,%eax
085738a1 +0x187:  mov    %eax,(%esp)
085738a4 +0x18a:  call   08576402 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x5c6>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x5c6
085738a9 +0x18f:  mov    %esi,%eax
085738ab +0x191:  mov    %ebx,%edx
085738ad +0x193:  jmp    085738bf <+0x1a5>
085738af +0x195:  mov    0x8(%ebp),%eax
085738b2 +0x198:  add    $0x14,%eax
085738b5 +0x19b:  mov    %eax,(%esp)
085738b8 +0x19e:  call   08576402 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x5c6>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x5c6
085738bd +0x1a3:  jmp    085738dd <+0x1c3>
085738bf +0x1a5:  mov    %edx,%ebx
085738c1 +0x1a7:  mov    %eax,%esi
085738c3 +0x1a9:  mov    0x8(%ebp),%eax
085738c6 +0x1ac:  add    $0x8,%eax
085738c9 +0x1af:  mov    %eax,(%esp)
085738cc +0x1b2:  call   08576402 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x5c6>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x5c6
085738d1 +0x1b7:  mov    %esi,%eax
085738d3 +0x1b9:  mov    %ebx,%edx
085738d5 +0x1bb:  mov    %eax,(%esp)
085738d8 +0x1be:  call   08ae3750 <_Unwind_Resume>
085738dd +0x1c3:  mov    0x8(%ebp),%eax
085738e0 +0x1c6:  add    $0x8,%eax
085738e3 +0x1c9:  mov    %eax,(%esp)
085738e6 +0x1cc:  call   08576402 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x5c6>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x5c6
085738eb +0x1d1:  lea    -0x8(%ebp),%esp
085738ee +0x1d4:  add    $0x0,%esp
085738f1 +0x1d7:  pop    %ebx
085738f2 +0x1d8:  pop    %esi
085738f3 +0x1d9:  pop    %ebp
085738f4 +0x1da:  ret
085738f5 +0x1db:  nop
```

## 反编译 C

```c
// WindowsExeFile::~WindowsExeFile @ 0x857371a

/* WindowsExeFile::~WindowsExeFile() */

void __thiscall WindowsExeFile::~WindowsExeFile(WindowsExeFile *this)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator local_10 [4];
  
  if (*(int *)(this + 4) != 0) {
    operator_delete(*(void **)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  __gnu_cxx::
  __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
  ::__normal_iterator(local_18);
                    /* try { // try from 0857375f to 08573894 has its CatchHandler @ 08573897 */
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::begin();
  while( true ) {
    std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) break;
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
                    ::operator*(local_18);
    if (*piVar2 != 0) {
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
               ::operator*(local_18);
      operator_delete((void *)*puVar3);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
               ::operator*(local_18);
      *puVar3 = 0;
    }
    __gnu_cxx::
    __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
    ::operator++(local_18);
  }
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::clear
            ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
             (this + 8));
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::begin();
  while( true ) {
    std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_10);
    if (!bVar1) break;
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
                    ::operator*(local_18);
    if (*piVar2 != 0) {
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
               ::operator*(local_18);
      operator_delete((void *)*puVar3);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
               ::operator*(local_18);
      *puVar3 = 0;
    }
    __gnu_cxx::
    __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
    ::operator++(local_18);
  }
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::clear
            ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
             (this + 0x14));
                    /* try { // try from 085738b8 to 085738bc has its CatchHandler @ 085738bf */
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::~vector
            ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
             (this + 0x14));
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::~vector
            ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
             (this + 8));
  return;
}
```
