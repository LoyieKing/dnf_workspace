# inet_n2a

`_ZN4ARAD8inet_n2aE7in_addr`

`ARAD::inet_n2a(in_addr)`

| 类 | 地址 |
|---|---|
| `ARAD` | `0x08197a4d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08197a4d  _ZN4ARAD8inet_n2aE7in_addr
#           ARAD::inet_n2a(in_addr)
# range [0x08197a4d, 0x08197b6e]
08197a4d +0x000:  push   %ebp
08197a4e +0x001:  mov    %esp,%ebp
08197a50 +0x003:  push   %esi
08197a51 +0x004:  push   %ebx
08197a52 +0x005:  sub    $0x40,%esp
08197a55 +0x008:  mov    0x8(%ebp),%ebx
08197a58 +0x00b:  movl   $0x10,0x8(%esp)
08197a60 +0x013:  movl   $0x0,0x4(%esp)
08197a68 +0x01b:  lea    -0x1c(%ebp),%eax
08197a6b +0x01e:  mov    %eax,(%esp)
08197a6e +0x021:  call   0807dcc0 <_init+0x5b8>
08197a73 +0x026:  mov    0xc(%ebp),%eax
08197a76 +0x029:  mov    %eax,-0x18(%ebp)
08197a79 +0x02c:  movl   $0x0,-0x2c(%ebp)
08197a80 +0x033:  movl   $0x0,-0x28(%ebp)
08197a87 +0x03a:  movl   $0x0,-0x24(%ebp)
08197a8e +0x041:  movl   $0x0,-0x20(%ebp)
08197a95 +0x048:  mov    -0x18(%ebp),%eax
08197a98 +0x04b:  mov    %eax,(%esp)
08197a9b +0x04e:  call   0807ddc0 <_init+0x6b8>
08197aa0 +0x053:  test   %eax,%eax
08197aa2 +0x055:  sete   %al
08197aa5 +0x058:  test   %al,%al
08197aa7 +0x05a:  je     08197af7 <+0xaa>
08197aa9 +0x05c:  mov    %ebx,%esi
08197aab +0x05e:  lea    -0xa(%ebp),%eax
08197aae +0x061:  mov    %eax,(%esp)
08197ab1 +0x064:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08197ab6 +0x069:  lea    -0xa(%ebp),%eax
08197ab9 +0x06c:  mov    %eax,0x8(%esp)
08197abd +0x070:  movl   $"",0x4(%esp)
08197ac5 +0x078:  mov    %esi,(%esp)
08197ac8 +0x07b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08197acd +0x080:  jmp    08197aea <+0x9d>
08197acf +0x082:  mov    %edx,%ebx
08197ad1 +0x084:  mov    %eax,%esi
08197ad3 +0x086:  lea    -0xa(%ebp),%eax
08197ad6 +0x089:  mov    %eax,(%esp)
08197ad9 +0x08c:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08197ade +0x091:  mov    %esi,%eax
08197ae0 +0x093:  mov    %ebx,%edx
08197ae2 +0x095:  mov    %eax,(%esp)
08197ae5 +0x098:  call   08ae3750 <_Unwind_Resume>
08197aea +0x09d:  lea    -0xa(%ebp),%eax
08197aed +0x0a0:  mov    %eax,(%esp)
08197af0 +0x0a3:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08197af5 +0x0a8:  jmp    08197b64 <+0x117>
08197af7 +0x0aa:  mov    -0x18(%ebp),%eax
08197afa +0x0ad:  mov    %eax,(%esp)
08197afd +0x0b0:  call   0807ddc0 <_init+0x6b8>
08197b02 +0x0b5:  movl   $0x10,0x8(%esp)
08197b0a +0x0bd:  mov    %eax,0x4(%esp)
08197b0e +0x0c1:  lea    -0x2c(%ebp),%eax
08197b11 +0x0c4:  mov    %eax,(%esp)
08197b14 +0x0c7:  call   0807d8d0 <_init+0x1c8>
08197b19 +0x0cc:  mov    %ebx,%esi
08197b1b +0x0ce:  lea    -0x9(%ebp),%eax
08197b1e +0x0d1:  mov    %eax,(%esp)
08197b21 +0x0d4:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08197b26 +0x0d9:  lea    -0x9(%ebp),%eax
08197b29 +0x0dc:  mov    %eax,0x8(%esp)
08197b2d +0x0e0:  lea    -0x2c(%ebp),%eax
08197b30 +0x0e3:  mov    %eax,0x4(%esp)
08197b34 +0x0e7:  mov    %esi,(%esp)
08197b37 +0x0ea:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08197b3c +0x0ef:  jmp    08197b59 <+0x10c>
08197b3e +0x0f1:  mov    %edx,%ebx
08197b40 +0x0f3:  mov    %eax,%esi
08197b42 +0x0f5:  lea    -0x9(%ebp),%eax
08197b45 +0x0f8:  mov    %eax,(%esp)
08197b48 +0x0fb:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08197b4d +0x100:  mov    %esi,%eax
08197b4f +0x102:  mov    %ebx,%edx
08197b51 +0x104:  mov    %eax,(%esp)
08197b54 +0x107:  call   08ae3750 <_Unwind_Resume>
08197b59 +0x10c:  lea    -0x9(%ebp),%eax
08197b5c +0x10f:  mov    %eax,(%esp)
08197b5f +0x112:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08197b64 +0x117:  mov    %ebx,%eax
08197b66 +0x119:  mov    %ebx,%eax
08197b68 +0x11b:  add    $0x40,%esp
08197b6b +0x11e:  pop    %ebx
08197b6c +0x11f:  pop    %esi
08197b6d +0x120:  pop    %ebp
08197b6e +0x121:  ret    $0x4
```

## 反编译 C

```c
// ARAD::inet_n2a @ 0x8197a4d

/* ARAD::inet_n2a(in_addr) */

ARAD * __thiscall ARAD::inet_n2a(ARAD *this,in_addr param_1)

{
  char *pcVar1;
  char local_30 [20];
  in_addr local_1c;
  allocator<char> local_e;
  allocator<char> local_d;
  
  memset(local_30 + 0x10,0,0x10);
  local_1c.s_addr = param_1.s_addr;
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  local_30[8] = '\0';
  local_30[9] = '\0';
  local_30[10] = '\0';
  local_30[0xb] = '\0';
  local_30[0xc] = '\0';
  local_30[0xd] = '\0';
  local_30[0xe] = '\0';
  local_30[0xf] = '\0';
  pcVar1 = inet_ntoa(param_1);
  if (pcVar1 == (char *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08197ac8 to 08197acc has its CatchHandler @ 08197acf */
    std::string::string((string *)this,"",(allocator *)&local_e);
    std::allocator<char>::~allocator(&local_e);
  }
  else {
    pcVar1 = inet_ntoa(local_1c);
    strncpy(local_30,pcVar1,0x10);
    std::allocator<char>::allocator();
                    /* try { // try from 08197b37 to 08197b3b has its CatchHandler @ 08197b3e */
    std::string::string((string *)this,local_30,(allocator *)&local_d);
    std::allocator<char>::~allocator(&local_d);
  }
  return this;
}
```
