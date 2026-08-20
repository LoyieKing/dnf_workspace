# getVisitZone

`_ZNK10BlueMarble12getVisitZoneEi`

`BlueMarble::getVisitZone(int) const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d7a9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d7a9a  _ZNK10BlueMarble12getVisitZoneEi
#           BlueMarble::getVisitZone(int) const
# range [0x080d7a9a, 0x080d7afb]
080d7a9a +0x00:  push   %ebp
080d7a9b +0x01:  mov    %esp,%ebp
080d7a9d +0x03:  sub    $0x28,%esp
080d7aa0 +0x06:  mov    0x8(%ebp),%eax
080d7aa3 +0x09:  lea    0x20(%eax),%ecx
080d7aa6 +0x0c:  lea    -0x10(%ebp),%eax
080d7aa9 +0x0f:  lea    0xc(%ebp),%edx
080d7aac +0x12:  mov    %edx,0x8(%esp)
080d7ab0 +0x16:  mov    %ecx,0x4(%esp)
080d7ab4 +0x1a:  mov    %eax,(%esp)
080d7ab7 +0x1d:  call   080da46a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x607>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x607
080d7abc +0x22:  sub    $0x4,%esp
080d7abf +0x25:  mov    0x8(%ebp),%eax
080d7ac2 +0x28:  lea    0x20(%eax),%edx
080d7ac5 +0x2b:  lea    -0xc(%ebp),%eax
080d7ac8 +0x2e:  mov    %edx,0x4(%esp)
080d7acc +0x32:  mov    %eax,(%esp)
080d7acf +0x35:  call   080da496 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x633>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x633
080d7ad4 +0x3a:  sub    $0x4,%esp
080d7ad7 +0x3d:  lea    -0xc(%ebp),%eax
080d7ada +0x40:  mov    %eax,0x4(%esp)
080d7ade +0x44:  lea    -0x10(%ebp),%eax
080d7ae1 +0x47:  mov    %eax,(%esp)
080d7ae4 +0x4a:  call   080da5b2 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x74f>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x74f
080d7ae9 +0x4f:  test   %al,%al
080d7aeb +0x51:  je     080d7af4 <+0x5a>
080d7aed +0x53:  mov    $0x0,%eax
080d7af2 +0x58:  jmp    080d7af9 <+0x5f>
080d7af4 +0x5a:  mov    $0x1,%eax
080d7af9 +0x5f:  leave
080d7afa +0x60:  ret
080d7afb +0x61:  nop
```

## 反编译 C

```c
// BlueMarble::getVisitZone @ 0x80d7a9a

/* BlueMarble::getVisitZone(int) const */

bool BlueMarble::getVisitZone(int param_1)

{
  char cVar1;
  _Rb_tree_const_iterator<int> local_14 [4];
  set<int,std::less<int>,std::allocator<int>> local_10 [12];
  
  std::set<int,std::less<int>,std::allocator<int>>::find((int *)local_14);
  std::set<int,std::less<int>,std::allocator<int>>::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<int>::operator==
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  return cVar1 == '\0';
}
```
