# IsDifferentFileData

`_ZN20WindowsExeFileFamily19IsDifferentFileDataEP14WindowsExeFile`

`WindowsExeFileFamily::IsDifferentFileData(WindowsExeFile*)`

| 类 | 地址 |
|---|---|
| `WindowsExeFileFamily` | `0x08574ace` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08574ace  _ZN20WindowsExeFileFamily19IsDifferentFileDataEP14WindowsExeFile
#           WindowsExeFileFamily::IsDifferentFileData(WindowsExeFile*)
# range [0x08574ace, 0x08574b8d]
08574ace +0x00:  push   %ebp
08574acf +0x01:  mov    %esp,%ebp
08574ad1 +0x03:  sub    $0x38,%esp
08574ad4 +0x06:  lea    -0x14(%ebp),%eax
08574ad7 +0x09:  mov    %eax,(%esp)
08574ada +0x0c:  call   085766a6 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x86a>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x86a
08574adf +0x11:  mov    0x8(%ebp),%eax
08574ae2 +0x14:  lea    0xc(%eax),%edx
08574ae5 +0x17:  lea    -0x1c(%ebp),%eax
08574ae8 +0x1a:  mov    %edx,0x4(%esp)
08574aec +0x1e:  mov    %eax,(%esp)
08574aef +0x21:  call   085766b4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x878>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x878
08574af4 +0x26:  sub    $0x4,%esp
08574af7 +0x29:  mov    -0x1c(%ebp),%eax
08574afa +0x2c:  mov    %eax,-0x14(%ebp)
08574afd +0x2f:  jmp    08574b54 <+0x86>
08574aff +0x31:  lea    -0x14(%ebp),%eax
08574b02 +0x34:  mov    %eax,(%esp)
08574b05 +0x37:  call   08576740 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x904>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x904
08574b0a +0x3c:  mov    (%eax),%eax
08574b0c +0x3e:  mov    %eax,-0xc(%ebp)
08574b0f +0x41:  mov    -0xc(%ebp),%eax
08574b12 +0x44:  mov    (%eax),%edx
08574b14 +0x46:  mov    0xc(%ebp),%eax
08574b17 +0x49:  mov    (%eax),%eax
08574b19 +0x4b:  cmp    %eax,%edx
08574b1b +0x4d:  jne    08574b49 <+0x7b>
08574b1d +0x4f:  mov    0xc(%ebp),%eax
08574b20 +0x52:  mov    (%eax),%ecx
08574b22 +0x54:  mov    0xc(%ebp),%eax
08574b25 +0x57:  mov    0x4(%eax),%edx
08574b28 +0x5a:  mov    -0xc(%ebp),%eax
08574b2b +0x5d:  mov    0x4(%eax),%eax
08574b2e +0x60:  mov    %ecx,0x8(%esp)
08574b32 +0x64:  mov    %edx,0x4(%esp)
08574b36 +0x68:  mov    %eax,(%esp)
08574b39 +0x6b:  call   0807dc90 <_init+0x588>
08574b3e +0x70:  test   %eax,%eax
08574b40 +0x72:  jne    08574b49 <+0x7b>
08574b42 +0x74:  mov    $0x0,%eax
08574b47 +0x79:  jmp    08574b8b <+0xbd>
08574b49 +0x7b:  lea    -0x14(%ebp),%eax
08574b4c +0x7e:  mov    %eax,(%esp)
08574b4f +0x81:  call   0857672a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x8ee>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x8ee
08574b54 +0x86:  mov    0x8(%ebp),%eax
08574b57 +0x89:  lea    0xc(%eax),%edx
08574b5a +0x8c:  lea    -0x10(%ebp),%eax
08574b5d +0x8f:  mov    %edx,0x4(%esp)
08574b61 +0x93:  mov    %eax,(%esp)
08574b64 +0x96:  call   085766d8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x89c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x89c
08574b69 +0x9b:  sub    $0x4,%esp
08574b6c +0x9e:  lea    -0x10(%ebp),%eax
08574b6f +0xa1:  mov    %eax,0x4(%esp)
08574b73 +0xa5:  lea    -0x14(%ebp),%eax
08574b76 +0xa8:  mov    %eax,(%esp)
08574b79 +0xab:  call   085766fe <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x8c2>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x8c2
08574b7e +0xb0:  test   %al,%al
08574b80 +0xb2:  jne    08574aff <+0x31>
08574b86 +0xb8:  mov    $0x1,%eax
08574b8b +0xbd:  leave
08574b8c +0xbe:  ret
08574b8d +0xbf:  nop
```

## 反编译 C

```c
// WindowsExeFileFamily::IsDifferentFileData @ 0x8574ace

/* WindowsExeFileFamily::IsDifferentFileData(WindowsExeFile*) */

undefined4 __thiscall
WindowsExeFileFamily::IsDifferentFileData(WindowsExeFileFamily *this,WindowsExeFile *param_1)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  int *local_10;
  
  __gnu_cxx::
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>::
  __normal_iterator(local_18);
  std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::begin();
  while( true ) {
    std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      return 1;
    }
    local_10 = (int *)__gnu_cxx::
                      __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
                      ::operator*(local_18);
    local_10 = (int *)*local_10;
    if ((*local_10 == *(int *)param_1) &&
       (iVar2 = memcmp((void *)local_10[1],*(void **)(param_1 + 4),*(size_t *)param_1), iVar2 == 0))
    break;
    __gnu_cxx::
    __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
    ::operator++(local_18);
  }
  return 0;
}
```
