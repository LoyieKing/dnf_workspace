# Reset

`_ZN4CSHA5ResetEv`

`CSHA::Reset()`

| 类 | 地址 |
|---|---|
| `CSHA` | `0x080bb996` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080bb996  _ZN4CSHA5ResetEv
#           CSHA::Reset()
# range [0x080bb996, 0x080bb9e3]
080bb996 +0x00:  push   %ebp
080bb997 +0x01:  mov    %esp,%ebp
080bb999 +0x03:  sub    $0x10,%esp
080bb99c +0x06:  movl   $0x0,-0x4(%ebp)
080bb9a3 +0x0d:  jmp    080bb9bc <+0x26>
080bb9a5 +0x0f:  mov    -0x4(%ebp),%edx
080bb9a8 +0x12:  mov    -0x4(%ebp),%eax
080bb9ab +0x15:  mov    &_ZN4CSHA7sm_H256E(,%eax,4),%ecx
080bb9b2 +0x1c:  mov    0x8(%ebp),%eax
080bb9b5 +0x1f:  mov    %ecx,(%eax,%edx,4)
080bb9b8 +0x22:  addl   $0x1,-0x4(%ebp)
080bb9bc +0x26:  cmpl   $0x7,-0x4(%ebp)
080bb9c0 +0x2a:  setle  %al
080bb9c3 +0x2d:  test   %al,%al
080bb9c5 +0x2f:  jne    080bb9a5 <+0xf>
080bb9c7 +0x31:  mov    0x8(%ebp),%eax
080bb9ca +0x34:  movl   $0x0,0x20(%eax)
080bb9d1 +0x3b:  mov    0x8(%ebp),%eax
080bb9d4 +0x3e:  movl   $0x0,0x24(%eax)
080bb9db +0x45:  mov    0x8(%ebp),%eax
080bb9de +0x48:  movb   $0x0,0x68(%eax)
080bb9e2 +0x4c:  leave
080bb9e3 +0x4d:  ret
```

## 反编译 C

```c
// CSHA::Reset @ 0x80bb996

/* CSHA::Reset() */

void __thiscall CSHA::Reset(CSHA *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    *(undefined4 *)(this + local_8 * 4) = *(undefined4 *)(sm_H256 + local_8 * 4);
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x68] = (CSHA)0x0;
  return;
}
```
