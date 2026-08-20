# HaveCpuId

`_ZN8TaoCrypt9HaveCpuIdEv`

`TaoCrypt::HaveCpuId()`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x087675a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087675a0  _ZN8TaoCrypt9HaveCpuIdEv
#           TaoCrypt::HaveCpuId()
# range [0x087675a0, 0x087675ba]
087675a0 +0x00:  push   %ebp
087675a1 +0x01:  mov    %esp,%ebp
087675a3 +0x03:  pushf
087675a4 +0x04:  pushf
087675a5 +0x05:  pop    %edx
087675a6 +0x06:  mov    %edx,%eax
087675a8 +0x08:  xor    $0x200000,%edx
087675ae +0x0e:  push   %edx
087675af +0x0f:  popf
087675b0 +0x10:  pushf
087675b1 +0x11:  pop    %edx
087675b2 +0x12:  popf
087675b3 +0x13:  cmp    %eax,%edx
087675b5 +0x15:  setne  %al
087675b8 +0x18:  pop    %ebp
087675b9 +0x19:  ret
087675ba +0x1a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::HaveCpuId @ 0x87675a0

/* TaoCrypt::HaveCpuId() */

undefined4 TaoCrypt::HaveCpuId(void)

{
  uint uVar1;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar2;
  
  uVar2 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
          (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
          (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1) |
          (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
          (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  uVar1 = uVar2 ^ 0x200000;
  return CONCAT31((int3)(uVar2 >> 8),
                  ((uint)((uVar1 & 0x4000) != 0) * 0x4000 | (uint)((uVar1 & 0x800) != 0) * 0x800 |
                   (uint)((uVar1 & 0x200) != 0) * 0x200 | (uint)((uVar1 & 0x100) != 0) * 0x100 |
                   (uint)((uVar1 & 0x80) != 0) * 0x80 | (uint)((uVar1 & 0x40) != 0) * 0x40 |
                   (uint)((uVar1 & 0x10) != 0) * 0x10 | (uint)((uVar1 & 4) != 0) * 4 |
                   (uint)((uVar1 & 1) != 0) | (uint)((uVar1 & 0x200000) != 0) * 0x200000 |
                  (uint)((uVar1 & 0x40000) != 0) * 0x40000) != uVar2);
}
```
