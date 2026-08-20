# Reset

`_ZN13CQueryCounter5ResetEv`

`CQueryCounter::Reset()`

| 类 | 地址 |
|---|---|
| `CQueryCounter` | `0x085ecbd6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ecbd6  _ZN13CQueryCounter5ResetEv
#           CQueryCounter::Reset()
# range [0x085ecbd6, 0x085ecc5d]
085ecbd6 +0x00:  push   %ebp
085ecbd7 +0x01:  mov    %esp,%ebp
085ecbd9 +0x03:  sub    $0x28,%esp
085ecbdc +0x06:  mov    0x8(%ebp),%eax
085ecbdf +0x09:  lea    0x4(%eax),%edx
085ecbe2 +0x0c:  lea    -0x10(%ebp),%eax
085ecbe5 +0x0f:  mov    %edx,0x4(%esp)
085ecbe9 +0x13:  mov    %eax,(%esp)
085ecbec +0x16:  call   08451406 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x401c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x401c
085ecbf1 +0x1b:  sub    $0x4,%esp
085ecbf4 +0x1e:  jmp    085ecc23 <+0x4d>
085ecbf6 +0x20:  lea    -0x10(%ebp),%eax
085ecbf9 +0x23:  mov    %eax,(%esp)
085ecbfc +0x26:  call   084514a4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x40ba>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x40ba
085ecc01 +0x2b:  movl   $0x0,0x4(%eax)
085ecc08 +0x32:  lea    -0x10(%ebp),%eax
085ecc0b +0x35:  mov    %eax,(%esp)
085ecc0e +0x38:  call   084514a4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x40ba>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x40ba
085ecc13 +0x3d:  fldz
085ecc15 +0x3f:  fstpl  0x8(%eax)
085ecc18 +0x42:  lea    -0x10(%ebp),%eax
085ecc1b +0x45:  mov    %eax,(%esp)
085ecc1e +0x48:  call   085ed94c <_GLOBAL__I_query_table+0x217>  ; global constructors keyed to query_table+0x217
085ecc23 +0x4d:  mov    0x8(%ebp),%eax
085ecc26 +0x50:  lea    0x4(%eax),%edx
085ecc29 +0x53:  lea    -0xc(%ebp),%eax
085ecc2c +0x56:  mov    %edx,0x4(%esp)
085ecc30 +0x5a:  mov    %eax,(%esp)
085ecc33 +0x5d:  call   0845142c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4042>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4042
085ecc38 +0x62:  sub    $0x4,%esp
085ecc3b +0x65:  lea    -0xc(%ebp),%eax
085ecc3e +0x68:  mov    %eax,0x4(%esp)
085ecc42 +0x6c:  lea    -0x10(%ebp),%eax
085ecc45 +0x6f:  mov    %eax,(%esp)
085ecc48 +0x72:  call   08451452 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4068>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4068
085ecc4d +0x77:  test   %al,%al
085ecc4f +0x79:  jne    085ecbf6 <+0x20>
085ecc51 +0x7b:  mov    0x8(%ebp),%eax
085ecc54 +0x7e:  movl   $0x0,0x38(%eax)
085ecc5b +0x85:  leave
085ecc5c +0x86:  ret
085ecc5d +0x87:  nop
```

## 反编译 C

```c
// CQueryCounter::Reset @ 0x85ecbd6

/* CQueryCounter::Reset() */

void __thiscall CQueryCounter::Reset(CQueryCounter *this)

{
  char cVar1;
  int iVar2;
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  local_14 [4];
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  local_10 [12];
  
  std::
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  ::begin(local_14);
  while( true ) {
    std::
    map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)local_14
                       ,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)local_14
                      );
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)local_14
                      );
    *(undefined8 *)(iVar2 + 8) = 0;
    std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)local_14);
  }
  *(undefined4 *)(this + 0x38) = 0;
  return;
}
```
