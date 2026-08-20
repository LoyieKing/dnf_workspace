# send

`_ZN32Dispatcher_BlueMarbleConfirmInfo4sendEP5CUserR9ParamBase`

`Dispatcher_BlueMarbleConfirmInfo::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BlueMarbleConfirmInfo` | `0x081e6904` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e6904  _ZN32Dispatcher_BlueMarbleConfirmInfo4sendEP5CUserR9ParamBase
#           Dispatcher_BlueMarbleConfirmInfo::send(CUser*, ParamBase&)
# range [0x081e6904, 0x081e6951]
081e6904 +0x00:  push   %ebp
081e6905 +0x01:  mov    %esp,%ebp
081e6907 +0x03:  sub    $0x28,%esp
081e690a +0x06:  mov    0x10(%ebp),%eax
081e690d +0x09:  mov    %eax,-0xc(%ebp)
081e6910 +0x0c:  mov    -0xc(%ebp),%eax
081e6913 +0x0f:  mov    0x4(%eax),%eax
081e6916 +0x12:  test   %eax,%eax
081e6918 +0x14:  jne    081e692f <+0x2b>
081e691a +0x16:  movl   $0x1fc,0x4(%esp)
081e6922 +0x1e:  mov    0xc(%ebp),%eax
081e6925 +0x21:  mov    %eax,(%esp)
081e6928 +0x24:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081e692d +0x29:  jmp    081e694f <+0x4b>
081e692f +0x2b:  mov    -0xc(%ebp),%eax
081e6932 +0x2e:  mov    0x4(%eax),%eax
081e6935 +0x31:  movzbl %al,%eax
081e6938 +0x34:  mov    %eax,0x8(%esp)
081e693c +0x38:  movl   $0x1fc,0x4(%esp)
081e6944 +0x40:  mov    0xc(%ebp),%eax
081e6947 +0x43:  mov    %eax,(%esp)
081e694a +0x46:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e694f +0x4b:  leave
081e6950 +0x4c:  ret
081e6951 +0x4d:  nop
```

## 反编译 C

```c
// Dispatcher_BlueMarbleConfirmInfo::send @ 0x81e6904

/* Dispatcher_BlueMarbleConfirmInfo::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_BlueMarbleConfirmInfo::send
          (Dispatcher_BlueMarbleConfirmInfo *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1fc);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1fc,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
