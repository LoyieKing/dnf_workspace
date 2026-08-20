# sendListOtherUser

`_ZN10CTitleBook17sendListOtherUserEP5CUser25ENUM_TITLE_BOOK_INFO_TYPE`

`CTitleBook::sendListOtherUser(CUser*, ENUM_TITLE_BOOK_INFO_TYPE)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08641750` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08641750  _ZN10CTitleBook17sendListOtherUserEP5CUser25ENUM_TITLE_BOOK_INFO_TYPE
#           CTitleBook::sendListOtherUser(CUser*, ENUM_TITLE_BOOK_INFO_TYPE)
# range [0x08641750, 0x086417a9]
08641750 +0x00:  push   %ebp
08641751 +0x01:  mov    %esp,%ebp
08641753 +0x03:  push   %ebx
08641754 +0x04:  sub    $0x34,%esp
08641757 +0x07:  movl   $0x0,-0xc(%ebp)
0864175e +0x0e:  jmp    08641799 <+0x49>
08641760 +0x10:  mov    -0xc(%ebp),%ebx
08641763 +0x13:  mov    0x8(%ebp),%eax
08641766 +0x16:  mov    0x8(%eax),%eax
08641769 +0x19:  mov    %eax,(%esp)
0864176c +0x1c:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08641771 +0x21:  movzwl %ax,%eax
08641774 +0x24:  mov    0x10(%ebp),%edx
08641777 +0x27:  mov    %edx,0x10(%esp)
0864177b +0x2b:  mov    %ebx,0xc(%esp)
0864177f +0x2f:  mov    %eax,0x8(%esp)
08641783 +0x33:  mov    0xc(%ebp),%eax
08641786 +0x36:  mov    %eax,0x4(%esp)
0864178a +0x3a:  mov    0x8(%ebp),%eax
0864178d +0x3d:  mov    %eax,(%esp)
08641790 +0x40:  call   086417aa <_ZN10CTitleBook17_sendCategoryDataEP5CUsert24ENUM_TITLE_BOOK_CATEGORY25ENUM_TITLE_BOOK_INFO_TYPE>  ; CTitleBook::_sendCategoryData(CUser*, unsigned short, ENUM_TITLE_BOOK_CATEGORY, ENUM_TITLE_BOOK_INFO_TYPE)
08641795 +0x45:  addl   $0x1,-0xc(%ebp)
08641799 +0x49:  cmpl   $0x3,-0xc(%ebp)
0864179d +0x4d:  setle  %al
086417a0 +0x50:  test   %al,%al
086417a2 +0x52:  jne    08641760 <+0x10>
086417a4 +0x54:  add    $0x34,%esp
086417a7 +0x57:  pop    %ebx
086417a8 +0x58:  pop    %ebp
086417a9 +0x59:  ret
```

## 反编译 C

```c
// CTitleBook::sendListOtherUser @ 0x8641750

/* CTitleBook::sendListOtherUser(CUser*, ENUM_TITLE_BOOK_INFO_TYPE) */

void __thiscall
CTitleBook::sendListOtherUser(CTitleBook *this,undefined4 param_1,undefined4 param_3)

{
  undefined2 uVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    uVar1 = CUser::get_unique_id(*(CUser **)(this + 8));
    _sendCategoryData(this,param_1,uVar1,local_10,param_3);
  }
  return;
}
```
