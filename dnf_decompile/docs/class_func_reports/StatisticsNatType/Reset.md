# Reset

`_ZN17StatisticsNatType5ResetEv`

`StatisticsNatType::Reset()`

| 类 | 地址 |
|---|---|
| `StatisticsNatType` | `0x0860c7da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860c7da  _ZN17StatisticsNatType5ResetEv
#           StatisticsNatType::Reset()
# range [0x0860c7da, 0x0860c86b]
0860c7da +0x00:  push   %ebp
0860c7db +0x01:  mov    %esp,%ebp
0860c7dd +0x03:  sub    $0x28,%esp
0860c7e0 +0x06:  mov    0x8(%ebp),%edx
0860c7e3 +0x09:  lea    -0x18(%ebp),%eax
0860c7e6 +0x0c:  mov    %edx,0x4(%esp)
0860c7ea +0x10:  mov    %eax,(%esp)
0860c7ed +0x13:  call   08610e24 <_GLOBAL__I__ZN10StatisticsC2Ev+0xea2>  ; global constructors keyed to Statistics::Statistics()+0xea2
0860c7f2 +0x18:  sub    $0x4,%esp
0860c7f5 +0x1b:  jmp    0860c83e <+0x64>
0860c7f7 +0x1d:  lea    -0x18(%ebp),%eax
0860c7fa +0x20:  mov    %eax,(%esp)
0860c7fd +0x23:  call   08610ec2 <_GLOBAL__I__ZN10StatisticsC2Ev+0xf40>  ; global constructors keyed to Statistics::Statistics()+0xf40
0860c802 +0x28:  mov    0x8(%eax),%eax
0860c805 +0x2b:  mov    %eax,-0xc(%ebp)
0860c808 +0x2e:  cmpl   $0x0,-0xc(%ebp)
0860c80c +0x32:  je     0860c821 <+0x47>
0860c80e +0x34:  mov    -0xc(%ebp),%eax
0860c811 +0x37:  movl   $0x0,0x4(%eax)
0860c818 +0x3e:  mov    -0xc(%ebp),%eax
0860c81b +0x41:  movl   $0x0,(%eax)
0860c821 +0x47:  lea    -0x10(%ebp),%eax
0860c824 +0x4a:  movl   $0x0,0x8(%esp)
0860c82c +0x52:  lea    -0x18(%ebp),%edx
0860c82f +0x55:  mov    %edx,0x4(%esp)
0860c833 +0x59:  mov    %eax,(%esp)
0860c836 +0x5c:  call   08610e84 <_GLOBAL__I__ZN10StatisticsC2Ev+0xf02>  ; global constructors keyed to Statistics::Statistics()+0xf02
0860c83b +0x61:  sub    $0x4,%esp
0860c83e +0x64:  mov    0x8(%ebp),%edx
0860c841 +0x67:  lea    -0x14(%ebp),%eax
0860c844 +0x6a:  mov    %edx,0x4(%esp)
0860c848 +0x6e:  mov    %eax,(%esp)
0860c84b +0x71:  call   08610e4a <_GLOBAL__I__ZN10StatisticsC2Ev+0xec8>  ; global constructors keyed to Statistics::Statistics()+0xec8
0860c850 +0x76:  sub    $0x4,%esp
0860c853 +0x79:  lea    -0x14(%ebp),%eax
0860c856 +0x7c:  mov    %eax,0x4(%esp)
0860c85a +0x80:  lea    -0x18(%ebp),%eax
0860c85d +0x83:  mov    %eax,(%esp)
0860c860 +0x86:  call   08610e70 <_GLOBAL__I__ZN10StatisticsC2Ev+0xeee>  ; global constructors keyed to Statistics::Statistics()+0xeee
0860c865 +0x8b:  test   %al,%al
0860c867 +0x8d:  jne    0860c7f7 <+0x1d>
0860c869 +0x8f:  leave
0860c86a +0x90:  ret
0860c86b +0x91:  nop
```

## 反编译 C

```c
// StatisticsNatType::Reset @ 0x860c7da

/* StatisticsNatType::Reset() */

void StatisticsNatType::Reset(void)

{
  char cVar1;
  int iVar2;
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  local_1c [4];
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
  local_14 [4];
  undefined4 *local_10;
  
  std::
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
            ::operator!=((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                          *)local_1c,(_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
            ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                          *)local_1c);
    local_10 = *(undefined4 **)(iVar2 + 8);
    if (local_10 != (undefined4 *)0x0) {
      local_10[1] = 0;
      *local_10 = 0;
    }
    std::
    _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
    ::operator++(local_14,(int)local_1c);
  }
  return;
}
```
