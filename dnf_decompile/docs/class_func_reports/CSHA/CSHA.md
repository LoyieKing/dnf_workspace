# CSHA

`_ZN4CSHAC1Ev`

`CSHA::CSHA()`

| 类 | 地址 |
|---|---|
| `CSHA` | `0x080bb69c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080bb69c  _ZN4CSHAC1Ev
#           CSHA::CSHA()
# range [0x080bb69c, 0x080bb707]
080bb69c +0x00:  push   %ebp
080bb69d +0x01:  mov    %esp,%ebp
080bb69f +0x03:  sub    $0x28,%esp
080bb6a2 +0x06:  movl   $0x0,-0xc(%ebp)
080bb6a9 +0x0d:  jmp    080bb6c2 <+0x26>
080bb6ab +0x0f:  mov    -0xc(%ebp),%edx
080bb6ae +0x12:  mov    -0xc(%ebp),%eax
080bb6b1 +0x15:  mov    &_ZN4CSHA7sm_H256E(,%eax,4),%ecx
080bb6b8 +0x1c:  mov    0x8(%ebp),%eax
080bb6bb +0x1f:  mov    %ecx,(%eax,%edx,4)
080bb6be +0x22:  addl   $0x1,-0xc(%ebp)
080bb6c2 +0x26:  cmpl   $0x7,-0xc(%ebp)
080bb6c6 +0x2a:  setle  %al
080bb6c9 +0x2d:  test   %al,%al
080bb6cb +0x2f:  jne    080bb6ab <+0xf>
080bb6cd +0x31:  mov    0x8(%ebp),%eax
080bb6d0 +0x34:  movl   $0x0,0x20(%eax)
080bb6d7 +0x3b:  mov    0x8(%ebp),%eax
080bb6da +0x3e:  movl   $0x0,0x24(%eax)
080bb6e1 +0x45:  mov    0x8(%ebp),%eax
080bb6e4 +0x48:  add    $0x28,%eax
080bb6e7 +0x4b:  movl   $0x40,0x8(%esp)
080bb6ef +0x53:  movl   $0x0,0x4(%esp)
080bb6f7 +0x5b:  mov    %eax,(%esp)
080bb6fa +0x5e:  call   0807dcc0 <_init+0x5b8>
080bb6ff +0x63:  mov    0x8(%ebp),%eax
080bb702 +0x66:  movb   $0x0,0x68(%eax)
080bb706 +0x6a:  leave
080bb707 +0x6b:  ret
```

## 反编译 C

```c
// CSHA::CSHA @ 0x80bb69c

/* CSHA::CSHA() */

void __thiscall CSHA::CSHA(CSHA *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    *(undefined4 *)(this + local_10 * 4) = *(undefined4 *)(sm_H256 + local_10 * 4);
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  memset(this + 0x28,0,0x40);
  this[0x68] = (CSHA)0x0;
  return;
}
```
