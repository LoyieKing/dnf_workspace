# find_index

`_ZN13ExceptionItem10find_indexEi`

`ExceptionItem::find_index(int)`

| 类 | 地址 |
|---|---|
| `ExceptionItem` | `0x081a210c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a210c  _ZN13ExceptionItem10find_indexEi
#           ExceptionItem::find_index(int)
# range [0x081a210c, 0x081a216d]
081a210c +0x00:  push   %ebp
081a210d +0x01:  mov    %esp,%ebp
081a210f +0x03:  sub    $0x28,%esp
081a2112 +0x06:  mov    0x8(%ebp),%eax
081a2115 +0x09:  lea    0x4(%eax),%ecx
081a2118 +0x0c:  lea    -0x10(%ebp),%eax
081a211b +0x0f:  lea    0xc(%ebp),%edx
081a211e +0x12:  mov    %edx,0x8(%esp)
081a2122 +0x16:  mov    %ecx,0x4(%esp)
081a2126 +0x1a:  mov    %eax,(%esp)
081a2129 +0x1d:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
081a212e +0x22:  sub    $0x4,%esp
081a2131 +0x25:  mov    0x8(%ebp),%eax
081a2134 +0x28:  lea    0x4(%eax),%edx
081a2137 +0x2b:  lea    -0xc(%ebp),%eax
081a213a +0x2e:  mov    %edx,0x4(%esp)
081a213e +0x32:  mov    %eax,(%esp)
081a2141 +0x35:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
081a2146 +0x3a:  sub    $0x4,%esp
081a2149 +0x3d:  lea    -0xc(%ebp),%eax
081a214c +0x40:  mov    %eax,0x4(%esp)
081a2150 +0x44:  lea    -0x10(%ebp),%eax
081a2153 +0x47:  mov    %eax,(%esp)
081a2156 +0x4a:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
081a215b +0x4f:  test   %al,%al
081a215d +0x51:  je     081a2166 <+0x5a>
081a215f +0x53:  mov    $0x1,%eax
081a2164 +0x58:  jmp    081a216b <+0x5f>
081a2166 +0x5a:  mov    $0x0,%eax
081a216b +0x5f:  leave
081a216c +0x60:  ret
081a216d +0x61:  nop
```

## 反编译 C

```c
// ExceptionItem::find_index @ 0x81a210c

/* ExceptionItem::find_index(int) */

bool ExceptionItem::find_index(int param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  return cVar1 != '\0';
}
```
