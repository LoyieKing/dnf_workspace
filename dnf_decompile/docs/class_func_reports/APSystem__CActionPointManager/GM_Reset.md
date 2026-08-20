# GM_Reset

`_ZN8APSystem19CActionPointManager8GM_ResetEv`

`APSystem::CActionPointManager::GM_Reset()`

| 类 | 地址 |
|---|---|
| `APSystem::CActionPointManager` | `0x08121d12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08121d12  _ZN8APSystem19CActionPointManager8GM_ResetEv
#           APSystem::CActionPointManager::GM_Reset()
# range [0x08121d12, 0x08121dcb]
08121d12 +0x00:  push   %ebp
08121d13 +0x01:  mov    %esp,%ebp
08121d15 +0x03:  sub    $0x28,%esp
08121d18 +0x06:  mov    0x8(%ebp),%eax
08121d1b +0x09:  movb   $0x1,(%eax)
08121d1e +0x0c:  mov    0x8(%ebp),%eax
08121d21 +0x0f:  add    $0x11,%eax
08121d24 +0x12:  movl   $0x4,0x8(%esp)
08121d2c +0x1a:  movl   $0x0,0x4(%esp)
08121d34 +0x22:  mov    %eax,(%esp)
08121d37 +0x25:  call   0807dcc0 <_init+0x5b8>
08121d3c +0x2a:  mov    0x8(%ebp),%eax
08121d3f +0x2d:  movb   $0x0,0x10(%eax)
08121d43 +0x31:  mov    0x8(%ebp),%eax
08121d46 +0x34:  movl   $0x0,0xc(%eax)
08121d4d +0x3b:  mov    0x8(%ebp),%eax
08121d50 +0x3e:  movl   $0x0,0x4(%eax)
08121d57 +0x45:  movl   $0x0,-0x14(%ebp)
08121d5e +0x4c:  jmp    08121dbb <+0xa9>
08121d60 +0x4e:  mov    -0x14(%ebp),%edx
08121d63 +0x51:  mov    %edx,%eax
08121d65 +0x53:  shl    $0x2,%eax
08121d68 +0x56:  add    %edx,%eax
08121d6a +0x58:  add    %eax,%eax
08121d6c +0x5a:  add    %edx,%eax
08121d6e +0x5c:  add    0x8(%ebp),%eax
08121d71 +0x5f:  add    $0x15,%eax
08121d74 +0x62:  mov    %eax,-0x10(%ebp)
08121d77 +0x65:  movl   $0x0,-0xc(%ebp)
08121d7e +0x6c:  jmp    08121dac <+0x9a>
08121d80 +0x6e:  mov    -0xc(%ebp),%eax
08121d83 +0x71:  mov    -0x10(%ebp),%edx
08121d86 +0x74:  movzbl 0x6(%edx,%eax,1),%eax
08121d8b +0x79:  test   %al,%al
08121d8d +0x7b:  jle    08121da8 <+0x96>
08121d8f +0x7d:  mov    -0xc(%ebp),%eax
08121d92 +0x80:  mov    -0xc(%ebp),%edx
08121d95 +0x83:  mov    -0x10(%ebp),%ecx
08121d98 +0x86:  movzbl 0x6(%ecx,%edx,1),%edx
08121d9d +0x8b:  mov    %edx,%ecx
08121d9f +0x8d:  neg    %ecx
08121da1 +0x8f:  mov    -0x10(%ebp),%edx
08121da4 +0x92:  mov    %cl,0x6(%edx,%eax,1)
08121da8 +0x96:  addl   $0x1,-0xc(%ebp)
08121dac +0x9a:  cmpl   $0x4,-0xc(%ebp)
08121db0 +0x9e:  setle  %al
08121db3 +0xa1:  test   %al,%al
08121db5 +0xa3:  jne    08121d80 <+0x6e>
08121db7 +0xa5:  addl   $0x1,-0x14(%ebp)
08121dbb +0xa9:  cmpl   $0x12b,-0x14(%ebp)
08121dc2 +0xb0:  setle  %al
08121dc5 +0xb3:  test   %al,%al
08121dc7 +0xb5:  jne    08121d60 <+0x4e>
08121dc9 +0xb7:  leave
08121dca +0xb8:  ret
08121dcb +0xb9:  nop
```

## 反编译 C

```c
// APSystem::CActionPointManager::GM_Reset @ 0x8121d12

/* APSystem::CActionPointManager::GM_Reset() */

void __thiscall APSystem::CActionPointManager::GM_Reset(CActionPointManager *this)

{
  int local_18;
  int local_10;
  
  *this = (CActionPointManager)0x1;
  memset(this + 0x11,0,4);
  this[0x10] = (CActionPointManager)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 4) = 0;
  for (local_18 = 0; local_18 < 300; local_18 = local_18 + 1) {
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      if ('\0' < (char)this[local_10 + local_18 * 0xb + 0x1b]) {
        this[local_10 + local_18 * 0xb + 0x1b] =
             (CActionPointManager)-(char)this[local_10 + local_18 * 0xb + 0x1b];
      }
    }
  }
  return;
}
```
