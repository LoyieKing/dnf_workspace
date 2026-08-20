# send

`_ZN21Dispatcher_ComboSkill4sendEP5CUserR9ParamBase`

`Dispatcher_ComboSkill::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ComboSkill` | `0x0825f444` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825f444  _ZN21Dispatcher_ComboSkill4sendEP5CUserR9ParamBase
#           Dispatcher_ComboSkill::send(CUser*, ParamBase&)
# range [0x0825f444, 0x0825f491]
0825f444 +0x00:  push   %ebp
0825f445 +0x01:  mov    %esp,%ebp
0825f447 +0x03:  sub    $0x28,%esp
0825f44a +0x06:  mov    0x10(%ebp),%eax
0825f44d +0x09:  mov    %eax,-0xc(%ebp)
0825f450 +0x0c:  mov    -0xc(%ebp),%eax
0825f453 +0x0f:  mov    0x4(%eax),%eax
0825f456 +0x12:  test   %eax,%eax
0825f458 +0x14:  jne    0825f46f <+0x2b>
0825f45a +0x16:  movl   $0x1fd,0x4(%esp)
0825f462 +0x1e:  mov    0xc(%ebp),%eax
0825f465 +0x21:  mov    %eax,(%esp)
0825f468 +0x24:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
0825f46d +0x29:  jmp    0825f48f <+0x4b>
0825f46f +0x2b:  mov    -0xc(%ebp),%eax
0825f472 +0x2e:  mov    0x4(%eax),%eax
0825f475 +0x31:  movzbl %al,%eax
0825f478 +0x34:  mov    %eax,0x8(%esp)
0825f47c +0x38:  movl   $0x1fd,0x4(%esp)
0825f484 +0x40:  mov    0xc(%ebp),%eax
0825f487 +0x43:  mov    %eax,(%esp)
0825f48a +0x46:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0825f48f +0x4b:  leave
0825f490 +0x4c:  ret
0825f491 +0x4d:  nop
```

## 反编译 C

```c
// Dispatcher_ComboSkill::send @ 0x825f444

/* Dispatcher_ComboSkill::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ComboSkill::send(Dispatcher_ComboSkill *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1fd);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1fd,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
