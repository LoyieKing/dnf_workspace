# set_party_teleport

`_ZN8Teleport18set_party_teleportERK15stPartyTelePort`

`Teleport::set_party_teleport(stPartyTelePort const&)`

| 类 | 地址 |
|---|---|
| `Teleport` | `0x08283d98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08283d98  _ZN8Teleport18set_party_teleportERK15stPartyTelePort
#           Teleport::set_party_teleport(stPartyTelePort const&)
# range [0x08283d98, 0x08283db5]
08283d98 +0x00:  push   %ebp
08283d99 +0x01:  mov    %esp,%ebp
08283d9b +0x03:  mov    0x8(%ebp),%eax
08283d9e +0x06:  mov    0xc(%ebp),%edx
08283da1 +0x09:  mov    (%edx),%ecx
08283da3 +0x0b:  mov    %ecx,0x4(%eax)
08283da6 +0x0e:  mov    0x4(%edx),%ecx
08283da9 +0x11:  mov    %ecx,0x8(%eax)
08283dac +0x14:  movzwl 0x8(%edx),%edx
08283db0 +0x18:  mov    %dx,0xc(%eax)
08283db4 +0x1c:  pop    %ebp
08283db5 +0x1d:  ret
```

## 反编译 C

```c
// Teleport::set_party_teleport @ 0x8283d98

/* Teleport::set_party_teleport(stPartyTelePort const&) */

void __thiscall Teleport::set_party_teleport(Teleport *this,stPartyTelePort *param_1)

{
  *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 4);
  *(undefined2 *)(this + 0xc) = *(undefined2 *)(param_1 + 8);
  return;
}
```
