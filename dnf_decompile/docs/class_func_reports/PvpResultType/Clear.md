# Clear

`_ZN13PvpResultType5ClearEv`

`PvpResultType::Clear()`

| 类 | 地址 |
|---|---|
| `PvpResultType` | `0x085d5dc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d5dc0  _ZN13PvpResultType5ClearEv
#           PvpResultType::Clear()
# range [0x085d5dc0, 0x085d5efd]
085d5dc0 +0x000:  push   %ebp
085d5dc1 +0x001:  mov    %esp,%ebp
085d5dc3 +0x003:  mov    0x8(%ebp),%eax
085d5dc6 +0x006:  movl   $0x0,(%eax)
085d5dcc +0x00c:  mov    0x8(%ebp),%eax
085d5dcf +0x00f:  movl   $0x0,0x4(%eax)
085d5dd6 +0x016:  mov    0x8(%ebp),%eax
085d5dd9 +0x019:  movl   $0x0,0x8(%eax)
085d5de0 +0x020:  mov    0x8(%ebp),%eax
085d5de3 +0x023:  movl   $0x0,0x14(%eax)
085d5dea +0x02a:  mov    0x8(%ebp),%eax
085d5ded +0x02d:  movl   $0xffffffff,0x10(%eax)
085d5df4 +0x034:  mov    0x8(%ebp),%eax
085d5df7 +0x037:  movl   $0x0,0x18(%eax)
085d5dfe +0x03e:  mov    0x8(%ebp),%eax
085d5e01 +0x041:  movl   $0x0,0x1c(%eax)
085d5e08 +0x048:  mov    0x8(%ebp),%eax
085d5e0b +0x04b:  movl   $0x0,0x20(%eax)
085d5e12 +0x052:  mov    0x8(%ebp),%eax
085d5e15 +0x055:  movl   $0x0,0x24(%eax)
085d5e1c +0x05c:  mov    0x8(%ebp),%eax
085d5e1f +0x05f:  movl   $0x0,0x28(%eax)
085d5e26 +0x066:  mov    0x8(%ebp),%eax
085d5e29 +0x069:  movl   $0x0,0x2c(%eax)
085d5e30 +0x070:  mov    0x8(%ebp),%eax
085d5e33 +0x073:  movl   $0x0,0x30(%eax)
085d5e3a +0x07a:  mov    0x8(%ebp),%eax
085d5e3d +0x07d:  movl   $0x0,0x34(%eax)
085d5e44 +0x084:  mov    0x8(%ebp),%eax
085d5e47 +0x087:  movl   $0x0,0x38(%eax)
085d5e4e +0x08e:  mov    0x8(%ebp),%eax
085d5e51 +0x091:  movl   $0x0,0x3c(%eax)
085d5e58 +0x098:  mov    0x8(%ebp),%eax
085d5e5b +0x09b:  movl   $0x0,0x40(%eax)
085d5e62 +0x0a2:  mov    0x8(%ebp),%eax
085d5e65 +0x0a5:  movl   $0x0,0x44(%eax)
085d5e6c +0x0ac:  mov    0x8(%ebp),%eax
085d5e6f +0x0af:  movl   $0x0,0x48(%eax)
085d5e76 +0x0b6:  mov    0x8(%ebp),%eax
085d5e79 +0x0b9:  movl   $0x0,0x4c(%eax)
085d5e80 +0x0c0:  mov    0x8(%ebp),%eax
085d5e83 +0x0c3:  movl   $0x0,0x50(%eax)
085d5e8a +0x0ca:  mov    0x8(%ebp),%eax
085d5e8d +0x0cd:  movl   $0x0,0x54(%eax)
085d5e94 +0x0d4:  mov    0x8(%ebp),%eax
085d5e97 +0x0d7:  movl   $0x0,0x58(%eax)
085d5e9e +0x0de:  mov    0x8(%ebp),%eax
085d5ea1 +0x0e1:  movl   $0x0,0x5c(%eax)
085d5ea8 +0x0e8:  mov    0x8(%ebp),%eax
085d5eab +0x0eb:  movl   $0x0,0x6c(%eax)
085d5eb2 +0x0f2:  mov    0x8(%ebp),%eax
085d5eb5 +0x0f5:  movl   $0x0,0x70(%eax)
085d5ebc +0x0fc:  mov    0x8(%ebp),%eax
085d5ebf +0x0ff:  movl   $0x0,0x74(%eax)
085d5ec6 +0x106:  mov    0x8(%ebp),%eax
085d5ec9 +0x109:  movl   $0x0,0x78(%eax)
085d5ed0 +0x110:  mov    0x8(%ebp),%eax
085d5ed3 +0x113:  movl   $0x0,0x60(%eax)
085d5eda +0x11a:  mov    0x8(%ebp),%eax
085d5edd +0x11d:  movl   $0x0,0x64(%eax)
085d5ee4 +0x124:  mov    0x8(%ebp),%eax
085d5ee7 +0x127:  movl   $0x0,0x7c(%eax)
085d5eee +0x12e:  mov    0x8(%ebp),%eax
085d5ef1 +0x131:  movl   $0x0,0x80(%eax)
085d5efb +0x13b:  pop    %ebp
085d5efc +0x13c:  ret
085d5efd +0x13d:  nop
```

## 反编译 C

```c
// PvpResultType::Clear @ 0x85d5dc0

/* PvpResultType::Clear() */

void __thiscall PvpResultType::Clear(PvpResultType *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  return;
}
```
