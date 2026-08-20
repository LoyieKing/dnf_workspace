# CompiledDNFLex

`_ZN14CompiledDNFLexC1EP19ScriptStringManager`

`CompiledDNFLex::CompiledDNFLex(ScriptStringManager*)`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0580  _ZN14CompiledDNFLexC1EP19ScriptStringManager
#           CompiledDNFLex::CompiledDNFLex(ScriptStringManager*)
# range [0x08ad0580, 0x08ad07b9]
08ad0580 +0x000:  push   %ebp
08ad0581 +0x001:  mov    %esp,%ebp
08ad0583 +0x003:  push   %edi
08ad0584 +0x004:  push   %esi
08ad0585 +0x005:  push   %ebx
08ad0586 +0x006:  sub    $0x6c,%esp
08ad0589 +0x009:  mov    0x8(%ebp),%ebx
08ad058c +0x00c:  mov    0xc(%ebp),%eax
08ad058f +0x00f:  lea    -0x40(%ebp),%esi
08ad0592 +0x012:  movl   $0x0,-0x40(%ebp)
08ad0599 +0x019:  movl   $0x0,-0x3c(%ebp)
08ad05a0 +0x020:  movl   $&_ZTV14CompiledDNFLex+0x8,(%ebx)
08ad05a6 +0x026:  mov    %eax,0x10(%ebx)
08ad05a9 +0x029:  mov    %esi,%eax
08ad05ab +0x02b:  movl   $0x0,0x4(%ebx)
08ad05b2 +0x032:  movl   $0x0,0x8(%ebx)
08ad05b9 +0x039:  movb   $0x0,0xc(%ebx)
08ad05bd +0x03d:  movl   $0x0,0x14(%ebx)
08ad05c4 +0x044:  movl   $0x0,-0x38(%ebp)
08ad05cb +0x04b:  movl   $0x0,-0x34(%ebp)
08ad05d2 +0x052:  movl   $0x0,-0x30(%ebp)
08ad05d9 +0x059:  movl   $0x0,-0x2c(%ebp)
08ad05e0 +0x060:  movl   $0x0,-0x28(%ebp)
08ad05e7 +0x067:  movl   $0x0,-0x24(%ebp)
08ad05ee +0x06e:  movl   $0x0,-0x20(%ebp)
08ad05f5 +0x075:  movl   $0x0,-0x1c(%ebp)
08ad05fc +0x07c:  call   08ad04c0 <_ZNSt11_Deque_baseIN14CompiledDNFLex8stream_tESaIS1_EE17_M_initialize_mapEj.clone.1>  ; std::_Deque_base<CompiledDNFLex::stream_t, std::allocator<CompiledDNFLex::stream_t> >::_M_initialize_map(unsigned int) [clone .clone.1]
08ad0601 +0x081:  lea    0x2018(%ebx),%eax
08ad0607 +0x087:  movl   $0x0,0x2018(%ebx)
08ad0611 +0x091:  movl   $0x0,0x201c(%ebx)
08ad061b +0x09b:  movl   $0x0,0x2020(%ebx)
08ad0625 +0x0a5:  movl   $0x0,0x2024(%ebx)
08ad062f +0x0af:  movl   $0x0,0x2028(%ebx)
08ad0639 +0x0b9:  movl   $0x0,0x202c(%ebx)
08ad0643 +0x0c3:  movl   $0x0,0x2030(%ebx)
08ad064d +0x0cd:  movl   $0x0,0x2034(%ebx)
08ad0657 +0x0d7:  movl   $0x0,0x2038(%ebx)
08ad0661 +0x0e1:  movl   $0x0,0x203c(%ebx)
08ad066b +0x0eb:  mov    %eax,-0x4c(%ebp)
08ad066e +0x0ee:  call   08ad04c0 <_ZNSt11_Deque_baseIN14CompiledDNFLex8stream_tESaIS1_EE17_M_initialize_mapEj.clone.1>  ; std::_Deque_base<CompiledDNFLex::stream_t, std::allocator<CompiledDNFLex::stream_t> >::_M_initialize_map(unsigned int) [clone .clone.1]
08ad0673 +0x0f3:  mov    -0x40(%ebp),%ecx
08ad0676 +0x0f6:  test   %ecx,%ecx
08ad0678 +0x0f8:  je     08ad073e <+0x1be>
08ad067e +0x0fe:  mov    0x2020(%ebx),%eax
08ad0684 +0x104:  mov    0x2024(%ebx),%edx
08ad068a +0x10a:  mov    0x2028(%ebx),%ecx
08ad0690 +0x110:  mov    0x202c(%ebx),%edi
08ad0696 +0x116:  mov    %eax,-0x5c(%ebp)
08ad0699 +0x119:  mov    -0x38(%ebp),%eax
08ad069c +0x11c:  mov    %eax,0x2020(%ebx)
08ad06a2 +0x122:  mov    -0x34(%ebp),%eax
08ad06a5 +0x125:  mov    %eax,0x2024(%ebx)
08ad06ab +0x12b:  mov    -0x30(%ebp),%eax
08ad06ae +0x12e:  mov    %eax,0x2028(%ebx)
08ad06b4 +0x134:  mov    -0x2c(%ebp),%eax
08ad06b7 +0x137:  mov    %eax,0x202c(%ebx)
08ad06bd +0x13d:  mov    -0x5c(%ebp),%eax
08ad06c0 +0x140:  mov    %edx,-0x34(%ebp)
08ad06c3 +0x143:  mov    0x2034(%ebx),%edx
08ad06c9 +0x149:  mov    %edi,-0x2c(%ebp)
08ad06cc +0x14c:  mov    0x203c(%ebx),%edi
08ad06d2 +0x152:  mov    %ecx,-0x30(%ebp)
08ad06d5 +0x155:  mov    0x2038(%ebx),%ecx
08ad06db +0x15b:  mov    %eax,-0x38(%ebp)
08ad06de +0x15e:  mov    0x2030(%ebx),%eax
08ad06e4 +0x164:  mov    %eax,-0x5c(%ebp)
08ad06e7 +0x167:  mov    -0x28(%ebp),%eax
08ad06ea +0x16a:  mov    %eax,0x2030(%ebx)
08ad06f0 +0x170:  mov    -0x24(%ebp),%eax
08ad06f3 +0x173:  mov    %eax,0x2034(%ebx)
08ad06f9 +0x179:  mov    -0x20(%ebp),%eax
08ad06fc +0x17c:  mov    %eax,0x2038(%ebx)
08ad0702 +0x182:  mov    -0x1c(%ebp),%eax
08ad0705 +0x185:  mov    %eax,0x203c(%ebx)
08ad070b +0x18b:  mov    %edi,-0x1c(%ebp)
08ad070e +0x18e:  mov    %ecx,-0x20(%ebp)
08ad0711 +0x191:  mov    %edx,-0x24(%ebp)
08ad0714 +0x194:  mov    -0x5c(%ebp),%eax
08ad0717 +0x197:  mov    -0x40(%ebp),%edx
08ad071a +0x19a:  mov    %eax,-0x28(%ebp)
08ad071d +0x19d:  mov    0x2018(%ebx),%eax
08ad0723 +0x1a3:  mov    %edx,0x2018(%ebx)
08ad0729 +0x1a9:  mov    -0x3c(%ebp),%edx
08ad072c +0x1ac:  mov    %eax,-0x40(%ebp)
08ad072f +0x1af:  mov    0x201c(%ebx),%eax
08ad0735 +0x1b5:  mov    %edx,0x201c(%ebx)
08ad073b +0x1bb:  mov    %eax,-0x3c(%ebp)
08ad073e +0x1be:  mov    %esi,(%esp)
08ad0741 +0x1c1:  call   08ad15c0 <_ZN14CompiledDNFLex8getTokenEv+0x620>  ; CompiledDNFLex::getToken()+0x620
08ad0746 +0x1c6:  lea    0x18(%ebx),%edx
08ad0749 +0x1c9:  mov    $0x800,%ecx
08ad074e +0x1ce:  xor    %eax,%eax
08ad0750 +0x1d0:  mov    %edx,%edi
08ad0752 +0x1d2:  rep stos %eax,%es:(%edi)
08ad0754 +0x1d4:  movb   $0x1,0x2040(%ebx)
08ad075b +0x1db:  movl   $0x0,0x2044(%ebx)
08ad0765 +0x1e5:  movl   $0x0,0x2048(%ebx)
08ad076f +0x1ef:  movl   $0x0,0x4(%esp)
08ad0777 +0x1f7:  mov    %ebx,(%esp)
08ad077a +0x1fa:  call   08ad03d0 <_ZN14CompiledDNFLex6createEb>  ; CompiledDNFLex::create(bool)
08ad077f +0x1ff:  add    $0x6c,%esp
08ad0782 +0x202:  pop    %ebx
08ad0783 +0x203:  pop    %esi
08ad0784 +0x204:  pop    %edi
08ad0785 +0x205:  pop    %ebp
08ad0786 +0x206:  ret
08ad0787 +0x207:  mov    %eax,(%esp)
08ad078a +0x20a:  call   08ae3750 <_Unwind_Resume>
08ad078f +0x20f:  mov    %eax,%ebx
08ad0791 +0x211:  mov    -0x4c(%ebp),%eax
08ad0794 +0x214:  mov    %eax,(%esp)
08ad0797 +0x217:  call   08ad15c0 <_ZN14CompiledDNFLex8getTokenEv+0x620>  ; CompiledDNFLex::getToken()+0x620
08ad079c +0x21c:  mov    %ebx,(%esp)
08ad079f +0x21f:  call   08ae3750 <_Unwind_Resume>
08ad07a4 +0x224:  mov    %eax,%ebx
08ad07a6 +0x226:  mov    %esi,(%esp)
08ad07a9 +0x229:  call   08ad15c0 <_ZN14CompiledDNFLex8getTokenEv+0x620>  ; CompiledDNFLex::getToken()+0x620
08ad07ae +0x22e:  mov    %ebx,(%esp)
08ad07b1 +0x231:  call   08ae3750 <_Unwind_Resume>
08ad07b6 +0x236:  lea    0x0(%esi),%esi
08ad07b9 +0x239:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// CompiledDNFLex::CompiledDNFLex @ 0x8ad0580

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: void CompiledDNFLex(CompiledDNFLex * this, ScriptStringManager *
   pStringManager) */

void __thiscall
CompiledDNFLex::CompiledDNFLex(CompiledDNFLex *this,ScriptStringManager *pStringManager)

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
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_map_size = 0;
  this->_vptr_CompiledDNFLex = (_func_int_varargs **)&PTR__CompiledDNFLex_08e2ed20;
  this->stringManager_ = pStringManager;
  this->offset_ = (char *)0x0;
  this->lastToken_ = DNF_TOK_EOF;
  this->stringManagerDelete_ = false;
  this->stringBuffer_ = (char *)0x0;
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
                    /* try { // try from 08ad05fc to 08ad0600 has its CatchHandler @ 08ad0787 */
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
                    /* try { // try from 08ad066e to 08ad0672 has its CatchHandler @ 08ad07a4 */
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
                    /* try { // try from 08ad077a to 08ad077e has its CatchHandler @ 08ad078f */
  create(this,false);
  return;
}
```
