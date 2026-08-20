# send_init_data

`_ZN13EventClassify12CEventEntity14send_init_dataEP5CUserR11PacketGuardshb`

`EventClassify::CEventEntity::send_init_data(CUser*, PacketGuard&, short, unsigned char, bool)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventEntity` | `0x0810b0ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b0ac  _ZN13EventClassify12CEventEntity14send_init_dataEP5CUserR11PacketGuardshb
#           EventClassify::CEventEntity::send_init_data(CUser*, PacketGuard&, short, unsigned char, bool)
# range [0x0810b0ac, 0x0810b0cb]
0810b0ac +0x00:  push   %ebp
0810b0ad +0x01:  mov    %esp,%ebp
0810b0af +0x03:  sub    $0xc,%esp
0810b0b2 +0x06:  mov    0x14(%ebp),%ecx
0810b0b5 +0x09:  mov    0x18(%ebp),%edx
0810b0b8 +0x0c:  mov    0x1c(%ebp),%eax
0810b0bb +0x0f:  mov    %cx,-0x4(%ebp)
0810b0bf +0x13:  mov    %dl,-0x8(%ebp)
0810b0c2 +0x16:  mov    %al,-0xc(%ebp)
0810b0c5 +0x19:  mov    $0x0,%eax
0810b0ca +0x1e:  leave
0810b0cb +0x1f:  ret
```

## 反编译 C

```c
// EventClassify::CEventEntity::send_init_data @ 0x810b0ac

/* EventClassify::CEventEntity::send_init_data(CUser*, PacketGuard&, short, unsigned char, bool) */

undefined4
EventClassify::CEventEntity::send_init_data
          (CUser *param_1,PacketGuard *param_2,short param_3,uchar param_4,bool param_5)

{
  return 0;
}
```
