# FindExeFamilyFile

`_ZN26WindowsCodeProtectorServer17FindExeFamilyFileEPKc`

`WindowsCodeProtectorServer::FindExeFamilyFile(char const*)`

| 类 | 地址 |
|---|---|
| `WindowsCodeProtectorServer` | `0x085755f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085755f6  _ZN26WindowsCodeProtectorServer17FindExeFamilyFileEPKc
#           WindowsCodeProtectorServer::FindExeFamilyFile(char const*)
# range [0x085755f6, 0x0857562d]
085755f6 +0x00:  push   %ebp
085755f7 +0x01:  mov    %esp,%ebp
085755f9 +0x03:  sub    $0x18,%esp
085755fc +0x06:  mov    0x8(%ebp),%eax
085755ff +0x09:  mov    (%eax),%eax
08575601 +0x0b:  test   %eax,%eax
08575603 +0x0d:  je     08575627 <+0x31>
08575605 +0x0f:  mov    0x8(%ebp),%eax
08575608 +0x12:  mov    (%eax),%eax
0857560a +0x14:  lea    0x18(%eax),%edx
0857560d +0x17:  mov    0xc(%ebp),%eax
08575610 +0x1a:  mov    %eax,0x4(%esp)
08575614 +0x1e:  mov    %edx,(%esp)
08575617 +0x21:  call   0807e4e0 <_init+0xdd8>
0857561c +0x26:  test   %eax,%eax
0857561e +0x28:  jne    08575627 <+0x31>
08575620 +0x2a:  mov    $0x1,%eax
08575625 +0x2f:  jmp    0857562c <+0x36>
08575627 +0x31:  mov    $0x0,%eax
0857562c +0x36:  leave
0857562d +0x37:  ret
```

## 反编译 C

```c
// WindowsCodeProtectorServer::FindExeFamilyFile @ 0x85755f6

/* WindowsCodeProtectorServer::FindExeFamilyFile(char const*) */

undefined4 __thiscall
WindowsCodeProtectorServer::FindExeFamilyFile(WindowsCodeProtectorServer *this,char *param_1)

{
  int iVar1;
  
  if ((*(int *)this != 0) && (iVar1 = strcmp((char *)(*(int *)this + 0x18),param_1), iVar1 == 0)) {
    return 1;
  }
  return 0;
}
```
