# OnDisconnect

`_ZN19disconnect_detecter19CDisconnectDetecter12OnDisconnectEP5CUser`

`disconnect_detecter::CDisconnectDetecter::OnDisconnect(CUser*)`

| 类 | 地址 |
|---|---|
| `disconnect_detecter::CDisconnectDetecter` | `0x084725ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084725ba  _ZN19disconnect_detecter19CDisconnectDetecter12OnDisconnectEP5CUser
#           disconnect_detecter::CDisconnectDetecter::OnDisconnect(CUser*)
# range [0x084725ba, 0x084725cc]
084725ba +0x00:  push   %ebp
084725bb +0x01:  mov    %esp,%ebp
084725bd +0x03:  sub    $0x18,%esp
084725c0 +0x06:  mov    0xc(%ebp),%eax
084725c3 +0x09:  mov    %eax,(%esp)
084725c6 +0x0c:  call   086804ce <_ZN5CUser12OnDisconnectEv>  ; CUser::OnDisconnect()
084725cb +0x11:  leave
084725cc +0x12:  ret
```

## 反编译 C

```c
// disconnect_detecter::CDisconnectDetecter::OnDisconnect @ 0x84725ba

/* disconnect_detecter::CDisconnectDetecter::OnDisconnect(CUser*) */

void __thiscall
disconnect_detecter::CDisconnectDetecter::OnDisconnect(CDisconnectDetecter *this,CUser *param_1)

{
  CUser::OnDisconnect(param_1);
  return;
}
```
