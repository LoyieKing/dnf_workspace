# process

`_ZN20DisPatcher_AddFriend7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_AddFriend::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_AddFriend` | `0x081cb2e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb2e2  _ZN20DisPatcher_AddFriend7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_AddFriend::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cb2e2, 0x081cb309]
081cb2e2 +0x00:  push   %ebp
081cb2e3 +0x01:  mov    %esp,%ebp
081cb2e5 +0x03:  sub    $0x58,%esp
081cb2e8 +0x06:  mov    0x14(%ebp),%eax
081cb2eb +0x09:  mov    %eax,0xc(%esp)
081cb2ef +0x0d:  mov    0x10(%ebp),%eax
081cb2f2 +0x10:  mov    %eax,0x8(%esp)
081cb2f6 +0x14:  mov    0xc(%ebp),%eax
081cb2f9 +0x17:  mov    %eax,0x4(%esp)
081cb2fd +0x1b:  mov    0x8(%ebp),%eax
081cb300 +0x1e:  mov    %eax,(%esp)
081cb303 +0x21:  call   081cb30a <_ZN20DisPatcher_AddFriend18process_packet_jpnEP5CUserR8MSG_BASER9ParamBase>  ; DisPatcher_AddFriend::process_packet_jpn(CUser*, MSG_BASE&, ParamBase&)
081cb308 +0x26:  leave
081cb309 +0x27:  ret
```

## 反编译 C

```c
// DisPatcher_AddFriend::process @ 0x81cb2e2

/* DisPatcher_AddFriend::process(CUser*, MSG_BASE&, ParamBase&) */

void __thiscall
DisPatcher_AddFriend::process
          (DisPatcher_AddFriend *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  process_packet_jpn(this,param_1,param_2,param_3);
  return;
}
```
