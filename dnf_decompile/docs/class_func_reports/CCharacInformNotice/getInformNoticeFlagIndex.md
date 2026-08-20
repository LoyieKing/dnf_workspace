# getInformNoticeFlagIndex

`_ZN19CCharacInformNotice24getInformNoticeFlagIndexERSt6vectorIhSaIhEE`

`CCharacInformNotice::getInformNoticeFlagIndex(std::vector<unsigned char, std::allocator<unsigned char> >&)`

| 类 | 地址 |
|---|---|
| `CCharacInformNotice` | `0x080e48fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e48fc  _ZN19CCharacInformNotice24getInformNoticeFlagIndexERSt6vectorIhSaIhEE
#           CCharacInformNotice::getInformNoticeFlagIndex(std::vector<unsigned char, std::allocator<unsigned char> >&)
# range [0x080e48fc, 0x080e4993]
080e48fc +0x00:  push   %ebp
080e48fd +0x01:  mov    %esp,%ebp
080e48ff +0x03:  push   %ebx
080e4900 +0x04:  sub    $0x24,%esp
080e4903 +0x07:  mov    0xc(%ebp),%eax
080e4906 +0x0a:  mov    %eax,(%esp)
080e4909 +0x0d:  call   080e4cf6 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x1c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x1c
080e490e +0x12:  movl   $0x0,-0x14(%ebp)
080e4915 +0x19:  jmp    080e4983 <+0x87>
080e4917 +0x1b:  mov    -0x14(%ebp),%eax
080e491a +0x1e:  mov    %eax,0x4(%esp)
080e491e +0x22:  mov    0x8(%ebp),%eax
080e4921 +0x25:  mov    %eax,(%esp)
080e4924 +0x28:  call   080e48ec <_ZN19CCharacInformNotice19getInformNoticeFlagEi>  ; CCharacInformNotice::getInformNoticeFlag(int)
080e4929 +0x2d:  mov    %al,-0xd(%ebp)
080e492c +0x30:  movl   $0x0,-0xc(%ebp)
080e4933 +0x37:  jmp    080e4974 <+0x78>
080e4935 +0x39:  movzbl -0xd(%ebp),%edx
080e4939 +0x3d:  mov    -0xc(%ebp),%eax
080e493c +0x40:  mov    %edx,%ebx
080e493e +0x42:  mov    %eax,%ecx
080e4940 +0x44:  sar    %cl,%ebx
080e4942 +0x46:  mov    %ebx,%eax
080e4944 +0x48:  and    $0x1,%eax
080e4947 +0x4b:  test   %al,%al
080e4949 +0x4d:  je     080e4970 <+0x74>
080e494b +0x4f:  mov    -0x14(%ebp),%eax
080e494e +0x52:  lea    0x0(,%eax,8),%edx
080e4955 +0x59:  mov    -0xc(%ebp),%eax
080e4958 +0x5c:  lea    (%edx,%eax,1),%eax
080e495b +0x5f:  mov    %al,-0x15(%ebp)
080e495e +0x62:  lea    -0x15(%ebp),%eax
080e4961 +0x65:  mov    %eax,0x4(%esp)
080e4965 +0x69:  mov    0xc(%ebp),%eax
080e4968 +0x6c:  mov    %eax,(%esp)
080e496b +0x6f:  call   080e4d84 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xaa>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xaa
080e4970 +0x74:  addl   $0x1,-0xc(%ebp)
080e4974 +0x78:  cmpl   $0x7,-0xc(%ebp)
080e4978 +0x7c:  setle  %al
080e497b +0x7f:  test   %al,%al
080e497d +0x81:  jne    080e4935 <+0x39>
080e497f +0x83:  addl   $0x1,-0x14(%ebp)
080e4983 +0x87:  cmpl   $0xf,-0x14(%ebp)
080e4987 +0x8b:  setle  %al
080e498a +0x8e:  test   %al,%al
080e498c +0x90:  jne    080e4917 <+0x1b>
080e498e +0x92:  add    $0x24,%esp
080e4991 +0x95:  pop    %ebx
080e4992 +0x96:  pop    %ebp
080e4993 +0x97:  ret
```

## 反编译 C

```c
// CCharacInformNotice::getInformNoticeFlagIndex @ 0x80e48fc

/* CCharacInformNotice::getInformNoticeFlagIndex(std::vector<unsigned char, std::allocator<unsigned
   char> >&) */

void __thiscall
CCharacInformNotice::getInformNoticeFlagIndex(CCharacInformNotice *this,vector *param_1)

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
