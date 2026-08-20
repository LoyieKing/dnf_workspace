# do_is

`_ZNKSt5ctypeIwE5do_isEPKwS2_Pt`

`std::ctype<wchar_t>::do_is(wchar_t const*, wchar_t const*, unsigned short*) const`

| 类 | 地址 |
|---|---|
| `std::ctype<wchar_t>` | `0x0872ef10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872ef10  _ZNKSt5ctypeIwE5do_isEPKwS2_Pt
#           std::ctype<wchar_t>::do_is(wchar_t const*, wchar_t const*, unsigned short*) const
# range [0x0872ef10, 0x0872ef8f]
0872ef10 +0x00:  push   %ebp
0872ef11 +0x01:  mov    %esp,%ebp
0872ef13 +0x03:  push   %edi
0872ef14 +0x04:  push   %esi
0872ef15 +0x05:  push   %ebx
0872ef16 +0x06:  sub    $0x2c,%esp
0872ef19 +0x09:  mov    0xc(%ebp),%edi
0872ef1c +0x0c:  cmp    0x10(%ebp),%edi
0872ef1f +0x0f:  mov    0x8(%ebp),%esi
0872ef22 +0x12:  jae    0872ef7e <+0x6e>
0872ef24 +0x14:  lea    0x0(%esi,%eiz,1),%esi
0872ef28 +0x18:  xor    %ebx,%ebx
0872ef2a +0x1a:  movw   $0x0,-0x1a(%ebp)
0872ef30 +0x20:  mov    0x8(%esi),%eax
0872ef33 +0x23:  mov    %eax,0x8(%esp)
0872ef37 +0x27:  mov    0x4b0(%esi,%ebx,4),%eax
0872ef3e +0x2e:  mov    %eax,0x4(%esp)
0872ef42 +0x32:  mov    (%edi),%eax
0872ef44 +0x34:  mov    %eax,(%esp)
0872ef47 +0x37:  call   0807dc40 <_init+0x538>
0872ef4c +0x3c:  test   %eax,%eax
0872ef4e +0x3e:  je     0872ef5c <+0x4c>
0872ef50 +0x40:  movzwl 0x490(%esi,%ebx,2),%eax
0872ef58 +0x48:  or     %ax,-0x1a(%ebp)
0872ef5c +0x4c:  add    $0x1,%ebx
0872ef5f +0x4f:  cmp    $0xc,%ebx
0872ef62 +0x52:  jne    0872ef30 <+0x20>
0872ef64 +0x54:  movzwl -0x1a(%ebp),%eax
0872ef68 +0x58:  add    $0x4,%edi
0872ef6b +0x5b:  mov    0x14(%ebp),%edx
0872ef6e +0x5e:  cmp    %edi,0x10(%ebp)
0872ef71 +0x61:  mov    %ax,(%edx)
0872ef74 +0x64:  jbe    0872ef7e <+0x6e>
0872ef76 +0x66:  add    $0x2,%edx
0872ef79 +0x69:  mov    %edx,0x14(%ebp)
0872ef7c +0x6c:  jmp    0872ef28 <+0x18>
0872ef7e +0x6e:  mov    0x10(%ebp),%eax
0872ef81 +0x71:  add    $0x2c,%esp
0872ef84 +0x74:  pop    %ebx
0872ef85 +0x75:  pop    %esi
0872ef86 +0x76:  pop    %edi
0872ef87 +0x77:  pop    %ebp
0872ef88 +0x78:  ret
0872ef89 +0x79:  nop
0872ef8a +0x7a:  nop
0872ef8b +0x7b:  nop
0872ef8c +0x7c:  nop
0872ef8d +0x7d:  nop
0872ef8e +0x7e:  nop
0872ef8f +0x7f:  nop
```

## 反编译 C

```c
// std::ctype<wchar_t>::do_is @ 0x872ef10

/* std::ctype<wchar_t>::do_is(wchar_t const*, wchar_t const*, unsigned short*) const */

wchar_t * __thiscall
std::ctype<wchar_t>::do_is(ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,ushort *param_3)

{
  int iVar1;
  int iVar2;
  ushort local_1e;
  
  if (param_1 < param_2) {
    while( true ) {
      iVar2 = 0;
      local_1e = 0;
      do {
        iVar1 = __iswctype_l(*param_1,*(undefined4 *)(this + iVar2 * 4 + 0x4b0),
                             *(undefined4 *)(this + 8));
        if (iVar1 != 0) {
          local_1e = local_1e | *(ushort *)(this + iVar2 * 2 + 0x490);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0xc);
      param_1 = param_1 + 1;
      *param_3 = local_1e;
      if (param_2 <= param_1) break;
      param_3 = param_3 + 1;
    }
  }
  return param_2;
}
```
