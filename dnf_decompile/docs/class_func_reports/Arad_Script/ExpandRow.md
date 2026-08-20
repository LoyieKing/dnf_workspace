# ExpandRow

`_ZN11Arad_Script9ExpandRowEv`

`Arad_Script::ExpandRow()`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817b892` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817b892  _ZN11Arad_Script9ExpandRowEv
#           Arad_Script::ExpandRow()
# range [0x0817b892, 0x0817b94f]
0817b892 +0x00:  push   %ebp
0817b893 +0x01:  mov    %esp,%ebp
0817b895 +0x03:  sub    $0x28,%esp
0817b898 +0x06:  mov    0x8(%ebp),%eax
0817b89b +0x09:  mov    0x4(%eax),%eax
0817b89e +0x0c:  lea    (%eax,%eax,1),%edx
0817b8a1 +0x0f:  mov    0x8(%ebp),%eax
0817b8a4 +0x12:  mov    %edx,0x4(%eax)
0817b8a7 +0x15:  mov    0x8(%ebp),%eax
0817b8aa +0x18:  mov    0x4(%eax),%edx
0817b8ad +0x1b:  mov    0x8(%ebp),%eax
0817b8b0 +0x1e:  mov    (%eax),%eax
0817b8b2 +0x20:  imul   %edx,%eax
0817b8b5 +0x23:  mov    %eax,%edx
0817b8b7 +0x25:  shl    $0x7,%edx
0817b8ba +0x28:  mov    0x8(%ebp),%eax
0817b8bd +0x2b:  mov    %edx,0x10(%eax)
0817b8c0 +0x2e:  mov    0x8(%ebp),%eax
0817b8c3 +0x31:  mov    0x10(%eax),%eax
0817b8c6 +0x34:  mov    %eax,(%esp)
0817b8c9 +0x37:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
0817b8ce +0x3c:  mov    %eax,-0x10(%ebp)
0817b8d1 +0x3f:  cmpl   $0x0,-0x10(%ebp)
0817b8d5 +0x43:  jne    0817b8de <+0x4c>
0817b8d7 +0x45:  mov    $0x0,%eax
0817b8dc +0x4a:  jmp    0817b94e <+0xbc>
0817b8de +0x4c:  mov    0x8(%ebp),%eax
0817b8e1 +0x4f:  mov    0x10(%eax),%eax
0817b8e4 +0x52:  mov    %eax,-0xc(%ebp)
0817b8e7 +0x55:  mov    0x8(%ebp),%eax
0817b8ea +0x58:  mov    0x10(%eax),%eax
0817b8ed +0x5b:  sub    -0xc(%ebp),%eax
0817b8f0 +0x5e:  mov    %eax,%edx
0817b8f2 +0x60:  mov    -0xc(%ebp),%eax
0817b8f5 +0x63:  add    -0x10(%ebp),%eax
0817b8f8 +0x66:  mov    %edx,0x8(%esp)
0817b8fc +0x6a:  movl   $0x0,0x4(%esp)
0817b904 +0x72:  mov    %eax,(%esp)
0817b907 +0x75:  call   0807dcc0 <_init+0x5b8>
0817b90c +0x7a:  mov    -0xc(%ebp),%edx
0817b90f +0x7d:  mov    0x8(%ebp),%eax
0817b912 +0x80:  mov    0x14(%eax),%eax
0817b915 +0x83:  mov    %edx,0x8(%esp)
0817b919 +0x87:  mov    %eax,0x4(%esp)
0817b91d +0x8b:  mov    -0x10(%ebp),%eax
0817b920 +0x8e:  mov    %eax,(%esp)
0817b923 +0x91:  call   0807d8a0 <_init+0x198>
0817b928 +0x96:  mov    0x8(%ebp),%eax
0817b92b +0x99:  mov    0x14(%eax),%eax
0817b92e +0x9c:  test   %eax,%eax
0817b930 +0x9e:  je     0817b940 <+0xae>
0817b932 +0xa0:  mov    0x8(%ebp),%eax
0817b935 +0xa3:  mov    0x14(%eax),%eax
0817b938 +0xa6:  mov    %eax,(%esp)
0817b93b +0xa9:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0817b940 +0xae:  mov    0x8(%ebp),%eax
0817b943 +0xb1:  mov    -0x10(%ebp),%edx
0817b946 +0xb4:  mov    %edx,0x14(%eax)
0817b949 +0xb7:  mov    $0x1,%eax
0817b94e +0xbc:  leave
0817b94f +0xbd:  ret
```

## 反编译 C

```c
// Arad_Script::ExpandRow @ 0x817b892

/* Arad_Script::ExpandRow() */

undefined4 __thiscall Arad_Script::ExpandRow(Arad_Script *this)

{
  size_t __n;
  void *__dest;
  undefined4 uVar1;
  
  *(int *)(this + 4) = *(int *)(this + 4) * 2;
  *(int *)(this + 0x10) = *(int *)this * *(int *)(this + 4) * 0x80;
  __dest = operator_new__(*(uint *)(this + 0x10));
  if (__dest == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    __n = *(size_t *)(this + 0x10);
    memset((void *)(__n + (int)__dest),0,*(int *)(this + 0x10) - __n);
    memcpy(__dest,*(void **)(this + 0x14),__n);
    if (*(int *)(this + 0x14) != 0) {
      operator_delete__(*(void **)(this + 0x14));
    }
    *(void **)(this + 0x14) = __dest;
    uVar1 = 1;
  }
  return uVar1;
}
```
