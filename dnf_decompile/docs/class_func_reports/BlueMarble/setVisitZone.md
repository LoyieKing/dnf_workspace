# setVisitZone

`_ZN10BlueMarble12setVisitZoneEi`

`BlueMarble::setVisitZone(int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d7a26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d7a26  _ZN10BlueMarble12setVisitZoneEi
#           BlueMarble::setVisitZone(int)
# range [0x080d7a26, 0x080d7a99]
080d7a26 +0x00:  push   %ebp
080d7a27 +0x01:  mov    %esp,%ebp
080d7a29 +0x03:  sub    $0x28,%esp
080d7a2c +0x06:  mov    0x8(%ebp),%eax
080d7a2f +0x09:  lea    0x20(%eax),%ecx
080d7a32 +0x0c:  lea    -0x18(%ebp),%eax
080d7a35 +0x0f:  lea    0xc(%ebp),%edx
080d7a38 +0x12:  mov    %edx,0x8(%esp)
080d7a3c +0x16:  mov    %ecx,0x4(%esp)
080d7a40 +0x1a:  mov    %eax,(%esp)
080d7a43 +0x1d:  call   080da574 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x711>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x711
080d7a48 +0x22:  sub    $0x4,%esp
080d7a4b +0x25:  mov    0x8(%ebp),%eax
080d7a4e +0x28:  lea    0x20(%eax),%edx
080d7a51 +0x2b:  lea    -0x14(%ebp),%eax
080d7a54 +0x2e:  mov    %edx,0x4(%esp)
080d7a58 +0x32:  mov    %eax,(%esp)
080d7a5b +0x35:  call   080da496 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x633>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x633
080d7a60 +0x3a:  sub    $0x4,%esp
080d7a63 +0x3d:  lea    -0x14(%ebp),%eax
080d7a66 +0x40:  mov    %eax,0x4(%esp)
080d7a6a +0x44:  lea    -0x18(%ebp),%eax
080d7a6d +0x47:  mov    %eax,(%esp)
080d7a70 +0x4a:  call   080da5b2 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x74f>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x74f
080d7a75 +0x4f:  test   %al,%al
080d7a77 +0x51:  je     080d7a98 <+0x72>
080d7a79 +0x53:  mov    0x8(%ebp),%eax
080d7a7c +0x56:  lea    0x20(%eax),%ecx
080d7a7f +0x59:  lea    -0x10(%ebp),%eax
080d7a82 +0x5c:  lea    0xc(%ebp),%edx
080d7a85 +0x5f:  mov    %edx,0x8(%esp)
080d7a89 +0x63:  mov    %ecx,0x4(%esp)
080d7a8d +0x67:  mov    %eax,(%esp)
080d7a90 +0x6a:  call   080da5c6 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x763>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x763
080d7a95 +0x6f:  sub    $0x4,%esp
080d7a98 +0x72:  leave
080d7a99 +0x73:  ret
```

## 反编译 C

```c
// BlueMarble::setVisitZone @ 0x80d7a26

/* BlueMarble::setVisitZone(int) */

void BlueMarble::setVisitZone(int param_1)

{
  char cVar1;
  _Rb_tree_const_iterator<int> local_1c [4];
  set<int,std::less<int>,std::allocator<int>> local_18 [4];
  int local_14 [4];
  
  std::set<int,std::less<int>,std::allocator<int>>::find((int *)local_1c);
  std::set<int,std::less<int>,std::allocator<int>>::end(local_18);
  cVar1 = std::_Rb_tree_const_iterator<int>::operator==
                    (local_1c,(_Rb_tree_const_iterator *)local_18);
  if (cVar1 != '\0') {
    std::set<int,std::less<int>,std::allocator<int>>::insert(local_14);
  }
  return;
}
```
