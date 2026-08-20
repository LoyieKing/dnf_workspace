# UnRegistTempPeriod

`_ZN13user_creature12CCreatureMgr18UnRegistTempPeriodEi`

`user_creature::CCreatureMgr::UnRegistTempPeriod(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833d962` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833d962  _ZN13user_creature12CCreatureMgr18UnRegistTempPeriodEi
#           user_creature::CCreatureMgr::UnRegistTempPeriod(int)
# range [0x0833d962, 0x0833d9d7]
0833d962 +0x00:  push   %ebp
0833d963 +0x01:  mov    %esp,%ebp
0833d965 +0x03:  sub    $0x28,%esp
0833d968 +0x06:  mov    0x8(%ebp),%eax
0833d96b +0x09:  lea    0x30(%eax),%ecx
0833d96e +0x0c:  lea    -0x10(%ebp),%eax
0833d971 +0x0f:  lea    0xc(%ebp),%edx
0833d974 +0x12:  mov    %edx,0x8(%esp)
0833d978 +0x16:  mov    %ecx,0x4(%esp)
0833d97c +0x1a:  mov    %eax,(%esp)
0833d97f +0x1d:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
0833d984 +0x22:  sub    $0x4,%esp
0833d987 +0x25:  mov    0x8(%ebp),%eax
0833d98a +0x28:  lea    0x30(%eax),%edx
0833d98d +0x2b:  lea    -0xc(%ebp),%eax
0833d990 +0x2e:  mov    %edx,0x4(%esp)
0833d994 +0x32:  mov    %eax,(%esp)
0833d997 +0x35:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0833d99c +0x3a:  sub    $0x4,%esp
0833d99f +0x3d:  lea    -0xc(%ebp),%eax
0833d9a2 +0x40:  mov    %eax,0x4(%esp)
0833d9a6 +0x44:  lea    -0x10(%ebp),%eax
0833d9a9 +0x47:  mov    %eax,(%esp)
0833d9ac +0x4a:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0833d9b1 +0x4f:  test   %al,%al
0833d9b3 +0x51:  je     0833d9d1 <+0x6f>
0833d9b5 +0x53:  mov    0x8(%ebp),%eax
0833d9b8 +0x56:  lea    0x30(%eax),%edx
0833d9bb +0x59:  lea    0xc(%ebp),%eax
0833d9be +0x5c:  mov    %eax,0x4(%esp)
0833d9c2 +0x60:  mov    %edx,(%esp)
0833d9c5 +0x63:  call   082fa9b0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x7e2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x7e2
0833d9ca +0x68:  mov    $0x1,%eax
0833d9cf +0x6d:  jmp    0833d9d6 <+0x74>
0833d9d1 +0x6f:  mov    $0x0,%eax
0833d9d6 +0x74:  leave
0833d9d7 +0x75:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::UnRegistTempPeriod @ 0x833d962

/* user_creature::CCreatureMgr::UnRegistTempPeriod(int) */

bool user_creature::CCreatureMgr::UnRegistTempPeriod(int param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::erase
              ((int *)(param_1 + 0x30));
  }
  return cVar1 != '\0';
}
```
