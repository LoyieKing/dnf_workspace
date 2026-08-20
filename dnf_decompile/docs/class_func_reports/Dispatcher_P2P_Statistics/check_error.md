# check_error

`_ZN25Dispatcher_P2P_Statistics11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_P2P_Statistics::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_P2P_Statistics` | `0x081e2ef6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e2ef6  _ZN25Dispatcher_P2P_Statistics11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_P2P_Statistics::check_error(CUser*, MSG_BASE&)
# range [0x081e2ef6, 0x081e2f21]
081e2ef6 +0x00:  push   %ebp
081e2ef7 +0x01:  mov    %esp,%ebp
081e2ef9 +0x03:  sub    $0x18,%esp
081e2efc +0x06:  movl   $0x0,0xc(%esp)
081e2f04 +0x0e:  movl   $0x0,0x8(%esp)
081e2f0c +0x16:  movl   $&_ZZN25Dispatcher_P2P_Statistics11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e2f14 +0x1e:  movl   $0x5970,(%esp)
081e2f1b +0x25:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e2f20 +0x2a:  leave
081e2f21 +0x2b:  ret
```

## 反编译 C

```c
// Dispatcher_P2P_Statistics::check_error @ 0x81e2ef6

/* Dispatcher_P2P_Statistics::check_error(CUser*, MSG_BASE&) */

void Dispatcher_P2P_Statistics::check_error(CUser *param_1,MSG_BASE *param_2)

{
  LineFunc(0x5970,"int Dispatcher_P2P_Statistics::check_error(CUser*, MSG_BASE&)",0,0);
  return;
}
```
