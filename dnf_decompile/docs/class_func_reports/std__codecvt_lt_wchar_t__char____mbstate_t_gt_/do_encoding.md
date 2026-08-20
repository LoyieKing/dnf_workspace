# do_encoding

`_ZNKSt7codecvtIwc11__mbstate_tE11do_encodingEv`

`std::codecvt<wchar_t, char, __mbstate_t>::do_encoding() const`

| 类 | 地址 |
|---|---|
| `std::codecvt<wchar_t, char, __mbstate_t>` | `0x0871f690` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871f690  _ZNKSt7codecvtIwc11__mbstate_tE11do_encodingEv
#           std::codecvt<wchar_t, char, __mbstate_t>::do_encoding() const
# range [0x0871f690, 0x0871f6cf]
0871f690 +0x00:  push   %ebp
0871f691 +0x01:  mov    %esp,%ebp
0871f693 +0x03:  sub    $0x18,%esp
0871f696 +0x06:  mov    0x8(%ebp),%eax
0871f699 +0x09:  mov    %ebx,-0x8(%ebp)
0871f69c +0x0c:  mov    %esi,-0x4(%ebp)
0871f69f +0x0f:  mov    0x8(%eax),%eax
0871f6a2 +0x12:  mov    %eax,(%esp)
0871f6a5 +0x15:  call   0807de70 <_init+0x768>
0871f6aa +0x1a:  mov    %eax,%esi
0871f6ac +0x1c:  call   0807dd20 <_init+0x618>
0871f6b1 +0x21:  mov    %esi,(%esp)
0871f6b4 +0x24:  mov    %eax,%ebx
0871f6b6 +0x26:  call   0807de70 <_init+0x768>
0871f6bb +0x2b:  xor    %eax,%eax
0871f6bd +0x2d:  cmp    $0x1,%ebx
0871f6c0 +0x30:  sete   %al
0871f6c3 +0x33:  mov    -0x8(%ebp),%ebx
0871f6c6 +0x36:  mov    -0x4(%ebp),%esi
0871f6c9 +0x39:  mov    %ebp,%esp
0871f6cb +0x3b:  pop    %ebp
0871f6cc +0x3c:  ret
0871f6cd +0x3d:  nop
0871f6ce +0x3e:  nop
0871f6cf +0x3f:  nop
```

## 反编译 C

```c
// std::codecvt<wchar_t, @ 0x871f690

/* std::codecvt<wchar_t, char, __mbstate_t>::do_encoding() const */

bool __thiscall
std::codecvt<wchar_t,char,__mbstate_t>::do_encoding(codecvt<wchar_t,char,__mbstate_t> *this)

{
  undefined4 uVar1;
  size_t sVar2;
  
  uVar1 = __uselocale(*(undefined4 *)(this + 8));
  sVar2 = __ctype_get_mb_cur_max();
  __uselocale(uVar1);
  return sVar2 == 1;
}
```
