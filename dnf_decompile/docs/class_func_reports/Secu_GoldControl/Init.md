# Init

`_ZN16Secu_GoldControl4InitEP5CUser`

`Secu_GoldControl::Init(CUser*)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x08287230` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08287230  _ZN16Secu_GoldControl4InitEP5CUser
#           Secu_GoldControl::Init(CUser*)
# range [0x08287230, 0x0828729f]
08287230 +0x00:  push   %ebp
08287231 +0x01:  mov    %esp,%ebp
08287233 +0x03:  sub    $0x18,%esp
08287236 +0x06:  mov    0x8(%ebp),%eax
08287239 +0x09:  mov    0xc(%ebp),%edx
0828723c +0x0c:  mov    %edx,(%eax)
0828723e +0x0e:  mov    &_ZN10GlobalData21g_GoldControlDateFlagE,%edx
08287244 +0x14:  mov    0x8(%ebp),%eax
08287247 +0x17:  mov    %edx,0xc0(%eax)
0828724d +0x1d:  mov    0x8(%ebp),%eax
08287250 +0x20:  movl   $0x0,0xb8(%eax)
0828725a +0x2a:  mov    0x8(%ebp),%eax
0828725d +0x2d:  movl   $0x0,0xbc(%eax)
08287267 +0x37:  mov    0x8(%ebp),%eax
0828726a +0x3a:  movl   $0x0,0xc4(%eax)
08287274 +0x44:  mov    0x8(%ebp),%eax
08287277 +0x47:  movb   $0x0,0xe6(%eax)
0828727e +0x4e:  mov    0x8(%ebp),%eax
08287281 +0x51:  add    $0xc8,%eax
08287286 +0x56:  movl   $0x1e,0x8(%esp)
0828728e +0x5e:  movl   $0x0,0x4(%esp)
08287296 +0x66:  mov    %eax,(%esp)
08287299 +0x69:  call   0807dcc0 <_init+0x5b8>
0828729e +0x6e:  leave
0828729f +0x6f:  ret
```

## 反编译 C

```c
// Secu_GoldControl::Init @ 0x8287230

/* Secu_GoldControl::Init(CUser*) */

void __thiscall Secu_GoldControl::Init(Secu_GoldControl *this,CUser *param_1)

{
  *(CUser **)this = param_1;
  *(undefined4 *)(this + 0xc0) = GlobalData::g_GoldControlDateFlag;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  this[0xe6] = (Secu_GoldControl)0x0;
  memset(this + 200,0,0x1e);
  return;
}
```
