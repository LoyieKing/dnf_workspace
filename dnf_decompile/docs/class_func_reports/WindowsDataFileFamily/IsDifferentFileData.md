# IsDifferentFileData

`_ZN21WindowsDataFileFamily19IsDifferentFileDataEP15WindowsDataFile`

`WindowsDataFileFamily::IsDifferentFileData(WindowsDataFile*)`

| 类 | 地址 |
|---|---|
| `WindowsDataFileFamily` | `0x08575068` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575068  _ZN21WindowsDataFileFamily19IsDifferentFileDataEP15WindowsDataFile
#           WindowsDataFileFamily::IsDifferentFileData(WindowsDataFile*)
# range [0x08575068, 0x0857511d]
08575068 +0x00:  push   %ebp
08575069 +0x01:  mov    %esp,%ebp
0857506b +0x03:  sub    $0x38,%esp
0857506e +0x06:  lea    -0x14(%ebp),%eax
08575071 +0x09:  mov    %eax,(%esp)
08575074 +0x0c:  call   08576bb6 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xd7a>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xd7a
08575079 +0x11:  mov    0x8(%ebp),%edx
0857507c +0x14:  lea    -0x1c(%ebp),%eax
0857507f +0x17:  mov    %edx,0x4(%esp)
08575083 +0x1b:  mov    %eax,(%esp)
08575086 +0x1e:  call   08576bc4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xd88>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xd88
0857508b +0x23:  sub    $0x4,%esp
0857508e +0x26:  mov    -0x1c(%ebp),%eax
08575091 +0x29:  mov    %eax,-0x14(%ebp)
08575094 +0x2c:  jmp    085750eb <+0x83>
08575096 +0x2e:  lea    -0x14(%ebp),%eax
08575099 +0x31:  mov    %eax,(%esp)
0857509c +0x34:  call   08576c50 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xe14>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xe14
085750a1 +0x39:  mov    (%eax),%eax
085750a3 +0x3b:  mov    %eax,-0xc(%ebp)
085750a6 +0x3e:  mov    -0xc(%ebp),%eax
085750a9 +0x41:  mov    (%eax),%edx
085750ab +0x43:  mov    0xc(%ebp),%eax
085750ae +0x46:  mov    (%eax),%eax
085750b0 +0x48:  cmp    %eax,%edx
085750b2 +0x4a:  jne    085750e0 <+0x78>
085750b4 +0x4c:  mov    0xc(%ebp),%eax
085750b7 +0x4f:  mov    (%eax),%ecx
085750b9 +0x51:  mov    0xc(%ebp),%eax
085750bc +0x54:  mov    0x4(%eax),%edx
085750bf +0x57:  mov    -0xc(%ebp),%eax
085750c2 +0x5a:  mov    0x4(%eax),%eax
085750c5 +0x5d:  mov    %ecx,0x8(%esp)
085750c9 +0x61:  mov    %edx,0x4(%esp)
085750cd +0x65:  mov    %eax,(%esp)
085750d0 +0x68:  call   0807dc90 <_init+0x588>
085750d5 +0x6d:  test   %eax,%eax
085750d7 +0x6f:  jne    085750e0 <+0x78>
085750d9 +0x71:  mov    $0x0,%eax
085750de +0x76:  jmp    0857511b <+0xb3>
085750e0 +0x78:  lea    -0x14(%ebp),%eax
085750e3 +0x7b:  mov    %eax,(%esp)
085750e6 +0x7e:  call   08576c3a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xdfe>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xdfe
085750eb +0x83:  mov    0x8(%ebp),%edx
085750ee +0x86:  lea    -0x10(%ebp),%eax
085750f1 +0x89:  mov    %edx,0x4(%esp)
085750f5 +0x8d:  mov    %eax,(%esp)
085750f8 +0x90:  call   08576be8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xdac>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xdac
085750fd +0x95:  sub    $0x4,%esp
08575100 +0x98:  lea    -0x10(%ebp),%eax
08575103 +0x9b:  mov    %eax,0x4(%esp)
08575107 +0x9f:  lea    -0x14(%ebp),%eax
0857510a +0xa2:  mov    %eax,(%esp)
0857510d +0xa5:  call   08576c0e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xdd2>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xdd2
08575112 +0xaa:  test   %al,%al
08575114 +0xac:  jne    08575096 <+0x2e>
08575116 +0xae:  mov    $0x1,%eax
0857511b +0xb3:  leave
0857511c +0xb4:  ret
0857511d +0xb5:  nop
```

## 反编译 C

```c
// WindowsDataFileFamily::IsDifferentFileData @ 0x8575068

/* WindowsDataFileFamily::IsDifferentFileData(WindowsDataFile*) */

undefined4 __thiscall
WindowsDataFileFamily::IsDifferentFileData(WindowsDataFileFamily *this,WindowsDataFile *param_1)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  int *local_10;
  
  __gnu_cxx::
  __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
  ::__normal_iterator(local_18);
  std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::begin();
  while( true ) {
    std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      return 1;
    }
    local_10 = (int *)__gnu_cxx::
                      __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
                      ::operator*(local_18);
    local_10 = (int *)*local_10;
    if ((*local_10 == *(int *)param_1) &&
       (iVar2 = memcmp((void *)local_10[1],*(void **)(param_1 + 4),*(size_t *)param_1), iVar2 == 0))
    break;
    __gnu_cxx::
    __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
    ::operator++(local_18);
  }
  return 0;
}
```
