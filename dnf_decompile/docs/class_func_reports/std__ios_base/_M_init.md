# _M_init

`_ZNSt8ios_base7_M_initEv`

`std::ios_base::_M_init()`

| 类 | 地址 |
|---|---|
| `std::ios_base` | `0x087271d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087271d0  _ZNSt8ios_base7_M_initEv
#           std::ios_base::_M_init()
# range [0x087271d0, 0x0872721f]
087271d0 +0x00:  push   %ebp
087271d1 +0x01:  mov    %esp,%ebp
087271d3 +0x03:  sub    $0x28,%esp
087271d6 +0x06:  mov    %esi,-0x4(%ebp)
087271d9 +0x09:  mov    0x8(%ebp),%esi
087271dc +0x0c:  mov    %ebx,-0x8(%ebp)
087271df +0x0f:  lea    -0xc(%ebp),%ebx
087271e2 +0x12:  movl   $0x6,0x4(%esi)
087271e9 +0x19:  movl   $0x0,0x8(%esi)
087271f0 +0x20:  movl   $0x1002,0xc(%esi)
087271f7 +0x27:  add    $0x6c,%esi
087271fa +0x2a:  mov    %ebx,(%esp)
087271fd +0x2d:  call   086dd050 <_ZNSt6localeC1Ev>  ; std::locale::locale()
08727202 +0x32:  mov    %ebx,0x4(%esp)
08727206 +0x36:  mov    %esi,(%esp)
08727209 +0x39:  call   086dba90 <_ZNSt6localeaSERKS_>  ; std::locale::operator=(std::locale const&)
0872720e +0x3e:  mov    %ebx,(%esp)
08727211 +0x41:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
08727216 +0x46:  mov    -0x8(%ebp),%ebx
08727219 +0x49:  mov    -0x4(%ebp),%esi
0872721c +0x4c:  mov    %ebp,%esp
0872721e +0x4e:  pop    %ebp
0872721f +0x4f:  ret
```

## 反编译 C

```c
// std::ios_base::_M_init @ 0x87271d0

/* std::ios_base::_M_init() */

void __thiscall std::ios_base::_M_init(ios_base *this)

{
  locale local_10;
  
  *(undefined4 *)(this + 4) = 6;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0x1002;
  locale::locale(&local_10);
  locale::operator=((locale *)(this + 0x6c),&local_10);
  locale::~locale(&local_10);
  return;
}
```
