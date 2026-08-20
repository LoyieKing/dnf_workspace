# send

`_ZN42Dispatcher_SaveGameOption_ChattingEmoticon4sendEP5CUserR9ParamBase`

`Dispatcher_SaveGameOption_ChattingEmoticon::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SaveGameOption_ChattingEmoticon` | `0x081cf71e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cf71e  _ZN42Dispatcher_SaveGameOption_ChattingEmoticon4sendEP5CUserR9ParamBase
#           Dispatcher_SaveGameOption_ChattingEmoticon::send(CUser*, ParamBase&)
# range [0x081cf71e, 0x081cf74f]
081cf71e +0x00:  push   %ebp
081cf71f +0x01:  mov    %esp,%ebp
081cf721 +0x03:  sub    $0x18,%esp
081cf724 +0x06:  movl   $0x1d9,0x4(%esp)
081cf72c +0x0e:  mov    0xc(%ebp),%eax
081cf72f +0x11:  mov    %eax,(%esp)
081cf732 +0x14:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081cf737 +0x19:  mov    0xc(%ebp),%eax
081cf73a +0x1c:  mov    %eax,(%esp)
081cf73d +0x1f:  call   08689a22 <_ZN5CUser22ReCalcChattingEmoticonEv>  ; CUser::ReCalcChattingEmoticon()
081cf742 +0x24:  mov    0xc(%ebp),%eax
081cf745 +0x27:  mov    %eax,(%esp)
081cf748 +0x2a:  call   08689b90 <_ZN5CUser20SendChattingEmoticonEv>  ; CUser::SendChattingEmoticon()
081cf74d +0x2f:  leave
081cf74e +0x30:  ret
081cf74f +0x31:  nop
```

## 反编译 C

```c
// Dispatcher_SaveGameOption_ChattingEmoticon::send @ 0x81cf71e

/* Dispatcher_SaveGameOption_ChattingEmoticon::send(CUser*, ParamBase&) */

void Dispatcher_SaveGameOption_ChattingEmoticon::send(CUser *param_1,ParamBase *param_2)

{
  CUser::SendCmdOkPacket((CUser *)param_2,0x1d9);
  CUser::ReCalcChattingEmoticon((CUser *)param_2);
  CUser::SendChattingEmoticon((CUser *)param_2);
  return;
}
```
