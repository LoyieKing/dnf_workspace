# clear

`_ZN10secretshop16SECRET_SHOP_DATA5clearEv`

`secretshop::SECRET_SHOP_DATA::clear()`

| 类 | 地址 |
|---|---|
| `secretshop::SECRET_SHOP_DATA` | `0x08ab14b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab14b8  _ZN10secretshop16SECRET_SHOP_DATA5clearEv
#           secretshop::SECRET_SHOP_DATA::clear()
# range [0x08ab14b8, 0x08ab150b]
08ab14b8 +0x00:  push   %ebp
08ab14b9 +0x01:  mov    %esp,%ebp
08ab14bb +0x03:  sub    $0x28,%esp
08ab14be +0x06:  mov    0x8(%ebp),%eax
08ab14c1 +0x09:  movl   $0x0,(%eax)
08ab14c7 +0x0f:  movl   $0x0,-0xc(%ebp)
08ab14ce +0x16:  jmp    08ab14fe <+0x46>
08ab14d0 +0x18:  mov    -0xc(%ebp),%eax
08ab14d3 +0x1b:  shl    $0x2,%eax
08ab14d6 +0x1e:  lea    0x0(,%eax,8),%edx
08ab14dd +0x25:  sub    %eax,%edx
08ab14df +0x27:  mov    %edx,%eax
08ab14e1 +0x29:  add    0x8(%ebp),%eax
08ab14e4 +0x2c:  add    $0x4,%eax
08ab14e7 +0x2f:  mov    %eax,(%esp)
08ab14ea +0x32:  call   08ab1642 <_GLOBAL__I__ZN10secretshop8RETAILER11GetSaleInfoEi+0x6d>  ; global constructors keyed to secretshop::RETAILER::GetSaleInfo(int)+0x6d
08ab14ef +0x37:  mov    -0xc(%ebp),%eax
08ab14f2 +0x3a:  mov    0x8(%ebp),%edx
08ab14f5 +0x3d:  movb   $0x0,0x74(%edx,%eax,1)
08ab14fa +0x42:  addl   $0x1,-0xc(%ebp)
08ab14fe +0x46:  cmpl   $0x3,-0xc(%ebp)
08ab1502 +0x4a:  setle  %al
08ab1505 +0x4d:  test   %al,%al
08ab1507 +0x4f:  jne    08ab14d0 <+0x18>
08ab1509 +0x51:  leave
08ab150a +0x52:  ret
08ab150b +0x53:  nop
```

## 反编译 C

```c
// secretshop::SECRET_SHOP_DATA::clear @ 0x8ab14b8

/* secretshop::SECRET_SHOP_DATA::clear() */

void __thiscall secretshop::SECRET_SHOP_DATA::clear(SECRET_SHOP_DATA *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    SECRET_SHOP_INFO::clear((SECRET_SHOP_INFO *)(this + local_10 * 0x1c + 4));
    this[local_10 + 0x74] = (SECRET_SHOP_DATA)0x0;
  }
  return;
}
```
