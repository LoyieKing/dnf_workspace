# operator>>

`_ZN6StreamrsERb`

`Stream::operator>>(bool&)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c47c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c47c  _ZN6StreamrsERb
#           Stream::operator>>(bool&)
# range [0x0861c47c, 0x0861c4ef]
0861c47c +0x00:  push   %ebp
0861c47d +0x01:  mov    %esp,%ebp
0861c47f +0x03:  push   %ebx
0861c480 +0x04:  sub    $0x24,%esp
0861c483 +0x07:  movl   $0x1,0x4(%esp)
0861c48b +0x0f:  mov    0x8(%ebp),%eax
0861c48e +0x12:  mov    %eax,(%esp)
0861c491 +0x15:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0861c496 +0x1a:  xor    $0x1,%eax
0861c499 +0x1d:  test   %al,%al
0861c49b +0x1f:  je     0861c4a4 <+0x28>
0861c49d +0x21:  mov    $0x0,%eax
0861c4a2 +0x26:  jmp    0861c4ea <+0x6e>
0861c4a4 +0x28:  mov    0x8(%ebp),%eax
0861c4a7 +0x2b:  mov    0x8(%eax),%ebx
0861c4aa +0x2e:  mov    0x8(%ebp),%eax
0861c4ad +0x31:  mov    %eax,(%esp)
0861c4b0 +0x34:  call   0861be28 <_ZN6Stream7out_ptrEv>  ; Stream::out_ptr()
0861c4b5 +0x39:  lea    (%ebx,%eax,1),%eax
0861c4b8 +0x3c:  movzbl (%eax),%eax
0861c4bb +0x3f:  mov    %al,-0x9(%ebp)
0861c4be +0x42:  cmpb   $0x1,-0x9(%ebp)
0861c4c2 +0x46:  jne    0861c4cc <+0x50>
0861c4c4 +0x48:  mov    0xc(%ebp),%eax
0861c4c7 +0x4b:  movb   $0x1,(%eax)
0861c4ca +0x4e:  jmp    0861c4d2 <+0x56>
0861c4cc +0x50:  mov    0xc(%ebp),%eax
0861c4cf +0x53:  movb   $0x0,(%eax)
0861c4d2 +0x56:  movl   $0x1,0x4(%esp)
0861c4da +0x5e:  mov    0x8(%ebp),%eax
0861c4dd +0x61:  mov    %eax,(%esp)
0861c4e0 +0x64:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0861c4e5 +0x69:  mov    $0x1,%eax
0861c4ea +0x6e:  add    $0x24,%esp
0861c4ed +0x71:  pop    %ebx
0861c4ee +0x72:  pop    %ebp
0861c4ef +0x73:  ret
```

## 反编译 C

```c
// Stream::operator>> @ 0x861c47c

/* Stream::TEMPNAMEPLACEHOLDERVALUE(bool&) */

undefined4 __thiscall Stream::operator>>(Stream *this,bool *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  cVar2 = enable_out(this,1);
  if (cVar2 == '\x01') {
    iVar1 = *(int *)(this + 8);
    iVar4 = out_ptr(this);
    if (*(char *)(iVar1 + iVar4) == '\x01') {
      *param_1 = true;
    }
    else {
      *param_1 = false;
    }
    out_ptr(this,1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
