# CompiledDNFLex

`_ZN14CompiledDNFLexC1Ev`

`CompiledDNFLex::CompiledDNFLex()`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad07c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad07c0  _ZN14CompiledDNFLexC1Ev
#           CompiledDNFLex::CompiledDNFLex()
# range [0x08ad07c0, 0x08ad09f9]
08ad07c0 +0x000:  push   %ebp
08ad07c1 +0x001:  mov    %esp,%ebp
08ad07c3 +0x003:  push   %edi
08ad07c4 +0x004:  push   %esi
08ad07c5 +0x005:  push   %ebx
08ad07c6 +0x006:  sub    $0x6c,%esp
08ad07c9 +0x009:  mov    0x8(%ebp),%ebx
08ad07cc +0x00c:  lea    -0x40(%ebp),%esi
08ad07cf +0x00f:  mov    %esi,%eax
08ad07d1 +0x011:  movl   $0x0,-0x40(%ebp)
08ad07d8 +0x018:  movl   $&_ZTV14CompiledDNFLex+0x8,(%ebx)
08ad07de +0x01e:  movl   $0x0,0x4(%ebx)
08ad07e5 +0x025:  movl   $0x0,0x8(%ebx)
08ad07ec +0x02c:  movb   $0x0,0xc(%ebx)
08ad07f0 +0x030:  movl   $0x0,0x10(%ebx)
08ad07f7 +0x037:  movl   $0x0,0x14(%ebx)
08ad07fe +0x03e:  movl   $0x0,-0x3c(%ebp)
08ad0805 +0x045:  movl   $0x0,-0x38(%ebp)
08ad080c +0x04c:  movl   $0x0,-0x34(%ebp)
08ad0813 +0x053:  movl   $0x0,-0x30(%ebp)
08ad081a +0x05a:  movl   $0x0,-0x2c(%ebp)
08ad0821 +0x061:  movl   $0x0,-0x28(%ebp)
08ad0828 +0x068:  movl   $0x0,-0x24(%ebp)
08ad082f +0x06f:  movl   $0x0,-0x20(%ebp)
08ad0836 +0x076:  movl   $0x0,-0x1c(%ebp)
08ad083d +0x07d:  call   08ad04c0 <_ZNSt11_Deque_baseIN14CompiledDNFLex8stream_tESaIS1_EE17_M_initialize_mapEj.clone.1>  ; std::_Deque_base<CompiledDNFLex::stream_t, std::allocator<CompiledDNFLex::stream_t> >::_M_initialize_map(unsigned int) [clone .clone.1]
08ad0842 +0x082:  lea    0x2018(%ebx),%eax
08ad0848 +0x088:  movl   $0x0,0x2018(%ebx)
08ad0852 +0x092:  movl   $0x0,0x201c(%ebx)
08ad085c +0x09c:  movl   $0x0,0x2020(%ebx)
08ad0866 +0x0a6:  movl   $0x0,0x2024(%ebx)
08ad0870 +0x0b0:  movl   $0x0,0x2028(%ebx)
08ad087a +0x0ba:  movl   $0x0,0x202c(%ebx)
08ad0884 +0x0c4:  movl   $0x0,0x2030(%ebx)
08ad088e +0x0ce:  movl   $0x0,0x2034(%ebx)
08ad0898 +0x0d8:  movl   $0x0,0x2038(%ebx)
08ad08a2 +0x0e2:  movl   $0x0,0x203c(%ebx)
08ad08ac +0x0ec:  mov    %eax,-0x4c(%ebp)
08ad08af +0x0ef:  call   08ad04c0 <_ZNSt11_Deque_baseIN14CompiledDNFLex8stream_tESaIS1_EE17_M_initialize_mapEj.clone.1>  ; std::_Deque_base<CompiledDNFLex::stream_t, std::allocator<CompiledDNFLex::stream_t> >::_M_initialize_map(unsigned int) [clone .clone.1]
08ad08b4 +0x0f4:  mov    -0x40(%ebp),%edi
08ad08b7 +0x0f7:  test   %edi,%edi
08ad08b9 +0x0f9:  je     08ad097f <+0x1bf>
08ad08bf +0x0ff:  mov    0x2020(%ebx),%eax
08ad08c5 +0x105:  mov    0x2024(%ebx),%edx
08ad08cb +0x10b:  mov    0x2028(%ebx),%ecx
08ad08d1 +0x111:  mov    0x202c(%ebx),%edi
08ad08d7 +0x117:  mov    %eax,-0x5c(%ebp)
08ad08da +0x11a:  mov    -0x38(%ebp),%eax
08ad08dd +0x11d:  mov    %eax,0x2020(%ebx)
08ad08e3 +0x123:  mov    -0x34(%ebp),%eax
08ad08e6 +0x126:  mov    %eax,0x2024(%ebx)
08ad08ec +0x12c:  mov    -0x30(%ebp),%eax
08ad08ef +0x12f:  mov    %eax,0x2028(%ebx)
08ad08f5 +0x135:  mov    -0x2c(%ebp),%eax
08ad08f8 +0x138:  mov    %eax,0x202c(%ebx)
08ad08fe +0x13e:  mov    -0x5c(%ebp),%eax
08ad0901 +0x141:  mov    %edx,-0x34(%ebp)
08ad0904 +0x144:  mov    0x2034(%ebx),%edx
08ad090a +0x14a:  mov    %edi,-0x2c(%ebp)
08ad090d +0x14d:  mov    0x203c(%ebx),%edi
08ad0913 +0x153:  mov    %ecx,-0x30(%ebp)
08ad0916 +0x156:  mov    0x2038(%ebx),%ecx
08ad091c +0x15c:  mov    %eax,-0x38(%ebp)
08ad091f +0x15f:  mov    0x2030(%ebx),%eax
08ad0925 +0x165:  mov    %eax,-0x5c(%ebp)
08ad0928 +0x168:  mov    -0x28(%ebp),%eax
08ad092b +0x16b:  mov    %eax,0x2030(%ebx)
08ad0931 +0x171:  mov    -0x24(%ebp),%eax
08ad0934 +0x174:  mov    %eax,0x2034(%ebx)
08ad093a +0x17a:  mov    -0x20(%ebp),%eax
08ad093d +0x17d:  mov    %eax,0x2038(%ebx)
08ad0943 +0x183:  mov    -0x1c(%ebp),%eax
08ad0946 +0x186:  mov    %eax,0x203c(%ebx)
08ad094c +0x18c:  mov    %edi,-0x1c(%ebp)
08ad094f +0x18f:  mov    %ecx,-0x20(%ebp)
08ad0952 +0x192:  mov    %edx,-0x24(%ebp)
08ad0955 +0x195:  mov    -0x5c(%ebp),%eax
08ad0958 +0x198:  mov    -0x40(%ebp),%edx
08ad095b +0x19b:  mov    %eax,-0x28(%ebp)
08ad095e +0x19e:  mov    0x2018(%ebx),%eax
08ad0964 +0x1a4:  mov    %edx,0x2018(%ebx)
08ad096a +0x1aa:  mov    -0x3c(%ebp),%edx
08ad096d +0x1ad:  mov    %eax,-0x40(%ebp)
08ad0970 +0x1b0:  mov    0x201c(%ebx),%eax
08ad0976 +0x1b6:  mov    %edx,0x201c(%ebx)
08ad097c +0x1bc:  mov    %eax,-0x3c(%ebp)
08ad097f +0x1bf:  mov    %esi,(%esp)
08ad0982 +0x1c2:  call   08ad15c0 <_ZN14CompiledDNFLex8getTokenEv+0x620>  ; CompiledDNFLex::getToken()+0x620
08ad0987 +0x1c7:  lea    0x18(%ebx),%edx
08ad098a +0x1ca:  mov    $0x800,%ecx
08ad098f +0x1cf:  xor    %eax,%eax
08ad0991 +0x1d1:  mov    %edx,%edi
08ad0993 +0x1d3:  rep stos %eax,%es:(%edi)
08ad0995 +0x1d5:  movb   $0x1,0x2040(%ebx)
08ad099c +0x1dc:  movl   $0x0,0x2044(%ebx)
08ad09a6 +0x1e6:  movl   $0x0,0x2048(%ebx)
08ad09b0 +0x1f0:  movl   $0x1,0x4(%esp)
08ad09b8 +0x1f8:  mov    %ebx,(%esp)
08ad09bb +0x1fb:  call   08ad03d0 <_ZN14CompiledDNFLex6createEb>  ; CompiledDNFLex::create(bool)
08ad09c0 +0x200:  add    $0x6c,%esp
08ad09c3 +0x203:  pop    %ebx
08ad09c4 +0x204:  pop    %esi
08ad09c5 +0x205:  pop    %edi
08ad09c6 +0x206:  pop    %ebp
08ad09c7 +0x207:  ret
08ad09c8 +0x208:  mov    %eax,(%esp)
08ad09cb +0x20b:  call   08ae3750 <_Unwind_Resume>
08ad09d0 +0x210:  mov    %eax,%ebx
08ad09d2 +0x212:  mov    -0x4c(%ebp),%eax
08ad09d5 +0x215:  mov    %eax,(%esp)
08ad09d8 +0x218:  call   08ad15c0 <_ZN14CompiledDNFLex8getTokenEv+0x620>  ; CompiledDNFLex::getToken()+0x620
08ad09dd +0x21d:  mov    %ebx,(%esp)
08ad09e0 +0x220:  call   08ae3750 <_Unwind_Resume>
08ad09e5 +0x225:  mov    %eax,%ebx
08ad09e7 +0x227:  mov    %esi,(%esp)
08ad09ea +0x22a:  call   08ad15c0 <_ZN14CompiledDNFLex8getTokenEv+0x620>  ; CompiledDNFLex::getToken()+0x620
08ad09ef +0x22f:  mov    %ebx,(%esp)
08ad09f2 +0x232:  call   08ae3750 <_Unwind_Resume>
08ad09f7 +0x237:  nop
08ad09f8 +0x238:  nop
08ad09f9 +0x239:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// CompiledDNFLex::CompiledDNFLex @ 0x8ad07c0

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: void CompiledDNFLex(CompiledDNFLex * this) */

