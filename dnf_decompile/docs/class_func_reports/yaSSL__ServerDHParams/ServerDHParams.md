# ServerDHParams

`_ZN5yaSSL14ServerDHParamsC1Ev`

`yaSSL::ServerDHParams::ServerDHParams()`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerDHParams` | `0x08746d60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746d60  _ZN5yaSSL14ServerDHParamsC1Ev
#           yaSSL::ServerDHParams::ServerDHParams()
# range [0x08746d60, 0x08746d99]
08746d60 +0x00:  push   %ebp
08746d61 +0x01:  mov    %esp,%ebp
08746d63 +0x03:  mov    0x8(%ebp),%eax
08746d66 +0x06:  movl   $0x0,(%eax)
08746d6c +0x0c:  movl   $0x0,0x4(%eax)
08746d73 +0x13:  movl   $0x0,0x8(%eax)
08746d7a +0x1a:  movl   $0x0,0xc(%eax)
08746d81 +0x21:  movl   $0x0,0x10(%eax)
08746d88 +0x28:  movl   $0x0,0x14(%eax)
08746d8f +0x2f:  pop    %ebp
08746d90 +0x30:  ret
08746d91 +0x31:  nop
08746d92 +0x32:  lea    0x0(%esi,%eiz,1),%esi
08746d99 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::ServerDHParams::ServerDHParams @ 0x8746d60

/* yaSSL::ServerDHParams::ServerDHParams() */

void __thiscall yaSSL::ServerDHParams::ServerDHParams(ServerDHParams *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}
```
