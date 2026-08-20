# MakeCommonWindowsExeConstantSections

`_ZN14WindowsExeFile36MakeCommonWindowsExeConstantSectionsERK11IntervalSet`

`WindowsExeFile::MakeCommonWindowsExeConstantSections(IntervalSet const&)`

| 类 | 地址 |
|---|---|
| `WindowsExeFile` | `0x085741c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085741c6  _ZN14WindowsExeFile36MakeCommonWindowsExeConstantSectionsERK11IntervalSet
#           WindowsExeFile::MakeCommonWindowsExeConstantSections(IntervalSet const&)
# range [0x085741c6, 0x085743d3]
085741c6 +0x000:  push   %ebp
085741c7 +0x001:  mov    %esp,%ebp
085741c9 +0x003:  push   %esi
085741ca +0x004:  push   %ebx
085741cb +0x005:  sub    $0x60,%esp
085741ce +0x008:  lea    -0x20(%ebp),%eax
085741d1 +0x00b:  mov    %eax,(%esp)
085741d4 +0x00e:  call   08576460 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x624>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x624
085741d9 +0x013:  lea    -0x24(%ebp),%eax
085741dc +0x016:  mov    %eax,(%esp)
085741df +0x019:  call   08575f92 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x156>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x156
085741e4 +0x01e:  lea    -0x3c(%ebp),%eax
085741e7 +0x021:  mov    %eax,(%esp)
085741ea +0x024:  call   08575e58 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x1c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x1c
085741ef +0x029:  lea    -0x44(%ebp),%eax
085741f2 +0x02c:  mov    %eax,(%esp)
085741f5 +0x02f:  call   08575e58 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x1c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x1c
085741fa +0x034:  mov    0x8(%ebp),%eax
085741fd +0x037:  add    $0x14,%eax
08574200 +0x03a:  mov    %eax,(%esp)
08574203 +0x03d:  call   08576504 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x6c8>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x6c8
08574208 +0x042:  mov    0xc(%ebp),%eax
0857420b +0x045:  mov    %eax,(%esp)
0857420e +0x048:  call   085763c0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x584>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x584
08574213 +0x04d:  test   %eax,%eax
08574215 +0x04f:  je     08574229 <+0x63>
08574217 +0x051:  mov    0x8(%ebp),%eax
0857421a +0x054:  add    $0x8,%eax
0857421d +0x057:  mov    %eax,(%esp)
08574220 +0x05a:  call   08576606 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x7ca>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x7ca
08574225 +0x05f:  test   %eax,%eax
08574227 +0x061:  jne    08574230 <+0x6a>
08574229 +0x063:  mov    $0x1,%eax
0857422e +0x068:  jmp    08574235 <+0x6f>
08574230 +0x06a:  mov    $0x0,%eax
08574235 +0x06f:  test   %al,%al
08574237 +0x071:  je     08574243 <+0x7d>
08574239 +0x073:  mov    $0x0,%eax
0857423e +0x078:  jmp    085743ca <+0x204>
08574243 +0x07d:  mov    0xc(%ebp),%edx
08574246 +0x080:  lea    -0x4c(%ebp),%eax
08574249 +0x083:  mov    %edx,0x4(%esp)
0857424d +0x087:  mov    %eax,(%esp)
08574250 +0x08a:  call   08575fa0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x164>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x164
08574255 +0x08f:  sub    $0x4,%esp
08574258 +0x092:  mov    -0x4c(%ebp),%eax
0857425b +0x095:  mov    %eax,-0x24(%ebp)
0857425e +0x098:  jmp    08574385 <+0x1bf>
08574263 +0x09d:  lea    -0x24(%ebp),%eax
08574266 +0x0a0:  mov    %eax,(%esp)
08574269 +0x0a3:  call   0857603a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x1fe>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x1fe
0857426e +0x0a8:  mov    0x4(%eax),%edx
08574271 +0x0ab:  mov    (%eax),%eax
08574273 +0x0ad:  mov    %eax,-0x3c(%ebp)
08574276 +0x0b0:  mov    %edx,-0x38(%ebp)
08574279 +0x0b3:  mov    0x8(%ebp),%eax
0857427c +0x0b6:  lea    0x8(%eax),%edx
0857427f +0x0b9:  lea    -0x4c(%ebp),%eax
08574282 +0x0bc:  mov    %edx,0x4(%esp)
08574286 +0x0c0:  mov    %eax,(%esp)
08574289 +0x0c3:  call   0857646e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x632>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x632
0857428e +0x0c8:  sub    $0x4,%esp
08574291 +0x0cb:  mov    -0x4c(%ebp),%eax
08574294 +0x0ce:  mov    %eax,-0x20(%ebp)
08574297 +0x0d1:  jmp    08574348 <+0x182>
0857429c +0x0d6:  lea    -0x20(%ebp),%eax
0857429f +0x0d9:  mov    %eax,(%esp)
085742a2 +0x0dc:  call   085764fa <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x6be>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x6be
085742a7 +0x0e1:  mov    (%eax),%eax
085742a9 +0x0e3:  mov    %eax,-0x14(%ebp)
085742ac +0x0e6:  mov    -0x14(%ebp),%eax
085742af +0x0e9:  mov    (%eax),%edx
085742b1 +0x0eb:  mov    %edx,-0x34(%ebp)
085742b4 +0x0ee:  mov    0x4(%eax),%edx
085742b7 +0x0f1:  mov    %edx,-0x30(%ebp)
085742ba +0x0f4:  mov    0x8(%eax),%edx
085742bd +0x0f7:  mov    %edx,-0x2c(%ebp)
085742c0 +0x0fa:  mov    0xc(%eax),%eax
085742c3 +0x0fd:  mov    %eax,-0x28(%ebp)
085742c6 +0x100:  mov    -0x34(%ebp),%edx
085742c9 +0x103:  mov    -0x3c(%ebp),%eax
085742cc +0x106:  cmp    %eax,%edx
085742ce +0x108:  ja     0857433d <+0x177>
085742d0 +0x10a:  mov    -0x3c(%ebp),%eax
085742d3 +0x10d:  mov    -0x34(%ebp),%ecx
085742d6 +0x110:  mov    -0x2c(%ebp),%edx
085742d9 +0x113:  lea    (%ecx,%edx,1),%edx
085742dc +0x116:  cmp    %edx,%eax
085742de +0x118:  jae    0857433d <+0x177>
085742e0 +0x11a:  movl   $0x10,(%esp)
085742e7 +0x121:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085742ec +0x126:  mov    %eax,-0x48(%ebp)
085742ef +0x129:  mov    -0x48(%ebp),%eax
085742f2 +0x12c:  mov    -0x3c(%ebp),%edx
085742f5 +0x12f:  mov    %edx,(%eax)
085742f7 +0x131:  mov    -0x48(%ebp),%eax
085742fa +0x134:  mov    -0x38(%ebp),%edx
085742fd +0x137:  mov    %edx,0x8(%eax)
08574300 +0x13a:  mov    -0x48(%ebp),%eax
08574303 +0x13d:  mov    -0x28(%ebp),%edx
08574306 +0x140:  mov    %edx,0xc(%eax)
08574309 +0x143:  mov    -0x48(%ebp),%eax
0857430c +0x146:  mov    -0x30(%ebp),%edx
0857430f +0x149:  mov    -0x3c(%ebp),%ecx
08574312 +0x14c:  mov    %ecx,%ebx
08574314 +0x14e:  mov    -0x34(%ebp),%ecx
08574317 +0x151:  mov    %ebx,%esi
08574319 +0x153:  sub    %ecx,%esi
0857431b +0x155:  mov    %esi,%ecx
0857431d +0x157:  add    %ecx,%edx
0857431f +0x159:  mov    %edx,0x4(%eax)
08574322 +0x15c:  mov    0x8(%ebp),%eax
08574325 +0x15f:  lea    0x14(%eax),%edx
08574328 +0x162:  lea    -0x48(%ebp),%eax
0857432b +0x165:  mov    %eax,0x4(%esp)
0857432f +0x169:  mov    %edx,(%esp)
08574332 +0x16c:  call   08576592 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x756>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x756
08574337 +0x171:  movb   $0x1,-0xd(%ebp)
0857433b +0x175:  jmp    0857437a <+0x1b4>
0857433d +0x177:  lea    -0x20(%ebp),%eax
08574340 +0x17a:  mov    %eax,(%esp)
08574343 +0x17d:  call   085764e4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x6a8>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x6a8
08574348 +0x182:  mov    0x8(%ebp),%eax
0857434b +0x185:  lea    0x8(%eax),%edx
0857434e +0x188:  lea    -0x18(%ebp),%eax
08574351 +0x18b:  mov    %edx,0x4(%esp)
08574355 +0x18f:  mov    %eax,(%esp)
08574358 +0x192:  call   08576492 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x656>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x656
0857435d +0x197:  sub    $0x4,%esp
08574360 +0x19a:  lea    -0x18(%ebp),%eax
08574363 +0x19d:  mov    %eax,0x4(%esp)
08574367 +0x1a1:  lea    -0x20(%ebp),%eax
0857436a +0x1a4:  mov    %eax,(%esp)
0857436d +0x1a7:  call   085764b8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x67c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x67c
08574372 +0x1ac:  test   %al,%al
08574374 +0x1ae:  jne    0857429c <+0xd6>
0857437a +0x1b4:  lea    -0x24(%ebp),%eax
0857437d +0x1b7:  mov    %eax,(%esp)
08574380 +0x1ba:  call   08576024 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x1e8>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x1e8
08574385 +0x1bf:  mov    0xc(%ebp),%edx
08574388 +0x1c2:  lea    -0x1c(%ebp),%eax
0857438b +0x1c5:  mov    %edx,0x4(%esp)
0857438f +0x1c9:  mov    %eax,(%esp)
08574392 +0x1cc:  call   08575fcc <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x190>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x190
08574397 +0x1d1:  sub    $0x4,%esp
0857439a +0x1d4:  lea    -0x1c(%ebp),%eax
0857439d +0x1d7:  mov    %eax,0x4(%esp)
085743a1 +0x1db:  lea    -0x24(%ebp),%eax
085743a4 +0x1de:  mov    %eax,(%esp)
085743a7 +0x1e1:  call   08575ff8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x1bc>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x1bc
085743ac +0x1e6:  test   %al,%al
085743ae +0x1e8:  jne    08574263 <+0x9d>
085743b4 +0x1ee:  mov    0x8(%ebp),%eax
085743b7 +0x1f1:  add    $0x14,%eax
085743ba +0x1f4:  mov    %eax,(%esp)
085743bd +0x1f7:  call   08576606 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x7ca>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x7ca
085743c2 +0x1fc:  mov    %eax,-0xc(%ebp)
085743c5 +0x1ff:  mov    $0x1,%eax
085743ca +0x204:  lea    -0x8(%ebp),%esp
085743cd +0x207:  add    $0x0,%esp
085743d0 +0x20a:  pop    %ebx
085743d1 +0x20b:  pop    %esi
085743d2 +0x20c:  pop    %ebp
085743d3 +0x20d:  ret
```

