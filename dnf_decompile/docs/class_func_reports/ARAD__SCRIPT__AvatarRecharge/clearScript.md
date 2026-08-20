# clearScript

`_ZN4ARAD6SCRIPT14AvatarRecharge11clearScriptEv`

`ARAD::SCRIPT::AvatarRecharge::clearScript()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarRecharge` | `0x088b12d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b12d8  _ZN4ARAD6SCRIPT14AvatarRecharge11clearScriptEv
#           ARAD::SCRIPT::AvatarRecharge::clearScript()
# range [0x088b12d8, 0x088b1313]
088b12d8 +0x00:  push   %ebp
088b12d9 +0x01:  mov    %esp,%ebp
088b12db +0x03:  sub    $0x18,%esp
088b12de +0x06:  mov    0x8(%ebp),%eax
088b12e1 +0x09:  movl   $0x0,(%eax)
088b12e7 +0x0f:  mov    0x8(%ebp),%eax
088b12ea +0x12:  add    $0x4,%eax
088b12ed +0x15:  mov    %eax,(%esp)
088b12f0 +0x18:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
088b12f5 +0x1d:  mov    0x8(%ebp),%eax
088b12f8 +0x20:  add    $0x1c,%eax
088b12fb +0x23:  mov    %eax,(%esp)
088b12fe +0x26:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
088b1303 +0x2b:  mov    0x8(%ebp),%eax
088b1306 +0x2e:  add    $0x34,%eax
088b1309 +0x31:  mov    %eax,(%esp)
088b130c +0x34:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
088b1311 +0x39:  leave
088b1312 +0x3a:  ret
088b1313 +0x3b:  nop
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarRecharge::clearScript @ 0x88b12d8

/* ARAD::SCRIPT::AvatarRecharge::clearScript() */

void __thiscall ARAD::SCRIPT::AvatarRecharge::clearScript(AvatarRecharge *this)

{
  *(undefined4 *)this = 0;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 4));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x34));
  return;
}
```
