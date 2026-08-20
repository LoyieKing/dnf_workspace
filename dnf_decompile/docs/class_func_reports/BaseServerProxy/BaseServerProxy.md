# BaseServerProxy

`_ZN15BaseServerProxyC1EPciS0_`

`BaseServerProxy::BaseServerProxy(char*, int, char*)`

| 类 | 地址 |
|---|---|
| `BaseServerProxy` | `0x082fd350` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fd350  _ZN15BaseServerProxyC1EPciS0_
#           BaseServerProxy::BaseServerProxy(char*, int, char*)
# range [0x082fd350, 0x082fd45b]
082fd350 +0x000:  push   %ebp
082fd351 +0x001:  mov    %esp,%ebp
082fd353 +0x003:  push   %esi
082fd354 +0x004:  push   %ebx
082fd355 +0x005:  sub    $0x20,%esp
082fd358 +0x008:  mov    0x8(%ebp),%eax
082fd35b +0x00b:  movl   $&_ZTV15BaseServerProxy+0x8,(%eax)
082fd361 +0x011:  mov    0x8(%ebp),%eax
082fd364 +0x014:  add    $0x4,%eax
082fd367 +0x017:  mov    %eax,(%esp)
082fd36a +0x01a:  call   082ab4f0 <_GLOBAL__I__ZN4CLog5this_E+0x7917>  ; global constructors keyed to CLog::this_+0x7917
082fd36f +0x01f:  lea    -0xa(%ebp),%eax
082fd372 +0x022:  mov    %eax,(%esp)
082fd375 +0x025:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
082fd37a +0x02a:  mov    0x8(%ebp),%eax
082fd37d +0x02d:  lea    &_ZL14gUnicodeBuffer+0x268d4(%eax),%edx
082fd383 +0x033:  lea    -0xa(%ebp),%eax
082fd386 +0x036:  mov    %eax,0x8(%esp)
082fd38a +0x03a:  mov    0xc(%ebp),%eax
082fd38d +0x03d:  mov    %eax,0x4(%esp)
082fd391 +0x041:  mov    %edx,(%esp)
082fd394 +0x044:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
082fd399 +0x049:  jmp    082fd3b3 <+0x63>
082fd39b +0x04b:  mov    %edx,%ebx
082fd39d +0x04d:  mov    %eax,%esi
082fd39f +0x04f:  lea    -0xa(%ebp),%eax
082fd3a2 +0x052:  mov    %eax,(%esp)
082fd3a5 +0x055:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
082fd3aa +0x05a:  mov    %esi,%eax
082fd3ac +0x05c:  mov    %ebx,%edx
082fd3ae +0x05e:  jmp    082fd442 <+0xf2>
082fd3b3 +0x063:  lea    -0xa(%ebp),%eax
082fd3b6 +0x066:  mov    %eax,(%esp)
082fd3b9 +0x069:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
082fd3be +0x06e:  mov    0x8(%ebp),%eax
082fd3c1 +0x071:  mov    0x10(%ebp),%edx
082fd3c4 +0x074:  mov    %edx,&_ZL14gUnicodeBuffer+0x268d8(%eax)
082fd3ca +0x07a:  lea    -0x9(%ebp),%eax
082fd3cd +0x07d:  mov    %eax,(%esp)
082fd3d0 +0x080:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
082fd3d5 +0x085:  mov    0x8(%ebp),%eax
082fd3d8 +0x088:  lea    &_ZL14gUnicodeBuffer+0x268dc(%eax),%edx
082fd3de +0x08e:  lea    -0x9(%ebp),%eax
082fd3e1 +0x091:  mov    %eax,0x8(%esp)
082fd3e5 +0x095:  mov    0x14(%ebp),%eax
082fd3e8 +0x098:  mov    %eax,0x4(%esp)
082fd3ec +0x09c:  mov    %edx,(%esp)
082fd3ef +0x09f:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
082fd3f4 +0x0a4:  jmp    082fd423 <+0xd3>
082fd3f6 +0x0a6:  mov    %edx,%ebx
082fd3f8 +0x0a8:  mov    %eax,%esi
082fd3fa +0x0aa:  lea    -0x9(%ebp),%eax
082fd3fd +0x0ad:  mov    %eax,(%esp)
082fd400 +0x0b0:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
082fd405 +0x0b5:  mov    %esi,%eax
082fd407 +0x0b7:  mov    %ebx,%edx
082fd409 +0x0b9:  mov    %edx,%ebx
082fd40b +0x0bb:  mov    %eax,%esi
082fd40d +0x0bd:  mov    0x8(%ebp),%eax
082fd410 +0x0c0:  add    $&_ZL14gUnicodeBuffer+0x268d4,%eax
082fd415 +0x0c5:  mov    %eax,(%esp)
082fd418 +0x0c8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fd41d +0x0cd:  mov    %esi,%eax
082fd41f +0x0cf:  mov    %ebx,%edx
082fd421 +0x0d1:  jmp    082fd442 <+0xf2>
082fd423 +0x0d3:  lea    -0x9(%ebp),%eax
082fd426 +0x0d6:  mov    %eax,(%esp)
082fd429 +0x0d9:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
082fd42e +0x0de:  mov    0x8(%ebp),%eax
082fd431 +0x0e1:  movl   $0x0,&_ZL14gUnicodeBuffer+0x268d0(%eax)
082fd43b +0x0eb:  add    $0x20,%esp
082fd43e +0x0ee:  pop    %ebx
082fd43f +0x0ef:  pop    %esi
082fd440 +0x0f0:  pop    %ebp
082fd441 +0x0f1:  ret
082fd442 +0x0f2:  mov    %edx,%ebx
082fd444 +0x0f4:  mov    %eax,%esi
082fd446 +0x0f6:  mov    0x8(%ebp),%eax
082fd449 +0x0f9:  add    $0x4,%eax
082fd44c +0x0fc:  mov    %eax,(%esp)
082fd44f +0x0ff:  call   082ab58e <_GLOBAL__I__ZN4CLog5this_E+0x79b5>  ; global constructors keyed to CLog::this_+0x79b5
082fd454 +0x104:  mov    %esi,%eax
082fd456 +0x106:  mov    %ebx,%edx
082fd458 +0x108:  mov    %eax,(%esp)
082fd45b +0x10b:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// BaseServerProxy::BaseServerProxy @ 0x82fd350

/* BaseServerProxy::BaseServerProxy(char*, int, char*) */

void __thiscall
BaseServerProxy::BaseServerProxy(BaseServerProxy *this,char *param_1,int param_2,char *param_3)

{
  allocator<char> local_e;
  allocator<char> local_d;
  
  *(undefined ***)this = &PTR_OnDisconnect_08c21a90;
  CNetwork<100000,100000>::CNetwork((CNetwork<100000,100000> *)(this + 4));
  std::allocator<char>::allocator();
                    /* try { // try from 082fd394 to 082fd398 has its CatchHandler @ 082fd39b */
  std::string::string((string *)(this + 0x30e00),param_1,(allocator *)&local_e);
  std::allocator<char>::~allocator(&local_e);
  *(int *)(this + 0x30e04) = param_2;
  std::allocator<char>::allocator();
                    /* try { // try from 082fd3ef to 082fd3f3 has its CatchHandler @ 082fd3f6 */
  std::string::string((string *)(this + 0x30e08),param_3,(allocator *)&local_d);
  std::allocator<char>::~allocator(&local_d);
  *(undefined4 *)(this + 0x30dfc) = 0;
  return;
}
```
