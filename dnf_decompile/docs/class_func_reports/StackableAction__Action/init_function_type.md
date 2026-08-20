# init_function_type

`_ZN15StackableAction6Action18init_function_typeEv`

`StackableAction::Action::init_function_type()`

| 类 | 地址 |
|---|---|
| `StackableAction::Action` | `0x0827f7c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827f7c8  _ZN15StackableAction6Action18init_function_typeEv
#           StackableAction::Action::init_function_type()
# range [0x0827f7c8, 0x0827fa21]
0827f7c8 +0x000:  push   %ebp
0827f7c9 +0x001:  mov    %esp,%ebp
0827f7cb +0x003:  push   %edi
0827f7cc +0x004:  push   %esi
0827f7cd +0x005:  push   %ebx
0827f7ce +0x006:  sub    $0x10c,%esp
0827f7d4 +0x00c:  mov    $&_ZN15StackableAction6Action10proc_bingoERNS_11input_paramE,%edx
0827f7d9 +0x011:  mov    $0x0,%ecx
0827f7de +0x016:  lea    -0xa0(%ebp),%ebx
0827f7e4 +0x01c:  mov    %al,0x10(%esp)
0827f7e8 +0x020:  mov    0x8(%ebp),%eax
0827f7eb +0x023:  mov    %eax,0xc(%esp)
0827f7ef +0x027:  mov    %edx,0x4(%esp)
0827f7f3 +0x02b:  mov    %ecx,0x8(%esp)
0827f7f7 +0x02f:  mov    %ebx,(%esp)
0827f7fa +0x032:  call   0827ff91 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x20a>  ; global constructors keyed to StackableAction::Action::Action()+0x20a
0827f7ff +0x037:  sub    $0x4,%esp
0827f802 +0x03a:  movl   $0x34,-0x94(%ebp)
0827f80c +0x044:  lea    -0xb0(%ebp),%edx
0827f812 +0x04a:  lea    -0xa0(%ebp),%eax
0827f818 +0x050:  mov    %eax,0x8(%esp)
0827f81c +0x054:  lea    -0x94(%ebp),%eax
0827f822 +0x05a:  mov    %eax,0x4(%esp)
0827f826 +0x05e:  mov    %edx,(%esp)
0827f829 +0x061:  call   08280007 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x280>  ; global constructors keyed to StackableAction::Action::Action()+0x280
0827f82e +0x066:  sub    $0x4,%esp
0827f831 +0x069:  lea    -0xb0(%ebp),%eax
0827f837 +0x06f:  mov    %eax,0x4(%esp)
0827f83b +0x073:  lea    -0xc4(%ebp),%eax
0827f841 +0x079:  mov    %eax,(%esp)
0827f844 +0x07c:  call   0828004e <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x2c7>  ; global constructors keyed to StackableAction::Action::Action()+0x2c7
0827f849 +0x081:  mov    0x8(%ebp),%eax
0827f84c +0x084:  lea    0x18(%eax),%ecx
0827f84f +0x087:  lea    -0xcc(%ebp),%edx
0827f855 +0x08d:  lea    -0xc4(%ebp),%eax
0827f85b +0x093:  mov    %eax,0x8(%esp)
0827f85f +0x097:  mov    %ecx,0x4(%esp)
0827f863 +0x09b:  mov    %edx,(%esp)
0827f866 +0x09e:  call   082800b6 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x32f>  ; global constructors keyed to StackableAction::Action::Action()+0x32f
0827f86b +0x0a3:  sub    $0x4,%esp
0827f86e +0x0a6:  lea    -0xc4(%ebp),%eax
0827f874 +0x0ac:  mov    %eax,(%esp)
0827f877 +0x0af:  call   0827fecc <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x145>  ; global constructors keyed to StackableAction::Action::Action()+0x145
0827f87c +0x0b4:  movl   $&_ZN15StackableAction6Action17proc_lotteryCountERNS_11input_paramE,-0xe8(%ebp)
0827f886 +0x0be:  movl   $0x0,-0xe4(%ebp)
0827f890 +0x0c8:  lea    -0x64(%ebp),%edx
0827f893 +0x0cb:  movzbl -0xe9(%ebp),%eax
0827f89a +0x0d2:  mov    %al,0x10(%esp)
0827f89e +0x0d6:  mov    0x8(%ebp),%eax
0827f8a1 +0x0d9:  mov    %eax,0xc(%esp)
0827f8a5 +0x0dd:  mov    -0xe8(%ebp),%ecx
0827f8ab +0x0e3:  mov    -0xe4(%ebp),%ebx
0827f8b1 +0x0e9:  mov    %ecx,0x4(%esp)
0827f8b5 +0x0ed:  mov    %ebx,0x8(%esp)
0827f8b9 +0x0f1:  mov    %edx,(%esp)
0827f8bc +0x0f4:  call   0827ff91 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x20a>  ; global constructors keyed to StackableAction::Action::Action()+0x20a
0827f8c1 +0x0f9:  sub    $0x4,%esp
0827f8c4 +0x0fc:  movl   $0x36,-0x58(%ebp)
0827f8cb +0x103:  lea    -0x74(%ebp),%eax
0827f8ce +0x106:  lea    -0x64(%ebp),%edx
0827f8d1 +0x109:  mov    %edx,0x8(%esp)
0827f8d5 +0x10d:  lea    -0x58(%ebp),%edx
0827f8d8 +0x110:  mov    %edx,0x4(%esp)
0827f8dc +0x114:  mov    %eax,(%esp)
0827f8df +0x117:  call   08280007 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x280>  ; global constructors keyed to StackableAction::Action::Action()+0x280
0827f8e4 +0x11c:  sub    $0x4,%esp
0827f8e7 +0x11f:  lea    -0x74(%ebp),%eax
0827f8ea +0x122:  mov    %eax,0x4(%esp)
0827f8ee +0x126:  lea    -0x88(%ebp),%eax
0827f8f4 +0x12c:  mov    %eax,(%esp)
0827f8f7 +0x12f:  call   0828004e <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x2c7>  ; global constructors keyed to StackableAction::Action::Action()+0x2c7
0827f8fc +0x134:  mov    0x8(%ebp),%eax
0827f8ff +0x137:  lea    0x18(%eax),%ecx
0827f902 +0x13a:  lea    -0x90(%ebp),%eax
0827f908 +0x140:  lea    -0x88(%ebp),%edx
0827f90e +0x146:  mov    %edx,0x8(%esp)
0827f912 +0x14a:  mov    %ecx,0x4(%esp)
0827f916 +0x14e:  mov    %eax,(%esp)
0827f919 +0x151:  call   082800b6 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x32f>  ; global constructors keyed to StackableAction::Action::Action()+0x32f
0827f91e +0x156:  jmp    0827f93e <+0x176>
0827f920 +0x158:  mov    %edx,%ebx
0827f922 +0x15a:  mov    %eax,%esi
0827f924 +0x15c:  lea    -0xc4(%ebp),%eax
0827f92a +0x162:  mov    %eax,(%esp)
0827f92d +0x165:  call   0827fecc <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x145>  ; global constructors keyed to StackableAction::Action::Action()+0x145
0827f932 +0x16a:  mov    %esi,%eax
0827f934 +0x16c:  mov    %ebx,%edx
0827f936 +0x16e:  mov    %eax,(%esp)
0827f939 +0x171:  call   08ae3750 <_Unwind_Resume>
0827f93e +0x176:  sub    $0x4,%esp
0827f941 +0x179:  lea    -0x88(%ebp),%eax
0827f947 +0x17f:  mov    %eax,(%esp)
0827f94a +0x182:  call   0827fecc <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x145>  ; global constructors keyed to StackableAction::Action::Action()+0x145
0827f94f +0x187:  mov    $&_ZN15StackableAction6Action15proc_addFatigueERNS_11input_paramE,%esi
0827f954 +0x18c:  mov    $0x0,%edi
0827f959 +0x191:  lea    -0x28(%ebp),%eax
0827f95c +0x194:  movzbl -0xd9(%ebp),%ebx
0827f963 +0x19b:  mov    %bl,0x10(%esp)
0827f967 +0x19f:  mov    0x8(%ebp),%edx
0827f96a +0x1a2:  mov    %edx,0xc(%esp)
0827f96e +0x1a6:  mov    %esi,0x4(%esp)
0827f972 +0x1aa:  mov    %edi,0x8(%esp)
0827f976 +0x1ae:  mov    %eax,(%esp)
0827f979 +0x1b1:  call   0827ff91 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x20a>  ; global constructors keyed to StackableAction::Action::Action()+0x20a
0827f97e +0x1b6:  sub    $0x4,%esp
0827f981 +0x1b9:  movl   $0x37,-0x1c(%ebp)
0827f988 +0x1c0:  lea    -0x38(%ebp),%eax
0827f98b +0x1c3:  lea    -0x28(%ebp),%edx
0827f98e +0x1c6:  mov    %edx,0x8(%esp)
0827f992 +0x1ca:  lea    -0x1c(%ebp),%edx
0827f995 +0x1cd:  mov    %edx,0x4(%esp)
0827f999 +0x1d1:  mov    %eax,(%esp)
0827f99c +0x1d4:  call   08280007 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x280>  ; global constructors keyed to StackableAction::Action::Action()+0x280
0827f9a1 +0x1d9:  sub    $0x4,%esp
0827f9a4 +0x1dc:  lea    -0x38(%ebp),%eax
0827f9a7 +0x1df:  mov    %eax,0x4(%esp)
0827f9ab +0x1e3:  lea    -0x4c(%ebp),%eax
0827f9ae +0x1e6:  mov    %eax,(%esp)
0827f9b1 +0x1e9:  call   0828004e <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x2c7>  ; global constructors keyed to StackableAction::Action::Action()+0x2c7
0827f9b6 +0x1ee:  mov    0x8(%ebp),%eax
0827f9b9 +0x1f1:  lea    0x18(%eax),%ecx
0827f9bc +0x1f4:  lea    -0x54(%ebp),%eax
0827f9bf +0x1f7:  lea    -0x4c(%ebp),%edx
0827f9c2 +0x1fa:  mov    %edx,0x8(%esp)
0827f9c6 +0x1fe:  mov    %ecx,0x4(%esp)
0827f9ca +0x202:  mov    %eax,(%esp)
0827f9cd +0x205:  call   082800b6 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x32f>  ; global constructors keyed to StackableAction::Action::Action()+0x32f
0827f9d2 +0x20a:  jmp    0827f9f2 <+0x22a>
0827f9d4 +0x20c:  mov    %edx,%ebx
0827f9d6 +0x20e:  mov    %eax,%esi
0827f9d8 +0x210:  lea    -0x88(%ebp),%eax
0827f9de +0x216:  mov    %eax,(%esp)
0827f9e1 +0x219:  call   0827fecc <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x145>  ; global constructors keyed to StackableAction::Action::Action()+0x145
0827f9e6 +0x21e:  mov    %esi,%eax
0827f9e8 +0x220:  mov    %ebx,%edx
0827f9ea +0x222:  mov    %eax,(%esp)
0827f9ed +0x225:  call   08ae3750 <_Unwind_Resume>
0827f9f2 +0x22a:  sub    $0x4,%esp
0827f9f5 +0x22d:  lea    -0x4c(%ebp),%eax
0827f9f8 +0x230:  mov    %eax,(%esp)
0827f9fb +0x233:  call   0827fecc <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x145>  ; global constructors keyed to StackableAction::Action::Action()+0x145
0827fa00 +0x238:  lea    -0xc(%ebp),%esp
0827fa03 +0x23b:  add    $0x0,%esp
0827fa06 +0x23e:  pop    %ebx
0827fa07 +0x23f:  pop    %esi
0827fa08 +0x240:  pop    %edi
0827fa09 +0x241:  pop    %ebp
0827fa0a +0x242:  ret
0827fa0b +0x243:  mov    %edx,%ebx
0827fa0d +0x245:  mov    %eax,%esi
0827fa0f +0x247:  lea    -0x4c(%ebp),%eax
0827fa12 +0x24a:  mov    %eax,(%esp)
0827fa15 +0x24d:  call   0827fecc <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x145>  ; global constructors keyed to StackableAction::Action::Action()+0x145
0827fa1a +0x252:  mov    %esi,%eax
0827fa1c +0x254:  mov    %ebx,%edx
0827fa1e +0x256:  mov    %eax,(%esp)
0827fa21 +0x259:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// StackableAction::Action::init_function_type @ 0x827f7c8

/* StackableAction::Action::init_function_type() */

void __regparm1 StackableAction::Action::init_function_type(void)

{
  undefined4 in_stack_00000004;
  undefined1 local_ed;
  undefined1 local_dd;
  pair local_d0 [8];
  pair<int_const,boost::function<int(StackableAction::input_param&)>> local_c8 [20];
  Type local_b4 [16];
  undefined1 local_a4 [12];
  undefined4 local_98;
  pair local_94 [8];
  pair<int_const,boost::function<int(StackableAction::input_param&)>> local_8c [20];
  Type local_78 [16];
  undefined1 local_68 [12];
  undefined4 local_5c;
  pair local_58 [8];
  pair<int_const,boost::function<int(StackableAction::input_param&)>> local_50 [20];
  Type local_3c [16];
  undefined1 local_2c [12];
  undefined4 local_20 [4];
  
  boost::
  bind<int,StackableAction::Action,StackableAction::input_param&,StackableAction::Action*,boost::arg<1>>
            (local_a4,proc_bingo,0);
  local_98 = 0x34;
  std::
  make_pair<StackableAction::Type,boost::_bi::bind_t<int,boost::_mfi::mf1<int,StackableAction::Action,StackableAction::input_param&>,boost::_bi::list2<boost::_bi::value<StackableAction::Action*>,boost::arg<1>>>>
            (local_b4,(bind_t *)&local_98);
  std::pair<int_const,boost::function<int(StackableAction::input_param&)>>::
  pair<StackableAction::Type,boost::_bi::bind_t<int,boost::_mfi::mf1<int,StackableAction::Action,StackableAction::input_param&>,boost::_bi::list2<boost::_bi::value<StackableAction::Action*>,boost::arg<1>>>>
            (local_c8,local_b4);
                    /* try { // try from 0827f866 to 0827f86a has its CatchHandler @ 0827f920 */
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::insert(local_d0);
  std::pair<int_const,boost::function<int(StackableAction::input_param&)>>::~pair(local_c8);
  boost::
  bind<int,StackableAction::Action,StackableAction::input_param&,StackableAction::Action*,boost::arg<1>>
            (local_68,proc_lotteryCount,0,in_stack_00000004,local_ed);
  local_5c = 0x36;
  std::
  make_pair<StackableAction::Type,boost::_bi::bind_t<int,boost::_mfi::mf1<int,StackableAction::Action,StackableAction::input_param&>,boost::_bi::list2<boost::_bi::value<StackableAction::Action*>,boost::arg<1>>>>
            (local_78,(bind_t *)&local_5c);
  std::pair<int_const,boost::function<int(StackableAction::input_param&)>>::
  pair<StackableAction::Type,boost::_bi::bind_t<int,boost::_mfi::mf1<int,StackableAction::Action,StackableAction::input_param&>,boost::_bi::list2<boost::_bi::value<StackableAction::Action*>,boost::arg<1>>>>
            (local_8c,local_78);
                    /* try { // try from 0827f919 to 0827f91d has its CatchHandler @ 0827f9d4 */
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::insert(local_94);
  std::pair<int_const,boost::function<int(StackableAction::input_param&)>>::~pair(local_8c);
  boost::
  bind<int,StackableAction::Action,StackableAction::input_param&,StackableAction::Action*,boost::arg<1>>
            (local_2c,proc_addFatigue,0,in_stack_00000004,local_dd);
  local_20[0] = 0x37;
  std::
  make_pair<StackableAction::Type,boost::_bi::bind_t<int,boost::_mfi::mf1<int,StackableAction::Action,StackableAction::input_param&>,boost::_bi::list2<boost::_bi::value<StackableAction::Action*>,boost::arg<1>>>>
            (local_3c,(bind_t *)local_20);
  std::pair<int_const,boost::function<int(StackableAction::input_param&)>>::
  pair<StackableAction::Type,boost::_bi::bind_t<int,boost::_mfi::mf1<int,StackableAction::Action,StackableAction::input_param&>,boost::_bi::list2<boost::_bi::value<StackableAction::Action*>,boost::arg<1>>>>
            (local_50,local_3c);
                    /* try { // try from 0827f9cd to 0827f9d1 has its CatchHandler @ 0827fa0b */
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::insert(local_58);
  std::pair<int_const,boost::function<int(StackableAction::input_param&)>>::~pair(local_50);
  return;
}
```
