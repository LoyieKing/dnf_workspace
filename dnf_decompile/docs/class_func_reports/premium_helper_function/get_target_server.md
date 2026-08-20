# get_target_server

`_ZN23premium_helper_function17get_target_serverEi`

`premium_helper_function::get_target_server(int)`

| 类 | 地址 |
|---|---|
| `premium_helper_function` | `0x0827d0f5` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827d0f5  _ZN23premium_helper_function17get_target_serverEi
#           premium_helper_function::get_target_server(int)
# range [0x0827d0f5, 0x0827d126]
0827d0f5 +0x00:  push   %ebp
0827d0f6 +0x01:  mov    %esp,%ebp
0827d0f8 +0x03:  sub    $0x8,%esp
0827d0fb +0x06:  mov    0x8(%ebp),%edx
0827d0fe +0x09:  mov    %edx,%eax
0827d100 +0x0b:  shl    $0x3,%eax
0827d103 +0x0e:  add    %edx,%eax
0827d105 +0x10:  shl    $0x5,%eax
0827d108 +0x13:  mov    &g_SPremiumInfo+0x5c(%eax),%eax
0827d10e +0x19:  cmp    $0x1,%eax
0827d111 +0x1c:  jne    0827d120 <+0x2b>
0827d113 +0x1e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0827d118 +0x23:  mov    0x378(%eax),%eax
0827d11e +0x29:  jmp    0827d125 <+0x30>
0827d120 +0x2b:  mov    $0x0,%eax
0827d125 +0x30:  leave
0827d126 +0x31:  ret
```

## 反编译 C

```c
// premium_helper_function::get_target_server @ 0x827d0f5

/* premium_helper_function::get_target_server(int) */

undefined4 premium_helper_function::get_target_server(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(g_SPremiumInfo + param_1 * 0x120 + 0x5c) == 1) {
    iVar1 = G_CEnvironment();
    uVar2 = *(undefined4 *)(iVar1 + 0x378);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
