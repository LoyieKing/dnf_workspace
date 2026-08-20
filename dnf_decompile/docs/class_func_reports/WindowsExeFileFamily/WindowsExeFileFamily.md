# WindowsExeFileFamily

`_ZN20WindowsExeFileFamilyC1Ev`

`WindowsExeFileFamily::WindowsExeFileFamily()`

| 类 | 地址 |
|---|---|
| `WindowsExeFileFamily` | `0x0857446a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857446a  _ZN20WindowsExeFileFamilyC1Ev
#           WindowsExeFileFamily::WindowsExeFileFamily()
# range [0x0857446a, 0x085744ff]
0857446a +0x00:  push   %ebp
0857446b +0x01:  mov    %esp,%ebp
0857446d +0x03:  push   %esi
0857446e +0x04:  push   %ebx
0857446f +0x05:  sub    $0x10,%esp
08574472 +0x08:  mov    0x8(%ebp),%eax
08574475 +0x0b:  mov    %eax,(%esp)
08574478 +0x0e:  call   08575e9c <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x60>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x60
0857447d +0x13:  mov    0x8(%ebp),%eax
08574480 +0x16:  add    $0xc,%eax
08574483 +0x19:  mov    %eax,(%esp)
08574486 +0x1c:  call   08576634 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x7f8>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x7f8
0857448b +0x21:  mov    0x8(%ebp),%eax
0857448e +0x24:  add    $0x18,%eax
08574491 +0x27:  movl   $0x104,0x8(%esp)
08574499 +0x2f:  movl   $0x0,0x4(%esp)
085744a1 +0x37:  mov    %eax,(%esp)
085744a4 +0x3a:  call   0807dcc0 <_init+0x5b8>
085744a9 +0x3f:  mov    0x8(%ebp),%eax
085744ac +0x42:  movl   $0x0,0x11c(%eax)
085744b6 +0x4c:  mov    0x8(%ebp),%eax
085744b9 +0x4f:  movl   $0x0,0x120(%eax)
085744c3 +0x59:  mov    0x8(%ebp),%eax
085744c6 +0x5c:  movl   $0x0,0x124(%eax)
085744d0 +0x66:  mov    0x8(%ebp),%eax
085744d3 +0x69:  movl   $0x0,0x128(%eax)
085744dd +0x73:  add    $0x10,%esp
085744e0 +0x76:  pop    %ebx
085744e1 +0x77:  pop    %esi
085744e2 +0x78:  pop    %ebp
085744e3 +0x79:  ret
085744e4 +0x7a:  mov    %edx,%ebx
085744e6 +0x7c:  mov    %eax,%esi
085744e8 +0x7e:  mov    0x8(%ebp),%eax
085744eb +0x81:  mov    %eax,(%esp)
085744ee +0x84:  call   08575eb0 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x74>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x74
085744f3 +0x89:  mov    %esi,%eax
085744f5 +0x8b:  mov    %ebx,%edx
085744f7 +0x8d:  mov    %eax,(%esp)
085744fa +0x90:  call   08ae3750 <_Unwind_Resume>
085744ff +0x95:  nop
```

## 反编译 C

```c
// WindowsExeFileFamily::WindowsExeFileFamily @ 0x857446a

/* WindowsExeFileFamily::WindowsExeFileFamily() */

void __thiscall WindowsExeFileFamily::WindowsExeFileFamily(WindowsExeFileFamily *this)

{
  IntervalSet::IntervalSet((IntervalSet *)this);
                    /* try { // try from 08574486 to 0857448a has its CatchHandler @ 085744e4 */
  std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::vector
            ((vector<WindowsExeFile*,std::allocator<WindowsExeFile*>> *)(this + 0xc));
  memset(this + 0x18,0,0x104);
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  return;
}
```
