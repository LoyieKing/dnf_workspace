# check_error

`_ZN21DisPatcher_LeaveParty11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_LeaveParty::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_LeaveParty` | `0x081c436e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c436e  _ZN21DisPatcher_LeaveParty11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_LeaveParty::check_error(CUser*, MSG_BASE&)
# range [0x081c436e, 0x081c4395]
081c436e +0x00:  push   %ebp
081c436f +0x01:  mov    %esp,%ebp
081c4371 +0x03:  sub    $0x28,%esp
081c4374 +0x06:  mov    0xc(%ebp),%eax
081c4377 +0x09:  mov    %eax,(%esp)
081c437a +0x0c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c437f +0x11:  mov    %eax,-0xc(%ebp)
081c4382 +0x14:  cmpl   $0x0,-0xc(%ebp)
081c4386 +0x18:  jne    081c438f <+0x21>
081c4388 +0x1a:  mov    $0x12,%eax
081c438d +0x1f:  jmp    081c4394 <+0x26>
081c438f +0x21:  mov    $0x0,%eax
081c4394 +0x26:  leave
081c4395 +0x27:  ret
```

## 反编译 C

```c
// DisPatcher_LeaveParty::check_error @ 0x81c436e

/* DisPatcher_LeaveParty::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_LeaveParty::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::GetParty((CUser *)param_2);
  if (iVar1 == 0) {
    uVar2 = 0x12;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
