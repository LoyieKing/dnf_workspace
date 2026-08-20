# getEmblemRecharge

`_ZN4ARAD6SCRIPT14AvatarRecharge17getEmblemRechargeEi`

`ARAD::SCRIPT::AvatarRecharge::getEmblemRecharge(int)`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarRecharge` | `0x088b132a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b132a  _ZN4ARAD6SCRIPT14AvatarRecharge17getEmblemRechargeEi
#           ARAD::SCRIPT::AvatarRecharge::getEmblemRecharge(int)
# range [0x088b132a, 0x088b13a5]
088b132a +0x00:  push   %ebp
088b132b +0x01:  mov    %esp,%ebp
088b132d +0x03:  sub    $0x38,%esp
088b1330 +0x06:  lea    -0x10(%ebp),%eax
088b1333 +0x09:  mov    %eax,(%esp)
088b1336 +0x0c:  call   080fa898 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x10a4>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x10a4
088b133b +0x11:  mov    0x8(%ebp),%eax
088b133e +0x14:  lea    0x1c(%eax),%ecx
088b1341 +0x17:  lea    -0x1c(%ebp),%eax
088b1344 +0x1a:  lea    0xc(%ebp),%edx
088b1347 +0x1d:  mov    %edx,0x8(%esp)
088b134b +0x21:  mov    %ecx,0x4(%esp)
088b134f +0x25:  mov    %eax,(%esp)
088b1352 +0x28:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
088b1357 +0x2d:  sub    $0x4,%esp
088b135a +0x30:  mov    -0x1c(%ebp),%eax
088b135d +0x33:  mov    %eax,-0x10(%ebp)
088b1360 +0x36:  mov    0x8(%ebp),%eax
088b1363 +0x39:  lea    0x1c(%eax),%edx
088b1366 +0x3c:  lea    -0xc(%ebp),%eax
088b1369 +0x3f:  mov    %edx,0x4(%esp)
088b136d +0x43:  mov    %eax,(%esp)
088b1370 +0x46:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
088b1375 +0x4b:  sub    $0x4,%esp
088b1378 +0x4e:  lea    -0xc(%ebp),%eax
088b137b +0x51:  mov    %eax,0x4(%esp)
088b137f +0x55:  lea    -0x10(%ebp),%eax
088b1382 +0x58:  mov    %eax,(%esp)
088b1385 +0x5b:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
088b138a +0x60:  test   %al,%al
088b138c +0x62:  je     088b139e <+0x74>
088b138e +0x64:  lea    -0x10(%ebp),%eax
088b1391 +0x67:  mov    %eax,(%esp)
088b1394 +0x6a:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
088b1399 +0x6f:  mov    0x4(%eax),%eax
088b139c +0x72:  jmp    088b13a3 <+0x79>
088b139e +0x74:  mov    $0x0,%eax
088b13a3 +0x79:  leave
088b13a4 +0x7a:  ret
088b13a5 +0x7b:  nop
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarRecharge::getEmblemRecharge @ 0x88b132a

/* ARAD::SCRIPT::AvatarRecharge::getEmblemRecharge(int) */

undefined4 ARAD::SCRIPT::AvatarRecharge::getEmblemRecharge(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_20 [3];
  int local_14;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::_Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find(local_20);
  local_14 = local_20[0];
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_14,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
