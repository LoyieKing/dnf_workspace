# operator>>

`_ZN6StreamrsEPc`

`Stream::operator>>(char*)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c6a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c6a8  _ZN6StreamrsEPc
#           Stream::operator>>(char*)
# range [0x0861c6a8, 0x0861c731]
0861c6a8 +0x00:  push   %ebp
0861c6a9 +0x01:  mov    %esp,%ebp
0861c6ab +0x03:  push   %ebx
0861c6ac +0x04:  sub    $0x24,%esp
0861c6af +0x07:  mov    0x8(%ebp),%eax
0861c6b2 +0x0a:  mov    %eax,(%esp)
0861c6b5 +0x0d:  call   0861bdd4 <_ZN6Stream6lengthEv>  ; Stream::length()
0861c6ba +0x12:  test   %eax,%eax
0861c6bc +0x14:  sete   %al
0861c6bf +0x17:  test   %al,%al
0861c6c1 +0x19:  je     0861c6ca <+0x22>
0861c6c3 +0x1b:  mov    $0x0,%eax
0861c6c8 +0x20:  jmp    0861c72c <+0x84>
0861c6ca +0x22:  mov    0x8(%ebp),%eax
0861c6cd +0x25:  mov    0x8(%eax),%ebx
0861c6d0 +0x28:  mov    0x8(%ebp),%eax
0861c6d3 +0x2b:  mov    %eax,(%esp)
0861c6d6 +0x2e:  call   0861be28 <_ZN6Stream7out_ptrEv>  ; Stream::out_ptr()
0861c6db +0x33:  lea    (%ebx,%eax,1),%eax
0861c6de +0x36:  mov    %eax,-0x10(%ebp)
0861c6e1 +0x39:  mov    -0x10(%ebp),%eax
0861c6e4 +0x3c:  mov    %eax,0x4(%esp)
0861c6e8 +0x40:  mov    0x8(%ebp),%eax
0861c6eb +0x43:  mov    %eax,(%esp)
0861c6ee +0x46:  call   0861c86a <_ZN6Stream7str_lenEPc>  ; Stream::str_len(char*)
0861c6f3 +0x4b:  mov    %eax,-0xc(%ebp)
0861c6f6 +0x4e:  mov    -0xc(%ebp),%eax
0861c6f9 +0x51:  add    $0x1,%eax
0861c6fc +0x54:  mov    %eax,0x8(%esp)
0861c700 +0x58:  mov    -0x10(%ebp),%eax
0861c703 +0x5b:  mov    %eax,0x4(%esp)
0861c707 +0x5f:  mov    0xc(%ebp),%eax
0861c70a +0x62:  mov    %eax,(%esp)
0861c70d +0x65:  call   0807d8a0 <_init+0x198>
0861c712 +0x6a:  mov    -0xc(%ebp),%eax
0861c715 +0x6d:  add    $0x1,%eax
0861c718 +0x70:  mov    %eax,0x4(%esp)
0861c71c +0x74:  mov    0x8(%ebp),%eax
0861c71f +0x77:  mov    %eax,(%esp)
0861c722 +0x7a:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0861c727 +0x7f:  mov    $0x1,%eax
0861c72c +0x84:  add    $0x24,%esp
0861c72f +0x87:  pop    %ebx
0861c730 +0x88:  pop    %ebp
0861c731 +0x89:  ret
```

## 反编译 C

```c
// Stream::operator>> @ 0x861c6a8

/* Stream::TEMPNAMEPLACEHOLDERVALUE(char*) */

bool __thiscall Stream::operator>>(Stream *this,char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = length(this);
  if (iVar2 != 0) {
    iVar1 = *(int *)(this + 8);
    iVar3 = out_ptr(this);
    iVar4 = str_len(this,(char *)(iVar1 + iVar3));
    memcpy(param_1,(char *)(iVar1 + iVar3),iVar4 + 1);
    out_ptr(this,iVar4 + 1);
  }
  return iVar2 != 0;
}
```
