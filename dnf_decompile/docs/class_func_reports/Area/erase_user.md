# erase_user

`_ZN4Area10erase_userEP5CUser`

`Area::erase_user(CUser*)`

| 类 | 地址 |
|---|---|
| `Area` | `0x086c2be4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c2be4  _ZN4Area10erase_userEP5CUser
#           Area::erase_user(CUser*)
# range [0x086c2be4, 0x086c2c1d]
086c2be4 +0x00:  push   %ebp
086c2be5 +0x01:  mov    %esp,%ebp
086c2be7 +0x03:  sub    $0x28,%esp
086c2bea +0x06:  mov    0x8(%ebp),%eax
086c2bed +0x09:  mov    0x68(%eax),%eax
086c2bf0 +0x0c:  cmp    $0x1,%eax
086c2bf3 +0x0f:  je     086c2c1b <+0x37>
086c2bf5 +0x11:  mov    0xc(%ebp),%eax
086c2bf8 +0x14:  mov    %eax,(%esp)
086c2bfb +0x17:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c2c00 +0x1c:  mov    %ax,-0xa(%ebp)
086c2c04 +0x20:  mov    0x8(%ebp),%eax
086c2c07 +0x23:  lea    0x44(%eax),%edx
086c2c0a +0x26:  lea    -0xa(%ebp),%eax
086c2c0d +0x29:  mov    %eax,0x4(%esp)
086c2c11 +0x2d:  mov    %edx,(%esp)
086c2c14 +0x30:  call   086d38bc <_GLOBAL__I_MAX_VILLAGE_NUM+0x20ed>  ; global constructors keyed to MAX_VILLAGE_NUM+0x20ed
086c2c19 +0x35:  jmp    086c2c1c <+0x38>
086c2c1b +0x37:  nop
086c2c1c +0x38:  leave
086c2c1d +0x39:  ret
```

## 反编译 C

```c
// Area::erase_user @ 0x86c2be4

/* Area::erase_user(CUser*) */

void __thiscall Area::erase_user(Area *this,CUser *param_1)

{
  if (*(int *)(this + 0x68) != 1) {
    CUser::get_unique_id(param_1);
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::erase((ushort *)(this + 0x44));
  }
  return;
}
```
