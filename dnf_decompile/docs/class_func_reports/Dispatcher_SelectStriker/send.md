# send

`_ZN24Dispatcher_SelectStriker4sendEP5CUserR9ParamBase`

`Dispatcher_SelectStriker::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SelectStriker` | `0x081e42ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e42ee  _ZN24Dispatcher_SelectStriker4sendEP5CUserR9ParamBase
#           Dispatcher_SelectStriker::send(CUser*, ParamBase&)
# range [0x081e42ee, 0x081e434b]
081e42ee +0x00:  push   %ebp
081e42ef +0x01:  mov    %esp,%ebp
081e42f1 +0x03:  sub    $0x28,%esp
081e42f4 +0x06:  mov    0x10(%ebp),%eax
081e42f7 +0x09:  mov    %eax,-0xc(%ebp)
081e42fa +0x0c:  mov    -0xc(%ebp),%eax
081e42fd +0x0f:  mov    0x4(%eax),%eax
081e4300 +0x12:  cmp    $0x7fffffff,%eax
081e4305 +0x17:  je     081e4348 <+0x5a>
081e4307 +0x19:  mov    -0xc(%ebp),%eax
081e430a +0x1c:  mov    0x4(%eax),%eax
081e430d +0x1f:  test   %eax,%eax
081e430f +0x21:  jne    081e4326 <+0x38>
081e4311 +0x23:  movl   $0x1e8,0x4(%esp)
081e4319 +0x2b:  mov    0xc(%ebp),%eax
081e431c +0x2e:  mov    %eax,(%esp)
081e431f +0x31:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081e4324 +0x36:  jmp    081e4349 <+0x5b>
081e4326 +0x38:  mov    -0xc(%ebp),%eax
081e4329 +0x3b:  mov    0x4(%eax),%eax
081e432c +0x3e:  movzbl %al,%eax
081e432f +0x41:  mov    %eax,0x8(%esp)
081e4333 +0x45:  movl   $0x1e8,0x4(%esp)
081e433b +0x4d:  mov    0xc(%ebp),%eax
081e433e +0x50:  mov    %eax,(%esp)
081e4341 +0x53:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e4346 +0x58:  jmp    081e4349 <+0x5b>
081e4348 +0x5a:  nop
081e4349 +0x5b:  leave
081e434a +0x5c:  ret
081e434b +0x5d:  nop
```

## 反编译 C

```c
// Dispatcher_SelectStriker::send @ 0x81e42ee

/* Dispatcher_SelectStriker::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_SelectStriker::send(Dispatcher_SelectStriker *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0x7fffffff) {
    if (*(int *)(param_2 + 4) == 0) {
      CUser::SendCmdOkPacket(param_1,0x1e8);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x1e8,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}
```
