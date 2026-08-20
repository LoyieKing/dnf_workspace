# IsRightMaterial

`_ZN10expert_job10CEnchanter15IsRightMaterialEv`

`expert_job::CEnchanter::IsRightMaterial()`

| 类 | 地址 |
|---|---|
| `expert_job::CEnchanter` | `0x0849c9b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849c9b2  _ZN10expert_job10CEnchanter15IsRightMaterialEv
#           expert_job::CEnchanter::IsRightMaterial()
# range [0x0849c9b2, 0x0849ca05]
0849c9b2 +0x00:  push   %ebp
0849c9b3 +0x01:  mov    %esp,%ebp
0849c9b5 +0x03:  sub    $0x28,%esp
0849c9b8 +0x06:  movl   $0x0,-0x10(%ebp)
0849c9bf +0x0d:  jmp    0849c9f3 <+0x41>
0849c9c1 +0x0f:  movl   $0x0,-0xc(%ebp)
0849c9c8 +0x16:  mov    -0x10(%ebp),%eax
0849c9cb +0x19:  shl    $0x4,%eax
0849c9ce +0x1c:  add    0x8(%ebp),%eax
0849c9d1 +0x1f:  add    $0x8,%eax
0849c9d4 +0x22:  mov    %eax,(%esp)
0849c9d7 +0x25:  call   0849c06e <_ZN10expert_job17ExpertJobMaterial7IsRightEv>  ; expert_job::ExpertJobMaterial::IsRight()
0849c9dc +0x2a:  mov    %eax,-0xc(%ebp)
0849c9df +0x2d:  cmpl   $0x0,-0xc(%ebp)
0849c9e3 +0x31:  setne  %al
0849c9e6 +0x34:  test   %al,%al
0849c9e8 +0x36:  je     0849c9ef <+0x3d>
0849c9ea +0x38:  mov    -0xc(%ebp),%eax
0849c9ed +0x3b:  jmp    0849ca03 <+0x51>
0849c9ef +0x3d:  addl   $0x1,-0x10(%ebp)
0849c9f3 +0x41:  cmpl   $0x1,-0x10(%ebp)
0849c9f7 +0x45:  setle  %al
0849c9fa +0x48:  test   %al,%al
0849c9fc +0x4a:  jne    0849c9c1 <+0xf>
0849c9fe +0x4c:  mov    $0x0,%eax
0849ca03 +0x51:  leave
0849ca04 +0x52:  ret
0849ca05 +0x53:  nop
```

## 反编译 C

```c
// expert_job::CEnchanter::IsRightMaterial @ 0x849c9b2

/* expert_job::CEnchanter::IsRightMaterial() */

int __thiscall expert_job::CEnchanter::IsRightMaterial(CEnchanter *this)

{
  int iVar1;
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (1 < local_14) {
      return 0;
    }
    iVar1 = ExpertJobMaterial::IsRight((ExpertJobMaterial *)(this + local_14 * 0x10 + 8));
    if (iVar1 != 0) break;
    local_14 = local_14 + 1;
  }
  return iVar1;
}
```
