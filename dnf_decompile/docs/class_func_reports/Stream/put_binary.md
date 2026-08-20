# put_binary

`_ZN6Stream10put_binaryEPvi`

`Stream::put_binary(void*, int)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c3f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c3f4  _ZN6Stream10put_binaryEPvi
#           Stream::put_binary(void*, int)
# range [0x0861c3f4, 0x0861c47b]
0861c3f4 +0x00:  push   %ebp
0861c3f5 +0x01:  mov    %esp,%ebp
0861c3f7 +0x03:  push   %esi
0861c3f8 +0x04:  push   %ebx
0861c3f9 +0x05:  sub    $0x10,%esp
0861c3fc +0x08:  jmp    0861c41a <+0x26>
0861c3fe +0x0a:  mov    0x8(%ebp),%eax
0861c401 +0x0d:  mov    %eax,(%esp)
0861c404 +0x10:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0861c409 +0x15:  add    %eax,%eax
0861c40b +0x17:  mov    %eax,0x4(%esp)
0861c40f +0x1b:  mov    0x8(%ebp),%eax
0861c412 +0x1e:  mov    %eax,(%esp)
0861c415 +0x21:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0861c41a +0x26:  mov    0x10(%ebp),%eax
0861c41d +0x29:  mov    %eax,0x4(%esp)
0861c421 +0x2d:  mov    0x8(%ebp),%eax
0861c424 +0x30:  mov    %eax,(%esp)
0861c427 +0x33:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0861c42c +0x38:  xor    $0x1,%eax
0861c42f +0x3b:  test   %al,%al
0861c431 +0x3d:  jne    0861c3fe <+0xa>
0861c433 +0x3f:  mov    0x10(%ebp),%ebx
0861c436 +0x42:  mov    0x8(%ebp),%eax
0861c439 +0x45:  mov    0x8(%eax),%esi
0861c43c +0x48:  mov    0x8(%ebp),%eax
0861c43f +0x4b:  mov    %eax,(%esp)
0861c442 +0x4e:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0861c447 +0x53:  lea    (%esi,%eax,1),%edx
0861c44a +0x56:  mov    %ebx,0x8(%esp)
0861c44e +0x5a:  mov    0xc(%ebp),%eax
0861c451 +0x5d:  mov    %eax,0x4(%esp)
0861c455 +0x61:  mov    %edx,(%esp)
0861c458 +0x64:  call   0807d8a0 <_init+0x198>
0861c45d +0x69:  mov    0x10(%ebp),%eax
0861c460 +0x6c:  mov    %eax,0x4(%esp)
0861c464 +0x70:  mov    0x8(%ebp),%eax
0861c467 +0x73:  mov    %eax,(%esp)
0861c46a +0x76:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0861c46f +0x7b:  mov    $0x1,%eax
0861c474 +0x80:  add    $0x10,%esp
0861c477 +0x83:  pop    %ebx
0861c478 +0x84:  pop    %esi
0861c479 +0x85:  pop    %ebp
0861c47a +0x86:  ret
0861c47b +0x87:  nop
```

## 反编译 C

```c
// Stream::put_binary @ 0x861c3f4

/* Stream::put_binary(void*, int) */

undefined4 __thiscall Stream::put_binary(Stream *this,void *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    cVar1 = enable_in(this,param_2);
    if (cVar1 == '\x01') break;
    iVar2 = size(this);
    resize(this,iVar2 * 2);
  }
  iVar2 = *(int *)(this + 8);
  iVar3 = in_ptr(this);
  memcpy((void *)(iVar2 + iVar3),param_1,param_2);
  in_ptr(this,param_2);
  return 1;
}
```
