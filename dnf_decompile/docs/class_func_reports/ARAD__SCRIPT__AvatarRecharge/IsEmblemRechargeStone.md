# IsEmblemRechargeStone

`_ZN4ARAD6SCRIPT14AvatarRecharge21IsEmblemRechargeStoneEi`

`ARAD::SCRIPT::AvatarRecharge::IsEmblemRechargeStone(int)`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarRecharge` | `0x088b13a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b13a6  _ZN4ARAD6SCRIPT14AvatarRecharge21IsEmblemRechargeStoneEi
#           ARAD::SCRIPT::AvatarRecharge::IsEmblemRechargeStone(int)
# range [0x088b13a6, 0x088b1407]
088b13a6 +0x00:  push   %ebp
088b13a7 +0x01:  mov    %esp,%ebp
088b13a9 +0x03:  sub    $0x28,%esp
088b13ac +0x06:  mov    0x8(%ebp),%eax
088b13af +0x09:  lea    0x4(%eax),%edx
088b13b2 +0x0c:  lea    -0x10(%ebp),%eax
088b13b5 +0x0f:  mov    %edx,0x4(%esp)
088b13b9 +0x13:  mov    %eax,(%esp)
088b13bc +0x16:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
088b13c1 +0x1b:  sub    $0x4,%esp
088b13c4 +0x1e:  mov    0x8(%ebp),%eax
088b13c7 +0x21:  lea    0x4(%eax),%ecx
088b13ca +0x24:  lea    -0xc(%ebp),%eax
088b13cd +0x27:  lea    0xc(%ebp),%edx
088b13d0 +0x2a:  mov    %edx,0x8(%esp)
088b13d4 +0x2e:  mov    %ecx,0x4(%esp)
088b13d8 +0x32:  mov    %eax,(%esp)
088b13db +0x35:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
088b13e0 +0x3a:  sub    $0x4,%esp
088b13e3 +0x3d:  lea    -0x10(%ebp),%eax
088b13e6 +0x40:  mov    %eax,0x4(%esp)
088b13ea +0x44:  lea    -0xc(%ebp),%eax
088b13ed +0x47:  mov    %eax,(%esp)
088b13f0 +0x4a:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
088b13f5 +0x4f:  test   %al,%al
088b13f7 +0x51:  je     088b1400 <+0x5a>
088b13f9 +0x53:  mov    $0x1,%eax
088b13fe +0x58:  jmp    088b1405 <+0x5f>
088b1400 +0x5a:  mov    $0x0,%eax
088b1405 +0x5f:  leave
088b1406 +0x60:  ret
088b1407 +0x61:  nop
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarRecharge::IsEmblemRechargeStone @ 0x88b13a6

/* ARAD::SCRIPT::AvatarRecharge::IsEmblemRechargeStone(int) */

bool ARAD::SCRIPT::AvatarRecharge::IsEmblemRechargeStone(int param_1)

{
  char cVar1;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_14 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_10,(_Rb_tree_iterator *)local_14);
  return cVar1 != '\0';
}
```
