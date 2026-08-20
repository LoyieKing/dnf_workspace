# Arad_Dispatcher_BuyItemCheck_Impl

`_GLOBAL__I__ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplC2Ev`

`global constructors keyed to ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD::Arad_Dispatcher_BuyItemCheck_Impl` | `0x0818edb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818edb4  _GLOBAL__I__ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplC2Ev
#           global constructors keyed to ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl()
# range [0x0818edb4, 0x0818eebb]
0818edb4 +0x000:  push   %ebp
0818edb5 +0x001:  mov    %esp,%ebp
0818edb7 +0x003:  sub    $0x18,%esp
0818edba +0x006:  movl   $0xffff,0x4(%esp)
0818edc2 +0x00e:  movl   $0x1,(%esp)
0818edc9 +0x015:  call   0818ed74 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0818edce +0x01a:  leave
0818edcf +0x01b:  ret
0818edd0 +0x01c:  push   %ebp
0818edd1 +0x01d:  mov    %esp,%ebp
0818edd3 +0x01f:  mov    0x8(%ebp),%eax
0818edd6 +0x022:  movl   $&_ZTVN4ARAD15Arad_DispatcherE+0x8,(%eax)
0818eddc +0x028:  mov    0x8(%ebp),%eax
0818eddf +0x02b:  mov    0xc(%ebp),%edx
0818ede2 +0x02e:  mov    %edx,0x4(%eax)
0818ede5 +0x031:  pop    %ebp
0818ede6 +0x032:  ret
0818ede7 +0x033:  nop
0818ede8 +0x034:  push   %ebp
0818ede9 +0x035:  mov    %esp,%ebp
0818edeb +0x037:  sub    $0x28,%esp
0818edee +0x03a:  movl   $0x3f84,0x4(%esp)
0818edf6 +0x042:  mov    0x8(%ebp),%eax
0818edf9 +0x045:  mov    %eax,(%esp)
0818edfc +0x048:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0818ee01 +0x04d:  xor    $0x1,%eax
0818ee04 +0x050:  test   %al,%al
0818ee06 +0x052:  je     0818ee0f <+0x5b>
0818ee08 +0x054:  mov    $0x0,%eax
0818ee0d +0x059:  jmp    0818ee39 <+0x85>
0818ee0f +0x05b:  mov    0x8(%ebp),%eax
0818ee12 +0x05e:  mov    0x8(%eax),%eax
0818ee15 +0x061:  mov    %eax,%edx
0818ee17 +0x063:  mov    0x8(%ebp),%eax
0818ee1a +0x066:  mov    0x10(%eax),%eax
0818ee1d +0x069:  lea    (%edx,%eax,1),%eax
0818ee20 +0x06c:  mov    %eax,-0xc(%ebp)
0818ee23 +0x06f:  movl   $0x3f84,0x4(%esp)
0818ee2b +0x077:  mov    0x8(%ebp),%eax
0818ee2e +0x07a:  mov    %eax,(%esp)
0818ee31 +0x07d:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0818ee36 +0x082:  mov    -0xc(%ebp),%eax
0818ee39 +0x085:  leave
0818ee3a +0x086:  ret
0818ee3b +0x087:  nop
0818ee3c +0x088:  push   %ebp
0818ee3d +0x089:  mov    %esp,%ebp
0818ee3f +0x08b:  sub    $0x18,%esp
0818ee42 +0x08e:  mov    0x8(%ebp),%eax
0818ee45 +0x091:  mov    (%eax),%eax
0818ee47 +0x093:  mov    %eax,(%esp)
0818ee4a +0x096:  call   0818ee52 <+0x9e>
0818ee4f +0x09b:  leave
0818ee50 +0x09c:  ret
0818ee51 +0x09d:  nop
0818ee52 +0x09e:  push   %ebp
0818ee53 +0x09f:  mov    %esp,%ebp
0818ee55 +0x0a1:  sub    $0x28,%esp
0818ee58 +0x0a4:  jmp    0818ee76 <+0xc2>
0818ee5a +0x0a6:  mov    0x8(%ebp),%eax
0818ee5d +0x0a9:  mov    %eax,(%esp)
0818ee60 +0x0ac:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0818ee65 +0x0b1:  add    %eax,%eax
0818ee67 +0x0b3:  mov    %eax,0x4(%esp)
0818ee6b +0x0b7:  mov    0x8(%ebp),%eax
0818ee6e +0x0ba:  mov    %eax,(%esp)
0818ee71 +0x0bd:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0818ee76 +0x0c2:  movl   $0x3f85,0x4(%esp)
0818ee7e +0x0ca:  mov    0x8(%ebp),%eax
0818ee81 +0x0cd:  mov    %eax,(%esp)
0818ee84 +0x0d0:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0818ee89 +0x0d5:  xor    $0x1,%eax
0818ee8c +0x0d8:  test   %al,%al
0818ee8e +0x0da:  jne    0818ee5a <+0xa6>
0818ee90 +0x0dc:  mov    0x8(%ebp),%eax
0818ee93 +0x0df:  mov    0x8(%eax),%eax
0818ee96 +0x0e2:  mov    %eax,%edx
0818ee98 +0x0e4:  mov    0x8(%ebp),%eax
0818ee9b +0x0e7:  mov    0xc(%eax),%eax
0818ee9e +0x0ea:  lea    (%edx,%eax,1),%eax
0818eea1 +0x0ed:  mov    %eax,-0xc(%ebp)
0818eea4 +0x0f0:  movl   $0x3f85,0x4(%esp)
0818eeac +0x0f8:  mov    0x8(%ebp),%eax
0818eeaf +0x0fb:  mov    %eax,(%esp)
0818eeb2 +0x0fe:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0818eeb7 +0x103:  mov    -0xc(%ebp),%eax
0818eeba +0x106:  leave
0818eebb +0x107:  ret
```

## 反编译 C

```c
// <global>::global @ 0x818edb4

/* ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl() */

void ARAD::Arad_Dispatcher_BuyItemCheck_Impl::_GLOBAL__I_Arad_Dispatcher_BuyItemCheck_Impl(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
