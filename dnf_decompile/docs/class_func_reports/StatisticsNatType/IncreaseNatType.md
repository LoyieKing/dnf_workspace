# IncreaseNatType

`_ZN17StatisticsNatType15IncreaseNatTypeEiih`

`StatisticsNatType::IncreaseNatType(int, int, unsigned char)`

| 类 | 地址 |
|---|---|
| `StatisticsNatType` | `0x0860c86c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860c86c  _ZN17StatisticsNatType15IncreaseNatTypeEiih
#           StatisticsNatType::IncreaseNatType(int, int, unsigned char)
# range [0x0860c86c, 0x0860c967]
0860c86c +0x00:  push   %ebp
0860c86d +0x01:  mov    %esp,%ebp
0860c86f +0x03:  push   %ebx
0860c870 +0x04:  sub    $0x54,%esp
0860c873 +0x07:  mov    0x14(%ebp),%eax
0860c876 +0x0a:  mov    %al,-0x3c(%ebp)
0860c879 +0x0d:  mov    0x10(%ebp),%eax
0860c87c +0x10:  mov    %eax,0x8(%esp)
0860c880 +0x14:  mov    0xc(%ebp),%eax
0860c883 +0x17:  mov    %eax,0x4(%esp)
0860c887 +0x1b:  lea    -0x28(%ebp),%eax
0860c88a +0x1e:  mov    %eax,(%esp)
0860c88d +0x21:  call   08610262 <_GLOBAL__I__ZN10StatisticsC2Ev+0x2e0>  ; global constructors keyed to Statistics::Statistics()+0x2e0
0860c892 +0x26:  mov    0x8(%ebp),%edx
0860c895 +0x29:  lea    -0x2c(%ebp),%eax
0860c898 +0x2c:  lea    -0x28(%ebp),%ecx
0860c89b +0x2f:  mov    %ecx,0x8(%esp)
0860c89f +0x33:  mov    %edx,0x4(%esp)
0860c8a3 +0x37:  mov    %eax,(%esp)
0860c8a6 +0x3a:  call   08610ed0 <_GLOBAL__I__ZN10StatisticsC2Ev+0xf4e>  ; global constructors keyed to Statistics::Statistics()+0xf4e
0860c8ab +0x3f:  sub    $0x4,%esp
0860c8ae +0x42:  movl   $0x0,-0x30(%ebp)
0860c8b5 +0x49:  mov    0x8(%ebp),%edx
0860c8b8 +0x4c:  lea    -0x20(%ebp),%eax
0860c8bb +0x4f:  mov    %edx,0x4(%esp)
0860c8bf +0x53:  mov    %eax,(%esp)
0860c8c2 +0x56:  call   08610e4a <_GLOBAL__I__ZN10StatisticsC2Ev+0xec8>  ; global constructors keyed to Statistics::Statistics()+0xec8
0860c8c7 +0x5b:  sub    $0x4,%esp
0860c8ca +0x5e:  lea    -0x20(%ebp),%eax
0860c8cd +0x61:  mov    %eax,0x4(%esp)
0860c8d1 +0x65:  lea    -0x2c(%ebp),%eax
0860c8d4 +0x68:  mov    %eax,(%esp)
0860c8d7 +0x6b:  call   08610e70 <_GLOBAL__I__ZN10StatisticsC2Ev+0xeee>  ; global constructors keyed to Statistics::Statistics()+0xeee
0860c8dc +0x70:  test   %al,%al
0860c8de +0x72:  je     0860c8f3 <+0x87>
0860c8e0 +0x74:  lea    -0x2c(%ebp),%eax
0860c8e3 +0x77:  mov    %eax,(%esp)
0860c8e6 +0x7a:  call   08610ec2 <_GLOBAL__I__ZN10StatisticsC2Ev+0xf40>  ; global constructors keyed to Statistics::Statistics()+0xf40
0860c8eb +0x7f:  mov    0x8(%eax),%eax
0860c8ee +0x82:  mov    %eax,-0x30(%ebp)
0860c8f1 +0x85:  jmp    0860c945 <+0xd9>
0860c8f3 +0x87:  movl   $0x8,(%esp)
0860c8fa +0x8e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0860c8ff +0x93:  mov    %eax,%ebx
0860c901 +0x95:  mov    %ebx,%eax
0860c903 +0x97:  mov    %eax,(%esp)
0860c906 +0x9a:  call   08610294 <_GLOBAL__I__ZN10StatisticsC2Ev+0x312>  ; global constructors keyed to Statistics::Statistics()+0x312
0860c90b +0x9f:  mov    %ebx,%eax
0860c90d +0xa1:  mov    %eax,-0x30(%ebp)
0860c910 +0xa4:  lea    -0x30(%ebp),%eax
0860c913 +0xa7:  mov    %eax,0x8(%esp)
0860c917 +0xab:  lea    -0x28(%ebp),%eax
0860c91a +0xae:  mov    %eax,0x4(%esp)
0860c91e +0xb2:  lea    -0x14(%ebp),%eax
0860c921 +0xb5:  mov    %eax,(%esp)
0860c924 +0xb8:  call   08610efc <_GLOBAL__I__ZN10StatisticsC2Ev+0xf7a>  ; global constructors keyed to Statistics::Statistics()+0xf7a
0860c929 +0xbd:  mov    0x8(%ebp),%edx
0860c92c +0xc0:  lea    -0x1c(%ebp),%eax
0860c92f +0xc3:  lea    -0x14(%ebp),%ecx
0860c932 +0xc6:  mov    %ecx,0x8(%esp)
0860c936 +0xca:  mov    %edx,0x4(%esp)
0860c93a +0xce:  mov    %eax,(%esp)
0860c93d +0xd1:  call   08610f34 <_GLOBAL__I__ZN10StatisticsC2Ev+0xfb2>  ; global constructors keyed to Statistics::Statistics()+0xfb2
0860c942 +0xd6:  sub    $0x4,%esp
0860c945 +0xd9:  cmpb   $0x0,-0x3c(%ebp)
0860c949 +0xdd:  je     0860c957 <+0xeb>
0860c94b +0xdf:  mov    -0x30(%ebp),%eax
0860c94e +0xe2:  mov    (%eax),%edx
0860c950 +0xe4:  add    $0x1,%edx
0860c953 +0xe7:  mov    %edx,(%eax)
0860c955 +0xe9:  jmp    0860c963 <+0xf7>
0860c957 +0xeb:  mov    -0x30(%ebp),%eax
0860c95a +0xee:  mov    0x4(%eax),%edx
0860c95d +0xf1:  add    $0x1,%edx
0860c960 +0xf4:  mov    %edx,0x4(%eax)
0860c963 +0xf7:  mov    -0x4(%ebp),%ebx
0860c966 +0xfa:  leave
0860c967 +0xfb:  ret
```

