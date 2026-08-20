# ~CQueryCounter

`_ZN13CQueryCounterD1Ev`

`CQueryCounter::~CQueryCounter()`

| 类 | 地址 |
|---|---|
| `CQueryCounter` | `0x085ecb8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ecb8a  _ZN13CQueryCounterD1Ev
#           CQueryCounter::~CQueryCounter()
# range [0x085ecb8a, 0x085ecbd5]
085ecb8a +0x00:  push   %ebp
085ecb8b +0x01:  mov    %esp,%ebp
085ecb8d +0x03:  push   %esi
085ecb8e +0x04:  push   %ebx
085ecb8f +0x05:  sub    $0x10,%esp
085ecb92 +0x08:  mov    0x8(%ebp),%eax
085ecb95 +0x0b:  add    $0x1c,%eax
085ecb98 +0x0e:  mov    %eax,(%esp)
085ecb9b +0x11:  call   085ed822 <_GLOBAL__I_query_table+0xed>  ; global constructors keyed to query_table+0xed
085ecba0 +0x16:  jmp    085ecbc0 <+0x36>
085ecba2 +0x18:  mov    %edx,%ebx
085ecba4 +0x1a:  mov    %eax,%esi
085ecba6 +0x1c:  mov    0x8(%ebp),%eax
085ecba9 +0x1f:  add    $0x4,%eax
085ecbac +0x22:  mov    %eax,(%esp)
085ecbaf +0x25:  call   085ed80e <_GLOBAL__I_query_table+0xd9>  ; global constructors keyed to query_table+0xd9
085ecbb4 +0x2a:  mov    %esi,%eax
085ecbb6 +0x2c:  mov    %ebx,%edx
085ecbb8 +0x2e:  mov    %eax,(%esp)
085ecbbb +0x31:  call   08ae3750 <_Unwind_Resume>
085ecbc0 +0x36:  mov    0x8(%ebp),%eax
085ecbc3 +0x39:  add    $0x4,%eax
085ecbc6 +0x3c:  mov    %eax,(%esp)
085ecbc9 +0x3f:  call   085ed80e <_GLOBAL__I_query_table+0xd9>  ; global constructors keyed to query_table+0xd9
085ecbce +0x44:  add    $0x10,%esp
085ecbd1 +0x47:  pop    %ebx
085ecbd2 +0x48:  pop    %esi
085ecbd3 +0x49:  pop    %ebp
085ecbd4 +0x4a:  ret
085ecbd5 +0x4b:  nop
```

## 反编译 C

```c
// CQueryCounter::~CQueryCounter @ 0x85ecb8a

/* CQueryCounter::~CQueryCounter() */

void __thiscall CQueryCounter::~CQueryCounter(CQueryCounter *this)

{
                    /* try { // try from 085ecb9b to 085ecb9f has its CatchHandler @ 085ecba2 */
  std::
  map<std::string,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>>
  ::~map((map<std::string,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>>>
          *)(this + 0x1c));
  std::
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  ::~map((map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
          *)(this + 4));
  return;
}
```