void __thiscall CompiledDNFLex::CompiledDNFLex(CompiledDNFLex *this)

{
  stream_t *psVar1;
  stream_t *psVar2;
  stream_t *psVar3;
  stream_t **ppsVar4;
  stream_t *psVar5;
  stream_t **ppsVar6;
  stream_t *psVar7;
  stream_t *psVar8;
  stream_t **ppsVar9;
  size_t sVar10;
  int iVar11;
  char *pcVar12;
  byte bVar13;
  _Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
  *in_stack_ffffff84;
  size_t in_stack_ffffff88;
  deque<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_> local_44;
  
  bVar13 = 0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_map = (stream_t **)0x0;
  this->_vptr_CompiledDNFLex = (_func_int_varargs **)&PTR__CompiledDNFLex_08e2ed20;
  this->offset_ = (char *)0x0;
  this->lastToken_ = DNF_TOK_EOF;
  this->stringManagerDelete_ = false;
  this->stringManager_ = (ScriptStringManager *)0x0;
  this->stringBuffer_ = (char *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_map_size = 0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_start._M_cur = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_start._M_first = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_start._M_last = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_start._M_node = (stream_t **)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_finish._M_cur = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_finish._M_first = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_finish._M_last = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_finish._M_node = (stream_t **)0x0;
                    /* try { // try from 08ad083d to 08ad0841 has its CatchHandler @ 08ad09c8 */
  std::_Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>::
  _M_initialize_map(in_stack_ffffff84,in_stack_ffffff88);
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_map = (stream_t **)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_map_size = 0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_start._M_cur = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_start._M_first = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_start._M_last = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_start._M_node = (stream_t **)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_finish._M_cur = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_finish._M_first = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_finish._M_last = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_finish._M_node = (stream_t **)0x0;
                    /* try { // try from 08ad08af to 08ad08b3 has its CatchHandler @ 08ad09e5 */
  std::_Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>::
  _M_initialize_map(in_stack_ffffff84,in_stack_ffffff88);
  if (local_44.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_map != (stream_t **)0x0) {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    psVar1 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_start._M_cur;
    psVar2 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_start._M_first;
    psVar3 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_start._M_last;
    ppsVar4 = (this->stream_stack_).c.
              super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
              ._M_impl._M_start._M_node;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_start._M_cur =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_start._M_cur;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_start._M_first =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_start._M_first;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_start._M_last =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_start._M_last;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_start._M_node =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_start._M_node;
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    psVar5 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_finish._M_first;
    ppsVar6 = (this->stream_stack_).c.
              super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
              ._M_impl._M_finish._M_node;
    psVar7 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_finish._M_last;
    psVar8 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_finish._M_cur;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_finish._M_cur =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_finish._M_cur;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_finish._M_first =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_finish._M_first;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_finish._M_last =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_finish._M_last;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_finish._M_node =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_finish._M_node;
                    /* Unresolved local var: stream_t * * __tmp@[???] */
    ppsVar9 = (this->stream_stack_).c.
              super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
              ._M_impl._M_map;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_map = local_44.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_map;
                    /* Unresolved local var: size_t __tmp@[???] */
    sVar10 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_map_size;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_map_size = local_44.
                  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  ._M_impl._M_map_size;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_map = ppsVar9;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_map_size = sVar10;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_start._M_cur = psVar1;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_start._M_first = psVar2;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_start._M_last = psVar3;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_start._M_node = ppsVar4;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_finish._M_cur = psVar8;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_finish._M_first = psVar5;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_finish._M_last = psVar7;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_finish._M_node = ppsVar6;
  }
  std::deque<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>::~deque
            (&local_44,in_stack_ffffff88);
  pcVar12 = this->ERR_BUF;
  for (iVar11 = 0x800; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12 = pcVar12 + (uint)bVar13 * -8 + 4;
  }
  this->allow_inclusion_ = true;
  this->LexerError_ = (TLexerError)0x0;
  this->LoadStream_ = (TLoadStream)0x0;
                    /* try { // try from 08ad09bb to 08ad09bf has its CatchHandler @ 08ad09d0 */
  create(this,true);
  return;
}
```
