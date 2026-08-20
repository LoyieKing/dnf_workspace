# select

`_ZN5MySQL6selectEv`

`MySQL::select()`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f4630` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f4630  _ZN5MySQL6selectEv
#           MySQL::select()
# range [0x083f4630, 0x083f4677]
083f4630 +0x00:  push   %ebp
083f4631 +0x01:  mov    %esp,%ebp
083f4633 +0x03:  sub    $0x18,%esp
083f4636 +0x06:  mov    0x8(%ebp),%eax
083f4639 +0x09:  mov    %eax,(%esp)
083f463c +0x0c:  call   083f4782 <_ZN5MySQL9set_queryEv>  ; MySQL::set_query()
083f4641 +0x11:  xor    $0x1,%eax
083f4644 +0x14:  test   %al,%al
083f4646 +0x16:  je     083f464f <+0x1f>
083f4648 +0x18:  mov    $0x3,%eax
083f464d +0x1d:  jmp    083f4675 <+0x45>
083f464f +0x1f:  movl   $0x1,0x4(%esp)
083f4657 +0x27:  mov    0x8(%ebp),%eax
083f465a +0x2a:  mov    %eax,(%esp)
083f465d +0x2d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083f4662 +0x32:  xor    $0x1,%eax
083f4665 +0x35:  test   %al,%al
083f4667 +0x37:  je     083f4670 <+0x40>
083f4669 +0x39:  mov    $0x1,%eax
083f466e +0x3e:  jmp    083f4675 <+0x45>
083f4670 +0x40:  mov    $0x0,%eax
083f4675 +0x45:  leave
083f4676 +0x46:  ret
083f4677 +0x47:  nop
```

## 反编译 C

```c
// MySQL::select @ 0x83f4630

/* MySQL::select() */

undefined4 __thiscall MySQL::select(MySQL *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = set_query(this);
  if (cVar1 == '\x01') {
    cVar1 = exec(this,true);
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}
```
