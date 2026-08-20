# ExpandCol

`_ZN11Arad_Script9ExpandColEv`

`Arad_Script::ExpandCol()`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817b800` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817b800  _ZN11Arad_Script9ExpandColEv
#           Arad_Script::ExpandCol()
# range [0x0817b800, 0x0817b891]
0817b800 +0x00:  push   %ebp
0817b801 +0x01:  mov    %esp,%ebp
0817b803 +0x03:  sub    $0x28,%esp
0817b806 +0x06:  mov    0x8(%ebp),%eax
0817b809 +0x09:  mov    (%eax),%eax
0817b80b +0x0b:  lea    0x20(%eax),%edx
0817b80e +0x0e:  mov    0x8(%ebp),%eax
0817b811 +0x11:  mov    %edx,(%eax)
0817b813 +0x13:  mov    0x8(%ebp),%eax
0817b816 +0x16:  mov    0x4(%eax),%eax
0817b819 +0x19:  mov    %eax,%edx
0817b81b +0x1b:  mov    0x8(%ebp),%eax
0817b81e +0x1e:  mov    (%eax),%eax
0817b820 +0x20:  imul   %edx,%eax
0817b823 +0x23:  shl    $0x7,%eax
0817b826 +0x26:  mov    %eax,%edx
0817b828 +0x28:  mov    0x8(%ebp),%eax
0817b82b +0x2b:  mov    %edx,0x10(%eax)
0817b82e +0x2e:  mov    0x8(%ebp),%eax
0817b831 +0x31:  mov    0x10(%eax),%eax
0817b834 +0x34:  mov    %eax,(%esp)
0817b837 +0x37:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
0817b83c +0x3c:  mov    %eax,-0xc(%ebp)
0817b83f +0x3f:  cmpl   $0x0,-0xc(%ebp)
0817b843 +0x43:  jne    0817b84c <+0x4c>
0817b845 +0x45:  mov    $0x0,%eax
0817b84a +0x4a:  jmp    0817b88f <+0x8f>
0817b84c +0x4c:  mov    0x8(%ebp),%eax
0817b84f +0x4f:  mov    0x10(%eax),%eax
0817b852 +0x52:  mov    %eax,0x8(%esp)
0817b856 +0x56:  movl   $0x0,0x4(%esp)
0817b85e +0x5e:  mov    -0xc(%ebp),%eax
0817b861 +0x61:  mov    %eax,(%esp)
0817b864 +0x64:  call   0807dcc0 <_init+0x5b8>
0817b869 +0x69:  mov    0x8(%ebp),%eax
0817b86c +0x6c:  mov    0x14(%eax),%eax
0817b86f +0x6f:  test   %eax,%eax
0817b871 +0x71:  je     0817b881 <+0x81>
0817b873 +0x73:  mov    0x8(%ebp),%eax
0817b876 +0x76:  mov    0x14(%eax),%eax
0817b879 +0x79:  mov    %eax,(%esp)
0817b87c +0x7c:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0817b881 +0x81:  mov    0x8(%ebp),%eax
0817b884 +0x84:  mov    -0xc(%ebp),%edx
0817b887 +0x87:  mov    %edx,0x14(%eax)
0817b88a +0x8a:  mov    $0x1,%eax
0817b88f +0x8f:  leave
0817b890 +0x90:  ret
0817b891 +0x91:  nop
```

## 反编译 C

```c
// Arad_Script::ExpandCol @ 0x817b800

/* Arad_Script::ExpandCol() */

undefined4 __thiscall Arad_Script::ExpandCol(Arad_Script *this)

{
  void *__s;
  undefined4 uVar1;
  
  *(int *)this = *(int *)this + 0x20;
  *(int *)(this + 0x10) = *(int *)this * *(int *)(this + 4) * 0x80;
  __s = operator_new__(*(uint *)(this + 0x10));
  if (__s == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    memset(__s,0,*(size_t *)(this + 0x10));
    if (*(int *)(this + 0x14) != 0) {
      operator_delete__(*(void **)(this + 0x14));
    }
    *(void **)(this + 0x14) = __s;
    uVar1 = 1;
  }
  return uVar1;
}
```
