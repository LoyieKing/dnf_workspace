# put_str

`_ZN9PacketBuf7put_strERiPKci`

`PacketBuf::put_str(int&, char const*, int)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858cce8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858cce8  _ZN9PacketBuf7put_strERiPKci
#           PacketBuf::put_str(int&, char const*, int)
# range [0x0858cce8, 0x0858cd67]
0858cce8 +0x00:  push   %ebp
0858cce9 +0x01:  mov    %esp,%ebp
0858cceb +0x03:  sub    $0x28,%esp
0858ccee +0x06:  mov    0xc(%ebp),%eax
0858ccf1 +0x09:  mov    (%eax),%eax
0858ccf3 +0x0b:  mov    0x14(%ebp),%edx
0858ccf6 +0x0e:  mov    %edx,0x8(%esp)
0858ccfa +0x12:  mov    %eax,0x4(%esp)
0858ccfe +0x16:  mov    0x8(%ebp),%eax
0858cd01 +0x19:  mov    %eax,(%esp)
0858cd04 +0x1c:  call   0858cec4 <_ZN9PacketBuf10is_ptr_endEii>  ; PacketBuf::is_ptr_end(int, int)
0858cd09 +0x21:  test   %al,%al
0858cd0b +0x23:  je     0858cd14 <+0x2c>
0858cd0d +0x25:  mov    $0x0,%eax
0858cd12 +0x2a:  jmp    0858cd65 <+0x7d>
0858cd14 +0x2c:  movl   $0x0,-0xc(%ebp)
0858cd1b +0x33:  jmp    0858cd50 <+0x68>
0858cd1d +0x35:  mov    -0xc(%ebp),%eax
0858cd20 +0x38:  add    0x10(%ebp),%eax
0858cd23 +0x3b:  movzbl (%eax),%eax
0858cd26 +0x3e:  test   %al,%al
0858cd28 +0x40:  je     0858cd5f <+0x77>
0858cd2a +0x42:  mov    0x8(%ebp),%eax
0858cd2d +0x45:  mov    0x14(%eax),%ecx
0858cd30 +0x48:  mov    0xc(%ebp),%eax
0858cd33 +0x4b:  mov    (%eax),%eax
0858cd35 +0x4d:  mov    %eax,%edx
0858cd37 +0x4f:  add    %edx,%ecx
0858cd39 +0x51:  mov    -0xc(%ebp),%edx
0858cd3c +0x54:  add    0x10(%ebp),%edx
0858cd3f +0x57:  movzbl (%edx),%edx
0858cd42 +0x5a:  mov    %dl,(%ecx)
0858cd44 +0x5c:  lea    0x1(%eax),%edx
0858cd47 +0x5f:  mov    0xc(%ebp),%eax
0858cd4a +0x62:  mov    %edx,(%eax)
0858cd4c +0x64:  addl   $0x1,-0xc(%ebp)
0858cd50 +0x68:  mov    -0xc(%ebp),%eax
0858cd53 +0x6b:  cmp    0x14(%ebp),%eax
0858cd56 +0x6e:  setl   %al
0858cd59 +0x71:  test   %al,%al
0858cd5b +0x73:  jne    0858cd1d <+0x35>
0858cd5d +0x75:  jmp    0858cd60 <+0x78>
0858cd5f +0x77:  nop
0858cd60 +0x78:  mov    $0x1,%eax
0858cd65 +0x7d:  leave
0858cd66 +0x7e:  ret
0858cd67 +0x7f:  nop
```

## 反编译 C

```c
// PacketBuf::put_str @ 0x858cce8

/* PacketBuf::put_str(int&, char const*, int) */

undefined4 __thiscall PacketBuf::put_str(PacketBuf *this,int *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int local_10;
  
  cVar2 = is_ptr_end(this,*param_1,param_3);
  if (cVar2 == '\0') {
    for (local_10 = 0; (local_10 < param_3 && (param_2[local_10] != '\0')); local_10 = local_10 + 1)
    {
      iVar1 = *param_1;
      *(char *)(*(int *)(this + 0x14) + iVar1) = param_2[local_10];
      *param_1 = iVar1 + 1;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
