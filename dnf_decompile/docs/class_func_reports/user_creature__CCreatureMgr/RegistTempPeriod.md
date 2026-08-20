# RegistTempPeriod

`_ZN13user_creature12CCreatureMgr16RegistTempPeriodEiii`

`user_creature::CCreatureMgr::RegistTempPeriod(int, int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833d7de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833d7de  _ZN13user_creature12CCreatureMgr16RegistTempPeriodEiii
#           user_creature::CCreatureMgr::RegistTempPeriod(int, int, int)
# range [0x0833d7de, 0x0833d88b]
0833d7de +0x00:  push   %ebp
0833d7df +0x01:  mov    %esp,%ebp
0833d7e1 +0x03:  sub    $0x38,%esp
0833d7e4 +0x06:  mov    0x8(%ebp),%eax
0833d7e7 +0x09:  lea    0x30(%eax),%ecx
0833d7ea +0x0c:  lea    -0x28(%ebp),%eax
0833d7ed +0x0f:  lea    0xc(%ebp),%edx
0833d7f0 +0x12:  mov    %edx,0x8(%esp)
0833d7f4 +0x16:  mov    %ecx,0x4(%esp)
0833d7f8 +0x1a:  mov    %eax,(%esp)
0833d7fb +0x1d:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0833d800 +0x22:  sub    $0x4,%esp
0833d803 +0x25:  mov    0x8(%ebp),%eax
0833d806 +0x28:  lea    0x30(%eax),%edx
0833d809 +0x2b:  lea    -0x24(%ebp),%eax
0833d80c +0x2e:  mov    %edx,0x4(%esp)
0833d810 +0x32:  mov    %eax,(%esp)
0833d813 +0x35:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0833d818 +0x3a:  sub    $0x4,%esp
0833d81b +0x3d:  lea    -0x24(%ebp),%eax
0833d81e +0x40:  mov    %eax,0x4(%esp)
0833d822 +0x44:  lea    -0x28(%ebp),%eax
0833d825 +0x47:  mov    %eax,(%esp)
0833d828 +0x4a:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0833d82d +0x4f:  test   %al,%al
0833d82f +0x51:  je     0833d838 <+0x5a>
0833d831 +0x53:  mov    $0x0,%eax
0833d836 +0x58:  jmp    0833d88a <+0xac>
0833d838 +0x5a:  lea    -0x10(%ebp),%eax
0833d83b +0x5d:  lea    0x10(%ebp),%edx
0833d83e +0x60:  mov    %edx,0x8(%esp)
0833d842 +0x64:  lea    0xc(%ebp),%edx
0833d845 +0x67:  mov    %edx,0x4(%esp)
0833d849 +0x6b:  mov    %eax,(%esp)
0833d84c +0x6e:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
0833d851 +0x73:  sub    $0x4,%esp
0833d854 +0x76:  lea    -0x10(%ebp),%eax
0833d857 +0x79:  mov    %eax,0x4(%esp)
0833d85b +0x7d:  lea    -0x18(%ebp),%eax
0833d85e +0x80:  mov    %eax,(%esp)
0833d861 +0x83:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
0833d866 +0x88:  mov    0x8(%ebp),%eax
0833d869 +0x8b:  lea    0x30(%eax),%ecx
0833d86c +0x8e:  lea    -0x20(%ebp),%eax
0833d86f +0x91:  lea    -0x18(%ebp),%edx
0833d872 +0x94:  mov    %edx,0x8(%esp)
0833d876 +0x98:  mov    %ecx,0x4(%esp)
0833d87a +0x9c:  mov    %eax,(%esp)
0833d87d +0x9f:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
0833d882 +0xa4:  sub    $0x4,%esp
0833d885 +0xa7:  mov    $0x1,%eax
0833d88a +0xac:  leave
0833d88b +0xad:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::RegistTempPeriod @ 0x833d7de

/* user_creature::CCreatureMgr::RegistTempPeriod(int, int, int) */

bool user_creature::CCreatureMgr::RegistTempPeriod(int param_1,int param_2,int param_3)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<int_const,int>> local_2c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_28 [4];
  pair local_24 [8];
  pair<int_const,int> local_1c [8];
  int local_14 [4];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_2c);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_28);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_2c,(_Rb_tree_iterator *)local_28);
  if (cVar1 == '\0') {
    std::make_pair<int&,int&>(local_14,&param_2);
    std::pair<int_const,int>::pair<int,int>(local_1c,(pair *)local_14);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_24);
  }
  return cVar1 == '\0';
}
```
