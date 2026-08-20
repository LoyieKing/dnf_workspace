# do_narrow

`_ZNKSt5ctypeIwE9do_narrowEwc`

`std::ctype<wchar_t>::do_narrow(wchar_t, char) const`

| 类 | 地址 |
|---|---|
| `std::ctype<wchar_t>` | `0x0872ee90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872ee90  _ZNKSt5ctypeIwE9do_narrowEwc
#           std::ctype<wchar_t>::do_narrow(wchar_t, char) const
# range [0x0872ee90, 0x0872ef0f]
0872ee90 +0x00:  push   %ebp
0872ee91 +0x01:  mov    %esp,%ebp
0872ee93 +0x03:  sub    $0x28,%esp
0872ee96 +0x06:  mov    %ebx,-0xc(%ebp)
0872ee99 +0x09:  mov    0xc(%ebp),%ebx
0872ee9c +0x0c:  mov    %esi,-0x8(%ebp)
0872ee9f +0x0f:  mov    0x8(%ebp),%eax
0872eea2 +0x12:  mov    %edi,-0x4(%ebp)
0872eea5 +0x15:  movzbl 0x10(%ebp),%esi
0872eea9 +0x19:  cmp    $0x7f,%ebx
0872eeac +0x1c:  ja     0872eeb4 <+0x24>
0872eeae +0x1e:  cmpb   $0x0,0xc(%eax)
0872eeb2 +0x22:  jne    0872eef0 <+0x60>
0872eeb4 +0x24:  mov    0x8(%eax),%eax
0872eeb7 +0x27:  mov    %eax,(%esp)
0872eeba +0x2a:  call   0807de70 <_init+0x768>
0872eebf +0x2f:  mov    %ebx,(%esp)
0872eec2 +0x32:  mov    %eax,%edi
0872eec4 +0x34:  call   0807e2d0 <_init+0xbc8>
0872eec9 +0x39:  mov    %edi,(%esp)
0872eecc +0x3c:  mov    %eax,%ebx
0872eece +0x3e:  call   0807de70 <_init+0x768>
0872eed3 +0x43:  cmp    $0xffffffff,%ebx
0872eed6 +0x46:  je     0872eeda <+0x4a>
0872eed8 +0x48:  mov    %ebx,%esi
0872eeda +0x4a:  mov    %esi,%eax
0872eedc +0x4c:  mov    -0xc(%ebp),%ebx
0872eedf +0x4f:  mov    -0x8(%ebp),%esi
0872eee2 +0x52:  mov    -0x4(%ebp),%edi
0872eee5 +0x55:  mov    %ebp,%esp
0872eee7 +0x57:  pop    %ebp
0872eee8 +0x58:  ret
0872eee9 +0x59:  lea    0x0(%esi,%eiz,1),%esi
0872eef0 +0x60:  movzbl 0xd(%eax,%ebx,1),%esi
0872eef5 +0x65:  mov    -0x4(%ebp),%edi
0872eef8 +0x68:  mov    -0xc(%ebp),%ebx
0872eefb +0x6b:  mov    %esi,%eax
0872eefd +0x6d:  mov    -0x8(%ebp),%esi
0872ef00 +0x70:  mov    %ebp,%esp
0872ef02 +0x72:  pop    %ebp
0872ef03 +0x73:  ret
0872ef04 +0x74:  nop
0872ef05 +0x75:  nop
0872ef06 +0x76:  nop
0872ef07 +0x77:  nop
0872ef08 +0x78:  nop
0872ef09 +0x79:  nop
0872ef0a +0x7a:  nop
0872ef0b +0x7b:  nop
0872ef0c +0x7c:  nop
0872ef0d +0x7d:  nop
0872ef0e +0x7e:  nop
0872ef0f +0x7f:  nop
```

## 反编译 C

```c
// std::ctype<wchar_t>::do_narrow @ 0x872ee90

/* std::ctype<wchar_t>::do_narrow(wchar_t, char) const */

uint __thiscall std::ctype<wchar_t>::do_narrow(ctype<wchar_t> *this,wchar_t param_1,char param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (((uint)param_1 < 0x80) && (this[0xc] != (ctype<wchar_t>)0x0)) {
    return (uint)(byte)this[param_1 + L'\r'];
  }
  uVar1 = __uselocale(*(undefined4 *)(this + 8));
  uVar2 = wctob(param_1);
  __uselocale(uVar1);
  uVar3 = (uint)(byte)param_2;
  if (uVar2 != 0xffffffff) {
    uVar3 = uVar2;
  }
  return uVar3;
}
```
