# Sort

`_ZN14WindowsExeFile4SortEv`

`WindowsExeFile::Sort()`

| 类 | 地址 |
|---|---|
| `WindowsExeFile` | `0x0857415c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857415c  _ZN14WindowsExeFile4SortEv
#           WindowsExeFile::Sort()
# range [0x0857415c, 0x085741c5]
0857415c +0x00:  push   %ebp
0857415d +0x01:  mov    %esp,%ebp
0857415f +0x03:  push   %ebx
08574160 +0x04:  sub    $0x14,%esp
08574163 +0x07:  mov    0x8(%ebp),%eax
08574166 +0x0a:  add    $0x14,%eax
08574169 +0x0d:  mov    %eax,(%esp)
0857416c +0x10:  call   08576606 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x7ca>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x7ca
08574171 +0x15:  test   %eax,%eax
08574173 +0x17:  sete   %al
08574176 +0x1a:  test   %al,%al
08574178 +0x1c:  jne    085741be <+0x62>
0857417a +0x1e:  mov    0x8(%ebp),%eax
0857417d +0x21:  add    $0x14,%eax
08574180 +0x24:  mov    %eax,(%esp)
08574183 +0x27:  call   08576606 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x7ca>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x7ca
08574188 +0x2c:  mov    %eax,%ebx
0857418a +0x2e:  mov    0x8(%ebp),%eax
0857418d +0x31:  add    $0x14,%eax
08574190 +0x34:  movl   $0x0,0x4(%esp)
08574198 +0x3c:  mov    %eax,(%esp)
0857419b +0x3f:  call   08576622 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x7e6>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x7e6
085741a0 +0x44:  movl   $&_ZL40CompareWindowsExeConstantSectionsForSortPKvS0_,0xc(%esp)
085741a8 +0x4c:  movl   $0x4,0x8(%esp)
085741b0 +0x54:  mov    %ebx,0x4(%esp)
085741b4 +0x58:  mov    %eax,(%esp)
085741b7 +0x5b:  call   0807e870 <_init+0x1168>
085741bc +0x60:  jmp    085741bf <+0x63>
085741be +0x62:  nop
085741bf +0x63:  add    $0x14,%esp
085741c2 +0x66:  pop    %ebx
085741c3 +0x67:  pop    %ebp
085741c4 +0x68:  ret
085741c5 +0x69:  nop
```

## 反编译 C

```c
// WindowsExeFile::Sort @ 0x857415c

/* WindowsExeFile::Sort() */

void __thiscall WindowsExeFile::Sort(WindowsExeFile *this)

{
  int iVar1;
  size_t __nmemb;
  void *__base;
  
  iVar1 = std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::size
                    ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>
                      *)(this + 0x14));
  if (iVar1 != 0) {
    __nmemb = std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::
              size((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
                   (this + 0x14));
    __base = (void *)std::
                     vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::
                     operator[]((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>
                                 *)(this + 0x14),0);
    qsort(__base,__nmemb,4,CompareWindowsExeConstantSectionsForSort);
  }
  return;
}
```
