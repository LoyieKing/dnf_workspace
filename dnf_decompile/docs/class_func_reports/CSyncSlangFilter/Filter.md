# Filter

`_ZN16CSyncSlangFilter6FilterERKSs`

`CSyncSlangFilter::Filter(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `CSyncSlangFilter` | `0x0862e46c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862e46c  _ZN16CSyncSlangFilter6FilterERKSs
#           CSyncSlangFilter::Filter(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x0862e46c, 0x0862e621]
0862e46c +0x000:  push   %ebp
0862e46d +0x001:  mov    %esp,%ebp
0862e46f +0x003:  push   %edi
0862e470 +0x004:  push   %esi
0862e471 +0x005:  push   %ebx
0862e472 +0x006:  sub    $0x3c,%esp
0862e475 +0x009:  mov    0x8(%ebp),%ebx
0862e478 +0x00c:  mov    %ebx,%eax
0862e47a +0x00e:  mov    0x10(%ebp),%edx
0862e47d +0x011:  mov    %edx,0x4(%esp)
0862e481 +0x015:  mov    %eax,(%esp)
0862e484 +0x018:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0862e489 +0x01d:  movl   $0x0,-0x20(%ebp)
0862e490 +0x024:  jmp    0862e5db <+0x16f>
0862e495 +0x029:  mov    0xc(%ebp),%eax
0862e498 +0x02c:  add    $0x8,%eax
0862e49b +0x02f:  mov    %eax,0x4(%esp)
0862e49f +0x033:  lea    -0x30(%ebp),%eax
0862e4a2 +0x036:  mov    %eax,(%esp)
0862e4a5 +0x039:  call   082b2d3c <_GLOBAL__I__ZN4CLog5this_E+0xf163>  ; global constructors keyed to CLog::this_+0xf163
0862e4aa +0x03e:  mov    0x10(%ebp),%eax
0862e4ad +0x041:  mov    %eax,(%esp)
0862e4b0 +0x044:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0862e4b5 +0x049:  mov    %eax,%edx
0862e4b7 +0x04b:  sub    -0x20(%ebp),%edx
0862e4ba +0x04e:  lea    -0x2c(%ebp),%eax
0862e4bd +0x051:  mov    %edx,0xc(%esp)
0862e4c1 +0x055:  mov    -0x20(%ebp),%edx
0862e4c4 +0x058:  mov    %edx,0x8(%esp)
0862e4c8 +0x05c:  mov    0x10(%ebp),%edx
0862e4cb +0x05f:  mov    %edx,0x4(%esp)
0862e4cf +0x063:  mov    %eax,(%esp)
0862e4d2 +0x066:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
0862e4d7 +0x06b:  sub    $0x4,%esp
0862e4da +0x06e:  lea    -0x2c(%ebp),%eax
0862e4dd +0x071:  mov    %eax,0x4(%esp)
0862e4e1 +0x075:  mov    0xc(%ebp),%eax
0862e4e4 +0x078:  mov    %eax,(%esp)
0862e4e7 +0x07b:  call   0862e3be <_ZNK16CSyncSlangFilter5matchERKSs>  ; CSyncSlangFilter::match(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
0862e4ec +0x080:  mov    %eax,-0x1c(%ebp)
0862e4ef +0x083:  lea    -0x2c(%ebp),%eax
0862e4f2 +0x086:  mov    %eax,(%esp)
0862e4f5 +0x089:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862e4fa +0x08e:  jmp    0862e514 <+0xa8>
0862e4fc +0x090:  mov    %edx,%esi
0862e4fe +0x092:  mov    %eax,%edi
0862e500 +0x094:  lea    -0x2c(%ebp),%eax
0862e503 +0x097:  mov    %eax,(%esp)
0862e506 +0x09a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862e50b +0x09f:  mov    %edi,%eax
0862e50d +0x0a1:  mov    %esi,%edx
0862e50f +0x0a3:  jmp    0862e5bb <+0x14f>
0862e514 +0x0a8:  cmpl   $0x0,-0x1c(%ebp)
0862e518 +0x0ac:  je     0862e5b5 <+0x149>
0862e51e +0x0b2:  lea    -0x21(%ebp),%eax
0862e521 +0x0b5:  mov    %eax,(%esp)
0862e524 +0x0b8:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0862e529 +0x0bd:  lea    -0x21(%ebp),%eax
0862e52c +0x0c0:  mov    %eax,0xc(%esp)
0862e530 +0x0c4:  movl   $0x2a,0x8(%esp)
0862e538 +0x0cc:  mov    -0x1c(%ebp),%eax
0862e53b +0x0cf:  mov    %eax,0x4(%esp)
0862e53f +0x0d3:  lea    -0x28(%ebp),%eax
0862e542 +0x0d6:  mov    %eax,(%esp)
0862e545 +0x0d9:  call   08707ac0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x16d0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x16d0
0862e54a +0x0de:  mov    %ebx,%eax
0862e54c +0x0e0:  lea    -0x28(%ebp),%edx
0862e54f +0x0e3:  mov    %edx,0xc(%esp)
0862e553 +0x0e7:  mov    -0x1c(%ebp),%edx
0862e556 +0x0ea:  mov    %edx,0x8(%esp)
0862e55a +0x0ee:  mov    -0x20(%ebp),%edx
0862e55d +0x0f1:  mov    %edx,0x4(%esp)
0862e561 +0x0f5:  mov    %eax,(%esp)
0862e564 +0x0f8:  call   08709420 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x3030>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x3030
0862e569 +0x0fd:  jmp    0862e580 <+0x114>
0862e56b +0x0ff:  mov    %edx,%esi
0862e56d +0x101:  mov    %eax,%edi
0862e56f +0x103:  lea    -0x28(%ebp),%eax
0862e572 +0x106:  mov    %eax,(%esp)
0862e575 +0x109:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862e57a +0x10e:  mov    %edi,%eax
0862e57c +0x110:  mov    %esi,%edx
0862e57e +0x112:  jmp    0862e58d <+0x121>
0862e580 +0x114:  lea    -0x28(%ebp),%eax
0862e583 +0x117:  mov    %eax,(%esp)
0862e586 +0x11a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862e58b +0x11f:  jmp    0862e5a2 <+0x136>
0862e58d +0x121:  mov    %edx,%esi
0862e58f +0x123:  mov    %eax,%edi
0862e591 +0x125:  lea    -0x21(%ebp),%eax
0862e594 +0x128:  mov    %eax,(%esp)
0862e597 +0x12b:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0862e59c +0x130:  mov    %edi,%eax
0862e59e +0x132:  mov    %esi,%edx
0862e5a0 +0x134:  jmp    0862e5bb <+0x14f>
0862e5a2 +0x136:  lea    -0x21(%ebp),%eax
0862e5a5 +0x139:  mov    %eax,(%esp)
0862e5a8 +0x13c:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0862e5ad +0x141:  mov    -0x1c(%ebp),%eax
0862e5b0 +0x144:  add    %eax,-0x20(%ebp)
0862e5b3 +0x147:  jmp    0862e5d0 <+0x164>
0862e5b5 +0x149:  addl   $0x1,-0x20(%ebp)
0862e5b9 +0x14d:  jmp    0862e5d0 <+0x164>
0862e5bb +0x14f:  mov    %edx,%esi
0862e5bd +0x151:  mov    %eax,%edi
0862e5bf +0x153:  lea    -0x30(%ebp),%eax
0862e5c2 +0x156:  mov    %eax,(%esp)
0862e5c5 +0x159:  call   082b2d58 <_GLOBAL__I__ZN4CLog5this_E+0xf17f>  ; global constructors keyed to CLog::this_+0xf17f
0862e5ca +0x15e:  mov    %edi,%eax
0862e5cc +0x160:  mov    %esi,%edx
0862e5ce +0x162:  jmp    0862e5f6 <+0x18a>
0862e5d0 +0x164:  lea    -0x30(%ebp),%eax
0862e5d3 +0x167:  mov    %eax,(%esp)
0862e5d6 +0x16a:  call   082b2d58 <_GLOBAL__I__ZN4CLog5this_E+0xf17f>  ; global constructors keyed to CLog::this_+0xf17f
0862e5db +0x16f:  mov    0x10(%ebp),%eax
0862e5de +0x172:  mov    %eax,(%esp)
0862e5e1 +0x175:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0862e5e6 +0x17a:  cmp    -0x20(%ebp),%eax
0862e5e9 +0x17d:  seta   %al
0862e5ec +0x180:  test   %al,%al
0862e5ee +0x182:  jne    0862e495 <+0x29>
0862e5f4 +0x188:  jmp    0862e610 <+0x1a4>
0862e5f6 +0x18a:  mov    %edx,%esi
0862e5f8 +0x18c:  mov    %eax,%edi
0862e5fa +0x18e:  mov    %ebx,%eax
0862e5fc +0x190:  mov    %eax,(%esp)
0862e5ff +0x193:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862e604 +0x198:  mov    %edi,%eax
0862e606 +0x19a:  mov    %esi,%edx
0862e608 +0x19c:  mov    %eax,(%esp)
0862e60b +0x19f:  call   08ae3750 <_Unwind_Resume>
0862e610 +0x1a4:  mov    %ebx,%eax
0862e612 +0x1a6:  mov    %ebx,%eax
0862e614 +0x1a8:  lea    -0xc(%ebp),%esp
0862e617 +0x1ab:  add    $0x0,%esp
0862e61a +0x1ae:  pop    %ebx
0862e61b +0x1af:  pop    %esi
0862e61c +0x1b0:  pop    %edi
0862e61d +0x1b1:  pop    %ebp
0862e61e +0x1b2:  ret    $0x4
0862e621 +0x1b5:  nop
```

## 反编译 C

```c
// CSyncSlangFilter::Filter @ 0x862e46c

/* CSyncSlangFilter::Filter(std::string const&) */

string * CSyncSlangFilter::Filter(string *param_1)

{
  uint uVar1;
  CSyncSlangFilter *in_stack_00000008;
  string *in_stack_0000000c;
  readGuard<rwLock> local_34 [4];
  string local_30;
  string local_2c [7];
  allocator<char> local_25;
  uint local_24;
  uint local_20;
  
  std::string::string((string *)param_1,in_stack_0000000c);
  local_24 = 0;
  while( true ) {
                    /* try { // try from 0862e5e1 to 0862e5e5 has its CatchHandler @ 0862e5f6 */
    uVar1 = std::string::size(in_stack_0000000c);
    if (uVar1 <= local_24) break;
    readGuard<rwLock>::readGuard(local_34,(rwLock *)(in_stack_00000008 + 8));
                    /* try { // try from 0862e4b0 to 0862e4d6 has its CatchHandler @ 0862e5bb */
    std::string::size(in_stack_0000000c);
    std::string::substr((uint)&local_30,(uint)in_stack_0000000c);
                    /* try { // try from 0862e4e7 to 0862e4eb has its CatchHandler @ 0862e4fc */
    local_20 = match(in_stack_00000008,&local_30);
                    /* try { // try from 0862e4f5 to 0862e4f9 has its CatchHandler @ 0862e5bb */
    std::string::~string((string *)&local_30);
    if (local_20 == 0) {
      local_24 = local_24 + 1;
    }
    else {
      std::allocator<char>::allocator();
                    /* try { // try from 0862e545 to 0862e549 has its CatchHandler @ 0862e58d */
      std::string::string(local_2c,local_20,'*',(allocator *)&local_25);
                    /* try { // try from 0862e564 to 0862e568 has its CatchHandler @ 0862e56b */
      std::string::replace((string *)param_1,local_24,local_20,local_2c);
                    /* try { // try from 0862e586 to 0862e58a has its CatchHandler @ 0862e58d */
      std::string::~string(local_2c);
      std::allocator<char>::~allocator(&local_25);
      local_24 = local_24 + local_20;
    }
    readGuard<rwLock>::~readGuard(local_34);
  }
  return param_1;
}
```
