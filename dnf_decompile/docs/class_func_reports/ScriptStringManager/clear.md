# clear

`_ZN19ScriptStringManager5clearEv`

`ScriptStringManager::clear()`

| 类 | 地址 |
|---|---|
| `ScriptStringManager` | `0x08acf550` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acf550  _ZN19ScriptStringManager5clearEv
#           ScriptStringManager::clear()
# range [0x08acf550, 0x08acf5ee]
08acf550 +0x00:  push   %ebp
08acf551 +0x01:  mov    %esp,%ebp
08acf553 +0x03:  push   %edi
08acf554 +0x04:  push   %esi
08acf555 +0x05:  push   %ebx
08acf556 +0x06:  sub    $0x4c,%esp
08acf559 +0x09:  mov    0x8(%ebp),%edi
08acf55c +0x0c:  mov    0x4(%edi),%edx
08acf55f +0x0f:  mov    0x8(%edi),%esi
08acf562 +0x12:  cmp    %esi,%edx
08acf564 +0x14:  je     08acf57b <+0x2b>
08acf566 +0x16:  mov    %edx,%ebx
08acf568 +0x18:  mov    (%ebx),%eax
08acf56a +0x1a:  sub    $0xc,%eax
08acf56d +0x1d:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08acf572 +0x22:  jne    08acf5af <+0x5f>
08acf574 +0x24:  add    $0x4,%ebx
08acf577 +0x27:  cmp    %ebx,%esi
08acf579 +0x29:  jne    08acf568 <+0x18>
08acf57b +0x2b:  mov    0x18(%edi),%eax
08acf57e +0x2e:  mov    %edx,0x8(%edi)
08acf581 +0x31:  mov    %eax,0x4(%esp)
08acf585 +0x35:  lea    0x10(%edi),%eax
08acf588 +0x38:  mov    %eax,(%esp)
08acf58b +0x3b:  call   0817ce4c <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x293>  ; global constructors keyed to Arad_Script::Arad_Script()+0x293
08acf590 +0x40:  lea    0x14(%edi),%eax
08acf593 +0x43:  mov    %eax,0x1c(%edi)
08acf596 +0x46:  movl   $0x0,0x18(%edi)
08acf59d +0x4d:  mov    %eax,0x20(%edi)
08acf5a0 +0x50:  movl   $0x0,0x24(%edi)
08acf5a7 +0x57:  add    $0x4c,%esp
08acf5aa +0x5a:  pop    %ebx
08acf5ab +0x5b:  pop    %esi
08acf5ac +0x5c:  pop    %edi
08acf5ad +0x5d:  pop    %ebp
08acf5ae +0x5e:  ret
08acf5af +0x5f:  mov    $&data#bb92cc41(.plt),%ecx
08acf5b4 +0x64:  test   %ecx,%ecx
08acf5b6 +0x66:  je     08acf5e0 <+0x90>
08acf5b8 +0x68:  or     $0xffffffff,%ecx
08acf5bb +0x6b:  lock xadd %ecx,0x8(%eax)
08acf5c0 +0x70:  mov    %ecx,-0x3c(%ebp)
08acf5c3 +0x73:  cmpl   $0x0,-0x3c(%ebp)
08acf5c7 +0x77:  jg     08acf574 <+0x24>
08acf5c9 +0x79:  lea    -0x19(%ebp),%ecx
08acf5cc +0x7c:  mov    %edx,-0x2c(%ebp)
08acf5cf +0x7f:  mov    %ecx,0x4(%esp)
08acf5d3 +0x83:  mov    %eax,(%esp)
08acf5d6 +0x86:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08acf5db +0x8b:  mov    -0x2c(%ebp),%edx
08acf5de +0x8e:  jmp    08acf574 <+0x24>
08acf5e0 +0x90:  mov    0x8(%eax),%ecx
08acf5e3 +0x93:  mov    %ecx,-0x3c(%ebp)
08acf5e6 +0x96:  sub    $0x1,%ecx
08acf5e9 +0x99:  mov    %ecx,0x8(%eax)
08acf5ec +0x9c:  jmp    08acf5c3 <+0x73>
08acf5ee +0x9e:  xchg   %ax,%ax
```

## 反编译 C

```c
// ScriptStringManager::clear @ 0x8acf550

/* WARNING: Removing unreachable block (ram,0x08acf5e0) */
/* DWARF original prototype: void clear(ScriptStringManager * this) */

void __thiscall ScriptStringManager::clear(ScriptStringManager *this)

{
  _Rb_tree_node_base *p_Var1;
  int *piVar2;
  int iVar3;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar4;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar5;
  char *pcVar6;
  _Base_ptr p_Var7;
  allocator *paVar8;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar9;
  
  pbVar5 = (this->strings_).
           super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
           ._M_impl._M_finish;
  pbVar4 = (this->strings_).
           super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
           ._M_impl._M_start;
  for (pbVar9 = pbVar4; pbVar9 != pbVar5; pbVar9 = pbVar9 + 1) {
    pcVar6 = (pbVar9->_M_dataplus)._M_p;
    paVar8 = (allocator *)(pcVar6 + -0xc);
    if (paVar8 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
      LOCK();
      piVar2 = (int *)(pcVar6 + -4);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 < 1) {
        std::string::_Rep::_M_destroy(paVar8);
      }
    }
  }
  p_Var7 = (this->string_map_)._M_t._M_impl._M_header._M_parent;
  (this->strings_).
  super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  ._M_impl._M_finish = pbVar4;
  std::
  _Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
              *)&this->string_map_,(_Rb_tree_node *)p_Var7);
  p_Var1 = &(this->string_map_)._M_t._M_impl._M_header;
  (this->string_map_)._M_t._M_impl._M_header._M_left = p_Var1;
  (this->string_map_)._M_t._M_impl._M_header._M_parent = (_Base_ptr)0x0;
  (this->string_map_)._M_t._M_impl._M_header._M_right = p_Var1;
  (this->string_map_)._M_t._M_impl._M_node_count = 0;
  return;
}
```
