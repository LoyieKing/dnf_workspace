# PopInputStream

`_ZN14CompiledDNFLex14PopInputStreamEb`

`CompiledDNFLex::PopInputStream(bool)`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0c80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0c80  _ZN14CompiledDNFLex14PopInputStreamEb
#           CompiledDNFLex::PopInputStream(bool)
# range [0x08ad0c80, 0x08ad0e8c]
08ad0c80 +0x000:  push   %ebp
08ad0c81 +0x001:  mov    %esp,%ebp
08ad0c83 +0x003:  sub    $0x48,%esp
08ad0c86 +0x006:  mov    %ebx,-0xc(%ebp)
08ad0c89 +0x009:  mov    0x8(%ebp),%ebx
08ad0c8c +0x00c:  mov    %esi,-0x8(%ebp)
08ad0c8f +0x00f:  movzbl 0xc(%ebp),%edx
08ad0c93 +0x013:  mov    %edi,-0x4(%ebp)
08ad0c96 +0x016:  mov    0x2030(%ebx),%eax
08ad0c9c +0x01c:  mov    0x2020(%ebx),%esi
08ad0ca2 +0x022:  cmp    %esi,%eax
08ad0ca4 +0x024:  je     08ad0d9b <+0x11b>
08ad0caa +0x02a:  test   %dl,%dl
08ad0cac +0x02c:  je     08ad0d58 <+0xd8>
08ad0cb2 +0x032:  mov    0x2034(%ebx),%edx
08ad0cb8 +0x038:  mov    0x203c(%ebx),%edi
08ad0cbe +0x03e:  cmp    %edx,%eax
08ad0cc0 +0x040:  mov    %eax,%ecx
08ad0cc2 +0x042:  je     08ad0df8 <+0x178>
08ad0cc8 +0x048:  mov    -0x8(%ecx),%ecx
08ad0ccb +0x04b:  test   %ecx,%ecx
08ad0ccd +0x04d:  je     08ad0ce3 <+0x63>
08ad0ccf +0x04f:  mov    %ecx,(%esp)
08ad0cd2 +0x052:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ad0cd7 +0x057:  mov    0x2030(%ebx),%eax
08ad0cdd +0x05d:  mov    0x2034(%ebx),%edx
08ad0ce3 +0x063:  cmp    %eax,%edx
08ad0ce5 +0x065:  je     08ad0db0 <+0x130>
08ad0ceb +0x06b:  sub    $0x14,%eax
08ad0cee +0x06e:  mov    0x4(%eax),%edx
08ad0cf1 +0x071:  mov    %eax,0x2030(%ebx)
08ad0cf7 +0x077:  sub    $0xc,%edx
08ad0cfa +0x07a:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
08ad0d00 +0x080:  jne    08ad0e43 <+0x1c3>
08ad0d06 +0x086:  mov    (%eax),%eax
08ad0d08 +0x088:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
08ad0d0d +0x08d:  sub    $0xc,%eax
08ad0d10 +0x090:  cmp    %eax,%edx
08ad0d12 +0x092:  jne    08ad0e16 <+0x196>
08ad0d18 +0x098:  mov    0x2030(%ebx),%edx
08ad0d1e +0x09e:  mov    $0x1,%eax
08ad0d23 +0x0a3:  cmp    0x2020(%ebx),%edx
08ad0d29 +0x0a9:  je     08ad0d9d <+0x11d>
08ad0d2b +0x0ab:  cmp    0x2034(%ebx),%edx
08ad0d31 +0x0b1:  mov    0x203c(%ebx),%eax
08ad0d37 +0x0b7:  je     08ad0e08 <+0x188>
08ad0d3d +0x0bd:  mov    -0x4(%edx),%eax
08ad0d40 +0x0c0:  mov    %eax,0x4(%ebx)
08ad0d43 +0x0c3:  mov    $0x1,%eax
08ad0d48 +0x0c8:  mov    -0xc(%ebp),%ebx
08ad0d4b +0x0cb:  mov    -0x8(%ebp),%esi
08ad0d4e +0x0ce:  mov    -0x4(%ebp),%edi
08ad0d51 +0x0d1:  mov    %ebp,%esp
08ad0d53 +0x0d3:  pop    %ebp
08ad0d54 +0x0d4:  ret
08ad0d55 +0x0d5:  lea    0x0(%esi),%esi
08ad0d58 +0x0d8:  mov    0x2028(%ebx),%ecx
08ad0d5e +0x0de:  mov    0x2034(%ebx),%edx
08ad0d64 +0x0e4:  mov    0x203c(%ebx),%edi
08ad0d6a +0x0ea:  sub    %esi,%ecx
08ad0d6c +0x0ec:  mov    %eax,%esi
08ad0d6e +0x0ee:  sub    %edx,%esi
08ad0d70 +0x0f0:  sar    $0x2,%ecx
08ad0d73 +0x0f3:  sar    $0x2,%esi
08ad0d76 +0x0f6:  add    %ecx,%esi
08ad0d78 +0x0f8:  mov    %edi,%ecx
08ad0d7a +0x0fa:  sub    0x202c(%ebx),%ecx
08ad0d80 +0x100:  imul   $0xcccccccd,%esi,%esi
08ad0d86 +0x106:  sar    $0x2,%ecx
08ad0d89 +0x109:  lea    -0x5(%ecx,%ecx,4),%ecx
08ad0d8d +0x10d:  lea    (%ecx,%ecx,4),%ecx
08ad0d90 +0x110:  add    %ecx,%esi
08ad0d92 +0x112:  cmp    $0x1,%esi
08ad0d95 +0x115:  ja     08ad0cbe <+0x3e>
08ad0d9b +0x11b:  xor    %eax,%eax
08ad0d9d +0x11d:  mov    -0xc(%ebp),%ebx
08ad0da0 +0x120:  mov    -0x8(%ebp),%esi
08ad0da3 +0x123:  mov    -0x4(%ebp),%edi
08ad0da6 +0x126:  mov    %ebp,%esp
08ad0da8 +0x128:  pop    %ebp
08ad0da9 +0x129:  ret
08ad0daa +0x12a:  lea    0x0(%esi),%esi
08ad0db0 +0x130:  mov    %edx,(%esp)
08ad0db3 +0x133:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ad0db8 +0x138:  mov    0x203c(%ebx),%eax
08ad0dbe +0x13e:  lea    -0x4(%eax),%edx
08ad0dc1 +0x141:  mov    -0x4(%eax),%eax
08ad0dc4 +0x144:  mov    %edx,0x203c(%ebx)
08ad0dca +0x14a:  mov    %eax,0x2034(%ebx)
08ad0dd0 +0x150:  lea    0x1f4(%eax),%edx
08ad0dd6 +0x156:  add    $0x1e0,%eax
08ad0ddb +0x15b:  mov    %edx,0x2038(%ebx)
08ad0de1 +0x161:  mov    %eax,0x2030(%ebx)
08ad0de7 +0x167:  mov    %eax,(%esp)
08ad0dea +0x16a:  call   08ad1320 <_ZN14CompiledDNFLex8getTokenEv+0x380>  ; CompiledDNFLex::getToken()+0x380
08ad0def +0x16f:  jmp    08ad0d18 <+0x98>
08ad0df4 +0x174:  lea    0x0(%esi,%eiz,1),%esi
08ad0df8 +0x178:  mov    -0x4(%edi),%ecx
08ad0dfb +0x17b:  add    $0x1f4,%ecx
08ad0e01 +0x181:  jmp    08ad0cc8 <+0x48>
08ad0e06 +0x186:  xchg   %ax,%ax
08ad0e08 +0x188:  mov    -0x4(%eax),%edx
08ad0e0b +0x18b:  add    $0x1f4,%edx
08ad0e11 +0x191:  jmp    08ad0d3d <+0xbd>
08ad0e16 +0x196:  mov    $&data#bb92cc41(.plt),%edx
08ad0e1b +0x19b:  test   %edx,%edx
08ad0e1d +0x19d:  je     08ad0e76 <+0x1f6>
08ad0e1f +0x19f:  or     $0xffffffff,%edx
08ad0e22 +0x1a2:  lock xadd %edx,0x8(%eax)
08ad0e27 +0x1a7:  test   %edx,%edx
08ad0e29 +0x1a9:  jg     08ad0d18 <+0x98>
08ad0e2f +0x1af:  lea    -0x1a(%ebp),%edx
08ad0e32 +0x1b2:  mov    %edx,0x4(%esp)
08ad0e36 +0x1b6:  mov    %eax,(%esp)
08ad0e39 +0x1b9:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ad0e3e +0x1be:  jmp    08ad0d18 <+0x98>
08ad0e43 +0x1c3:  mov    $&data#bb92cc41(.plt),%ecx
08ad0e48 +0x1c8:  test   %ecx,%ecx
08ad0e4a +0x1ca:  je     08ad0e81 <+0x201>
08ad0e4c +0x1cc:  or     $0xffffffff,%ecx
08ad0e4f +0x1cf:  lock xadd %ecx,0x8(%edx)
08ad0e54 +0x1d4:  test   %ecx,%ecx
08ad0e56 +0x1d6:  jg     08ad0d06 <+0x86>
08ad0e5c +0x1dc:  lea    -0x19(%ebp),%ecx
08ad0e5f +0x1df:  mov    %eax,-0x2c(%ebp)
08ad0e62 +0x1e2:  mov    %ecx,0x4(%esp)
08ad0e66 +0x1e6:  mov    %edx,(%esp)
08ad0e69 +0x1e9:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ad0e6e +0x1ee:  mov    -0x2c(%ebp),%eax
08ad0e71 +0x1f1:  jmp    08ad0d06 <+0x86>
08ad0e76 +0x1f6:  mov    0x8(%eax),%edx
08ad0e79 +0x1f9:  lea    -0x1(%edx),%ecx
08ad0e7c +0x1fc:  mov    %ecx,0x8(%eax)
08ad0e7f +0x1ff:  jmp    08ad0e27 <+0x1a7>
08ad0e81 +0x201:  mov    0x8(%edx),%ecx
08ad0e84 +0x204:  lea    -0x1(%ecx),%esi
08ad0e87 +0x207:  mov    %esi,0x8(%edx)
08ad0e8a +0x20a:  jmp    08ad0e54 <+0x1d4>
08ad0e8c +0x20c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// CompiledDNFLex::PopInputStream @ 0x8ad0c80

