# UpdateUserPlayTime

`_ZN25CUserPlayTimeStatisticMgr18UpdateUserPlayTimeEji`

`CUserPlayTimeStatisticMgr::UpdateUserPlayTime(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `CUserPlayTimeStatisticMgr` | `0x0860cc38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860cc38  _ZN25CUserPlayTimeStatisticMgr18UpdateUserPlayTimeEji
#           CUserPlayTimeStatisticMgr::UpdateUserPlayTime(unsigned int, int)
# range [0x0860cc38, 0x0860cd13]
0860cc38 +0x00:  push   %ebp
0860cc39 +0x01:  mov    %esp,%ebp
0860cc3b +0x03:  sub    $0x58,%esp
0860cc3e +0x06:  mov    0x8(%ebp),%edx
0860cc41 +0x09:  lea    -0x34(%ebp),%eax
0860cc44 +0x0c:  lea    0xc(%ebp),%ecx
0860cc47 +0x0f:  mov    %ecx,0x8(%esp)
0860cc4b +0x13:  mov    %edx,0x4(%esp)
0860cc4f +0x17:  mov    %eax,(%esp)
0860cc52 +0x1a:  call   08610f84 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1002>  ; global constructors keyed to Statistics::Statistics()+0x1002
0860cc57 +0x1f:  sub    $0x4,%esp
0860cc5a +0x22:  mov    0x8(%ebp),%edx
0860cc5d +0x25:  lea    -0x30(%ebp),%eax
0860cc60 +0x28:  mov    %edx,0x4(%esp)
0860cc64 +0x2c:  mov    %eax,(%esp)
0860cc67 +0x2f:  call   08610fb0 <_GLOBAL__I__ZN10StatisticsC2Ev+0x102e>  ; global constructors keyed to Statistics::Statistics()+0x102e
0860cc6c +0x34:  sub    $0x4,%esp
0860cc6f +0x37:  lea    -0x30(%ebp),%eax
0860cc72 +0x3a:  mov    %eax,0x4(%esp)
0860cc76 +0x3e:  lea    -0x34(%ebp),%eax
0860cc79 +0x41:  mov    %eax,(%esp)
0860cc7c +0x44:  call   08610fd6 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1054>  ; global constructors keyed to Statistics::Statistics()+0x1054
0860cc81 +0x49:  test   %al,%al
0860cc83 +0x4b:  je     0860ccb6 <+0x7e>
0860cc85 +0x4d:  lea    -0x34(%ebp),%eax
0860cc88 +0x50:  mov    %eax,(%esp)
0860cc8b +0x53:  call   08610fea <_GLOBAL__I__ZN10StatisticsC2Ev+0x1068>  ; global constructors keyed to Statistics::Statistics()+0x1068
0860cc90 +0x58:  add    $0x4,%eax
0860cc93 +0x5b:  mov    %eax,-0xc(%ebp)
0860cc96 +0x5e:  mov    -0xc(%ebp),%eax
0860cc99 +0x61:  mov    (%eax),%eax
0860cc9b +0x63:  mov    %eax,%edx
0860cc9d +0x65:  add    0x10(%ebp),%edx
0860cca0 +0x68:  mov    -0xc(%ebp),%eax
0860cca3 +0x6b:  mov    %edx,(%eax)
0860cca5 +0x6d:  mov    -0xc(%ebp),%eax
0860cca8 +0x70:  mov    0x4(%eax),%eax
0860ccab +0x73:  lea    0x1(%eax),%edx
0860ccae +0x76:  mov    -0xc(%ebp),%eax
0860ccb1 +0x79:  mov    %edx,0x4(%eax)
0860ccb4 +0x7c:  jmp    0860cd0d <+0xd5>
0860ccb6 +0x7e:  movl   $0x1,-0x38(%ebp)
0860ccbd +0x85:  mov    0x10(%ebp),%eax
0860ccc0 +0x88:  mov    %eax,-0x3c(%ebp)
0860ccc3 +0x8b:  lea    -0x18(%ebp),%eax
0860ccc6 +0x8e:  lea    -0x3c(%ebp),%edx
0860ccc9 +0x91:  mov    %edx,0x8(%esp)
0860cccd +0x95:  lea    0xc(%ebp),%edx
0860ccd0 +0x98:  mov    %edx,0x4(%esp)
0860ccd4 +0x9c:  mov    %eax,(%esp)
0860ccd7 +0x9f:  call   08610ff7 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1075>  ; global constructors keyed to Statistics::Statistics()+0x1075
0860ccdc +0xa4:  sub    $0x4,%esp
0860ccdf +0xa7:  lea    -0x18(%ebp),%eax
0860cce2 +0xaa:  mov    %eax,0x4(%esp)
0860cce6 +0xae:  lea    -0x24(%ebp),%eax
0860cce9 +0xb1:  mov    %eax,(%esp)
0860ccec +0xb4:  call   08611036 <_GLOBAL__I__ZN10StatisticsC2Ev+0x10b4>  ; global constructors keyed to Statistics::Statistics()+0x10b4
0860ccf1 +0xb9:  mov    0x8(%ebp),%edx
0860ccf4 +0xbc:  lea    -0x2c(%ebp),%eax
0860ccf7 +0xbf:  lea    -0x24(%ebp),%ecx
0860ccfa +0xc2:  mov    %ecx,0x8(%esp)
0860ccfe +0xc6:  mov    %edx,0x4(%esp)
0860cd02 +0xca:  mov    %eax,(%esp)
0860cd05 +0xcd:  call   0861106c <_GLOBAL__I__ZN10StatisticsC2Ev+0x10ea>  ; global constructors keyed to Statistics::Statistics()+0x10ea
0860cd0a +0xd2:  sub    $0x4,%esp
0860cd0d +0xd5:  mov    $0x1,%eax
0860cd12 +0xda:  leave
0860cd13 +0xdb:  ret
```

## 反编译 C

```c
// CUserPlayTimeStatisticMgr::UpdateUserPlayTime @ 0x860cc38

/* CUserPlayTimeStatisticMgr::UpdateUserPlayTime(unsigned int, int) */

undefined4 __thiscall
CUserPlayTimeStatisticMgr::UpdateUserPlayTime
          (CUserPlayTimeStatisticMgr *this,uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>> local_38 [4];
  map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
  local_34 [4];
  pair local_30 [8];
  pair<unsigned_int_const,stUserPlayInfo_t> local_28 [12];
  uint local_1c [6];
  
  std::
  map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
  ::find((uint *)local_38);
  std::
  map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
  ::end(local_34);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>>::operator!=
                    (local_38,(_Rb_tree_iterator *)local_34);
  if (cVar1 == '\0') {
    std::make_pair<unsigned_int&,stUserPlayInfo_t&>(local_1c,(stUserPlayInfo_t *)&param_1);
    std::pair<unsigned_int_const,stUserPlayInfo_t>::pair<unsigned_int,stUserPlayInfo_t>
              (local_28,(pair *)local_1c);
    std::
    map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
    ::insert(local_30);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>>::operator->
                      (local_38);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + param_2;
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  return 1;
}
```
