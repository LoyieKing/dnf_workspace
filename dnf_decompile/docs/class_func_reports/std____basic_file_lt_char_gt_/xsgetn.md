# xsgetn

`_ZNSt12__basic_fileIcE6xsgetnEPci`

`std::__basic_file<char>::xsgetn(char*, int)`

| 类 | 地址 |
|---|---|
| `std::__basic_file<char>` | `0x087229c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087229c0  _ZNSt12__basic_fileIcE6xsgetnEPci
#           std::__basic_file<char>::xsgetn(char*, int)
# range [0x087229c0, 0x08722a1f]
087229c0 +0x00:  push   %ebp
087229c1 +0x01:  mov    %esp,%ebp
087229c3 +0x03:  push   %edi
087229c4 +0x04:  push   %esi
087229c5 +0x05:  push   %ebx
087229c6 +0x06:  sub    $0x1c,%esp
087229c9 +0x09:  mov    0xc(%ebp),%edi
087229cc +0x0c:  mov    0x10(%ebp),%esi
087229cf +0x0f:  mov    0x8(%ebp),%edx
087229d2 +0x12:  mov    (%edx),%eax
087229d4 +0x14:  mov    %eax,(%esp)
087229d7 +0x17:  call   0807e6d0 <_init+0xfc8>
087229dc +0x1c:  mov    %esi,0x8(%esp)
087229e0 +0x20:  mov    %edi,0x4(%esp)
087229e4 +0x24:  mov    %eax,(%esp)
087229e7 +0x27:  call   0807de60 <_init+0x758>
087229ec +0x2c:  cmp    $0xffffffff,%eax
087229ef +0x2f:  mov    %eax,%ebx
087229f1 +0x31:  je     08722a00 <+0x40>
087229f3 +0x33:  add    $0x1c,%esp
087229f6 +0x36:  mov    %ebx,%eax
087229f8 +0x38:  pop    %ebx
087229f9 +0x39:  pop    %esi
087229fa +0x3a:  pop    %edi
087229fb +0x3b:  pop    %ebp
087229fc +0x3c:  ret
087229fd +0x3d:  lea    0x0(%esi),%esi
08722a00 +0x40:  call   0807dd70 <_init+0x668>
08722a05 +0x45:  cmpl   $0x4,(%eax)
08722a08 +0x48:  je     087229cf <+0xf>
08722a0a +0x4a:  add    $0x1c,%esp
08722a0d +0x4d:  mov    %ebx,%eax
08722a0f +0x4f:  pop    %ebx
08722a10 +0x50:  pop    %esi
08722a11 +0x51:  pop    %edi
08722a12 +0x52:  pop    %ebp
08722a13 +0x53:  ret
08722a14 +0x54:  nop
08722a15 +0x55:  nop
08722a16 +0x56:  nop
08722a17 +0x57:  nop
08722a18 +0x58:  nop
08722a19 +0x59:  nop
08722a1a +0x5a:  nop
08722a1b +0x5b:  nop
08722a1c +0x5c:  nop
08722a1d +0x5d:  nop
08722a1e +0x5e:  nop
08722a1f +0x5f:  nop
```

## 反编译 C

```c
// std::__basic_file<char>::xsgetn @ 0x87229c0

/* std::__basic_file<char>::xsgetn(char*, int) */

ssize_t __thiscall
std::__basic_file<char>::xsgetn(__basic_file<char> *this,char *param_1,int param_2)

{
  int __fd;
  ssize_t sVar1;
  int *piVar2;
  
  do {
    __fd = fileno((FILE *)this->_M_cfile);
    sVar1 = ::read(__fd,param_1,param_2);
    if (sVar1 != -1) {
      return sVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  return -1;
}
```
