# AddUser

`_ZN10CLuckPoint7AddUserEP5CUser`

`CLuckPoint::AddUser(CUser*)`

| 类 | 地址 |
|---|---|
| `CLuckPoint` | `0x08550932` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08550932  _ZN10CLuckPoint7AddUserEP5CUser
#           CLuckPoint::AddUser(CUser*)
# range [0x08550932, 0x08550953]
08550932 +0x00:  push   %ebp
08550933 +0x01:  mov    %esp,%ebp
08550935 +0x03:  sub    $0x18,%esp
08550938 +0x06:  mov    0xc(%ebp),%eax
0855093b +0x09:  test   %eax,%eax
0855093d +0x0b:  je     08550951 <+0x1f>
0855093f +0x0d:  mov    0x8(%ebp),%eax
08550942 +0x10:  lea    0xc(%ebp),%edx
08550945 +0x13:  mov    %edx,0x4(%esp)
08550949 +0x17:  mov    %eax,(%esp)
0855094c +0x1a:  call   08551088 <_GLOBAL__I__ZN10CLuckPointC2Ev+0xdb>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0xdb
08550951 +0x1f:  leave
08550952 +0x20:  ret
08550953 +0x21:  nop
```

## 反编译 C

```c
// CLuckPoint::AddUser @ 0x8550932

/* CLuckPoint::AddUser(CUser*) */

void __thiscall CLuckPoint::AddUser(CLuckPoint *this,CUser *param_1)

{
  if (param_1 != (CUser *)0x0) {
    std::vector<CUser*,std::allocator<CUser*>>::push_back
              ((vector<CUser*,std::allocator<CUser*>> *)this,&param_1);
  }
  return;
}
```
