# do_narrow

`_ZNKSt5ctypeIwE9do_narrowEPKwS2_cPc`

`std::ctype<wchar_t>::do_narrow(wchar_t const*, wchar_t const*, char, char*) const`

| 类 | 地址 |
|---|---|
| `std::ctype<wchar_t>` | `0x0872edc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872edc0  _ZNKSt5ctypeIwE9do_narrowEPKwS2_cPc
#           std::ctype<wchar_t>::do_narrow(wchar_t const*, wchar_t const*, char, char*) const
# range [0x0872edc0, 0x0872ee8f]
0872edc0 +0x00:  push   %ebp
0872edc1 +0x01:  mov    %esp,%ebp
0872edc3 +0x03:  push   %edi
0872edc4 +0x04:  push   %esi
0872edc5 +0x05:  push   %ebx
0872edc6 +0x06:  sub    $0x2c,%esp
0872edc9 +0x09:  mov    0x8(%ebp),%edx
0872edcc +0x0c:  movzbl 0x14(%ebp),%eax
0872edd0 +0x10:  mov    0xc(%ebp),%ebx
0872edd3 +0x13:  mov    0x10(%ebp),%edi
0872edd6 +0x16:  mov    %edx,-0x24(%ebp)
0872edd9 +0x19:  mov    0x18(%ebp),%esi
0872eddc +0x1c:  mov    %al,-0x19(%ebp)
0872eddf +0x1f:  mov    0x8(%edx),%eax
0872ede2 +0x22:  mov    %eax,(%esp)
0872ede5 +0x25:  call   0807de70 <_init+0x768>
0872edea +0x2a:  mov    -0x24(%ebp),%edx
0872eded +0x2d:  cmpb   $0x0,0xc(%edx)
0872edf1 +0x31:  mov    %eax,-0x20(%ebp)
0872edf4 +0x34:  jne    0872ee38 <+0x78>
0872edf6 +0x36:  cmp    %edi,%ebx
0872edf8 +0x38:  jb     0872ee25 <+0x65>
0872edfa +0x3a:  lea    0x0(%esi),%esi
0872ee00 +0x40:  mov    -0x20(%ebp),%eax
0872ee03 +0x43:  mov    %eax,(%esp)
0872ee06 +0x46:  call   0807de70 <_init+0x768>
0872ee0b +0x4b:  add    $0x2c,%esp
0872ee0e +0x4e:  mov    %edi,%eax
0872ee10 +0x50:  pop    %ebx
0872ee11 +0x51:  pop    %esi
0872ee12 +0x52:  pop    %edi
0872ee13 +0x53:  pop    %ebp
0872ee14 +0x54:  ret
0872ee15 +0x55:  movzbl -0x19(%ebp),%edx
0872ee19 +0x59:  add    $0x4,%ebx
0872ee1c +0x5c:  cmp    %ebx,%edi
0872ee1e +0x5e:  mov    %dl,(%esi)
0872ee20 +0x60:  jbe    0872ee00 <+0x40>
0872ee22 +0x62:  add    $0x1,%esi
0872ee25 +0x65:  mov    (%ebx),%eax
0872ee27 +0x67:  mov    %eax,(%esp)
0872ee2a +0x6a:  call   0807e2d0 <_init+0xbc8>
0872ee2f +0x6f:  cmp    $0xffffffff,%eax
0872ee32 +0x72:  mov    %eax,%edx
0872ee34 +0x74:  jne    0872ee19 <+0x59>
0872ee36 +0x76:  jmp    0872ee15 <+0x55>
0872ee38 +0x78:  cmp    %edi,%ebx
0872ee3a +0x7a:  jae    0872ee00 <+0x40>
0872ee3c +0x7c:  mov    (%ebx),%eax
0872ee3e +0x7e:  cmp    $0x7f,%eax
0872ee41 +0x81:  ja     0872ee60 <+0xa0>
0872ee43 +0x83:  nop
0872ee44 +0x84:  lea    0x0(%esi,%eiz,1),%esi
0872ee48 +0x88:  movzbl 0xd(%edx,%eax,1),%eax
0872ee4d +0x8d:  mov    %al,(%esi)
0872ee4f +0x8f:  add    $0x4,%ebx
0872ee52 +0x92:  cmp    %ebx,%edi
0872ee54 +0x94:  jbe    0872ee00 <+0x40>
0872ee56 +0x96:  mov    (%ebx),%eax
0872ee58 +0x98:  add    $0x1,%esi
0872ee5b +0x9b:  cmp    $0x7f,%eax
0872ee5e +0x9e:  jbe    0872ee48 <+0x88>
0872ee60 +0xa0:  mov    %edx,-0x24(%ebp)
0872ee63 +0xa3:  mov    %eax,(%esp)
0872ee66 +0xa6:  call   0807e2d0 <_init+0xbc8>
0872ee6b +0xab:  mov    -0x24(%ebp),%edx
0872ee6e +0xae:  cmp    $0xffffffff,%eax
0872ee71 +0xb1:  mov    %eax,%ecx
0872ee73 +0xb3:  je     0872ee80 <+0xc0>
0872ee75 +0xb5:  mov    %cl,(%esi)
0872ee77 +0xb7:  jmp    0872ee4f <+0x8f>
0872ee79 +0xb9:  lea    0x0(%esi,%eiz,1),%esi
0872ee80 +0xc0:  movzbl -0x19(%ebp),%ecx
0872ee84 +0xc4:  mov    %cl,(%esi)
0872ee86 +0xc6:  jmp    0872ee4f <+0x8f>
0872ee88 +0xc8:  nop
0872ee89 +0xc9:  nop
0872ee8a +0xca:  nop
0872ee8b +0xcb:  nop
0872ee8c +0xcc:  nop
0872ee8d +0xcd:  nop
0872ee8e +0xce:  nop
0872ee8f +0xcf:  nop
```

## 反编译 C

```c
// std::ctype<wchar_t>::do_narrow @ 0x872edc0

/* std::ctype<wchar_t>::do_narrow(wchar_t const*, wchar_t const*, char, char*) const */

wchar_t * __thiscall
std::ctype<wchar_t>::do_narrow
          (ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,char param_3,char *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  wchar_t __c;
  int iVar3;
  
  uVar1 = __uselocale(*(undefined4 *)(this + 8));
  if (this[0xc] == (ctype<wchar_t>)0x0) {
    if (param_1 < param_2) {
      while( true ) {
        uVar2 = wctob(*param_1);
        if (uVar2 == 0xffffffff) {
          uVar2 = (uint)(byte)param_3;
        }
        param_1 = param_1 + 1;
        *param_4 = (char)uVar2;
        if (param_2 <= param_1) break;
        param_4 = param_4 + 1;
      }
    }
  }
  else if (param_1 < param_2) {
    __c = *param_1;
    if (0x7f < (uint)__c) goto LAB_0872ee60;
    do {
      *param_4 = (char)this[__c + L'\r'];
      while( true ) {
        param_1 = param_1 + 1;
        if (param_2 <= param_1) goto LAB_0872ee00;
        __c = *param_1;
        param_4 = param_4 + 1;
        if ((uint)__c < 0x80) break;
LAB_0872ee60:
        iVar3 = wctob(__c);
        if (iVar3 == -1) {
          *param_4 = param_3;
        }
        else {
          *param_4 = (char)SUB41(iVar3,0);
        }
      }
    } while( true );
  }
LAB_0872ee00:
  __uselocale(uVar1);
  return param_2;
}
```
