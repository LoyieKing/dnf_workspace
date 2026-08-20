# Create

`_ZN11Arad_Script6CreateEv`

`Arad_Script::Create()`

| 类 | 地址 |
|---|---|
| `Arad_Script` | `0x0817b72a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817b72a  _ZN11Arad_Script6CreateEv
#           Arad_Script::Create()
# range [0x0817b72a, 0x0817b7ff]
0817b72a +0x00:  push   %ebp
0817b72b +0x01:  mov    %esp,%ebp
0817b72d +0x03:  sub    $0x18,%esp
0817b730 +0x06:  mov    0x8(%ebp),%eax
0817b733 +0x09:  mov    0x14(%eax),%eax
0817b736 +0x0c:  test   %eax,%eax
0817b738 +0x0e:  jne    0817b752 <+0x28>
0817b73a +0x10:  mov    0x8(%ebp),%eax
0817b73d +0x13:  mov    0x14(%eax),%eax
0817b740 +0x16:  test   %eax,%eax
0817b742 +0x18:  je     0817b752 <+0x28>
0817b744 +0x1a:  mov    0x8(%ebp),%eax
0817b747 +0x1d:  mov    0x14(%eax),%eax
0817b74a +0x20:  mov    %eax,(%esp)
0817b74d +0x23:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0817b752 +0x28:  mov    0x8(%ebp),%eax
0817b755 +0x2b:  movl   $0x20,(%eax)
0817b75b +0x31:  mov    0x8(%ebp),%eax
0817b75e +0x34:  movl   $0x100,0x4(%eax)
0817b765 +0x3b:  mov    0x8(%ebp),%eax
0817b768 +0x3e:  mov    (%eax),%eax
0817b76a +0x40:  mov    %eax,%edx
0817b76c +0x42:  mov    0x8(%ebp),%eax
0817b76f +0x45:  mov    0x4(%eax),%eax
0817b772 +0x48:  imul   %edx,%eax
0817b775 +0x4b:  shl    $0x7,%eax
0817b778 +0x4e:  mov    %eax,%edx
0817b77a +0x50:  mov    0x8(%ebp),%eax
0817b77d +0x53:  mov    %edx,0x10(%eax)
0817b780 +0x56:  mov    0x8(%ebp),%eax
0817b783 +0x59:  mov    0x10(%eax),%eax
0817b786 +0x5c:  mov    %eax,(%esp)
0817b789 +0x5f:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
0817b78e +0x64:  mov    %eax,%edx
0817b790 +0x66:  mov    0x8(%ebp),%eax
0817b793 +0x69:  mov    %edx,0x14(%eax)
0817b796 +0x6c:  mov    0x8(%ebp),%eax
0817b799 +0x6f:  mov    0x14(%eax),%eax
0817b79c +0x72:  test   %eax,%eax
0817b79e +0x74:  jne    0817b7a7 <+0x7d>
0817b7a0 +0x76:  mov    $0x0,%eax
0817b7a5 +0x7b:  jmp    0817b7fe <+0xd4>
0817b7a7 +0x7d:  mov    0x8(%ebp),%eax
0817b7aa +0x80:  mov    0x10(%eax),%eax
0817b7ad +0x83:  mov    %eax,%edx
0817b7af +0x85:  mov    0x8(%ebp),%eax
0817b7b2 +0x88:  mov    0x14(%eax),%eax
0817b7b5 +0x8b:  mov    %edx,0x8(%esp)
0817b7b9 +0x8f:  movl   $0x0,0x4(%esp)
0817b7c1 +0x97:  mov    %eax,(%esp)
0817b7c4 +0x9a:  call   0807dcc0 <_init+0x5b8>
0817b7c9 +0x9f:  mov    0x8(%ebp),%eax
0817b7cc +0xa2:  movl   $0x0,0x8(%eax)
0817b7d3 +0xa9:  mov    0x8(%ebp),%eax
0817b7d6 +0xac:  movl   $0x0,0xc(%eax)
0817b7dd +0xb3:  mov    0x8(%ebp),%eax
0817b7e0 +0xb6:  add    $0x24,%eax
0817b7e3 +0xb9:  mov    %eax,(%esp)
0817b7e6 +0xbc:  call   0817cc64 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xab>  ; global constructors keyed to Arad_Script::Arad_Script()+0xab
0817b7eb +0xc1:  mov    0x8(%ebp),%eax
0817b7ee +0xc4:  add    $0x3c,%eax
0817b7f1 +0xc7:  mov    %eax,(%esp)
0817b7f4 +0xca:  call   0817cc64 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xab>  ; global constructors keyed to Arad_Script::Arad_Script()+0xab
0817b7f9 +0xcf:  mov    $0x1,%eax
0817b7fe +0xd4:  leave
0817b7ff +0xd5:  ret
```

## 反编译 C

```c
// Arad_Script::Create @ 0x817b72a

/* Arad_Script::Create() */

bool __thiscall Arad_Script::Create(Arad_Script *this)

{
  int iVar1;
  void *pvVar2;
  
  if ((*(int *)(this + 0x14) == 0) && (*(int *)(this + 0x14) != 0)) {
    operator_delete__(*(void **)(this + 0x14));
  }
  *(undefined4 *)this = 0x20;
  *(undefined4 *)(this + 4) = 0x100;
  *(int *)(this + 0x10) = *(int *)(this + 4) * *(int *)this * 0x80;
  pvVar2 = operator_new__(*(uint *)(this + 0x10));
  *(void **)(this + 0x14) = pvVar2;
  iVar1 = *(int *)(this + 0x14);
  if (iVar1 != 0) {
    memset(*(void **)(this + 0x14),0,*(size_t *)(this + 0x10));
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    std::
    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
    clear((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           *)(this + 0x24));
    std::
    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
    clear((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           *)(this + 0x3c));
  }
  return iVar1 != 0;
}
```
