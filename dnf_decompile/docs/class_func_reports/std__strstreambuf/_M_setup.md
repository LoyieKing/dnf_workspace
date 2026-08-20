# _M_setup

`_ZNSt12strstreambuf8_M_setupEPcS0_i`

`std::strstreambuf::_M_setup(char*, char*, int)`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086dd980` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd980  _ZNSt12strstreambuf8_M_setupEPcS0_i
#           std::strstreambuf::_M_setup(char*, char*, int)
# range [0x086dd980, 0x086dd9ff]
086dd980 +0x00:  push   %ebp
086dd981 +0x01:  mov    %esp,%ebp
086dd983 +0x03:  sub    $0x28,%esp
086dd986 +0x06:  mov    %edi,-0x4(%ebp)
086dd989 +0x09:  mov    0xc(%ebp),%edi
086dd98c +0x0c:  mov    %ebx,-0xc(%ebp)
086dd98f +0x0f:  mov    0x8(%ebp),%ebx
086dd992 +0x12:  mov    %esi,-0x8(%ebp)
086dd995 +0x15:  mov    0x10(%ebp),%esi
086dd998 +0x18:  test   %edi,%edi
086dd99a +0x1a:  je     086dd9bc <+0x3c>
086dd99c +0x1c:  mov    0x14(%ebp),%eax
086dd99f +0x1f:  cmp    $0x0,%eax
086dd9a2 +0x22:  jle    086dd9d0 <+0x50>
086dd9a4 +0x24:  test   %esi,%esi
086dd9a6 +0x26:  je     086dd9e0 <+0x60>
086dd9a8 +0x28:  mov    %esi,0xc(%ebx)
086dd9ab +0x2b:  mov    %esi,0x14(%ebx)
086dd9ae +0x2e:  mov    %esi,0x10(%ebx)
086dd9b1 +0x31:  add    %eax,%esi
086dd9b3 +0x33:  mov    %edi,0x4(%ebx)
086dd9b6 +0x36:  mov    %edi,0x8(%ebx)
086dd9b9 +0x39:  mov    %esi,0x18(%ebx)
086dd9bc +0x3c:  mov    -0xc(%ebp),%ebx
086dd9bf +0x3f:  mov    -0x8(%ebp),%esi
086dd9c2 +0x42:  mov    -0x4(%ebp),%edi
086dd9c5 +0x45:  mov    %ebp,%esp
086dd9c7 +0x47:  pop    %ebp
086dd9c8 +0x48:  ret
086dd9c9 +0x49:  lea    0x0(%esi,%eiz,1),%esi
086dd9d0 +0x50:  jne    086dd9f8 <+0x78>
086dd9d2 +0x52:  mov    %edi,(%esp)
086dd9d5 +0x55:  call   0807e3b0 <_init+0xca8>
086dd9da +0x5a:  test   %esi,%esi
086dd9dc +0x5c:  jne    086dd9a8 <+0x28>
086dd9de +0x5e:  xchg   %ax,%ax
086dd9e0 +0x60:  mov    %edi,0x4(%ebx)
086dd9e3 +0x63:  mov    %edi,0x8(%ebx)
086dd9e6 +0x66:  add    %eax,%edi
086dd9e8 +0x68:  mov    %edi,0xc(%ebx)
086dd9eb +0x6b:  mov    -0xc(%ebp),%ebx
086dd9ee +0x6e:  mov    -0x8(%ebp),%esi
086dd9f1 +0x71:  mov    -0x4(%ebp),%edi
086dd9f4 +0x74:  mov    %ebp,%esp
086dd9f6 +0x76:  pop    %ebp
086dd9f7 +0x77:  ret
086dd9f8 +0x78:  mov    $0x7fffffff,%eax
086dd9fd +0x7d:  jmp    086dd9a4 <+0x24>
086dd9ff +0x7f:  nop
```

## 反编译 C

```c
// std::strstreambuf::_M_setup @ 0x86dd980

/* std::strstreambuf::_M_setup(char*, char*, int) */

void __thiscall
std::strstreambuf::_M_setup(strstreambuf *this,char *param_1,char *param_2,int param_3)

{
  if (param_1 != (char *)0x0) {
    if (param_3 < 1) {
      if (param_3 == 0) {
        param_3 = strlen(param_1);
      }
      else {
        param_3 = 0x7fffffff;
      }
    }
    if (param_2 == (char *)0x0) {
      *(char **)(this + 4) = param_1;
      *(char **)(this + 8) = param_1;
      *(char **)(this + 0xc) = param_1 + param_3;
      return;
    }
    *(char **)(this + 0xc) = param_2;
    *(char **)(this + 0x14) = param_2;
    *(char **)(this + 0x10) = param_2;
    *(char **)(this + 4) = param_1;
    *(char **)(this + 8) = param_1;
    *(char **)(this + 0x18) = param_2 + param_3;
  }
  return;
}
```
