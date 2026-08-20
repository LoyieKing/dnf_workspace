# message

`_ZNK12_GLOBAL__N_122generic_error_category7messageEi`

`(anonymous namespace)::generic_error_category::message(int) const`

| 类 | 地址 |
|---|---|
| `(anonymous namespace)::generic_error_category` | `0x086df740` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df740  _ZNK12_GLOBAL__N_122generic_error_category7messageEi
#           (anonymous namespace)::generic_error_category::message(int) const
# range [0x086df740, 0x086df77f]
086df740 +0x00:  push   %ebp
086df741 +0x01:  mov    %esp,%ebp
086df743 +0x03:  push   %ebx
086df744 +0x04:  sub    $0x24,%esp
086df747 +0x07:  mov    0x10(%ebp),%eax
086df74a +0x0a:  mov    0x8(%ebp),%ebx
086df74d +0x0d:  mov    %eax,(%esp)
086df750 +0x10:  call   0807d730 <_init+0x28>
086df755 +0x15:  lea    -0x9(%ebp),%edx
086df758 +0x18:  mov    %edx,0x8(%esp)
086df75c +0x1c:  mov    %ebx,(%esp)
086df75f +0x1f:  mov    %eax,0x4(%esp)
086df763 +0x23:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086df768 +0x28:  mov    %ebx,%eax
086df76a +0x2a:  add    $0x24,%esp
086df76d +0x2d:  pop    %ebx
086df76e +0x2e:  pop    %ebp
086df76f +0x2f:  ret    $0x4
086df772 +0x32:  mov    %eax,(%esp)
086df775 +0x35:  call   08ae3750 <_Unwind_Resume>
086df77a +0x3a:  nop
086df77b +0x3b:  nop
086df77c +0x3c:  nop
086df77d +0x3d:  nop
086df77e +0x3e:  nop
086df77f +0x3f:  nop
```

## 反编译 C

```c
// message @ 0x86df740

/* (anonymous namespace)::generic_error_category::message(int) const */

int (anonymous_namespace)::generic_error_category::message(int param_1)

{
  char *pcVar1;
  int in_stack_0000000c;
  allocator local_d [5];
  
  pcVar1 = strerror(in_stack_0000000c);
                    /* try { // try from 086df763 to 086df767 has its CatchHandler @ 086df772 */
  std::string::string((string *)param_1,pcVar1,local_d);
  return param_1;
}
```
