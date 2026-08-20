# CompleteLoading

`_ZN26WindowsCodeProtectorServer15CompleteLoadingEv`

`WindowsCodeProtectorServer::CompleteLoading()`

| 类 | 地址 |
|---|---|
| `WindowsCodeProtectorServer` | `0x0857592c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857592c  _ZN26WindowsCodeProtectorServer15CompleteLoadingEv
#           WindowsCodeProtectorServer::CompleteLoading()
# range [0x0857592c, 0x0857596f]
0857592c +0x00:  push   %ebp
0857592d +0x01:  mov    %esp,%ebp
0857592f +0x03:  sub    $0x18,%esp
08575932 +0x06:  mov    0x8(%ebp),%eax
08575935 +0x09:  mov    (%eax),%eax
08575937 +0x0b:  test   %eax,%eax
08575939 +0x0d:  je     08575961 <+0x35>
0857593b +0x0f:  mov    0x8(%ebp),%eax
0857593e +0x12:  mov    (%eax),%eax
08575940 +0x14:  mov    %eax,(%esp)
08575943 +0x17:  call   08574736 <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv>  ; WindowsExeFileFamily::CompleteLoadingWindowsExeFiles()
08575948 +0x1c:  test   %al,%al
0857594a +0x1e:  je     0857595a <+0x2e>
0857594c +0x20:  mov    0x8(%ebp),%eax
0857594f +0x23:  movb   $0x1,0x1c(%eax)
08575953 +0x27:  mov    $0x1,%eax
08575958 +0x2c:  jmp    0857596d <+0x41>
0857595a +0x2e:  mov    $0x0,%eax
0857595f +0x33:  jmp    0857596d <+0x41>
08575961 +0x35:  mov    0x8(%ebp),%eax
08575964 +0x38:  movb   $0x1,0x1c(%eax)
08575968 +0x3c:  mov    $0x1,%eax
0857596d +0x41:  leave
0857596e +0x42:  ret
0857596f +0x43:  nop
```

## 反编译 C

```c
// WindowsCodeProtectorServer::CompleteLoading @ 0x857592c

/* WindowsCodeProtectorServer::CompleteLoading() */

undefined4 __thiscall WindowsCodeProtectorServer::CompleteLoading(WindowsCodeProtectorServer *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)this == 0) {
    this[0x1c] = (WindowsCodeProtectorServer)0x1;
    uVar2 = 1;
  }
  else {
    cVar1 = WindowsExeFileFamily::CompleteLoadingWindowsExeFiles(*(WindowsExeFileFamily **)this);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      this[0x1c] = (WindowsCodeProtectorServer)0x1;
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
