# process

`_ZN25Dispatcher_UserHistoryLog7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_UserHistoryLog::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UserHistoryLog` | `0x081da6c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081da6c0  _ZN25Dispatcher_UserHistoryLog7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_UserHistoryLog::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081da6c0, 0x081da6fd]
081da6c0 +0x00:  push   %ebp
081da6c1 +0x01:  mov    %esp,%ebp
081da6c3 +0x03:  sub    $0x28,%esp
081da6c6 +0x06:  mov    0x10(%ebp),%eax
081da6c9 +0x09:  mov    %eax,-0xc(%ebp)
081da6cc +0x0c:  mov    -0xc(%ebp),%eax
081da6cf +0x0f:  lea    0x14(%eax),%edx
081da6d2 +0x12:  mov    -0xc(%ebp),%eax
081da6d5 +0x15:  movzbl 0xd(%eax),%eax
081da6d9 +0x19:  movzbl %al,%eax
081da6dc +0x1c:  mov    %edx,0xc(%esp)
081da6e0 +0x20:  mov    %eax,0x8(%esp)
081da6e4 +0x24:  movl   $"act,%d,%s",0x4(%esp)
081da6ec +0x2c:  mov    0xc(%ebp),%eax
081da6ef +0x2f:  mov    %eax,(%esp)
081da6f2 +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
081da6f7 +0x37:  mov    $0x0,%eax
081da6fc +0x3c:  leave
081da6fd +0x3d:  ret
```

## 反编译 C

```c
// Dispatcher_UserHistoryLog::process @ 0x81da6c0

/* Dispatcher_UserHistoryLog::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_UserHistoryLog::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  CUser::LogHistory((CUser *)param_2,"act,%d,%s",(uint)(byte)param_3[0xd],param_3 + 0x14);
  return 0;
}
```
