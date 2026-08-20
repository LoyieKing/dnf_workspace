# send_to_area

`_ZN7Village12send_to_areaEiR11PacketGuard`

`Village::send_to_area(int, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `Village` | `0x086c3c20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c3c20  _ZN7Village12send_to_areaEiR11PacketGuard
#           Village::send_to_area(int, PacketGuard&)
# range [0x086c3c20, 0x086c3c97]
086c3c20 +0x00:  push   %ebp
086c3c21 +0x01:  mov    %esp,%ebp
086c3c23 +0x03:  sub    $0x28,%esp
086c3c26 +0x06:  cmpl   $0x0,0xc(%ebp)
086c3c2a +0x0a:  js     086c3c37 <+0x17>
086c3c2c +0x0c:  mov    0x8(%ebp),%eax
086c3c2f +0x0f:  mov    0x24(%eax),%eax
086c3c32 +0x12:  cmp    0xc(%ebp),%eax
086c3c35 +0x15:  jg     086c3c76 <+0x56>
086c3c37 +0x17:  mov    0x8(%ebp),%eax
086c3c3a +0x1a:  mov    0x24(%eax),%eax
086c3c3d +0x1d:  mov    %eax,0x18(%esp)
086c3c41 +0x21:  mov    0xc(%ebp),%eax
086c3c44 +0x24:  mov    %eax,0x14(%esp)
086c3c48 +0x28:  movl   $"area(%d) < 0 || area >= m_iAreaCount(%d)",0x10(%esp)
086c3c50 +0x30:  movl   $0x360,0xc(%esp)
086c3c58 +0x38:  movl   $&_ZZN7Village12send_to_areaEiR11PacketGuardE19__PRETTY_FUNCTION__,0x8(%esp)
086c3c60 +0x40:  movl   $"world.cpp",0x4(%esp)
086c3c68 +0x48:  movl   $0x1,(%esp)
086c3c6f +0x4f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c3c74 +0x54:  jmp    086c3c96 <+0x76>
086c3c76 +0x56:  mov    0x8(%ebp),%eax
086c3c79 +0x59:  mov    0x28(%eax),%edx
086c3c7c +0x5c:  mov    0xc(%ebp),%eax
086c3c7f +0x5f:  imul   $0x98,%eax,%eax
086c3c85 +0x65:  add    %eax,%edx
086c3c87 +0x67:  mov    0x10(%ebp),%eax
086c3c8a +0x6a:  mov    %eax,0x4(%esp)
086c3c8e +0x6e:  mov    %edx,(%esp)
086c3c91 +0x71:  call   086c2d2a <_ZN4Area11send_to_allER11PacketGuard>  ; Area::send_to_all(PacketGuard&)
086c3c96 +0x76:  leave
086c3c97 +0x77:  ret
```

## 反编译 C

```c
// Village::send_to_area @ 0x86c3c20

/* Village::send_to_area(int, PacketGuard&) */

void __thiscall Village::send_to_area(Village *this,int param_1,PacketGuard *param_2)

{
  if ((param_1 < 0) || (*(int *)(this + 0x24) <= param_1)) {
    LogManager::logFormat
              (1,"world.cpp","void Village::send_to_area(int, PacketGuard&)",0x360,
               "area(%d) < 0 || area >= m_iAreaCount(%d)",param_1,*(undefined4 *)(this + 0x24));
  }
  else {
    Area::send_to_all((Area *)(*(int *)(this + 0x28) + param_1 * 0x98),param_2);
  }
  return;
}
```
