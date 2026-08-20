# UnitTest

`_ZN29AvatarFixedHiddenOptionServer8UnitTestEPS_`

`AvatarFixedHiddenOptionServer::UnitTest(AvatarFixedHiddenOptionServer*)`

| 类 | 地址 |
|---|---|
| `AvatarFixedHiddenOptionServer` | `0x0817ecd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817ecd8  _ZN29AvatarFixedHiddenOptionServer8UnitTestEPS_
#           AvatarFixedHiddenOptionServer::UnitTest(AvatarFixedHiddenOptionServer*)
# range [0x0817ecd8, 0x0817ed8e]
0817ecd8 +0x00:  push   %ebp
0817ecd9 +0x01:  mov    %esp,%ebp
0817ecdb +0x03:  sub    $0x18,%esp
0817ecde +0x06:  cmpl   $0x0,0x8(%ebp)
0817ece2 +0x0a:  je     0817ed8c <+0xb4>
0817ece8 +0x10:  movl   $0x1,0x8(%esp)
0817ecf0 +0x18:  movl   $0x0,0x4(%esp)
0817ecf8 +0x20:  mov    0x8(%ebp),%eax
0817ecfb +0x23:  mov    %eax,(%esp)
0817ecfe +0x26:  call   0817ec67 <_ZL5Test1P29AvatarFixedHiddenOptionServerii>  ; Test1(AvatarFixedHiddenOptionServer*, int, int)
0817ed03 +0x2b:  movl   $0x1,0x8(%esp)
0817ed0b +0x33:  movl   $0x95,0x4(%esp)
0817ed13 +0x3b:  mov    0x8(%ebp),%eax
0817ed16 +0x3e:  mov    %eax,(%esp)
0817ed19 +0x41:  call   0817ec67 <_ZL5Test1P29AvatarFixedHiddenOptionServerii>  ; Test1(AvatarFixedHiddenOptionServer*, int, int)
0817ed1e +0x46:  movl   $0x2,0x8(%esp)
0817ed26 +0x4e:  movl   $0x96,0x4(%esp)
0817ed2e +0x56:  mov    0x8(%ebp),%eax
0817ed31 +0x59:  mov    %eax,(%esp)
0817ed34 +0x5c:  call   0817ec67 <_ZL5Test1P29AvatarFixedHiddenOptionServerii>  ; Test1(AvatarFixedHiddenOptionServer*, int, int)
0817ed39 +0x61:  movl   $0x3e,0x8(%esp)
0817ed41 +0x69:  movl   $0x26dd,0x4(%esp)
0817ed49 +0x71:  mov    0x8(%ebp),%eax
0817ed4c +0x74:  mov    %eax,(%esp)
0817ed4f +0x77:  call   0817ec67 <_ZL5Test1P29AvatarFixedHiddenOptionServerii>  ; Test1(AvatarFixedHiddenOptionServer*, int, int)
0817ed54 +0x7c:  movl   $0x3f,0x8(%esp)
0817ed5c +0x84:  movl   $0x26de,0x4(%esp)
0817ed64 +0x8c:  mov    0x8(%ebp),%eax
0817ed67 +0x8f:  mov    %eax,(%esp)
0817ed6a +0x92:  call   0817ec67 <_ZL5Test1P29AvatarFixedHiddenOptionServerii>  ; Test1(AvatarFixedHiddenOptionServer*, int, int)
0817ed6f +0x97:  movl   $0x3f,0x8(%esp)
0817ed77 +0x9f:  movl   $0x270f,0x4(%esp)
0817ed7f +0xa7:  mov    0x8(%ebp),%eax
0817ed82 +0xaa:  mov    %eax,(%esp)
0817ed85 +0xad:  call   0817ec67 <_ZL5Test1P29AvatarFixedHiddenOptionServerii>  ; Test1(AvatarFixedHiddenOptionServer*, int, int)
0817ed8a +0xb2:  jmp    0817ed8d <+0xb5>
0817ed8c +0xb4:  nop
0817ed8d +0xb5:  leave
0817ed8e +0xb6:  ret
```

## 反编译 C

```c
// AvatarFixedHiddenOptionServer::UnitTest @ 0x817ecd8

/* AvatarFixedHiddenOptionServer::UnitTest(AvatarFixedHiddenOptionServer*) */

void AvatarFixedHiddenOptionServer::UnitTest(AvatarFixedHiddenOptionServer *param_1)

{
  if (param_1 != (AvatarFixedHiddenOptionServer *)0x0) {
    Test1(param_1,0,1);
    Test1(param_1,0x95,1);
    Test1(param_1,0x96,2);
    Test1(param_1,0x26dd,0x3e);
    Test1(param_1,0x26de,0x3f);
    Test1(param_1,9999,0x3f);
  }
  return;
}
```
