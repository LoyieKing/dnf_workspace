# dispatch_sig

`_ZN18TimerStartMatching12dispatch_sigEiij`

`TimerStartMatching::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerStartMatching` | `0x08637d92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08637d92  _ZN18TimerStartMatching12dispatch_sigEiij
#           TimerStartMatching::dispatch_sig(int, int, unsigned int)
# range [0x08637d92, 0x08637e13]
08637d92 +0x00:  push   %ebp
08637d93 +0x01:  mov    %esp,%ebp
08637d95 +0x03:  sub    $0x28,%esp
08637d98 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08637d9d +0x0b:  movl   $0x79,0xc(%esp)
08637da5 +0x13:  movl   $0x0,0x8(%esp)
08637dad +0x1b:  mov    0xc(%ebp),%edx
08637db0 +0x1e:  mov    %edx,0x4(%esp)
08637db4 +0x22:  mov    %eax,(%esp)
08637db7 +0x25:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
08637dbc +0x2a:  mov    %eax,-0xc(%ebp)
08637dbf +0x2d:  cmpl   $0x0,-0xc(%ebp)
08637dc3 +0x31:  jne    08637dcc <+0x3a>
08637dc5 +0x33:  mov    $0x0,%eax
08637dca +0x38:  jmp    08637e11 <+0x7f>
08637dcc +0x3a:  mov    -0xc(%ebp),%eax
08637dcf +0x3d:  mov    0x6e4(%eax),%eax
08637dd5 +0x43:  test   %eax,%eax
08637dd7 +0x45:  jne    08637de0 <+0x4e>
08637dd9 +0x47:  mov    $0x0,%eax
08637dde +0x4c:  jmp    08637e11 <+0x7f>
08637de0 +0x4e:  mov    -0xc(%ebp),%eax
08637de3 +0x51:  mov    0x6e4(%eax),%eax
08637de9 +0x57:  mov    (%eax),%eax
08637deb +0x59:  add    $0x38,%eax
08637dee +0x5c:  mov    (%eax),%ecx
08637df0 +0x5e:  mov    -0xc(%ebp),%eax
08637df3 +0x61:  mov    0x6e4(%eax),%eax
08637df9 +0x67:  mov    0x10(%ebp),%edx
08637dfc +0x6a:  mov    %edx,0x8(%esp)
08637e00 +0x6e:  mov    -0xc(%ebp),%edx
08637e03 +0x71:  mov    %edx,0x4(%esp)
08637e07 +0x75:  mov    %eax,(%esp)
08637e0a +0x78:  call   *%ecx
08637e0c +0x7a:  mov    $0x1,%eax
08637e11 +0x7f:  leave
08637e12 +0x80:  ret
08637e13 +0x81:  nop
```

## 反编译 C

```c
// TimerStartMatching::dispatch_sig @ 0x8637d92

/* TimerStartMatching::dispatch_sig(int, int, unsigned int) */

undefined4 TimerStartMatching::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CGameManager *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (CGameManager *)G_CGameManager();
  iVar1 = CGameManager::GetPvp(this,param_2,(CUser *)0x0,0x79);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(iVar1 + 0x6e4) == 0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(**(int **)(iVar1 + 0x6e4) + 0x38))(*(undefined4 *)(iVar1 + 0x6e4),iVar1,param_3);
    uVar2 = 1;
  }
  return uVar2;
}
```
