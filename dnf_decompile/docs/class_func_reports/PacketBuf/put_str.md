# put_str

`_ZN9PacketBuf7put_strERiPci`

`PacketBuf::put_str(int&, char*, int)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858cc68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858cc68  _ZN9PacketBuf7put_strERiPci
#           PacketBuf::put_str(int&, char*, int)
# range [0x0858cc68, 0x0858cce7]
0858cc68 +0x00:  push   %ebp
0858cc69 +0x01:  mov    %esp,%ebp
0858cc6b +0x03:  sub    $0x28,%esp
0858cc6e +0x06:  mov    0xc(%ebp),%eax
0858cc71 +0x09:  mov    (%eax),%eax
0858cc73 +0x0b:  mov    0x14(%ebp),%edx
0858cc76 +0x0e:  mov    %edx,0x8(%esp)
0858cc7a +0x12:  mov    %eax,0x4(%esp)
0858cc7e +0x16:  mov    0x8(%ebp),%eax
0858cc81 +0x19:  mov    %eax,(%esp)
0858cc84 +0x1c:  call   0858cec4 <_ZN9PacketBuf10is_ptr_endEii>  ; PacketBuf::is_ptr_end(int, int)
0858cc89 +0x21:  test   %al,%al
0858cc8b +0x23:  je     0858cc94 <+0x2c>
0858cc8d +0x25:  mov    $0x0,%eax
0858cc92 +0x2a:  jmp    0858cce5 <+0x7d>
0858cc94 +0x2c:  movl   $0x0,-0xc(%ebp)
0858cc9b +0x33:  jmp    0858ccd0 <+0x68>
0858cc9d +0x35:  mov    -0xc(%ebp),%eax
0858cca0 +0x38:  add    0x10(%ebp),%eax
0858cca3 +0x3b:  movzbl (%eax),%eax
0858cca6 +0x3e:  test   %al,%al
0858cca8 +0x40:  je     0858ccdf <+0x77>
0858ccaa +0x42:  mov    0x8(%ebp),%eax
0858ccad +0x45:  mov    0x14(%eax),%ecx
0858ccb0 +0x48:  mov    0xc(%ebp),%eax
0858ccb3 +0x4b:  mov    (%eax),%eax
0858ccb5 +0x4d:  mov    %eax,%edx
0858ccb7 +0x4f:  add    %edx,%ecx
0858ccb9 +0x51:  mov    -0xc(%ebp),%edx
0858ccbc +0x54:  add    0x10(%ebp),%edx
0858ccbf +0x57:  movzbl (%edx),%edx
0858ccc2 +0x5a:  mov    %dl,(%ecx)
0858ccc4 +0x5c:  lea    0x1(%eax),%edx
0858ccc7 +0x5f:  mov    0xc(%ebp),%eax
0858ccca +0x62:  mov    %edx,(%eax)
0858cccc +0x64:  addl   $0x1,-0xc(%ebp)
0858ccd0 +0x68:  mov    -0xc(%ebp),%eax
0858ccd3 +0x6b:  cmp    0x14(%ebp),%eax
0858ccd6 +0x6e:  setl   %al
0858ccd9 +0x71:  test   %al,%al
0858ccdb +0x73:  jne    0858cc9d <+0x35>
0858ccdd +0x75:  jmp    0858cce0 <+0x78>
0858ccdf +0x77:  nop
0858cce0 +0x78:  mov    $0x1,%eax
0858cce5 +0x7d:  leave
0858cce6 +0x7e:  ret
0858cce7 +0x7f:  nop
```

## 反编译 C

```c
// PacketBuf::put_str @ 0x858cc68

/* PacketBuf::put_str(int&, char*, int) */

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
