# ~StatisticsNatType

`_ZN17StatisticsNatTypeD1Ev`

`StatisticsNatType::~StatisticsNatType()`

| 类 | 地址 |
|---|---|
| `StatisticsNatType` | `0x0860c718` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860c718  _ZN17StatisticsNatTypeD1Ev
#           StatisticsNatType::~StatisticsNatType()
# range [0x0860c718, 0x0860c7d9]
0860c718 +0x00:  push   %ebp
0860c719 +0x01:  mov    %esp,%ebp
0860c71b +0x03:  push   %esi
0860c71c +0x04:  push   %ebx
0860c71d +0x05:  sub    $0x20,%esp
0860c720 +0x08:  mov    0x8(%ebp),%edx
0860c723 +0x0b:  lea    -0x18(%ebp),%eax
0860c726 +0x0e:  mov    %edx,0x4(%esp)
0860c72a +0x12:  mov    %eax,(%esp)
0860c72d +0x15:  call   08610e24 <_GLOBAL__I__ZN10StatisticsC2Ev+0xea2>  ; global constructors keyed to Statistics::Statistics()+0xea2
0860c732 +0x1a:  sub    $0x4,%esp
0860c735 +0x1d:  jmp    0860c77d <+0x65>
0860c737 +0x1f:  lea    -0x18(%ebp),%eax
0860c73a +0x22:  mov    %eax,(%esp)
0860c73d +0x25:  call   08610ec2 <_GLOBAL__I__ZN10StatisticsC2Ev+0xf40>  ; global constructors keyed to Statistics::Statistics()+0xf40
0860c742 +0x2a:  mov    0x8(%eax),%eax
0860c745 +0x2d:  mov    %eax,-0xc(%ebp)
0860c748 +0x30:  cmpl   $0x0,-0xc(%ebp)
0860c74c +0x34:  je     0860c760 <+0x48>
0860c74e +0x36:  mov    -0xc(%ebp),%eax
0860c751 +0x39:  mov    %eax,(%esp)
0860c754 +0x3c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0860c759 +0x41:  movl   $0x0,-0xc(%ebp)
0860c760 +0x48:  lea    -0x10(%ebp),%eax
0860c763 +0x4b:  movl   $0x0,0x8(%esp)
0860c76b +0x53:  lea    -0x18(%ebp),%edx
0860c76e +0x56:  mov    %edx,0x4(%esp)
0860c772 +0x5a:  mov    %eax,(%esp)
0860c775 +0x5d:  call   08610e84 <_GLOBAL__I__ZN10StatisticsC2Ev+0xf02>  ; global constructors keyed to Statistics::Statistics()+0xf02
0860c77a +0x62:  sub    $0x4,%esp
0860c77d +0x65:  mov    0x8(%ebp),%edx
0860c780 +0x68:  lea    -0x14(%ebp),%eax
0860c783 +0x6b:  mov    %edx,0x4(%esp)
0860c787 +0x6f:  mov    %eax,(%esp)
0860c78a +0x72:  call   08610e4a <_GLOBAL__I__ZN10StatisticsC2Ev+0xec8>  ; global constructors keyed to Statistics::Statistics()+0xec8
0860c78f +0x77:  sub    $0x4,%esp
0860c792 +0x7a:  lea    -0x14(%ebp),%eax
0860c795 +0x7d:  mov    %eax,0x4(%esp)
0860c799 +0x81:  lea    -0x18(%ebp),%eax
0860c79c +0x84:  mov    %eax,(%esp)
0860c79f +0x87:  call   08610e70 <_GLOBAL__I__ZN10StatisticsC2Ev+0xeee>  ; global constructors keyed to Statistics::Statistics()+0xeee
0860c7a4 +0x8c:  test   %al,%al
0860c7a6 +0x8e:  jne    0860c737 <+0x1f>
0860c7a8 +0x90:  jmp    0860c7c5 <+0xad>
0860c7aa +0x92:  mov    %edx,%ebx
0860c7ac +0x94:  mov    %eax,%esi
0860c7ae +0x96:  mov    0x8(%ebp),%eax
0860c7b1 +0x99:  mov    %eax,(%esp)
0860c7b4 +0x9c:  call   086107d8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x856>  ; global constructors keyed to Statistics::Statistics()+0x856
0860c7b9 +0xa1:  mov    %esi,%eax
0860c7bb +0xa3:  mov    %ebx,%edx
0860c7bd +0xa5:  mov    %eax,(%esp)
0860c7c0 +0xa8:  call   08ae3750 <_Unwind_Resume>
0860c7c5 +0xad:  mov    0x8(%ebp),%eax
0860c7c8 +0xb0:  mov    %eax,(%esp)
0860c7cb +0xb3:  call   086107d8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x856>  ; global constructors keyed to Statistics::Statistics()+0x856
0860c7d0 +0xb8:  lea    -0x8(%ebp),%esp
0860c7d3 +0xbb:  add    $0x0,%esp
0860c7d6 +0xbe:  pop    %ebx
0860c7d7 +0xbf:  pop    %esi
0860c7d8 +0xc0:  pop    %ebp
0860c7d9 +0xc1:  ret
```

## 反编译 C

```c
// StatisticsNatType::~StatisticsNatType @ 0x860c718

/* StatisticsNatType::~StatisticsNatType() */

void __thiscall StatisticsNatType::~StatisticsNatType(StatisticsNatType *this)

{
  char cVar1;
  int iVar2;
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  local_1c [4];
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
  local_14 [4];
  void *local_10;
  
                    /* try { // try from 0860c72d to 0860c78e has its CatchHandler @ 0860c7aa */
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
    local_10 = *(void **)(iVar2 + 8);
    if (local_10 != (void *)0x0) {
      operator_delete(local_10);
      local_10 = (void *)0x0;
    }
    std::
    _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
    ::operator++(local_14,(int)local_1c);
  }
  std::
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  ::~map((map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
          *)this);
  return;
}
```
