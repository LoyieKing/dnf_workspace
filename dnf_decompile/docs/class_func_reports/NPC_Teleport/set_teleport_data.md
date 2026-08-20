# set_teleport_data

`_ZN12NPC_Teleport17set_teleport_dataERK14STTeleportData`

`NPC_Teleport::set_teleport_data(STTeleportData const&)`

| 类 | 地址 |
|---|---|
| `NPC_Teleport` | `0x08284124` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284124  _ZN12NPC_Teleport17set_teleport_dataERK14STTeleportData
#           NPC_Teleport::set_teleport_data(STTeleportData const&)
# range [0x08284124, 0x08284141]
08284124 +0x00:  push   %ebp
08284125 +0x01:  mov    %esp,%ebp
08284127 +0x03:  sub    $0x8,%esp
0828412a +0x06:  mov    0xc(%ebp),%eax
0828412d +0x09:  lea    0x4(%eax),%edx
08284130 +0x0c:  mov    0x8(%ebp),%eax
08284133 +0x0f:  mov    %edx,0x4(%esp)
08284137 +0x13:  mov    %eax,(%esp)
0828413a +0x16:  call   08283d98 <_ZN8Teleport18set_party_teleportERK15stPartyTelePort>  ; Teleport::set_party_teleport(stPartyTelePort const&)
0828413f +0x1b:  leave
08284140 +0x1c:  ret
08284141 +0x1d:  nop
```

## 反编译 C

```c
// NPC_Teleport::set_teleport_data @ 0x8284124

/* NPC_Teleport::set_teleport_data(STTeleportData const&) */

void __thiscall NPC_Teleport::set_teleport_data(NPC_Teleport *this,STTeleportData *param_1)

{
  Teleport::set_party_teleport((Teleport *)this,(stPartyTelePort *)(param_1 + 4));
  return;
}
```
