# WindowsExeFile

`_ZN14WindowsExeFileC1Ev`

`WindowsExeFile::WindowsExeFile()`

| 类 | 地址 |
|---|---|
| `WindowsExeFile` | `0x085736be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085736be  _ZN14WindowsExeFileC1Ev
#           WindowsExeFile::WindowsExeFile()
# range [0x085736be, 0x08573715]
085736be +0x00:  push   %ebp
085736bf +0x01:  mov    %esp,%ebp
085736c1 +0x03:  push   %esi
085736c2 +0x04:  push   %ebx
085736c3 +0x05:  sub    $0x10,%esp
085736c6 +0x08:  mov    0x8(%ebp),%eax
085736c9 +0x0b:  add    $0x8,%eax
085736cc +0x0e:  mov    %eax,(%esp)
085736cf +0x11:  call   085763ee <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x5b2>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x5b2
085736d4 +0x16:  mov    0x8(%ebp),%eax
085736d7 +0x19:  add    $0x14,%eax
085736da +0x1c:  mov    %eax,(%esp)
085736dd +0x1f:  call   085763ee <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x5b2>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x5b2
085736e2 +0x24:  mov    0x8(%ebp),%eax
085736e5 +0x27:  movl   $0x0,(%eax)
085736eb +0x2d:  mov    0x8(%ebp),%eax
085736ee +0x30:  movl   $0x0,0x4(%eax)
085736f5 +0x37:  add    $0x10,%esp
085736f8 +0x3a:  pop    %ebx
085736f9 +0x3b:  pop    %esi
085736fa +0x3c:  pop    %ebp
085736fb +0x3d:  ret
085736fc +0x3e:  mov    %edx,%ebx
085736fe +0x40:  mov    %eax,%esi
08573700 +0x42:  mov    0x8(%ebp),%eax
08573703 +0x45:  add    $0x8,%eax
08573706 +0x48:  mov    %eax,(%esp)
08573709 +0x4b:  call   08576402 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x5c6>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x5c6
0857370e +0x50:  mov    %esi,%eax
08573710 +0x52:  mov    %ebx,%edx
08573712 +0x54:  mov    %eax,(%esp)
08573715 +0x57:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// WindowsExeFile::WindowsExeFile @ 0x85736be

/* WindowsExeFile::WindowsExeFile() */

void __thiscall WindowsExeFile::WindowsExeFile(WindowsExeFile *this)

{
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::vector
            ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
             (this + 8));
                    /* try { // try from 085736dd to 085736e1 has its CatchHandler @ 085736fc */
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::vector
            ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
             (this + 0x14));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}
```