/* WARNING: Removing unreachable block (ram,0x08ad0e81) */
/* WARNING: Removing unreachable block (ram,0x08ad0e76) */
/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: bool PopInputStream(CompiledDNFLex * this, bool pop_all) */

bool __thiscall CompiledDNFLex::PopInputStream(CompiledDNFLex *this,bool pop_all)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  stream_t *psVar5;
  stream_t *psVar6;
  stream_t *psVar7;
  allocator *paVar8;
  stream_t **ppsVar9;
  int in_stack_ffffffb8;
  
                    /* Unresolved local var: stream_t * stream@[???] */
  psVar5 = (this->stream_stack_).c.
           super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
           _M_impl._M_finish._M_cur;
  psVar6 = (this->stream_stack_).c.
           super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
           _M_impl._M_start._M_cur;
  if (psVar5 == psVar6) {
LAB_08ad0d9b:
    bVar4 = false;
  }
  else {
    if (pop_all) {
      psVar7 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_first;
      ppsVar9 = (this->stream_stack_).c.
                super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                ._M_impl._M_finish._M_node;
    }
    else {
      psVar7 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_first;
      ppsVar9 = (this->stream_stack_).c.
                super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                ._M_impl._M_finish._M_node;
      if ((uint)((((int)psVar5 - (int)psVar7 >> 2) +
                 ((int)(this->stream_stack_).c.
                       super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                       ._M_impl._M_start._M_last - (int)psVar6 >> 2)) * -0x33333333 +
                (((int)ppsVar9 -
                  (int)(this->stream_stack_).c.
                       super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                       ._M_impl._M_start._M_node >> 2) * 5 + -5) * 5) < 2) goto LAB_08ad0d9b;
    }
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    psVar6 = psVar5;
    if (psVar5 == psVar7) {
      psVar6 = ppsVar9[-1] + 0x19;
    }
    if (psVar6[-1].buffer != (char *)0x0) {
      operator_delete__(psVar6[-1].buffer);
      psVar5 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_cur;
      psVar7 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_first;
    }
    if (psVar7 == psVar5) {
      operator_delete(psVar7);
      ppsVar9 = (this->stream_stack_).c.
                super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                ._M_impl._M_finish._M_node;
      psVar5 = ppsVar9[-1];
      (this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_finish._M_node = ppsVar9 + -1;
      (this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_finish._M_first = psVar5;
      (this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_finish._M_last = psVar5 + 0x19;
      (this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_finish._M_cur = psVar5 + 0x18;
      stream_t::~stream_t(psVar5 + 0x18,in_stack_ffffffb8);
    }
    else {
      pcVar3 = psVar5[-1].filename._M_dataplus._M_p;
      (this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_finish._M_cur = psVar5 + -1;
      paVar8 = (allocator *)(pcVar3 + -0xc);
      if (paVar8 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(pcVar3 + -4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 1) {
          std::string::_Rep::_M_destroy(paVar8);
        }
      }
      pcVar3 = psVar5[-1].dir._M_dataplus._M_p;
      paVar8 = (allocator *)(pcVar3 + -0xc);
      if (paVar8 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(pcVar3 + -4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 1) {
          std::string::_Rep::_M_destroy(paVar8);
        }
      }
    }
    psVar5 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_finish._M_cur;
    bVar4 = true;
    if (psVar5 != (this->stream_stack_).c.
                  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  ._M_impl._M_start._M_cur) {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
      if (psVar5 == (this->stream_stack_).c.
                    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                    ._M_impl._M_finish._M_first) {
        psVar5 = (this->stream_stack_).c.
                 super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                 ._M_impl._M_finish._M_node[-1] + 0x19;
      }
      this->offset_ = psVar5[-1].offset;
      return true;
    }
  }
  return bVar4;
}
```
