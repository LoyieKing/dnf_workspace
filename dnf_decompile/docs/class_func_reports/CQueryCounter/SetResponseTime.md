# SetResponseTime

`_ZN13CQueryCounter15SetResponseTimeEd`

`CQueryCounter::SetResponseTime(double)`

| 类 | 地址 |
|---|---|
| `CQueryCounter` | `0x085ed108` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ed108  _ZN13CQueryCounter15SetResponseTimeEd
#           CQueryCounter::SetResponseTime(double)
# range [0x085ed108, 0x085ed189]
085ed108 +0x00:  push   %ebp
085ed109 +0x01:  mov    %esp,%ebp
085ed10b +0x03:  push   %ebx
085ed10c +0x04:  sub    $0x34,%esp
085ed10f +0x07:  mov    0xc(%ebp),%eax
085ed112 +0x0a:  mov    %eax,-0x20(%ebp)
085ed115 +0x0d:  mov    0x10(%ebp),%eax
085ed118 +0x10:  mov    %eax,-0x1c(%ebp)
085ed11b +0x13:  mov    0x8(%ebp),%eax
085ed11e +0x16:  lea    0x4(%eax),%edx
085ed121 +0x19:  lea    -0xc(%ebp),%eax
085ed124 +0x1c:  mov    %edx,0x4(%esp)
085ed128 +0x20:  mov    %eax,(%esp)
085ed12b +0x23:  call   0845142c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4042>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4042
085ed130 +0x28:  sub    $0x4,%esp
085ed133 +0x2b:  mov    0x8(%ebp),%eax
085ed136 +0x2e:  lea    0x34(%eax),%edx
085ed139 +0x31:  lea    -0xc(%ebp),%eax
085ed13c +0x34:  mov    %eax,0x4(%esp)
085ed140 +0x38:  mov    %edx,(%esp)
085ed143 +0x3b:  call   08451452 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4068>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4068
085ed148 +0x40:  test   %al,%al
085ed14a +0x42:  je     085ed184 <+0x7c>
085ed14c +0x44:  mov    0x8(%ebp),%eax
085ed14f +0x47:  add    $0x34,%eax
085ed152 +0x4a:  mov    %eax,(%esp)
085ed155 +0x4d:  call   084514a4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x40ba>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x40ba
085ed15a +0x52:  fldl   0x8(%eax)
085ed15d +0x55:  faddl  -0x20(%ebp)
085ed160 +0x58:  fstpl  0x8(%eax)
085ed163 +0x5b:  mov    0x8(%ebp),%eax
085ed166 +0x5e:  lea    0x4(%eax),%edx
085ed169 +0x61:  mov    0x8(%ebp),%ebx
085ed16c +0x64:  lea    -0x24(%ebp),%eax
085ed16f +0x67:  mov    %edx,0x4(%esp)
085ed173 +0x6b:  mov    %eax,(%esp)
085ed176 +0x6e:  call   0845142c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4042>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4042
085ed17b +0x73:  sub    $0x4,%esp
085ed17e +0x76:  mov    -0x24(%ebp),%eax
085ed181 +0x79:  mov    %eax,0x34(%ebx)
085ed184 +0x7c:  mov    -0x4(%ebp),%ebx
085ed187 +0x7f:  leave
085ed188 +0x80:  ret
085ed189 +0x81:  nop
```

## 反编译 C

```c
// CQueryCounter::SetResponseTime @ 0x85ed108

/* CQueryCounter::SetResponseTime(double) */

void CQueryCounter::SetResponseTime(double param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_stack_0000000c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  local_10 [8];
  
  local_24 = param_1._4_4_;
  uStack_20 = in_stack_0000000c;
  std::
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)
                     (param_1._0_4_ + 0x34),(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)
                       (param_1._0_4_ + 0x34));
    *(double *)(iVar2 + 8) = *(double *)(iVar2 + 8) + (double)CONCAT44(uStack_20,local_24);
    std::
    map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
    ::end((map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
           *)&local_28);
    *(undefined4 *)(param_1._0_4_ + 0x34) = local_28;
  }
  return;
}
```
