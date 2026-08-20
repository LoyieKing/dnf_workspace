# CQueryCounter

`_ZN13CQueryCounterC1Ev`

`CQueryCounter::CQueryCounter()`

| 类 | 地址 |
|---|---|
| `CQueryCounter` | `0x085ecaec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ecaec  _ZN13CQueryCounterC1Ev
#           CQueryCounter::CQueryCounter()
# range [0x085ecaec, 0x085ecb89]
085ecaec +0x00:  push   %ebp
085ecaed +0x01:  mov    %esp,%ebp
085ecaef +0x03:  push   %esi
085ecaf0 +0x04:  push   %ebx
085ecaf1 +0x05:  sub    $0x20,%esp
085ecaf4 +0x08:  mov    0x8(%ebp),%eax
085ecaf7 +0x0b:  add    $0x4,%eax
085ecafa +0x0e:  mov    %eax,(%esp)
085ecafd +0x11:  call   085ed84a <_GLOBAL__I_query_table+0x115>  ; global constructors keyed to query_table+0x115
085ecb02 +0x16:  mov    0x8(%ebp),%eax
085ecb05 +0x19:  add    $0x1c,%eax
085ecb08 +0x1c:  mov    %eax,(%esp)
085ecb0b +0x1f:  call   085ed8c4 <_GLOBAL__I_query_table+0x18f>  ; global constructors keyed to query_table+0x18f
085ecb10 +0x24:  mov    0x8(%ebp),%eax
085ecb13 +0x27:  add    $0x34,%eax
085ecb16 +0x2a:  mov    %eax,(%esp)
085ecb19 +0x2d:  call   085ed93e <_GLOBAL__I_query_table+0x209>  ; global constructors keyed to query_table+0x209
085ecb1e +0x32:  mov    0x8(%ebp),%eax
085ecb21 +0x35:  lea    0x4(%eax),%edx
085ecb24 +0x38:  mov    0x8(%ebp),%ebx
085ecb27 +0x3b:  lea    -0xc(%ebp),%eax
085ecb2a +0x3e:  mov    %edx,0x4(%esp)
085ecb2e +0x42:  mov    %eax,(%esp)
085ecb31 +0x45:  call   0845142c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4042>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4042
085ecb36 +0x4a:  sub    $0x4,%esp
085ecb39 +0x4d:  mov    -0xc(%ebp),%eax
085ecb3c +0x50:  mov    %eax,0x34(%ebx)
085ecb3f +0x53:  mov    0x8(%ebp),%eax
085ecb42 +0x56:  movl   $0x0,0x38(%eax)
085ecb49 +0x5d:  lea    -0x8(%ebp),%esp
085ecb4c +0x60:  add    $0x0,%esp
085ecb4f +0x63:  pop    %ebx
085ecb50 +0x64:  pop    %esi
085ecb51 +0x65:  pop    %ebp
085ecb52 +0x66:  ret
085ecb53 +0x67:  mov    %edx,%ebx
085ecb55 +0x69:  mov    %eax,%esi
085ecb57 +0x6b:  mov    0x8(%ebp),%eax
085ecb5a +0x6e:  add    $0x1c,%eax
085ecb5d +0x71:  mov    %eax,(%esp)
085ecb60 +0x74:  call   085ed822 <_GLOBAL__I_query_table+0xed>  ; global constructors keyed to query_table+0xed
085ecb65 +0x79:  mov    %esi,%eax
085ecb67 +0x7b:  mov    %ebx,%edx
085ecb69 +0x7d:  jmp    085ecb6b <+0x7f>
085ecb6b +0x7f:  mov    %edx,%ebx
085ecb6d +0x81:  mov    %eax,%esi
085ecb6f +0x83:  mov    0x8(%ebp),%eax
085ecb72 +0x86:  add    $0x4,%eax
085ecb75 +0x89:  mov    %eax,(%esp)
085ecb78 +0x8c:  call   085ed80e <_GLOBAL__I_query_table+0xd9>  ; global constructors keyed to query_table+0xd9
085ecb7d +0x91:  mov    %esi,%eax
085ecb7f +0x93:  mov    %ebx,%edx
085ecb81 +0x95:  mov    %eax,(%esp)
085ecb84 +0x98:  call   08ae3750 <_Unwind_Resume>
085ecb89 +0x9d:  nop
```

## 反编译 C

```c
// CQueryCounter::CQueryCounter @ 0x85ecaec

/* CQueryCounter::CQueryCounter() */

void __thiscall CQueryCounter::CQueryCounter(CQueryCounter *this)

{
  undefined4 local_10;
  
  std::
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  ::map((map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
         *)(this + 4));
                    /* try { // try from 085ecb0b to 085ecb0f has its CatchHandler @ 085ecb6b */
  std::
  map<std::string,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>>
  ::map((map<std::string,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>>
         *)(this + 0x1c));
  std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)(this + 0x34));
                    /* try { // try from 085ecb31 to 085ecb35 has its CatchHandler @ 085ecb53 */
  std::
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  ::end((map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
         *)&local_10);
  *(undefined4 *)(this + 0x34) = local_10;
  *(undefined4 *)(this + 0x38) = 0;
  return;
}
```
