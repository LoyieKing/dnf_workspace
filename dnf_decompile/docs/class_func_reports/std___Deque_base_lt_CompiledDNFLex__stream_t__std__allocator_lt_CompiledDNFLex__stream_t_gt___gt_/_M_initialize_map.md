# _M_initialize_map

`_ZNSt11_Deque_baseIN14CompiledDNFLex8stream_tESaIS1_EE17_M_initialize_mapEj.clone.1`

`std::_Deque_base<CompiledDNFLex::stream_t, std::allocator<CompiledDNFLex::stream_t> >::_M_initialize_map(unsigned int) [clone .clone.1]`

| 类 | 地址 |
|---|---|
| `std::_Deque_base<CompiledDNFLex::stream_t, std::allocator<CompiledDNFLex::stream_t> >` | `0x08ad04c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad04c0  _ZNSt11_Deque_baseIN14CompiledDNFLex8stream_tESaIS1_EE17_M_initialize_mapEj.clone.1
#           std::_Deque_base<CompiledDNFLex::stream_t, std::allocator<CompiledDNFLex::stream_t> >::_M_initialize_map(unsigned int) [clone .clone.1]
# range [0x08ad04c0, 0x08ad057a]
08ad04c0 +0x00:  push   %ebp
08ad04c1 +0x01:  mov    %esp,%ebp
08ad04c3 +0x03:  push   %esi
08ad04c4 +0x04:  push   %ebx
08ad04c5 +0x05:  mov    %eax,%ebx
08ad04c7 +0x07:  sub    $0x10,%esp
08ad04ca +0x0a:  movl   $0x8,0x4(%eax)
08ad04d1 +0x11:  movl   $0x20,(%esp)
08ad04d8 +0x18:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ad04dd +0x1d:  mov    0x4(%ebx),%edx
08ad04e0 +0x20:  mov    %eax,(%ebx)
08ad04e2 +0x22:  movl   $0x1f4,(%esp)
08ad04e9 +0x29:  sub    $0x1,%edx
08ad04ec +0x2c:  shr    %edx
08ad04ee +0x2e:  lea    (%eax,%edx,4),%esi
08ad04f1 +0x31:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ad04f6 +0x36:  lea    0x1f4(%eax),%edx
08ad04fc +0x3c:  mov    %eax,(%esi)
08ad04fe +0x3e:  mov    %eax,0xc(%ebx)
08ad0501 +0x41:  mov    %edx,0x10(%ebx)
08ad0504 +0x44:  mov    (%esi),%edx
08ad0506 +0x46:  mov    %esi,0x14(%ebx)
08ad0509 +0x49:  mov    %esi,0x24(%ebx)
08ad050c +0x4c:  mov    %eax,0x8(%ebx)
08ad050f +0x4f:  lea    0x1f4(%edx),%ecx
08ad0515 +0x55:  mov    %edx,0x1c(%ebx)
08ad0518 +0x58:  mov    %ecx,0x20(%ebx)
08ad051b +0x5b:  mov    %edx,0x18(%ebx)
08ad051e +0x5e:  add    $0x10,%esp
08ad0521 +0x61:  pop    %ebx
08ad0522 +0x62:  pop    %esi
08ad0523 +0x63:  pop    %ebp
08ad0524 +0x64:  ret
08ad0525 +0x65:  mov    %eax,(%esp)
08ad0528 +0x68:  call   08ae3750 <_Unwind_Resume>
08ad052d +0x6d:  mov    %eax,(%esp)
08ad0530 +0x70:  call   08725ce0 <__cxa_begin_catch>
08ad0535 +0x75:  call   08724be0 <__cxa_rethrow>
08ad053a +0x7a:  mov    %eax,%esi
08ad053c +0x7c:  call   08725c30 <__cxa_end_catch>
08ad0541 +0x81:  mov    %esi,(%esp)
08ad0544 +0x84:  call   08725ce0 <__cxa_begin_catch>
08ad0549 +0x89:  mov    (%ebx),%eax
08ad054b +0x8b:  mov    %eax,(%esp)
08ad054e +0x8e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ad0553 +0x93:  movl   $0x0,(%ebx)
08ad0559 +0x99:  movl   $0x0,0x4(%ebx)
08ad0560 +0xa0:  call   08724be0 <__cxa_rethrow>
08ad0565 +0xa5:  mov    %eax,%esi
08ad0567 +0xa7:  call   08725c30 <__cxa_end_catch>
08ad056c +0xac:  mov    %esi,(%esp)
08ad056f +0xaf:  call   08ae3750 <_Unwind_Resume>
08ad0574 +0xb4:  lea    0x0(%esi),%esi
08ad057a +0xba:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// std::_Deque_base<CompiledDNFLex::stream_t, @ 0x8ad04c0

/* DWARF original prototype: void
   _M_initialize_map(_Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
   * this, size_t __num_elements) */

void __thiscall
std::_Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>::
_M_initialize_map(_Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  *this,size_t __num_elements)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_EAX;
  void *pvVar3;
  
                    /* Unresolved local var: size_t __num_nodes@[???]
                       Unresolved local var: stream_t * * __nstart@[???]
                       Unresolved local var: stream_t * * __nfinish@[???] */
  in_EAX[1] = 8;
                    /* try { // try from 08ad04d8 to 08ad04dc has its CatchHandler @ 08ad0525 */
  pvVar3 = operator_new(0x20);
  *in_EAX = pvVar3;
                    /* Unresolved local var: stream_t * * __cur@[???] */
  piVar1 = (int *)((int)pvVar3 + (in_EAX[1] - 1 >> 1) * 4);
                    /* try { // try from 08ad04f1 to 08ad04f5 has its CatchHandler @ 08ad052d */
  pvVar3 = operator_new(500);
  *piVar1 = (int)pvVar3;
  in_EAX[3] = pvVar3;
  in_EAX[4] = (int)pvVar3 + 500;
  iVar2 = *piVar1;
  in_EAX[5] = piVar1;
  in_EAX[9] = piVar1;
  in_EAX[2] = pvVar3;
  in_EAX[7] = iVar2;
  in_EAX[8] = iVar2 + 500;
  in_EAX[6] = iVar2;
  return;
}
```
