# join

`_ZN15ThreadInterface4joinEv`

`ThreadInterface::join()`

| 类 | 地址 |
|---|---|
| `ThreadInterface` | `0x08630c46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08630c46  _ZN15ThreadInterface4joinEv
#           ThreadInterface::join()
# range [0x08630c46, 0x08630c78]
08630c46 +0x00:  push   %ebp
08630c47 +0x01:  mov    %esp,%ebp
08630c49 +0x03:  sub    $0x18,%esp
08630c4c +0x06:  mov    0x8(%ebp),%eax
08630c4f +0x09:  mov    0x4(%eax),%eax
08630c52 +0x0c:  movl   $0x0,0x4(%esp)
08630c5a +0x14:  mov    %eax,(%esp)
08630c5d +0x17:  call   0807e340 <_init+0xc38>
08630c62 +0x1c:  test   %eax,%eax
08630c64 +0x1e:  setne  %al
08630c67 +0x21:  test   %al,%al
08630c69 +0x23:  je     08630c72 <+0x2c>
08630c6b +0x25:  mov    $0x0,%eax
08630c70 +0x2a:  jmp    08630c77 <+0x31>
08630c72 +0x2c:  mov    $0x1,%eax
08630c77 +0x31:  leave
08630c78 +0x32:  ret
```

## 反编译 C

```c
// ThreadInterface::join @ 0x8630c46

/* ThreadInterface::join() */

bool __thiscall ThreadInterface::join(ThreadInterface *this)

{
  int iVar1;
  
  iVar1 = pthread_join(*(pthread_t *)(this + 4),(void **)0x0);
  return iVar1 == 0;
}
```
