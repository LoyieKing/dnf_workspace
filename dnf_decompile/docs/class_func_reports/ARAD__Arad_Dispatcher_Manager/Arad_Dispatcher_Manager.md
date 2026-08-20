# Arad_Dispatcher_Manager

`_ZN4ARAD23Arad_Dispatcher_ManagerC1Ev`

`ARAD::Arad_Dispatcher_Manager::Arad_Dispatcher_Manager()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_Manager` | `0x0818fdd4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818fdd4  _ZN4ARAD23Arad_Dispatcher_ManagerC1Ev
#           ARAD::Arad_Dispatcher_Manager::Arad_Dispatcher_Manager()
# range [0x0818fdd4, 0x0818fe31]
0818fdd4 +0x00:  push   %ebp
0818fdd5 +0x01:  mov    %esp,%ebp
0818fdd7 +0x03:  sub    $0x10,%esp
0818fdda +0x06:  movl   $0x0,-0x8(%ebp)
0818fde1 +0x0d:  jmp    0818fdf4 <+0x20>
0818fde3 +0x0f:  mov    -0x8(%ebp),%edx
0818fde6 +0x12:  mov    0x8(%ebp),%eax
0818fde9 +0x15:  movl   $0x0,(%eax,%edx,4)
0818fdf0 +0x1c:  addl   $0x1,-0x8(%ebp)
0818fdf4 +0x20:  cmpl   $0x353,-0x8(%ebp)
0818fdfb +0x27:  setle  %al
0818fdfe +0x2a:  test   %al,%al
0818fe00 +0x2c:  jne    0818fde3 <+0xf>
0818fe02 +0x2e:  movl   $0x0,-0x4(%ebp)
0818fe09 +0x35:  jmp    0818fe22 <+0x4e>
0818fe0b +0x37:  mov    -0x4(%ebp),%edx
0818fe0e +0x3a:  mov    0x8(%ebp),%eax
0818fe11 +0x3d:  add    $0x354,%edx
0818fe17 +0x43:  movl   $0x0,(%eax,%edx,4)
0818fe1e +0x4a:  addl   $0x1,-0x4(%ebp)
0818fe22 +0x4e:  cmpl   $0x353,-0x4(%ebp)
0818fe29 +0x55:  setle  %al
0818fe2c +0x58:  test   %al,%al
0818fe2e +0x5a:  jne    0818fe0b <+0x37>
0818fe30 +0x5c:  leave
0818fe31 +0x5d:  ret
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_Manager::Arad_Dispatcher_Manager @ 0x818fdd4

/* ARAD::Arad_Dispatcher_Manager::Arad_Dispatcher_Manager() */

void __thiscall
ARAD::Arad_Dispatcher_Manager::Arad_Dispatcher_Manager(Arad_Dispatcher_Manager *this)

{
  int local_c;
  int local_8;
  
  for (local_c = 0; local_c < 0x354; local_c = local_c + 1) {
    *(undefined4 *)(this + local_c * 4) = 0;
  }
  for (local_8 = 0; local_8 < 0x354; local_8 = local_8 + 1) {
    *(undefined4 *)(this + (local_8 + 0x354) * 4) = 0;
  }
  return;
}
```
