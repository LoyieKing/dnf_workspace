# operator<<

`_ZN6StreamlsEPc`

`Stream::operator<<(char*)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c2c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c2c8  _ZN6StreamlsEPc
#           Stream::operator<<(char*)
# range [0x0861c2c8, 0x0861c369]
0861c2c8 +0x00:  push   %ebp
0861c2c9 +0x01:  mov    %esp,%ebp
0861c2cb +0x03:  push   %esi
0861c2cc +0x04:  push   %ebx
0861c2cd +0x05:  sub    $0x20,%esp
0861c2d0 +0x08:  mov    0xc(%ebp),%eax
0861c2d3 +0x0b:  mov    %eax,0x4(%esp)
0861c2d7 +0x0f:  mov    0x8(%ebp),%eax
0861c2da +0x12:  mov    %eax,(%esp)
0861c2dd +0x15:  call   0861c86a <_ZN6Stream7str_lenEPc>  ; Stream::str_len(char*)
0861c2e2 +0x1a:  mov    %eax,-0xc(%ebp)
0861c2e5 +0x1d:  jmp    0861c303 <+0x3b>
0861c2e7 +0x1f:  mov    0x8(%ebp),%eax
0861c2ea +0x22:  mov    %eax,(%esp)
0861c2ed +0x25:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0861c2f2 +0x2a:  add    %eax,%eax
0861c2f4 +0x2c:  mov    %eax,0x4(%esp)
0861c2f8 +0x30:  mov    0x8(%ebp),%eax
0861c2fb +0x33:  mov    %eax,(%esp)
0861c2fe +0x36:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0861c303 +0x3b:  mov    -0xc(%ebp),%eax
0861c306 +0x3e:  mov    %eax,0x4(%esp)
0861c30a +0x42:  mov    0x8(%ebp),%eax
0861c30d +0x45:  mov    %eax,(%esp)
0861c310 +0x48:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0861c315 +0x4d:  xor    $0x1,%eax
0861c318 +0x50:  test   %al,%al
0861c31a +0x52:  jne    0861c2e7 <+0x1f>
0861c31c +0x54:  mov    -0xc(%ebp),%eax
0861c31f +0x57:  add    $0x1,%eax
0861c322 +0x5a:  mov    %eax,%ebx
0861c324 +0x5c:  mov    0x8(%ebp),%eax
0861c327 +0x5f:  mov    0x8(%eax),%esi
0861c32a +0x62:  mov    0x8(%ebp),%eax
0861c32d +0x65:  mov    %eax,(%esp)
0861c330 +0x68:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0861c335 +0x6d:  lea    (%esi,%eax,1),%edx
0861c338 +0x70:  mov    %ebx,0x8(%esp)
0861c33c +0x74:  mov    0xc(%ebp),%eax
0861c33f +0x77:  mov    %eax,0x4(%esp)
0861c343 +0x7b:  mov    %edx,(%esp)
0861c346 +0x7e:  call   0807d8a0 <_init+0x198>
0861c34b +0x83:  mov    -0xc(%ebp),%eax
0861c34e +0x86:  add    $0x1,%eax
0861c351 +0x89:  mov    %eax,0x4(%esp)
0861c355 +0x8d:  mov    0x8(%ebp),%eax
0861c358 +0x90:  mov    %eax,(%esp)
0861c35b +0x93:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0861c360 +0x98:  mov    0x8(%ebp),%eax
0861c363 +0x9b:  add    $0x20,%esp
0861c366 +0x9e:  pop    %ebx
0861c367 +0x9f:  pop    %esi
0861c368 +0xa0:  pop    %ebp
0861c369 +0xa1:  ret
```

## 反编译 C

```c
// Stream::operator<< @ 0x861c2c8

/* Stream::TEMPNAMEPLACEHOLDERVALUE(char*) */

Stream * __thiscall Stream::operator<<(Stream *this,char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = str_len(this,param_1);
  while( true ) {
    cVar1 = enable_in(this,iVar2);
    if (cVar1 == '\x01') break;
    iVar3 = size(this);
    resize(this,iVar3 * 2);
  }
  iVar3 = *(int *)(this + 8);
  iVar4 = in_ptr(this);
  memcpy((void *)(iVar3 + iVar4),param_1,iVar2 + 1);
  in_ptr(this,iVar2 + 1);
  return this;
}
```
