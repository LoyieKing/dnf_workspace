# send

`_ZN27Dispatcher_ChangeLetterStat4sendEP5CUserR9ParamBase`

`Dispatcher_ChangeLetterStat::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeLetterStat` | `0x081ce304` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce304  _ZN27Dispatcher_ChangeLetterStat4sendEP5CUserR9ParamBase
#           Dispatcher_ChangeLetterStat::send(CUser*, ParamBase&)
# range [0x081ce304, 0x081ce34b]
081ce304 +0x00:  push   %ebp
081ce305 +0x01:  mov    %esp,%ebp
081ce307 +0x03:  sub    $0x28,%esp
081ce30a +0x06:  mov    0x10(%ebp),%eax
081ce30d +0x09:  mov    %eax,-0xc(%ebp)
081ce310 +0x0c:  mov    -0xc(%ebp),%eax
081ce313 +0x0f:  mov    0x4(%eax),%eax
081ce316 +0x12:  cmp    $0x7fffffff,%eax
081ce31b +0x17:  je     081ce349 <+0x45>
081ce31d +0x19:  mov    -0xc(%ebp),%eax
081ce320 +0x1c:  mov    0x4(%eax),%eax
081ce323 +0x1f:  test   %eax,%eax
081ce325 +0x21:  je     081ce34a <+0x46>
081ce327 +0x23:  mov    -0xc(%ebp),%eax
081ce32a +0x26:  mov    0x4(%eax),%eax
081ce32d +0x29:  movzbl %al,%eax
081ce330 +0x2c:  mov    %eax,0x8(%esp)
081ce334 +0x30:  movl   $0x89,0x4(%esp)
081ce33c +0x38:  mov    0xc(%ebp),%eax
081ce33f +0x3b:  mov    %eax,(%esp)
081ce342 +0x3e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081ce347 +0x43:  jmp    081ce34a <+0x46>
081ce349 +0x45:  nop
081ce34a +0x46:  leave
081ce34b +0x47:  ret
```

## 反编译 C

```c
// Dispatcher_ChangeLetterStat::send @ 0x81ce304

/* Dispatcher_ChangeLetterStat::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ChangeLetterStat::send
          (Dispatcher_ChangeLetterStat *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0x89,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