## 反编译 C

```c
// StatisticsNatType::IncreaseNatType @ 0x860c86c

/* StatisticsNatType::IncreaseNatType(int, int, unsigned char) */

void __thiscall
StatisticsNatType::IncreaseNatType(StatisticsNatType *this,int param_1,int param_2,uchar param_3)

{
  char cVar1;
  int iVar2;
  RESULT_COUNT *this_00;
  RESULT_COUNT *local_34;
  NAT_TYPE_PEER_TO_PEER local_30 [4];
  NAT_TYPE_PEER_TO_PEER local_2c [8];
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  local_24 [4];
  pair local_20 [8];
  pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>
  local_18 [16];
  
  NAT_TYPE_PEER_TO_PEER::NAT_TYPE_PEER_TO_PEER(local_2c,param_1,param_2);
  std::
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  ::find(local_30);
  local_34 = (RESULT_COUNT *)0x0;
  std::
  map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
  ::end(local_24);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
          ::operator!=((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                        *)local_30,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    this_00 = operator_new(8);
    RESULT_COUNT::RESULT_COUNT(this_00);
    local_34 = this_00;
    std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>::
    pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER&,StatisticsNatType::RESULT_COUNT*&>
              (local_18,local_2c,&local_34);
    std::
    map<StatisticsNatType::NAT_TYPE_PEER_TO_PEER,StatisticsNatType::RESULT_COUNT*,std::less<StatisticsNatType::NAT_TYPE_PEER_TO_PEER>,std::allocator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>>
    ::insert(local_20);
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
            ::operator->((_Rb_tree_iterator<std::pair<StatisticsNatType::NAT_TYPE_PEER_TO_PEER_const,StatisticsNatType::RESULT_COUNT*>>
                          *)local_30);
    local_34 = *(RESULT_COUNT **)(iVar2 + 8);
  }
  if (param_3 == '\0') {
    *(int *)(local_34 + 4) = *(int *)(local_34 + 4) + 1;
  }
  else {
    *(int *)local_34 = *(int *)local_34 + 1;
  }
  return;
}
```
