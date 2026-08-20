# add

`_ZN14StringResource3addEiRK10CharString`

`StringResource::add(int, CharString const&)`

| 类 | 地址 |
|---|---|
| `StringResource` | `0x08ad47d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad47d0  _ZN14StringResource3addEiRK10CharString
#           StringResource::add(int, CharString const&)
# range [0x08ad47d0, 0x08ad4877]
08ad47d0 +0x00:  push   %ebp
08ad47d1 +0x01:  mov    %esp,%ebp
08ad47d3 +0x03:  push   %esi
08ad47d4 +0x04:  push   %ebx
08ad47d5 +0x05:  sub    $0x30,%esp
08ad47d8 +0x08:  mov    0x10(%ebp),%eax
08ad47db +0x0b:  mov    %eax,0x8(%esp)
08ad47df +0x0f:  lea    0xc(%ebp),%eax
08ad47e2 +0x12:  mov    %eax,0x4(%esp)
08ad47e6 +0x16:  lea    -0x10(%ebp),%eax
08ad47e9 +0x19:  mov    %eax,(%esp)
08ad47ec +0x1c:  call   08ad5606 <_ZN3app6getStrEi+0x13a>  ; app::getStr(int)+0x13a
08ad47f1 +0x21:  lea    -0x10(%ebp),%eax
08ad47f4 +0x24:  mov    %eax,0x4(%esp)
08ad47f8 +0x28:  lea    -0x18(%ebp),%eax
08ad47fb +0x2b:  mov    %eax,(%esp)
08ad47fe +0x2e:  call   08ad563e <_ZN3app6getStrEi+0x172>  ; app::getStr(int)+0x172
08ad4803 +0x33:  mov    0x8(%ebp),%edx
08ad4806 +0x36:  lea    -0x20(%ebp),%eax
08ad4809 +0x39:  lea    -0x18(%ebp),%ecx
08ad480c +0x3c:  mov    %ecx,0x8(%esp)
08ad4810 +0x40:  mov    %edx,0x4(%esp)
08ad4814 +0x44:  mov    %eax,(%esp)
08ad4817 +0x47:  call   08ad5678 <_ZN3app6getStrEi+0x1ac>  ; app::getStr(int)+0x1ac
08ad481c +0x4c:  sub    $0x4,%esp
08ad481f +0x4f:  movzbl -0x1c(%ebp),%ebx
08ad4823 +0x53:  lea    -0x18(%ebp),%eax
08ad4826 +0x56:  mov    %eax,(%esp)
08ad4829 +0x59:  call   08ad5576 <_ZN3app6getStrEi+0xaa>  ; app::getStr(int)+0xaa
08ad482e +0x5e:  jmp    08ad4860 <+0x90>
08ad4830 +0x60:  mov    %edx,%ebx
08ad4832 +0x62:  mov    %eax,%esi
08ad4834 +0x64:  lea    -0x18(%ebp),%eax
08ad4837 +0x67:  mov    %eax,(%esp)
08ad483a +0x6a:  call   08ad5576 <_ZN3app6getStrEi+0xaa>  ; app::getStr(int)+0xaa
08ad483f +0x6f:  mov    %esi,%eax
08ad4841 +0x71:  mov    %ebx,%edx
08ad4843 +0x73:  jmp    08ad4845 <+0x75>
08ad4845 +0x75:  mov    %edx,%ebx
08ad4847 +0x77:  mov    %eax,%esi
08ad4849 +0x79:  lea    -0x10(%ebp),%eax
08ad484c +0x7c:  mov    %eax,(%esp)
08ad484f +0x7f:  call   08ad5560 <_ZN3app6getStrEi+0x94>  ; app::getStr(int)+0x94
08ad4854 +0x84:  mov    %esi,%eax
08ad4856 +0x86:  mov    %ebx,%edx
08ad4858 +0x88:  mov    %eax,(%esp)
08ad485b +0x8b:  call   08ae3750 <_Unwind_Resume>
08ad4860 +0x90:  lea    -0x10(%ebp),%eax
08ad4863 +0x93:  mov    %eax,(%esp)
08ad4866 +0x96:  call   08ad5560 <_ZN3app6getStrEi+0x94>  ; app::getStr(int)+0x94
08ad486b +0x9b:  mov    %ebx,%eax
08ad486d +0x9d:  lea    -0x8(%ebp),%esp
08ad4870 +0xa0:  add    $0x0,%esp
08ad4873 +0xa3:  pop    %ebx
08ad4874 +0xa4:  pop    %esi
08ad4875 +0xa5:  pop    %ebp
08ad4876 +0xa6:  ret
08ad4877 +0xa7:  nop
```

## 反编译 C

```c
// StringResource::add @ 0x8ad47d0

/* StringResource::add(int, CharString const&) */

undefined1 __thiscall StringResource::add(StringResource *this,int param_1,CharString *param_2)

{
  pair local_24 [4];
  undefined1 local_20;
  pair<int_const,CharString> local_1c [8];
  pair<int,CharString> local_14 [8];
  
  std::pair<int,CharString>::pair<int&,CharString_const&>(local_14,&param_1,param_2);
                    /* try { // try from 08ad47fe to 08ad4802 has its CatchHandler @ 08ad4845 */
  std::pair<int_const,CharString>::pair<int,CharString>(local_1c,local_14);
                    /* try { // try from 08ad4817 to 08ad481b has its CatchHandler @ 08ad4830 */
  std::map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>>::insert
            (local_24);
                    /* try { // try from 08ad4829 to 08ad482d has its CatchHandler @ 08ad4845 */
  std::pair<int_const,CharString>::~pair(local_1c);
  std::pair<int,CharString>::~pair(local_14);
  return local_20;
}
```
