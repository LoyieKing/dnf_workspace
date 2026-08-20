# DoQuery

`_ZN10DbmwClient7DoQueryEv`

`DbmwClient::DoQuery()`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x08120cd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08120cd0  _ZN10DbmwClient7DoQueryEv
#           DbmwClient::DoQuery()
# range [0x08120cd0, 0x08120dab]
08120cd0 +0x00:  push   %ebp
08120cd1 +0x01:  mov    %esp,%ebp
08120cd3 +0x03:  sub    $0x28,%esp
08120cd6 +0x06:  mov    0x8(%ebp),%eax
08120cd9 +0x09:  movl   $0x0,0x30(%eax)
08120ce0 +0x10:  mov    0x8(%ebp),%eax
08120ce3 +0x13:  add    $0x34,%eax
08120ce6 +0x16:  mov    %eax,(%esp)
08120ce9 +0x19:  call   0807e3b0 <_init+0xca8>
08120cee +0x1e:  mov    %eax,-0x10(%ebp)
08120cf1 +0x21:  cmpl   $0xfff,-0x10(%ebp)
08120cf8 +0x28:  jg     08120d00 <+0x30>
08120cfa +0x2a:  cmpl   $0x7,-0x10(%ebp)
08120cfe +0x2e:  jg     08120d0a <+0x3a>
08120d00 +0x30:  mov    $0x0,%eax
08120d05 +0x35:  jmp    08120daa <+0xda>
08120d0a +0x3a:  mov    0x8(%ebp),%eax
08120d0d +0x3d:  mov    0x1038(%eax),%eax
08120d13 +0x43:  cmp    -0x10(%ebp),%eax
08120d16 +0x46:  je     08120d22 <+0x52>
08120d18 +0x48:  mov    $0x0,%eax
08120d1d +0x4d:  jmp    08120daa <+0xda>
08120d22 +0x52:  mov    0x8(%ebp),%eax
08120d25 +0x55:  mov    0x1038(%eax),%eax
08120d2b +0x5b:  mov    %eax,0x8(%esp)
08120d2f +0x5f:  movl   $0x1,0x4(%esp)
08120d37 +0x67:  mov    0x8(%ebp),%eax
08120d3a +0x6a:  mov    %eax,(%esp)
08120d3d +0x6d:  call   08120654 <_ZN10DbmwClient10SendHeaderEci>  ; DbmwClient::SendHeader(char, int)
08120d42 +0x72:  xor    $0x1,%eax
08120d45 +0x75:  test   %al,%al
08120d47 +0x77:  je     08120d5b <+0x8b>
08120d49 +0x79:  mov    0x8(%ebp),%eax
08120d4c +0x7c:  mov    %eax,(%esp)
08120d4f +0x7f:  call   08120ab0 <_ZN10DbmwClient5CloseEv>  ; DbmwClient::Close()
08120d54 +0x84:  mov    $0x0,%eax
08120d59 +0x89:  jmp    08120daa <+0xda>
08120d5b +0x8b:  mov    0x8(%ebp),%eax
08120d5e +0x8e:  mov    0x1038(%eax),%eax
08120d64 +0x94:  mov    %eax,%edx
08120d66 +0x96:  mov    0x8(%ebp),%eax
08120d69 +0x99:  lea    0x34(%eax),%ecx
08120d6c +0x9c:  mov    0x8(%ebp),%eax
08120d6f +0x9f:  mov    0x8(%eax),%eax
08120d72 +0xa2:  movl   $0x0,0xc(%esp)
08120d7a +0xaa:  mov    %edx,0x8(%esp)
08120d7e +0xae:  mov    %ecx,0x4(%esp)
08120d82 +0xb2:  mov    %eax,(%esp)
08120d85 +0xb5:  call   0807db40 <_init+0x438>
08120d8a +0xba:  mov    %eax,-0xc(%ebp)
08120d8d +0xbd:  cmpl   $0x0,-0xc(%ebp)
08120d91 +0xc1:  jg     08120da5 <+0xd5>
08120d93 +0xc3:  mov    0x8(%ebp),%eax
08120d96 +0xc6:  mov    %eax,(%esp)
08120d99 +0xc9:  call   08120ab0 <_ZN10DbmwClient5CloseEv>  ; DbmwClient::Close()
08120d9e +0xce:  mov    $0x0,%eax
08120da3 +0xd3:  jmp    08120daa <+0xda>
08120da5 +0xd5:  mov    $0x1,%eax
08120daa +0xda:  leave
08120dab +0xdb:  ret
```

## 反编译 C

```c
// DbmwClient::DoQuery @ 0x8120cd0

/* DbmwClient::DoQuery() */

undefined4 __thiscall DbmwClient::DoQuery(DbmwClient *this)

{
  char cVar1;
  size_t sVar2;
  undefined4 uVar3;
  ssize_t sVar4;
  
  *(undefined4 *)(this + 0x30) = 0;
  sVar2 = strlen((char *)(this + 0x34));
  if (((int)sVar2 < 0x1000) && (7 < (int)sVar2)) {
    if (*(size_t *)(this + 0x1038) == sVar2) {
      cVar1 = SendHeader(this,'\x01',*(int *)(this + 0x1038));
      if (cVar1 == '\x01') {
        sVar4 = ::send(*(int *)(this + 8),this + 0x34,*(size_t *)(this + 0x1038),0);
        if (sVar4 < 1) {
          Close(this);
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        Close(this);
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
