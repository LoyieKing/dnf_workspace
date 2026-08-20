# Destroy

`_ZN26WindowsCodeProtectorServer7DestroyEv`

`WindowsCodeProtectorServer::Destroy()`

| 类 | 地址 |
|---|---|
| `WindowsCodeProtectorServer` | `0x08575500` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575500  _ZN26WindowsCodeProtectorServer7DestroyEv
#           WindowsCodeProtectorServer::Destroy()
# range [0x08575500, 0x085755f5]
08575500 +0x00:  push   %ebp
08575501 +0x01:  mov    %esp,%ebp
08575503 +0x03:  push   %ebx
08575504 +0x04:  sub    $0x34,%esp
08575507 +0x07:  mov    0x8(%ebp),%eax
0857550a +0x0a:  mov    (%eax),%eax
0857550c +0x0c:  test   %eax,%eax
0857550e +0x0e:  je     08575532 <+0x32>
08575510 +0x10:  mov    0x8(%ebp),%eax
08575513 +0x13:  mov    (%eax),%ebx
08575515 +0x15:  test   %ebx,%ebx
08575517 +0x17:  je     08575529 <+0x29>
08575519 +0x19:  mov    %ebx,(%esp)
0857551c +0x1c:  call   08574500 <_ZN20WindowsExeFileFamilyD1Ev>  ; WindowsExeFileFamily::~WindowsExeFileFamily()
08575521 +0x21:  mov    %ebx,(%esp)
08575524 +0x24:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08575529 +0x29:  mov    0x8(%ebp),%eax
0857552c +0x2c:  movl   $0x0,(%eax)
08575532 +0x32:  lea    -0x10(%ebp),%eax
08575535 +0x35:  mov    %eax,(%esp)
08575538 +0x38:  call   08576da0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xf64>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xf64
0857553d +0x3d:  mov    0x8(%ebp),%eax
08575540 +0x40:  lea    0x4(%eax),%edx
08575543 +0x43:  lea    -0x1c(%ebp),%eax
08575546 +0x46:  mov    %edx,0x4(%esp)
0857554a +0x4a:  mov    %eax,(%esp)
0857554d +0x4d:  call   08576dae <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xf72>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xf72
08575552 +0x52:  sub    $0x4,%esp
08575555 +0x55:  mov    -0x1c(%ebp),%eax
08575558 +0x58:  mov    %eax,-0x10(%ebp)
0857555b +0x5b:  jmp    085755b0 <+0xb0>
0857555d +0x5d:  lea    -0x10(%ebp),%eax
08575560 +0x60:  mov    %eax,(%esp)
08575563 +0x63:  call   08576e3a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xffe>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xffe
08575568 +0x68:  mov    (%eax),%eax
0857556a +0x6a:  test   %eax,%eax
0857556c +0x6c:  setne  %al
0857556f +0x6f:  test   %al,%al
08575571 +0x71:  je     085755a5 <+0xa5>
08575573 +0x73:  lea    -0x10(%ebp),%eax
08575576 +0x76:  mov    %eax,(%esp)
08575579 +0x79:  call   08576e3a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xffe>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xffe
0857557e +0x7e:  mov    (%eax),%ebx
08575580 +0x80:  test   %ebx,%ebx
08575582 +0x82:  je     08575594 <+0x94>
08575584 +0x84:  mov    %ebx,(%esp)
08575587 +0x87:  call   08574f7c <_ZN21WindowsDataFileFamilyD1Ev>  ; WindowsDataFileFamily::~WindowsDataFileFamily()
0857558c +0x8c:  mov    %ebx,(%esp)
0857558f +0x8f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08575594 +0x94:  lea    -0x10(%ebp),%eax
08575597 +0x97:  mov    %eax,(%esp)
0857559a +0x9a:  call   08576e3a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xffe>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xffe
0857559f +0x9f:  movl   $0x0,(%eax)
085755a5 +0xa5:  lea    -0x10(%ebp),%eax
085755a8 +0xa8:  mov    %eax,(%esp)
085755ab +0xab:  call   08576e24 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xfe8>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xfe8
085755b0 +0xb0:  mov    0x8(%ebp),%eax
085755b3 +0xb3:  lea    0x4(%eax),%edx
085755b6 +0xb6:  lea    -0xc(%ebp),%eax
085755b9 +0xb9:  mov    %edx,0x4(%esp)
085755bd +0xbd:  mov    %eax,(%esp)
085755c0 +0xc0:  call   08576dd2 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xf96>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xf96
085755c5 +0xc5:  sub    $0x4,%esp
085755c8 +0xc8:  lea    -0xc(%ebp),%eax
085755cb +0xcb:  mov    %eax,0x4(%esp)
085755cf +0xcf:  lea    -0x10(%ebp),%eax
085755d2 +0xd2:  mov    %eax,(%esp)
085755d5 +0xd5:  call   08576df8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xfbc>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xfbc
085755da +0xda:  test   %al,%al
085755dc +0xdc:  jne    0857555d <+0x5d>
085755e2 +0xe2:  mov    0x8(%ebp),%eax
085755e5 +0xe5:  add    $0x4,%eax
085755e8 +0xe8:  mov    %eax,(%esp)
085755eb +0xeb:  call   08576e44 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x1008>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x1008
085755f0 +0xf0:  mov    -0x4(%ebp),%ebx
085755f3 +0xf3:  leave
085755f4 +0xf4:  ret
085755f5 +0xf5:  nop
```

## 反编译 C

```c
// WindowsCodeProtectorServer::Destroy @ 0x8575500

/* WindowsCodeProtectorServer::Destroy() */

void __thiscall WindowsCodeProtectorServer::Destroy(WindowsCodeProtectorServer *this)

{
  WindowsExeFileFamily *this_00;
  WindowsDataFileFamily *this_01;
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
  local_14 [4];
  __normal_iterator local_10 [8];
  
  if (*(int *)this != 0) {
    this_00 = *(WindowsExeFileFamily **)this;
    if (this_00 != (WindowsExeFileFamily *)0x0) {
      WindowsExeFileFamily::~WindowsExeFileFamily(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)this = 0;
  }
  __gnu_cxx::
  __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
  ::__normal_iterator(local_14);
  std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::begin();
  while( true ) {
    std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_14,local_10);
    if (!bVar1) break;
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
                    ::operator*(local_14);
    if (*piVar2 != 0) {
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
               ::operator*(local_14);
      this_01 = (WindowsDataFileFamily *)*puVar3;
      if (this_01 != (WindowsDataFileFamily *)0x0) {
        WindowsDataFileFamily::~WindowsDataFileFamily(this_01);
        operator_delete(this_01);
      }
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
               ::operator*(local_14);
      *puVar3 = 0;
    }
    __gnu_cxx::
    __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
    ::operator++(local_14);
  }
  std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::clear
            ((vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>> *)(this + 4));
  return;
}
```
