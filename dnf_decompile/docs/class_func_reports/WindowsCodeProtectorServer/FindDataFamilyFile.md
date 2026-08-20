# FindDataFamilyFile

`_ZN26WindowsCodeProtectorServer18FindDataFamilyFileEPKc`

`WindowsCodeProtectorServer::FindDataFamilyFile(char const*)`

| 类 | 地址 |
|---|---|
| `WindowsCodeProtectorServer` | `0x0857562e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857562e  _ZN26WindowsCodeProtectorServer18FindDataFamilyFileEPKc
#           WindowsCodeProtectorServer::FindDataFamilyFile(char const*)
# range [0x0857562e, 0x085756cd]
0857562e +0x00:  push   %ebp
0857562f +0x01:  mov    %esp,%ebp
08575631 +0x03:  sub    $0x38,%esp
08575634 +0x06:  lea    -0x14(%ebp),%eax
08575637 +0x09:  mov    %eax,(%esp)
0857563a +0x0c:  call   08576da0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xf64>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xf64
0857563f +0x11:  mov    0x8(%ebp),%eax
08575642 +0x14:  lea    0x4(%eax),%edx
08575645 +0x17:  lea    -0x1c(%ebp),%eax
08575648 +0x1a:  mov    %edx,0x4(%esp)
0857564c +0x1e:  mov    %eax,(%esp)
0857564f +0x21:  call   08576dae <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xf72>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xf72
08575654 +0x26:  sub    $0x4,%esp
08575657 +0x29:  mov    -0x1c(%ebp),%eax
0857565a +0x2c:  mov    %eax,-0x14(%ebp)
0857565d +0x2f:  jmp    08575698 <+0x6a>
0857565f +0x31:  lea    -0x14(%ebp),%eax
08575662 +0x34:  mov    %eax,(%esp)
08575665 +0x37:  call   08576e3a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xffe>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xffe
0857566a +0x3c:  mov    (%eax),%eax
0857566c +0x3e:  mov    %eax,-0xc(%ebp)
0857566f +0x41:  mov    -0xc(%ebp),%eax
08575672 +0x44:  lea    0xc(%eax),%edx
08575675 +0x47:  mov    0xc(%ebp),%eax
08575678 +0x4a:  mov    %eax,0x4(%esp)
0857567c +0x4e:  mov    %edx,(%esp)
0857567f +0x51:  call   0807e4e0 <_init+0xdd8>
08575684 +0x56:  test   %eax,%eax
08575686 +0x58:  jne    0857568d <+0x5f>
08575688 +0x5a:  mov    -0xc(%ebp),%eax
0857568b +0x5d:  jmp    085756cb <+0x9d>
0857568d +0x5f:  lea    -0x14(%ebp),%eax
08575690 +0x62:  mov    %eax,(%esp)
08575693 +0x65:  call   08576e24 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xfe8>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xfe8
08575698 +0x6a:  mov    0x8(%ebp),%eax
0857569b +0x6d:  lea    0x4(%eax),%edx
0857569e +0x70:  lea    -0x10(%ebp),%eax
085756a1 +0x73:  mov    %edx,0x4(%esp)
085756a5 +0x77:  mov    %eax,(%esp)
085756a8 +0x7a:  call   08576dd2 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xf96>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xf96
085756ad +0x7f:  sub    $0x4,%esp
085756b0 +0x82:  lea    -0x10(%ebp),%eax
085756b3 +0x85:  mov    %eax,0x4(%esp)
085756b7 +0x89:  lea    -0x14(%ebp),%eax
085756ba +0x8c:  mov    %eax,(%esp)
085756bd +0x8f:  call   08576df8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xfbc>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xfbc
085756c2 +0x94:  test   %al,%al
085756c4 +0x96:  jne    0857565f <+0x31>
085756c6 +0x98:  mov    $0x0,%eax
085756cb +0x9d:  leave
085756cc +0x9e:  ret
085756cd +0x9f:  nop
```

## 反编译 C

```c
// WindowsCodeProtectorServer::FindDataFamilyFile @ 0x857562e

/* WindowsCodeProtectorServer::FindDataFamilyFile(char const*) */

int __thiscall
WindowsCodeProtectorServer::FindDataFamilyFile(WindowsCodeProtectorServer *this,char *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  int local_10;
  
  __gnu_cxx::
  __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
  ::__normal_iterator(local_18);
  std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::begin();
  while( true ) {
    std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
                    ::operator*(local_18);
    local_10 = *piVar2;
    iVar3 = strcmp((char *)(local_10 + 0xc),param_1);
    if (iVar3 == 0) break;
    __gnu_cxx::
    __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
    ::operator++(local_18);
  }
  return local_10;
}
```
