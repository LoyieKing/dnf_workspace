# size

`_ZN8TaoCrypt10FileSource4sizeEb`

`TaoCrypt::FileSource::size(bool)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::FileSource` | `0x08758950` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08758950  _ZN8TaoCrypt10FileSource4sizeEb
#           TaoCrypt::FileSource::size(bool)
# range [0x08758950, 0x08758a09]
08758950 +0x00:  push   %ebp
08758951 +0x01:  mov    %esp,%ebp
08758953 +0x03:  sub    $0x38,%esp
08758956 +0x06:  mov    %esi,-0x8(%ebp)
08758959 +0x09:  mov    0x8(%ebp),%esi
0875895c +0x0c:  mov    %ebx,-0xc(%ebp)
0875895f +0x0f:  movzbl 0xc(%ebp),%ecx
08758963 +0x13:  call   08722df8 <__i686.get_pc_thunk.bx>
08758968 +0x18:  add    $0xc14230,%ebx
0875896e +0x1e:  mov    %edi,-0x4(%ebp)
08758971 +0x21:  mov    (%esi),%eax
08758973 +0x23:  mov    %cl,-0x20(%ebp)
08758976 +0x26:  mov    %eax,(%esp)
08758979 +0x29:  call   0807d9d0 <_init+0x2c8>
0875897e +0x2e:  movzbl -0x20(%ebp),%ecx
08758982 +0x32:  test   %cl,%cl
08758984 +0x34:  mov    %eax,%edi
08758986 +0x36:  mov    %eax,%edx
08758988 +0x38:  jne    087589b0 <+0x60>
0875898a +0x3a:  movl   $0x0,0x8(%esp)
08758992 +0x42:  movl   $0x0,0x4(%esp)
0875899a +0x4a:  mov    (%esi),%eax
0875899c +0x4c:  mov    %eax,(%esp)
0875899f +0x4f:  call   0807e0b0 <_init+0x9a8>
087589a4 +0x54:  mov    (%esi),%eax
087589a6 +0x56:  mov    %eax,(%esp)
087589a9 +0x59:  call   0807d9d0 <_init+0x2c8>
087589ae +0x5e:  mov    %eax,%edx
087589b0 +0x60:  movl   $0x2,0x8(%esp)
087589b8 +0x68:  movl   $0x0,0x4(%esp)
087589c0 +0x70:  mov    (%esi),%eax
087589c2 +0x72:  mov    %edx,-0x20(%ebp)
087589c5 +0x75:  mov    %eax,(%esp)
087589c8 +0x78:  call   0807e0b0 <_init+0x9a8>
087589cd +0x7d:  mov    (%esi),%eax
087589cf +0x7f:  mov    %eax,(%esp)
087589d2 +0x82:  call   0807d9d0 <_init+0x2c8>
087589d7 +0x87:  mov    %edi,0x4(%esp)
087589db +0x8b:  movl   $0x0,0x8(%esp)
087589e3 +0x93:  mov    %eax,-0x1c(%ebp)
087589e6 +0x96:  mov    (%esi),%eax
087589e8 +0x98:  mov    %eax,(%esp)
087589eb +0x9b:  call   0807e0b0 <_init+0x9a8>
087589f0 +0xa0:  mov    -0x20(%ebp),%edx
087589f3 +0xa3:  mov    -0x1c(%ebp),%eax
087589f6 +0xa6:  mov    -0xc(%ebp),%ebx
087589f9 +0xa9:  mov    -0x8(%ebp),%esi
087589fc +0xac:  mov    -0x4(%ebp),%edi
087589ff +0xaf:  mov    %ebp,%esp
08758a01 +0xb1:  sub    %edx,%eax
08758a03 +0xb3:  pop    %ebp
08758a04 +0xb4:  ret
08758a05 +0xb5:  nop
08758a06 +0xb6:  lea    0x0(%esi),%esi
08758a09 +0xb9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::FileSource::size @ 0x8758950

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::FileSource::size(bool) */

int __thiscall TaoCrypt::FileSource::size(FileSource *this,bool param_1)

{
  long __off;
  long lVar1;
  long lVar2;
  
  __off = ftell(*(FILE **)this);
  lVar1 = __off;
  if (!param_1) {
    fseek(*(FILE **)this,0,0);
    lVar1 = ftell(*(FILE **)this);
  }
  fseek(*(FILE **)this,0,2);
  lVar2 = ftell(*(FILE **)this);
  fseek(*(FILE **)this,__off,0);
  return lVar2 - lVar1;
}
```
