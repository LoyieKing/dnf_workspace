# Init

`_ZN6CParty7cMember4InitEv`

`CParty::cMember::Init()`

| 类 | 地址 |
|---|---|
| `CParty::cMember` | `0x08599a28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08599a28  _ZN6CParty7cMember4InitEv
#           CParty::cMember::Init()
# range [0x08599a28, 0x08599a87]
08599a28 +0x00:  push   %ebp
08599a29 +0x01:  mov    %esp,%ebp
08599a2b +0x03:  sub    $0x18,%esp
08599a2e +0x06:  mov    0x8(%ebp),%eax
08599a31 +0x09:  movl   $0x0,(%eax)
08599a37 +0x0f:  mov    0x8(%ebp),%eax
08599a3a +0x12:  movb   $0x0,0x4(%eax)
08599a3e +0x16:  mov    0x8(%ebp),%eax
08599a41 +0x19:  movl   $0x0,0x8(%eax)
08599a48 +0x20:  mov    0x8(%ebp),%eax
08599a4b +0x23:  movb   $0xff,0xc(%eax)
08599a4f +0x27:  mov    0x8(%ebp),%eax
08599a52 +0x2a:  movb   $0xff,0xd(%eax)
08599a56 +0x2e:  mov    0x8(%ebp),%eax
08599a59 +0x31:  add    $0xe,%eax
08599a5c +0x34:  movl   $0x4,0x8(%esp)
08599a64 +0x3c:  movl   $0x0,0x4(%esp)
08599a6c +0x44:  mov    %eax,(%esp)
08599a6f +0x47:  call   0807dcc0 <_init+0x5b8>
08599a74 +0x4c:  mov    0x8(%ebp),%eax
08599a77 +0x4f:  movb   $0xff,0x12(%eax)
08599a7b +0x53:  mov    0x8(%ebp),%eax
08599a7e +0x56:  movl   $0x0,0x14(%eax)
08599a85 +0x5d:  leave
08599a86 +0x5e:  ret
08599a87 +0x5f:  nop
```

## 反编译 C

```c
// CParty::cMember::Init @ 0x8599a28

/* CParty::cMember::Init() */

void __thiscall CParty::cMember::Init(cMember *this)

{
  *(undefined4 *)this = 0;
  this[4] = (cMember)0x0;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (cMember)0xff;
  this[0xd] = (cMember)0xff;
  memset(this + 0xe,0,4);
  this[0x12] = (cMember)0xff;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}
```
