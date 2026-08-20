# IsDifferentExeVersionRoughly

`_ZN26WindowsCodeProtectorServer28IsDifferentExeVersionRoughlyEv`

`WindowsCodeProtectorServer::IsDifferentExeVersionRoughly()`

| 类 | 地址 |
|---|---|
| `WindowsCodeProtectorServer` | `0x08575970` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575970  _ZN26WindowsCodeProtectorServer28IsDifferentExeVersionRoughlyEv
#           WindowsCodeProtectorServer::IsDifferentExeVersionRoughly()
# range [0x08575970, 0x08575a3b]
08575970 +0x00:  push   %ebp
08575971 +0x01:  mov    %esp,%ebp
08575973 +0x03:  sub    $0x48,%esp
08575976 +0x06:  mov    0x8(%ebp),%eax
08575979 +0x09:  mov    (%eax),%eax
0857597b +0x0b:  test   %eax,%eax
0857597d +0x0d:  je     08575a35 <+0xc5>
08575983 +0x13:  lea    -0x1c(%ebp),%eax
08575986 +0x16:  mov    %eax,(%esp)
08575989 +0x19:  call   085766a6 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x86a>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x86a
0857598e +0x1e:  movl   $0x0,-0x10(%ebp)
08575995 +0x25:  mov    0x8(%ebp),%eax
08575998 +0x28:  mov    (%eax),%eax
0857599a +0x2a:  lea    0xc(%eax),%edx
0857599d +0x2d:  lea    -0x2c(%ebp),%eax
085759a0 +0x30:  mov    %edx,0x4(%esp)
085759a4 +0x34:  mov    %eax,(%esp)
085759a7 +0x37:  call   085766b4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x878>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x878
085759ac +0x3c:  sub    $0x4,%esp
085759af +0x3f:  mov    -0x2c(%ebp),%eax
085759b2 +0x42:  mov    %eax,-0x1c(%ebp)
085759b5 +0x45:  jmp    085759e4 <+0x74>
085759b7 +0x47:  lea    -0x1c(%ebp),%eax
085759ba +0x4a:  mov    %eax,(%esp)
085759bd +0x4d:  call   08576740 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x904>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x904
085759c2 +0x52:  mov    (%eax),%eax
085759c4 +0x54:  mov    %eax,-0x14(%ebp)
085759c7 +0x57:  mov    -0x14(%ebp),%eax
085759ca +0x5a:  mov    (%eax),%eax
085759cc +0x5c:  cmp    -0x10(%ebp),%eax
085759cf +0x5f:  jbe    085759d9 <+0x69>
085759d1 +0x61:  mov    -0x14(%ebp),%eax
085759d4 +0x64:  mov    (%eax),%eax
085759d6 +0x66:  mov    %eax,-0x10(%ebp)
085759d9 +0x69:  lea    -0x1c(%ebp),%eax
085759dc +0x6c:  mov    %eax,(%esp)
085759df +0x6f:  call   0857672a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x8ee>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x8ee
085759e4 +0x74:  mov    0x8(%ebp),%eax
085759e7 +0x77:  mov    (%eax),%eax
085759e9 +0x79:  lea    0xc(%eax),%edx
085759ec +0x7c:  lea    -0x18(%ebp),%eax
085759ef +0x7f:  mov    %edx,0x4(%esp)
085759f3 +0x83:  mov    %eax,(%esp)
085759f6 +0x86:  call   085766d8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x89c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x89c
085759fb +0x8b:  sub    $0x4,%esp
085759fe +0x8e:  lea    -0x18(%ebp),%eax
08575a01 +0x91:  mov    %eax,0x4(%esp)
08575a05 +0x95:  lea    -0x1c(%ebp),%eax
08575a08 +0x98:  mov    %eax,(%esp)
08575a0b +0x9b:  call   085766fe <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x8c2>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x8c2
08575a10 +0xa0:  test   %al,%al
08575a12 +0xa2:  jne    085759b7 <+0x47>
08575a14 +0xa4:  mov    0x8(%ebp),%eax
08575a17 +0xa7:  mov    (%eax),%eax
08575a19 +0xa9:  mov    %eax,(%esp)
08575a1c +0xac:  call   0857363c <_ZN11IntervalSet20GetTotalIntervalSizeEv>  ; IntervalSet::GetTotalIntervalSize()
08575a21 +0xb1:  mov    %eax,-0xc(%ebp)
08575a24 +0xb4:  mov    -0xc(%ebp),%eax
08575a27 +0xb7:  add    %eax,%eax
08575a29 +0xb9:  cmp    -0x10(%ebp),%eax
08575a2c +0xbc:  ja     08575a35 <+0xc5>
08575a2e +0xbe:  mov    $0x1,%eax
08575a33 +0xc3:  jmp    08575a3a <+0xca>
08575a35 +0xc5:  mov    $0x0,%eax
08575a3a +0xca:  leave
08575a3b +0xcb:  ret
```

## 反编译 C

```c
// WindowsCodeProtectorServer::IsDifferentExeVersionRoughly @ 0x8575970

/* WindowsCodeProtectorServer::IsDifferentExeVersionRoughly() */

undefined4 __thiscall
WindowsCodeProtectorServer::IsDifferentExeVersionRoughly(WindowsCodeProtectorServer *this)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  uint *local_18;
  uint local_14;
  
  if (*(int *)this != 0) {
    __gnu_cxx::
    __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
    ::__normal_iterator(local_20);
    local_14 = 0;
    std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::begin();
    while( true ) {
      std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::end();
      bVar1 = __gnu_cxx::operator!=(local_20,local_1c);
      if (!bVar1) break;
      puVar2 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
               ::operator*(local_20);
      local_18 = (uint *)*puVar2;
      if (local_14 < *local_18) {
        local_14 = *local_18;
      }
      __gnu_cxx::
      __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
      ::operator++(local_20);
    }
    iVar3 = IntervalSet::GetTotalIntervalSize();
    if ((uint)(iVar3 * 2) <= local_14) {
      return 1;
    }
  }
  return 0;
}
```
