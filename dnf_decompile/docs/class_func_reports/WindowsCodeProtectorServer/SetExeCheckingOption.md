# SetExeCheckingOption

`_ZN26WindowsCodeProtectorServer20SetExeCheckingOptionElllll`

`WindowsCodeProtectorServer::SetExeCheckingOption(long, long, long, long, long)`

| 类 | 地址 |
|---|---|
| `WindowsCodeProtectorServer` | `0x085756ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085756ce  _ZN26WindowsCodeProtectorServer20SetExeCheckingOptionElllll
#           WindowsCodeProtectorServer::SetExeCheckingOption(long, long, long, long, long)
# range [0x085756ce, 0x085756ff]
085756ce +0x00:  push   %ebp
085756cf +0x01:  mov    %esp,%ebp
085756d1 +0x03:  mov    0x8(%ebp),%eax
085756d4 +0x06:  mov    0xc(%ebp),%edx
085756d7 +0x09:  mov    %edx,0x10(%eax)
085756da +0x0c:  mov    0x10(%ebp),%edx
085756dd +0x0f:  mov    0x8(%ebp),%eax
085756e0 +0x12:  mov    %edx,0x20(%eax)
085756e3 +0x15:  mov    0x14(%ebp),%edx
085756e6 +0x18:  mov    0x8(%ebp),%eax
085756e9 +0x1b:  mov    %edx,0x24(%eax)
085756ec +0x1e:  mov    0x18(%ebp),%edx
085756ef +0x21:  mov    0x8(%ebp),%eax
085756f2 +0x24:  mov    %edx,0x28(%eax)
085756f5 +0x27:  mov    0x1c(%ebp),%edx
085756f8 +0x2a:  mov    0x8(%ebp),%eax
085756fb +0x2d:  mov    %edx,0x2c(%eax)
085756fe +0x30:  pop    %ebp
085756ff +0x31:  ret
```

## 反编译 C

```c
// WindowsCodeProtectorServer::SetExeCheckingOption @ 0x85756ce

/* WindowsCodeProtectorServer::SetExeCheckingOption(long, long, long, long, long) */

void __thiscall
WindowsCodeProtectorServer::SetExeCheckingOption
          (WindowsCodeProtectorServer *this,long param_1,long param_2,long param_3,long param_4,
          long param_5)

{
  *(long *)(this + 0x10) = param_1;
  *(long *)(this + 0x20) = param_2;
  *(long *)(this + 0x24) = param_3;
  *(long *)(this + 0x28) = param_4;
  *(long *)(this + 0x2c) = param_5;
  return;
}
```
