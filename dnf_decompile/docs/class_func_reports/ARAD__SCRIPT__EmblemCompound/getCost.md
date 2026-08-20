# getCost

`_ZN4ARAD6SCRIPT14EmblemCompound7getCostEi`

`ARAD::SCRIPT::EmblemCompound::getCost(int)`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::EmblemCompound` | `0x088b19b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b19b0  _ZN4ARAD6SCRIPT14EmblemCompound7getCostEi
#           ARAD::SCRIPT::EmblemCompound::getCost(int)
# range [0x088b19b0, 0x088b1a13]
088b19b0 +0x00:  push   %ebp
088b19b1 +0x01:  mov    %esp,%ebp
088b19b3 +0x03:  sub    $0x28,%esp
088b19b6 +0x06:  mov    0x8(%ebp),%edx
088b19b9 +0x09:  lea    -0x10(%ebp),%eax
088b19bc +0x0c:  lea    0xc(%ebp),%ecx
088b19bf +0x0f:  mov    %ecx,0x8(%esp)
088b19c3 +0x13:  mov    %edx,0x4(%esp)
088b19c7 +0x17:  mov    %eax,(%esp)
088b19ca +0x1a:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
088b19cf +0x1f:  sub    $0x4,%esp
088b19d2 +0x22:  mov    0x8(%ebp),%edx
088b19d5 +0x25:  lea    -0xc(%ebp),%eax
088b19d8 +0x28:  mov    %edx,0x4(%esp)
088b19dc +0x2c:  mov    %eax,(%esp)
088b19df +0x2f:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
088b19e4 +0x34:  sub    $0x4,%esp
088b19e7 +0x37:  lea    -0xc(%ebp),%eax
088b19ea +0x3a:  mov    %eax,0x4(%esp)
088b19ee +0x3e:  lea    -0x10(%ebp),%eax
088b19f1 +0x41:  mov    %eax,(%esp)
088b19f4 +0x44:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
088b19f9 +0x49:  test   %al,%al
088b19fb +0x4b:  je     088b1a0d <+0x5d>
088b19fd +0x4d:  lea    -0x10(%ebp),%eax
088b1a00 +0x50:  mov    %eax,(%esp)
088b1a03 +0x53:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
088b1a08 +0x58:  mov    0x4(%eax),%eax
088b1a0b +0x5b:  jmp    088b1a12 <+0x62>
088b1a0d +0x5d:  mov    $0xffffffff,%eax
088b1a12 +0x62:  leave
088b1a13 +0x63:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::EmblemCompound::getCost @ 0x88b19b0

/* ARAD::SCRIPT::EmblemCompound::getCost(int) */

undefined4 ARAD::SCRIPT::EmblemCompound::getCost(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