## 反编译 C

```c
// WindowsExeFile::MakeCommonWindowsExeConstantSections @ 0x85741c6

/* WindowsExeFile::MakeCommonWindowsExeConstantSections(IntervalSet const&) */

undefined4 __thiscall
WindowsExeFile::MakeCommonWindowsExeConstantSections(WindowsExeFile *this,IntervalSet *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  WindowsExeConstantSection *local_4c;
  Interval local_48 [8];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  __normal_iterator<Interval_const*,std::vector<Interval,std::allocator<Interval>>> local_28 [4];
  __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
  local_24 [4];
  __normal_iterator local_20 [4];
  __normal_iterator local_1c [4];
  uint *local_18;
  undefined1 local_11;
  
  __gnu_cxx::
  __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
  ::__normal_iterator(local_24);
  __gnu_cxx::__normal_iterator<Interval_const*,std::vector<Interval,std::allocator<Interval>>>::
  __normal_iterator(local_28);
  Interval::Interval((Interval *)&local_40);
  Interval::Interval(local_48);
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::clear
            ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
             (this + 0x14));
  iVar2 = std::vector<Interval,std::allocator<Interval>>::size
                    ((vector<Interval,std::allocator<Interval>> *)param_1);
  if (iVar2 != 0) {
    iVar2 = std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::size
                      ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>
                        *)(this + 8));
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_08574235;
    }
  }
  bVar1 = true;
LAB_08574235:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    std::vector<Interval,std::allocator<Interval>>::begin();
    while( true ) {
      std::vector<Interval,std::allocator<Interval>>::end();
      bVar1 = __gnu_cxx::operator!=(local_28,local_20);
      if (!bVar1) break;
      puVar4 = (uint *)__gnu_cxx::
                       __normal_iterator<Interval_const*,std::vector<Interval,std::allocator<Interval>>>
                       ::operator*(local_28);
      local_3c = puVar4[1];
      local_40 = *puVar4;
      std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::begin();
      while( true ) {
        std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::end();
        bVar1 = __gnu_cxx::operator!=(local_24,local_1c);
        if (!bVar1) break;
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
                        ::operator*(local_24);
        local_18 = (uint *)*piVar5;
        local_38 = *local_18;
        local_34 = local_18[1];
        local_30 = local_18[2];
        local_2c = local_18[3];
        if ((local_38 <= local_40) && (local_40 < local_38 + local_30)) {
          local_4c = operator_new(0x10);
          *(uint *)local_4c = local_40;
          *(uint *)(local_4c + 8) = local_3c;
          *(uint *)(local_4c + 0xc) = local_2c;
          *(uint *)(local_4c + 4) = local_34 + (local_40 - local_38);
          std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::
          push_back((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *
                    )(this + 0x14),&local_4c);
          local_11 = 1;
          break;
        }
        __gnu_cxx::
        __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
        ::operator++(local_24);
      }
      __gnu_cxx::__normal_iterator<Interval_const*,std::vector<Interval,std::allocator<Interval>>>::
      operator++(local_28);
    }
    std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::size
              ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
               (this + 0x14));
    uVar3 = 1;
  }
  return uVar3;
}
```
