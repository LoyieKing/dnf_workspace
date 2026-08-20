# copy

`_ZN9PacketBuf4copyERKS_`

`PacketBuf::copy(PacketBuf const&)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858dcd2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858dcd2  _ZN9PacketBuf4copyERKS_
#           PacketBuf::copy(PacketBuf const&)
# range [0x0858dcd2, 0x0858dd4b]
0858dcd2 +0x00:  push   %ebp
0858dcd3 +0x01:  mov    %esp,%ebp
0858dcd5 +0x03:  sub    $0x18,%esp
0858dcd8 +0x06:  mov    0xc(%ebp),%eax
0858dcdb +0x09:  mov    0x4(%eax),%edx
0858dcde +0x0c:  mov    0x8(%ebp),%eax
0858dce1 +0x0f:  mov    %edx,0x4(%eax)
0858dce4 +0x12:  mov    0xc(%ebp),%eax
0858dce7 +0x15:  mov    0x8(%eax),%edx
0858dcea +0x18:  mov    0x8(%ebp),%eax
0858dced +0x1b:  mov    %edx,0x8(%eax)
0858dcf0 +0x1e:  mov    0xc(%ebp),%eax
0858dcf3 +0x21:  movzbl 0xc(%eax),%edx
0858dcf7 +0x25:  mov    0x8(%ebp),%eax
0858dcfa +0x28:  mov    %dl,0xc(%eax)
0858dcfd +0x2b:  mov    0x8(%ebp),%eax
0858dd00 +0x2e:  lea    0x18(%eax),%edx
0858dd03 +0x31:  mov    0x8(%ebp),%eax
0858dd06 +0x34:  mov    %edx,0x14(%eax)
0858dd09 +0x37:  mov    0x8(%ebp),%eax
0858dd0c +0x3a:  add    $0x18,%eax
0858dd0f +0x3d:  movl   $&_ZL14gUnicodeBuffer+0xcdec,0x8(%esp)
0858dd17 +0x45:  movl   $0x0,0x4(%esp)
0858dd1f +0x4d:  mov    %eax,(%esp)
0858dd22 +0x50:  call   0807dcc0 <_init+0x5b8>
0858dd27 +0x55:  mov    0x8(%ebp),%eax
0858dd2a +0x58:  mov    0x8(%eax),%eax
0858dd2d +0x5b:  mov    0xc(%ebp),%edx
0858dd30 +0x5e:  lea    0x18(%edx),%ecx
0858dd33 +0x61:  mov    0x8(%ebp),%edx
0858dd36 +0x64:  add    $0x18,%edx
0858dd39 +0x67:  mov    %eax,0x8(%esp)
0858dd3d +0x6b:  mov    %ecx,0x4(%esp)
0858dd41 +0x6f:  mov    %edx,(%esp)
0858dd44 +0x72:  call   0807d8a0 <_init+0x198>
0858dd49 +0x77:  leave
0858dd4a +0x78:  ret
0858dd4b +0x79:  nop
```

## 反编译 C

```c
// PacketBuf::copy @ 0x858dcd2

/* PacketBuf::copy(PacketBuf const&) */

void __thiscall PacketBuf::copy(PacketBuf *this,PacketBuf *param_1)

{
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  this[0xc] = param_1[0xc];
  *(PacketBuf **)(this + 0x14) = this + 0x18;
  memset(this + 0x18,0,95000);
  memcpy(this + 0x18,param_1 + 0x18,*(size_t *)(this + 8));
  return;
}
```
