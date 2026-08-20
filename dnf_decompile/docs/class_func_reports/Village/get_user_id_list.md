# get_user_id_list

`_ZN7Village16get_user_id_listEiRSt6vectorItSaItEE`

`Village::get_user_id_list(int, std::vector<unsigned short, std::allocator<unsigned short> >&)`

| 类 | 地址 |
|---|---|
| `Village` | `0x086c3c98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c3c98  _ZN7Village16get_user_id_listEiRSt6vectorItSaItEE
#           Village::get_user_id_list(int, std::vector<unsigned short, std::allocator<unsigned short> >&)
# range [0x086c3c98, 0x086c3d0f]
086c3c98 +0x00:  push   %ebp
086c3c99 +0x01:  mov    %esp,%ebp
086c3c9b +0x03:  sub    $0x28,%esp
086c3c9e +0x06:  cmpl   $0x0,0xc(%ebp)
086c3ca2 +0x0a:  js     086c3caf <+0x17>
086c3ca4 +0x0c:  mov    0x8(%ebp),%eax
086c3ca7 +0x0f:  mov    0x24(%eax),%eax
086c3caa +0x12:  cmp    0xc(%ebp),%eax
086c3cad +0x15:  jg     086c3cee <+0x56>
086c3caf +0x17:  mov    0x8(%ebp),%eax
086c3cb2 +0x1a:  mov    0x24(%eax),%eax
086c3cb5 +0x1d:  mov    %eax,0x18(%esp)
086c3cb9 +0x21:  mov    0xc(%ebp),%eax
086c3cbc +0x24:  mov    %eax,0x14(%esp)
086c3cc0 +0x28:  movl   $"area(%d) < 0 || area >= m_iAreaCount(%d)",0x10(%esp)
086c3cc8 +0x30:  movl   $0x36a,0xc(%esp)
086c3cd0 +0x38:  movl   $&_ZZN7Village16get_user_id_listEiRSt6vectorItSaItEEE19__PRETTY_FUNCTION__,0x8(%esp)
086c3cd8 +0x40:  movl   $"world.cpp",0x4(%esp)
086c3ce0 +0x48:  movl   $0x1,(%esp)
086c3ce7 +0x4f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c3cec +0x54:  jmp    086c3d0e <+0x76>
086c3cee +0x56:  mov    0x8(%ebp),%eax
086c3cf1 +0x59:  mov    0x28(%eax),%edx
086c3cf4 +0x5c:  mov    0xc(%ebp),%eax
086c3cf7 +0x5f:  imul   $0x98,%eax,%eax
086c3cfd +0x65:  add    %eax,%edx
086c3cff +0x67:  mov    0x10(%ebp),%eax
086c3d02 +0x6a:  mov    %eax,0x4(%esp)
086c3d06 +0x6e:  mov    %edx,(%esp)
086c3d09 +0x71:  call   086c305e <_ZN4Area16get_user_id_listERSt6vectorItSaItEE>  ; Area::get_user_id_list(std::vector<unsigned short, std::allocator<unsigned short> >&)
086c3d0e +0x76:  leave
086c3d0f +0x77:  ret
```

## 反编译 C

```c
// Village::get_user_id_list @ 0x86c3c98

/* Village::get_user_id_list(int, std::vector<unsigned short, std::allocator<unsigned short> >&) */

void __thiscall Village::get_user_id_list(Village *this,int param_1,vector *param_2)

{
  if ((param_1 < 0) || (*(int *)(this + 0x24) <= param_1)) {
    LogManager::logFormat
              (1,"world.cpp",
               "void Village::get_user_id_list(int, std::vector<short unsigned int, std::allocator<short unsigned int> >&)"
               ,0x36a,"area(%d) < 0 || area >= m_iAreaCount(%d)",param_1,
               *(undefined4 *)(this + 0x24));
  }
  else {
    Area::get_user_id_list((Area *)(*(int *)(this + 0x28) + param_1 * 0x98),param_2);
  }
  return;
}
```
