# getInformNoticeFlagIndex

`_ZN5CUser24getInformNoticeFlagIndexERSt6vectorIhSaIhEE`

`CUser::getInformNoticeFlagIndex(std::vector<unsigned char, std::allocator<unsigned char> >&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868fa8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868fa8a  _ZN5CUser24getInformNoticeFlagIndexERSt6vectorIhSaIhEE
#           CUser::getInformNoticeFlagIndex(std::vector<unsigned char, std::allocator<unsigned char> >&)
# range [0x0868fa8a, 0x0868fb21]
0868fa8a +0x00:  push   %ebp
0868fa8b +0x01:  mov    %esp,%ebp
0868fa8d +0x03:  push   %ebx
0868fa8e +0x04:  sub    $0x24,%esp
0868fa91 +0x07:  mov    0xc(%ebp),%eax
0868fa94 +0x0a:  mov    %eax,(%esp)
0868fa97 +0x0d:  call   080e4cf6 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x1c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x1c
0868fa9c +0x12:  movl   $0x0,-0x14(%ebp)
0868faa3 +0x19:  jmp    0868fb11 <+0x87>
0868faa5 +0x1b:  mov    -0x14(%ebp),%eax
0868faa8 +0x1e:  mov    %eax,0x4(%esp)
0868faac +0x22:  mov    0x8(%ebp),%eax
0868faaf +0x25:  mov    %eax,(%esp)
0868fab2 +0x28:  call   0868fa76 <_ZN5CUser19getInformNoticeFlagEi>  ; CUser::getInformNoticeFlag(int)
0868fab7 +0x2d:  mov    %al,-0xd(%ebp)
0868faba +0x30:  movl   $0x0,-0xc(%ebp)
0868fac1 +0x37:  jmp    0868fb02 <+0x78>
0868fac3 +0x39:  movzbl -0xd(%ebp),%edx
0868fac7 +0x3d:  mov    -0xc(%ebp),%eax
0868faca +0x40:  mov    %edx,%ebx
0868facc +0x42:  mov    %eax,%ecx
0868face +0x44:  sar    %cl,%ebx
0868fad0 +0x46:  mov    %ebx,%eax
0868fad2 +0x48:  and    $0x1,%eax
0868fad5 +0x4b:  test   %al,%al
0868fad7 +0x4d:  je     0868fafe <+0x74>
0868fad9 +0x4f:  mov    -0x14(%ebp),%eax
0868fadc +0x52:  lea    0x0(,%eax,8),%edx
0868fae3 +0x59:  mov    -0xc(%ebp),%eax
0868fae6 +0x5c:  lea    (%edx,%eax,1),%eax
0868fae9 +0x5f:  mov    %al,-0x15(%ebp)
0868faec +0x62:  lea    -0x15(%ebp),%eax
0868faef +0x65:  mov    %eax,0x4(%esp)
0868faf3 +0x69:  mov    0xc(%ebp),%eax
0868faf6 +0x6c:  mov    %eax,(%esp)
0868faf9 +0x6f:  call   080e4d84 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xaa>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xaa
0868fafe +0x74:  addl   $0x1,-0xc(%ebp)
0868fb02 +0x78:  cmpl   $0x7,-0xc(%ebp)
0868fb06 +0x7c:  setle  %al
0868fb09 +0x7f:  test   %al,%al
0868fb0b +0x81:  jne    0868fac3 <+0x39>
0868fb0d +0x83:  addl   $0x1,-0x14(%ebp)
0868fb11 +0x87:  cmpl   $0xf,-0x14(%ebp)
0868fb15 +0x8b:  setle  %al
0868fb18 +0x8e:  test   %al,%al
0868fb1a +0x90:  jne    0868faa5 <+0x1b>
0868fb1c +0x92:  add    $0x24,%esp
0868fb1f +0x95:  pop    %ebx
0868fb20 +0x96:  pop    %ebp
0868fb21 +0x97:  ret
```

## 反编译 C

```c
// CUser::getInformNoticeFlagIndex @ 0x868fa8a

/* CUser::getInformNoticeFlagIndex(std::vector<unsigned char, std::allocator<unsigned char> >&) */

void __thiscall CUser::getInformNoticeFlagIndex(CUser *this,vector *param_1)

{
  uchar local_19;
  int local_18;
  byte local_11;
  int local_10;
  
  std::vector<unsigned_char,std::allocator<unsigned_char>>::clear
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)param_1);
  for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
    local_11 = getInformNoticeFlag(this,local_18);
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if (((int)(uint)local_11 >> ((byte)local_10 & 0x1f) & 1U) != 0) {
        local_19 = (char)local_18 * '\b' + (byte)local_10;
        std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
                  ((vector<unsigned_char,std::allocator<unsigned_char>> *)param_1,&local_19);
      }
    }
  }
  return;
}
```
